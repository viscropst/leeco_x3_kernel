#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             24000	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#endif

#define RBAT_PULL_UP_VOLT          2800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[2][17] = {
    	{
         	{-20,68237},
        	{-15,53650},
        	{-10,42506},
        	{ -5,33892},
        	{  0,27219},
        	{  5,22021},
        	{ 10,17926},
        	{ 15,14674},
        	{ 20,12081},
        	{ 25,10000},
        	{ 30,8315},
        	{ 35,6948},
        	{ 40,5834},
        	{ 45,4917},
        	{ 50,4161},
        	{ 55,3535},
        	{ 60,3014}
		},
    	{
         	{-20,68237},
        	{-15,53650},
        	{-10,42506},
        	{ -5,33892},
        	{  0,27219},
        	{  5,22021},
        	{ 10,17926},
        	{ 15,14674},
        	{ 20,12081},
        	{ 25,10000},
        	{ 30,8315},
        	{ 35,6948},
        	{ 40,5834},
        	{ 45,4917},
        	{ 50,4161},
        	{ 55,3535},
        	{ 60,3014}
    	}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[2][77] =
{
	{
		{0,4385},
		{9,4354},
		{15,4328},
		{21,4303},
		{24,4281},
		{30,4259},
		{37,4238},
		{39,4218},
		{45,4200},
		{51,4182},
		{55,4163},
		{61,4145},
		{67,4128},
		{69,4111},
		{76,4095},
		{82,4080},
		{85,4061},
		{91,4038},
		{94,4014},
		{100,3992},
		{106,3973},
		{110,3958},
		{116,3945},
		{122,3932},
		{124,3920},
		{130,3907},
		{137,3895},
		{140,3883},
		{146,3873},
		{152,3863},
		{155,3854},
		{161,3845},
		{167,3836},
		{171,3829},
		{177,3821},
		{183,3815},
		{185,3808},
		{191,3803},
		{198,3799},
		{201,3795},
		{207,3792},
		{213,3788},
		{216,3785},
		{222,3782},
		{228,3778},
		{232,3774},
		{238,3769},
		{244,3764},
		{246,3757},
		{252,3751},
		{258,3743},
		{262,3734},
		{268,3725},
		{271,3715},
		{277,3707},
		{277,3699},
		{283,3690},
		{287,3677},
		{293,3648},
		{299,3582},
		{301,3468},
		{305,3269},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096}
	},
	{
		{0,4385},
		{9,4354},
		{15,4328},
		{21,4303},
		{24,4281},
		{30,4259},
		{37,4238},
		{39,4218},
		{45,4200},
		{51,4182},
		{55,4163},
		{61,4145},
		{67,4128},
		{69,4111},
		{76,4095},
		{82,4080},
		{85,4061},
		{91,4038},
		{94,4014},
		{100,3992},
		{106,3973},
		{110,3958},
		{116,3945},
		{122,3932},
		{124,3920},
		{130,3907},
		{137,3895},
		{140,3883},
		{146,3873},
		{152,3863},
		{155,3854},
		{161,3845},
		{167,3836},
		{171,3829},
		{177,3821},
		{183,3815},
		{185,3808},
		{191,3803},
		{198,3799},
		{201,3795},
		{207,3792},
		{213,3788},
		{216,3785},
		{222,3782},
		{228,3778},
		{232,3774},
		{238,3769},
		{244,3764},
		{246,3757},
		{252,3751},
		{258,3743},
		{262,3734},
		{268,3725},
		{271,3715},
		{277,3707},
		{277,3699},
		{283,3690},
		{287,3677},
		{293,3648},
		{299,3582},
		{301,3468},
		{305,3269},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096},
		{305,3096}
	}       
};      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[2][77] =
{
	{
		{0,4384},
		{3,4351},
		{4,4329},
		{8,4308},
		{11,4289},
		{12,4269},
		{16,4251},
		{19,4232},
		{20,4214},
		{23,4197},
		{27,4179},
		{28,4162},
		{31,4144},
		{32,4128},
		{36,4110},
		{39,4094},
		{41,4079},
		{45,4066},
		{47,4049},
		{49,4024},
		{51,4001},
		{55,3983},
		{57,3969},
		{59,3956},
		{64,3943},
		{65,3928},
		{68,3913},
		{70,3899},
		{72,3886},
		{76,3875},
		{78,3865},
		{80,3855},
		{84,3846},
		{86,3838},
		{88,3831},
		{91,3824},
		{93,3817},
		{96,3811},
		{99,3805},
		{100,3800},
		{104,3795},
		{107,3790},
		{108,3786},
		{112,3782},
		{115,3779},
		{116,3775},
		{119,3772},
		{123,3766},
		{124,3761},
		{127,3754},
		{131,3746},
		{132,3737},
		{135,3727},
		{138,3716},
		{139,3705},
		{143,3699},
		{146,3695},
		{147,3688},
		{151,3668},
		{153,3606},
		{155,3501},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313}
	},
	{
		{0,4384},
		{3,4351},
		{4,4329},
		{8,4308},
		{11,4289},
		{12,4269},
		{16,4251},
		{19,4232},
		{20,4214},
		{23,4197},
		{27,4179},
		{28,4162},
		{31,4144},
		{32,4128},
		{36,4110},
		{39,4094},
		{41,4079},
		{45,4066},
		{47,4049},
		{49,4024},
		{51,4001},
		{55,3983},
		{57,3969},
		{59,3956},
		{64,3943},
		{65,3928},
		{68,3913},
		{70,3899},
		{72,3886},
		{76,3875},
		{78,3865},
		{80,3855},
		{84,3846},
		{86,3838},
		{88,3831},
		{91,3824},
		{93,3817},
		{96,3811},
		{99,3805},
		{100,3800},
		{104,3795},
		{107,3790},
		{108,3786},
		{112,3782},
		{115,3779},
		{116,3775},
		{119,3772},
		{123,3766},
		{124,3761},
		{127,3754},
		{131,3746},
		{132,3737},
		{135,3727},
		{138,3716},
		{139,3705},
		{143,3699},
		{146,3695},
		{147,3688},
		{151,3668},
		{153,3606},
		{155,3501},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313},
		{157,3313}	 
	} 
};           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[2][77] =
{
	{
		{0,4388},
		{2,4364},
		{3,4346},
		{5,4327},
		{7,4308},
		{8,4289},
		{10,4270},
		{11,4252},
		{13,4234},
		{15,4214},
		{16,4196},
		{18,4178},
		{20,4160},
		{21,4142},
		{23,4125},
		{26,4108},
		{27,4091},
		{29,4074},
		{30,4059},
		{32,4044},
		{34,4027},
		{35,4009},
		{37,3996},
		{39,3984},
		{40,3971},
		{42,3958},
		{43,3943},
		{45,3923},
		{47,3903},
		{48,3887},
		{50,3876},
		{52,3865},
		{53,3856},
		{55,3847},
		{57,3839},
		{58,3832},
		{60,3824},
		{61,3818},
		{63,3812},
		{65,3806},
		{66,3801},
		{68,3796},
		{70,3791},
		{71,3786},
		{73,3780},
		{76,3772},
		{77,3765},
		{79,3757},
		{80,3749},
		{82,3743},
		{84,3738},
		{85,3730},
		{87,3720},
		{89,3711},
		{90,3699},
		{92,3691},
		{94,3689},
		{95,3686},
		{97,3681},
		{98,3644},
		{100,3567},
		{102,3448},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206}
	},
	{
		{0,4388},
		{2,4364},
		{3,4346},
		{5,4327},
		{7,4308},
		{8,4289},
		{10,4270},
		{11,4252},
		{13,4234},
		{15,4214},
		{16,4196},
		{18,4178},
		{20,4160},
		{21,4142},
		{23,4125},
		{26,4108},
		{27,4091},
		{29,4074},
		{30,4059},
		{32,4044},
		{34,4027},
		{35,4009},
		{37,3996},
		{39,3984},
		{40,3971},
		{42,3958},
		{43,3943},
		{45,3923},
		{47,3903},
		{48,3887},
		{50,3876},
		{52,3865},
		{53,3856},
		{55,3847},
		{57,3839},
		{58,3832},
		{60,3824},
		{61,3818},
		{63,3812},
		{65,3806},
		{66,3801},
		{68,3796},
		{70,3791},
		{71,3786},
		{73,3780},
		{76,3772},
		{77,3765},
		{79,3757},
		{80,3749},
		{82,3743},
		{84,3738},
		{85,3730},
		{87,3720},
		{89,3711},
		{90,3699},
		{92,3691},
		{94,3689},
		{95,3686},
		{97,3681},
		{98,3644},
		{100,3567},
		{102,3448},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206},
		{102,3206}
	}
};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[2][77] =
{
	{
		{0,4386},
		{2,4350},
		{3,4332},
		{5,4313},
		{7,4294},
		{8,4275},
		{10,4257},
		{12,4237},
		{13,4219},
		{15,4201},
		{17,4182},
		{18,4165},
		{20,4146},
		{22,4129},
		{23,4112},
		{26,4094},
		{28,4078},
		{29,4062},
		{31,4046},
		{33,4031},
		{34,4016},
		{36,4001},
		{37,3988},
		{39,3974},
		{41,3960},
		{42,3943},
		{44,3924},
		{46,3906},
		{47,3891},
		{49,3879},
		{51,3868},
		{52,3859},
		{54,3850},
		{56,3841},
		{57,3834},
		{59,3826},
		{61,3819},
		{62,3813},
		{64,3807},
		{66,3801},
		{67,3796},
		{69,3791},
		{71,3785},
		{72,3775},
		{74,3762},
		{77,3754},
		{78,3746},
		{80,3738},
		{82,3731},
		{83,3725},
		{85,3718},
		{87,3708},
		{88,3699},
		{90,3687},
		{92,3680},
		{93,3679},
		{95,3676},
		{97,3669},
		{98,3633},
		{100,3561},
		{102,3454},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260}

	},
	{
		{0,4386},
		{2,4350},
		{3,4332},
		{5,4313},
		{7,4294},
		{8,4275},
		{10,4257},
		{12,4237},
		{13,4219},
		{15,4201},
		{17,4182},
		{18,4165},
		{20,4146},
		{22,4129},
		{23,4112},
		{26,4094},
		{28,4078},
		{29,4062},
		{31,4046},
		{33,4031},
		{34,4016},
		{36,4001},
		{37,3988},
		{39,3974},
		{41,3960},
		{42,3943},
		{44,3924},
		{46,3906},
		{47,3891},
		{49,3879},
		{51,3868},
		{52,3859},
		{54,3850},
		{56,3841},
		{57,3834},
		{59,3826},
		{61,3819},
		{62,3813},
		{64,3807},
		{66,3801},
		{67,3796},
		{69,3791},
		{71,3785},
		{72,3775},
		{74,3762},
		{77,3754},
		{78,3746},
		{80,3738},
		{82,3731},
		{83,3725},
		{85,3718},
		{87,3708},
		{88,3699},
		{90,3687},
		{92,3680},
		{93,3679},
		{95,3676},
		{97,3669},
		{98,3633},
		{100,3561},
		{102,3454},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260},
		{102,3260}

	}
};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[2][77] =
{
	{
		{1284 ,  4385},
		{1284 ,  4354},
		{1235 ,  4328},
		{1208 ,  4303},
		{1195 ,  4281},
		{1172 ,  4259},
		{1155 ,  4238},
		{1136 ,  4218},
		{1119 ,  4200},
		{1107 ,  4182},
		{1088 ,  4163},
		{1084 ,  4145},
		{1062 ,  4128},
		{1057 ,  4111},
		{1042 ,  4095},
		{1050 ,  4080},
		{1029 ,  4061},
		{1011 ,  4038},
		{995 ,  4014},
		{980 ,  3992},
		{971 ,  3973},
		{954 ,  3958},
		{943 ,  3945},
		{941 ,  3932},
		{938 ,  3920},
		{932 ,  3907},
		{936 ,  3895},
		{938 ,  3883},
		{936 ,  3873},
		{935 ,  3863},
		{932 ,  3854},
		{943 ,  3845},
		{944 ,  3836},
		{953 ,  3829},
		{954 ,  3821},
		{961 ,  3815},
		{969 ,  3808},
		{977 ,  3803},
		{983 ,  3799},
		{998 ,  3795},
		{1005 ,  3792},
		{1022 ,  3788},
		{1040 ,  3785},
		{1056 ,  3782},
		{1084 ,  3778},
		{1108 ,  3774},
		{1140 ,  3769},
		{1172 ,  3764},
		{1215 ,  3757},
		{1262 ,  3751},
		{1310 ,  3743},
		{1366 ,  3734},
		{1426 ,  3725},
		{1491 ,  3715},
		{1566 ,  3707},
		{1629 ,  3699},
		{1710 ,  3690},
		{1778 ,  3677},
		{1838 ,  3648},
		{1899 ,  3582},
		{1614 ,  3468},
		{1118 ,  3269},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096}
	},
	{
		{1284 ,  4354},
		{1235 ,  4328},
		{1208 ,  4303},
		{1195 ,  4281},
		{1172 ,  4259},
		{1155 ,  4238},
		{1136 ,  4218},
		{1119 ,  4200},
		{1107 ,  4182},
		{1088 ,  4163},
		{1084 ,  4145},
		{1062 ,  4128},
		{1057 ,  4111},
		{1042 ,  4095},
		{1050 ,  4080},
		{1029 ,  4061},
		{1011 ,  4038},
		{995 ,  4014},
		{980 ,  3992},
		{971 ,  3973},
		{954 ,  3958},
		{943 ,  3945},
		{941 ,  3932},
		{938 ,  3920},
		{932 ,  3907},
		{936 ,  3895},
		{938 ,  3883},
		{936 ,  3873},
		{935 ,  3863},
		{932 ,  3854},
		{943 ,  3845},
		{944 ,  3836},
		{953 ,  3829},
		{954 ,  3821},
		{961 ,  3815},
		{969 ,  3808},
		{977 ,  3803},
		{983 ,  3799},
		{998 ,  3795},
		{1005 ,  3792},
		{1022 ,  3788},
		{1040 ,  3785},
		{1056 ,  3782},
		{1084 ,  3778},
		{1108 ,  3774},
		{1140 ,  3769},
		{1172 ,  3764},
		{1215 ,  3757},
		{1262 ,  3751},
		{1310 ,  3743},
		{1366 ,  3734},
		{1426 ,  3725},
		{1491 ,  3715},
		{1566 ,  3707},
		{1629 ,  3699},
		{1710 ,  3690},
		{1778 ,  3677},
		{1838 ,  3648},
		{1899 ,  3582},
		{1614 ,  3468},
		{1118 ,  3269},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096},
		{685 ,  3096}
	}
};      

