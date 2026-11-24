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

// Function: sub_0024F100
// Address: 0x24f100 - 0x24f15c
void sub_0024F100_0x24f100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F100_0x24f100");
#endif

    switch (ctx->pc) {
        case 0x24f138u: goto label_24f138;
        default: break;
    }

    ctx->pc = 0x24f100u;

    // 0x24f100: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f104: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24f104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24f108: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f108u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24f10c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24f10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24f110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24f114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24f114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f118: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F118u;
    {
        const bool branch_taken_0x24f118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x24F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F118u;
        // 0x24f11c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f118) {
            ctx->pc = 0x24F130u;
            goto label_24f130;
        }
    }
    ctx->pc = 0x24F120u;
    // 0x24f120: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f124: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24f124u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24f128: 0x58600009  blezl       $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24F128u;
    {
        const bool branch_taken_0x24f128 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x24f128) {
            ctx->pc = 0x24F12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F128u;
            // 0x24f12c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F150u;
            goto label_24f150;
        }
    }
    ctx->pc = 0x24F130u;
label_24f130:
    // 0x24f130: 0xc093c58  jal         func_24F160
    ctx->pc = 0x24F130u;
    SET_GPR_U32(ctx, 31, 0x24F138u);
    ctx->pc = 0x24F134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F130u;
    // 0x24f134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F160u, 0x24F130u, 0x24F138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F138u;
label_24f138:
    // 0x24f138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f13c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24f13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24f140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24f140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24f144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f148: 0x8093c7e  j           func_24F1F8
    ctx->pc = 0x24F148u;
    ctx->pc = 0x24F14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F148u;
    // 0x24f14c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F1F8u;
    sub_0024F1F8_0x24f1f8(rdram, ctx, runtime); return;
    ctx->pc = 0x24F150u;
label_24f150:
    // 0x24f150: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24f150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24f154: 0x3e00008  jr          $ra
    ctx->pc = 0x24F154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F154u;
        // 0x24f158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F15Cu;
}
