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

// Function: sub_003AFF60
// Address: 0x3aff60 - 0x3b004c
void sub_003AFF60_0x3aff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AFF60_0x3aff60");
#endif

    switch (ctx->pc) {
        case 0x3affb0u: goto label_3affb0;
        case 0x3affd8u: goto label_3affd8;
        case 0x3b0004u: goto label_3b0004;
        default: break;
    }

    ctx->pc = 0x3aff60u;

    // 0x3aff60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3aff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3aff64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3aff64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3aff68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3aff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3aff6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3aff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3aff70: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3aff70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aff74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3aff74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3aff78: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3aff78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aff7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3aff7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3aff80: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3aff80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aff84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3aff84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3aff88: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3aff88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aff8c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3aff8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aff90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3aff90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aff94: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x3aff94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x3aff98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3aff98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aff9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aff9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3affa0: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x3affa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x3affa4: 0x2508fef0  addiu       $t0, $t0, -0x110
    ctx->pc = 0x3affa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967024));
    // 0x3affa8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3AFFA8u;
    SET_GPR_U32(ctx, 31, 0x3AFFB0u);
    ctx->pc = 0x3AFFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFFA8u;
    // 0x3affac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3AFFA8u, 0x3AFFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFFB0u;
label_3affb0:
    // 0x3affb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3affb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3affb4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3AFFB4u;
    {
        const bool branch_taken_0x3affb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFFB4u;
        // 0x3affb8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3affb4) {
            ctx->pc = 0x3B0020u;
            goto label_3b0020;
        }
    }
    ctx->pc = 0x3AFFBCu;
    // 0x3affbc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3affbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3affc0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3affc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3affc4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3affc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3affc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3affc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3affcc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3affccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3affd0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3AFFD0u;
    SET_GPR_U32(ctx, 31, 0x3AFFD8u);
    ctx->pc = 0x3AFFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFFD0u;
    // 0x3affd4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3AFFD0u, 0x3AFFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFFD8u;
label_3affd8:
    // 0x3affd8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3affd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3affdc: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x3affdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3affe0: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x3affe0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x3affe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3affe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3affe8: 0xa6020528  sh          $v0, 0x528($s0)
    ctx->pc = 0x3affe8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 2));
    // 0x3affec: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3affecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3afff0: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3afff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3afff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3afff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3afff8: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3afff8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3afffc: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3AFFFCu;
    SET_GPR_U32(ctx, 31, 0x3B0004u);
    ctx->pc = 0x3B0000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFFFCu;
    // 0x3b0000: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3AFFFCu, 0x3B0004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0004u;
label_3b0004:
    // 0x3b0004: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3b0004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3b0008: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3b0008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3b000c: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x3b000cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x3b0010: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x3b0010u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x3b0014: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x3b0014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b0018: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0018u;
    {
        const bool branch_taken_0x3b0018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0018u;
        // 0x3b001c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0018) {
            ctx->pc = 0x3B0028u;
            goto label_3b0028;
        }
    }
    ctx->pc = 0x3B0020u;
label_3b0020:
    // 0x3b0020: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b0020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0024: 0x0  nop
    ctx->pc = 0x3b0024u;
    // NOP
label_3b0028:
    // 0x3b0028: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3b0028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b002c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3b002cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b0030: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b0030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b0034: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b0034u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b0038: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b0038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b003c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b003cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b0040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b0040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0044: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0044u;
        // 0x3b0048: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B004Cu;
}
