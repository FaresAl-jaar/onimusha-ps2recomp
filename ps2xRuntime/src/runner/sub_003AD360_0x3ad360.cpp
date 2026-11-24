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

// Function: sub_003AD360
// Address: 0x3ad360 - 0x3ad3a8
void sub_003AD360_0x3ad360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD360_0x3ad360");
#endif

    switch (ctx->pc) {
        case 0x3ad390u: goto label_3ad390;
        default: break;
    }

    ctx->pc = 0x3ad360u;

    // 0x3ad360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ad360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ad364: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ad364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ad368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ad368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ad36c: 0xa080004c  sb          $zero, 0x4C($a0)
    ctx->pc = 0x3ad36cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ad370: 0xa080004f  sb          $zero, 0x4F($a0)
    ctx->pc = 0x3ad370u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ad374: 0xa080004e  sb          $zero, 0x4E($a0)
    ctx->pc = 0x3ad374u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ad378: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x3ad378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x3ad37c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AD37Cu;
    {
        const bool branch_taken_0x3ad37c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD37Cu;
        // 0x3ad380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad37c) {
            ctx->pc = 0x3AD398u;
            goto label_3ad398;
        }
    }
    ctx->pc = 0x3AD384u;
    // 0x3ad384: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3ad384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3ad388: 0xc04ccb0  jal         func_1332C0
    ctx->pc = 0x3AD388u;
    SET_GPR_U32(ctx, 31, 0x3AD390u);
    ctx->pc = 0x3AD38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD388u;
    // 0x3ad38c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332C0u, 0x3AD388u, 0x3AD390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD390u;
label_3ad390:
    // 0x3ad390: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x3ad390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x3ad394: 0x0  nop
    ctx->pc = 0x3ad394u;
    // NOP
label_3ad398:
    // 0x3ad398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ad398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ad39c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ad39cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3A0u;
        // 0x3ad3a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD3A8u;
}
