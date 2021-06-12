FROM frolvlad/alpine-glibc

ARG ALPINE_ARM_NONE_EABI_BASE_URL="https://developer.arm.com/-/media/Files/downloads/gnu-rm"
ARG ALPINE_ARM_NONE_EABI_PACKAGE_DATE="7-2018q2"
ARG ALPINE_ARM_NONE_EABI_PACKAGE_VERSION="7-2018-q2-update"
ARG ALPINE_ARM_NONE_EABI_PACKAGE_NAME="gcc-arm-none-eabi-$ALPINE_ARM_NONE_EABI_PACKAGE_VERSION"
ARG ALPINE_ARM_NONE_EABI_PACKAGE_FILENAME="$ALPINE_ARM_NONE_EABI_PACKAGE_NAME-linux.tar.bz2"

RUN apk add --no-cache git openssh tar gzip ca-certificates make git python3 py3-pip make wget openssl && \
    wget "$ALPINE_ARM_NONE_EABI_BASE_URL/$ALPINE_ARM_NONE_EABI_PACKAGE_DATE/$ALPINE_ARM_NONE_EABI_PACKAGE_FILENAME" && \
    mkdir /toolchain && \
    tar xvf "$ALPINE_ARM_NONE_EABI_PACKAGE_FILENAME" -C /toolchain && \
    rm "$ALPINE_ARM_NONE_EABI_PACKAGE_FILENAME" && \
    rm -rf "/toolchain/$ALPINE_ARM_NONE_EABI_PACKAGE_NAME/share/doc"

ENV PATH="/toolchain/$ALPINE_ARM_NONE_EABI_PACKAGE_NAME/bin:${PATH}"