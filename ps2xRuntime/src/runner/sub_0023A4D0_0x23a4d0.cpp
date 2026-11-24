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

// Function: sub_0023A4D0
// Address: 0x23a4d0 - 0x23a51c
void sub_0023A4D0_0x23a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A4D0_0x23a4d0");
#endif

    switch (ctx->pc) {
        case 0x23a4e8u: goto label_23a4e8;
        default: break;
    }

    ctx->pc = 0x23a4d0u;

    // 0x23a4d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a4d4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A4D4u;
    {
        const bool branch_taken_0x23a4d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4D4u;
        // 0x23a4d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4d4) {
            ctx->pc = 0x23A4F0u;
            goto label_23a4f0;
        }
    }
    ctx->pc = 0x23A4DCu;
    // 0x23a4dc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23a4e0: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x23A4E0u;
    SET_GPR_U32(ctx, 31, 0x23A4E8u);
    ctx->pc = 0x23A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A4E0u;
    // 0x23a4e4: 0x2484b128  addiu       $a0, $a0, -0x4ED8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23A4E0u, 0x23A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A4E8u;
label_23a4e8:
    // 0x23a4e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23A4E8u;
    {
        const bool branch_taken_0x23a4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4E8u;
        // 0x23a4ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4e8) {
            ctx->pc = 0x23A510u;
            goto label_23a510;
        }
    }
    ctx->pc = 0x23A4F0u;
label_23a4f0:
    // 0x23a4f0: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x23a4f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x23a4f4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x23a4f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23a4f8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A4F8u;
    {
        const bool branch_taken_0x23a4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a4f8) {
            ctx->pc = 0x23A4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A4F8u;
            // 0x23a4fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A510u;
            goto label_23a510;
        }
    }
    ctx->pc = 0x23A500u;
    // 0x23a500: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x23a500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23a504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a508: 0x808db02  j           func_236C08
    ctx->pc = 0x23A508u;
    ctx->pc = 0x23A50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A508u;
    // 0x23a50c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C08u;
    sub_00236C08_0x236c08(rdram, ctx, runtime); return;
    ctx->pc = 0x23A510u;
label_23a510:
    // 0x23a510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a514: 0x3e00008  jr          $ra
    ctx->pc = 0x23A514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A514u;
        // 0x23a518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A51Cu;
}
