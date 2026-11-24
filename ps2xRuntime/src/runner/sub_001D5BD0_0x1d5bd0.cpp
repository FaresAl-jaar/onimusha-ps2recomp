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

// Function: sub_001D5BD0
// Address: 0x1d5bd0 - 0x1d5c50
void sub_001D5BD0_0x1d5bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5BD0_0x1d5bd0");
#endif

    ctx->pc = 0x1d5bd0u;

    // 0x1d5bd0: 0x8f83880c  lw          $v1, -0x77F4($gp)
    ctx->pc = 0x1d5bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936588)));
    // 0x1d5bd4: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x1d5bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x1d5bd8: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x1d5bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x1d5bdc: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1d5bdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d5be0: 0x0  nop
    ctx->pc = 0x1d5be0u;
    // NOP
    // 0x1d5be4: 0x0  nop
    ctx->pc = 0x1d5be4u;
    // NOP
    // 0x1d5be8: 0x1010  mfhi        $v0
    ctx->pc = 0x1d5be8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d5bec: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1d5becu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1d5bf0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d5bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5bf4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1d5bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d5bf8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D5BF8u;
    {
        const bool branch_taken_0x1d5bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5bf8) {
            ctx->pc = 0x1D5C38u;
            goto label_1d5c38;
        }
    }
    ctx->pc = 0x1D5C00u;
    // 0x1d5c00: 0x8f858808  lw          $a1, -0x77F8($gp)
    ctx->pc = 0x1d5c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936584)));
    // 0x1d5c04: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d5c04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d5c08: 0x3c03302e  lui         $v1, 0x302E
    ctx->pc = 0x1d5c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12334 << 16));
    // 0x1d5c0c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d5c0cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d5c10: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1d5c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1d5c14: 0x24020512  addiu       $v0, $zero, 0x512
    ctx->pc = 0x1d5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1d5c18: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d5c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d5c1c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d5c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d5c20: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1d5c20u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x1d5c24: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x1d5c24u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x1d5c28: 0x8f82880c  lw          $v0, -0x77F4($gp)
    ctx->pc = 0x1d5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936588)));
    // 0x1d5c2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d5c30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5C30u;
    {
        const bool branch_taken_0x1d5c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C30u;
        // 0x1d5c34: 0xaf82880c  sw          $v0, -0x77F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c30) {
            ctx->pc = 0x1D5C40u;
            goto label_1d5c40;
        }
    }
    ctx->pc = 0x1D5C38u;
label_1d5c38:
    // 0x1d5c38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5C38u;
    {
        const bool branch_taken_0x1d5c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C38u;
        // 0x1d5c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c38) {
            ctx->pc = 0x1D5C48u;
            goto label_1d5c48;
        }
    }
    ctx->pc = 0x1D5C40u;
label_1d5c40:
    // 0x1d5c40: 0x8f82880c  lw          $v0, -0x77F4($gp)
    ctx->pc = 0x1d5c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936588)));
    // 0x1d5c44: 0x0  nop
    ctx->pc = 0x1d5c44u;
    // NOP
label_1d5c48:
    // 0x1d5c48: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5C50u;
}
