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

// Function: sub_00175690
// Address: 0x175690 - 0x1756d4
void sub_00175690_0x175690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175690_0x175690");
#endif

    switch (ctx->pc) {
        case 0x1756bcu: goto label_1756bc;
        default: break;
    }

    ctx->pc = 0x175690u;

    // 0x175690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175694: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17569c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17569cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1756a0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1756A0u;
    {
        const bool branch_taken_0x1756a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1756A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756A0u;
        // 0x1756a4: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1756a0) {
            ctx->pc = 0x1756C0u;
            goto label_1756c0;
        }
    }
    ctx->pc = 0x1756A8u;
    // 0x1756a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1756a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1756ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1756ACu;
    {
        const bool branch_taken_0x1756ac = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1756ac) {
            ctx->pc = 0x1756C0u;
            goto label_1756c0;
        }
    }
    ctx->pc = 0x1756B4u;
    // 0x1756b4: 0xc040148  jal         func_100520
    ctx->pc = 0x1756B4u;
    SET_GPR_U32(ctx, 31, 0x1756BCu);
    ctx->pc = 0x100520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100520u, 0x1756B4u, 0x1756BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1756BCu;
label_1756bc:
    // 0x1756bc: 0x0  nop
    ctx->pc = 0x1756bcu;
    // NOP
label_1756c0:
    // 0x1756c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1756c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1756c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1756c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1756c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1756c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1756cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1756CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1756D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756CCu;
        // 0x1756d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1756CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1756D4u;
}
