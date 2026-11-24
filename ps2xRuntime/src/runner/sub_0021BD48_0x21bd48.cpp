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

// Function: sub_0021BD48
// Address: 0x21bd48 - 0x21bda0
void sub_0021BD48_0x21bd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BD48_0x21bd48");
#endif

    switch (ctx->pc) {
        case 0x21bd5cu: goto label_21bd5c;
        default: break;
    }

    ctx->pc = 0x21bd48u;

    // 0x21bd48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21bd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21bd4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21bd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bd50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21bd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21bd54: 0xc086c6a  jal         func_21B1A8
    ctx->pc = 0x21BD54u;
    SET_GPR_U32(ctx, 31, 0x21BD5Cu);
    ctx->pc = 0x21BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BD54u;
    // 0x21bd58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B1A8u, 0x21BD54u, 0x21BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD5Cu;
label_21bd5c:
    // 0x21bd5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21BD5Cu;
    {
        const bool branch_taken_0x21bd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD5Cu;
        // 0x21bd60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd5c) {
            ctx->pc = 0x21BD70u;
            goto label_21bd70;
        }
    }
    ctx->pc = 0x21BD64u;
    // 0x21bd64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21BD64u;
    {
        const bool branch_taken_0x21bd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD64u;
        // 0x21bd68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd64) {
            ctx->pc = 0x21BD90u;
            goto label_21bd90;
        }
    }
    ctx->pc = 0x21BD6Cu;
    // 0x21bd6c: 0x0  nop
    ctx->pc = 0x21bd6cu;
    // NOP
label_21bd70:
    // 0x21bd70: 0x8e041fc0  lw          $a0, 0x1FC0($s0)
    ctx->pc = 0x21bd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
    // 0x21bd74: 0x24841128  addiu       $a0, $a0, 0x1128
    ctx->pc = 0x21bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4392));
    // 0x21bd78: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x21bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x21bd7c: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21BD7Cu;
    {
        const bool branch_taken_0x21bd7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x21BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD7Cu;
        // 0x21bd80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd7c) {
            ctx->pc = 0x21BD90u;
            goto label_21bd90;
        }
    }
    ctx->pc = 0x21BD84u;
    // 0x21bd84: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x21bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21bd88: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x21bd88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x21bd8c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x21bd8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21bd90:
    // 0x21bd90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21bd90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bd94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21bd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21bd98: 0x3e00008  jr          $ra
    ctx->pc = 0x21BD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD98u;
        // 0x21bd9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BDA0u;
}
