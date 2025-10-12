# handwired/pantie36

![handwired/pantie36](imgur.com image replace me!)


"cols": ["D1", "D0", "D4", "C6", "D7", "F4", "F5", "F6", "F7", "B1"],
"rows": ["B3", "B2", "E6", "B4"]

Cols: 2, 3, 4, 5, 6, A3, A2, A1, A0, 15
Rows: 14, 16, 7, 8

*A short description of the keyboard/project*

* Keyboard Maintainer: [Diego Cirilo](https://github.com/dvcirilo)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make handwired/pantie36:default

Flashing example for this keyboard:

    make handwired/pantie36:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
