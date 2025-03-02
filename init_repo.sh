#!/bin/bash

# Nama repository
REPO_NAME="openwrt-msm89xx"

# Pastikan skrip dijalankan di dalam direktori repository yang sudah dikloning
if [ ! -d ".git" ]; then
    echo "Error: Skrip harus dijalankan di dalam repository Git!"
    exit 1
fi

echo "Membuat struktur direktori untuk $REPO_NAME..."

# Membuat struktur folder
mkdir -p target/linux/msm89xx/image
mkdir -p target/linux/msm89xx/patches-5.15
mkdir -p target/linux/msm89xx/files/arch/arm/boot/dts
mkdir -p target/linux/msm89xx/generic
mkdir -p package
mkdir -p scripts
mkdir -p configs

# Membuat file dasar
echo "# $REPO_NAME" > README.md
echo "bin/" > .gitignore
echo "build_dir/" >> .gitignore
echo "dl/" >> .gitignore
echo "tmp/" >> .gitignore

# File di dalam target/linux/msm89xx/
echo "CONFIG_5_15=y" > target/linux/msm89xx/config-5.15
echo 'define Device/santoni\n  DEVICE_TITLE := Xiaomi Redmi 4X\nendef' > target/linux/msm89xx/image/santoni.mk
echo 'define Device/ugglite\n  DEVICE_TITLE := Xiaomi Redmi Note 5A\nendef' > target/linux/msm89xx/image/ugglite.mk
echo 'define Device/ugg\n  DEVICE_TITLE := Xiaomi Redmi Note 5A Prime\nendef' > target/linux/msm89xx/image/ugg.mk

# Device tree contoh
touch target/linux/msm89xx/files/arch/arm/boot/dts/qcom-msm8940-xiaomi-santoni.dts
touch target/linux/msm89xx/files/arch/arm/boot/dts/qcom-msm8917-xiaomi-ugglite.dts
touch target/linux/msm89xx/files/arch/arm/boot/dts/qcom-msm8937-xiaomi-ugg.dts

# Konfigurasi generic
echo "CONFIG_DEFAULT=y" > target/linux/msm89xx/generic/config-default
echo "# Kernel defaults" > target/linux/msm89xx/generic/kernel-defaults.mk

# Feeds
echo "src-git packages https://git.openwrt.org/feed/packages.git" > feeds.conf

# Commit pertama
git add .
git commit -m "Inisialisasi repository $REPO_NAME dengan struktur dasar"
git push origin main

echo "Selesai! Repository telah diinisialisasi."

