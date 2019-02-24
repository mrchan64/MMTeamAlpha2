# This file was automagically generated by mbed.org. For more information, 
# see http://mbed.org/handbook/Exporting-to-GCC-ARM-Embedded

###############################################################################
# Boiler-plate

# cross-platform directory manipulation
ifeq ($(shell echo $$OS),$$OS)
    MAKEDIR = if not exist "$(1)" mkdir "$(1)"
    RM = rmdir /S /Q "$(1)"
else
    MAKEDIR = '$(SHELL)' -c "mkdir -p \"$(1)\""
    RM = '$(SHELL)' -c "rm -rf \"$(1)\""
endif

OBJDIR := BUILD
# Move to the build directory
ifeq (,$(filter $(OBJDIR),$(notdir $(CURDIR))))
.SUFFIXES:
mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))
MAKETARGET = '$(MAKE)' --no-print-directory -C $(OBJDIR) -f '$(mkfile_path)' \
		'SRCDIR=$(CURDIR)' $(MAKECMDGOALS)
.PHONY: $(OBJDIR) clean
all:
	+@$(call MAKEDIR,$(OBJDIR))
	+@$(MAKETARGET)
$(OBJDIR): all
Makefile : ;
% :: $(OBJDIR) ; :
clean :
	$(call RM,$(OBJDIR))

else

# trick rules into thinking we are in the root, when we are in the bulid dir
VPATH = ..

# Boiler-plate
###############################################################################
# Project settings

PROJECT := MMTeamAlpha2Build


# Project settings
###############################################################################
# Objects and Paths

# add objects here as you write them
# OBJECTS += lib/QEI.o
OBJECTS += driver/serial.o 
OBJECTS += main.o

 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/hal_tick_overrides.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/PeripheralPins.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/analogin_api.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/analogin_device.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/analogout_api.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/analogout_device.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/can_api.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/flash_api.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/gpio_api.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/gpio_irq_api.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/gpio_irq_device.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/hal_init_pre.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/mbed_board.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/i2c_api.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/lp_ticker.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/startup_stm32f446xx.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/mbed_crc_api.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/mbed_overrides.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/mbed_retarget.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/mbed_sdk_boot.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/mbed_tz_context.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/pinmap.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/port_api.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/pwmout_api.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/pwmout_device.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/rtc_api.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/serial_api.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/serial_device.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/sleep.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/spi_api.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_adc_ex.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_adc.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_can_legacy.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_can.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_cortex.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_cec.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_cryp.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_crc.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_flash_ramfunc.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_cryp_ex.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_dac.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_dac_ex.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_dcmi.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_dcmi_ex.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_dfsdm.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_dma.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_dma2d.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_dma_ex.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_dsi.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_eth.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_flash.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_flash_ex.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_fmpi2c.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_fmpi2c_ex.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_gpio.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_hash.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_hash_ex.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_hcd.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_i2c.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_i2c_ex.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_i2s.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_i2s_ex.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_irda.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_iwdg.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_lptim.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_ltdc.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_ltdc_ex.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_mmc.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_nand.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_nor.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_pccard.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_pcd.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_pcd_ex.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_pwr.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_pwr_ex.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_qspi.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_rcc.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_rcc_ex.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_rng.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_rtc.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_rtc_ex.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_sai.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_sai_ex.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_sd.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_sdram.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_smartcard.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_spdifrx.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_spi.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_sram.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_tim.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_tim_ex.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_uart.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_usart.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_hal_wwdg.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_adc.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_crc.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_dac.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_dma.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_dma2d.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_exti.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_fmc.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_fsmc.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_gpio.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_i2c.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_lptim.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_pwr.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_rcc.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_rng.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_rtc.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_sdmmc.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_spi.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_tim.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_usart.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_usb.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm32f4xx_ll_utils.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/stm_spi_api.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/system_clock.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/system_stm32f4xx.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/trng_api.o
 SYS_OBJECTS += mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/us_ticker.o

