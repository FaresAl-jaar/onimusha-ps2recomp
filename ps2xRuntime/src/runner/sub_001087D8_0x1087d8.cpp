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

// Function: sub_001087D8
// Address: 0x1087d8 - 0x1088c4
void sub_001087D8_0x1087d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001087D8_0x1087d8");
#endif

    switch (ctx->pc) {
        case 0x1087e8u: goto label_1087e8;
        default: break;
    }

    ctx->pc = 0x1087d8u;

    // 0x1087d8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1087d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1087dc: 0x3c0a0011  lui         $t2, 0x11
    ctx->pc = 0x1087dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17 << 16));
    // 0x1087e0: 0x254a8970  addiu       $t2, $t2, -0x7690
    ctx->pc = 0x1087e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294936944));
    // 0x1087e4: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x1087e4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x108970u));
label_1087e8:
    // 0x1087e8: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x1087e8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1087ec: 0x2042fffc  addi        $v0, $v0, -0x4
    ctx->pc = 0x1087ecu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x1087f0: 0x78c90010  lq          $t1, 0x10($a2)
    ctx->pc = 0x1087f0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1087f4: 0x78ca0020  lq          $t2, 0x20($a2)
    ctx->pc = 0x1087f4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1087f8: 0x78cb0030  lq          $t3, 0x30($a2)
    ctx->pc = 0x1087f8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1087fc: 0x78cc0040  lq          $t4, 0x40($a2)
    ctx->pc = 0x1087fcu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x108800: 0x78cd0050  lq          $t5, 0x50($a2)
    ctx->pc = 0x108800u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x108804: 0x78ce0060  lq          $t6, 0x60($a2)
    ctx->pc = 0x108804u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x108808: 0x78cf0070  lq          $t7, 0x70($a2)
    ctx->pc = 0x108808u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x10880c: 0x78b90000  lq          $t9, 0x0($a1)
    ctx->pc = 0x10880cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108810: 0x71194108  paddh       $t0, $t0, $t9
    ctx->pc = 0x108810u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x108814: 0x78b90010  lq          $t9, 0x10($a1)
    ctx->pc = 0x108814u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x108818: 0x710341e8  pminh       $t0, $t0, $v1
    ctx->pc = 0x108818u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x10881c: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x10881cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x108820: 0x71394908  paddh       $t1, $t1, $t9
    ctx->pc = 0x108820u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x108824: 0x78b90020  lq          $t9, 0x20($a1)
    ctx->pc = 0x108824u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x108828: 0x712349e8  pminh       $t1, $t1, $v1
    ctx->pc = 0x108828u;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x10882c: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x10882cu;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x108830: 0x71284ec8  ppacb       $t1, $t1, $t0
    ctx->pc = 0x108830u;
    SET_GPR_VEC(ctx, 9, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x108834: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x108834u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x108838: 0x714351e8  pminh       $t2, $t2, $v1
    ctx->pc = 0x108838u;
    SET_GPR_VEC(ctx, 10, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x10883c: 0x78b90030  lq          $t9, 0x30($a1)
    ctx->pc = 0x10883cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x108840: 0x714051c8  pmaxh       $t2, $t2, $zero
    ctx->pc = 0x108840u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x108844: 0x71795908  paddh       $t3, $t3, $t9
    ctx->pc = 0x108844u;
    SET_GPR_VEC(ctx, 11, PS2_PADDH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 25)));
    // 0x108848: 0x78b90040  lq          $t9, 0x40($a1)
    ctx->pc = 0x108848u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x10884c: 0x716359e8  pminh       $t3, $t3, $v1
    ctx->pc = 0x10884cu;
    SET_GPR_VEC(ctx, 11, PS2_PMINH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x108850: 0x716059c8  pmaxh       $t3, $t3, $zero
    ctx->pc = 0x108850u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x108854: 0x716a5ec8  ppacb       $t3, $t3, $t2
    ctx->pc = 0x108854u;
    SET_GPR_VEC(ctx, 11, PS2_PPACB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x108858: 0x71996108  paddh       $t4, $t4, $t9
    ctx->pc = 0x108858u;
    SET_GPR_VEC(ctx, 12, PS2_PADDH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 25)));
    // 0x10885c: 0x78b90050  lq          $t9, 0x50($a1)
    ctx->pc = 0x10885cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x108860: 0x718361e8  pminh       $t4, $t4, $v1
    ctx->pc = 0x108860u;
    SET_GPR_VEC(ctx, 12, PS2_PMINH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 3)));
    // 0x108864: 0x718061c8  pmaxh       $t4, $t4, $zero
    ctx->pc = 0x108864u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x108868: 0x71b96908  paddh       $t5, $t5, $t9
    ctx->pc = 0x108868u;
    SET_GPR_VEC(ctx, 13, PS2_PADDH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 25)));
    // 0x10886c: 0x78b90060  lq          $t9, 0x60($a1)
    ctx->pc = 0x10886cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x108870: 0x71a369e8  pminh       $t5, $t5, $v1
    ctx->pc = 0x108870u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x108874: 0x71a069c8  pmaxh       $t5, $t5, $zero
    ctx->pc = 0x108874u;
    SET_GPR_VEC(ctx, 13, PS2_PMAXH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 0)));
    // 0x108878: 0x71ac6ec8  ppacb       $t5, $t5, $t4
    ctx->pc = 0x108878u;
    SET_GPR_VEC(ctx, 13, PS2_PPACB(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x10887c: 0x71d97108  paddh       $t6, $t6, $t9
    ctx->pc = 0x10887cu;
    SET_GPR_VEC(ctx, 14, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 25)));
    // 0x108880: 0x78b90070  lq          $t9, 0x70($a1)
    ctx->pc = 0x108880u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x108884: 0x71c371e8  pminh       $t6, $t6, $v1
    ctx->pc = 0x108884u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x108888: 0x71c071c8  pmaxh       $t6, $t6, $zero
    ctx->pc = 0x108888u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 0)));
    // 0x10888c: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x10888cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x108890: 0x71f97908  paddh       $t7, $t7, $t9
    ctx->pc = 0x108890u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x108894: 0x71e379e8  pminh       $t7, $t7, $v1
    ctx->pc = 0x108894u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x108898: 0x71e079c8  pmaxh       $t7, $t7, $zero
    ctx->pc = 0x108898u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x10889c: 0x71ee7ec8  ppacb       $t7, $t7, $t6
    ctx->pc = 0x10889cu;
    SET_GPR_VEC(ctx, 15, PS2_PPACB(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x1088a0: 0x7c8b0010  sq          $t3, 0x10($a0)
    ctx->pc = 0x1088a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 11));
    // 0x1088a4: 0x7c8d0020  sq          $t5, 0x20($a0)
    ctx->pc = 0x1088a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 13));
    // 0x1088a8: 0x7c8f0030  sq          $t7, 0x30($a0)
    ctx->pc = 0x1088a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 15));
    // 0x1088ac: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1088acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1088b0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1088b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1088b4: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1088B4u;
    {
        const bool branch_taken_0x1088b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1088B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088B4u;
        // 0x1088b8: 0x24c60080  addiu       $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1088b4) {
            ctx->pc = 0x1087E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1087e8;
        }
    }
    ctx->pc = 0x1088BCu;
    // 0x1088bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1088BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1088BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1088C4u;
}
