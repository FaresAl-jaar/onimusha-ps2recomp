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

// Function: sub_00210C80
// Address: 0x210c80 - 0x210d18
void sub_00210C80_0x210c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210C80_0x210c80");
#endif

    switch (ctx->pc) {
        case 0x210ca8u: goto label_210ca8;
        case 0x210cccu: goto label_210ccc;
        case 0x210cecu: goto label_210cec;
        case 0x210cf4u: goto label_210cf4;
        default: break;
    }

    ctx->pc = 0x210c80u;

    // 0x210c80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x210c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x210c84: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x210c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x210c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x210c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c8c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x210c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x210c90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x210c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c94: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x210c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x210c98: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x210c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x210c9c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x210c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x210ca0: 0xc07f5da  jal         func_1FD768
    ctx->pc = 0x210CA0u;
    SET_GPR_U32(ctx, 31, 0x210CA8u);
    ctx->pc = 0x210CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210CA0u;
    // 0x210ca4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD768u, 0x210CA0u, 0x210CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210CA8u;
label_210ca8:
    // 0x210ca8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x210ca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210cac: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x210cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x210cb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210cb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x210cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210cb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210cbc: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x210CBCu;
    {
        const bool branch_taken_0x210cbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x210CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CBCu;
        // 0x210cc0: 0x27a80014  addiu       $t0, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210cbc) {
            ctx->pc = 0x210CFCu;
            goto label_210cfc;
        }
    }
    ctx->pc = 0x210CC4u;
    // 0x210cc4: 0xc07ed0c  jal         func_1FB430
    ctx->pc = 0x210CC4u;
    SET_GPR_U32(ctx, 31, 0x210CCCu);
    ctx->pc = 0x1FB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB430u, 0x210CC4u, 0x210CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210CCCu;
label_210ccc:
    // 0x210ccc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x210cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x210cd0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x210cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x210cd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x210cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210cd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x210cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x210cdc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x210CDCu;
    {
        const bool branch_taken_0x210cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CDCu;
        // 0x210ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210cdc) {
            ctx->pc = 0x210CFCu;
            goto label_210cfc;
        }
    }
    ctx->pc = 0x210CE4u;
    // 0x210ce4: 0xc07f462  jal         func_1FD188
    ctx->pc = 0x210CE4u;
    SET_GPR_U32(ctx, 31, 0x210CECu);
    ctx->pc = 0x1FD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD188u, 0x210CE4u, 0x210CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210CECu;
label_210cec:
    // 0x210cec: 0xc07f642  jal         func_1FD908
    ctx->pc = 0x210CECu;
    SET_GPR_U32(ctx, 31, 0x210CF4u);
    ctx->pc = 0x210CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210CECu;
    // 0x210cf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD908u, 0x210CECu, 0x210CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210CF4u;
label_210cf4:
    // 0x210cf4: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x210cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x210cf8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x210cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_210cfc:
    // 0x210cfc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x210cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210d00: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x210d00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x210d04: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x210d04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210d08: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x210d08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x210d0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x210d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210d10: 0x3e00008  jr          $ra
    ctx->pc = 0x210D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D10u;
        // 0x210d14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210D18u;
}
