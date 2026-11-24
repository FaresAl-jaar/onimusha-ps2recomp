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

// Function: sub_00381E50
// Address: 0x381e50 - 0x381ec0
void sub_00381E50_0x381e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381E50_0x381e50");
#endif

    switch (ctx->pc) {
        case 0x381e84u: goto label_381e84;
        case 0x381e8cu: goto label_381e8c;
        default: break;
    }

    ctx->pc = 0x381e50u;

    // 0x381e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x381e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x381e54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x381e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x381e58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x381e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x381e5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x381e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381e60: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x381E60u;
    {
        const bool branch_taken_0x381e60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x381E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381E60u;
        // 0x381e64: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381e60) {
            ctx->pc = 0x381EB0u;
            goto label_381eb0;
        }
    }
    ctx->pc = 0x381E68u;
    // 0x381e68: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x381e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x381e6c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x381e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x381e70: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x381e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x381e74: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x381e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x381e78: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x381e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x381e7c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x381E7Cu;
    SET_GPR_U32(ctx, 31, 0x381E84u);
    ctx->pc = 0x381E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381E7Cu;
    // 0x381e80: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x381E7Cu, 0x381E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381E84u;
label_381e84:
    // 0x381e84: 0xc09d694  jal         func_275A50
    ctx->pc = 0x381E84u;
    SET_GPR_U32(ctx, 31, 0x381E8Cu);
    ctx->pc = 0x381E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381E84u;
    // 0x381e88: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x381E84u, 0x381E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381E8Cu;
label_381e8c:
    // 0x381e8c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x381e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x381e90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x381e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x381e94: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x381e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x381e98: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x381e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x381e9c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x381e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x381ea0: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x381ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x381ea4: 0x24639980  addiu       $v1, $v1, -0x6680
    ctx->pc = 0x381ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941056));
    // 0x381ea8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x381ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x381eac: 0x0  nop
    ctx->pc = 0x381eacu;
    // NOP
label_381eb0:
    // 0x381eb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x381eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381eb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x381eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x381EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381EB8u;
        // 0x381ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381EC0u;
}
