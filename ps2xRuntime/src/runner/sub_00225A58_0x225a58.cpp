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

// Function: sub_00225A58
// Address: 0x225a58 - 0x225b0c
void sub_00225A58_0x225a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225A58_0x225a58");
#endif

    switch (ctx->pc) {
        case 0x225a58u: goto label_225a58;
        case 0x225a5cu: goto label_225a5c;
        case 0x225a60u: goto label_225a60;
        case 0x225a64u: goto label_225a64;
        case 0x225a68u: goto label_225a68;
        case 0x225a6cu: goto label_225a6c;
        case 0x225a70u: goto label_225a70;
        case 0x225a74u: goto label_225a74;
        case 0x225a78u: goto label_225a78;
        case 0x225a7cu: goto label_225a7c;
        case 0x225a80u: goto label_225a80;
        case 0x225a84u: goto label_225a84;
        case 0x225a88u: goto label_225a88;
        case 0x225a8cu: goto label_225a8c;
        case 0x225a90u: goto label_225a90;
        case 0x225a94u: goto label_225a94;
        case 0x225a98u: goto label_225a98;
        case 0x225a9cu: goto label_225a9c;
        case 0x225aa0u: goto label_225aa0;
        case 0x225aa4u: goto label_225aa4;
        case 0x225aa8u: goto label_225aa8;
        case 0x225aacu: goto label_225aac;
        case 0x225ab0u: goto label_225ab0;
        case 0x225ab4u: goto label_225ab4;
        case 0x225ab8u: goto label_225ab8;
        case 0x225abcu: goto label_225abc;
        case 0x225ac0u: goto label_225ac0;
        case 0x225ac4u: goto label_225ac4;
        case 0x225ac8u: goto label_225ac8;
        case 0x225accu: goto label_225acc;
        case 0x225ad0u: goto label_225ad0;
        case 0x225ad4u: goto label_225ad4;
        case 0x225ad8u: goto label_225ad8;
        case 0x225adcu: goto label_225adc;
        case 0x225ae0u: goto label_225ae0;
        case 0x225ae4u: goto label_225ae4;
        case 0x225ae8u: goto label_225ae8;
        case 0x225aecu: goto label_225aec;
        case 0x225af0u: goto label_225af0;
        case 0x225af4u: goto label_225af4;
        case 0x225af8u: goto label_225af8;
        case 0x225afcu: goto label_225afc;
        case 0x225b00u: goto label_225b00;
        case 0x225b04u: goto label_225b04;
        case 0x225b08u: goto label_225b08;
        default: break;
    }

    ctx->pc = 0x225a58u;

label_225a58:
    // 0x225a58: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x225a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_225a5c:
    // 0x225a5c: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x225a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_225a60:
    // 0x225a60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x225a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_225a64:
    // 0x225a64: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x225a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_225a68:
    // 0x225a68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x225a68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_225a6c:
    // 0x225a6c: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x225a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
label_225a70:
    // 0x225a70: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x225a70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_225a74:
    // 0x225a74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x225a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_225a78:
    // 0x225a78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x225a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225a7c:
    // 0x225a7c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x225a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_225a80:
    // 0x225a80: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x225a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
label_225a84:
    // 0x225a84: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x225a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_225a88:
    // 0x225a88: 0xc049590  jal         func_125640
label_225a8c:
    if (ctx->pc == 0x225A8Cu) {
        ctx->pc = 0x225A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A88u;
        // 0x225a8c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225A90u;
        goto label_225a90;
    }
    ctx->pc = 0x225A88u;
    SET_GPR_U32(ctx, 31, 0x225A90u);
    ctx->pc = 0x225A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225A88u;
    // 0x225a8c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x225A88u, 0x225A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225A90u;
label_225a90:
    // 0x225a90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x225a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_225a94:
    // 0x225a94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x225a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225a98:
    // 0x225a98: 0xc0896c4  jal         func_225B10
label_225a9c:
    if (ctx->pc == 0x225A9Cu) {
        ctx->pc = 0x225A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A98u;
        // 0x225a9c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225AA0u;
        goto label_225aa0;
    }
    ctx->pc = 0x225A98u;
    SET_GPR_U32(ctx, 31, 0x225AA0u);
    ctx->pc = 0x225A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225A98u;
    // 0x225a9c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225B10u, 0x225A98u, 0x225AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225AA0u;