// T1 0C
R_PROFILE_STRUC r_profile_t1[2][77] =
{
	{
		{544 ,  4384},
		{544 ,  4351},
		{532 ,  4329},
		{513 ,  4308},
		{498 ,  4289},
		{481 ,  4269},
		{468 ,  4251},
		{459 ,  4232},
		{448 ,  4214},
		{442 ,  4197},
		{428 ,  4179},
		{428 ,  4162},
		{420 ,  4144},
		{420 ,  4128},
		{422 ,  4110},
		{417 ,  4094},
		{420 ,  4079},
		{430 ,  4066},
		{433 ,  4049},
		{419 ,  4024},
		{408 ,  4001},
		{400 ,  3983},
		{395 ,  3969},
		{392 ,  3956},
		{385 ,  3943},
		{375 ,  3928},
		{369 ,  3913},
		{360 ,  3899},
		{357 ,  3886},
		{352 ,  3875},
		{353 ,  3865},
		{353 ,  3855},
		{354 ,  3846},
		{357 ,  3838},
		{358 ,  3831},
		{363 ,  3824},
		{364 ,  3817},
		{367 ,  3811},
		{371 ,  3805},
		{375 ,  3800},
		{380 ,  3795},
		{383 ,  3790},
		{387 ,  3786},
		{392 ,  3782},
		{399 ,  3779},
		{405 ,  3775},
		{411 ,  3772},
		{417 ,  3766},
		{425 ,  3761},
		{436 ,  3754},
		{453 ,  3746},
		{467 ,  3737},
		{488 ,  3727},
		{512 ,  3716},
		{536 ,  3705},
		{567 ,  3699},
		{617 ,  3695},
		{679 ,  3688},
		{752 ,  3668},
		{811 ,  3606},
		{925 ,  3501},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313}
	},
	{
		{544 ,  4351},
		{532 ,  4329},
		{513 ,  4308},
		{498 ,  4289},
		{481 ,  4269},
		{468 ,  4251},
		{459 ,  4232},
		{448 ,  4214},
		{442 ,  4197},
		{428 ,  4179},
		{428 ,  4162},
		{420 ,  4144},
		{420 ,  4128},
		{422 ,  4110},
		{417 ,  4094},
		{420 ,  4079},
		{430 ,  4066},
		{433 ,  4049},
		{419 ,  4024},
		{408 ,  4001},
		{400 ,  3983},
		{395 ,  3969},
		{392 ,  3956},
		{385 ,  3943},
		{375 ,  3928},
		{369 ,  3913},
		{360 ,  3899},
		{357 ,  3886},
		{352 ,  3875},
		{353 ,  3865},
		{353 ,  3855},
		{354 ,  3846},
		{357 ,  3838},
		{358 ,  3831},
		{363 ,  3824},
		{364 ,  3817},
		{367 ,  3811},
		{371 ,  3805},
		{375 ,  3800},
		{380 ,  3795},
		{383 ,  3790},
		{387 ,  3786},
		{392 ,  3782},
		{399 ,  3779},
		{405 ,  3775},
		{411 ,  3772},
		{417 ,  3766},
		{425 ,  3761},
		{436 ,  3754},
		{453 ,  3746},
		{467 ,  3737},
		{488 ,  3727},
		{512 ,  3716},
		{536 ,  3705},
		{567 ,  3699},
		{617 ,  3695},
		{679 ,  3688},
		{752 ,  3668},
		{811 ,  3606},
		{925 ,  3501},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313},
		{1177 ,  3313}
	}
};     

