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

// Function: sub_00266C10
// Address: 0x266c10 - 0x266d04
void sub_00266C10_0x266c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266C10_0x266c10");
#endif

    switch (ctx->pc) {
        case 0x266c58u: goto label_266c58;
        case 0x266cb8u: goto label_266cb8;
        case 0x266cf8u: goto label_266cf8;
        default: break;
    }

    ctx->pc = 0x266c10u;

    // 0x266c10: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x266c10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x266c14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266c14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x266c18: 0x2cc10006  sltiu       $at, $a2, 0x6
    ctx->pc = 0x266c18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x266c1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266c20: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x266C20u;
    {
        const bool branch_taken_0x266c20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x266C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C20u;
        // 0x266c24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c20) {
            ctx->pc = 0x266CC0u;
            goto label_266cc0;
        }
    }
    ctx->pc = 0x266C28u;
    // 0x266c28: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x266c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x266c2c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x266c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x266c30: 0x24a55800  addiu       $a1, $a1, 0x5800
    ctx->pc = 0x266c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22528));
    // 0x266c34: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x266c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x266c38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x266c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x266c3c: 0x600008  jr          $v1
    ctx->pc = 0x266C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x266C48u: goto label_266c48;
            case 0x266C60u: goto label_266c60;
            case 0x266C80u: goto label_266c80;
            case 0x266CA0u: goto label_266ca0;
            case 0x266CA8u: goto label_266ca8;
            case 0x266CB0u: goto label_266cb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266C3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x266C44u;
    // 0x266c44: 0x0  nop
    ctx->pc = 0x266c44u;
    // NOP
label_266c48:
    // 0x266c48: 0x8c850094  lw          $a1, 0x94($a0)
    ctx->pc = 0x266c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x266c4c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x266c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x266c50: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x266C50u;
    SET_GPR_U32(ctx, 31, 0x266C58u);
    ctx->pc = 0x266C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266C50u;
    // 0x266c54: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x266C50u, 0x266C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C58u;
label_266c58:
    // 0x266c58: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x266C58u;
    {
        const bool branch_taken_0x266c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266c58) {
            ctx->pc = 0x266CF8u;
            goto label_266cf8;
        }
    }
    ctx->pc = 0x266C60u;
label_266c60:
    // 0x266c60: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x266c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x266c64: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x266c64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x266c68: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x266c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x266c6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x266c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x266c70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266c74: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x266C74u;
    {
        const bool branch_taken_0x266c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C74u;
        // 0x266c78: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c74) {
            ctx->pc = 0x266CF8u;
            goto label_266cf8;
        }
    }
    ctx->pc = 0x266C7Cu;
    // 0x266c7c: 0x0  nop
    ctx->pc = 0x266c7cu;
    // NOP
label_266c80:
    // 0x266c80: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x266c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x266c84: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x266c84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x266c88: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x266c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x266c8c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x266c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x266c90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x266c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x266c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266c98: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x266C98u;
    {
        const bool branch_taken_0x266c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C98u;
        // 0x266c9c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c98) {
            ctx->pc = 0x266CF8u;
            goto label_266cf8;
        }
    }
    ctx->pc = 0x266CA0u;
label_266ca0:
    // 0x266ca0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x266CA0u;
    {
        const bool branch_taken_0x266ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CA0u;
        // 0x266ca4: 0x8f828060  lw          $v0, -0x7FA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ca0) {
            ctx->pc = 0x266CF8u;
            goto label_266cf8;
        }
    }
    ctx->pc = 0x266CA8u;
label_266ca8:
    // 0x266ca8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x266CA8u;
    {
        const bool branch_taken_0x266ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CA8u;
        // 0x266cac: 0x8f828064  lw          $v0, -0x7F9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ca8) {
            ctx->pc = 0x266CF8u;
            goto label_266cf8;
        }
    }
    ctx->pc = 0x266CB0u;
label_266cb0:
    // 0x266cb0: 0xc099b44  jal         func_266D10
    ctx->pc = 0x266CB0u;
    SET_GPR_U32(ctx, 31, 0x266CB8u);
    ctx->pc = 0x266CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266CB0u;
    // 0x266cb4: 0x8c850090  lw          $a1, 0x90($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D10u, 0x266CB0u, 0x266CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266CB8u;
label_266cb8:
    // 0x266cb8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x266CB8u;
    {
        const bool branch_taken_0x266cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266cb8) {
            ctx->pc = 0x266CF8u;
            goto label_266cf8;
        }
    }
    ctx->pc = 0x266CC0u;
label_266cc0:
    // 0x266cc0: 0x28c3000d  slti        $v1, $a2, 0xD
    ctx->pc = 0x266cc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x266cc4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x266CC4u;
    {
        const bool branch_taken_0x266cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x266CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CC4u;
        // 0x266cc8: 0x24c3fff3  addiu       $v1, $a2, -0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266cc4) {
            ctx->pc = 0x266CF8u;
            goto label_266cf8;
        }
    }
    ctx->pc = 0x266CCCu;
    // 0x266ccc: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x266cccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x266cd0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x266CD0u;
    {
        const bool branch_taken_0x266cd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x266cd0) {
            ctx->pc = 0x266CF8u;
            goto label_266cf8;
        }
    }
    ctx->pc = 0x266CD8u;
    // 0x266cd8: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x266cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x266cdc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x266cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x266ce0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x266ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x266ce4: 0x24420430  addiu       $v0, $v0, 0x430
    ctx->pc = 0x266ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
    // 0x266ce8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266cec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x266cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266cf0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x266CF0u;
    SET_GPR_U32(ctx, 31, 0x266CF8u);
    ctx->pc = 0x266CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266CF0u;
    // 0x266cf4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x266CF0u, 0x266CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266CF8u;
label_266cf8:
    // 0x266cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x266CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CFCu;
        // 0x266d00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266D04u;
}