label_225aa0:
    // 0x225aa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x225aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_225aa4:
    // 0x225aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225aa8:
    // 0x225aa8: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
label_225aac:
    if (ctx->pc == 0x225AACu) {
        ctx->pc = 0x225AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AA8u;
        // 0x225aac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225AB0u;
        goto label_225ab0;
    }
    ctx->pc = 0x225AA8u;
    {
        const bool branch_taken_0x225aa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x225AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AA8u;
        // 0x225aac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225aa8) {
            ctx->pc = 0x225AB4u;
            goto label_225ab4;
        }
    }
    ctx->pc = 0x225AB0u;
label_225ab0:
    // 0x225ab0: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x225ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_225ab4:
    // 0x225ab4: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x225ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_225ab8:
    // 0x225ab8: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x225ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_225abc:
    // 0x225abc: 0xc089980  jal         func_226600
label_225ac0:
    if (ctx->pc == 0x225AC0u) {
        ctx->pc = 0x225AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225ABCu;
        // 0x225ac0: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225AC4u;
        goto label_225ac4;
    }
    ctx->pc = 0x225ABCu;
    SET_GPR_U32(ctx, 31, 0x225AC4u);
    ctx->pc = 0x225AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225ABCu;
    // 0x225ac0: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226600u, 0x225ABCu, 0x225AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225AC4u;
label_225ac4:
    // 0x225ac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225ac8:
    // 0x225ac8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_225acc:
    if (ctx->pc == 0x225ACCu) {
        ctx->pc = 0x225ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AC8u;
        // 0x225acc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225AD0u;
        goto label_225ad0;
    }
    ctx->pc = 0x225AC8u;
    {
        const bool branch_taken_0x225ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x225ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AC8u;
        // 0x225acc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ac8) {
            ctx->pc = 0x225AD8u;
            goto label_225ad8;
        }
    }
    ctx->pc = 0x225AD0u;
label_225ad0:
    // 0x225ad0: 0xc08946e  jal         func_2251B8
label_225ad4:
    if (ctx->pc == 0x225AD4u) {
        ctx->pc = 0x225AD8u;
        goto label_225ad8;
    }
    ctx->pc = 0x225AD0u;
    SET_GPR_U32(ctx, 31, 0x225AD8u);
    ctx->pc = 0x2251B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251B8u, 0x225AD0u, 0x225AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225AD8u;
label_225ad8:
    // 0x225ad8: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x225ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_225adc:
    // 0x225adc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_225ae0:
    if (ctx->pc == 0x225AE0u) {
        ctx->pc = 0x225AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225ADCu;
        // 0x225ae0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225AE4u;
        goto label_225ae4;
    }
    ctx->pc = 0x225ADCu;
    {
        const bool branch_taken_0x225adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225ADCu;
        // 0x225ae0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225adc) {
            ctx->pc = 0x225AF0u;
            goto label_225af0;
        }
    }
    ctx->pc = 0x225AE4u;
label_225ae4:
    // 0x225ae4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x225ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_225ae8:
    // 0x225ae8: 0x40f809  jalr        $v0
label_225aec:
    if (ctx->pc == 0x225AECu) {
        ctx->pc = 0x225AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AE8u;
        // 0x225aec: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225AF0u;
        goto label_225af0;
    }
    ctx->pc = 0x225AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x225AF0u);
        ctx->pc = 0x225AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AE8u;
        // 0x225aec: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225AE8u, 0x225AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225AF0u;
label_225af0:
    // 0x225af0: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x225af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_225af4:
    // 0x225af4: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x225af4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_225af8:
    // 0x225af8: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x225af8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_225afc:
    // 0x225afc: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x225afcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_225b00:
    // 0x225b00: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x225b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_225b04:
    // 0x225b04: 0x3e00008  jr          $ra
label_225b08:
    if (ctx->pc == 0x225B08u) {
        ctx->pc = 0x225B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B04u;
        // 0x225b08: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225B0Cu;
        goto label_fallthrough_0x225b04;
    }
    ctx->pc = 0x225B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B04u;
        // 0x225b08: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x225b04:
    ctx->pc = 0x225B0Cu;
}