INCLUDE_PATHS += -I../
INCLUDE_PATHS += -I../.
INCLUDE_PATHS += -I../mbed/.
INCLUDE_PATHS += -I../mbed/TARGET_NUCLEO_F446RE
INCLUDE_PATHS += -I../mbed/TARGET_NUCLEO_F446RE/TARGET_STM
INCLUDE_PATHS += -I../mbed/TARGET_NUCLEO_F446RE/TARGET_STM/TARGET_STM32F4
INCLUDE_PATHS += -I../mbed/TARGET_NUCLEO_F446RE/TARGET_STM/TARGET_STM32F4/TARGET_STM32F446xE
INCLUDE_PATHS += -I../mbed/TARGET_NUCLEO_F446RE/TARGET_STM/TARGET_STM32F4/TARGET_STM32F446xE/TARGET_NUCLEO_F446RE
INCLUDE_PATHS += -I../mbed/TARGET_NUCLEO_F446RE/TARGET_STM/TARGET_STM32F4/TARGET_STM32F446xE/device
INCLUDE_PATHS += -I../mbed/TARGET_NUCLEO_F446RE/TARGET_STM/TARGET_STM32F4/device
INCLUDE_PATHS += -I../mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM
INCLUDE_PATHS += -I../mbed/drivers
INCLUDE_PATHS += -I../mbed/hal
INCLUDE_PATHS += -I../mbed/platform

LIBRARY_PATHS := -L../mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM 
LIBRARIES := -lmbed 
LINKER_SCRIPT ?= ../mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM/STM32F446XE.ld

# Objects and Paths
###############################################################################
# Tools and Flags

AS      = 'arm-none-eabi-gcc' '-x' 'assembler-with-cpp' '-c' '-Wall' '-Wextra' '-Wno-unused-parameter' '-Wno-missing-field-initializers' '-fmessage-length=0' '-fno-exceptions' '-fno-builtin' '-ffunction-sections' '-fdata-sections' '-funsigned-char' '-MMD' '-fno-delete-null-pointer-checks' '-fomit-frame-pointer' '-Os' '-g1' '-mcpu=cortex-m4' '-mthumb' '-mfpu=fpv4-sp-d16' '-mfloat-abi=softfp'
CC      = 'arm-none-eabi-gcc' '-std=gnu99' '-c' '-Wall' '-Wextra' '-Wno-unused-parameter' '-Wno-missing-field-initializers' '-fmessage-length=0' '-fno-exceptions' '-fno-builtin' '-ffunction-sections' '-fdata-sections' '-funsigned-char' '-MMD' '-fno-delete-null-pointer-checks' '-fomit-frame-pointer' '-Os' '-g1' '-mcpu=cortex-m4' '-mthumb' '-mfpu=fpv4-sp-d16' '-mfloat-abi=softfp'
CPP     = 'arm-none-eabi-g++' '-std=gnu++98' '-fno-rtti' '-Wvla' '-c' '-Wall' '-Wextra' '-Wno-unused-parameter' '-Wno-missing-field-initializers' '-fmessage-length=0' '-fno-exceptions' '-fno-builtin' '-ffunction-sections' '-fdata-sections' '-funsigned-char' '-MMD' '-fno-delete-null-pointer-checks' '-fomit-frame-pointer' '-Os' '-g1' '-mcpu=cortex-m4' '-mthumb' '-mfpu=fpv4-sp-d16' '-mfloat-abi=softfp'
LD      = 'arm-none-eabi-gcc'
ELF2BIN = 'arm-none-eabi-objcopy'
PREPROC = 'arm-none-eabi-cpp' '-E' '-P' '-Wl,--gc-sections' '-Wl,--wrap,main' '-Wl,--wrap,_malloc_r' '-Wl,--wrap,_free_r' '-Wl,--wrap,_realloc_r' '-Wl,--wrap,_memalign_r' '-Wl,--wrap,_calloc_r' '-Wl,--wrap,exit' '-Wl,--wrap,atexit' '-Wl,-n' '-mcpu=cortex-m4' '-mthumb' '-mfpu=fpv4-sp-d16' '-mfloat-abi=softfp'


