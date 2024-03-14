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

sizedummy: Graduation.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Graduation.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Graduation.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
