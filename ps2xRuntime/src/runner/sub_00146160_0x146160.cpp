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

// Function: sub_00146160
// Address: 0x146160 - 0x1461a0
void sub_00146160_0x146160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146160_0x146160");
#endif

    switch (ctx->pc) {
        case 0x146180u: goto label_146180;
        case 0x146188u: goto label_146188;
        case 0x146190u: goto label_146190;
        default: break;
    }

    ctx->pc = 0x146160u;

    // 0x146160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x146164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x146168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14616c: 0x8c830330  lw          $v1, 0x330($a0)
    ctx->pc = 0x14616cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
    // 0x146170: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x146170u;
    {
        const bool branch_taken_0x146170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146170u;
        // 0x146174: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146170) {
            ctx->pc = 0x146190u;
            goto label_146190;
        }
    }
    ctx->pc = 0x146178u;
    // 0x146178: 0xc0518cc  jal         func_146330
    ctx->pc = 0x146178u;
    SET_GPR_U32(ctx, 31, 0x146180u);
    ctx->pc = 0x146330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146330u, 0x146178u, 0x146180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146180u;
label_146180:
    // 0x146180: 0xc0518e4  jal         func_146390
    ctx->pc = 0x146180u;
    SET_GPR_U32(ctx, 31, 0x146188u);
    ctx->pc = 0x146184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146180u;
    // 0x146184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146390u, 0x146180u, 0x146188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146188u;
label_146188:
    // 0x146188: 0xc051958  jal         func_146560
    ctx->pc = 0x146188u;
    SET_GPR_U32(ctx, 31, 0x146190u);
    ctx->pc = 0x14618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146188u;
    // 0x14618c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146560u, 0x146188u, 0x146190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146190u;
label_146190:
    // 0x146190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146198: 0x3e00008  jr          $ra
    ctx->pc = 0x146198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146198u;
        // 0x14619c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1461A0u;
}