C_FLAGS += -std=gnu99
C_FLAGS += -D__MBED__=1
C_FLAGS += -DDEVICE_I2CSLAVE=1
C_FLAGS += -D__FPU_PRESENT=1
C_FLAGS += -DDEVICE_PORTOUT=1
C_FLAGS += -DUSBHOST_OTHER
C_FLAGS += -DDEVICE_PORTINOUT=1
C_FLAGS += -DTARGET_RTOS_M4_M7
C_FLAGS += -DDEVICE_RTC=1
C_FLAGS += -DTOOLCHAIN_object
C_FLAGS += -DDEVICE_SERIAL_ASYNCH=1
C_FLAGS += -DTARGET_STM32F4
C_FLAGS += -D__CMSIS_RTOS
C_FLAGS += -DTARGET_STM32F446xE
C_FLAGS += -DTOOLCHAIN_GCC
C_FLAGS += -DDEVICE_CAN=1
C_FLAGS += -DTARGET_CORTEX_M
C_FLAGS += -DMBED_BUILD_TIMESTAMP=1537523299.23
C_FLAGS += -DDEVICE_I2C_ASYNCH=1
C_FLAGS += -DTARGET_LIKE_CORTEX_M4
C_FLAGS += -DDEVICE_ANALOGOUT=1
C_FLAGS += -DTARGET_M4
C_FLAGS += -DTARGET_UVISOR_UNSUPPORTED
C_FLAGS += -DDEVICE_SPI_ASYNCH=1
C_FLAGS += -DDEVICE_LPTICKER=1
C_FLAGS += -DDEVICE_PWMOUT=1
C_FLAGS += -DDEVICE_INTERRUPTIN=1
C_FLAGS += -DTARGET_CORTEX
C_FLAGS += -DDEVICE_I2C=1
C_FLAGS += -DTRANSACTION_QUEUE_SIZE_SPI=2
C_FLAGS += -D__CORTEX_M4
C_FLAGS += -DDEVICE_STDIO_MESSAGES=1
C_FLAGS += -DTARGET_FF_MORPHO
C_FLAGS += -DTARGET_FAMILY_STM32
C_FLAGS += -DTARGET_FF_ARDUINO
C_FLAGS += -DTARGET_STM32F446RE
C_FLAGS += -DTARGET_RELEASE
C_FLAGS += -DTARGET_STM
C_FLAGS += -DDEVICE_SERIAL_FC=1
C_FLAGS += -DDEVICE_USTICKER=1
C_FLAGS += -DTARGET_LIKE_MBED
C_FLAGS += -D__MBED_CMSIS_RTOS_CM
C_FLAGS += -DDEVICE_SLEEP=1
C_FLAGS += -DTOOLCHAIN_GCC_ARM
C_FLAGS += -DDEVICE_SPI=1
C_FLAGS += -DUSB_STM_HAL
C_FLAGS += -DTARGET_NUCLEO_F446RE
C_FLAGS += -DDEVICE_SPISLAVE=1
C_FLAGS += -DDEVICE_ANALOGIN=1
C_FLAGS += -DDEVICE_SERIAL=1
C_FLAGS += -DDEVICE_FLASH=1
C_FLAGS += -DDEVICE_PORTIN=1
C_FLAGS += -DARM_MATH_CM4
C_FLAGS += -include
C_FLAGS += mbed_config.h

