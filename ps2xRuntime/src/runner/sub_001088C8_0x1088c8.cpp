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

// Function: sub_001088C8
// Address: 0x1088c8 - 0x108988
void sub_001088C8_0x1088c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001088C8_0x1088c8");
#endif

    switch (ctx->pc) {
        case 0x1088d8u: goto label_1088d8;
        default: break;
    }

    ctx->pc = 0x1088c8u;

    // 0x1088c8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1088c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1088cc: 0x3c0a0011  lui         $t2, 0x11
    ctx->pc = 0x1088ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17 << 16));
    // 0x1088d0: 0x254a8970  addiu       $t2, $t2, -0x7690
    ctx->pc = 0x1088d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294936944));
    // 0x1088d4: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x1088d4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x108970u));
label_1088d8:
    // 0x1088d8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1088d8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1088dc: 0x2042fffc  addi        $v0, $v0, -0x4
    ctx->pc = 0x1088dcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x1088e0: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x1088e0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1088e4: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1088e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1088e8: 0x7b290010  lq          $t1, 0x10($t9)
    ctx->pc = 0x1088e8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x1088ec: 0x7b2a0020  lq          $t2, 0x20($t9)
    ctx->pc = 0x1088ecu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 25), 32)));
    // 0x1088f0: 0x7b2b0030  lq          $t3, 0x30($t9)
    ctx->pc = 0x1088f0u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 25), 48)));
    // 0x1088f4: 0x7b2c0040  lq          $t4, 0x40($t9)
    ctx->pc = 0x1088f4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 25), 64)));
    // 0x1088f8: 0x7b2d0050  lq          $t5, 0x50($t9)
    ctx->pc = 0x1088f8u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 25), 80)));
    // 0x1088fc: 0x7b2e0060  lq          $t6, 0x60($t9)
    ctx->pc = 0x1088fcu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 25), 96)));
    // 0x108900: 0x7b2f0070  lq          $t7, 0x70($t9)
    ctx->pc = 0x108900u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 25), 112)));
    // 0x108904: 0x710341e8  pminh       $t0, $t0, $v1
    ctx->pc = 0x108904u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x108908: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x108908u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x10890c: 0x712349e8  pminh       $t1, $t1, $v1
    ctx->pc = 0x10890cu;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x108910: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x108910u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x108914: 0x71284ec8  ppacb       $t1, $t1, $t0
    ctx->pc = 0x108914u;
    SET_GPR_VEC(ctx, 9, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x108918: 0x714351e8  pminh       $t2, $t2, $v1
    ctx->pc = 0x108918u;
    SET_GPR_VEC(ctx, 10, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x10891c: 0x714051c8  pmaxh       $t2, $t2, $zero
    ctx->pc = 0x10891cu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x108920: 0x716359e8  pminh       $t3, $t3, $v1
    ctx->pc = 0x108920u;
    SET_GPR_VEC(ctx, 11, PS2_PMINH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x108924: 0x716059c8  pmaxh       $t3, $t3, $zero
    ctx->pc = 0x108924u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x108928: 0x716a5ec8  ppacb       $t3, $t3, $t2
    ctx->pc = 0x108928u;
    SET_GPR_VEC(ctx, 11, PS2_PPACB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x10892c: 0x718361e8  pminh       $t4, $t4, $v1
    ctx->pc = 0x10892cu;
    SET_GPR_VEC(ctx, 12, PS2_PMINH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 3)));
    // 0x108930: 0x718061c8  pmaxh       $t4, $t4, $zero
    ctx->pc = 0x108930u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x108934: 0x71a369e8  pminh       $t5, $t5, $v1
    ctx->pc = 0x108934u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x108938: 0x71a069c8  pmaxh       $t5, $t5, $zero
    ctx->pc = 0x108938u;
    SET_GPR_VEC(ctx, 13, PS2_PMAXH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 0)));
    // 0x10893c: 0x71ac6ec8  ppacb       $t5, $t5, $t4
    ctx->pc = 0x10893cu;
    SET_GPR_VEC(ctx, 13, PS2_PPACB(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x108940: 0x71c371e8  pminh       $t6, $t6, $v1
    ctx->pc = 0x108940u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x108944: 0x71c071c8  pmaxh       $t6, $t6, $zero
    ctx->pc = 0x108944u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 0)));
    // 0x108948: 0x71e379e8  pminh       $t7, $t7, $v1
    ctx->pc = 0x108948u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x10894c: 0x71e079c8  pmaxh       $t7, $t7, $zero
    ctx->pc = 0x10894cu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x108950: 0x71ee7ec8  ppacb       $t7, $t7, $t6
    ctx->pc = 0x108950u;
    SET_GPR_VEC(ctx, 15, PS2_PPACB(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x108954: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x108954u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x108958: 0x7c8b0010  sq          $t3, 0x10($a0)
    ctx->pc = 0x108958u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 11));
    // 0x10895c: 0x7c8d0020  sq          $t5, 0x20($a0)
    ctx->pc = 0x10895cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 13));
    // 0x108960: 0x7c8f0030  sq          $t7, 0x30($a0)
    ctx->pc = 0x108960u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 15));
    // 0x108964: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x108964u;
    {
        const bool branch_taken_0x108964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108964u;
        // 0x108968: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108964) {
            ctx->pc = 0x1088D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1088d8;
        }
    }
    ctx->pc = 0x10896Cu;
    // 0x10896c: 0x0  nop
    ctx->pc = 0x10896cu;
    // NOP
    // 0x108970: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x108970u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x108974: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x108974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x108978: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x108978u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x10897c: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x10897cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x108980: 0x3e00008  jr          $ra
    ctx->pc = 0x108980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108988u;
}
