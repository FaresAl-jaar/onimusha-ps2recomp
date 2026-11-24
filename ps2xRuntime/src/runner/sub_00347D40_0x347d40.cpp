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

// Function: sub_00347D40
// Address: 0x347d40 - 0x347db0
void sub_00347D40_0x347d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347D40_0x347d40");
#endif

    switch (ctx->pc) {
        case 0x347d74u: goto label_347d74;
        case 0x347d7cu: goto label_347d7c;
        default: break;
    }

    ctx->pc = 0x347d40u;

    // 0x347d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x347d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x347d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x347d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x347d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x347d4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x347d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347d50: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x347D50u;
    {
        const bool branch_taken_0x347d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x347D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347D50u;
        // 0x347d54: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347d50) {
            ctx->pc = 0x347DA0u;
            goto label_347da0;
        }
    }
    ctx->pc = 0x347D58u;
    // 0x347d58: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x347d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x347d5c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x347d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x347d60: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x347d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x347d64: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x347d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x347d68: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x347d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x347d6c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x347D6Cu;
    SET_GPR_U32(ctx, 31, 0x347D74u);
    ctx->pc = 0x347D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347D6Cu;
    // 0x347d70: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x347D6Cu, 0x347D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347D74u;
label_347d74:
    // 0x347d74: 0xc09d694  jal         func_275A50
    ctx->pc = 0x347D74u;
    SET_GPR_U32(ctx, 31, 0x347D7Cu);
    ctx->pc = 0x347D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347D74u;
    // 0x347d78: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x347D74u, 0x347D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347D7Cu;
label_347d7c:
    // 0x347d7c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x347d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x347d80: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x347d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347d84: 0x24637430  addiu       $v1, $v1, 0x7430
    ctx->pc = 0x347d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29744));
    // 0x347d88: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x347d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x347d8c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x347d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x347d90: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x347d90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x347d94: 0x24638c30  addiu       $v1, $v1, -0x73D0
    ctx->pc = 0x347d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937648));
    // 0x347d98: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x347d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x347d9c: 0x0  nop
    ctx->pc = 0x347d9cu;
    // NOP
label_347da0:
    // 0x347da0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x347da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347da8: 0x3e00008  jr          $ra
    ctx->pc = 0x347DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347DA8u;
        // 0x347dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347DB0u;
}
