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

// Function: sub_00363A80
// Address: 0x363a80 - 0x363b5c
void sub_00363A80_0x363a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363A80_0x363a80");
#endif

    switch (ctx->pc) {
        case 0x363a80u: goto label_363a80;
        case 0x363a84u: goto label_363a84;
        case 0x363a88u: goto label_363a88;
        case 0x363a8cu: goto label_363a8c;
        case 0x363a90u: goto label_363a90;
        case 0x363a94u: goto label_363a94;
        case 0x363a98u: goto label_363a98;
        case 0x363a9cu: goto label_363a9c;
        case 0x363aa0u: goto label_363aa0;
        case 0x363aa4u: goto label_363aa4;
        case 0x363aa8u: goto label_363aa8;
        case 0x363aacu: goto label_363aac;
        case 0x363ab0u: goto label_363ab0;
        case 0x363ab4u: goto label_363ab4;
        case 0x363ab8u: goto label_363ab8;
        case 0x363abcu: goto label_363abc;
        case 0x363ac0u: goto label_363ac0;
        case 0x363ac4u: goto label_363ac4;
        case 0x363ac8u: goto label_363ac8;
        case 0x363accu: goto label_363acc;
        case 0x363ad0u: goto label_363ad0;
        case 0x363ad4u: goto label_363ad4;
        case 0x363ad8u: goto label_363ad8;
        case 0x363adcu: goto label_363adc;
        case 0x363ae0u: goto label_363ae0;
        case 0x363ae4u: goto label_363ae4;
        case 0x363ae8u: goto label_363ae8;
        case 0x363aecu: goto label_363aec;
        case 0x363af0u: goto label_363af0;
        case 0x363af4u: goto label_363af4;
        case 0x363af8u: goto label_363af8;
        case 0x363afcu: goto label_363afc;
        case 0x363b00u: goto label_363b00;
        case 0x363b04u: goto label_363b04;
        case 0x363b08u: goto label_363b08;
        case 0x363b0cu: goto label_363b0c;
        case 0x363b10u: goto label_363b10;
        case 0x363b14u: goto label_363b14;
        case 0x363b18u: goto label_363b18;
        case 0x363b1cu: goto label_363b1c;
        case 0x363b20u: goto label_363b20;
        case 0x363b24u: goto label_363b24;
        case 0x363b28u: goto label_363b28;
        case 0x363b2cu: goto label_363b2c;
        case 0x363b30u: goto label_363b30;
        case 0x363b34u: goto label_363b34;
        case 0x363b38u: goto label_363b38;
        case 0x363b3cu: goto label_363b3c;
        case 0x363b40u: goto label_363b40;
        case 0x363b44u: goto label_363b44;
        case 0x363b48u: goto label_363b48;
        case 0x363b4cu: goto label_363b4c;
        case 0x363b50u: goto label_363b50;
        case 0x363b54u: goto label_363b54;
        case 0x363b58u: goto label_363b58;
        default: break;
    }

    ctx->pc = 0x363a80u;

label_363a80:
    // 0x363a80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x363a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_363a84:
    // 0x363a84: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x363a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_363a88:
    // 0x363a88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x363a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_363a8c:
    // 0x363a8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x363a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_363a90:
    // 0x363a90: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x363a90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_363a94:
    // 0x363a94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x363a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_363a98:
    // 0x363a98: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x363a98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_363a9c:
    // 0x363a9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x363a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_363aa0:
    // 0x363aa0: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x363aa0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
label_363aa4:
    // 0x363aa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x363aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_363aa8:
    // 0x363aa8: 0x3092ffff  andi        $s2, $a0, 0xFFFF
    ctx->pc = 0x363aa8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_363aac:
    // 0x363aac: 0x58e3c  dsll32      $s1, $a1, 24
    ctx->pc = 0x363aacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 24));
label_363ab0:
    // 0x363ab0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x363ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_363ab4:
    // 0x363ab4: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x363ab4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
label_363ab8:
    // 0x363ab8: 0xaf808bc8  sw          $zero, -0x7438($gp)
    ctx->pc = 0x363ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937544), GPR_U32(ctx, 0));
label_363abc:
    // 0x363abc: 0x2673a3e0  addiu       $s3, $s3, -0x5C20
    ctx->pc = 0x363abcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294943712));
label_363ac0:
    // 0x363ac0: 0x3230ffff  andi        $s0, $s1, 0xFFFF
    ctx->pc = 0x363ac0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_363ac4:
    // 0x363ac4: 0x0  nop
    ctx->pc = 0x363ac4u;
    // NOP
label_363ac8:
    // 0x363ac8: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x363ac8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_363acc:
    // 0x363acc: 0x16430016  bne         $s2, $v1, . + 4 + (0x16 << 2)
label_363ad0:
    if (ctx->pc == 0x363AD0u) {
        ctx->pc = 0x363AD4u;
        goto label_363ad4;
    }
    ctx->pc = 0x363ACCu;
    {
        const bool branch_taken_0x363acc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x363acc) {
            ctx->pc = 0x363B28u;
            goto label_363b28;
        }
    }
    ctx->pc = 0x363AD4u;
