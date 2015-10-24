################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
libhd44780.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: libhd44780.a secondary-outputs

# Tool invocations
libhd44780.a: $(OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR Archiver'
	avr-ar -r  "libhd44780.a" $(OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

libhd44780.lss: libhd44780.a
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S libhd44780.a  >"libhd44780.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: libhd44780.a
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega8 libhd44780.a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(ASM_DEPS)$(ARCHIVES)$(LSS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS) libhd44780.a
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
