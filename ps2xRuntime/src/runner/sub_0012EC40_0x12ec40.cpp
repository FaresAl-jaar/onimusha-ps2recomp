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

// Function: sub_0012EC40
// Address: 0x12ec40 - 0x12ed38
void sub_0012EC40_0x12ec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EC40_0x12ec40");
#endif

    switch (ctx->pc) {
        case 0x12ed04u: goto label_12ed04;
        default: break;
    }

    ctx->pc = 0x12ec40u;

    // 0x12ec40: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x12ec40u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12ec44: 0x2d8f0002  sltiu       $t7, $t4, 0x2
    ctx->pc = 0x12ec44u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12ec48: 0x15e00039  bnez        $t7, . + 4 + (0x39 << 2)
    ctx->pc = 0x12EC48u;
    {
        const bool branch_taken_0x12ec48 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC48u;
        // 0x12ec4c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec48) {
            ctx->pc = 0x12ED30u;
            goto label_12ed30;
        }
    }
    ctx->pc = 0x12EC50u;
    // 0x12ec50: 0x8cab0000  lw          $t3, 0x0($a1)
    ctx->pc = 0x12ec50u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ec54: 0x2d6f0002  sltiu       $t7, $t3, 0x2
    ctx->pc = 0x12ec54u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12ec58: 0x15e00035  bnez        $t7, . + 4 + (0x35 << 2)
    ctx->pc = 0x12EC58u;
    {
        const bool branch_taken_0x12ec58 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC58u;
        // 0x12ec5c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec58) {
            ctx->pc = 0x12ED30u;
            goto label_12ed30;
        }
    }
    ctx->pc = 0x12EC60u;
    // 0x12ec60: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x12ec60u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12ec64: 0x398d0004  xori        $t5, $t4, 0x4
    ctx->pc = 0x12ec64u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)4);
    // 0x12ec68: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x12ec68u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12ec6c: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x12ec6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
    // 0x12ec70: 0x11a00004  beqz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EC70u;
    {
        const bool branch_taken_0x12ec70 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC70u;
        // 0x12ec74: 0xac8f0004  sw          $t7, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec70) {
            ctx->pc = 0x12EC84u;
            goto label_12ec84;
        }
    }
    ctx->pc = 0x12EC78u;
    // 0x12ec78: 0x398f0002  xori        $t7, $t4, 0x2
    ctx->pc = 0x12ec78u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)2);
    // 0x12ec7c: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EC7Cu;
    {
        const bool branch_taken_0x12ec7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC7Cu;
        // 0x12ec80: 0x396f0004  xori        $t7, $t3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec7c) {
            ctx->pc = 0x12EC9Cu;
            goto label_12ec9c;
        }
    }
    ctx->pc = 0x12EC84u;
label_12ec84:
    // 0x12ec84: 0x158b0003  bne         $t4, $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EC84u;
    {
        const bool branch_taken_0x12ec84 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 11));
        ctx->pc = 0x12EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC84u;
        // 0x12ec88: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec84) {
            ctx->pc = 0x12EC94u;
            goto label_12ec94;
        }
    }
    ctx->pc = 0x12EC8Cu;
    // 0x12ec8c: 0x3e00008  jr          $ra
    ctx->pc = 0x12EC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC8Cu;
        // 0x12ec90: 0x25e24578  addiu       $v0, $t7, 0x4578 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 17784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EC94u;
label_12ec94:
    // 0x12ec94: 0x3e00008  jr          $ra
    ctx->pc = 0x12EC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC94u;
        // 0x12ec98: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EC9Cu;
label_12ec9c:
    // 0x12ec9c: 0x55e00005  bnel        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12EC9Cu;
    {
        const bool branch_taken_0x12ec9c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ec9c) {
            ctx->pc = 0x12ECA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC9Cu;
            // 0x12eca0: 0x396f0002  xori        $t7, $t3, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECB4u;
            goto label_12ecb4;
        }
    }
    ctx->pc = 0x12ECA4u;
    // 0x12eca4: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x12eca4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x12eca8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12eca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ecac: 0x3e00008  jr          $ra
    ctx->pc = 0x12ECACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECACu;
        // 0x12ecb0: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ECACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12ECB4u;
