#ifndef _XIAOMI_SDM439_MACH_H
#define _XIAOMI_SDM439_MACH_H

enum xiaomi_sdm439_mach_family_types {
	XIAOMI_SDM439_MACH_FAMILY_UNKNOWN = 0,

	MACH_FAMILY_PINE,
	MACH_FAMILY_OLIVE,

	XIAOMI_SDM439_MACH_FAMILY_MAX,
};

enum xiaomi_sdm439_mach_types {
	XIAOMI_SDM439_MACH_UNKNOWN = 0,

	XIAOMI_SDM439_MACH_PINE,
	XIAOMI_SDM439_MACH_OLIVE,
	XIAOMI_SDM439_MACH_OLIVELITE,
	XIAOMI_SDM439_MACH_OLIVEWOOD,

	XIAOMI_SDM439_MACH_MAX,
};

extern enum xiaomi_sdm439_mach_family_types mi439_mach_get_family(void);
extern enum xiaomi_sdm439_mach_types xiaomi_sdm439_mach_get(void);

#endif
