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

// Function: sub_003238C0
// Address: 0x3238c0 - 0x323930
void sub_003238C0_0x3238c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003238C0_0x3238c0");
#endif

    switch (ctx->pc) {
        case 0x3238f4u: goto label_3238f4;
        case 0x3238fcu: goto label_3238fc;
        default: break;
    }

    ctx->pc = 0x3238c0u;

    // 0x3238c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3238c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3238c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3238c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3238c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3238c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3238cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3238ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3238d0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3238D0u;
    {
        const bool branch_taken_0x3238d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3238D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238D0u;
        // 0x3238d4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3238d0) {
            ctx->pc = 0x323920u;
            goto label_323920;
        }
    }
    ctx->pc = 0x3238D8u;
    // 0x3238d8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3238d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3238dc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3238dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3238e0: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x3238e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x3238e4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3238e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3238e8: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x3238e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x3238ec: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x3238ECu;
    SET_GPR_U32(ctx, 31, 0x3238F4u);
    ctx->pc = 0x3238F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3238ECu;
    // 0x3238f0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x3238ECu, 0x3238F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3238F4u;
label_3238f4:
    // 0x3238f4: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3238F4u;
    SET_GPR_U32(ctx, 31, 0x3238FCu);
    ctx->pc = 0x3238F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3238F4u;
    // 0x3238f8: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3238F4u, 0x3238FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3238FCu;
label_3238fc:
    // 0x3238fc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3238fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x323900: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x323900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x323904: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x323904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x323908: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x323908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x32390c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x32390cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x323910: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x323910u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x323914: 0x246385b0  addiu       $v1, $v1, -0x7A50
    ctx->pc = 0x323914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935984));
    // 0x323918: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x323918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x32391c: 0x0  nop
    ctx->pc = 0x32391cu;
    // NOP
label_323920:
    // 0x323920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323928: 0x3e00008  jr          $ra
    ctx->pc = 0x323928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323928u;
        // 0x32392c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323930u;
}
