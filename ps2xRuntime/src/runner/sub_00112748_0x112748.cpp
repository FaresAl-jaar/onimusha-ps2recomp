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

// Function: sub_00112748
// Address: 0x112748 - 0x1127d0
void sub_00112748_0x112748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112748_0x112748");
#endif

    switch (ctx->pc) {
        case 0x112760u: goto label_112760;
        case 0x112768u: goto label_112768;
        case 0x112788u: goto label_112788;
        case 0x11279cu: goto label_11279c;
        case 0x1127b8u: goto label_1127b8;
        default: break;
    }

    ctx->pc = 0x112748u;

    // 0x112748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x112748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11274c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11274cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x112750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x112754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x112758: 0xc044996  jal         func_112658
    ctx->pc = 0x112758u;
    SET_GPR_U32(ctx, 31, 0x112760u);
    ctx->pc = 0x11275Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112758u;
    // 0x11275c: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112658u, 0x112758u, 0x112760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112760u;
label_112760:
    // 0x112760: 0xc043808  jal         func_10E020
    ctx->pc = 0x112760u;
    SET_GPR_U32(ctx, 31, 0x112768u);
    ctx->pc = 0x112764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112760u;
    // 0x112764: 0x8e242b48  lw          $a0, 0x2B48($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x112760u, 0x112768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112768u;
label_112768:
    // 0x112768: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x112768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11276c: 0x24700180  addiu       $s0, $v1, 0x180
    ctx->pc = 0x11276cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x112770: 0x26030200  addiu       $v1, $s0, 0x200
    ctx->pc = 0x112770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x112774: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x112774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x112778: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x112778u;
    {
        const bool branch_taken_0x112778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112778u;
        // 0x11277c: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112778) {
            ctx->pc = 0x1127B0u;
            goto label_1127b0;
        }
    }
    ctx->pc = 0x112780u;
    // 0x112780: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x112780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x112784: 0x0  nop
    ctx->pc = 0x112784u;
    // NOP
label_112788:
    // 0x112788: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x112788u;
    {
        const bool branch_taken_0x112788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112788) {
            ctx->pc = 0x11278Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112788u;
            // 0x11278c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1127A4u;
            goto label_1127a4;
        }
    }
    ctx->pc = 0x112790u;
    // 0x112790: 0x8e242b48  lw          $a0, 0x2B48($s1)
    ctx->pc = 0x112790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11080)));
    // 0x112794: 0xc043800  jal         func_10E000
    ctx->pc = 0x112794u;
    SET_GPR_U32(ctx, 31, 0x11279Cu);
    ctx->pc = 0x112798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112794u;
    // 0x112798: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x112794u, 0x11279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11279Cu;
label_11279c:
    // 0x11279c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11279Cu;
    {
        const bool branch_taken_0x11279c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1127A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11279Cu;
        // 0x1127a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11279c) {
            ctx->pc = 0x1127BCu;
            goto label_1127bc;
        }
    }
    ctx->pc = 0x1127A4u;
label_1127a4:
    // 0x1127a4: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x1127a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1127a8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1127A8u;
    {
        const bool branch_taken_0x1127a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1127a8) {
            ctx->pc = 0x1127ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1127A8u;
            // 0x1127ac: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112788;
        }
    }
    ctx->pc = 0x1127B0u;
label_1127b0:
    // 0x1127b0: 0xc043800  jal         func_10E000
    ctx->pc = 0x1127B0u;
    SET_GPR_U32(ctx, 31, 0x1127B8u);
    ctx->pc = 0x1127B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1127B0u;
    // 0x1127b4: 0x8e242b48  lw          $a0, 0x2B48($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x1127B0u, 0x1127B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1127B8u;
label_1127b8:
    // 0x1127b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1127b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1127bc:
    // 0x1127bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1127bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1127c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1127c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1127c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1127c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1127c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1127C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1127CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1127C8u;
        // 0x1127cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1127C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1127D0u;
}