// T2 25C
R_PROFILE_STRUC r_profile_t2[2][77] =
{
	{
		{126 ,  4388},
		{126 ,  4364},
		{129 ,  4346},
		{126 ,  4327},
		{127 ,  4308},
		{126 ,  4289},
		{127 ,  4270},
		{127 ,  4252},
		{130 ,  4234},
		{127 ,  4214},
		{130 ,  4196},
		{129 ,  4178},
		{132 ,  4160},
		{130 ,  4142},
		{133 ,  4125},
		{133 ,  4108},
		{136 ,  4091},
		{136 ,  4074},
		{141 ,  4059},
		{141 ,  4044},
		{143 ,  4027},
		{146 ,  4009},
		{155 ,  3996},
		{160 ,  3984},
		{164 ,  3971},
		{166 ,  3958},
		{166 ,  3943},
		{155 ,  3923},
		{141 ,  3903},
		{132 ,  3887},
		{132 ,  3876},
		{129 ,  3865},
		{129 ,  3856},
		{130 ,  3847},
		{130 ,  3839},
		{132 ,  3832},
		{130 ,  3824},
		{130 ,  3818},
		{132 ,  3812},
		{135 ,  3806},
		{135 ,  3801},
		{135 ,  3796},
		{137 ,  3791},
		{136 ,  3786},
		{136 ,  3780},
		{132 ,  3772},
		{129 ,  3765},
		{126 ,  3757},
		{126 ,  3749},
		{126 ,  3743},
		{126 ,  3738},
		{129 ,  3730},
		{127 ,  3720},
		{127 ,  3711},
		{130 ,  3699},
		{127 ,  3691},
		{130 ,  3689},
		{133 ,  3686},
		{140 ,  3681},
		{136 ,  3644},
		{141 ,  3567},
		{157 ,  3448},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206}
	},
	{
		{126 ,  4364},
		{129 ,  4346},
		{126 ,  4327},
		{127 ,  4308},
		{126 ,  4289},
		{127 ,  4270},
		{127 ,  4252},
		{130 ,  4234},
		{127 ,  4214},
		{130 ,  4196},
		{129 ,  4178},
		{132 ,  4160},
		{130 ,  4142},
		{133 ,  4125},
		{133 ,  4108},
		{136 ,  4091},
		{136 ,  4074},
		{141 ,  4059},
		{141 ,  4044},
		{143 ,  4027},
		{146 ,  4009},
		{155 ,  3996},
		{160 ,  3984},
		{164 ,  3971},
		{166 ,  3958},
		{166 ,  3943},
		{155 ,  3923},
		{141 ,  3903},
		{132 ,  3887},
		{132 ,  3876},
		{129 ,  3865},
		{129 ,  3856},
		{130 ,  3847},
		{130 ,  3839},
		{132 ,  3832},
		{130 ,  3824},
		{130 ,  3818},
		{132 ,  3812},
		{135 ,  3806},
		{135 ,  3801},
		{135 ,  3796},
		{137 ,  3791},
		{136 ,  3786},
		{136 ,  3780},
		{132 ,  3772},
		{129 ,  3765},
		{126 ,  3757},
		{126 ,  3749},
		{126 ,  3743},
		{126 ,  3738},
		{129 ,  3730},
		{127 ,  3720},
		{127 ,  3711},
		{130 ,  3699},
		{127 ,  3691},
		{130 ,  3689},
		{133 ,  3686},
		{140 ,  3681},
		{136 ,  3644},
		{141 ,  3567},
		{157 ,  3448},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206},
		{243 ,  3206}
	}
}; 

