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

// Function: sub_0025CAF0
// Address: 0x25caf0 - 0x25cb70
void sub_0025CAF0_0x25caf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CAF0_0x25caf0");
#endif

    switch (ctx->pc) {
        case 0x25cb08u: goto label_25cb08;
        default: break;
    }

    ctx->pc = 0x25caf0u;

    // 0x25caf0: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x25caf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x25caf4: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x25CAF4u;
    {
        const bool branch_taken_0x25caf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x25caf4) {
            ctx->pc = 0x25CB60u;
            goto label_25cb60;
        }
    }
    ctx->pc = 0x25CAFCu;
    // 0x25cafc: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x25cafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x25cb00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25cb04: 0x24840950  addiu       $a0, $a0, 0x950
    ctx->pc = 0x25cb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2384));
label_25cb08:
    // 0x25cb08: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x25cb08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25cb0c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25cb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25cb10: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x25CB10u;
    {
        const bool branch_taken_0x25cb10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cb10) {
            ctx->pc = 0x25CB50u;
            goto label_25cb50;
        }
    }
    ctx->pc = 0x25CB18u;
    // 0x25cb18: 0x90c50002  lbu         $a1, 0x2($a2)
    ctx->pc = 0x25cb18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x25cb1c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x25cb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x25cb20: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x25cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25cb24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x25cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25cb28: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25cb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25cb2c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25cb30: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25CB30u;
    {
        const bool branch_taken_0x25cb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cb30) {
            ctx->pc = 0x25CB50u;
            goto label_25cb50;
        }
    }
    ctx->pc = 0x25CB38u;
    // 0x25cb38: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25cb38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25cb3c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CB3Cu;
    {
        const bool branch_taken_0x25cb3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25cb3c) {
            ctx->pc = 0x25CB50u;
            goto label_25cb50;
        }
    }
    ctx->pc = 0x25CB44u;
    // 0x25cb44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25CB44u;
    {
        const bool branch_taken_0x25cb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB44u;
        // 0x25cb48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb44) {
            ctx->pc = 0x25CB68u;
            goto label_25cb68;
        }
    }
    ctx->pc = 0x25CB4Cu;
    // 0x25cb4c: 0x0  nop
    ctx->pc = 0x25cb4cu;
    // NOP
label_25cb50:
    // 0x25cb50: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x25cb50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x25cb54: 0x14c0ffec  bnez        $a2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x25CB54u;
    {
        const bool branch_taken_0x25cb54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cb54) {
            ctx->pc = 0x25CB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25cb08;
        }
    }
    ctx->pc = 0x25CB5Cu;
    // 0x25cb5c: 0x0  nop
    ctx->pc = 0x25cb5cu;
    // NOP
label_25cb60:
    // 0x25cb60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25cb60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb64: 0x0  nop
    ctx->pc = 0x25cb64u;
    // NOP
label_25cb68:
    // 0x25cb68: 0x3e00008  jr          $ra
    ctx->pc = 0x25CB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CB70u;
}
