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

// Function: sub_00231350
// Address: 0x231350 - 0x2313d0
void sub_00231350_0x231350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231350_0x231350");
#endif

    switch (ctx->pc) {
        case 0x231370u: goto label_231370;
        case 0x231398u: goto label_231398;
        case 0x2313a0u: goto label_2313a0;
        case 0x2313b4u: goto label_2313b4;
        default: break;
    }

    ctx->pc = 0x231350u;

    // 0x231350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231358: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x231358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23135c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23135Cu;
    {
        const bool branch_taken_0x23135c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x231360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23135Cu;
        // 0x231360: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23135c) {
            ctx->pc = 0x231378u;
            goto label_231378;
        }
    }
    ctx->pc = 0x231364u;
    // 0x231364: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x231364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x231368: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x231368u;
    SET_GPR_U32(ctx, 31, 0x231370u);
    ctx->pc = 0x23136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231368u;
    // 0x23136c: 0x2484a8a0  addiu       $a0, $a0, -0x5760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x231368u, 0x231370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231370u;
label_231370:
    // 0x231370: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x231370u;
    {
        const bool branch_taken_0x231370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231370u;
        // 0x231374: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231370) {
            ctx->pc = 0x2313C0u;
            goto label_2313c0;
        }
    }
    ctx->pc = 0x231378u;
label_231378:
    // 0x231378: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x231378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x23137c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x23137cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x231380: 0x3442f7ff  ori         $v0, $v0, 0xF7FF
    ctx->pc = 0x231380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63487);
    // 0x231384: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x231384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x231388: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x231388u;
    {
        const bool branch_taken_0x231388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231388) {
            ctx->pc = 0x23138Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231388u;
            // 0x23138c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2313C0u;
            goto label_2313c0;
        }
    }
    ctx->pc = 0x231390u;
    // 0x231390: 0xc08e27c  jal         func_2389F0
    ctx->pc = 0x231390u;
    SET_GPR_U32(ctx, 31, 0x231398u);
    ctx->pc = 0x231394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231390u;
    // 0x231394: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2389F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2389F0u, 0x231390u, 0x231398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231398u;
label_231398:
    // 0x231398: 0xc08dd84  jal         func_237610
    ctx->pc = 0x231398u;
    SET_GPR_U32(ctx, 31, 0x2313A0u);
    ctx->pc = 0x23139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231398u;
    // 0x23139c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237610u, 0x231398u, 0x2313A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2313A0u;
label_2313a0:
    // 0x2313a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2313a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2313a4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2313A4u;
    {
        const bool branch_taken_0x2313a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2313A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313A4u;
        // 0x2313a8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313a4) {
            ctx->pc = 0x2313C0u;
            goto label_2313c0;
        }
    }
    ctx->pc = 0x2313ACu;
    // 0x2313ac: 0xc08e0f8  jal         func_2383E0
    ctx->pc = 0x2313ACu;
    SET_GPR_U32(ctx, 31, 0x2313B4u);
    ctx->pc = 0x2313B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2313ACu;
    // 0x2313b0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2383E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2383E0u, 0x2313ACu, 0x2313B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2313B4u;
label_2313b4:
    // 0x2313b4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2313b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2313b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2313b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2313bc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2313bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2313c0:
    // 0x2313c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2313c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2313c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2313c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2313c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2313C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2313CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313C8u;
        // 0x2313cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2313C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2313D0u;
}
