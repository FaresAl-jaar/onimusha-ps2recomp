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

// Function: sub_00375C60
// Address: 0x375c60 - 0x375cd8
void sub_00375C60_0x375c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375C60_0x375c60");
#endif

    switch (ctx->pc) {
        case 0x375c94u: goto label_375c94;
        case 0x375c9cu: goto label_375c9c;
        default: break;
    }

    ctx->pc = 0x375c60u;

    // 0x375c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x375c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x375c64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x375c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x375c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x375c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x375c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x375c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375c70: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x375C70u;
    {
        const bool branch_taken_0x375c70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x375C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375C70u;
        // 0x375c74: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375c70) {
            ctx->pc = 0x375CC8u;
            goto label_375cc8;
        }
    }
    ctx->pc = 0x375C78u;
    // 0x375c78: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x375c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x375c7c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x375c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x375c80: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x375c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x375c84: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x375c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x375c88: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x375c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x375c8c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x375C8Cu;
    SET_GPR_U32(ctx, 31, 0x375C94u);
    ctx->pc = 0x375C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375C8Cu;
    // 0x375c90: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x375C8Cu, 0x375C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375C94u;
label_375c94:
    // 0x375c94: 0xc09d694  jal         func_275A50
    ctx->pc = 0x375C94u;
    SET_GPR_U32(ctx, 31, 0x375C9Cu);
    ctx->pc = 0x375C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375C94u;
    // 0x375c98: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x375C94u, 0x375C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375C9Cu;
label_375c9c:
    // 0x375c9c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x375c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x375ca0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x375ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x375ca4: 0x248476c0  addiu       $a0, $a0, 0x76C0
    ctx->pc = 0x375ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30400));
    // 0x375ca8: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x375ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x375cac: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x375cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x375cb0: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x375cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x375cb4: 0x248484a0  addiu       $a0, $a0, -0x7B60
    ctx->pc = 0x375cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935712));
    // 0x375cb8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x375cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x375cbc: 0x24639780  addiu       $v1, $v1, -0x6880
    ctx->pc = 0x375cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940544));
    // 0x375cc0: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x375cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x375cc4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x375cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_375cc8:
    // 0x375cc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x375cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375ccc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x375cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x375CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375CD0u;
        // 0x375cd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375CD8u;
}