CXX_FLAGS += -std=gnu++98
CXX_FLAGS += -fno-rtti
CXX_FLAGS += -Wvla
CXX_FLAGS += -D__MBED__=1
CXX_FLAGS += -DDEVICE_I2CSLAVE=1
CXX_FLAGS += -D__FPU_PRESENT=1
CXX_FLAGS += -DDEVICE_PORTOUT=1
CXX_FLAGS += -DUSBHOST_OTHER
CXX_FLAGS += -DDEVICE_PORTINOUT=1
CXX_FLAGS += -DTARGET_RTOS_M4_M7
CXX_FLAGS += -DDEVICE_RTC=1
CXX_FLAGS += -DTOOLCHAIN_object
CXX_FLAGS += -DDEVICE_SERIAL_ASYNCH=1
CXX_FLAGS += -DTARGET_STM32F4
CXX_FLAGS += -D__CMSIS_RTOS
CXX_FLAGS += -DTARGET_STM32F446xE
CXX_FLAGS += -DTOOLCHAIN_GCC
CXX_FLAGS += -DDEVICE_CAN=1
CXX_FLAGS += -DTARGET_CORTEX_M
CXX_FLAGS += -DMBED_BUILD_TIMESTAMP=1537523299.23
CXX_FLAGS += -DDEVICE_I2C_ASYNCH=1
CXX_FLAGS += -DTARGET_LIKE_CORTEX_M4
CXX_FLAGS += -DDEVICE_ANALOGOUT=1
CXX_FLAGS += -DTARGET_M4
CXX_FLAGS += -DTARGET_UVISOR_UNSUPPORTED
CXX_FLAGS += -DDEVICE_SPI_ASYNCH=1
CXX_FLAGS += -DDEVICE_LPTICKER=1
CXX_FLAGS += -DDEVICE_PWMOUT=1
CXX_FLAGS += -DDEVICE_INTERRUPTIN=1
CXX_FLAGS += -DTARGET_CORTEX
CXX_FLAGS += -DDEVICE_I2C=1
CXX_FLAGS += -DTRANSACTION_QUEUE_SIZE_SPI=2
CXX_FLAGS += -D__CORTEX_M4
CXX_FLAGS += -DDEVICE_STDIO_MESSAGES=1
CXX_FLAGS += -DTARGET_FF_MORPHO
CXX_FLAGS += -DTARGET_FAMILY_STM32
CXX_FLAGS += -DTARGET_FF_ARDUINO
CXX_FLAGS += -DTARGET_STM32F446RE
CXX_FLAGS += -DTARGET_RELEASE
CXX_FLAGS += -DTARGET_STM
CXX_FLAGS += -DDEVICE_SERIAL_FC=1
CXX_FLAGS += -DDEVICE_USTICKER=1
CXX_FLAGS += -DTARGET_LIKE_MBED
CXX_FLAGS += -D__MBED_CMSIS_RTOS_CM
CXX_FLAGS += -DDEVICE_SLEEP=1
CXX_FLAGS += -DTOOLCHAIN_GCC_ARM
CXX_FLAGS += -DDEVICE_SPI=1
CXX_FLAGS += -DUSB_STM_HAL
CXX_FLAGS += -DTARGET_NUCLEO_F446RE
CXX_FLAGS += -DDEVICE_SPISLAVE=1
CXX_FLAGS += -DDEVICE_ANALOGIN=1
CXX_FLAGS += -DDEVICE_SERIAL=1
CXX_FLAGS += -DDEVICE_FLASH=1
CXX_FLAGS += -DDEVICE_PORTIN=1
CXX_FLAGS += -DARM_MATH_CM4
CXX_FLAGS += -include
CXX_FLAGS += mbed_config.h

