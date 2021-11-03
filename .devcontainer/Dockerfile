FROM ubuntu:latest

ARG DEBIAN_FRONTEND=noninteractive
RUN apt update && \
	apt install -y git gcc-arm-none-eabi python3 python3-pip make cmake dbus locales lcov \
	                    libgl1-mesa-glx libgl1-mesa-dev libxkbcommon-x11-0 libfontconfig1 \
                        libfontconfig1-dev libfreetype6-dev libx11-dev libx11-xcb-dev libxext-dev \
                        libxfixes-dev libxi-dev libxrender-dev libxcb1-dev libxcb-glx0-dev \
                        libxcb-keysyms1-dev libxcb-image0-dev libxcb-shm0-dev libxcb-icccm4-dev \
                        libxcb-sync-dev libxcb-xfixes0-dev libxcb-shape0-dev libxcb-randr0-dev \
                        libxcb-render-util0-dev libxcb-util-dev libxcb-xinerama0-dev libxcb-xkb-dev \
                        libxkbcommon-dev libxkbcommon-x11-dev -y && \
    locale-gen en_US.UTF-8 && \
	pip3 install jinja2 tqdm pytest pytest-cov pytest-xdist pyside6 qt_material black sphinx breathe myst-parser sphinx-rtd-theme
