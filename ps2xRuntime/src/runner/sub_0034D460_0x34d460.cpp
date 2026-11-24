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

// Function: sub_0034D460
// Address: 0x34d460 - 0x34d530
void sub_0034D460_0x34d460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D460_0x34d460");
#endif

    switch (ctx->pc) {
        case 0x34d478u: goto label_34d478;
        case 0x34d4f8u: goto label_34d4f8;
        default: break;
    }

    ctx->pc = 0x34d460u;

    // 0x34d460: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x34d460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x34d464: 0x8c25f680  lw          $a1, -0x980($at)
    ctx->pc = 0x34d464u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8BF680u));
    // 0x34d468: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x34d468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34d46c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x34D46Cu;
    {
        const bool branch_taken_0x34d46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D46Cu;
        // 0x34d470: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d46c) {
            ctx->pc = 0x34D4A0u;
            goto label_34d4a0;
        }
    }
    ctx->pc = 0x34D474u;
    // 0x34d474: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x34d474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_34d478:
    // 0x34d478: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x34d478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x34d47c: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D47Cu;
    {
        const bool branch_taken_0x34d47c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x34d47c) {
            ctx->pc = 0x34D490u;
            goto label_34d490;
        }
    }
    ctx->pc = 0x34D484u;
    // 0x34d484: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x34D484u;
    {
        const bool branch_taken_0x34d484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d484) {
            ctx->pc = 0x34D528u;
            goto label_34d528;
        }
    }
    ctx->pc = 0x34D48Cu;
    // 0x34d48c: 0x0  nop
    ctx->pc = 0x34d48cu;
    // NOP
label_34d490:
    // 0x34d490: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x34d490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34d494: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x34d494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34d498: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x34D498u;
    {
        const bool branch_taken_0x34d498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d498) {
            ctx->pc = 0x34D478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d478;
        }
    }
    ctx->pc = 0x34D4A0u;
label_34d4a0:
    // 0x34d4a0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x34d4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34d4a4: 0x28620021  slti        $v0, $v1, 0x21
    ctx->pc = 0x34d4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x34d4a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D4A8u;
    {
        const bool branch_taken_0x34d4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D4A8u;
        // 0x34d4ac: 0x28610025  slti        $at, $v1, 0x25 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)37) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d4a8) {
            ctx->pc = 0x34D4C0u;
            goto label_34d4c0;
        }
    }
    ctx->pc = 0x34D4B0u;
    // 0x34d4b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D4B0u;
    {
        const bool branch_taken_0x34d4b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D4B0u;
        // 0x34d4b4: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d4b0) {
            ctx->pc = 0x34D4C0u;
            goto label_34d4c0;
        }
    }
    ctx->pc = 0x34D4B8u;
    // 0x34d4b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34D4B8u;
    {
        const bool branch_taken_0x34d4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D4B8u;
        // 0x34d4bc: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d4b8) {
            ctx->pc = 0x34D4E0u;
            goto label_34d4e0;
        }
    }
    ctx->pc = 0x34D4C0u;
label_34d4c0:
    // 0x34d4c0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34d4c4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D4C4u;
    {
        const bool branch_taken_0x34d4c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x34D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D4C4u;
        // 0x34d4c8: 0x64020018  daddiu      $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d4c4) {
            ctx->pc = 0x34D4D8u;
            goto label_34d4d8;
        }
    }
    ctx->pc = 0x34D4CCu;
    // 0x34d4cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34D4CCu;
    {
        const bool branch_taken_0x34d4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d4cc) {
            ctx->pc = 0x34D4E0u;
            goto label_34d4e0;
        }
    }
    ctx->pc = 0x34D4D4u;
    // 0x34d4d4: 0x0  nop
    ctx->pc = 0x34d4d4u;
    // NOP
label_34d4d8:
    // 0x34d4d8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x34d4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34d4dc: 0x0  nop
    ctx->pc = 0x34d4dcu;
    // NOP
label_34d4e0:
    // 0x34d4e0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x34d4e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34d4e4: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34D4E4u;
    {
        const bool branch_taken_0x34d4e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34d4e4) {
            ctx->pc = 0x34D520u;
            goto label_34d520;
        }
    }
    ctx->pc = 0x34D4ECu;
    // 0x34d4ec: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x34d4ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34d4f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34D4F0u;
    {
        const bool branch_taken_0x34d4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d4f0) {
            ctx->pc = 0x34D520u;
            goto label_34d520;
        }
    }
    ctx->pc = 0x34D4F8u;
label_34d4f8:
    // 0x34d4f8: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x34d4f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x34d4fc: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D4FCu;
    {
        const bool branch_taken_0x34d4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x34D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D4FCu;
        // 0x34d500: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d4fc) {
            ctx->pc = 0x34D510u;
            goto label_34d510;
        }
    }
    ctx->pc = 0x34D504u;
    // 0x34d504: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34D504u;
    {
        const bool branch_taken_0x34d504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d504) {
            ctx->pc = 0x34D528u;
            goto label_34d528;
        }
    }
    ctx->pc = 0x34D50Cu;
    // 0x34d50c: 0x0  nop
    ctx->pc = 0x34d50cu;
    // NOP
label_34d510:
    // 0x34d510: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x34d510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x34d514: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x34d514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34d518: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x34D518u;
    {
        const bool branch_taken_0x34d518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d518) {
            ctx->pc = 0x34D4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d4f8;
        }
    }
    ctx->pc = 0x34D520u;
label_34d520:
    // 0x34d520: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34d520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d524: 0x0  nop
    ctx->pc = 0x34d524u;
    // NOP
label_34d528:
    // 0x34d528: 0x3e00008  jr          $ra
    ctx->pc = 0x34D528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D530u;
}
