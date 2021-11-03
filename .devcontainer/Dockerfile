FROM ubuntu:latest

ARG DEBIAN_FRONTEND=noninteractive
RUN apt update && \
	apt install -y git gcc-arm-none-eabi python3 python3-pip make cmake locales lcov
RUN apt update && \
    apt install -y dbus libgl1-mesa-glx libgl1-mesa-dev libxkbcommon-x11-0 libfontconfig1 \
    libfontconfig1-dev libfreetype6-dev libx11-dev libx11-xcb-dev libxext-dev \
    libxfixes-dev libxi-dev libxrender-dev libxcb1-dev libxcb-glx0-dev \
    libxcb-keysyms1-dev libxcb-image0-dev libxcb-shm0-dev libxcb-icccm4-dev \
    libxcb-sync-dev libxcb-xfixes0-dev libxcb-shape0-dev libxcb-randr0-dev \
    libxcb-render-util0-dev libxcb-util-dev libxcb-xinerama0-dev libxcb-xkb-dev \
    libxkbcommon-dev libxkbcommon-x11-dev
RUN locale-gen en_US.UTF-8
# UI pip packages
RUN pip3 install pyside6 qt_material
# Development dependencies
RUN pip3 install jinja2 tqdm pytest pytest-cov pytest-xdist black
# Documentation dependencies
RUN pip3 install sphinx breathe myst-parser sphinx-rtd-theme
