/*
 * Generated by MTK SP DrvGen Version 03.13.6 for MT6795. Copyright MediaTek Inc. (C) 2013.
 * Wed Oct 14 17:54:20 2015
 * Do Not Modify the File.
 */



#include <linux/types.h>
#include <mach/mt_typedefs.h>
#include <mach/mt_pm_ldo.h>
void pmu_drv_tool_customization_init(void)
{
    pmic_ldo_enable(MT6331_POWER_LDO_VMCH,KAL_FALSE);
    pmic_ldo_enable(MT6331_POWER_LDO_VGP1,KAL_FALSE);
    pmic_ldo_enable(MT6331_POWER_LDO_VCAM_IO,KAL_TRUE);
}


