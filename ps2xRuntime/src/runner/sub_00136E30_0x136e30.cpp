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

// Function: sub_00136E30
// Address: 0x136e30 - 0x136ee0
void sub_00136E30_0x136e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136E30_0x136e30");
#endif

    switch (ctx->pc) {
        case 0x136e48u: goto label_136e48;
        default: break;
    }

    ctx->pc = 0x136e30u;

    // 0x136e30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x136e30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x136e34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x136e38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e40: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x136e40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x136e44: 0x0  nop
    ctx->pc = 0x136e44u;
    // NOP
label_136e48:
    // 0x136e48: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x136e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x136e4c: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x136e4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x136e50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x136e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x136e54: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x136E54u;
    {
        const bool branch_taken_0x136e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E54u;
        // 0x136e58: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136e54) {
            ctx->pc = 0x136EA8u;
            goto label_136ea8;
        }
    }
    ctx->pc = 0x136E5Cu;
    // 0x136e5c: 0x24c2fff0  addiu       $v0, $a2, -0x10
    ctx->pc = 0x136e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x136e60: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x136e60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x136e64: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x136e64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x136e68: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x136e68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x136e6c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136E6Cu;
    {
        const bool branch_taken_0x136e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E6Cu;
        // 0x136e70: 0xaca7000c  sw          $a3, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136e6c) {
            ctx->pc = 0x136E84u;
            goto label_136e84;
        }
    }
    ctx->pc = 0x136E74u;
    // 0x136e74: 0x24c2ffdd  addiu       $v0, $a2, -0x23
    ctx->pc = 0x136e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967261));
    // 0x136e78: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x136e78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x136e7c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x136E7Cu;
    {
        const bool branch_taken_0x136e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136e7c) {
            ctx->pc = 0x136E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136E7Cu;
            // 0x136e80: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136E90u;
            goto label_136e90;
        }
    }
    ctx->pc = 0x136E84u;
label_136e84:
    // 0x136e84: 0xacaa0004  sw          $t2, 0x4($a1)
    ctx->pc = 0x136e84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 10));
    // 0x136e88: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x136E88u;
    {
        const bool branch_taken_0x136e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E88u;
        // 0x136e8c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136e88) {
            ctx->pc = 0x136EB4u;
            goto label_136eb4;
        }
    }
    ctx->pc = 0x136E90u;
label_136e90:
    // 0x136e90: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x136e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x136e94: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x136E94u;
    {
        const bool branch_taken_0x136e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E94u;
        // 0x136e98: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136e94) {
            ctx->pc = 0x136EB4u;
            goto label_136eb4;
        }
    }
    ctx->pc = 0x136E9Cu;
    // 0x136e9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x136e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x136ea0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x136EA0u;
    {
        const bool branch_taken_0x136ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EA0u;
        // 0x136ea4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ea0) {
            ctx->pc = 0x136EB4u;
            goto label_136eb4;
        }
    }
    ctx->pc = 0x136EA8u;
label_136ea8:
    // 0x136ea8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x136ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x136eac: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x136eacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x136eb0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x136eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_136eb4:
    // 0x136eb4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x136eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x136eb8: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x136eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x136ebc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136EBCu;
    {
        const bool branch_taken_0x136ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EBCu;
        // 0x136ec0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ebc) {
            ctx->pc = 0x136ECCu;
            goto label_136ecc;
        }
    }
    ctx->pc = 0x136EC4u;
    // 0x136ec4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x136ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x136ec8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x136ec8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136ecc:
    // 0x136ecc: 0x28c20028  slti        $v0, $a2, 0x28
    ctx->pc = 0x136eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x136ed0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x136ED0u;
    {
        const bool branch_taken_0x136ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136ED0u;
        // 0x136ed4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ed0) {
            ctx->pc = 0x136E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136e48;
        }
    }
    ctx->pc = 0x136ED8u;
    // 0x136ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x136ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136ED8u;
        // 0x136edc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136EE0u;
}
