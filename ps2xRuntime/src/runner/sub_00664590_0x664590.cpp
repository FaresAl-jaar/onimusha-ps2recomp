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

// Function: sub_00664590
// Address: 0x664590 - 0x6645c8
void sub_00664590_0x664590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00664590_0x664590");
#endif

    ctx->pc = 0x664590u;

    // 0x664590: 0x12f220  .word       0x0012F220                   # add         $fp, $zero, $s2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x664590u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
    // 0x664594: 0x12f230  tge         $zero, $s2, 968
    ctx->pc = 0x664594u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
    // 0x664598: 0x12f240  sll         $fp, $s2, 9
    ctx->pc = 0x664598u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x66459c: 0x12f250  .word       0x0012F250                   # mfhi        $fp # 00120240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x66459cu;
    SET_GPR_U64(ctx, 30, ctx->hi);
    // 0x6645a0: 0x12f260  .word       0x0012F260                   # add         $fp, $zero, $s2 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6645a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
    // 0x6645a4: 0x12f270  tge         $zero, $s2, 969
    ctx->pc = 0x6645a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
    // 0x6645a8: 0x12f280  sll         $fp, $s2, 10
    ctx->pc = 0x6645a8u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x6645ac: 0x0  nop
    ctx->pc = 0x6645acu;
    // NOP
    // 0x6645b0: 0x676f66  .word       0x00676F66                   # xor         $t5, $v1, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6645b0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 7));
    // 0x6645b4: 0x0  nop
    ctx->pc = 0x6645b4u;
    // NOP
    // 0x6645b8: 0x0  nop
    ctx->pc = 0x6645b8u;
    // NOP
    // 0x6645bc: 0x0  nop
    ctx->pc = 0x6645bcu;
    // NOP
    // 0x6645c0: 0x0  nop
    ctx->pc = 0x6645c0u;
    // NOP
    // 0x6645c4: 0x0  nop
    ctx->pc = 0x6645c4u;
    // NOP
    ctx->pc = 0x6645c8u;
}
