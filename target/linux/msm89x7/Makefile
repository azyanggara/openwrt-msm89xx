include $(TOPDIR)/rules.mk

BOARDNAME:=Qualcomm MSM89x7 64-bit
SUBTARGETS:=msm8917
ARCH:=aarch64
KERNEL_PATCHVER:=5.15
FEATURES:=dt overlays gpio nand rtc squashfs usb ext4 wifi

include $(INCLUDE_DIR)/target.mk

DEFAULT_PACKAGES += kmod-usb-core kmod-usb2 kmod-usb3 \
    kmod-usb-net kmod-usb-net-cdc-ether kmod-usb-net-rndis \
    kmod-usb-net-asix kmod-usb-net-asix-ax88179 kmod-usb-net-rtl8152 \
    kmod-mii kmod-r8152 \
    kmod-qcom-qmi-wwan kmod-usb-net-qmi-wwan uqmi \
    kmod-usb-serial-option kmod-usb-serial-qualcomm \
    kmod-usb-acm kmod-usb-wdm umbim

# Memasukkan semua file .mk dalam folder image (termasuk santoni.mk & rolex.mk)
TARGET_DIR := $(dir $(lastword $(MAKEFILE_LIST)))
include $(wildcard $(TARGET_DIR)image/*.mk)

# Pastikan setiap perangkat yang terdaftar di dalam .mk dibangun dengan benar
$(eval $(call BuildTarget))
