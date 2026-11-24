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

// Function: sub_00361690
// Address: 0x361690 - 0x3616d0
void sub_00361690_0x361690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361690_0x361690");
#endif

    switch (ctx->pc) {
        case 0x3616b4u: goto label_3616b4;
        case 0x3616c0u: goto label_3616c0;
        default: break;
    }

    ctx->pc = 0x361690u;

    // 0x361690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x361690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x361694: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x361694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x361698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x361698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36169c: 0x90822b34  lbu         $v0, 0x2B34($a0)
    ctx->pc = 0x36169cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11060)));
    // 0x3616a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3616a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3616a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3616A4u;
    {
        const bool branch_taken_0x3616a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3616A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3616A4u;
        // 0x3616a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3616a4) {
            ctx->pc = 0x3616B8u;
            goto label_3616b8;
        }
    }
    ctx->pc = 0x3616ACu;
    // 0x3616ac: 0xc0d881c  jal         func_362070
    ctx->pc = 0x3616ACu;
    SET_GPR_U32(ctx, 31, 0x3616B4u);
    ctx->pc = 0x362070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362070u, 0x3616ACu, 0x3616B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3616B4u;
label_3616b4:
    // 0x3616b4: 0x0  nop
    ctx->pc = 0x3616b4u;
    // NOP
label_3616b8:
    // 0x3616b8: 0xc0a4e30  jal         func_2938C0
    ctx->pc = 0x3616B8u;
    SET_GPR_U32(ctx, 31, 0x3616C0u);
    ctx->pc = 0x3616BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3616B8u;
    // 0x3616bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2938C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2938C0u, 0x3616B8u, 0x3616C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3616C0u;
label_3616c0:
    // 0x3616c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3616c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3616c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3616c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3616c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3616C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3616CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3616C8u;
        // 0x3616cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3616C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3616D0u;
}
