#ifndef DCD_RP2040_H_
#define DCD_RP2040_H_

#include "common/tusb_common.h"
#include "pico.h"

// If defined, this function will be invoked on SOF. To minimize latency and jitter, it
// is executed directly from the USB IRQ handler.
void dcd_sof_cb(uint32_t frame) TU_ATTR_WEAK;

#endif
