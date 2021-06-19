FROM frolvlad/alpine-glibc:latest

ARG ALPINE_ARM_NONE_EABI_BASE_URL="https://developer.arm.com/-/media/Files/downloads/gnu-rm"
ARG ALPINE_ARM_NONE_EABI_PACKAGE_DATE="10-2020q4"
ARG ALPINE_ARM_NONE_EABI_PACKAGE_VERSION="10-2020-q4-major"
ARG ALPINE_ARM_NONE_EABI_PACKAGE_NAME="gcc-arm-none-eabi-$ALPINE_ARM_NONE_EABI_PACKAGE_VERSION"
ARG ALPINE_ARM_NONE_EABI_PACKAGE_FILENAME="$ALPINE_ARM_NONE_EABI_PACKAGE_NAME-x86_64-linux.tar.bz2"

RUN apk add --no-cache git openssh tar gzip ca-certificates make git python3 py3-pip make wget openssl gcc g++ cmake && \
	apk add --no-cache lcov --repository http://dl-3.alpinelinux.org/alpine/edge/testing/ --allow-untrusted && \
    wget "$ALPINE_ARM_NONE_EABI_BASE_URL/$ALPINE_ARM_NONE_EABI_PACKAGE_DATE/$ALPINE_ARM_NONE_EABI_PACKAGE_FILENAME" && \
    mkdir /toolchain && \
    tar xvf "$ALPINE_ARM_NONE_EABI_PACKAGE_FILENAME" -C /toolchain && \
    rm "$ALPINE_ARM_NONE_EABI_PACKAGE_FILENAME" && \
    rm -rf "/toolchain/$ALPINE_ARM_NONE_EABI_PACKAGE_NAME/share/doc"

ENV PATH="/toolchain/$ALPINE_ARM_NONE_EABI_PACKAGE_NAME/bin:${PATH}"
