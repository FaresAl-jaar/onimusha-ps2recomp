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

// Function: sub_00360E70
// Address: 0x360e70 - 0x360ee4
void sub_00360E70_0x360e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360E70_0x360e70");
#endif

    switch (ctx->pc) {
        case 0x360ebcu: goto label_360ebc;
        default: break;
    }

    ctx->pc = 0x360e70u;

    // 0x360e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x360e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x360e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x360e78: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x360e78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x360e7c: 0x2c41003f  sltiu       $at, $v0, 0x3F
    ctx->pc = 0x360e7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x360e80: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x360E80u;
    {
        const bool branch_taken_0x360e80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x360E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360E80u;
        // 0x360e84: 0x21840  sll         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360e80) {
            ctx->pc = 0x360ED0u;
            goto label_360ed0;
        }
    }
    ctx->pc = 0x360E88u;
    // 0x360e88: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x360e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x360e8c: 0x2442a270  addiu       $v0, $v0, -0x5D90
    ctx->pc = 0x360e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943344));
    // 0x360e90: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x360e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x360e94: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x360e94u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x360e98: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x360e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x360e9c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x360E9Cu;
    {
        const bool branch_taken_0x360e9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x360EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360E9Cu;
        // 0x360ea0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360e9c) {
            ctx->pc = 0x360EB0u;
            goto label_360eb0;
        }
    }
    ctx->pc = 0x360EA4u;
    // 0x360ea4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x360EA4u;
    {
        const bool branch_taken_0x360ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360ea4) {
            ctx->pc = 0x360ED8u;
            goto label_360ed8;
        }
    }
    ctx->pc = 0x360EACu;
    // 0x360eac: 0x0  nop
    ctx->pc = 0x360eacu;
    // NOP
label_360eb0:
    // 0x360eb0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x360eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x360eb4: 0xc0bcff4  jal         func_2F3FD0
    ctx->pc = 0x360EB4u;
    SET_GPR_U32(ctx, 31, 0x360EBCu);
    ctx->pc = 0x360EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360EB4u;
    // 0x360eb8: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3FD0u, 0x360EB4u, 0x360EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360EBCu;
label_360ebc:
    // 0x360ebc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x360ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x360ec0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x360EC0u;
    {
        const bool branch_taken_0x360ec0 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x360ec0) {
            ctx->pc = 0x360ED0u;
            goto label_360ed0;
        }
    }
    ctx->pc = 0x360EC8u;
    // 0x360ec8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x360EC8u;
    {
        const bool branch_taken_0x360ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360EC8u;
        // 0x360ecc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360ec8) {
            ctx->pc = 0x360ED8u;
            goto label_360ed8;
        }
    }
    ctx->pc = 0x360ED0u;
label_360ed0:
    // 0x360ed0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x360ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ed4: 0x0  nop
    ctx->pc = 0x360ed4u;
    // NOP
label_360ed8:
    // 0x360ed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360edc: 0x3e00008  jr          $ra
    ctx->pc = 0x360EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360EDCu;
        // 0x360ee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360EE4u;
}
