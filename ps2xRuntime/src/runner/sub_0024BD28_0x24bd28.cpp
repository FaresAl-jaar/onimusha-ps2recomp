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

// Function: sub_0024BD28
// Address: 0x24bd28 - 0x24bdbc
void sub_0024BD28_0x24bd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BD28_0x24bd28");
#endif

    switch (ctx->pc) {
        case 0x24bd40u: goto label_24bd40;
        case 0x24bd60u: goto label_24bd60;
        case 0x24bd9cu: goto label_24bd9c;
        default: break;
    }

    ctx->pc = 0x24bd28u;

    // 0x24bd28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24bd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24bd2c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BD2Cu;
    {
        const bool branch_taken_0x24bd2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD2Cu;
        // 0x24bd30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd2c) {
            ctx->pc = 0x24BD48u;
            goto label_24bd48;
        }
    }
    ctx->pc = 0x24BD34u;
    // 0x24bd34: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24bd34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24bd38: 0xc093008  jal         func_24C020
    ctx->pc = 0x24BD38u;
    SET_GPR_U32(ctx, 31, 0x24BD40u);
    ctx->pc = 0x24BD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD38u;
    // 0x24bd3c: 0x2484da30  addiu       $a0, $a0, -0x25D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C020u, 0x24BD38u, 0x24BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD40u;
label_24bd40:
    // 0x24bd40: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x24BD40u;
    {
        const bool branch_taken_0x24bd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD40u;
        // 0x24bd44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd40) {
            ctx->pc = 0x24BDB0u;
            goto label_24bdb0;
        }
    }
    ctx->pc = 0x24BD48u;
label_24bd48:
    // 0x24bd48: 0x24860038  addiu       $a2, $a0, 0x38
    ctx->pc = 0x24bd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x24bd4c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24bd50: 0x1045000c  beq         $v0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x24BD50u;
    {
        const bool branch_taken_0x24bd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x24BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD50u;
        // 0x24bd54: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd50) {
            ctx->pc = 0x24BD84u;
            goto label_24bd84;
        }
    }
    ctx->pc = 0x24BD58u;
    // 0x24bd58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24bd5c: 0x0  nop
    ctx->pc = 0x24bd5cu;
    // NOP
label_24bd60:
    // 0x24bd60: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x24bd60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x24bd64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24BD64u;
    {
        const bool branch_taken_0x24bd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD64u;
        // 0x24bd68: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd64) {
            ctx->pc = 0x24BD84u;
            goto label_24bd84;
        }
    }
    ctx->pc = 0x24BD6Cu;
    // 0x24bd6c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24bd70: 0x0  nop
    ctx->pc = 0x24bd70u;
    // NOP
    // 0x24bd74: 0x0  nop
    ctx->pc = 0x24bd74u;
    // NOP
    // 0x24bd78: 0x0  nop
    ctx->pc = 0x24bd78u;
    // NOP
    // 0x24bd7c: 0x5445fff8  bnel        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24BD7Cu;
    {
        const bool branch_taken_0x24bd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x24bd7c) {
            ctx->pc = 0x24BD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BD7Cu;
            // 0x24bd80: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24bd60;
        }
    }
    ctx->pc = 0x24BD84u;
label_24bd84:
    // 0x24bd84: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x24bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24bd88: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24BD88u;
    {
        const bool branch_taken_0x24bd88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24bd88) {
            ctx->pc = 0x24BD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BD88u;
            // 0x24bd8c: 0x31940  sll         $v1, $v1, 5 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BDA8u;
            goto label_24bda8;
        }
    }
    ctx->pc = 0x24BD90u;
    // 0x24bd90: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24bd94: 0xc093008  jal         func_24C020
    ctx->pc = 0x24BD94u;
    SET_GPR_U32(ctx, 31, 0x24BD9Cu);
    ctx->pc = 0x24BD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD94u;
    // 0x24bd98: 0x2484da60  addiu       $a0, $a0, -0x25A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C020u, 0x24BD94u, 0x24BD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD9Cu;
label_24bd9c:
    // 0x24bd9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24BD9Cu;
    {
        const bool branch_taken_0x24bd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD9Cu;
        // 0x24bda0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd9c) {
            ctx->pc = 0x24BDB0u;
            goto label_24bdb0;
        }
    }
    ctx->pc = 0x24BDA4u;
    // 0x24bda4: 0x0  nop
    ctx->pc = 0x24bda4u;
    // NOP
label_24bda8:
    // 0x24bda8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24bdac: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x24bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_24bdb0:
    // 0x24bdb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24bdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x24BDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDB4u;
        // 0x24bdb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BDBCu;
}
