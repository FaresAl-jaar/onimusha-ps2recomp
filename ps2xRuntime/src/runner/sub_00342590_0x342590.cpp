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

// Function: sub_00342590
// Address: 0x342590 - 0x3425d8
void sub_00342590_0x342590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342590_0x342590");
#endif

    switch (ctx->pc) {
        case 0x3425b4u: goto label_3425b4;
        case 0x3425c8u: goto label_3425c8;
        default: break;
    }

    ctx->pc = 0x342590u;

    // 0x342590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x342590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x342594: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x342594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x342598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34259c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x34259cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3425a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3425a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3425a4: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x3425a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3425a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3425a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3425ac: 0xc0d05b4  jal         func_3416D0
    ctx->pc = 0x3425ACu;
    SET_GPR_U32(ctx, 31, 0x3425B4u);
    ctx->pc = 0x3425B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3425ACu;
    // 0x3425b0: 0x27848b94  addiu       $a0, $gp, -0x746C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937492));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3416D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3416D0u, 0x3425ACu, 0x3425B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3425B4u;
label_3425b4:
    // 0x3425b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3425b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3425b8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3425B8u;
    {
        const bool branch_taken_0x3425b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3425BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425B8u;
        // 0x3425bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3425b8) {
            ctx->pc = 0x3425C8u;
            goto label_3425c8;
        }
    }
    ctx->pc = 0x3425C0u;
    // 0x3425c0: 0xc0d0590  jal         func_341640
    ctx->pc = 0x3425C0u;
    SET_GPR_U32(ctx, 31, 0x3425C8u);
    ctx->pc = 0x3425C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3425C0u;
    // 0x3425c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x3425C0u, 0x3425C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3425C8u;
label_3425c8:
    // 0x3425c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3425c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3425cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3425ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3425d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3425D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3425D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425D0u;
        // 0x3425d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3425D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3425D8u;
}
