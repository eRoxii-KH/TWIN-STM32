# Getting Started

## Inastall Arduino.cc IDE
Download and install Arduino software (IDE) for the required OS. (Windows, Linux or Mac instructions)

## About Boards manager concept
This is the needed step to get STM32 targets added to Arduino. So carefully follow the following steps.
### Installing STM32 Core

1. Open Arduino.cc IDE. Click on "File" menu and then "Preferences".
2. 
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

<img width="638" alt="image" src="https://github.com/eRoxii-KH/TWIN-STM32/assets/172578274/98376c6e-6676-4620-aeb0-d1e673ef60fa">

After installation is complete an "INSTALLED" tag appears next to the core name.

You can select board stm32.

<img width="638" alt="image" src="https://github.com/eRoxii-KH/TWIN-STM32/assets/172578274/e7bdc818-747d-4865-9dff-c9f16132536e">

Now you can find the STM32 boards package in the "Board" menu.

Select the desired boards series: STM32F103CBT6

<img width="635" alt="image" src="https://github.com/eRoxii-KH/TWIN-STM32/assets/172578274/48c06c92-f25e-4440-a0a2-8b11eea8d3c5">

Select Upload method "STM32CubeProgramer(SWD)"

<img width="637" alt="image" src="https://github.com/eRoxii-KH/TWIN-STM32/assets/172578274/822f202d-1f7c-4aee-b012-ab13bfc6d108">



