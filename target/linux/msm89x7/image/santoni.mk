# SPDX-License-Identifier: GPL-2.0-only

define Device/santoni
  DEVICE_VENDOR := Xiaomi
  DEVICE_MODEL := Redmi 4X
  DEVICE_DTS := qcom/msm8917-redmi-4x
  FILESYSTEMS := ext4 squashfs
endef

TARGET_DEVICES += santoni
