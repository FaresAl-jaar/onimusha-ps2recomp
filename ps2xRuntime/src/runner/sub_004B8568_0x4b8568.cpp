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

// Function: sub_004B8568
// Address: 0x4b8568 - 0x4b86d0
void sub_004B8568_0x4b8568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8568_0x4b8568");
#endif

    switch (ctx->pc) {
        case 0x4b86b4u: goto label_4b86b4;
        default: break;
    }

    ctx->pc = 0x4b8568u;

    // 0x4b8568: 0x201820  add         $v1, $at, $zero
    ctx->pc = 0x4b8568u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x4b856c: 0x201838  .word       0x00201838                   # dsll        $v1, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4b856cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << 0);
    // 0x4b8570: 0x201850  .word       0x00201850                   # mfhi        $v1 # 00200040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4b8570u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4b8574: 0x201880  .word       0x00201880                   # sll         $v1, $zero, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4b8574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
    // 0x4b8578: 0x201900  .word       0x00201900                   # sll         $v1, $zero, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4b8578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
    // 0x4b857c: 0x201928  .word       0x00201928                   # mfsa        $v1 # 00200100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4b857cu;
    SET_GPR_U32(ctx, 3, ctx->sa);
    // 0x4b8580: 0x201968  .word       0x00201968                   # mfsa        $v1 # 00200140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4b8580u;
    SET_GPR_U32(ctx, 3, ctx->sa);
    // 0x4b8584: 0x201980  .word       0x00201980                   # sll         $v1, $zero, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4b8584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
    // 0x4b8588: 0x0  nop
    ctx->pc = 0x4b8588u;
    // NOP
    // 0x4b858c: 0x2019e8  .word       0x002019E8                   # mfsa        $v1 # 002001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4b858cu;
    SET_GPR_U32(ctx, 3, ctx->sa);
    // 0x4b8590: 0x201a00  .word       0x00201A00                   # sll         $v1, $zero, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4b8590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
    // 0x4b8594: 0x201a18  .word       0x00201A18                   # mult        $v1, $at, $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4b8594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4b8598: 0x201a30  tge         $at, $zero, 104
    ctx->pc = 0x4b8598u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4b859c: 0x0  nop
    ctx->pc = 0x4b859cu;
    // NOP
    // 0x4b85a0: 0x0  nop
    ctx->pc = 0x4b85a0u;
    // NOP
    // 0x4b85a4: 0x0  nop
    ctx->pc = 0x4b85a4u;
    // NOP
    // 0x4b85a8: 0x0  nop
    ctx->pc = 0x4b85a8u;
    // NOP
    // 0x4b85ac: 0x0  nop
    ctx->pc = 0x4b85acu;
    // NOP
    // 0x4b85b0: 0x666418  .word       0x00666418                   # mult        $t4, $v1, $a2 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4b85b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x4b85b4: 0x0  nop
    ctx->pc = 0x4b85b4u;
    // NOP
    // 0x4b85b8: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x4b85b8u;
    
    // 0x4b85bc: 0x50800  sll         $at, $a1, 0
    ctx->pc = 0x4b85bcu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x4b85c0: 0x12000  sll         $a0, $at, 0
    ctx->pc = 0x4b85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x4b85c4: 0x0  nop
    ctx->pc = 0x4b85c4u;
    // NOP
    // 0x4b85c8: 0x0  nop
    ctx->pc = 0x4b85c8u;
    // NOP
    // 0x4b85cc: 0x0  nop
    ctx->pc = 0x4b85ccu;
    // NOP
    // 0x4b85d0: 0x0  nop
    ctx->pc = 0x4b85d0u;
    // NOP
    // 0x4b85d4: 0x0  nop
    ctx->pc = 0x4b85d4u;
    // NOP
    // 0x4b85d8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x4b85d8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x4b85dc: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4b85dcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
    // 0x4b85e0: 0x0  nop
    ctx->pc = 0x4b85e0u;
    // NOP
    // 0x4b85e4: 0x0  nop
    ctx->pc = 0x4b85e4u;
    // NOP
    // 0x4b85e8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4b85e8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    // 0x4b85ec: 0x0  nop
    ctx->pc = 0x4b85ecu;
    // NOP
    // 0x4b85f0: 0x0  nop
    ctx->pc = 0x4b85f0u;
    // NOP
    // 0x4b85f4: 0x0  nop
    ctx->pc = 0x4b85f4u;
    // NOP
    // 0x4b85f8: 0x666440  .word       0x00666440                   # sll         $t4, $a2, 17 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4b85f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 6), 17));
    // 0x4b85fc: 0x0  nop
    ctx->pc = 0x4b85fcu;
    // NOP
    // 0x4b8600: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x4b8600u;
    
    // 0x4b8604: 0x50800  sll         $at, $a1, 0
    ctx->pc = 0x4b8604u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x4b8608: 0x12000  sll         $a0, $at, 0
    ctx->pc = 0x4b8608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x4b860c: 0x0  nop
    ctx->pc = 0x4b860cu;
    // NOP
    // 0x4b8610: 0x0  nop
    ctx->pc = 0x4b8610u;
    // NOP
    // 0x4b8614: 0x0  nop
    ctx->pc = 0x4b8614u;
    // NOP
    // 0x4b8618: 0x0  nop
    ctx->pc = 0x4b8618u;
    // NOP
    // 0x4b861c: 0x0  nop
    ctx->pc = 0x4b861cu;
    // NOP
    // 0x4b8620: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x4b8620u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x4b8624: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4b8624u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
    // 0x4b8628: 0x0  nop
    ctx->pc = 0x4b8628u;
    // NOP
    // 0x4b862c: 0x0  nop
    ctx->pc = 0x4b862cu;
    // NOP
    // 0x4b8630: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4b8630u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    // 0x4b8634: 0x0  nop
    ctx->pc = 0x4b8634u;
    // NOP
    // 0x4b8638: 0x0  nop
    ctx->pc = 0x4b8638u;
    // NOP
    // 0x4b863c: 0x0  nop
    ctx->pc = 0x4b863cu;
    // NOP
    // 0x4b8640: 0x666468  .word       0x00666468                   # mfsa        $t4 # 00660440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4b8640u;
    SET_GPR_U32(ctx, 12, ctx->sa);
    // 0x4b8644: 0x0  nop
    ctx->pc = 0x4b8644u;
    // NOP
    // 0x4b8648: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x4b8648u;
    
    // 0x4b864c: 0x50800  sll         $at, $a1, 0
    ctx->pc = 0x4b864cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x4b8650: 0x12000  sll         $a0, $at, 0
    ctx->pc = 0x4b8650u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x4b8654: 0x0  nop
    ctx->pc = 0x4b8654u;
    // NOP
    // 0x4b8658: 0x0  nop
    ctx->pc = 0x4b8658u;
    // NOP
    // 0x4b865c: 0x0  nop
    ctx->pc = 0x4b865cu;
    // NOP
    // 0x4b8660: 0x0  nop
    ctx->pc = 0x4b8660u;
    // NOP
    // 0x4b8664: 0x0  nop
    ctx->pc = 0x4b8664u;
    // NOP
    // 0x4b8668: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x4b8668u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x4b866c: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4b866cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
    // 0x4b8670: 0x0  nop
    ctx->pc = 0x4b8670u;
    // NOP
    // 0x4b8674: 0x0  nop
    ctx->pc = 0x4b8674u;
    // NOP
    // 0x4b8678: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4b8678u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    // 0x4b867c: 0x0  nop
    ctx->pc = 0x4b867cu;
    // NOP
    // 0x4b8680: 0x0  nop
    ctx->pc = 0x4b8680u;
    // NOP
    // 0x4b8684: 0x0  nop
    ctx->pc = 0x4b8684u;
    // NOP
    // 0x4b8688: 0xc0  sll         $zero, $zero, 3
    ctx->pc = 0x4b8688u;
    
    // 0x4b868c: 0xf0  tge         $zero, $zero, 3
    ctx->pc = 0x4b868cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4b8690: 0x160  .word       0x00000160                   # add         $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4b8690u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x4b8694: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4b8694u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x4b8698: 0x0  nop
    ctx->pc = 0x4b8698u;
    // NOP
    // 0x4b869c: 0x160  .word       0x00000160                   # add         $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4b869cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x4b86a0: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4b86a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x4b86a4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x4b86a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x4b86a8: 0x0  nop
    ctx->pc = 0x4b86a8u;
    // NOP
    // 0x4b86ac: 0x0  nop
    ctx->pc = 0x4b86acu;
    // NOP
    // 0x4b86b0: 0x5dcc  syscall     375
    ctx->pc = 0x4b86b0u;
    ctx->pc = 0x4B86B4u;
runtime->handleSyscall(rdram, ctx, 0x177u);
label_4b86b4:
    // 0x4b86b4: 0x120  .word       0x00000120                   # add         $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4b86b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x4b86b8: 0x0  nop
    ctx->pc = 0x4b86b8u;
    // NOP
    // 0x4b86bc: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4b86bcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    // 0x4b86c0: 0xbb80  sll         $s7, $zero, 14
    ctx->pc = 0x4b86c0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
    // 0x4b86c4: 0x81c0  sll         $s0, $zero, 7
    ctx->pc = 0x4b86c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
    // 0x4b86c8: 0x0  nop
    ctx->pc = 0x4b86c8u;
    // NOP
    // 0x4b86cc: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x4b86ccu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    ctx->pc = 0x4b86d0u;
}
