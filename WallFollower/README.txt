In order to develop for this project, please download the following tools:

1. Atollic TrueStudio - this is the IDE for all coding changes - hopefully we will not be needing this for any subsantive changes once our framework is set up, download here: https://atollic.com/resources/download/

2. STM32CubeMX - This is the tool for peripheral configuration and initialization for the STM32F4 Board, please download here: http://www.st.com/en/development-tools/stm32cubemx.html

3. QuantumLeaps State Machine Framework - This is the tool for developing with the state machine framework, please download both this: https://sourceforge.net/projects/qpc/files/QP-C/5.8.2/qpc_5.8.2.exe/download, and this: https://sourceforge.net/projects/qpc/files/QM/4.0.0/qm_4.0.0-win32.exe/download

When making changes please observe the following guidelines:

When making changes to initialization or peripherals, please use STM32CubeMX, and try not to interfere with naming conventions so that the QuantumLeaps code doesn't need to be updated

When making changes to behavior, please use the quantum leaps state machine framework.

Some, but very little initialization may need to be done in AtollicTrueStudio, but be careful when doing so, and only code in marked sections of STM32Cube Code, and make any code changes relevant to quantum leaps only within the quantum leaps model.

Do not commit any changes to .metadata