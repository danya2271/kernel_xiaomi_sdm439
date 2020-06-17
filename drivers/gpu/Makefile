# drm/tegra depends on host1x, so if both drivers are built-in care must be
# taken to initialize them in the correct order. Link order is the only way
# to ensure this currently.
ifdef CONFIG_ARCH_MSM8937
KBUILD_CFLAGS += -mcpu=cortex-a53 -Wa,-mcpu=cortex-a53 -mtune=cortex-a53
KBUILD_LDFLAGS := -mcpu=cortex-a53 -mtune=cortex-a53
endif
obj-$(CONFIG_TEGRA_HOST1X)	+= host1x/
obj-y			+= drm/ vga/
obj-$(CONFIG_IMX_IPUV3_CORE)	+= ipu-v3/
obj-$(CONFIG_QCOM_KGSL) += msm/
