################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32H7xx_HAL_Driver/subdir.mk
-include Cosmos/stm32h755_integration/CIL/src/subdir.mk
-include Cosmos/core/thread/src/subdir.mk
-include Cosmos/core/task/src/subdir.mk
-include Cosmos/core/sysJobs/src/subdir.mk
-include Cosmos/core/sysCalls/src/subdir.mk
-include Cosmos/core/stack/src/subdir.mk
-include Cosmos/core/scheduler/src/subdir.mk
-include Cosmos/core/schedulable/src/subdir.mk
-include Cosmos/core/route/src/subdir.mk
-include Cosmos/core/program/src/subdir.mk
-include Cosmos/core/permission/src/subdir.mk
-include Cosmos/core/os/src/subdir.mk
-include Cosmos/core/middleware/src/subdir.mk
-include Cosmos/core/memory/src/subdir.mk
-include Cosmos/core/interrupt/src/subdir.mk
-include Cosmos/core/deviceIO/src/subdir.mk
-include Cosmos/core/cosmosAssert/src/subdir.mk
-include Cosmos/core/cosmosApi/src/subdir.mk
-include Cosmos/core/core/src/subdir.mk
-include Cosmos/core/buffer/src/subdir.mk
-include Cosmos/applicationLayer/src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include Common/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

BUILD_ARTIFACT_NAME := reference_project_stmIDE_CM7
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX := 
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME).$(BUILD_ARTIFACT_EXTENSION)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
reference_project_stmIDE_CM7.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
reference_project_stmIDE_CM7.list \

OBJCOPY_BIN += \
reference_project_stmIDE_CM7.bin \


# All Target
all: main-build

# Main-build Target
main-build: reference_project_stmIDE_CM7.elf secondary-outputs

# Tool invocations
reference_project_stmIDE_CM7.elf: $(OBJS) $(USER_OBJS) C:\GIT\STM32\reference_project_stmIDE\CM7\STM32H755ZITX_FLASH.ld
	arm-none-eabi-gcc -o "reference_project_stmIDE_CM7.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"C:\GIT\STM32\reference_project_stmIDE\CM7\STM32H755ZITX_FLASH.ld" --specs=nosys.specs -Wl,-Map="reference_project_stmIDE_CM7.map" -Wl,--gc-sections -static -ffixed-r9 --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

reference_project_stmIDE_CM7.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "reference_project_stmIDE_CM7.list"
	@echo 'Finished building: $@'
	@echo ' '

reference_project_stmIDE_CM7.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "reference_project_stmIDE_CM7.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents fail-specified-linker-script-missing warn-no-linker-script-specified
.SECONDARY:

-include ../makefile.targets
