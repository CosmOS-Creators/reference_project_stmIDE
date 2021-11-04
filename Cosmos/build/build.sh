args=$(getopt -l "build:" -o "b:h" -- "$@")

eval set -- "$args"

while [ $# -ge 1 ]; do
        case "$1" in
                --)
                    shift
                    break
                   ;;
                -b|--build)
                        build="$2"
                        shift
                        ;;
                -h)
                        echo "Define the build type with -b/--build option either as SYSTEM build or TESTS build"
                        exit 0
                        ;;
        esac

        shift
done

if [ $build == "TESTS" ]
then
    cmake -G "Unix Makefiles" -S . -B ../generated/build/tests -DBUILD_TESTS=1
    cd ../generated/build/tests && make -j32 CPPUTEST_USE_GCOV=Y
    cd tests && ctest -V
    find . -type d -wholename "*/__/__/__/src*" > tmp.txt
    args="--capture"
    while IFS= read -r line; do
        args+=" --directory $line"
    done < tmp.txt
    rm tmp.txt
    args+=" --output-file coverage/coverage.info"
    mkdir -p coverage
    lcov ${args}
    genhtml coverage/coverage.info --output-directory coverage --rc genhtml_branch_coverage=1
    mkdir -p results
    find . -type f -name \*.xml > tmp.txt
    while IFS= read -r line; do
        cp -v $line results
    done < tmp.txt
    rm tmp.txt
elif [ $build == "SYSTEM" ]
then
    cmake -G "Unix Makefiles" -DCMAKE_TOOLCHAIN_FILE=toolchain/arm-none-eabi-gcc.cmake -DCMAKE_BUILD_TYPE=Debug -B ../generated/build/system -DBUILD_SYSTEM=1
    cd ../generated/build/system && make -j32
else
    echo "Please define the build type with -b/--build option either as SYSTEM build or TESTS build"
fi