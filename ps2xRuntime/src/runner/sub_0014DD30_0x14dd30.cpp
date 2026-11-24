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

// Function: sub_0014DD30
// Address: 0x14dd30 - 0x14dde0
void sub_0014DD30_0x14dd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DD30_0x14dd30");
#endif

    switch (ctx->pc) {
        case 0x14dd70u: goto label_14dd70;
        default: break;
    }

    ctx->pc = 0x14dd30u;

    // 0x14dd30: 0x94874060  lhu         $a3, 0x4060($a0)
    ctx->pc = 0x14dd30u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16480)));
    // 0x14dd34: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DD34u;
    {
        const bool branch_taken_0x14dd34 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD34u;
        // 0x14dd38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd34) {
            ctx->pc = 0x14DD48u;
            goto label_14dd48;
        }
    }
    ctx->pc = 0x14DD3Cu;
    // 0x14dd3c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x14DD3Cu;
    {
        const bool branch_taken_0x14dd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dd3c) {
            ctx->pc = 0x14DDD8u;
            goto label_14ddd8;
        }
    }
    ctx->pc = 0x14DD44u;
    // 0x14dd44: 0x0  nop
    ctx->pc = 0x14dd44u;
    // NOP
label_14dd48:
    // 0x14dd48: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x14dd48u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14dd4c: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x14dd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x14dd50: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x14DD50u;
    {
        const bool branch_taken_0x14dd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD50u;
        // 0x14dd54: 0x2489085c  addiu       $t1, $a0, 0x85C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 2140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd50) {
            ctx->pc = 0x14DDD0u;
            goto label_14ddd0;
        }
    }
    ctx->pc = 0x14DD58u;
    // 0x14dd58: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x14dd58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x14dd5c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x14dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x14dd60: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x14DD60u;
    {
        const bool branch_taken_0x14dd60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x14DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD60u;
        // 0x14dd64: 0x7082a  slt         $at, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd60) {
            ctx->pc = 0x14DDD0u;
            goto label_14ddd0;
        }
    }
    ctx->pc = 0x14DD68u;
    // 0x14dd68: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x14DD68u;
    {
        const bool branch_taken_0x14dd68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD68u;
        // 0x14dd6c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd68) {
            ctx->pc = 0x14DDD0u;
            goto label_14ddd0;
        }
    }
    ctx->pc = 0x14DD70u;
label_14dd70:
    // 0x14dd70: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x14dd70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14dd74: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14DD74u;
    {
        const bool branch_taken_0x14dd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dd74) {
            ctx->pc = 0x14DDC0u;
            goto label_14ddc0;
        }
    }
    ctx->pc = 0x14DD7Cu;
    // 0x14dd7c: 0x9122000c  lbu         $v0, 0xC($t1)
    ctx->pc = 0x14dd7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x14dd80: 0x1446000f  bne         $v0, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x14DD80u;
    {
        const bool branch_taken_0x14dd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x14dd80) {
            ctx->pc = 0x14DDC0u;
            goto label_14ddc0;
        }
    }
    ctx->pc = 0x14DD88u;
    // 0x14dd88: 0x9122000d  lbu         $v0, 0xD($t1)
    ctx->pc = 0x14dd88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13)));
    // 0x14dd8c: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x14DD8Cu;
    {
        const bool branch_taken_0x14dd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14dd8c) {
            ctx->pc = 0x14DDC0u;
            goto label_14ddc0;
        }
    }
    ctx->pc = 0x14DD94u;
    // 0x14dd94: 0x9123000e  lbu         $v1, 0xE($t1)
    ctx->pc = 0x14dd94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 14)));
    // 0x14dd98: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x14dd98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x14dd9c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14DD9Cu;
    {
        const bool branch_taken_0x14dd9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14dd9c) {
            ctx->pc = 0x14DDC0u;
            goto label_14ddc0;
        }
    }
    ctx->pc = 0x14DDA4u;
    // 0x14dda4: 0x9123000f  lbu         $v1, 0xF($t1)
    ctx->pc = 0x14dda4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 15)));
    // 0x14dda8: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x14dda8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x14ddac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DDACu;
    {
        const bool branch_taken_0x14ddac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DDACu;
        // 0x14ddb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ddac) {
            ctx->pc = 0x14DDC0u;
            goto label_14ddc0;
        }
    }
    ctx->pc = 0x14DDB4u;
    // 0x14ddb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14DDB4u;
    {
        const bool branch_taken_0x14ddb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ddb4) {
            ctx->pc = 0x14DDD8u;
            goto label_14ddd8;
        }
    }
    ctx->pc = 0x14DDBCu;
    // 0x14ddbc: 0x0  nop
    ctx->pc = 0x14ddbcu;
    // NOP
label_14ddc0:
    // 0x14ddc0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x14ddc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14ddc4: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x14ddc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x14ddc8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x14DDC8u;
    {
        const bool branch_taken_0x14ddc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DDC8u;
        // 0x14ddcc: 0x2529001c  addiu       $t1, $t1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ddc8) {
            ctx->pc = 0x14DD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14dd70;
        }
    }
    ctx->pc = 0x14DDD0u;
label_14ddd0:
    // 0x14ddd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14ddd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ddd4: 0x0  nop
    ctx->pc = 0x14ddd4u;
    // NOP
label_14ddd8:
    // 0x14ddd8: 0x3e00008  jr          $ra
    ctx->pc = 0x14DDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DDE0u;
}
