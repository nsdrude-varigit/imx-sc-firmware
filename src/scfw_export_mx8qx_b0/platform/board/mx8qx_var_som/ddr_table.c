#include "drivers/common/fsl_common.h"
#include "dcd/dcd_retention.h"

#include "ddr_table.h"

struct dram_cfg_param dcd_table[] = {
	{DCD_WRITE, 0x41C80208U, 0x1U},
	{DCD_WRITE, 0x41C80040U, 0xbU},
	{DCD_WRITE, 0x41C80204U, 0x1U},
	{DCD_WRITE, 0x5c000000U, 0xC1080020U},
	{DCD_WRITE, 0x5c000020U, 0x00000203U},
	{DCD_WRITE, 0x5c000024U, 0x0124F800U},
	{DCD_WRITE, 0x5c000050U, 0x0021F000U},
	{DCD_WRITE, 0x5c000064U, 0x004900A8U},
	{DCD_WRITE, 0x5c0000d0U, 0x40030495U},
	{DCD_WRITE, 0x5c0000d4U, 0x00770000U},
	{DCD_WRITE, 0x5c0000dcU, 0x00440024U},
	{DCD_WRITE, 0x5c0000e0U, 0x00F100C0U},
	{DCD_WRITE, 0x5c0000f4U, 0x0000066FU},
	{DCD_WRITE, 0x5c000100U, 0x1618141AU},
	{DCD_WRITE, 0x5c000104U, 0x00050526U},
	{DCD_WRITE, 0x5c000108U, 0x060E1514U},
	{DCD_WRITE, 0x5c00010cU, 0x00909000U},
	{DCD_WRITE, 0x5c000110U, 0x0B04060BU},
	{DCD_WRITE, 0x5c000114U, 0x02030909U},
	{DCD_WRITE, 0x5c000118U, 0x02020006U},
	{DCD_WRITE, 0x5c00011cU, 0x00000301U},
	{DCD_WRITE, 0x5c000130U, 0x00020510U},
	{DCD_WRITE, 0x5c000134U, 0x0B100002U},
	{DCD_WRITE, 0x5c000138U, 0x000000ADU},
	{DCD_WRITE, 0x5c000180U, 0x02580012U},
	{DCD_WRITE, 0x5c000184U, 0x01E0493EU},
	{DCD_WRITE, 0x5c000190U, 0x0499820AU},
	{DCD_WRITE, 0x5c000194U, 0x00070303U},
	{DCD_WRITE, 0x5c0001b4U, 0x00001708U},
	{DCD_WRITE, 0x5c0001b0U, 0x00000005U},
	{DCD_WRITE, 0x5c0001a0U, 0x00400003U},
	{DCD_WRITE, 0x5c0001a4U, 0x008000A0U},
	{DCD_WRITE, 0x5c0001a8U, 0x80000000U},
	{DCD_WRITE, 0x5c000200U, 0x0000001FU},
	{DCD_WRITE, 0x5c00020cU, 0x00000000U},
	{DCD_WRITE, 0x5c000210U, 0x00001F1FU},
	{DCD_WRITE, 0x5c000204U, 0x00080808U},
	{DCD_WRITE, 0x5c000214U, 0x07070707U},
	{DCD_WRITE, 0x5c000218U, 0x07070707U},
	{DCD_WRITE, 0x5c0001c0U, 0x00000007U},
	{DCD_WRITE, 0x5c000244U, 0x00000000U},
	{DCD_WRITE, 0x5c000490U, 0x00000001U},
	{DCD_WRITE, 0x5c000030U, 0x0000010AU},
	{DCD_WRITE, 0x5c000034U, 0x00402010U},
	{DCD_WRITE, 0x5c000038U, 0x003F0001U},
	{DCD_WRITE, 0x5c000250U, 0x7F001F05U},
	{DCD_WRITE, 0x5c000198U, 0x0700B100U},
	{DCD_WRITE, 0x41c80208U, 0x1U},
	{DCD_WRITE, 0x41c80040U, 0xfU},
	{DCD_WRITE, 0x41c80204U, 0x1U},
	{DCD_WRITE, 0x5c010b04U, 0x55556000U},
	{DCD_WRITE, 0x5c010b08U, 0xAAAAAAAAU},
	{DCD_WRITE, 0x5c010b0cU, 0x0029A4A4U},
	{DCD_WRITE, 0x5c010b10U, 0x00000000U},
	{DCD_WRITE, 0x5c010b14U, 0x00000000U},
	{DCD_WRITE, 0x5c010100U, 0x0000040DU},
	{DCD_WRITE, 0x5c010248U, 0x0001000AU},
	{DCD_WRITE, 0x5c010728U, 0x00061032U},
	{DCD_WRITE, 0x5c01072cU, 0x00004578U},
	{DCD_WRITE, 0x5c010828U, 0x00071032U},
	{DCD_WRITE, 0x5c01082cU, 0x00004685U},
	{DCD_WRITE, 0x5c010928U, 0x00016578U},
	{DCD_WRITE, 0x5c01092cU, 0x00004203U},
	{DCD_WRITE, 0x5c010a28U, 0x00015867U},
	{DCD_WRITE, 0x5c010a2cU, 0x00004320U},
	{DCD_WRITE, 0x5c010b28U, 0x00000000U},
	{DCD_WRITE, 0x5c010b2cU, 0x00000000U},
	{DCD_WRITE, 0x5c010240U, 0x00141032U},
	{DCD_WRITE, 0x5c010244U, 0x0103AAAAU},
	{DCD_SET_BIT, 0x5c010014U, 0x000A0040U},
	{DCD_WRITE, 0x5c010010U, 0x87001E00U},
	{DCD_WRITE, 0x5c010018U, 0x00F0A193U},
	{DCD_WRITE, 0x5c01001cU, 0x050A1080U},
	{DCD_WRITE, 0x5c010040U, 0x4B025810U},
	{DCD_WRITE, 0x5c010044U, 0x3A981518U},
	{DCD_WRITE, 0x5c010068U, 0x801C0000U},
	{DCD_WRITE, 0x5c0117c4U, 0x801C0000U},
	{DCD_WRITE, 0x5c010680U, 0x008B2C58U},
	{DCD_WRITE, 0x5c010684U, 0x0001BBBBU},
	{DCD_WRITE, 0x5c0106a4U, 0x0001B9BBU},
	{DCD_WRITE, 0x5c010004U, 0x10U},
	{DCD_WRITE, 0x5c010004U, 0x11U},
	{DCD_CHECK_BITS_SET, 0x5c010030U, 0x1U},
	{DCD_WRITE, 0x5c010068U, 0xA01C0000U},
	{DCD_WRITE, 0x5c0117c4U, 0xA01C0000U},
	{DCD_WRITE, 0x41C80208U, 0x1U},
	{DCD_WRITE, 0x41C80504U, 0x00800000U},
	{DCD_WRITE, 0x41C80204U, 0x1U},
	{DCD_WRITE, 0x5c010040U, 0x026012C1U},
	{DCD_WRITE, 0x5c010044U, 0x01D500A9U},
	{DCD_WRITE, 0x5c010004U, 0x22U},
	{DCD_WRITE, 0x5c010004U, 0x23U},
	{DCD_WRITE, 0x5c010184U, 0x44U},
	{DCD_WRITE, 0x5c010188U, 0x24U},
	{DCD_WRITE, 0x5c01018cU, 0xF1U},
	{DCD_WRITE, 0x5c0101acU, 0x54U},
	{DCD_WRITE, 0x5c0101b4U, 0xC0U},
	{DCD_WRITE, 0x5c0101d8U, 0x15U},
	{DCD_WRITE, 0x5c0101b0U, 0x48U},
	{DCD_WRITE, 0x5c0101b8U, 0x48U},
	{DCD_WRITE, 0x5c010110U, 0x0C331A09U},
	{DCD_WRITE, 0x5c010114U, 0x28300411U},
	{DCD_WRITE, 0x5c010118U, 0x0069615AU},
	{DCD_WRITE, 0x5c01011cU, 0x01800501U},
	{DCD_WRITE, 0x5c010120U, 0x01502B0CU},
	{DCD_WRITE, 0x5c010124U, 0x194C160DU},
	{DCD_WRITE, 0x5c010048U, 0x000A3DEFU},
	{DCD_WRITE, 0x5c01004cU, 0x000124F8U},
	{DCD_WRITE, 0x5c010050U, 0x0000004BU},
	{DCD_WRITE, 0x5c010054U, 0x00001D4CU},
	{DCD_WRITE, 0x5c010058U, 0x00B00026U},
	{DCD_WRITE, 0x5c0104dcU, 0x00000001U},
	{DCD_WRITE, 0x5c010098U, 0x00000000U},
	{DCD_WRITE, 0x5c0104dcU, 0x00000000U},
	{DCD_WRITE, 0x5c010098U, 0x00000000U},
	{DCD_WRITE, 0x5c010500U, 0x30070801U},
	{DCD_WRITE, 0x5c010514U, 0x09000000U},
	{DCD_WRITE, 0x5c010504U, 0x44000000U},
	{DCD_WRITE, 0x5c010528U, 0xF0032008U},
	{DCD_WRITE, 0x5c01052cU, 0x07F0018FU},
	{DCD_SET_BIT, 0x5c010024U, 0x4U},
	{DCD_WRITE, 0x5c010028U, 0x00033200U},
	{DCD_WRITE, 0x5c010714U, 0x09092020U},
	{DCD_WRITE, 0x5c010814U, 0x09092020U},
	{DCD_WRITE, 0x5c010914U, 0x09092020U},
	{DCD_WRITE, 0x5c010a14U, 0x09092020U},
	{DCD_WRITE, 0x5c010710U, 0x0E00BF3CU},
	{DCD_WRITE, 0x5c010810U, 0x0E00BF3CU},
	{DCD_WRITE, 0x5c010910U, 0x0E00BF3CU},
	{DCD_WRITE, 0x5c010a10U, 0x0E00BF3CU},
	{DCD_WRITE, 0x5c0117ecU, 0x001C1600U},
	{DCD_WRITE, 0x5c010020U, 0x001900B1U},
	{DCD_WRITE, 0x5c0117f0U, 0x79000000U},
	{DCD_CHECK_BITS_SET, 0x5c010030U, 0x1U},
	{DCD_WRITE, 0x5c010004U, 0x180U},
	{DCD_WRITE, 0x5c010004U, 0x181U},
	{DCD_CHECK_BITS_SET, 0x5c010030U, 0x1U},
	{DCD_WRITE, 0x5c01004cU, 0x0000004BU},
	{DCD_WRITE, 0x5c010004U, 0x100U},
	{DCD_WRITE, 0x5c010004U, 0x101U},
	{DCD_CHECK_BITS_SET, 0x5c010030U, 0x1U},
	{DCD_RUN_CBT, 0x4B025810, 0x3A981518},
	{DCD_CLR_BIT, 0x5c010250U, 0x00000001U},
	{DCD_SET_BIT, 0x5c010028U, 0x00000001U},
	{DCD_CHECK_BITS_SET, 0x5c010034U, 0x40000000U},
	{DCD_SET_BIT, 0x5c010014U, 0x00020040U},
	{DCD_WRITE, 0x5c01041cU, 0x00010100U},
	{DCD_WRITE, 0x5c010420U, 0x700003FFU},
	{DCD_WRITE, 0x5c010428U, 0x00003FFFU},
	{DCD_WRITE, 0x5c010200U, 0x000031C7U},
	{DCD_WRITE, 0x5c010204U, 0x00010236U},
	{DCD_WRITE, 0x5c010004U, 0x200U},
	{DCD_WRITE, 0x5c010004U, 0x201U},
	{DCD_CHECK_BITS_SET, 0x5c010030U, 0x1U},
	{DCD_CHECK_BITS_CLR, 0x5c010030U, 0x00200000U},
	{DCD_WRITE, 0x5c0117dcU, 0x012240F7U},
	{DCD_WRITE, 0x5c010004U, 0x400U},
	{DCD_WRITE, 0x5c010004U, 0x401U},
	{DCD_CHECK_BITS_SET, 0x5c010030U, 0x1U},
	{DCD_CHECK_BITS_CLR, 0x5c010030U, 0x00400000U},
	{DCD_WRITE, 0x5c0117dcU, 0x01224000U},
	{DCD_WRITE, 0x5c010004U, 0x0010F800U},
	{DCD_WRITE, 0x5c010004U, 0x0010F801U},
	{DCD_CHECK_BITS_SET, 0x5c010030U, 0x1U},
	{DCD_CHECK_BITS_CLR, 0x5c010030U, 0x7FF40000U},
	{DCD_RDBI_BIT_DESKEW, 0},
	{DCD_VREF_TRAIN_SW, 0},
	{DCD_WRITE, 0x5c0117e4U, 0x00100002U},
	{DCD_CLR_BIT, 0x5c010014U, 0x00020040U},
	{DCD_CLR_BIT, 0x5c01070cU, 0x08000000U},
	{DCD_CLR_BIT, 0x5c01080cU, 0x08000000U},
	{DCD_CLR_BIT, 0x5c01090cU, 0x08000000U},
	{DCD_CLR_BIT, 0x5c010a0cU, 0x08000000U},
	{DCD_WRITE, 0x5c010250U, 0x20188005U},
	{DCD_WRITE, 0x5c010254U, 0xA8AA0000U},
	{DCD_WRITE, 0x5c010258U, 0x00070200U},
	{DCD_WRITE, 0x41c80504U, 0x400U},
	{DCD_CLR_BIT, 0x5c010028U, 0x1U},
	{DCD_CHECK_BITS_SET, 0x5c000004U, 0x1U},
	{DCD_LPDDR4_DERATE_INIT, BD_DDR_RET_NUM_DRC},
};

int dcd_table_size = ARRAY_SIZE(dcd_table);
