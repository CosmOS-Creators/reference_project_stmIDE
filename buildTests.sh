cmake -S . -B buildLinux
cmake --build buildLinux
cd buildLinux && ctest --output-on-failure
cd ..