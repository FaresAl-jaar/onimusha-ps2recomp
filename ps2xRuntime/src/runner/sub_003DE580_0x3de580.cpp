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

// Function: sub_003DE580
// Address: 0x3de580 - 0x3de5f0
void sub_003DE580_0x3de580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE580_0x3de580");
#endif

    switch (ctx->pc) {
        case 0x3de5b4u: goto label_3de5b4;
        case 0x3de5bcu: goto label_3de5bc;
        default: break;
    }

    ctx->pc = 0x3de580u;

    // 0x3de580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3de580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3de584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3de584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3de588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3de588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3de58c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3de58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de590: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3DE590u;
    {
        const bool branch_taken_0x3de590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE590u;
        // 0x3de594: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de590) {
            ctx->pc = 0x3DE5E0u;
            goto label_3de5e0;
        }
    }
    ctx->pc = 0x3DE598u;
    // 0x3de598: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3de598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3de59c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3de59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3de5a0: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x3de5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x3de5a4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3de5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3de5a8: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x3de5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x3de5ac: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x3DE5ACu;
    SET_GPR_U32(ctx, 31, 0x3DE5B4u);
    ctx->pc = 0x3DE5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE5ACu;
    // 0x3de5b0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x3DE5ACu, 0x3DE5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE5B4u;
label_3de5b4:
    // 0x3de5b4: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3DE5B4u;
    SET_GPR_U32(ctx, 31, 0x3DE5BCu);
    ctx->pc = 0x3DE5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE5B4u;
    // 0x3de5b8: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3DE5B4u, 0x3DE5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE5BCu;
label_3de5bc:
    // 0x3de5bc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3de5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3de5c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3de5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3de5c4: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x3de5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x3de5c8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3de5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3de5cc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3de5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3de5d0: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3de5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3de5d4: 0x2463aed0  addiu       $v1, $v1, -0x5130
    ctx->pc = 0x3de5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946512));
    // 0x3de5d8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3de5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3de5dc: 0x0  nop
    ctx->pc = 0x3de5dcu;
    // NOP
label_3de5e0:
    // 0x3de5e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3de5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3de5e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3de5e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3de5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE5E8u;
        // 0x3de5ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE5F0u;
}
