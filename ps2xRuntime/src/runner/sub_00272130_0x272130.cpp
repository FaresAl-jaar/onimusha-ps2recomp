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

// Function: sub_00272130
// Address: 0x272130 - 0x2721b8
void sub_00272130_0x272130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272130_0x272130");
#endif

    switch (ctx->pc) {
        case 0x272140u: goto label_272140;
        default: break;
    }

    ctx->pc = 0x272130u;

    // 0x272130: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x272130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x272134: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x272134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x272138: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x272138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27213c: 0x24632610  addiu       $v1, $v1, 0x2610
    ctx->pc = 0x27213cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9744));
label_272140:
    // 0x272140: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x272140u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x272144: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x272144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x272148: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x272148u;
    {
        const bool branch_taken_0x272148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272148) {
            ctx->pc = 0x272198u;
            goto label_272198;
        }
    }
    ctx->pc = 0x272150u;
    // 0x272150: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x272150u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x272154: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x272154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x272158: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x272158u;
    {
        const bool branch_taken_0x272158 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x27215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272158u;
        // 0x27215c: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272158) {
            ctx->pc = 0x272198u;
            goto label_272198;
        }
    }
    ctx->pc = 0x272160u;
    // 0x272160: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x272160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x272164: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x272164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x272168: 0x24632614  addiu       $v1, $v1, 0x2614
    ctx->pc = 0x272168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9748));
    // 0x27216c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x27216cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x272170: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x272170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x272174: 0x24422610  addiu       $v0, $v0, 0x2610
    ctx->pc = 0x272174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9744));
    // 0x272178: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x272178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27217c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x272180: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x272180u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x272184: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x272184u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x272188: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x272188u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27218c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27218Cu;
    {
        const bool branch_taken_0x27218c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27218Cu;
        // 0x272190: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27218c) {
            ctx->pc = 0x2721B0u;
            goto label_2721b0;
        }
    }
    ctx->pc = 0x272194u;
    // 0x272194: 0x0  nop
    ctx->pc = 0x272194u;
    // NOP
label_272198:
    // 0x272198: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x272198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27219c: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x27219cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2721a0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2721A0u;
    {
        const bool branch_taken_0x2721a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2721A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721A0u;
        // 0x2721a4: 0x24630006  addiu       $v1, $v1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2721a0) {
            ctx->pc = 0x272140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272140;
        }
    }
    ctx->pc = 0x2721A8u;
    // 0x2721a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2721a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2721ac: 0x0  nop
    ctx->pc = 0x2721acu;
    // NOP
label_2721b0:
    // 0x2721b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2721B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2721B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2721B8u;
}
