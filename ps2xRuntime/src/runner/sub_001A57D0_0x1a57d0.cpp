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

// Function: sub_001A57D0
// Address: 0x1a57d0 - 0x1a58b4
void sub_001A57D0_0x1a57d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A57D0_0x1a57d0");
#endif

    switch (ctx->pc) {
        case 0x1a57f0u: goto label_1a57f0;
        case 0x1a5808u: goto label_1a5808;
        case 0x1a5818u: goto label_1a5818;
        case 0x1a582cu: goto label_1a582c;
        case 0x1a5840u: goto label_1a5840;
        case 0x1a5850u: goto label_1a5850;
        case 0x1a5868u: goto label_1a5868;
        case 0x1a5884u: goto label_1a5884;
        case 0x1a5894u: goto label_1a5894;
        case 0x1a58a4u: goto label_1a58a4;
        default: break;
    }

    ctx->pc = 0x1a57d0u;

    // 0x1a57d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a57d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a57d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a57d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a57d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a57d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a57dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a57dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a57e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a57e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a57e4: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1a57e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a57e8: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1A57E8u;
    SET_GPR_U32(ctx, 31, 0x1A57F0u);
    ctx->pc = 0x1A57ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A57E8u;
    // 0x1a57ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1A57E8u, 0x1A57F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A57F0u;
label_1a57f0:
    // 0x1a57f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a57f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a57f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a57f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a57f8: 0x8c22f014  lw          $v0, -0xFEC($at)
    ctx->pc = 0x1a57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81F014u));
    // 0x1a57fc: 0xdc460040  ld          $a2, 0x40($v0)
    ctx->pc = 0x1a57fcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1a5800: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A5800u;
    SET_GPR_U32(ctx, 31, 0x1A5808u);
    ctx->pc = 0x1A5804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5800u;
    // 0x1a5804: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A5800u, 0x1A5808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5808u;
label_1a5808:
    // 0x1a5808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a580c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a580cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a5810: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A5810u;
    SET_GPR_U32(ctx, 31, 0x1A5818u);
    ctx->pc = 0x1A5814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5810u;
    // 0x1a5814: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A5810u, 0x1A5818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5818u;
label_1a5818:
    // 0x1a5818: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1a5818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1a581c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a581cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5820: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1a5820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1a5824: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A5824u;
    SET_GPR_U32(ctx, 31, 0x1A582Cu);
    ctx->pc = 0x1A5828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5824u;
    // 0x1a5828: 0x344600c0  ori         $a2, $v0, 0xC0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A5824u, 0x1A582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A582Cu;
label_1a582c:
    // 0x1a582c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1a582cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1a5830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5834: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1a5834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1a5838: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A5838u;
    SET_GPR_U32(ctx, 31, 0x1A5840u);
    ctx->pc = 0x1A583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5838u;
    // 0x1a583c: 0x3446020b  ori         $a2, $v0, 0x20B (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)523);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A5838u, 0x1A5840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5840u;
label_1a5840:
    // 0x1a5840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5844: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x1a5844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x1a5848: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A5848u;
    SET_GPR_U32(ctx, 31, 0x1A5850u);
    ctx->pc = 0x1A584Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5848u;
    // 0x1a584c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A5848u, 0x1A5850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5850u;
label_1a5850:
    // 0x1a5850: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a5850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a5854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5858: 0x8c22f014  lw          $v0, -0xFEC($at)
    ctx->pc = 0x1a5858u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81F014u));
    // 0x1a585c: 0xdc460020  ld          $a2, 0x20($v0)
    ctx->pc = 0x1a585cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a5860: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A5860u;
    SET_GPR_U32(ctx, 31, 0x1A5868u);
    ctx->pc = 0x1A5864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5860u;
    // 0x1a5864: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A5860u, 0x1A5868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5868u;
label_1a5868:
    // 0x1a5868: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x1a5868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x1a586c: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x1a586cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x1a5870: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a5870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a5874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5878: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a5878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a587c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A587Cu;
    SET_GPR_U32(ctx, 31, 0x1A5884u);
    ctx->pc = 0x1A5880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A587Cu;
    // 0x1a5880: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A587Cu, 0x1A5884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5884u;
label_1a5884:
    // 0x1a5884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5888: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1a5888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1a588c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A588Cu;
    SET_GPR_U32(ctx, 31, 0x1A5894u);
    ctx->pc = 0x1A5890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A588Cu;
    // 0x1a5890: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A588Cu, 0x1A5894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5894u;
label_1a5894:
    // 0x1a5894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5898: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1a5898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1a589c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A589Cu;
    SET_GPR_U32(ctx, 31, 0x1A58A4u);
    ctx->pc = 0x1A58A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A589Cu;
    // 0x1a58a0: 0x24060061  addiu       $a2, $zero, 0x61 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A589Cu, 0x1A58A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A58A4u;
label_1a58a4:
    // 0x1a58a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a58a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a58a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a58a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a58ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A58ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A58B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58ACu;
        // 0x1a58b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A58ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A58B4u;
}
