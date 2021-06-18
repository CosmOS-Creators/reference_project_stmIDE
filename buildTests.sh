cmake -S . -B Cosmos/generated/build/tests
cd Cosmos/generated/build/tests && make -j32 CPPUTEST_USE_GCOV=Y
ctest -V
find . -type d -wholename "*/__/__/__/src*" > tmp.txt
args="--capture"
while IFS= read -r line; do
    args+=" --directory $line"
done < tmp.txt
rm tmp.txt
args+=" --output-file coverage.info"
lcov ${args}
genhtml coverage.info --output-directory coverage --rc genhtml_branch_coverage=1
