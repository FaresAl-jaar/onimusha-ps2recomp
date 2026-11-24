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

// Function: sub_00275360
// Address: 0x275360 - 0x2753a4
void sub_00275360_0x275360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275360_0x275360");
#endif

    switch (ctx->pc) {
        case 0x27538cu: goto label_27538c;
        default: break;
    }

    ctx->pc = 0x275360u;

    // 0x275360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275364: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27536c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27536cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275370: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x275370u;
    {
        const bool branch_taken_0x275370 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x275374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275370u;
        // 0x275374: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275370) {
            ctx->pc = 0x275390u;
            goto label_275390;
        }
    }
    ctx->pc = 0x275378u;
    // 0x275378: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x275378u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27537c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27537Cu;
    {
        const bool branch_taken_0x27537c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x27537c) {
            ctx->pc = 0x275390u;
            goto label_275390;
        }
    }
    ctx->pc = 0x275384u;
    // 0x275384: 0xc040148  jal         func_100520
    ctx->pc = 0x275384u;
    SET_GPR_U32(ctx, 31, 0x27538Cu);
    ctx->pc = 0x100520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100520u, 0x275384u, 0x27538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27538Cu;
label_27538c:
    // 0x27538c: 0x0  nop
    ctx->pc = 0x27538cu;
    // NOP
label_275390:
    // 0x275390: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x275390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275394: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x275394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27539c: 0x3e00008  jr          $ra
    ctx->pc = 0x27539Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2753A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27539Cu;
        // 0x2753a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27539Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2753A4u;
}
