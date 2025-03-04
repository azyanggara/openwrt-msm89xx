include $(TOPDIR)/rules.mk

BOARDNAME := Qualcomm MSM89x7
FEATURES := squashfs ext4 rtc usb
CPU_TYPE := cortex-a53
KERNELNAME := Image dtbs

define Target/Description
  OpenWrt support for Xiaomi Redmi 4X (MSM8917)
endef

define Target/Initramfs
  PROFILES := xiaomi_redmi_4x
endef

define Device/xiaomi_redmi_4x
  DEVICE_VENDOR := Xiaomi
  DEVICE_MODEL := Redmi 4X
  DEVICE_DTS := qcom/xiaomi_redmi_4x
  DEVICE_PACKAGES := \
    kmod-usb-core kmod-usb-ohci kmod-usb2 kmod-usb3 \
    kmod-usb-net kmod-usb-net-cdc-ether kmod-usb-net-rndis \
    kmod-usb-net-asix kmod-usb-net-asix-ax88179 kmod-usb-net-rtl8152 \
    kmod-mii kmod-r8152 \
    kmod-qcom-qmi-wwan kmod-usb-net-qmi-wwan uqmi \
    kmod-usb-serial-option kmod-usb-serial-qualcomm \
    kmod-usb-acm kmod-usb-wdm \
    umbim
  SUPPORTED_DEVICES := xiaomi,redmi-4x
  DEFAULT := n
endef

$(eval $(call BuildImage))
