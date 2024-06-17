# Getting Started

## Inastall Arduino.cc IDE
Download and install Arduino software (IDE) for the required OS. (Windows, Linux or Mac instructions)

## About Boards manager concept
This is the needed step to get STM32 targets added to Arduino. So carefully follow the following steps.
### Installing STM32 Core

1. Open Arduino.cc IDE. Click on "File" menu and then "Preferences".
<img width="571" alt="image" src="https://github.com/eRoxii-KH/TWIN-STM32/assets/172578274/47ab645c-e3f3-4962-addc-ae3988f7287b">

The "Preferences" dialog will open, then add the following link to the "Additional Boards Managers URLs" field:

https://github.com/stm32duino/BoardManagerFiles/raw/main/package_stmicroelectronics_index.json

Click "Ok"
2. Click on "Tools" menu and then "Boards > Boards Manager"

<img width="640" alt="image" src="https://github.com/eRoxii-KH/TWIN-STM32/assets/172578274/e7ae580e-b8c7-4df6-88b2-4c21ed65287e">
The board manager will open and you will see a list of installed and available boards.

Select "Contributed" type.

<img width="637" alt="image" src="https://github.com/eRoxii-KH/TWIN-STM32/assets/172578274/3465eaf9-e80d-46ec-ac7a-3cb8358d7e14">

Select the "STM32 MCU based boards" and click on install.

After installation is complete an "INSTALLED" tag appears next to the core name.

You can close the Board Manager.

Now you can find the STM32 boards package in the "Board" menu.

Select the desired boards series: STM32F1
