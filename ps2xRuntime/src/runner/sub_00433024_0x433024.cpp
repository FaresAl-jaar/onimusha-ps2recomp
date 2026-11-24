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

// Function: sub_00433024
// Address: 0x433024 - 0x4330c0
void sub_00433024_0x433024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00433024_0x433024");
#endif

    ctx->pc = 0x433024u;

    // 0x433024: 0x0  nop
    ctx->pc = 0x433024u;
    // NOP
    // 0x433028: 0x0  nop
    ctx->pc = 0x433028u;
    // NOP
    // 0x43302c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x43302cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x433030: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x433030u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    // 0x433034: 0x0  nop
    ctx->pc = 0x433034u;
    // NOP
    // 0x433038: 0x0  nop
    ctx->pc = 0x433038u;
    // NOP
    // 0x43303c: 0x0  nop
    ctx->pc = 0x43303cu;
    // NOP
    // 0x433040: 0xfff67ffd  sd          $s6, 0x7FFD($ra)
    ctx->pc = 0x433040u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 32765), GPR_U64(ctx, 22));
    // 0x433044: 0x110002  srl         $zero, $s1, 0
    ctx->pc = 0x433044u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 17), 0));
    // 0x433048: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x433048u;
    
    // 0x43304c: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x43304cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    // 0x433050: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x433050u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
    // 0x433054: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x433054u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
    // 0x433058: 0xfa  dsrl        $zero, $zero, 3
    ctx->pc = 0x433058u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 3);
    // 0x43305c: 0x0  nop
    ctx->pc = 0x43305cu;
    // NOP
    // 0x433060: 0x0  nop
    ctx->pc = 0x433060u;
    // NOP
    // 0x433064: 0x0  nop
    ctx->pc = 0x433064u;
    // NOP
    // 0x433068: 0x0  nop
    ctx->pc = 0x433068u;
    // NOP
    // 0x43306c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x43306cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x433070: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x433070u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    // 0x433074: 0x0  nop
    ctx->pc = 0x433074u;
    // NOP
    // 0x433078: 0x0  nop
    ctx->pc = 0x433078u;
    // NOP
    // 0x43307c: 0x0  nop
    ctx->pc = 0x43307cu;
    // NOP
    // 0x433080: 0xfff67ffd  sd          $s6, 0x7FFD($ra)
    ctx->pc = 0x433080u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 32765), GPR_U64(ctx, 22));
    // 0x433084: 0x110002  srl         $zero, $s1, 0
    ctx->pc = 0x433084u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 17), 0));
    // 0x433088: 0x5e8  .word       0x000005E8                   # mfsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x433088u;
    SET_GPR_U32(ctx, 0, ctx->sa);
    // 0x43308c: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x43308cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    // 0x433090: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x433090u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
    // 0x433094: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x433094u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
    // 0x433098: 0xfa  dsrl        $zero, $zero, 3
    ctx->pc = 0x433098u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 3);
    // 0x43309c: 0x0  nop
    ctx->pc = 0x43309cu;
    // NOP
    // 0x4330a0: 0x0  nop
    ctx->pc = 0x4330a0u;
    // NOP
    // 0x4330a4: 0x0  nop
    ctx->pc = 0x4330a4u;
    // NOP
    // 0x4330a8: 0x0  nop
    ctx->pc = 0x4330a8u;
    // NOP
    // 0x4330ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4330acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4330b0: 0x20007  srav        $zero, $v0, $zero
    ctx->pc = 0x4330b0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
    // 0x4330b4: 0x20a20  .word       0x00020A20                   # add         $at, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4330b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
    // 0x4330b8: 0x0  nop
    ctx->pc = 0x4330b8u;
    // NOP
    // 0x4330bc: 0x0  nop
    ctx->pc = 0x4330bcu;
    // NOP
    ctx->pc = 0x4330c0u;
}