label_12ecb4:
    // 0x12ecb4: 0x55e00005  bnel        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12ECB4u;
    {
        const bool branch_taken_0x12ecb4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ecb4) {
            ctx->pc = 0x12ECB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ECB4u;
            // 0x12ecb8: 0x8caf0008  lw          $t7, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECCCu;
            goto label_12eccc;
        }
    }
    ctx->pc = 0x12ECBCu;
    // 0x12ecbc: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x12ecbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12ecc0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12ecc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ecc4: 0x3e00008  jr          $ra
    ctx->pc = 0x12ECC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECC4u;
        // 0x12ecc8: 0xac8f0000  sw          $t7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ECC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12ECCCu;
label_12eccc:
    // 0x12eccc: 0x8c8e0008  lw          $t6, 0x8($a0)
    ctx->pc = 0x12ecccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12ecd0: 0xdca50010  ld          $a1, 0x10($a1)
    ctx->pc = 0x12ecd0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x12ecd4: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x12ecd4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12ecd8: 0xdc8d0010  ld          $t5, 0x10($a0)
    ctx->pc = 0x12ecd8u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12ecdc: 0x1a5782b  sltu        $t7, $t5, $a1
    ctx->pc = 0x12ecdcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12ece0: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12ECE0u;
    {
        const bool branch_taken_0x12ece0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECE0u;
        // 0x12ece4: 0xac8e0008  sw          $t6, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ece0) {
            ctx->pc = 0x12ECF8u;
            goto label_12ecf8;
        }
    }
    ctx->pc = 0x12ECE8u;
    // 0x12ece8: 0x25cfffff  addiu       $t7, $t6, -0x1
    ctx->pc = 0x12ece8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x12ecec: 0xd6878  dsll        $t5, $t5, 1
    ctx->pc = 0x12ececu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 1);
    // 0x12ecf0: 0xac8f0008  sw          $t7, 0x8($a0)
    ctx->pc = 0x12ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 15));
    // 0x12ecf4: 0x1a5782b  sltu        $t7, $t5, $a1
    ctx->pc = 0x12ecf4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_12ecf8:
    // 0x12ecf8: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x12ecf8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ecfc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x12ecfcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed00: 0xe773c  dsll32      $t6, $t6, 28
    ctx->pc = 0x12ed00u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 28));
label_12ed04:
    // 0x12ed04: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12ED04u;
    {
        const bool branch_taken_0x12ed04 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ed04) {
            ctx->pc = 0x12ED08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ED04u;
            // 0x12ed08: 0xd7878  dsll        $t7, $t5, 1 (Delay Slot)
            SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) << 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ED18u;
            goto label_12ed18;
        }
    }
    ctx->pc = 0x12ED0Cu;
    // 0x12ed0c: 0x1a5682f  dsubu       $t5, $t5, $a1
    ctx->pc = 0x12ed0cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) - GPR_U64(ctx, 5));
    // 0x12ed10: 0x18e6025  or          $t4, $t4, $t6
    ctx->pc = 0x12ed10u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 14));
    // 0x12ed14: 0xd7878  dsll        $t7, $t5, 1
    ctx->pc = 0x12ed14u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) << 1);
label_12ed18:
    // 0x12ed18: 0xe707a  dsrl        $t6, $t6, 1
    ctx->pc = 0x12ed18u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 1);
    // 0x12ed1c: 0x1e0682d  daddu       $t5, $t7, $zero
    ctx->pc = 0x12ed1cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed20: 0x15c0fff8  bnez        $t6, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12ED20u;
    {
        const bool branch_taken_0x12ed20 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED20u;
        // 0x12ed24: 0x1e5782b  sltu        $t7, $t7, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed20) {
            ctx->pc = 0x12ED04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ed04;
        }
    }
    ctx->pc = 0x12ED28u;
    // 0x12ed28: 0xfc8c0010  sd          $t4, 0x10($a0)
    ctx->pc = 0x12ed28u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 12));
    // 0x12ed2c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12ed2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12ed30:
    // 0x12ed30: 0x3e00008  jr          $ra
    ctx->pc = 0x12ED30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ED30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12ED38u;
}