label_363ad4:
    // 0x363ad4: 0x82630002  lb          $v1, 0x2($s3)
    ctx->pc = 0x363ad4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_363ad8:
    // 0x363ad8: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
label_363adc:
    if (ctx->pc == 0x363ADCu) {
        ctx->pc = 0x363AE0u;
        goto label_363ae0;
    }
    ctx->pc = 0x363AD8u;
    {
        const bool branch_taken_0x363ad8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x363ad8) {
            ctx->pc = 0x363AE8u;
            goto label_363ae8;
        }
    }
    ctx->pc = 0x363AE0u;
label_363ae0:
    // 0x363ae0: 0x4610011  bgez        $v1, . + 4 + (0x11 << 2)
label_363ae4:
    if (ctx->pc == 0x363AE4u) {
        ctx->pc = 0x363AE8u;
        goto label_363ae8;
    }
    ctx->pc = 0x363AE0u;
    {
        const bool branch_taken_0x363ae0 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x363ae0) {
            ctx->pc = 0x363B28u;
            goto label_363b28;
        }
    }
    ctx->pc = 0x363AE8u;
label_363ae8:
    // 0x363ae8: 0x8f858bc8  lw          $a1, -0x7438($gp)
    ctx->pc = 0x363ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937544)));
label_363aec:
    // 0x363aec: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x363aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
label_363af0:
    // 0x363af0: 0x2463c290  addiu       $v1, $v1, -0x3D70
    ctx->pc = 0x363af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951568));
label_363af4:
    // 0x363af4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x363af4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_363af8:
    // 0x363af8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x363af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_363afc:
    // 0x363afc: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x363afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_363b00:
    // 0x363b00: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x363b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_363b04:
    // 0x363b04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_363b08:
    if (ctx->pc == 0x363B08u) {
        ctx->pc = 0x363B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363B04u;
        // 0x363b08: 0x30a6ffff  andi        $a2, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x363B0Cu;
        goto label_363b0c;
    }
    ctx->pc = 0x363B04u;
    {
        const bool branch_taken_0x363b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x363B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363B04u;
        // 0x363b08: 0x30a6ffff  andi        $a2, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x363b04) {
            ctx->pc = 0x363B18u;
            goto label_363b18;
        }
    }
    ctx->pc = 0x363B0Cu;
label_363b0c:
    // 0x363b0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x363b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_363b10:
    // 0x363b10: 0x60f809  jalr        $v1
label_363b14:
    if (ctx->pc == 0x363B14u) {
        ctx->pc = 0x363B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363B10u;
        // 0x363b14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363B18u;
        goto label_363b18;
    }
    ctx->pc = 0x363B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x363B18u);
        ctx->pc = 0x363B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363B10u;
        // 0x363b14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363B10u, 0x363B18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x363B18u;
label_363b18:
    // 0x363b18: 0x8f838bc8  lw          $v1, -0x7438($gp)
    ctx->pc = 0x363b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937544)));
label_363b1c:
    // 0x363b1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x363b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_363b20:
    // 0x363b20: 0xaf838bc8  sw          $v1, -0x7438($gp)
    ctx->pc = 0x363b20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937544), GPR_U32(ctx, 3));
label_363b24:
    // 0x363b24: 0x0  nop
    ctx->pc = 0x363b24u;
    // NOP
label_363b28:
    // 0x363b28: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x363b28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_363b2c:
    // 0x363b2c: 0x2e83003e  sltiu       $v1, $s4, 0x3E
    ctx->pc = 0x363b2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)62) ? 1 : 0);
label_363b30:
    // 0x363b30: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_363b34:
    if (ctx->pc == 0x363B34u) {
        ctx->pc = 0x363B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363B30u;
        // 0x363b34: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363B38u;
        goto label_363b38;
    }
    ctx->pc = 0x363B30u;
    {
        const bool branch_taken_0x363b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x363B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363B30u;
        // 0x363b34: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363b30) {
            ctx->pc = 0x363AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363ac8;
        }
    }
    ctx->pc = 0x363B38u;
label_363b38:
    // 0x363b38: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x363b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_363b3c:
    // 0x363b3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x363b3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_363b40:
    // 0x363b40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x363b40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_363b44:
    // 0x363b44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x363b44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_363b48:
    // 0x363b48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x363b48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_363b4c:
    // 0x363b4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x363b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_363b50:
    // 0x363b50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x363b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_363b54:
    // 0x363b54: 0x3e00008  jr          $ra
label_363b58:
    if (ctx->pc == 0x363B58u) {
        ctx->pc = 0x363B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363B54u;
        // 0x363b58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363B5Cu;
        goto label_fallthrough_0x363b54;
    }
    ctx->pc = 0x363B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363B54u;
        // 0x363b58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x363b54:
    ctx->pc = 0x363B5Cu;
}
