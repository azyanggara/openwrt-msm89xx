include $(TOPDIR)/rules.mk

BOARDNAME := Qualcomm MSM89x7
FEATURES := squashfs ext4 rtc usb
CPU_TYPE := cortex-a53
KERNELNAME := Image dtbs

define Target/Description
  OpenWrt support for Xiaomi Redmi 4X (MSM8917)
endef

include $(SUBTARGET_DIR)/image/santoni.mk

$(eval $(call BuildDevice,santoni))

