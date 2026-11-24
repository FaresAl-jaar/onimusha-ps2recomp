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

// Function: sub_00213BE0
// Address: 0x213be0 - 0x213d24
void sub_00213BE0_0x213be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213BE0_0x213be0");
#endif

    switch (ctx->pc) {
        case 0x213c30u: goto label_213c30;
        case 0x213c58u: goto label_213c58;
        case 0x213c90u: goto label_213c90;
        case 0x213ca0u: goto label_213ca0;
        case 0x213cc0u: goto label_213cc0;
        case 0x213cf8u: goto label_213cf8;
        default: break;
    }

    ctx->pc = 0x213be0u;

    // 0x213be0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x213be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x213be4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x213be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x213be8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x213be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x213bec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x213becu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213bf0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x213bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x213bf4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x213bf4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213bf8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x213bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x213bfc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x213bfcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c00: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x213c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x213c04: 0x26501f74  addiu       $s0, $s2, 0x1F74
    ctx->pc = 0x213c04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8052));
    // 0x213c08: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x213c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x213c0c: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x213c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x213c10: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x213c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x213c14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x213c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c18: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x213c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x213c1c: 0x8e140008  lw          $s4, 0x8($s0)
    ctx->pc = 0x213c1cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x213c20: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x213C20u;
    {
        const bool branch_taken_0x213c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C20u;
        // 0x213c24: 0x8e130010  lw          $s3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c20) {
            ctx->pc = 0x213C80u;
            goto label_213c80;
        }
    }
    ctx->pc = 0x213C28u;
    // 0x213c28: 0xc07f410  jal         func_1FD040
    ctx->pc = 0x213C28u;
    SET_GPR_U32(ctx, 31, 0x213C30u);
    ctx->pc = 0x1FD040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD040u, 0x213C28u, 0x213C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C30u;
label_213c30:
    // 0x213c30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x213c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c34: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x213c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x213c38: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x213C38u;
    {
        const bool branch_taken_0x213c38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x213c38) {
            ctx->pc = 0x213C70u;
            goto label_213c70;
        }
    }
    ctx->pc = 0x213C40u;
    // 0x213c40: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x213c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x213c44: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x213C44u;
    {
        const bool branch_taken_0x213c44 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x213c44) {
            ctx->pc = 0x213C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213C44u;
            // 0x213c48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213C64u;
            goto label_213c64;
        }
    }
    ctx->pc = 0x213C4Cu;
    // 0x213c4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x213c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c50: 0xc083e88  jal         func_20FA20
    ctx->pc = 0x213C50u;
    SET_GPR_U32(ctx, 31, 0x213C58u);
    ctx->pc = 0x213C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213C50u;
    // 0x213c54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FA20u, 0x213C50u, 0x213C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C58u;
label_213c58:
    // 0x213c58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x213c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x213c5c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x213c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x213c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213c64:
    // 0x213c64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x213C64u;
    {
        const bool branch_taken_0x213c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C64u;
        // 0x213c68: 0xae82003c  sw          $v0, 0x3C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c64) {
            ctx->pc = 0x213C84u;
            goto label_213c84;
        }
    }
    ctx->pc = 0x213C6Cu;
    // 0x213c6c: 0x0  nop
    ctx->pc = 0x213c6cu;
    // NOP
label_213c70:
    // 0x213c70: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x213C70u;
    {
        const bool branch_taken_0x213c70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x213c70) {
            ctx->pc = 0x213C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213C70u;
            // 0x213c74: 0xae80003c  sw          $zero, 0x3C($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213C84u;
            goto label_213c84;
        }
    }
    ctx->pc = 0x213C78u;
    // 0x213c78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x213C78u;
    {
        const bool branch_taken_0x213c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C78u;
        // 0x213c7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c78) {
            ctx->pc = 0x213C88u;
            goto label_213c88;
        }
    }
    ctx->pc = 0x213C80u;
