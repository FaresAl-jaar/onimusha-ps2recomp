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

// Function: sub_0066DA60
// Address: 0x66da60 - 0x66da70
void sub_0066DA60_0x66da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0066DA60_0x66da60");
#endif

    ctx->pc = 0x66da60u;

    // 0x66da60: 0x30303245  andi        $s0, $at, 0x3245
    ctx->pc = 0x66da60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12869);
    // 0x66da64: 0x32313035  andi        $s1, $s1, 0x3035
    ctx->pc = 0x66da64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)12341);
    // 0x66da68: 0x3a383138  xori        $t8, $s1, 0x3138
    ctx->pc = 0x66da68u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)12600);
    // 0x66da6c: 0x6e614320  ldr         $at, 0x4320($s3)
    ctx->pc = 0x66da6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    ctx->pc = 0x66da70u;
}
