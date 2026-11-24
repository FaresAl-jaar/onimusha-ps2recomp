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

// Function: sub_0033FFA0
// Address: 0x33ffa0 - 0x340010
void sub_0033FFA0_0x33ffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033FFA0_0x33ffa0");
#endif

    switch (ctx->pc) {
        case 0x33ffd4u: goto label_33ffd4;
        case 0x33ffdcu: goto label_33ffdc;
        default: break;
    }

    ctx->pc = 0x33ffa0u;

    // 0x33ffa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33ffa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33ffa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33ffa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33ffa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33ffa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33ffac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33ffacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ffb0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x33FFB0u;
    {
        const bool branch_taken_0x33ffb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FFB0u;
        // 0x33ffb4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ffb0) {
            ctx->pc = 0x340000u;
            goto label_340000;
        }
    }
    ctx->pc = 0x33FFB8u;
    // 0x33ffb8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33ffbc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x33ffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x33ffc0: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x33ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x33ffc4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x33ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x33ffc8: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x33ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x33ffcc: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x33FFCCu;
    SET_GPR_U32(ctx, 31, 0x33FFD4u);
    ctx->pc = 0x33FFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FFCCu;
    // 0x33ffd0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x33FFCCu, 0x33FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FFD4u;
label_33ffd4:
    // 0x33ffd4: 0xc09d694  jal         func_275A50
    ctx->pc = 0x33FFD4u;
    SET_GPR_U32(ctx, 31, 0x33FFDCu);
    ctx->pc = 0x33FFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FFD4u;
    // 0x33ffd8: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x33FFD4u, 0x33FFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FFDCu;
label_33ffdc:
    // 0x33ffdc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x33ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x33ffe0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33ffe4: 0x24637430  addiu       $v1, $v1, 0x7430
    ctx->pc = 0x33ffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29744));
    // 0x33ffe8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x33ffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x33ffec: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x33ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x33fff0: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x33fff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33fff4: 0x24638ae0  addiu       $v1, $v1, -0x7520
    ctx->pc = 0x33fff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937312));
    // 0x33fff8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x33fff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x33fffc: 0x0  nop
    ctx->pc = 0x33fffcu;
    // NOP
label_340000:
    // 0x340000: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x340000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x340004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340008: 0x3e00008  jr          $ra
    ctx->pc = 0x340008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340008u;
        // 0x34000c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340010u;
}
