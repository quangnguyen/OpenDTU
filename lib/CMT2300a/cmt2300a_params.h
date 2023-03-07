#ifndef __CMT2300A_PARAMS_H
#define __CMT2300A_PARAMS_H

#include "cmt2300a_defs.h"
#include <stdint.h>

/* [CMT Bank] with RSSI offset of +- 0 (and 13dBm) */
static uint8_t g_cmt2300aCmtBank[CMT2300A_CMT_BANK_SIZE] = {
0x00,
0x66,
0xEC,
0x1C,
0x70,
0x80,
0x14,
0x08,
0x11,
0x02,
0x02,
0x00,
};

/* [System Bank] */
static uint8_t g_cmt2300aSystemBank[CMT2300A_SYSTEM_BANK_SIZE] = {
0xAE,
0xE0,
0x35,
0x00,
0x00,
0xF4,
0x10,
0xE2,
0x42,
0x20,
0x0C,
0x81,
};

/* [Frequency Bank] 860 MHz */
static uint8_t g_cmt2300aFrequencyBank[CMT2300A_FREQUENCY_BANK_SIZE] = {
0x42,
0x32,
0xCF,
0x82,
0x42,
0x27,
0x76,
0x12,
};

/* [Data Rate Bank] */
static uint8_t g_cmt2300aDataRateBank[CMT2300A_DATA_RATE_BANK_SIZE] = {
0xA6,
0xC9,
0x20,
0x20,
0xD2,
0x35,
0x0C,
0x0A,
0x9F,
0x4B,
0x29,
0x29,
0xC0,
0x14,
0x05,
0x53,
0x10,
0x00,
0xB4,
0x00,
0x00,
0x01,
0x00,
0x00,
};

/* [Baseband Bank] - EU */
static uint8_t g_cmt2300aBasebandBank[CMT2300A_BASEBAND_BANK_SIZE] = {
0x12,
0x1E,
0x00,
0xAA,
0x06,
0x00,
0x00,
0x00,
0x00,
0x48,
0x5A,
0x48,
0x4D,
0x01,
0x1F,
0x00,
0x00,
0x00,
0x00,
0x00,
0xC3,
0x00,
0x00,
0x60,
0xFF,
0x00,
0x00,
0x1F,
0x10,
};

/* [Tx Bank] 13 dBm */
static uint8_t g_cmt2300aTxBank[CMT2300A_TX_BANK_SIZE] = {
0x70,
0x4D,
0x06,
0x00,
0x07,
0x50,
0x00,
0x42,
0x0C,
0x3F,
0x7F,
};

#endif