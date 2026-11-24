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

// Function: sub_001D5C50
// Address: 0x1d5c50 - 0x1d5cf0
void sub_001D5C50_0x1d5c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5C50_0x1d5c50");
#endif

    switch (ctx->pc) {
        case 0x1d5c80u: goto label_1d5c80;
        default: break;
    }

    ctx->pc = 0x1d5c50u;

    // 0x1d5c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d5c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d5c54: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1d5c54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d5c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d5c5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d5c5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d5c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d5c64: 0x240b0007  addiu       $t3, $zero, 0x7
    ctx->pc = 0x1d5c64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d5c68: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d5c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d5c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c70: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1d5c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1d5c74: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1d5c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d5c78: 0xc075178  jal         func_1D45E0
    ctx->pc = 0x1D5C78u;
    SET_GPR_U32(ctx, 31, 0x1D5C80u);
    ctx->pc = 0x1D5C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C78u;
    // 0x1d5c7c: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45E0u, 0x1D5C78u, 0x1D5C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C80u;
label_1d5c80:
    // 0x1d5c80: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x1d5c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x1d5c84: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x1d5c84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1d5c88: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x1d5c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x1d5c8c: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x1d5c8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d5c90: 0x0  nop
    ctx->pc = 0x1d5c90u;
    // NOP
    // 0x1d5c94: 0x0  nop
    ctx->pc = 0x1d5c94u;
    // NOP
    // 0x1d5c98: 0x1810  mfhi        $v1
    ctx->pc = 0x1d5c98u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1d5c9c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1d5c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5ca0: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x1d5ca0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d5ca4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D5CA4u;
    {
        const bool branch_taken_0x1d5ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CA4u;
        // 0x1d5ca8: 0x4283c  dsll32      $a1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ca4) {
            ctx->pc = 0x1D5CD0u;
            goto label_1d5cd0;
        }
    }
    ctx->pc = 0x1D5CACu;
    // 0x1d5cac: 0x3c03302e  lui         $v1, 0x302E
    ctx->pc = 0x1d5cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12334 << 16));
    // 0x1d5cb0: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1d5cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1d5cb4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d5cb4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d5cb8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d5cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1d5cbc: 0x24030512  addiu       $v1, $zero, 0x512
    ctx->pc = 0x1d5cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1d5cc0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1d5cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1d5cc4: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x1d5cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x1d5cc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5CC8u;
    {
        const bool branch_taken_0x1d5cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CC8u;
        // 0x1d5ccc: 0xfe030008  sd          $v1, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5cc8) {
            ctx->pc = 0x1D5CD8u;
            goto label_1d5cd8;
        }
    }
    ctx->pc = 0x1D5CD0u;
label_1d5cd0:
    // 0x1d5cd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5CD0u;
    {
        const bool branch_taken_0x1d5cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CD0u;
        // 0x1d5cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5cd0) {
            ctx->pc = 0x1D5CE0u;
            goto label_1d5ce0;
        }
    }
    ctx->pc = 0x1D5CD8u;
label_1d5cd8:
    // 0x1d5cd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d5cdc: 0x0  nop
    ctx->pc = 0x1d5cdcu;
    // NOP
label_1d5ce0:
    // 0x1d5ce0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d5ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5ce4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d5ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CE8u;
        // 0x1d5cec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5CF0u;
}
