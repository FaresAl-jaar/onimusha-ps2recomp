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

// Function: sub_00297B90
// Address: 0x297b90 - 0x297cb4
void sub_00297B90_0x297b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297B90_0x297b90");
#endif

    switch (ctx->pc) {
        case 0x297bd8u: goto label_297bd8;
        case 0x297be8u: goto label_297be8;
        case 0x297bf8u: goto label_297bf8;
        case 0x297c08u: goto label_297c08;
        case 0x297c18u: goto label_297c18;
        case 0x297c28u: goto label_297c28;
        case 0x297c38u: goto label_297c38;
        case 0x297c48u: goto label_297c48;
        case 0x297c58u: goto label_297c58;
        case 0x297c68u: goto label_297c68;
        case 0x297c78u: goto label_297c78;
        case 0x297c88u: goto label_297c88;
        case 0x297c98u: goto label_297c98;
        case 0x297ca8u: goto label_297ca8;
        default: break;
    }

    ctx->pc = 0x297b90u;

    // 0x297b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297b98: 0x8c8306b4  lw          $v1, 0x6B4($a0)
    ctx->pc = 0x297b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x297b9c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x297b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x297ba0: 0xac8306b4  sw          $v1, 0x6B4($a0)
    ctx->pc = 0x297ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 3));
    // 0x297ba4: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x297ba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x297ba8: 0x2463ff4f  addiu       $v1, $v1, -0xB1
    ctx->pc = 0x297ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967119));
    // 0x297bac: 0x2c610013  sltiu       $at, $v1, 0x13
    ctx->pc = 0x297bacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x297bb0: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x297BB0u;
    {
        const bool branch_taken_0x297bb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x297BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297BB0u;
        // 0x297bb4: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297bb0) {
            ctx->pc = 0x297CA8u;
            goto label_297ca8;
        }
    }
    ctx->pc = 0x297BB8u;
    // 0x297bb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x297bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x297bbc: 0x24a56ee0  addiu       $a1, $a1, 0x6EE0
    ctx->pc = 0x297bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28384));
    // 0x297bc0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x297bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x297bc4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x297bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x297bc8: 0x600008  jr          $v1
    ctx->pc = 0x297BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297BD0u: goto label_297bd0;
            case 0x297BE0u: goto label_297be0;
            case 0x297BF0u: goto label_297bf0;
            case 0x297C00u: goto label_297c00;
            case 0x297C10u: goto label_297c10;
            case 0x297C20u: goto label_297c20;
            case 0x297C30u: goto label_297c30;
            case 0x297C40u: goto label_297c40;
            case 0x297C50u: goto label_297c50;
            case 0x297C60u: goto label_297c60;
            case 0x297C70u: goto label_297c70;
            case 0x297C80u: goto label_297c80;
            case 0x297C90u: goto label_297c90;
            case 0x297CA0u: goto label_297ca0;
            case 0x297CA8u: goto label_297ca8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297BC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x297BD0u;
label_297bd0:
    // 0x297bd0: 0xc0ab2b4  jal         func_2ACAD0
    ctx->pc = 0x297BD0u;
    SET_GPR_U32(ctx, 31, 0x297BD8u);
    ctx->pc = 0x2ACAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACAD0u, 0x297BD0u, 0x297BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297BD8u;
label_297bd8:
    // 0x297bd8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x297BD8u;
    {
        const bool branch_taken_0x297bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297bd8) {
            ctx->pc = 0x297CA8u;
            goto label_297ca8;
        }
    }
    ctx->pc = 0x297BE0u;
label_297be0:
    // 0x297be0: 0xc0ab778  jal         func_2ADDE0
    ctx->pc = 0x297BE0u;
    SET_GPR_U32(ctx, 31, 0x297BE8u);
    ctx->pc = 0x297BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297BE0u;
    // 0x297be4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADDE0u, 0x297BE0u, 0x297BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297BE8u;
label_297be8:
    // 0x297be8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x297BE8u;
    {
        const bool branch_taken_0x297be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297be8) {
            ctx->pc = 0x297CA8u;
            goto label_297ca8;
        }
    }
    ctx->pc = 0x297BF0u;
label_297bf0:
    // 0x297bf0: 0xc0ab778  jal         func_2ADDE0
    ctx->pc = 0x297BF0u;
    SET_GPR_U32(ctx, 31, 0x297BF8u);
    ctx->pc = 0x297BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297BF0u;
    // 0x297bf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADDE0u, 0x297BF0u, 0x297BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297BF8u;
label_297bf8:
    // 0x297bf8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x297BF8u;
    {
        const bool branch_taken_0x297bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297bf8) {
            ctx->pc = 0x297CA8u;
            goto label_297ca8;
        }
    }
    ctx->pc = 0x297C00u;
label_297c00:
    // 0x297c00: 0xc0ab778  jal         func_2ADDE0
    ctx->pc = 0x297C00u;
    SET_GPR_U32(ctx, 31, 0x297C08u);
    ctx->pc = 0x297C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C00u;
    // 0x297c04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADDE0u, 0x297C00u, 0x297C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C08u;
label_297c08:
    // 0x297c08: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x297C08u;
    {
        const bool branch_taken_0x297c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c08) {
            ctx->pc = 0x297CA8u;
            goto label_297ca8;
        }
    }
    ctx->pc = 0x297C10u;
