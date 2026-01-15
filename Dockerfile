FROM ubuntu:24.04

RUN apt update && apt install -y git cmake python3 build-essential gcc-arm-none-eabi libnewlib-arm-none-eabi libstdc++-arm-none-eabi-newlib

ENV PICOTOOL_FETCH_FROM_GIT_PATH=/home/build
ENTRYPOINT [ "bash" ]