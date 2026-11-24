#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025B970
// Address: 0x25b970 - 0x25b97c
void sub_0025B970_0x25b970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B970_0x25b970");
#endif

    ctx->pc = 0x25b970u;

    // 0x25b970: 0xc48d0008  lwc1        $f13, 0x8($a0)
    ctx->pc = 0x25b970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25b974: 0x8047b88  j           func_11EE20
    ctx->pc = 0x25B974u;
    ctx->pc = 0x25B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B974u;
    // 0x25b978: 0xc48c0000  lwc1        $f12, 0x0($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    sub_0011EE20_0x11ee20(rdram, ctx, runtime); return;
    ctx->pc = 0x25B97Cu;
}
