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

// Function: sub_0066D700
// Address: 0x66d700 - 0x66d70c
void sub_0066D700_0x66d700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0066D700_0x66d700");
#endif

    ctx->pc = 0x66d700u;

    // 0x66d700: 0x31313045  andi        $s1, $t1, 0x3045
    ctx->pc = 0x66d700u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)12357);
    // 0x66d704: 0x31303531  andi        $s0, $t1, 0x3531
    ctx->pc = 0x66d704u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)13617);
    // 0x66d708: 0x6e61633a  ldr         $at, 0x633A($s3)
    ctx->pc = 0x66d708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25402); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    ctx->pc = 0x66d70cu;
}
