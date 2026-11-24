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

// Function: sub_0033F420
// Address: 0x33f420 - 0x33f470
void sub_0033F420_0x33f420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F420_0x33f420");
#endif

    switch (ctx->pc) {
        case 0x33f43cu: goto label_33f43c;
        case 0x33f44cu: goto label_33f44c;
        case 0x33f45cu: goto label_33f45c;
        default: break;
    }

    ctx->pc = 0x33f420u;

    // 0x33f420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33f420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33f424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33f424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33f428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33f428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33f42c: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x33f42cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x33f430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33f430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f434: 0xc0c8224  jal         func_320890
    ctx->pc = 0x33F434u;
    SET_GPR_U32(ctx, 31, 0x33F43Cu);
    ctx->pc = 0x33F438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F434u;
    // 0x33f438: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320890u, 0x33F434u, 0x33F43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F43Cu;
label_33f43c:
    // 0x33f43c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33F43Cu;
    {
        const bool branch_taken_0x33f43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F43Cu;
        // 0x33f440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f43c) {
            ctx->pc = 0x33F460u;
            goto label_33f460;
        }
    }
    ctx->pc = 0x33F444u;
    // 0x33f444: 0xc0a72a8  jal         func_29CAA0
    ctx->pc = 0x33F444u;
    SET_GPR_U32(ctx, 31, 0x33F44Cu);
    ctx->pc = 0x29CAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CAA0u, 0x33F444u, 0x33F44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F44Cu;
label_33f44c:
    // 0x33f44c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x33f44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x33f450: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33f450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f454: 0xc07ccb8  jal         func_1F32E0
    ctx->pc = 0x33F454u;
    SET_GPR_U32(ctx, 31, 0x33F45Cu);
    ctx->pc = 0x33F458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F454u;
    // 0x33f458: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F32E0u, 0x33F454u, 0x33F45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F45Cu;
label_33f45c:
    // 0x33f45c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x33f45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_33f460:
    // 0x33f460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33f460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f468: 0x3e00008  jr          $ra
    ctx->pc = 0x33F468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F468u;
        // 0x33f46c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F470u;
}
