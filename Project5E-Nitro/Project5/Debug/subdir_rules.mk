################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccs1280/ccs/tools/compiler/ti-cgt-msp430_21.6.1.LTS/bin/cl430" -vmspx -O3 --use_hw_mpy=F5 --include_path="C:/ti/ccs1280/ccs/ccs_base/msp430/include" --include_path="D:/Downloads/Programming/ECE306/Project5E-Nitro/Project5" --include_path="D:/Downloads/Programming/ECE306/Project5E-Nitro/Project5/include" --include_path="C:/ti/ccs1280/ccs/tools/compiler/ti-cgt-msp430_21.6.1.LTS/include" --advice:power="none" --advice:hw_config=all --define=__MSP430FR2355__ --define=_FRWP_ENABLE --define=_INFO_FRWP_ENABLE --define=__ENABLE_GUI_COMM=1 --define=GLOBAL_Q=8 -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

