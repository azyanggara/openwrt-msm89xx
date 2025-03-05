BOARDNAME:=Qualcomm MSM89xx (32-bit)
SUBTARGETS:=generic
ARCH:=arm
FEATURES:=dt overlays gpio nand rtc squashfs usb
include $(INCLUDE_DIR)/target.mk
DEFAULT_PACKAGES += kmod-usb-core kmod-usb2 kmod-usb-net kmod-qcserial
$(eval $(call BuildTarget))
