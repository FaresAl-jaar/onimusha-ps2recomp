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

// Function: sub_006687B8
// Address: 0x6687b8 - 0x6687ec
void sub_006687B8_0x6687b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_006687B8_0x6687b8");
#endif

    ctx->pc = 0x6687b8u;

    // 0x6687b8: 0x0  nop
    ctx->pc = 0x6687b8u;
    // NOP
    // 0x6687bc: 0x5da8  .word       0x00005DA8                   # mfsa        $t3 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6687bcu;
    SET_GPR_U32(ctx, 11, ctx->sa);
    // 0x6687c0: 0x5dc0  sll         $t3, $zero, 23
    ctx->pc = 0x6687c0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
    // 0x6687c4: 0x61a8  .word       0x000061A8                   # mfsa        $t4 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6687c4u;
    SET_GPR_U32(ctx, 12, ctx->sa);
    // 0x6687c8: 0x7512  .word       0x00007512                   # mflo        $t6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6687c8u;
    SET_GPR_U64(ctx, 14, ctx->lo);
    // 0x6687cc: 0x7530  tge         $zero, $zero, 468
    ctx->pc = 0x6687ccu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x6687d0: 0xc350  .word       0x0000C350                   # mfhi        $t8 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6687d0u;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x6687d4: 0xea24  .word       0x0000EA24                   # and         $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6687d4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x6687d8: 0xea60  .word       0x0000EA60                   # add         $sp, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6687d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
    // 0x6687dc: 0x0  nop
    ctx->pc = 0x6687dcu;
    // NOP
    // 0x6687e0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x6687e0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    // 0x6687e4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x6687e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    // 0x6687e8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x6687e8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    ctx->pc = 0x6687ecu;
}
