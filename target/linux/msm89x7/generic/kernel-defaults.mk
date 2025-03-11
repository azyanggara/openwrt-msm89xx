#
# Default kernel configuration options for MSM89x7
#

# Gunakan perintah ini untuk memastikan include kernel options
include $(TOPDIR)/rules.mk

# Pastikan opsi build kernel yang diperlukan
CONFIG_KERNEL_LZMA=y
CONFIG_KERNEL_GZIP=y
CONFIG_KERNEL_ZSTD=y

CONFIG_MSM_THERMAL=y
CONFIG_MSM_ADSP_LOADER=y
CONFIG_MSM_IPA=y
