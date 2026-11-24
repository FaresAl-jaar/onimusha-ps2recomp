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

// Function: sub_0022C908
// Address: 0x22c908 - 0x22c9fc
void sub_0022C908_0x22c908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C908_0x22c908");
#endif

    switch (ctx->pc) {
        case 0x22c970u: goto label_22c970;
        default: break;
    }

    ctx->pc = 0x22c908u;

    // 0x22c908: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22c908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22c90c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c910: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x22c910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x22c914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22c914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c918: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x22c918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x22c91c: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x22c91cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x22c920: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x22c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x22c924: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x22c924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x22c928: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x22c928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x22c92c: 0x2613000f  addiu       $s3, $s0, 0xF
    ctx->pc = 0x22c92cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x22c930: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22c930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22c934: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22c934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c938: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x22c938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x22c93c: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x22c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x22c940: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x22c940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c944: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x22c944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22c948: 0x2603009c  addiu       $v1, $s0, 0x9C
    ctx->pc = 0x22c948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x22c94c: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x22c94cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x22c950: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x22c950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x22c954: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x22c954u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c958: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x22c958u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c95c: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x22c95cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x22c960: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22c960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x22c964: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x22c964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x22c968: 0xc08b1fa  jal         func_22C7E8
    ctx->pc = 0x22C968u;
    SET_GPR_U32(ctx, 31, 0x22C970u);
    ctx->pc = 0x22C96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C968u;
    // 0x22c96c: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C7E8u, 0x22C968u, 0x22C970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C970u;
label_22c970:
    // 0x22c970: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C970u;
    {
        const bool branch_taken_0x22c970 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x22c970) {
            ctx->pc = 0x22C974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C970u;
            // 0x22c974: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C980u;
            goto label_22c980;
        }
    }
    ctx->pc = 0x22C978u;
    // 0x22c978: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x22C978u;
    {
        const bool branch_taken_0x22c978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C978u;
        // 0x22c97c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c978) {
            ctx->pc = 0x22C9E0u;
            goto label_22c9e0;
        }
    }
    ctx->pc = 0x22C980u;
label_22c980:
    // 0x22c980: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x22c980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x22c984: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x22c984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x22c988: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x22c988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x22c98c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x22c98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x22c990: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x22c990u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x22c994: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x22c994u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x22c998: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x22c998u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x22c99c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x22c99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x22c9a0: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x22c9a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22c9a4: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x22c9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x22c9a8: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x22c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x22c9ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22c9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22c9b0: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x22c9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x22c9b4: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x22c9b4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22c9b8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x22c9b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c9bc: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x22c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x22c9c0: 0xa6030098  sh          $v1, 0x98($s0)
    ctx->pc = 0x22c9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 3));
    // 0x22c9c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22c9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c9c8: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x22c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x22c9cc: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x22c9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
    // 0x22c9d0: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x22c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x22c9d4: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x22c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
    // 0x22c9d8: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x22c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x22c9dc: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x22c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_22c9e0:
    // 0x22c9e0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x22c9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c9e4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x22c9e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c9e8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x22c9e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c9ec: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x22c9ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c9f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22c9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22c9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x22C9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9F4u;
        // 0x22c9f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C9FCu;
}
