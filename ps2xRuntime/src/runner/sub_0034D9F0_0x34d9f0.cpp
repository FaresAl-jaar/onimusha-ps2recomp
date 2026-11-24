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

// Function: sub_0034D9F0
// Address: 0x34d9f0 - 0x34da90
void sub_0034D9F0_0x34d9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D9F0_0x34d9f0");
#endif

    switch (ctx->pc) {
        case 0x34da2cu: goto label_34da2c;
        case 0x34da44u: goto label_34da44;
        case 0x34da70u: goto label_34da70;
        default: break;
    }

    ctx->pc = 0x34d9f0u;

    // 0x34d9f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34d9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x34d9f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x34d9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x34d9f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34d9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x34d9fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34d9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34da00: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x34da00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34da04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34da08: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34da08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34da0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34da10: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x34da10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x34da14: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x34da14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da18: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x34da18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da1c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x34da1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da20: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x34da20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x34da24: 0xc0d3860  jal         func_34E180
    ctx->pc = 0x34DA24u;
    SET_GPR_U32(ctx, 31, 0x34DA2Cu);
    ctx->pc = 0x34DA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DA24u;
    // 0x34da28: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E180u, 0x34DA24u, 0x34DA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DA2Cu;
label_34da2c:
    // 0x34da2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34da2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da30: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x34DA30u;
    {
        const bool branch_taken_0x34da30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DA30u;
        // 0x34da34: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34da30) {
            ctx->pc = 0x34DA70u;
            goto label_34da70;
        }
    }
    ctx->pc = 0x34DA38u;
    // 0x34da38: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x34da38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x34da3c: 0xc0d3838  jal         func_34E0E0
    ctx->pc = 0x34DA3Cu;
    SET_GPR_U32(ctx, 31, 0x34DA44u);
    ctx->pc = 0x34DA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DA3Cu;
    // 0x34da40: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E0E0u, 0x34DA3Cu, 0x34DA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DA44u;
label_34da44:
    // 0x34da44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34da44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da48: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x34DA48u;
    {
        const bool branch_taken_0x34da48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34da48) {
            ctx->pc = 0x34DA70u;
            goto label_34da70;
        }
    }
    ctx->pc = 0x34DA50u;
    // 0x34da50: 0x82020017  lb          $v0, 0x17($s0)
    ctx->pc = 0x34da50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x34da54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34da54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da58: 0xacb4000c  sw          $s4, 0xC($a1)
    ctx->pc = 0x34da58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 20));
    // 0x34da5c: 0xacb30018  sw          $s3, 0x18($a1)
    ctx->pc = 0x34da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 19));
    // 0x34da60: 0xa0a20014  sb          $v0, 0x14($a1)
    ctx->pc = 0x34da60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x34da64: 0xa0b2001c  sb          $s2, 0x1C($a1)
    ctx->pc = 0x34da64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28), (uint8_t)GPR_U32(ctx, 18));
    // 0x34da68: 0xc0d4420  jal         func_351080
    ctx->pc = 0x34DA68u;
    SET_GPR_U32(ctx, 31, 0x34DA70u);
    ctx->pc = 0x34DA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DA68u;
    // 0x34da6c: 0xa0b10013  sb          $s1, 0x13($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 19), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351080u, 0x34DA68u, 0x34DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DA70u;
label_34da70:
    // 0x34da70: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x34da70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34da74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34da74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34da78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34da78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34da7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34da7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34da80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34da80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34da84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34da84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34da88: 0x3e00008  jr          $ra
    ctx->pc = 0x34DA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DA88u;
        // 0x34da8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DA90u;
}
