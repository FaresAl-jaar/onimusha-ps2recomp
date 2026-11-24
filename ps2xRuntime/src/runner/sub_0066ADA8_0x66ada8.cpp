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

// Function: sub_0066ADA8
// Address: 0x66ada8 - 0x66adb0
void sub_0066ADA8_0x66ada8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0066ADA8_0x66ada8");
#endif

    ctx->pc = 0x66ada8u;

    // 0x66ada8: 0x30363031  andi        $s6, $at, 0x3031
    ctx->pc = 0x66ada8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12337);
    // 0x66adac: 0x3a323031  xori        $s2, $s1, 0x3031
    ctx->pc = 0x66adacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)12337);
    ctx->pc = 0x66adb0u;
}
