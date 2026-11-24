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

// Function: sub_0023A668
// Address: 0x23a668 - 0x23a6b4
void sub_0023A668_0x23a668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A668_0x23a668");
#endif

    switch (ctx->pc) {
        case 0x23a680u: goto label_23a680;
        default: break;
    }

    ctx->pc = 0x23a668u;

    // 0x23a668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a66c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A66Cu;
    {
        const bool branch_taken_0x23a66c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A66Cu;
        // 0x23a670: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a66c) {
            ctx->pc = 0x23A688u;
            goto label_23a688;
        }
    }
    ctx->pc = 0x23A674u;
    // 0x23a674: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23a674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23a678: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x23A678u;
    SET_GPR_U32(ctx, 31, 0x23A680u);
    ctx->pc = 0x23A67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A678u;
    // 0x23a67c: 0x2484b1b8  addiu       $a0, $a0, -0x4E48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23A678u, 0x23A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A680u;
label_23a680:
    // 0x23a680: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23A680u;
    {
        const bool branch_taken_0x23a680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A680u;
        // 0x23a684: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a680) {
            ctx->pc = 0x23A6A8u;
            goto label_23a6a8;
        }
    }
    ctx->pc = 0x23A688u;
label_23a688:
    // 0x23a688: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x23a688u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x23a68c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x23a68cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23a690: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A690u;
    {
        const bool branch_taken_0x23a690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a690) {
            ctx->pc = 0x23A694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A690u;
            // 0x23a694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A6A8u;
            goto label_23a6a8;
        }
    }
    ctx->pc = 0x23A698u;
    // 0x23a698: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x23a698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23a69c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a6a0: 0x808dba4  j           func_236E90
    ctx->pc = 0x23A6A0u;
    ctx->pc = 0x23A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A6A0u;
    // 0x23a6a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236E90u;
    sub_00236E90_0x236e90(rdram, ctx, runtime); return;
    ctx->pc = 0x23A6A8u;
label_23a6a8:
    // 0x23a6a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x23A6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6ACu;
        // 0x23a6b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A6B4u;
}
