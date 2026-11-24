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

// Function: sub_00214400
// Address: 0x214400 - 0x214448
void sub_00214400_0x214400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214400_0x214400");
#endif

    switch (ctx->pc) {
        case 0x214428u: goto label_214428;
        case 0x214434u: goto label_214434;
        default: break;
    }

    ctx->pc = 0x214400u;

    // 0x214400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214404: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x214404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x214408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21440c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21440cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x214410: 0x8e021324  lw          $v0, 0x1324($s0)
    ctx->pc = 0x214410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4900)));
    // 0x214414: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x214414u;
    {
        const bool branch_taken_0x214414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214414u;
        // 0x214418: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214414) {
            ctx->pc = 0x214438u;
            goto label_214438;
        }
    }
    ctx->pc = 0x21441Cu;
    // 0x21441c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21441cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214420: 0xc0840b0  jal         func_2102C0
    ctx->pc = 0x214420u;
    SET_GPR_U32(ctx, 31, 0x214428u);
    ctx->pc = 0x214424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214420u;
    // 0x214424: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2102C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2102C0u, 0x214420u, 0x214428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214428u;
label_214428:
    // 0x214428: 0xde040988  ld          $a0, 0x988($s0)
    ctx->pc = 0x214428u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2440)));
    // 0x21442c: 0xc08411e  jal         func_210478
    ctx->pc = 0x21442Cu;
    SET_GPR_U32(ctx, 31, 0x214434u);
    ctx->pc = 0x214430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21442Cu;
    // 0x214430: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210478u, 0x21442Cu, 0x214434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214434u;
label_214434:
    // 0x214434: 0xfe020988  sd          $v0, 0x988($s0)
    ctx->pc = 0x214434u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2440), GPR_U64(ctx, 2));
label_214438:
    // 0x214438: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x214438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21443c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21443cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214440: 0x3e00008  jr          $ra
    ctx->pc = 0x214440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214440u;
        // 0x214444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214448u;
}
