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

// Function: sub_00248788
// Address: 0x248788 - 0x248820
void sub_00248788_0x248788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248788_0x248788");
#endif

    switch (ctx->pc) {
        case 0x2487a4u: goto label_2487a4;
        case 0x2487c4u: goto label_2487c4;
        case 0x2487ccu: goto label_2487cc;
        case 0x2487d4u: goto label_2487d4;
        case 0x2487dcu: goto label_2487dc;
        case 0x2487e8u: goto label_2487e8;
        case 0x248800u: goto label_248800;
        default: break;
    }

    ctx->pc = 0x248788u;

    // 0x248788: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x248788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24878c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24878cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248790: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x248790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x248794: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x248794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x248798: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x248798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24879c: 0xc09246a  jal         func_2491A8
    ctx->pc = 0x24879Cu;
    SET_GPR_U32(ctx, 31, 0x2487A4u);
    ctx->pc = 0x2487A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24879Cu;
    // 0x2487a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2491A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2491A8u, 0x24879Cu, 0x2487A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487A4u;
label_2487a4:
    // 0x2487a4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2487a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2487a8: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x2487a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x2487ac: 0x24710a10  addiu       $s1, $v1, 0xA10
    ctx->pc = 0x2487acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 2576));
    // 0x2487b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2487b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2487b4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2487B4u;
    {
        const bool branch_taken_0x2487b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2487B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2487B4u;
        // 0x2487b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487b4) {
            ctx->pc = 0x24880Cu;
            goto label_24880c;
        }
    }
    ctx->pc = 0x2487BCu;
    // 0x2487bc: 0xc09224e  jal         func_248938
    ctx->pc = 0x2487BCu;
    SET_GPR_U32(ctx, 31, 0x2487C4u);
    ctx->pc = 0x248938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248938u, 0x2487BCu, 0x2487C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487C4u;
label_2487c4:
    // 0x2487c4: 0xc091a44  jal         func_246910
    ctx->pc = 0x2487C4u;
    SET_GPR_U32(ctx, 31, 0x2487CCu);
    ctx->pc = 0x2487C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2487C4u;
    // 0x2487c8: 0x34048400  ori         $a0, $zero, 0x8400 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33792);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x2487C4u, 0x2487CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487CCu;
label_2487cc:
    // 0x2487cc: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x2487CCu;
    SET_GPR_U32(ctx, 31, 0x2487D4u);
    ctx->pc = 0x2487D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2487CCu;
    // 0x2487d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x2487CCu, 0x2487D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487D4u;
label_2487d4:
    // 0x2487d4: 0xc091a44  jal         func_246910
    ctx->pc = 0x2487D4u;
    SET_GPR_U32(ctx, 31, 0x2487DCu);
    ctx->pc = 0x2487D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2487D4u;
    // 0x2487d8: 0x34048401  ori         $a0, $zero, 0x8401 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33793);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x2487D4u, 0x2487DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487DCu;
label_2487dc:
    // 0x2487dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2487dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2487e0: 0xc091f58  jal         func_247D60
    ctx->pc = 0x2487E0u;
    SET_GPR_U32(ctx, 31, 0x2487E8u);
    ctx->pc = 0x2487E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2487E0u;
    // 0x2487e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D60u, 0x2487E0u, 0x2487E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487E8u;
label_2487e8:
    // 0x2487e8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2487e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2487ec: 0x2484cea8  addiu       $a0, $a0, -0x3158
    ctx->pc = 0x2487ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954664));
    // 0x2487f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2487F0u;
    {
        const bool branch_taken_0x2487f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2487F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2487F0u;
        // 0x2487f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487f0) {
            ctx->pc = 0x248808u;
            goto label_248808;
        }
    }
    ctx->pc = 0x2487F8u;
    // 0x2487f8: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x2487F8u;
    SET_GPR_U32(ctx, 31, 0x248800u);
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x2487F8u, 0x248800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248800u;
label_248800:
    // 0x248800: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x248800u;
    {
        const bool branch_taken_0x248800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248800u;
        // 0x248804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248800) {
            ctx->pc = 0x24880Cu;
            goto label_24880c;
        }
    }
    ctx->pc = 0x248808u;
label_248808:
    // 0x248808: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x248808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_24880c:
    // 0x24880c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x24880cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248810: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x248810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x248814: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x248814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x248818: 0x3e00008  jr          $ra
    ctx->pc = 0x248818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248818u;
        // 0x24881c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248820u;
}
