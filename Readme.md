# Zephyr workspace basic C++ example
How to get started with this application:
See T2.txt for instrucitons. Below instructions are WIP.

```sh
sudo apt install --no-install-recommends git cmake ninja-build gperf \
  ccache dfu-util device-tree-compiler wget \
  python3-dev python3-pip python3-setuptools python3-tk python3-wheel xz-utils file \
  make gcc gcc-multilib g++-multilib libsdl2-dev libmagic1
````
```sh
mkdir <workspace>
python3 -m venv .venv
pip install west
source .venv/bin/activate
west init -m <this-repo> app
west update
west sdk install arm-zephyr-eabi

# Compiling and flashing
west build -b nrf52840dk/nrf52840

west flash
# OR Current error: board nrf52840dk/52840 does not support renode
# FATAL ERROR: no simulate runner available for board nrf52840dk/nrf52840. Check the board's documentation for instructions.
west simulate --runner=renode 
```

# native sim

```sh
west build -b native_sim/native/64 app
west build -t run
```

https://docs.zephyrproject.org/latest/develop/tools/vscode.html#configure-the-c-c-extension
