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

// Function: sub_003EDE30
// Address: 0x3ede30 - 0x3edea8
void sub_003EDE30_0x3ede30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDE30_0x3ede30");
#endif

    switch (ctx->pc) {
        case 0x3ede44u: goto label_3ede44;
        case 0x3ede54u: goto label_3ede54;
        case 0x3ede88u: goto label_3ede88;
        case 0x3ede90u: goto label_3ede90;
        default: break;
    }

    ctx->pc = 0x3ede30u;

    // 0x3ede30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ede30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ede34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ede34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ede38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ede38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ede3c: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3EDE3Cu;
    SET_GPR_U32(ctx, 31, 0x3EDE44u);
    ctx->pc = 0x3EDE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDE3Cu;
    // 0x3ede40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3EDE3Cu, 0x3EDE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDE44u;
label_3ede44:
    // 0x3ede44: 0x86052b2c  lh          $a1, 0x2B2C($s0)
    ctx->pc = 0x3ede44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x3ede48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ede48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ede4c: 0xc0a99c8  jal         func_2A6720
    ctx->pc = 0x3EDE4Cu;
    SET_GPR_U32(ctx, 31, 0x3EDE54u);
    ctx->pc = 0x3EDE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDE4Cu;
    // 0x3ede50: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6720u, 0x3EDE4Cu, 0x3EDE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDE54u;
label_3ede54:
    // 0x3ede54: 0x86032b2c  lh          $v1, 0x2B2C($s0)
    ctx->pc = 0x3ede54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x3ede58: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3ede58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3ede5c: 0x3c021f00  lui         $v0, 0x1F00
    ctx->pc = 0x3ede5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7936 << 16));
    // 0x3ede60: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3ede60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3ede64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ede64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ede68: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x3ede68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x3ede6c: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3ede6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3ede70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ede70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ede74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ede74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ede78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ede78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ede7c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ede7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ede80: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3EDE80u;
    SET_GPR_U32(ctx, 31, 0x3EDE88u);
    ctx->pc = 0x3EDE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDE80u;
    // 0x3ede84: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3EDE80u, 0x3EDE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDE88u;
label_3ede88:
    // 0x3ede88: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x3EDE88u;
    SET_GPR_U32(ctx, 31, 0x3EDE90u);
    ctx->pc = 0x3EDE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDE88u;
    // 0x3ede8c: 0x8e042960  lw          $a0, 0x2960($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3EDE88u, 0x3EDE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDE90u;
label_3ede90:
    // 0x3ede90: 0xa2002be0  sb          $zero, 0x2BE0($s0)
    ctx->pc = 0x3ede90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11232), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ede94: 0xa2002be1  sb          $zero, 0x2BE1($s0)
    ctx->pc = 0x3ede94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ede98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ede98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ede9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ede9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3edea0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDEA0u;
        // 0x3edea4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDEA8u;
}
