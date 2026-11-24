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

// Function: sub_002E6C30
// Address: 0x2e6c30 - 0x2e6ca0
void sub_002E6C30_0x2e6c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6C30_0x2e6c30");
#endif

    switch (ctx->pc) {
        case 0x2e6c64u: goto label_2e6c64;
        case 0x2e6c6cu: goto label_2e6c6c;
        default: break;
    }

    ctx->pc = 0x2e6c30u;

    // 0x2e6c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e6c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e6c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e6c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e6c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e6c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e6c3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e6c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6c40: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E6C40u;
    {
        const bool branch_taken_0x2e6c40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C40u;
        // 0x2e6c44: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c40) {
            ctx->pc = 0x2E6C90u;
            goto label_2e6c90;
        }
    }
    ctx->pc = 0x2E6C48u;
    // 0x2e6c48: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2e6c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2e6c4c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x2e6c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x2e6c50: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x2e6c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x2e6c54: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2e6c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2e6c58: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x2e6c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x2e6c5c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x2E6C5Cu;
    SET_GPR_U32(ctx, 31, 0x2E6C64u);
    ctx->pc = 0x2E6C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6C5Cu;
    // 0x2e6c60: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x2E6C5Cu, 0x2E6C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6C64u;
label_2e6c64:
    // 0x2e6c64: 0xc09d694  jal         func_275A50
    ctx->pc = 0x2E6C64u;
    SET_GPR_U32(ctx, 31, 0x2E6C6Cu);
    ctx->pc = 0x2E6C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6C64u;
    // 0x2e6c68: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x2E6C64u, 0x2E6C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6C6Cu;
label_2e6c6c:
    // 0x2e6c6c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2e6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2e6c70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e6c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e6c74: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x2e6c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x2e6c78: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2e6c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2e6c7c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2e6c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2e6c80: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x2e6c80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e6c84: 0x24637ae0  addiu       $v1, $v1, 0x7AE0
    ctx->pc = 0x2e6c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31456));
    // 0x2e6c88: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2e6c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2e6c8c: 0x0  nop
    ctx->pc = 0x2e6c8cu;
    // NOP
label_2e6c90:
    // 0x2e6c90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e6c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6c98: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C98u;
        // 0x2e6c9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6CA0u;
}
