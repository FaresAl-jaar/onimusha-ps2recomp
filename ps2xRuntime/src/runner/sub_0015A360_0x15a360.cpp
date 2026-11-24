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

// Function: sub_0015A360
// Address: 0x15a360 - 0x15a3a8
void sub_0015A360_0x15a360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A360_0x15a360");
#endif

    switch (ctx->pc) {
        case 0x15a39cu: goto label_15a39c;
        default: break;
    }

    ctx->pc = 0x15a360u;

    // 0x15a360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15a360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15a364: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x15a364u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a368: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15a368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15a36c: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x15a36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x15a370: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x15a370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x15a374: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x15a374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x15a378: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x15a378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x15a37c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15a37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a380: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x15a380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x15a384: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x15a384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x15a388: 0x34498080  ori         $t1, $v0, 0x8080
    ctx->pc = 0x15a388u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x15a38c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x15a38cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a390: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x15a390u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a394: 0xc0525d0  jal         func_149740
    ctx->pc = 0x15A394u;
    SET_GPR_U32(ctx, 31, 0x15A39Cu);
    ctx->pc = 0x15A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A394u;
    // 0x15a398: 0xffa00018  sd          $zero, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149740u, 0x15A394u, 0x15A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A39Cu;
label_15a39c:
    // 0x15a39c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15a39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x15A3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3A0u;
        // 0x15a3a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A3A8u;
}
