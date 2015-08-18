#
# LIB no library 
#

CSRCS += 606_BaguaLed/scrs/swc/bagua_led/bagua.c

.PHONY: bagua.h
bagua.h: $(INC_DIR)/bagua.h
$(INC_DIR)/bagua.h: $(FILELIST_MK)
	$(BUILDVERBOSITY)$(PRINTF) "%s\n%s\n%s\n%s\n" "#ifndef BUILD_BAGUA_H" "#define BUILD_BAGUA_H" "#include <$(ROOT)/606_BaguaLed/scrs/swc/bagua_led/bagua.h>" "#endif" > $@ || ( $(RM) $@ && exit 1 )

PROJECT_HEADER += $(INC_DIR)/bagua.h

.PHONY: button_scan_adpt.h
button_scan_adpt.h: $(INC_DIR)/button_scan_adpt.h
$(INC_DIR)/button_scan_adpt.h: $(FILELIST_MK)
	$(BUILDVERBOSITY)$(PRINTF) "%s\n%s\n%s\n%s\n" "#ifndef BUILD_BUTTON_SCAN_ADPT_H" "#define BUILD_BUTTON_SCAN_ADPT_H" "#include <$(ROOT)/606_BaguaLed/scrs/swc/bagua_led/button_scan/button_scan_adpt.h>" "#endif" > $@ || ( $(RM) $@ && exit 1 )

PROJECT_HEADER += $(INC_DIR)/button_scan_adpt.h

.PHONY: button_scan_cfg.h
button_scan_cfg.h: $(INC_DIR)/button_scan_cfg.h
$(INC_DIR)/button_scan_cfg.h: $(FILELIST_MK)
	$(BUILDVERBOSITY)$(PRINTF) "%s\n%s\n%s\n%s\n" "#ifndef BUILD_BUTTON_SCAN_CFG_H" "#define BUILD_BUTTON_SCAN_CFG_H" "#include <$(ROOT)/606_BaguaLed/scrs/swc/bagua_led/button_scan/button_scan_cfg.h>" "#endif" > $@ || ( $(RM) $@ && exit 1 )

PROJECT_HEADER += $(INC_DIR)/button_scan_cfg.h

CSRCS += 606_BaguaLed/scrs/swc/bagua_led/button_scan/button_scan_state.c

CSRCS += 606_BaguaLed/scrs/swc/bagua_led/button_scan/button_scan.c

.PHONY: button_scan.h
button_scan.h: $(INC_DIR)/button_scan.h
$(INC_DIR)/button_scan.h: $(FILELIST_MK)
	$(BUILDVERBOSITY)$(PRINTF) "%s\n%s\n%s\n%s\n" "#ifndef BUILD_BUTTON_SCAN_H" "#define BUILD_BUTTON_SCAN_H" "#include <$(ROOT)/606_BaguaLed/scrs/swc/bagua_led/button_scan/button_scan.h>" "#endif" > $@ || ( $(RM) $@ && exit 1 )

PROJECT_HEADER += $(INC_DIR)/button_scan.h

.PHONY: general_define.h
general_define.h: $(INC_DIR)/general_define.h
$(INC_DIR)/general_define.h: $(FILELIST_MK)
	$(BUILDVERBOSITY)$(PRINTF) "%s\n%s\n%s\n%s\n" "#ifndef BUILD_GENERAL_DEFINE_H" "#define BUILD_GENERAL_DEFINE_H" "#include <$(ROOT)/606_BaguaLed/scrs/bsw/Common/general_define.h>" "#endif" > $@ || ( $(RM) $@ && exit 1 )

PROJECT_HEADER += $(INC_DIR)/general_define.h

CSRCS += 606_BaguaLed/scrs/bsw/McuDrv/gpio/gpio.c

.PHONY: gpio.h
gpio.h: $(INC_DIR)/gpio.h
$(INC_DIR)/gpio.h: $(FILELIST_MK)
	$(BUILDVERBOSITY)$(PRINTF) "%s\n%s\n%s\n%s\n" "#ifndef BUILD_GPIO_H" "#define BUILD_GPIO_H" "#include <$(ROOT)/606_BaguaLed/scrs/bsw/McuDrv/gpio/gpio.h>" "#endif" > $@ || ( $(RM) $@ && exit 1 )

PROJECT_HEADER += $(INC_DIR)/gpio.h

.PHONY: gpio_hardware_config.h
gpio_hardware_config.h: $(INC_DIR)/gpio_hardware_config.h
$(INC_DIR)/gpio_hardware_config.h: $(FILELIST_MK)
	$(BUILDVERBOSITY)$(PRINTF) "%s\n%s\n%s\n%s\n" "#ifndef BUILD_GPIO_HARDWARE_CONFIG_H" "#define BUILD_GPIO_HARDWARE_CONFIG_H" "#include <$(ROOT)/606_BaguaLed/scrs/bsw/McuDrv/gpio/gpio_hardware_config.h>" "#endif" > $@ || ( $(RM) $@ && exit 1 )

PROJECT_HEADER += $(INC_DIR)/gpio_hardware_config.h

CSRCS += 606_BaguaLed/scrs/rte/environment/environment.c

.PHONY: environment.h
environment.h: $(INC_DIR)/environment.h
$(INC_DIR)/environment.h: $(FILELIST_MK)
	$(BUILDVERBOSITY)$(PRINTF) "%s\n%s\n%s\n%s\n" "#ifndef BUILD_ENVIRONMENT_H" "#define BUILD_ENVIRONMENT_H" "#include <$(ROOT)/606_BaguaLed/scrs/rte/environment/environment.h>" "#endif" > $@ || ( $(RM) $@ && exit 1 )

PROJECT_HEADER += $(INC_DIR)/environment.h

CSRCS += 606_BaguaLed/scrs/rte/interfaces/interfaces.c

.PHONY: interfaces.h
interfaces.h: $(INC_DIR)/interfaces.h
$(INC_DIR)/interfaces.h: $(FILELIST_MK)
	$(BUILDVERBOSITY)$(PRINTF) "%s\n%s\n%s\n%s\n" "#ifndef BUILD_INTERFACES_H" "#define BUILD_INTERFACES_H" "#include <$(ROOT)/606_BaguaLed/scrs/rte/interfaces/interfaces.h>" "#endif" > $@ || ( $(RM) $@ && exit 1 )

PROJECT_HEADER += $(INC_DIR)/interfaces.h