label_297c10:
    // 0x297c10: 0xc0ab778  jal         func_2ADDE0
    ctx->pc = 0x297C10u;
    SET_GPR_U32(ctx, 31, 0x297C18u);
    ctx->pc = 0x297C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C10u;
    // 0x297c14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADDE0u, 0x297C10u, 0x297C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C18u;
label_297c18:
    // 0x297c18: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x297C18u;
    {
        const bool branch_taken_0x297c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c18) {
            ctx->pc = 0x297CA8u;
            goto label_297ca8;
        }
    }
    ctx->pc = 0x297C20u;
label_297c20:
    // 0x297c20: 0xc0ab504  jal         func_2AD410
    ctx->pc = 0x297C20u;
    SET_GPR_U32(ctx, 31, 0x297C28u);
    ctx->pc = 0x297C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C20u;
    // 0x297c24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD410u, 0x297C20u, 0x297C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C28u;
label_297c28:
    // 0x297c28: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x297C28u;
    {
        const bool branch_taken_0x297c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c28) {
            ctx->pc = 0x297CA8u;
            goto label_297ca8;
        }
    }
    ctx->pc = 0x297C30u;
label_297c30:
    // 0x297c30: 0xc0ab10c  jal         func_2AC430
    ctx->pc = 0x297C30u;
    SET_GPR_U32(ctx, 31, 0x297C38u);
    ctx->pc = 0x297C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C30u;
    // 0x297c34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC430u, 0x297C30u, 0x297C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C38u;
label_297c38:
    // 0x297c38: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x297C38u;
    {
        const bool branch_taken_0x297c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c38) {
            ctx->pc = 0x297CA8u;
            goto label_297ca8;
        }
    }
    ctx->pc = 0x297C40u;
label_297c40:
    // 0x297c40: 0xc0ab10c  jal         func_2AC430
    ctx->pc = 0x297C40u;
    SET_GPR_U32(ctx, 31, 0x297C48u);
    ctx->pc = 0x297C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C40u;
    // 0x297c44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC430u, 0x297C40u, 0x297C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C48u;
label_297c48:
    // 0x297c48: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x297C48u;
    {
        const bool branch_taken_0x297c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c48) {
            ctx->pc = 0x297CA8u;
            goto label_297ca8;
        }
    }
    ctx->pc = 0x297C50u;
label_297c50:
    // 0x297c50: 0xc0ab504  jal         func_2AD410
    ctx->pc = 0x297C50u;
    SET_GPR_U32(ctx, 31, 0x297C58u);
    ctx->pc = 0x297C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C50u;
    // 0x297c54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD410u, 0x297C50u, 0x297C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C58u;
label_297c58:
    // 0x297c58: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x297C58u;
    {
        const bool branch_taken_0x297c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c58) {
            ctx->pc = 0x297CA8u;
            goto label_297ca8;
        }
    }
    ctx->pc = 0x297C60u;
label_297c60:
    // 0x297c60: 0xc0ab1d8  jal         func_2AC760
    ctx->pc = 0x297C60u;
    SET_GPR_U32(ctx, 31, 0x297C68u);
    ctx->pc = 0x2AC760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC760u, 0x297C60u, 0x297C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C68u;
label_297c68:
    // 0x297c68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x297C68u;
    {
        const bool branch_taken_0x297c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c68) {
            ctx->pc = 0x297CA8u;
            goto label_297ca8;
        }
    }
    ctx->pc = 0x297C70u;
label_297c70:
    // 0x297c70: 0xc0aaf78  jal         func_2ABDE0
    ctx->pc = 0x297C70u;
    SET_GPR_U32(ctx, 31, 0x297C78u);
    ctx->pc = 0x2ABDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABDE0u, 0x297C70u, 0x297C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C78u;
label_297c78:
    // 0x297c78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x297C78u;
    {
        const bool branch_taken_0x297c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c78) {
            ctx->pc = 0x297CA8u;
            goto label_297ca8;
        }
    }
    ctx->pc = 0x297C80u;
label_297c80:
    // 0x297c80: 0xc0aaed0  jal         func_2ABB40
    ctx->pc = 0x297C80u;
    SET_GPR_U32(ctx, 31, 0x297C88u);
    ctx->pc = 0x2ABB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABB40u, 0x297C80u, 0x297C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C88u;
label_297c88:
    // 0x297c88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297C88u;
    {
        const bool branch_taken_0x297c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c88) {
            ctx->pc = 0x297CA8u;
            goto label_297ca8;
        }
    }
    ctx->pc = 0x297C90u;
label_297c90:
    // 0x297c90: 0xc0ab194  jal         func_2AC650
    ctx->pc = 0x297C90u;
    SET_GPR_U32(ctx, 31, 0x297C98u);
    ctx->pc = 0x2AC650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC650u, 0x297C90u, 0x297C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C98u;
label_297c98:
    // 0x297c98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x297C98u;
    {
        const bool branch_taken_0x297c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c98) {
            ctx->pc = 0x297CA8u;
            goto label_297ca8;
        }
    }
    ctx->pc = 0x297CA0u;
label_297ca0:
    // 0x297ca0: 0xc0ab5d4  jal         func_2AD750
    ctx->pc = 0x297CA0u;
    SET_GPR_U32(ctx, 31, 0x297CA8u);
    ctx->pc = 0x297CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297CA0u;
    // 0x297ca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD750u, 0x297CA0u, 0x297CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297CA8u;
label_297ca8:
    // 0x297ca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297cac: 0x3e00008  jr          $ra
    ctx->pc = 0x297CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CACu;
        // 0x297cb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297CB4u;
}
