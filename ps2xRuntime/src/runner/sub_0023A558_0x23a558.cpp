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

// Function: sub_0023A558
// Address: 0x23a558 - 0x23a5a4
void sub_0023A558_0x23a558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A558_0x23a558");
#endif

    switch (ctx->pc) {
        case 0x23a570u: goto label_23a570;
        default: break;
    }

    ctx->pc = 0x23a558u;

    // 0x23a558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a55c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A55Cu;
    {
        const bool branch_taken_0x23a55c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A55Cu;
        // 0x23a560: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a55c) {
            ctx->pc = 0x23A578u;
            goto label_23a578;
        }
    }
    ctx->pc = 0x23A564u;
    // 0x23a564: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23a564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23a568: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x23A568u;
    SET_GPR_U32(ctx, 31, 0x23A570u);
    ctx->pc = 0x23A56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A568u;
    // 0x23a56c: 0x2484b158  addiu       $a0, $a0, -0x4EA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23A568u, 0x23A570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A570u;
label_23a570:
    // 0x23a570: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23A570u;
    {
        const bool branch_taken_0x23a570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A570u;
        // 0x23a574: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a570) {
            ctx->pc = 0x23A598u;
            goto label_23a598;
        }
    }
    ctx->pc = 0x23A578u;
label_23a578:
    // 0x23a578: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x23a578u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x23a57c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x23a57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23a580: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A580u;
    {
        const bool branch_taken_0x23a580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a580) {
            ctx->pc = 0x23A584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A580u;
            // 0x23a584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A598u;
            goto label_23a598;
        }
    }
    ctx->pc = 0x23A588u;
    // 0x23a588: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x23a588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23a58c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a590: 0x808db08  j           func_236C20
    ctx->pc = 0x23A590u;
    ctx->pc = 0x23A594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A590u;
    // 0x23a594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C20u;
    sub_00236C20_0x236c20(rdram, ctx, runtime); return;
    ctx->pc = 0x23A598u;
label_23a598:
    // 0x23a598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a59c: 0x3e00008  jr          $ra
    ctx->pc = 0x23A59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A59Cu;
        // 0x23a5a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A5A4u;
}
