cd .. && cmake -G "Unix Makefiles" -S . -B ../generated/build/tests -DBUILD_TESTS=1
cd ../generated/build/tests && make -j32 CPPUTEST_USE_GCOV=Y
ctest -V
find . -type d -wholename "*/__/__/__/src*" > tmp.txt
args="--capture"
while IFS= read -r line; do
    args+=" --directory $line"
done < tmp.txt
rm tmp.txt
args+=" --output-file results/coverage/coverage.info"
mkdir results
mkdir results/coverage
lcov ${args}
genhtml results/coverage/coverage.info --output-directory results/coverage --rc genhtml_branch_coverage=1
