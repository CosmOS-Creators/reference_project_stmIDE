#run from the reference project root

cmake -S . -B Cosmos/generated/build/tests
cd /mnt/c/GIT/STM32/reference_project_stmIDE/Cosmos/generated/build/tests && make -j32
ctest -V
