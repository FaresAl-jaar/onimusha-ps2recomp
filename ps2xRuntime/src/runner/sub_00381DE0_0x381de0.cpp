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

// Function: sub_00381DE0
// Address: 0x381de0 - 0x381e50
void sub_00381DE0_0x381de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381DE0_0x381de0");
#endif

    switch (ctx->pc) {
        case 0x381e14u: goto label_381e14;
        case 0x381e1cu: goto label_381e1c;
        default: break;
    }

    ctx->pc = 0x381de0u;

    // 0x381de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x381de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x381de4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x381de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x381de8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x381de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x381dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x381decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381df0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x381DF0u;
    {
        const bool branch_taken_0x381df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x381DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381DF0u;
        // 0x381df4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381df0) {
            ctx->pc = 0x381E40u;
            goto label_381e40;
        }
    }
    ctx->pc = 0x381DF8u;
    // 0x381df8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x381df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x381dfc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x381dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x381e00: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x381e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x381e04: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x381e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x381e08: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x381e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x381e0c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x381E0Cu;
    SET_GPR_U32(ctx, 31, 0x381E14u);
    ctx->pc = 0x381E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381E0Cu;
    // 0x381e10: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x381E0Cu, 0x381E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381E14u;
label_381e14:
    // 0x381e14: 0xc09d694  jal         func_275A50
    ctx->pc = 0x381E14u;
    SET_GPR_U32(ctx, 31, 0x381E1Cu);
    ctx->pc = 0x381E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381E14u;
    // 0x381e18: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x381E14u, 0x381E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381E1Cu;
label_381e1c:
    // 0x381e1c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x381e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x381e20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x381e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x381e24: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x381e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x381e28: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x381e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x381e2c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x381e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x381e30: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x381e30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x381e34: 0x24639a10  addiu       $v1, $v1, -0x65F0
    ctx->pc = 0x381e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941200));
    // 0x381e38: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x381e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x381e3c: 0x0  nop
    ctx->pc = 0x381e3cu;
    // NOP
label_381e40:
    // 0x381e40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x381e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381e44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x381e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381e48: 0x3e00008  jr          $ra
    ctx->pc = 0x381E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381E48u;
        // 0x381e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381E50u;
}
