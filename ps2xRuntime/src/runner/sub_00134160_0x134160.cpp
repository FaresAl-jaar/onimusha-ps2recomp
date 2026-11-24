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

// Function: sub_00134160
// Address: 0x134160 - 0x1341b8
void sub_00134160_0x134160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134160_0x134160");
#endif

    switch (ctx->pc) {
        case 0x134190u: goto label_134190;
        default: break;
    }

    ctx->pc = 0x134160u;

    // 0x134160: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x134160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x134164: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x134164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x134168: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x134168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13416c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13416cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134170: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x134170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x134174: 0x90660011  lbu         $a2, 0x11($v1)
    ctx->pc = 0x134174u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x134178: 0x94650012  lhu         $a1, 0x12($v1)
    ctx->pc = 0x134178u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x13417c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x13417cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x134180: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x134180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x134184: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x134184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x134188: 0x18c00009  blez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x134188u;
    {
        const bool branch_taken_0x134188 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x13418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134188u;
        // 0x13418c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134188) {
            ctx->pc = 0x1341B0u;
            goto label_1341b0;
        }
    }
    ctx->pc = 0x134190u;
label_134190:
    // 0x134190: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x134190u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134194: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x134194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x134198: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x134198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13419c: 0x2484ffe8  addiu       $a0, $a0, -0x18
    ctx->pc = 0x13419cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
    // 0x1341a0: 0x0  nop
    ctx->pc = 0x1341a0u;
    // NOP
    // 0x1341a4: 0x1cc0fffa  bgtz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1341A4u;
    {
        const bool branch_taken_0x1341a4 = (GPR_S64(ctx, 6) > 0);
        if (branch_taken_0x1341a4) {
            ctx->pc = 0x134190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134190;
        }
    }
    ctx->pc = 0x1341ACu;
    // 0x1341ac: 0x0  nop
    ctx->pc = 0x1341acu;
    // NOP
label_1341b0:
    // 0x1341b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1341B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1341B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1341B8u;
}
