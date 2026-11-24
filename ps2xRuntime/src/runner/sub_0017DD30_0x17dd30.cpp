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

// Function: sub_0017DD30
// Address: 0x17dd30 - 0x17ddfc
void sub_0017DD30_0x17dd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DD30_0x17dd30");
#endif

    switch (ctx->pc) {
        case 0x17dd64u: goto label_17dd64;
        case 0x17dd98u: goto label_17dd98;
        case 0x17ddb8u: goto label_17ddb8;
        default: break;
    }

    ctx->pc = 0x17dd30u;

    // 0x17dd30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17dd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17dd34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17dd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17dd38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17dd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17dd3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17dd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17dd40: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17dd40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17dd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17dd48: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17dd48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17dd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17dd50: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17dd50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd54: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x17dd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x17dd58: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17dd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd5c: 0xc05e664  jal         func_179990
    ctx->pc = 0x17DD5Cu;
    SET_GPR_U32(ctx, 31, 0x17DD64u);
    ctx->pc = 0x17DD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD5Cu;
    // 0x17dd60: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179990u, 0x17DD5Cu, 0x17DD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD64u;
label_17dd64:
    // 0x17dd64: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17dd68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17dd6c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x17dd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x17dd70: 0xae930004  sw          $s3, 0x4($s4)
    ctx->pc = 0x17dd70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 19));
    // 0x17dd74: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x17dd74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x17dd78: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x17dd78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x17dd7c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x17dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x17dd80: 0x94620068  lhu         $v0, 0x68($v1)
    ctx->pc = 0x17dd80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x17dd84: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x17dd84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17dd88: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x17DD88u;
    {
        const bool branch_taken_0x17dd88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD88u;
        // 0x17dd8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd88) {
            ctx->pc = 0x17DDD8u;
            goto label_17ddd8;
        }
    }
    ctx->pc = 0x17DD90u;
    // 0x17dd90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17dd90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd94: 0x0  nop
    ctx->pc = 0x17dd94u;
    // NOP
label_17dd98:
    // 0x17dd98: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x17dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x17dd9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17dda0: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x17dda0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x17dda4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x17dda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x17dda8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17DDA8u;
    {
        const bool branch_taken_0x17dda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDA8u;
        // 0x17ddac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dda8) {
            ctx->pc = 0x17DDC0u;
            goto label_17ddc0;
        }
    }
    ctx->pc = 0x17DDB0u;
    // 0x17ddb0: 0xc0a86c8  jal         func_2A1B20
    ctx->pc = 0x17DDB0u;
    SET_GPR_U32(ctx, 31, 0x17DDB8u);
    ctx->pc = 0x17DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DDB0u;
    // 0x17ddb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1B20u, 0x17DDB0u, 0x17DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DDB8u;
label_17ddb8:
    // 0x17ddb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ddbc: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x17ddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_17ddc0:
    // 0x17ddc0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x17ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x17ddc4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17ddc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17ddc8: 0x94620068  lhu         $v0, 0x68($v1)
    ctx->pc = 0x17ddc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x17ddcc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x17ddccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17ddd0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x17DDD0u;
    {
        const bool branch_taken_0x17ddd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDD0u;
        // 0x17ddd4: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ddd0) {
            ctx->pc = 0x17DD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dd98;
        }
    }
    ctx->pc = 0x17DDD8u;
label_17ddd8:
    // 0x17ddd8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x17ddd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dddc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17dddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17dde0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17dde0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17dde4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17dde4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17dde8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17dde8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ddec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ddecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ddf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ddf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ddf4: 0x3e00008  jr          $ra
    ctx->pc = 0x17DDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDF4u;
        // 0x17ddf8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DDFCu;
}
