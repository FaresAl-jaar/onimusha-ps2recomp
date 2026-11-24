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

// Function: sub_00244F28
// Address: 0x244f28 - 0x244fac
void sub_00244F28_0x244f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244F28_0x244f28");
#endif

    switch (ctx->pc) {
        case 0x244f40u: goto label_244f40;
        case 0x244f70u: goto label_244f70;
        default: break;
    }

    ctx->pc = 0x244f28u;

    // 0x244f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244f2c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x244F2Cu;
    {
        const bool branch_taken_0x244f2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x244F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F2Cu;
        // 0x244f30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f2c) {
            ctx->pc = 0x244F48u;
            goto label_244f48;
        }
    }
    ctx->pc = 0x244F34u;
    // 0x244f34: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x244f38: 0xc090d8a  jal         func_243628
    ctx->pc = 0x244F38u;
    SET_GPR_U32(ctx, 31, 0x244F40u);
    ctx->pc = 0x244F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244F38u;
    // 0x244f3c: 0x2484c480  addiu       $a0, $a0, -0x3B80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244F38u, 0x244F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244F40u;
label_244f40:
    // 0x244f40: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x244F40u;
    {
        const bool branch_taken_0x244f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F40u;
        // 0x244f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f40) {
            ctx->pc = 0x244FA0u;
            goto label_244fa0;
        }
    }
    ctx->pc = 0x244F48u;
label_244f48:
    // 0x244f48: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x244f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x244f4c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x244f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x244f50: 0x24435f40  addiu       $v1, $v0, 0x5F40
    ctx->pc = 0x244f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24384));
    // 0x244f54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x244f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244f58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x244f58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x885F40u));
    // 0x244f5c: 0x1044000d  beq         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x244F5Cu;
    {
        const bool branch_taken_0x244f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x244F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F5Cu;
        // 0x244f60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f5c) {
            ctx->pc = 0x244F94u;
            goto label_244f94;
        }
    }
    ctx->pc = 0x244F64u;
    // 0x244f64: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x244f64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244f68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x244f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x244f6c: 0x0  nop
    ctx->pc = 0x244f6cu;
    // NOP
label_244f70:
    // 0x244f70: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x244f70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x244f74: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x244f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x244f78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x244F78u;
    {
        const bool branch_taken_0x244f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F78u;
        // 0x244f7c: 0xa71821  addu        $v1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f78) {
            ctx->pc = 0x244F94u;
            goto label_244f94;
        }
    }
    ctx->pc = 0x244F80u;
    // 0x244f80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x244f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x244f84: 0x0  nop
    ctx->pc = 0x244f84u;
    // NOP
    // 0x244f88: 0x0  nop
    ctx->pc = 0x244f88u;
    // NOP
    // 0x244f8c: 0x5444fff8  bnel        $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x244F8Cu;
    {
        const bool branch_taken_0x244f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x244f8c) {
            ctx->pc = 0x244F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244F8Cu;
            // 0x244f90: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244f70;
        }
    }
    ctx->pc = 0x244F94u;
label_244f94:
    // 0x244f94: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x244f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x244f98: 0x24425f44  addiu       $v0, $v0, 0x5F44
    ctx->pc = 0x244f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24388));
    // 0x244f9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x244f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_244fa0:
    // 0x244fa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x244FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FA4u;
        // 0x244fa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244FACu;
}
