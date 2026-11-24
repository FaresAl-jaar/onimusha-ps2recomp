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

// Function: sub_00664388
// Address: 0x664388 - 0x664480
void sub_00664388_0x664388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00664388_0x664388");
#endif

    switch (ctx->pc) {
        case 0x664398u: goto label_664398;
        default: break;
    }

    ctx->pc = 0x664388u;

    // 0x664388: 0x12bd78  dsll        $s7, $s2, 21
    ctx->pc = 0x664388u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 21);
    // 0x66438c: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x66438cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664390: 0x12bd78  dsll        $s7, $s2, 21
    ctx->pc = 0x664390u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 21);
    // 0x664394: 0x12bd8c  .word       0x0012BD8C                   # syscall     758 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x664394u;
    ctx->pc = 0x664398u;
runtime->handleSyscall(rdram, ctx, 0x4AF6u);
label_664398:
    // 0x664398: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664398u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x66439c: 0x12bb7c  dsll32      $s7, $s2, 13
    ctx->pc = 0x66439cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << (32 + 13));
    // 0x6643a0: 0x12bd60  .word       0x0012BD60                   # add         $s7, $zero, $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6643a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x6643a4: 0x12bd60  .word       0x0012BD60                   # add         $s7, $zero, $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6643a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x6643a8: 0x12bd60  .word       0x0012BD60                   # add         $s7, $zero, $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6643a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x6643ac: 0x12bd60  .word       0x0012BD60                   # add         $s7, $zero, $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6643acu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x6643b0: 0x12bd60  .word       0x0012BD60                   # add         $s7, $zero, $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6643b0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x6643b4: 0x12bd60  .word       0x0012BD60                   # add         $s7, $zero, $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6643b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x6643b8: 0x12bd60  .word       0x0012BD60                   # add         $s7, $zero, $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6643b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x6643bc: 0x12bd60  .word       0x0012BD60                   # add         $s7, $zero, $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6643bcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x6643c0: 0x12bd60  .word       0x0012BD60                   # add         $s7, $zero, $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6643c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x6643c4: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x6643c4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x6643c8: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x6643c8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x6643cc: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x6643ccu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x6643d0: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x6643d0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x6643d4: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x6643d4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x6643d8: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x6643d8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x6643dc: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x6643dcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x6643e0: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x6643e0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x6643e4: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x6643e4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x6643e8: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x6643e8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x6643ec: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x6643ecu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x6643f0: 0x12bda0  .word       0x0012BDA0                   # add         $s7, $zero, $s2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6643f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x6643f4: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x6643f4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x6643f8: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x6643f8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x6643fc: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x6643fcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664400: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664400u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664404: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664404u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664408: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664408u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x66440c: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x66440cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664410: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664410u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664414: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664414u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664418: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664418u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x66441c: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x66441cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664420: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664420u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664424: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664424u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664428: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664428u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x66442c: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x66442cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664430: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664430u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664434: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664434u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664438: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664438u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x66443c: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x66443cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664440: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664440u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664444: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664444u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664448: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664448u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x66444c: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x66444cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664450: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664450u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664454: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664454u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664458: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664458u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x66445c: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x66445cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664460: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664460u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664464: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664464u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664468: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x664468u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x66446c: 0x12bbb8  dsll        $s7, $s2, 14
    ctx->pc = 0x66446cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << 14);
    // 0x664470: 0x12bda0  .word       0x0012BDA0                   # add         $s7, $zero, $s2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x664470u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x664474: 0x0  nop
    ctx->pc = 0x664474u;
    // NOP
    // 0x664478: 0x2020100  .word       0x02020100                   # sll         $zero, $v0, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x664478u;
    
    // 0x66447c: 0x3030303  .word       0x03030303                   # sra         $zero, $v1, 12 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x66447cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 3), 12));
    ctx->pc = 0x664480u;
}
