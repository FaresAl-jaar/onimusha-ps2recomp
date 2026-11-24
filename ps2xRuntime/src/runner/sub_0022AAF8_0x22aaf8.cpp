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

// Function: sub_0022AAF8
// Address: 0x22aaf8 - 0x22abf4
void sub_0022AAF8_0x22aaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AAF8_0x22aaf8");
#endif

    switch (ctx->pc) {
        case 0x22ab60u: goto label_22ab60;
        default: break;
    }

    ctx->pc = 0x22aaf8u;

    // 0x22aaf8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22aaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22aafc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ab00: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x22ab00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x22ab04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22ab04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab08: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x22ab08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x22ab0c: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x22ab0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x22ab10: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x22ab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x22ab14: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x22ab14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x22ab18: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x22ab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x22ab1c: 0x2613000f  addiu       $s3, $s0, 0xF
    ctx->pc = 0x22ab1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x22ab20: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22ab20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22ab24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22ab24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab28: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x22ab28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x22ab2c: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x22ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x22ab30: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x22ab30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab34: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x22ab34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22ab38: 0x27a30024  addiu       $v1, $sp, 0x24
    ctx->pc = 0x22ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x22ab3c: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x22ab3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x22ab40: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x22ab40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x22ab44: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x22ab44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab48: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x22ab48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab4c: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x22ab4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x22ab50: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22ab50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x22ab54: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x22ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x22ab58: 0xc08aa7a  jal         func_22A9E8
    ctx->pc = 0x22AB58u;
    SET_GPR_U32(ctx, 31, 0x22AB60u);
    ctx->pc = 0x22AB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB58u;
    // 0x22ab5c: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A9E8u, 0x22AB58u, 0x22AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB60u;
label_22ab60:
    // 0x22ab60: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AB60u;
    {
        const bool branch_taken_0x22ab60 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x22ab60) {
            ctx->pc = 0x22AB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AB60u;
            // 0x22ab64: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AB70u;
            goto label_22ab70;
        }
    }
    ctx->pc = 0x22AB68u;
    // 0x22ab68: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x22AB68u;
    {
        const bool branch_taken_0x22ab68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB68u;
        // 0x22ab6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab68) {
            ctx->pc = 0x22ABD8u;
            goto label_22abd8;
        }
    }
    ctx->pc = 0x22AB70u;
label_22ab70:
    // 0x22ab70: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x22ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x22ab74: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x22ab74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x22ab78: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x22ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x22ab7c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x22ab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x22ab80: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x22ab80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x22ab84: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x22ab84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x22ab88: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x22ab88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x22ab8c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x22ab8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x22ab90: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x22ab90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22ab94: 0x97a40024  lhu         $a0, 0x24($sp)
    ctx->pc = 0x22ab94u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x22ab98: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x22ab98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x22ab9c: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x22ab9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x22aba0: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x22aba0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22aba4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x22aba4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22aba8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x22aba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x22abac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x22abacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22abb0: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x22abb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x22abb4: 0xa604009c  sh          $a0, 0x9C($s0)
    ctx->pc = 0x22abb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 4));
    // 0x22abb8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x22abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22abbc: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x22abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x22abc0: 0xa6030098  sh          $v1, 0x98($s0)
    ctx->pc = 0x22abc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 3));
    // 0x22abc4: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x22abc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
    // 0x22abc8: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x22abc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
    // 0x22abcc: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x22abccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
    // 0x22abd0: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x22abd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x22abd4: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x22abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_22abd8:
    // 0x22abd8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x22abd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22abdc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x22abdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22abe0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x22abe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22abe4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x22abe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22abe8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22abe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22abec: 0x3e00008  jr          $ra
    ctx->pc = 0x22ABECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ABECu;
        // 0x22abf0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ABECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ABF4u;
}
