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

// Function: sub_0010E470
// Address: 0x10e470 - 0x10e500
void sub_0010E470_0x10e470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E470_0x10e470");
#endif

    switch (ctx->pc) {
        case 0x10e480u: goto label_10e480;
        case 0x10e4a4u: goto label_10e4a4;
        case 0x10e4b0u: goto label_10e4b0;
        case 0x10e4d4u: goto label_10e4d4;
        default: break;
    }

    ctx->pc = 0x10e470u;

    // 0x10e470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10e474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e478: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10E478u;
    SET_GPR_U32(ctx, 31, 0x10E480u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10E478u, 0x10E480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E480u;
label_10e480:
    // 0x10e480: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10e480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10e484: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10e484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10e488: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10e488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10e48c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10e48cu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4)); // MMIO: 0x1000f000
    // 0x10e490: 0xf  sync
    ctx->pc = 0x10e490u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10e494: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E494u;
    {
        const bool branch_taken_0x10e494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E494u;
        // 0x10e498: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e494) {
            ctx->pc = 0x10E4A8u;
            goto label_10e4a8;
        }
    }
    ctx->pc = 0x10E49Cu;
    // 0x10e49c: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x10E49Cu;
    SET_GPR_U32(ctx, 31, 0x10E4A4u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x10E49Cu, 0x10E4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E4A4u;
label_10e4a4:
    // 0x10e4a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_10e4a8:
    // 0x10e4a8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10e4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10e4ac: 0x0  nop
    ctx->pc = 0x10e4acu;
    // NOP
label_10e4b0:
    // 0x10e4b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000f000
    // 0x10e4b4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x10e4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x10e4b8: 0x0  nop
    ctx->pc = 0x10e4b8u;
    // NOP
    // 0x10e4bc: 0x0  nop
    ctx->pc = 0x10e4bcu;
    // NOP
    // 0x10e4c0: 0x0  nop
    ctx->pc = 0x10e4c0u;
    // NOP
    // 0x10e4c4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10E4C4u;
    {
        const bool branch_taken_0x10e4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e4c4) {
            ctx->pc = 0x10E4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e4b0;
        }
    }
    ctx->pc = 0x10E4CCu;
    // 0x10e4cc: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10E4CCu;
    SET_GPR_U32(ctx, 31, 0x10E4D4u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10E4CCu, 0x10E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E4D4u;
label_10e4d4:
    // 0x10e4d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10e4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10e4d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10e4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10e4dc: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10e4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10e4e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10e4e0u;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4)); // MMIO: 0x1000f000
    // 0x10e4e4: 0xf  sync
    ctx->pc = 0x10e4e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10e4e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E4E8u;
    {
        const bool branch_taken_0x10e4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4E8u;
        // 0x10e4ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4e8) {
            ctx->pc = 0x10E4F8u;
            goto label_10e4f8;
        }
    }
    ctx->pc = 0x10E4F0u;
    // 0x10e4f0: 0x804603c  j           func_1180F0
    ctx->pc = 0x10E4F0u;
    ctx->pc = 0x10E4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E4F0u;
    // 0x10e4f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180F0u;
    sub_001180F0_0x1180f0(rdram, ctx, runtime); return;
    ctx->pc = 0x10E4F8u;
label_10e4f8:
    // 0x10e4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4F8u;
        // 0x10e4fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E500u;
}