// T3 50C
R_PROFILE_STRUC r_profile_t3[2][77] =
{
	{
		{96 ,  4386},
		{96 ,  4350},
		{98 ,  4332},
		{96 ,  4313},
		{96 ,  4294},
		{98 ,  4275},
		{98 ,  4257},
		{96 ,  4237},
		{99 ,  4219},
		{98 ,  4201},
		{98 ,  4182},
		{101 ,  4165},
		{99 ,  4146},
		{102 ,  4129},
		{104 ,  4112},
		{101 ,  4094},
		{104 ,  4078},
		{104 ,  4062},
		{105 ,  4046},
		{107 ,  4031},
		{109 ,  4016},
		{110 ,  4001},
		{115 ,  3988},
		{116 ,  3974},
		{119 ,  3960},
		{119 ,  3943},
		{110 ,  3924},
		{104 ,  3906},
		{99 ,  3891},
		{99 ,  3879},
		{98 ,  3868},
		{96 ,  3859},
		{99 ,  3850},
		{98 ,  3841},
		{99 ,  3834},
		{101 ,  3826},
		{102 ,  3819},
		{101 ,  3813},
		{104 ,  3807},
		{107 ,  3801},
		{107 ,  3796},
		{110 ,  3791},
		{110 ,  3785},
		{105 ,  3775},
		{99 ,  3762},
		{99 ,  3754},
		{99 ,  3746},
		{99 ,  3738},
		{99 ,  3731},
		{101 ,  3725},
		{101 ,  3718},
		{101 ,  3708},
		{99 ,  3699},
		{101 ,  3687},
		{98 ,  3680},
		{102 ,  3679},
		{104 ,  3676},
		{112 ,  3669},
		{106 ,  3633},
		{112 ,  3561},
		{124 ,  3454},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260}

	},
	{
		{96 ,  4350},
		{98 ,  4332},
		{96 ,  4313},
		{96 ,  4294},
		{98 ,  4275},
		{98 ,  4257},
		{96 ,  4237},
		{99 ,  4219},
		{98 ,  4201},
		{98 ,  4182},
		{101 ,  4165},
		{99 ,  4146},
		{102 ,  4129},
		{104 ,  4112},
		{101 ,  4094},
		{104 ,  4078},
		{104 ,  4062},
		{105 ,  4046},
		{107 ,  4031},
		{109 ,  4016},
		{110 ,  4001},
		{115 ,  3988},
		{116 ,  3974},
		{119 ,  3960},
		{119 ,  3943},
		{110 ,  3924},
		{104 ,  3906},
		{99 ,  3891},
		{99 ,  3879},
		{98 ,  3868},
		{96 ,  3859},
		{99 ,  3850},
		{98 ,  3841},
		{99 ,  3834},
		{101 ,  3826},
		{102 ,  3819},
		{101 ,  3813},
		{104 ,  3807},
		{107 ,  3801},
		{107 ,  3796},
		{110 ,  3791},
		{110 ,  3785},
		{105 ,  3775},
		{99 ,  3762},
		{99 ,  3754},
		{99 ,  3746},
		{99 ,  3738},
		{99 ,  3731},
		{101 ,  3725},
		{101 ,  3718},
		{101 ,  3708},
		{99 ,  3699},
		{101 ,  3687},
		{98 ,  3680},
		{102 ,  3679},
		{104 ,  3676},
		{112 ,  3669},
		{106 ,  3633},
		{112 ,  3561},
		{124 ,  3454},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260},
		{171 ,  3260}
	}
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H

