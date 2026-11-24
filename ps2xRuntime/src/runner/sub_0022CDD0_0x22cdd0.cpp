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

// Function: sub_0022CDD0
// Address: 0x22cdd0 - 0x22cecc
void sub_0022CDD0_0x22cdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CDD0_0x22cdd0");
#endif

    switch (ctx->pc) {
        case 0x22ce3cu: goto label_22ce3c;
        default: break;
    }

    ctx->pc = 0x22cdd0u;

    // 0x22cdd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22cdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22cdd4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x22cdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x22cdd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22cdd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cddc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x22cddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22cde0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x22cde0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cde4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x22cde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x22cde8: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x22cde8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x22cdec: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x22cdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x22cdf0: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x22cdf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x22cdf4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x22cdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x22cdf8: 0x2613000f  addiu       $s3, $s0, 0xF
    ctx->pc = 0x22cdf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x22cdfc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x22cdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x22ce00: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22ce00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ce04: 0xa6140002  sh          $s4, 0x2($s0)
    ctx->pc = 0x22ce04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 20));
    // 0x22ce08: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x22ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x22ce0c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x22ce0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ce10: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x22ce10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22ce14: 0x2603009c  addiu       $v1, $s0, 0x9C
    ctx->pc = 0x22ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x22ce18: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x22ce18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x22ce1c: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x22ce1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x22ce20: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x22ce20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ce24: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x22ce24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ce28: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x22ce28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x22ce2c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22ce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x22ce30: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x22ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x22ce34: 0xc08b2e8  jal         func_22CBA0
    ctx->pc = 0x22CE34u;
    SET_GPR_U32(ctx, 31, 0x22CE3Cu);
    ctx->pc = 0x22CE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CE34u;
    // 0x22ce38: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CBA0u, 0x22CE34u, 0x22CE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE3Cu;
label_22ce3c:
    // 0x22ce3c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22CE3Cu;
    {
        const bool branch_taken_0x22ce3c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x22ce3c) {
            ctx->pc = 0x22CE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CE3Cu;
            // 0x22ce40: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CE50u;
            goto label_22ce50;
        }
    }
    ctx->pc = 0x22CE44u;
    // 0x22ce44: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x22CE44u;
    {
        const bool branch_taken_0x22ce44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE44u;
        // 0x22ce48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce44) {
            ctx->pc = 0x22CEACu;
            goto label_22ceac;
        }
    }
    ctx->pc = 0x22CE4Cu;
    // 0x22ce4c: 0x0  nop
    ctx->pc = 0x22ce4cu;
    // NOP
label_22ce50:
    // 0x22ce50: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x22ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x22ce54: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x22ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x22ce58: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x22ce58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x22ce5c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x22ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x22ce60: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x22ce60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x22ce64: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x22ce64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x22ce68: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x22ce68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x22ce6c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x22ce6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x22ce70: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x22ce70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22ce74: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x22ce74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x22ce78: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x22ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x22ce7c: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x22ce7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x22ce80: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x22ce80u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22ce84: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x22ce84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ce88: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x22ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x22ce8c: 0xa6140098  sh          $s4, 0x98($s0)
    ctx->pc = 0x22ce8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 20));
    // 0x22ce90: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22ce94: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x22ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x22ce98: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x22ce98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
    // 0x22ce9c: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x22ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x22cea0: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x22cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
    // 0x22cea4: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x22cea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x22cea8: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x22cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_22ceac:
    // 0x22ceac: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x22ceacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ceb0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x22ceb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22ceb4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x22ceb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ceb8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x22ceb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22cebc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22cebcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22cec0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x22cec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22cec4: 0x3e00008  jr          $ra
    ctx->pc = 0x22CEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEC4u;
        // 0x22cec8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CECCu;
}
