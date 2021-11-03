cd .. && cmake -G "Unix Makefiles" -DCMAKE_TOOLCHAIN_FILE=arm-none-eabi-gcc.cmake -DCMAKE_BUILD_TYPE=Debug -B ../generated/build/system
cd ../generated/build/system && make -j32