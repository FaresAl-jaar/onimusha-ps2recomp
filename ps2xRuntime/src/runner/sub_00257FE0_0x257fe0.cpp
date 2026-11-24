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

// Function: sub_00257FE0
// Address: 0x257fe0 - 0x2580b0
void sub_00257FE0_0x257fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257FE0_0x257fe0");
#endif

    switch (ctx->pc) {
        case 0x258040u: goto label_258040;
        case 0x258078u: goto label_258078;
        case 0x258084u: goto label_258084;
        default: break;
    }

    ctx->pc = 0x257fe0u;

    // 0x257fe0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x257fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x257fe4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x257fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x257fe8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x257fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x257fec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257ff0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x257ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x257ff4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x257ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x257ff8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x257ff8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257ffc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x257ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x258000: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x258000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x258004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x258008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25800c: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x25800cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x258010: 0x84b10000  lh          $s1, 0x0($a1)
    ctx->pc = 0x258010u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x258014: 0x90b00006  lbu         $s0, 0x6($a1)
    ctx->pc = 0x258014u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x258018: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x258018u;
    {
        const bool branch_taken_0x258018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258018u;
        // 0x25801c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258018) {
            ctx->pc = 0x258030u;
            goto label_258030;
        }
    }
    ctx->pc = 0x258020u;
    // 0x258020: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x258020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x258024: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x258024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x258028: 0xa2620006  sb          $v0, 0x6($s3)
    ctx->pc = 0x258028u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x25802c: 0x0  nop
    ctx->pc = 0x25802cu;
    // NOP
label_258030:
    // 0x258030: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x258030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258034: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x258034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258038: 0xc09602c  jal         func_2580B0
    ctx->pc = 0x258038u;
    SET_GPR_U32(ctx, 31, 0x258040u);
    ctx->pc = 0x25803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258038u;
    // 0x25803c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2580B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2580B0u, 0x258038u, 0x258040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258040u;
label_258040:
    // 0x258040: 0x3401d63f  ori         $at, $zero, 0xD63F
    ctx->pc = 0x258040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54847);
    // 0x258044: 0x2811821  addu        $v1, $s4, $at
    ctx->pc = 0x258044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x258048: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x258048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25804c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25804Cu;
    {
        const bool branch_taken_0x25804c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25804c) {
            ctx->pc = 0x258068u;
            goto label_258068;
        }
    }
    ctx->pc = 0x258054u;
    // 0x258054: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x258054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258058: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x258058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25805c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25805Cu;
    {
        const bool branch_taken_0x25805c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25805Cu;
        // 0x258060: 0xa283004c  sb          $v1, 0x4C($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 76), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25805c) {
            ctx->pc = 0x258090u;
            goto label_258090;
        }
    }
    ctx->pc = 0x258064u;
    // 0x258064: 0x0  nop
    ctx->pc = 0x258064u;
    // NOP
label_258068:
    // 0x258068: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x258068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25806c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25806cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258070: 0xc0961bc  jal         func_2586F0
    ctx->pc = 0x258070u;
    SET_GPR_U32(ctx, 31, 0x258078u);
    ctx->pc = 0x258074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258070u;
    // 0x258074: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2586F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2586F0u, 0x258070u, 0x258078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258078u;
label_258078:
    // 0x258078: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x258078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25807c: 0xc095454  jal         func_255150
    ctx->pc = 0x25807Cu;
    SET_GPR_U32(ctx, 31, 0x258084u);
    ctx->pc = 0x258080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25807Cu;
    // 0x258080: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255150u, 0x25807Cu, 0x258084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258084u;
label_258084:
    // 0x258084: 0xa2700006  sb          $s0, 0x6($s3)
    ctx->pc = 0x258084u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6), (uint8_t)GPR_U32(ctx, 16));
    // 0x258088: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x258088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25808c: 0x0  nop
    ctx->pc = 0x25808cu;
    // NOP
label_258090:
    // 0x258090: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x258090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x258094: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x258094u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258098: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x258098u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25809c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25809cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2580a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2580a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2580a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2580a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2580a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2580A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2580ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580A8u;
        // 0x2580ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2580A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2580B0u;
}
