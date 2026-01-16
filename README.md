```
mkdir -p ~/SDK/pico-sdk
cd ~/SDK/pico-sdk
git clone https://github.com/raspberrypi/pico-sdk.git 2.2.0
```

```
cd ~/SDK/pico-sdk/2.2.0
git submodule update --init
```

```
cp ~/SDK/pico-sdk/2.2.0/external/pico_sdk_import.cmake .
```

```
docker compose build --no-cache
docker compose run --rm pico_sdk_worker
```

```
cd /home/pico_sdk_worker
cmake -S . -B build
cd build
make -j 8
```

```
screen /dev/tty.1
CTRL + A & CTRL + \
```
