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

// Function: sub_0040E6C4
// Address: 0x40e6c4 - 0x40e6e4
void sub_0040E6C4_0x40e6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040E6C4_0x40e6c4");
#endif

    ctx->pc = 0x40e6c4u;

    // 0x40e6c4: 0x500080  .word       0x00500080                   # sll         $zero, $s0, 2 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x40e6c4u;
    
    // 0x40e6c8: 0x3040160  .word       0x03040160                   # add         $zero, $t8, $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x40e6c8u;
    {     int32_t rs_val = GPR_S32(ctx, 24);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x40e6cc: 0x800080  .word       0x00800080                   # sll         $zero, $zero, 2 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x40e6ccu;
    
    // 0x40e6d0: 0x1800030  tge         $t4, $zero, 0
    ctx->pc = 0x40e6d0u;
    if (GPR_S64(ctx, 12) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x40e6d4: 0x800404  .word       0x00800404                   # sllv        $zero, $zero, $a0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x40e6d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 4) & 0x1F));
    // 0x40e6d8: 0x300060  .word       0x00300060                   # add         $zero, $at, $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x40e6d8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x40e6dc: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x40e6dcu;
    
    // 0x40e6e0: 0x0  nop
    ctx->pc = 0x40e6e0u;
    // NOP
    ctx->pc = 0x40e6e4u;
}
