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

// Function: sub_0067C950
// Address: 0x67c950 - 0x67c994
void sub_0067C950_0x67c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0067C950_0x67c950");
#endif

    ctx->pc = 0x67c950u;

    // 0x67c950: 0x3196a0  .word       0x003196A0                   # add         $s2, $at, $s1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c950u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
    // 0x67c954: 0x319550  .word       0x00319550                   # mfhi        $s2 # 00310540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c954u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x67c958: 0x319598  .word       0x00319598                   # mult        $s2, $at, $s1 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x67c958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x67c95c: 0x3195e8  .word       0x003195E8                   # mfsa        $s2 # 003105C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x67c95cu;
    SET_GPR_U32(ctx, 18, ctx->sa);
    // 0x67c960: 0x319620  .word       0x00319620                   # add         $s2, $at, $s1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c960u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
    // 0x67c964: 0x3196a0  .word       0x003196A0                   # add         $s2, $at, $s1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c964u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
    // 0x67c968: 0x319658  .word       0x00319658                   # mult        $s2, $at, $s1 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x67c968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x67c96c: 0x0  nop
    ctx->pc = 0x67c96cu;
    // NOP
    // 0x67c970: 0x31a678  .word       0x0031A678                   # dsll        $s4, $s1, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c970u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) << 25);
    // 0x67c974: 0x31a680  .word       0x0031A680                   # sll         $s4, $s1, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c974u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 26));
    // 0x67c978: 0x31a740  .word       0x0031A740                   # sll         $s4, $s1, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c978u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 29));
    // 0x67c97c: 0x31a778  .word       0x0031A778                   # dsll        $s4, $s1, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c97cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) << 29);
    // 0x67c980: 0x31a7c0  .word       0x0031A7C0                   # sll         $s4, $s1, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c980u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 31));
    // 0x67c984: 0x31a810  .word       0x0031A810                   # mfhi        $s5 # 00310000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c984u;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x67c988: 0x64257325  daddiu      $a1, $at, 0x7325
    ctx->pc = 0x67c988u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29477);
    // 0x67c98c: 0x0  nop
    ctx->pc = 0x67c98cu;
    // NOP
    // 0x67c990: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x67c990u;
    SET_GPR_U32(ctx, 8, 0x00000000);
    ctx->pc = 0x67c994u;
}
