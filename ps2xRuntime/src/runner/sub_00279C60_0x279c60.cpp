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

// Function: sub_00279C60
// Address: 0x279c60 - 0x279cd8
void sub_00279C60_0x279c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279C60_0x279c60");
#endif

    switch (ctx->pc) {
        case 0x279c90u: goto label_279c90;
        case 0x279ca4u: goto label_279ca4;
        default: break;
    }

    ctx->pc = 0x279c60u;

    // 0x279c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x279c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x279c64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x279c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x279c68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x279c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x279c6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x279c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x279c70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x279c70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279c74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x279c78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x279c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279c7c: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x279c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x279c80: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x279c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279c84: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x279c84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x279c88: 0xac880018  sw          $t0, 0x18($a0)
    ctx->pc = 0x279c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 8));
    // 0x279c8c: 0xac89001c  sw          $t1, 0x1C($a0)
    ctx->pc = 0x279c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 9));
label_279c90:
    // 0x279c90: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x279c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x279c94: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x279C94u;
    {
        const bool branch_taken_0x279c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x279c94) {
            ctx->pc = 0x279CA8u;
            goto label_279ca8;
        }
    }
    ctx->pc = 0x279C9Cu;
    // 0x279c9c: 0xc09e6e4  jal         func_279B90
    ctx->pc = 0x279C9Cu;
    SET_GPR_U32(ctx, 31, 0x279CA4u);
    ctx->pc = 0x279B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B90u, 0x279C9Cu, 0x279CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CA4u;
label_279ca4:
    // 0x279ca4: 0x0  nop
    ctx->pc = 0x279ca4u;
    // NOP
label_279ca8:
    // 0x279ca8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x279ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x279cac: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x279cacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x279cb0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x279CB0u;
    {
        const bool branch_taken_0x279cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x279CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CB0u;
        // 0x279cb4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279cb0) {
            ctx->pc = 0x279C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279c90;
        }
    }
    ctx->pc = 0x279CB8u;
    // 0x279cb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x279cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x279cbc: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x279cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x279cc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x279cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279cc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x279cc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279cc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279cc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279ccc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x279CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CD0u;
        // 0x279cd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279CD8u;
}
