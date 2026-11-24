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

// Function: sub_00221360
// Address: 0x221360 - 0x2213c0
void sub_00221360_0x221360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221360_0x221360");
#endif

    switch (ctx->pc) {
        case 0x221390u: goto label_221390;
        case 0x2213a0u: goto label_2213a0;
        case 0x2213b0u: goto label_2213b0;
        default: break;
    }

    ctx->pc = 0x221360u;

    // 0x221360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x221364: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x221364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x221368: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x221368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22136c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22136cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221370: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x221370u;
    {
        const bool branch_taken_0x221370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221370u;
        // 0x221374: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221370) {
            ctx->pc = 0x2213B0u;
            goto label_2213b0;
        }
    }
    ctx->pc = 0x221378u;
    // 0x221378: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x221378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22137c: 0x54a2000d  bnel        $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22137Cu;
    {
        const bool branch_taken_0x22137c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x22137c) {
            ctx->pc = 0x221380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22137Cu;
            // 0x221380: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2213B4u;
            goto label_2213b4;
        }
    }
    ctx->pc = 0x221384u;
    // 0x221384: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x221384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221388: 0xc08851e  jal         func_221478
    ctx->pc = 0x221388u;
    SET_GPR_U32(ctx, 31, 0x221390u);
    ctx->pc = 0x22138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221388u;
    // 0x22138c: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221478u, 0x221388u, 0x221390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221390u;
label_221390:
    // 0x221390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221394: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x221394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221398: 0xc0884f0  jal         func_2213C0
    ctx->pc = 0x221398u;
    SET_GPR_U32(ctx, 31, 0x2213A0u);
    ctx->pc = 0x22139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221398u;
    // 0x22139c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213C0u, 0x221398u, 0x2213A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2213A0u;
label_2213a0:
    // 0x2213a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2213a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213a4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2213a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2213a8: 0xc08850a  jal         func_221428
    ctx->pc = 0x2213A8u;
    SET_GPR_U32(ctx, 31, 0x2213B0u);
    ctx->pc = 0x2213ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2213A8u;
    // 0x2213ac: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221428u, 0x2213A8u, 0x2213B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2213B0u;
label_2213b0:
    // 0x2213b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2213b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2213b4:
    // 0x2213b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2213b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2213b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2213B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2213BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2213B8u;
        // 0x2213bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2213B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2213C0u;
}
