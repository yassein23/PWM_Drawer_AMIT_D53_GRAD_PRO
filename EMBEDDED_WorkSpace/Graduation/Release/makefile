################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/PWM/subdir.mk
-include MCAL/ICU/subdir.mk
-include MCAL/DIO/subdir.mk
-include HAL/GLCD/subdir.mk
-include APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
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

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Graduation.lss \

FLASH_IMAGE += \
Graduation.hex \

EEPROM_IMAGE += \
Graduation.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: Graduation.elf secondary-outputs

# Tool invocations
Graduation.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Graduation.map -mmcu=atmega32 -o "Graduation.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Graduation.lss: Graduation.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Graduation.elf  >"Graduation.lss"
	@echo 'Finished building: $@'
	@echo ' '

Graduation.hex: Graduation.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Graduation.elf  "Graduation.hex"
	@echo 'Finished building: $@'
	@echo ' '

Graduation.eep: Graduation.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Graduation.elf  "Graduation.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Graduation.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Graduation.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Graduation.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