ASM_FLAGS += -x
ASM_FLAGS += assembler-with-cpp
ASM_FLAGS += -DTRANSACTION_QUEUE_SIZE_SPI=2
ASM_FLAGS += -D__CORTEX_M4
ASM_FLAGS += -DUSB_STM_HAL
ASM_FLAGS += -DARM_MATH_CM4
ASM_FLAGS += -D__FPU_PRESENT=1
ASM_FLAGS += -DUSBHOST_OTHER
ASM_FLAGS += -D__MBED_CMSIS_RTOS_CM
ASM_FLAGS += -D__CMSIS_RTOS
ASM_FLAGS += -I../.
ASM_FLAGS += -I../mbed/.
ASM_FLAGS += -I../mbed/TARGET_NUCLEO_F446RE
ASM_FLAGS += -I../mbed/TARGET_NUCLEO_F446RE/TARGET_STM
ASM_FLAGS += -I../mbed/TARGET_NUCLEO_F446RE/TARGET_STM/TARGET_STM32F4
ASM_FLAGS += -I../mbed/TARGET_NUCLEO_F446RE/TARGET_STM/TARGET_STM32F4/TARGET_STM32F446xE
ASM_FLAGS += -I../mbed/TARGET_NUCLEO_F446RE/TARGET_STM/TARGET_STM32F4/TARGET_STM32F446xE/TARGET_NUCLEO_F446RE
ASM_FLAGS += -I../mbed/TARGET_NUCLEO_F446RE/TARGET_STM/TARGET_STM32F4/TARGET_STM32F446xE/device
ASM_FLAGS += -I../mbed/TARGET_NUCLEO_F446RE/TARGET_STM/TARGET_STM32F4/device
ASM_FLAGS += -I../mbed/TARGET_NUCLEO_F446RE/TOOLCHAIN_GCC_ARM
ASM_FLAGS += -I../mbed/drivers
ASM_FLAGS += -I../mbed/hal
ASM_FLAGS += -I../mbed/platform


LD_FLAGS :=-Wl,--gc-sections -Wl,--wrap,main -Wl,--wrap,_malloc_r -Wl,--wrap,_free_r -Wl,--wrap,_realloc_r -Wl,--wrap,_memalign_r -Wl,--wrap,_calloc_r -Wl,--wrap,exit -Wl,--wrap,atexit -Wl,-n -mcpu=cortex-m4 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=softfp 
LD_SYS_LIBS :=-Wl,--start-group -lstdc++ -lsupc++ -lm -lc -lgcc -lnosys -lmbed -Wl,--end-group

# Tools and Flags
###############################################################################
# Rules

.PHONY: all lst size


all: $(PROJECT).bin $(PROJECT).hex size


.s.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Assemble: $(notdir $<)"
  
	@$(AS) -c $(ASM_FLAGS) -o $@ $<
  


.S.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Assemble: $(notdir $<)"
  
	@$(AS) -c $(ASM_FLAGS) -o $@ $<
  

.c.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Compile: $(notdir $<)"
	@$(CC) $(C_FLAGS) $(INCLUDE_PATHS) -o $@ $<

.cpp.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Compile: $(notdir $<)"
	@$(CPP) $(CXX_FLAGS) $(INCLUDE_PATHS) -o $@ $<


$(PROJECT).link_script.ld: $(LINKER_SCRIPT)
	@$(PREPROC) $< -o $@



$(PROJECT).elf: $(OBJECTS) $(SYS_OBJECTS) $(PROJECT).link_script.ld 
	+@echo "link: $(notdir $@)"
	@$(LD) $(LD_FLAGS) -T $(filter-out %.o, $^) $(LIBRARY_PATHS) --output $@ $(filter %.o, $^) $(LIBRARIES) $(LD_SYS_LIBS)


$(PROJECT).bin: $(PROJECT).elf
	$(ELF2BIN) -O binary $< $@
	+@echo "===== bin file ready to flash: $(OBJDIR)/$@ =====" 

$(PROJECT).hex: $(PROJECT).elf
	$(ELF2BIN) -O ihex $< $@


# Rules
###############################################################################
# Dependencies

DEPS = $(OBJECTS:.o=.d) $(SYS_OBJECTS:.o=.d)
-include $(DEPS)
endif

# Dependencies
###############################################################################
