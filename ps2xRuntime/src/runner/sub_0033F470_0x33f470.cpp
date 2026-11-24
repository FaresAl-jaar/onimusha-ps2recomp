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

// Function: sub_0033F470
// Address: 0x33f470 - 0x33f4c0
void sub_0033F470_0x33f470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F470_0x33f470");
#endif

    switch (ctx->pc) {
        case 0x33f488u: goto label_33f488;
        case 0x33f498u: goto label_33f498;
        case 0x33f4a8u: goto label_33f4a8;
        case 0x33f4b0u: goto label_33f4b0;
        default: break;
    }

    ctx->pc = 0x33f470u;

    // 0x33f470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33f470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33f474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33f474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33f478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33f478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33f47c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33f47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f480: 0xc0c8224  jal         func_320890
    ctx->pc = 0x33F480u;
    SET_GPR_U32(ctx, 31, 0x33F488u);
    ctx->pc = 0x33F484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F480u;
    // 0x33f484: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320890u, 0x33F480u, 0x33F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F488u;
label_33f488:
    // 0x33f488: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33F488u;
    {
        const bool branch_taken_0x33f488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F488u;
        // 0x33f48c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f488) {
            ctx->pc = 0x33F4A8u;
            goto label_33f4a8;
        }
    }
    ctx->pc = 0x33F490u;
    // 0x33f490: 0xc0a72d8  jal         func_29CB60
    ctx->pc = 0x33F490u;
    SET_GPR_U32(ctx, 31, 0x33F498u);
    ctx->pc = 0x29CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CB60u, 0x33F490u, 0x33F498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F498u;
label_33f498:
    // 0x33f498: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x33f498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33f49c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x33f49cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x33f4a0: 0xc07ccc8  jal         func_1F3320
    ctx->pc = 0x33F4A0u;
    SET_GPR_U32(ctx, 31, 0x33F4A8u);
    ctx->pc = 0x33F4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F4A0u;
    // 0x33f4a4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3320u, 0x33F4A0u, 0x33F4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F4A8u;
label_33f4a8:
    // 0x33f4a8: 0xc0cfce4  jal         func_33F390
    ctx->pc = 0x33F4A8u;
    SET_GPR_U32(ctx, 31, 0x33F4B0u);
    ctx->pc = 0x33F4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F4A8u;
    // 0x33f4ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F390u, 0x33F4A8u, 0x33F4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F4B0u;
label_33f4b0:
    // 0x33f4b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33f4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f4b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f4b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x33F4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F4B8u;
        // 0x33f4bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F4C0u;
}
