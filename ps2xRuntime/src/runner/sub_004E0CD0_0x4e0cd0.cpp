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

// Function: sub_004E0CD0
// Address: 0x4e0cd0 - 0x4e0cf0
void sub_004E0CD0_0x4e0cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E0CD0_0x4e0cd0");
#endif

    ctx->pc = 0x4e0cd0u;

    // 0x4e0cd0: 0x0  nop
    ctx->pc = 0x4e0cd0u;
    // NOP
    // 0x4e0cd4: 0xdac  .word       0x00000DAC                   # dadd        $at, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e0cd4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x4e0cd8: 0x34bc  dsll32      $a2, $zero, 18
    ctx->pc = 0x4e0cd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 18));
    // 0x4e0cdc: 0x7436  tne         $zero, $zero, 464
    ctx->pc = 0x4e0cdcu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e0ce0: 0xcc1a  .word       0x0000CC1A                   # div         $t9, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e0ce0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4e0ce4: 0x13c68  .word       0x00013C68                   # mfsa        $a3 # 00010440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e0ce4u;
    SET_GPR_U32(ctx, 7, ctx->sa);
    // 0x4e0ce8: 0x1c520  .word       0x0001C520                   # add         $t8, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e0ce8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
    // 0x4e0cec: 0x26642  srl         $t4, $v0, 25
    ctx->pc = 0x4e0cecu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 2), 25));
    ctx->pc = 0x4e0cf0u;
}
