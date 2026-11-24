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

// Function: sub_00186E50
// Address: 0x186e50 - 0x186ec0
void sub_00186E50_0x186e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186E50_0x186e50");
#endif

    switch (ctx->pc) {
        case 0x186e64u: goto label_186e64;
        case 0x186e78u: goto label_186e78;
        default: break;
    }

    ctx->pc = 0x186e50u;

    // 0x186e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186e54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186e58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186e5c: 0xc060d40  jal         func_183500
    ctx->pc = 0x186E5Cu;
    SET_GPR_U32(ctx, 31, 0x186E64u);
    ctx->pc = 0x186E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186E5Cu;
    // 0x186e60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x186E5Cu, 0x186E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186E64u;
label_186e64:
    // 0x186e64: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x186E64u;
    {
        const bool branch_taken_0x186e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186e64) {
            ctx->pc = 0x186EA8u;
            goto label_186ea8;
        }
    }
    ctx->pc = 0x186E6Cu;
    // 0x186e6c: 0x904511dd  lbu         $a1, 0x11DD($v0)
    ctx->pc = 0x186e6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4573)));
    // 0x186e70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x186e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e74: 0x8c431204  lw          $v1, 0x1204($v0)
    ctx->pc = 0x186e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4612)));
label_186e78:
    // 0x186e78: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x186e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x186e7c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x186E7Cu;
    {
        const bool branch_taken_0x186e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x186e7c) {
            ctx->pc = 0x186E98u;
            goto label_186e98;
        }
    }
    ctx->pc = 0x186E84u;
    // 0x186e84: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x186e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x186e88: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x186e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x186e8c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x186e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x186e90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x186E90u;
    {
        const bool branch_taken_0x186e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E90u;
        // 0x186e94: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e90) {
            ctx->pc = 0x186EB0u;
            goto label_186eb0;
        }
    }
    ctx->pc = 0x186E98u;
label_186e98:
    // 0x186e98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x186e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x186e9c: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x186e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x186ea0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x186EA0u;
    {
        const bool branch_taken_0x186ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EA0u;
        // 0x186ea4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ea0) {
            ctx->pc = 0x186E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186e78;
        }
    }
    ctx->pc = 0x186EA8u;
label_186ea8:
    // 0x186ea8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x186ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x186eac: 0x0  nop
    ctx->pc = 0x186eacu;
    // NOP
label_186eb0:
    // 0x186eb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186eb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x186EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EB8u;
        // 0x186ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186EC0u;
}
