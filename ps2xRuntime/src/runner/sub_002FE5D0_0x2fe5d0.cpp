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

// Function: sub_002FE5D0
// Address: 0x2fe5d0 - 0x2fe674
void sub_002FE5D0_0x2fe5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE5D0_0x2fe5d0");
#endif

    switch (ctx->pc) {
        case 0x2fe644u: goto label_2fe644;
        case 0x2fe654u: goto label_2fe654;
        case 0x2fe664u: goto label_2fe664;
        default: break;
    }

    ctx->pc = 0x2fe5d0u;

    // 0x2fe5d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2fe5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2fe5d4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2fe5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2fe5d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fe5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fe5dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe5e0: 0xac8000fc  sw          $zero, 0xFC($a0)
    ctx->pc = 0x2fe5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 0));
    // 0x2fe5e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fe5e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5e8: 0x78225c20  lq          $v0, 0x5C20($at)
    ctx->pc = 0x2fe5e8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C20u));
    // 0x2fe5ec: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x2fe5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
    // 0x2fe5f0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2fe5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2fe5f4: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x2fe5f4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x2fe5f8: 0x7c8200b0  sq          $v0, 0xB0($a0)
    ctx->pc = 0x2fe5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 2));
    // 0x2fe5fc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2fe5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2fe600: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x2fe600u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x2fe604: 0x7c8200c0  sq          $v0, 0xC0($a0)
    ctx->pc = 0x2fe604u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), GPR_VEC(ctx, 2));
    // 0x2fe608: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2fe608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2fe60c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x2fe60cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x2fe610: 0x7c8200d0  sq          $v0, 0xD0($a0)
    ctx->pc = 0x2fe610u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), GPR_VEC(ctx, 2));
    // 0x2fe614: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2fe614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2fe618: 0x78225c80  lq          $v0, 0x5C80($at)
    ctx->pc = 0x2fe618u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C80u));
    // 0x2fe61c: 0x7c8200e0  sq          $v0, 0xE0($a0)
    ctx->pc = 0x2fe61cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), GPR_VEC(ctx, 2));
    // 0x2fe620: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x2fe620u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fe624: 0xac8200f0  sw          $v0, 0xF0($a0)
    ctx->pc = 0x2fe624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 2));
    // 0x2fe628: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x2fe628u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2fe62c: 0xac8200f4  sw          $v0, 0xF4($a0)
    ctx->pc = 0x2fe62cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
    // 0x2fe630: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x2fe630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2fe634: 0xac8200f8  sw          $v0, 0xF8($a0)
    ctx->pc = 0x2fe634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 2));
    // 0x2fe638: 0x260500f0  addiu       $a1, $s0, 0xF0
    ctx->pc = 0x2fe638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x2fe63c: 0xc076570  jal         func_1D95C0
    ctx->pc = 0x2FE63Cu;
    SET_GPR_U32(ctx, 31, 0x2FE644u);
    ctx->pc = 0x2FE640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE63Cu;
    // 0x2fe640: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95C0u, 0x2FE63Cu, 0x2FE644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE644u;
label_2fe644:
    // 0x2fe644: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x2fe644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2fe648: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2fe648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fe64c: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x2FE64Cu;
    SET_GPR_U32(ctx, 31, 0x2FE654u);
    ctx->pc = 0x2FE650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE64Cu;
    // 0x2fe650: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x2FE64Cu, 0x2FE654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE654u;
label_2fe654:
    // 0x2fe654: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x2fe654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x2fe658: 0x260500a0  addiu       $a1, $s0, 0xA0
    ctx->pc = 0x2fe658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2fe65c: 0xc0767a8  jal         func_1D9EA0
    ctx->pc = 0x2FE65Cu;
    SET_GPR_U32(ctx, 31, 0x2FE664u);
    ctx->pc = 0x2FE660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE65Cu;
    // 0x2fe660: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x2FE65Cu, 0x2FE664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE664u;
label_2fe664:
    // 0x2fe664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fe664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe66c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE66Cu;
        // 0x2fe670: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE674u;
}
