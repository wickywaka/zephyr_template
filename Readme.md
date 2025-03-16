# Zephyr workspace basic C++ example
How to get started with this application:
See T2.txt for instrucitons. Below instructions are WIP.

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
```
