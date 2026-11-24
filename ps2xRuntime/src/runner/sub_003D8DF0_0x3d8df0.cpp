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

// Function: sub_003D8DF0
// Address: 0x3d8df0 - 0x3d8ed4
void sub_003D8DF0_0x3d8df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8DF0_0x3d8df0");
#endif

    switch (ctx->pc) {
        case 0x3d8e28u: goto label_3d8e28;
        case 0x3d8e38u: goto label_3d8e38;
        case 0x3d8e48u: goto label_3d8e48;
        case 0x3d8e58u: goto label_3d8e58;
        case 0x3d8e68u: goto label_3d8e68;
        case 0x3d8e78u: goto label_3d8e78;
        case 0x3d8e88u: goto label_3d8e88;
        case 0x3d8e98u: goto label_3d8e98;
        case 0x3d8ea8u: goto label_3d8ea8;
        case 0x3d8eb8u: goto label_3d8eb8;
        case 0x3d8ec8u: goto label_3d8ec8;
        default: break;
    }

    ctx->pc = 0x3d8df0u;

    // 0x3d8df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d8df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d8df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d8df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d8df8: 0x90832be0  lbu         $v1, 0x2BE0($a0)
    ctx->pc = 0x3d8df8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11232)));
    // 0x3d8dfc: 0x2c61000c  sltiu       $at, $v1, 0xC
    ctx->pc = 0x3d8dfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3d8e00: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x3D8E00u;
    {
        const bool branch_taken_0x3d8e00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8E00u;
        // 0x3d8e04: 0x3c050068  lui         $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8e00) {
            ctx->pc = 0x3D8EC8u;
            goto label_3d8ec8;
        }
    }
    ctx->pc = 0x3D8E08u;
    // 0x3d8e08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d8e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d8e0c: 0x24a54710  addiu       $a1, $a1, 0x4710
    ctx->pc = 0x3d8e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18192));
    // 0x3d8e10: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d8e14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d8e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d8e18: 0x600008  jr          $v1
    ctx->pc = 0x3D8E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D8E20u: goto label_3d8e20;
            case 0x3D8E30u: goto label_3d8e30;
            case 0x3D8E40u: goto label_3d8e40;
            case 0x3D8E50u: goto label_3d8e50;
            case 0x3D8E60u: goto label_3d8e60;
            case 0x3D8E70u: goto label_3d8e70;
            case 0x3D8E80u: goto label_3d8e80;
            case 0x3D8E90u: goto label_3d8e90;
            case 0x3D8EA0u: goto label_3d8ea0;
            case 0x3D8EB0u: goto label_3d8eb0;
            case 0x3D8EC0u: goto label_3d8ec0;
            case 0x3D8EC8u: goto label_3d8ec8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8E18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D8E20u;
label_3d8e20:
    // 0x3d8e20: 0xc0f63b8  jal         func_3D8EE0
    ctx->pc = 0x3D8E20u;
    SET_GPR_U32(ctx, 31, 0x3D8E28u);
    ctx->pc = 0x3D8EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8EE0u, 0x3D8E20u, 0x3D8E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8E28u;
label_3d8e28:
    // 0x3d8e28: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3D8E28u;
    {
        const bool branch_taken_0x3d8e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8e28) {
            ctx->pc = 0x3D8EC8u;
            goto label_3d8ec8;
        }
    }
    ctx->pc = 0x3D8E30u;
label_3d8e30:
    // 0x3d8e30: 0xc0f63d8  jal         func_3D8F60
    ctx->pc = 0x3D8E30u;
    SET_GPR_U32(ctx, 31, 0x3D8E38u);
    ctx->pc = 0x3D8F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8F60u, 0x3D8E30u, 0x3D8E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8E38u;
label_3d8e38:
    // 0x3d8e38: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3D8E38u;
    {
        const bool branch_taken_0x3d8e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8e38) {
            ctx->pc = 0x3D8EC8u;
            goto label_3d8ec8;
        }
    }
    ctx->pc = 0x3D8E40u;
label_3d8e40:
    // 0x3d8e40: 0xc0f63f8  jal         func_3D8FE0
    ctx->pc = 0x3D8E40u;
    SET_GPR_U32(ctx, 31, 0x3D8E48u);
    ctx->pc = 0x3D8FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8FE0u, 0x3D8E40u, 0x3D8E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8E48u;
label_3d8e48:
    // 0x3d8e48: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3D8E48u;
    {
        const bool branch_taken_0x3d8e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8e48) {
            ctx->pc = 0x3D8EC8u;
            goto label_3d8ec8;
        }
    }
    ctx->pc = 0x3D8E50u;
