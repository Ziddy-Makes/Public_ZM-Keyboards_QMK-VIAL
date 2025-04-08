# Compile Firmware

qmk compile -kb zm_k9_rpie -km vial


# Install QMK Toolchain on Mac
https://docs.qmk.fm/newbs_getting_started  
*Select macOS Tabs*

### Install through Homebrew
```
brew install qmk/qmk/qmk
```

### Download Required Dependencies Like avr-gcc to Your System ⚠️
 ```
 qmk setup
 ```
 *Just let it clone the base qmk repo to whatever default path, you won't use it anyways*
