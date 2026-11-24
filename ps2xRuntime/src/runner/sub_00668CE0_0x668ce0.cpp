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

// Function: sub_00668CE0
// Address: 0x668ce0 - 0x668cec
void sub_00668CE0_0x668ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00668CE0_0x668ce0");
#endif

    ctx->pc = 0x668ce0u;

    // 0x668ce0: 0x2c747374  sltiu       $s4, $v1, 0x7374
    ctx->pc = 0x668ce0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)29556) ? 1 : 0);
    // 0x668ce4: 0x6c656820  ldr         $a1, 0x6820($v1)
    ctx->pc = 0x668ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26656); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x668ce8: 0x69745f70  ldl         $s4, 0x5F70($t3)
    ctx->pc = 0x668ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24432); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    ctx->pc = 0x668cecu;
}
