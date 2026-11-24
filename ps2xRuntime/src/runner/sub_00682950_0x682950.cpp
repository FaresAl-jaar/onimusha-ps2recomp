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

// Function: sub_00682950
// Address: 0x682950 - 0x682990
void sub_00682950_0x682950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00682950_0x682950");
#endif

    ctx->pc = 0x682950u;

    // 0x682950: 0x3aa9b8  .word       0x003AA9B8                   # dsll        $s5, $k0, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682950u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 26) << 6);
    // 0x682954: 0x3aaa28  .word       0x003AAA28                   # mfsa        $s5 # 003A0200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x682954u;
    SET_GPR_U32(ctx, 21, ctx->sa);
    // 0x682958: 0x3aaa78  .word       0x003AAA78                   # dsll        $s5, $k0, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682958u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 26) << 9);
    // 0x68295c: 0x3aaab8  .word       0x003AAAB8                   # dsll        $s5, $k0, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x68295cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 26) << 10);
    // 0x682960: 0x3ab3e8  .word       0x003AB3E8                   # mfsa        $s6 # 003A03C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x682960u;
    SET_GPR_U32(ctx, 22, ctx->sa);
    // 0x682964: 0x3ab458  .word       0x003AB458                   # mult        $s6, $at, $k0 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x682964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x682968: 0x3ab4b8  .word       0x003AB4B8                   # dsll        $s6, $k0, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682968u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 26) << 18);
    // 0x68296c: 0x3ab510  .word       0x003AB510                   # mfhi        $s6 # 003A0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x68296cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x682970: 0x3ab560  .word       0x003AB560                   # add         $s6, $at, $k0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682970u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x682974: 0x3ab5b8  .word       0x003AB5B8                   # dsll        $s6, $k0, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682974u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 26) << 22);
    // 0x682978: 0x3ab610  .word       0x003AB610                   # mfhi        $s6 # 003A0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682978u;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x68297c: 0x3ab668  .word       0x003AB668                   # mfsa        $s6 # 003A0640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x68297cu;
    SET_GPR_U32(ctx, 22, ctx->sa);
    // 0x682980: 0x3ab6a8  .word       0x003AB6A8                   # mfsa        $s6 # 003A0680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x682980u;
    SET_GPR_U32(ctx, 22, ctx->sa);
    // 0x682984: 0x0  nop
    ctx->pc = 0x682984u;
    // NOP
    // 0x682988: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682988u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x68298c: 0x0  nop
    ctx->pc = 0x68298cu;
    // NOP
    ctx->pc = 0x682990u;
}
