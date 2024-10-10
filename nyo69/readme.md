# nyo69

![nyo69](imgur.com image replace me!)

*A full mix of ISO and ANSI that prioritizes all the comfort and style from both. In a small factor of 60% that fits in the most common production lines od TADA68/KD68 with reviewed and renewed specs*

* Keyboard Maintainer: [hitmefast](https://github.com/hitmefast)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *At this point in time production is directly private, future options could be possible*

Make example for this keyboard (after setting up your build environment):

    make nyo69:default

Flashing example for this keyboard:

    make nyo69:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
