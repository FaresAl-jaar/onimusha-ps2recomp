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

// Function: sub_0022F108
// Address: 0x22f108 - 0x22f184
void sub_0022F108_0x22f108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F108_0x22f108");
#endif

    switch (ctx->pc) {
        case 0x22f12cu: goto label_22f12c;
        case 0x22f140u: goto label_22f140;
        case 0x22f148u: goto label_22f148;
        case 0x22f150u: goto label_22f150;
        case 0x22f158u: goto label_22f158;
        default: break;
    }

    ctx->pc = 0x22f108u;

    // 0x22f108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22f108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22f10c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f110: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f114: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22f114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22f118: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x22f118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22f11c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22f11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22f120: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22f120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22f124: 0xc08bc7c  jal         func_22F1F0
    ctx->pc = 0x22F124u;
    SET_GPR_U32(ctx, 31, 0x22F12Cu);
    ctx->pc = 0x22F128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F124u;
    // 0x22f128: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F1F0u, 0x22F124u, 0x22F12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F12Cu;
label_22f12c:
    // 0x22f12c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F12Cu;
    {
        const bool branch_taken_0x22f12c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x22f12c) {
            ctx->pc = 0x22F150u;
            goto label_22f150;
        }
    }
    ctx->pc = 0x22F134u;
    // 0x22f134: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22F134u;
    {
        const bool branch_taken_0x22f134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F134u;
        // 0x22f138: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f134) {
            ctx->pc = 0x22F170u;
            goto label_22f170;
        }
    }
    ctx->pc = 0x22F13Cu;
    // 0x22f13c: 0x0  nop
    ctx->pc = 0x22f13cu;
    // NOP
label_22f140:
    // 0x22f140: 0xc08d256  jal         func_234958
    ctx->pc = 0x22F140u;
    SET_GPR_U32(ctx, 31, 0x22F148u);
    ctx->pc = 0x234958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234958u, 0x22F140u, 0x22F148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F148u;
label_22f148:
    // 0x22f148: 0xc08bbe8  jal         func_22EFA0
    ctx->pc = 0x22F148u;
    SET_GPR_U32(ctx, 31, 0x22F150u);
    ctx->pc = 0x22EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFA0u, 0x22F148u, 0x22F150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F150u;
label_22f150:
    // 0x22f150: 0xc08bef8  jal         func_22FBE0
    ctx->pc = 0x22F150u;
    SET_GPR_U32(ctx, 31, 0x22F158u);
    ctx->pc = 0x22F154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F150u;
    // 0x22f154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FBE0u, 0x22F150u, 0x22F158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F158u;
label_22f158:
    // 0x22f158: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F158u;
    {
        const bool branch_taken_0x22f158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x22F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F158u;
        // 0x22f15c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f158) {
            ctx->pc = 0x22F168u;
            goto label_22f168;
        }
    }
    ctx->pc = 0x22F160u;
    // 0x22f160: 0x1451fff7  bne         $v0, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22F160u;
    {
        const bool branch_taken_0x22f160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x22F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F160u;
        // 0x22f164: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f160) {
            ctx->pc = 0x22F140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f140;
        }
    }
    ctx->pc = 0x22F168u;
label_22f168:
    // 0x22f168: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x22f168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f16c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22f16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22f170:
    // 0x22f170: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22f170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22f174: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22f174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f178: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22f178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22f17c: 0x3e00008  jr          $ra
    ctx->pc = 0x22F17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F17Cu;
        // 0x22f180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F184u;
}