label_3d8e50:
    // 0x3d8e50: 0xc0f6428  jal         func_3D90A0
    ctx->pc = 0x3D8E50u;
    SET_GPR_U32(ctx, 31, 0x3D8E58u);
    ctx->pc = 0x3D90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D90A0u, 0x3D8E50u, 0x3D8E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8E58u;
label_3d8e58:
    // 0x3d8e58: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3D8E58u;
    {
        const bool branch_taken_0x3d8e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8e58) {
            ctx->pc = 0x3D8EC8u;
            goto label_3d8ec8;
        }
    }
    ctx->pc = 0x3D8E60u;
label_3d8e60:
    // 0x3d8e60: 0xc0f6448  jal         func_3D9120
    ctx->pc = 0x3D8E60u;
    SET_GPR_U32(ctx, 31, 0x3D8E68u);
    ctx->pc = 0x3D9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9120u, 0x3D8E60u, 0x3D8E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8E68u;
label_3d8e68:
    // 0x3d8e68: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3D8E68u;
    {
        const bool branch_taken_0x3d8e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8e68) {
            ctx->pc = 0x3D8EC8u;
            goto label_3d8ec8;
        }
    }
    ctx->pc = 0x3D8E70u;
label_3d8e70:
    // 0x3d8e70: 0xc0f648c  jal         func_3D9230
    ctx->pc = 0x3D8E70u;
    SET_GPR_U32(ctx, 31, 0x3D8E78u);
    ctx->pc = 0x3D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9230u, 0x3D8E70u, 0x3D8E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8E78u;
label_3d8e78:
    // 0x3d8e78: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3D8E78u;
    {
        const bool branch_taken_0x3d8e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8e78) {
            ctx->pc = 0x3D8EC8u;
            goto label_3d8ec8;
        }
    }
    ctx->pc = 0x3D8E80u;
label_3d8e80:
    // 0x3d8e80: 0xc0f6570  jal         func_3D95C0
    ctx->pc = 0x3D8E80u;
    SET_GPR_U32(ctx, 31, 0x3D8E88u);
    ctx->pc = 0x3D95C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D95C0u, 0x3D8E80u, 0x3D8E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8E88u;
label_3d8e88:
    // 0x3d8e88: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3D8E88u;
    {
        const bool branch_taken_0x3d8e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8e88) {
            ctx->pc = 0x3D8EC8u;
            goto label_3d8ec8;
        }
    }
    ctx->pc = 0x3D8E90u;
label_3d8e90:
    // 0x3d8e90: 0xc0f65c4  jal         func_3D9710
    ctx->pc = 0x3D8E90u;
    SET_GPR_U32(ctx, 31, 0x3D8E98u);
    ctx->pc = 0x3D9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9710u, 0x3D8E90u, 0x3D8E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8E98u;
label_3d8e98:
    // 0x3d8e98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3D8E98u;
    {
        const bool branch_taken_0x3d8e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8e98) {
            ctx->pc = 0x3D8EC8u;
            goto label_3d8ec8;
        }
    }
    ctx->pc = 0x3D8EA0u;
label_3d8ea0:
    // 0x3d8ea0: 0xc0f65e4  jal         func_3D9790
    ctx->pc = 0x3D8EA0u;
    SET_GPR_U32(ctx, 31, 0x3D8EA8u);
    ctx->pc = 0x3D9790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9790u, 0x3D8EA0u, 0x3D8EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8EA8u;
label_3d8ea8:
    // 0x3d8ea8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D8EA8u;
    {
        const bool branch_taken_0x3d8ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8ea8) {
            ctx->pc = 0x3D8EC8u;
            goto label_3d8ec8;
        }
    }
    ctx->pc = 0x3D8EB0u;
label_3d8eb0:
    // 0x3d8eb0: 0xc0f661c  jal         func_3D9870
    ctx->pc = 0x3D8EB0u;
    SET_GPR_U32(ctx, 31, 0x3D8EB8u);
    ctx->pc = 0x3D9870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9870u, 0x3D8EB0u, 0x3D8EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8EB8u;
label_3d8eb8:
    // 0x3d8eb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8EB8u;
    {
        const bool branch_taken_0x3d8eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8eb8) {
            ctx->pc = 0x3D8EC8u;
            goto label_3d8ec8;
        }
    }
    ctx->pc = 0x3D8EC0u;
label_3d8ec0:
    // 0x3d8ec0: 0xc0f663c  jal         func_3D98F0
    ctx->pc = 0x3D8EC0u;
    SET_GPR_U32(ctx, 31, 0x3D8EC8u);
    ctx->pc = 0x3D98F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D98F0u, 0x3D8EC0u, 0x3D8EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8EC8u;
label_3d8ec8:
    // 0x3d8ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d8ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8ECCu;
        // 0x3d8ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8ED4u;
}