label_213c80:
    // 0x213c80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x213c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213c84:
    // 0x213c84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_213c88:
    // 0x213c88: 0xc084f4a  jal         func_213D28
    ctx->pc = 0x213C88u;
    SET_GPR_U32(ctx, 31, 0x213C90u);
    ctx->pc = 0x213C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213C88u;
    // 0x213c8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213D28u, 0x213C88u, 0x213C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C90u;
label_213c90:
    // 0x213c90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x213C90u;
    {
        const bool branch_taken_0x213c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C90u;
        // 0x213c94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c90) {
            ctx->pc = 0x213CA8u;
            goto label_213ca8;
        }
    }
    ctx->pc = 0x213C98u;
    // 0x213c98: 0xc084eac  jal         func_213AB0
    ctx->pc = 0x213C98u;
    SET_GPR_U32(ctx, 31, 0x213CA0u);
    ctx->pc = 0x213C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213C98u;
    // 0x213c9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213AB0u, 0x213C98u, 0x213CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213CA0u;
label_213ca0:
    // 0x213ca0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x213CA0u;
    {
        const bool branch_taken_0x213ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CA0u;
        // 0x213ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ca0) {
            ctx->pc = 0x213CFCu;
            goto label_213cfc;
        }
    }
    ctx->pc = 0x213CA8u;
label_213ca8:
    // 0x213ca8: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x213ca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x213cac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x213CACu;
    {
        const bool branch_taken_0x213cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CACu;
        // 0x213cb0: 0x2aa30040  slti        $v1, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213cac) {
            ctx->pc = 0x213CD0u;
            goto label_213cd0;
        }
    }
    ctx->pc = 0x213CB4u;
    // 0x213cb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213cb8: 0xc084f5e  jal         func_213D78
    ctx->pc = 0x213CB8u;
    SET_GPR_U32(ctx, 31, 0x213CC0u);
    ctx->pc = 0x213CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213CB8u;
    // 0x213cbc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213D78u, 0x213CB8u, 0x213CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213CC0u;
label_213cc0:
    // 0x213cc0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x213cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213cc4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x213CC4u;
    {
        const bool branch_taken_0x213cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CC4u;
        // 0x213cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213cc4) {
            ctx->pc = 0x213CFCu;
            goto label_213cfc;
        }
    }
    ctx->pc = 0x213CCCu;
    // 0x213ccc: 0x2aa30040  slti        $v1, $s5, 0x40
    ctx->pc = 0x213cccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)64) ? 1 : 0);
label_213cd0:
    // 0x213cd0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x213CD0u;
    {
        const bool branch_taken_0x213cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x213CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CD0u;
        // 0x213cd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213cd0) {
            ctx->pc = 0x213CFCu;
            goto label_213cfc;
        }
    }
    ctx->pc = 0x213CD8u;
    // 0x213cd8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x213cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x213cdc: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213CDCu;
    {
        const bool branch_taken_0x213cdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x213CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CDCu;
        // 0x213ce0: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213cdc) {
            ctx->pc = 0x213CECu;
            goto label_213cec;
        }
    }
    ctx->pc = 0x213CE4u;
    // 0x213ce4: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x213CE4u;
    {
        const bool branch_taken_0x213ce4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x213CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CE4u;
        // 0x213ce8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ce4) {
            ctx->pc = 0x213CFCu;
            goto label_213cfc;
        }
    }
    ctx->pc = 0x213CECu;
label_213cec:
    // 0x213cec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213cf0: 0xc084f5e  jal         func_213D78
    ctx->pc = 0x213CF0u;
    SET_GPR_U32(ctx, 31, 0x213CF8u);
    ctx->pc = 0x213CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213CF0u;
    // 0x213cf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213D78u, 0x213CF0u, 0x213CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213CF8u;
label_213cf8:
    // 0x213cf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x213cf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213cfc:
    // 0x213cfc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x213cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213d00: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x213d00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213d04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x213d04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213d08: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x213d08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x213d0c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x213d0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213d10: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x213d10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x213d14: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x213d14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x213d18: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x213d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x213d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x213D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D1Cu;
        // 0x213d20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213D24u;
}
