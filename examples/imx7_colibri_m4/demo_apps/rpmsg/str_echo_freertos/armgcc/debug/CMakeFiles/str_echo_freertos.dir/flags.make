# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# compile ASM with /home/aselsan/Desktop/IMX7/toolchain/gcc-arm-none-eabi-4_9-2015q3/bin/arm-none-eabi-gcc
# compile C with /home/aselsan/Desktop/IMX7/toolchain/gcc-arm-none-eabi-4_9-2015q3/bin/arm-none-eabi-gcc
ASM_FLAGS =  -mcpu=cortex-m4  -mfloat-abi=hard  -mfpu=fpv4-sp-d16  -mthumb  -Wall  -fno-common  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin  -mapcs  -std=gnu99  -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g -g  -Og  -D__DEBUG  

ASM_DEFINES = 

ASM_INCLUDES = -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/.. -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../.. -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../middleware/multicore/open-amp -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../middleware/multicore/open-amp/porting/env/freertos -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../middleware/multicore/open-amp/porting/imx7d_m4 -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../platform/CMSIS/Include -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../platform/devices -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../platform/devices/MCIMX7D/include -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../platform/devices/MCIMX7D/startup -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../platform/drivers/inc -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../platform/utilities/inc -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../rtos/FreeRTOS/Source/include -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../rtos/FreeRTOS/Source/portable/GCC/ARM_CM4F 

C_FLAGS = --specs=nosys.specs -mcpu=cortex-m4  -mfloat-abi=hard  -mfpu=fpv4-sp-d16  -mthumb  -MMD  -MP  -Wall  -fno-common  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin  -mapcs  -std=gnu99  -DCPU_MCIMX7D_M4  -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -O0 -g -g -Og -D__DEBUG  

C_DEFINES = 

C_INCLUDES = -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/.. -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../.. -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../middleware/multicore/open-amp -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../middleware/multicore/open-amp/porting/env/freertos -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../middleware/multicore/open-amp/porting/imx7d_m4 -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../platform/CMSIS/Include -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../platform/devices -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../platform/devices/MCIMX7D/include -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../platform/devices/MCIMX7D/startup -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../platform/drivers/inc -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../platform/utilities/inc -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../rtos/FreeRTOS/Source/include -I/home/aselsan/Desktop/GPT_BACKUP/freertos-colibri-imx7/examples/imx7_colibri_m4/demo_apps/rpmsg/str_echo_freertos/armgcc/../../../../../../rtos/FreeRTOS/Source/portable/GCC/ARM_CM4F 

