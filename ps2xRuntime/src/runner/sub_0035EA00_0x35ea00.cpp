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

// Function: sub_0035EA00
// Address: 0x35ea00 - 0x35eb28
void sub_0035EA00_0x35ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EA00_0x35ea00");
#endif

    switch (ctx->pc) {
        case 0x35ea00u: goto label_35ea00;
        case 0x35ea04u: goto label_35ea04;
        case 0x35ea08u: goto label_35ea08;
        case 0x35ea0cu: goto label_35ea0c;
        case 0x35ea10u: goto label_35ea10;
        case 0x35ea14u: goto label_35ea14;
        case 0x35ea18u: goto label_35ea18;
        case 0x35ea1cu: goto label_35ea1c;
        case 0x35ea20u: goto label_35ea20;
        case 0x35ea24u: goto label_35ea24;
        case 0x35ea28u: goto label_35ea28;
        case 0x35ea2cu: goto label_35ea2c;
        case 0x35ea30u: goto label_35ea30;
        case 0x35ea34u: goto label_35ea34;
        case 0x35ea38u: goto label_35ea38;
        case 0x35ea3cu: goto label_35ea3c;
        case 0x35ea40u: goto label_35ea40;
        case 0x35ea44u: goto label_35ea44;
        case 0x35ea48u: goto label_35ea48;
        case 0x35ea4cu: goto label_35ea4c;
        case 0x35ea50u: goto label_35ea50;
        case 0x35ea54u: goto label_35ea54;
        case 0x35ea58u: goto label_35ea58;
        case 0x35ea5cu: goto label_35ea5c;
        case 0x35ea60u: goto label_35ea60;
        case 0x35ea64u: goto label_35ea64;
        case 0x35ea68u: goto label_35ea68;
        case 0x35ea6cu: goto label_35ea6c;
        case 0x35ea70u: goto label_35ea70;
        case 0x35ea74u: goto label_35ea74;
        case 0x35ea78u: goto label_35ea78;
        case 0x35ea7cu: goto label_35ea7c;
        case 0x35ea80u: goto label_35ea80;
        case 0x35ea84u: goto label_35ea84;
        case 0x35ea88u: goto label_35ea88;
        case 0x35ea8cu: goto label_35ea8c;
        case 0x35ea90u: goto label_35ea90;
        case 0x35ea94u: goto label_35ea94;
        case 0x35ea98u: goto label_35ea98;
        case 0x35ea9cu: goto label_35ea9c;
        case 0x35eaa0u: goto label_35eaa0;
        case 0x35eaa4u: goto label_35eaa4;
        case 0x35eaa8u: goto label_35eaa8;
        case 0x35eaacu: goto label_35eaac;
        case 0x35eab0u: goto label_35eab0;
        case 0x35eab4u: goto label_35eab4;
        case 0x35eab8u: goto label_35eab8;
        case 0x35eabcu: goto label_35eabc;
        case 0x35eac0u: goto label_35eac0;
        case 0x35eac4u: goto label_35eac4;
        case 0x35eac8u: goto label_35eac8;
        case 0x35eaccu: goto label_35eacc;
        case 0x35ead0u: goto label_35ead0;
        case 0x35ead4u: goto label_35ead4;
        case 0x35ead8u: goto label_35ead8;
        case 0x35eadcu: goto label_35eadc;
        case 0x35eae0u: goto label_35eae0;
        case 0x35eae4u: goto label_35eae4;
        case 0x35eae8u: goto label_35eae8;
        case 0x35eaecu: goto label_35eaec;
        case 0x35eaf0u: goto label_35eaf0;
        case 0x35eaf4u: goto label_35eaf4;
        case 0x35eaf8u: goto label_35eaf8;
        case 0x35eafcu: goto label_35eafc;
        case 0x35eb00u: goto label_35eb00;
        case 0x35eb04u: goto label_35eb04;
        case 0x35eb08u: goto label_35eb08;
        case 0x35eb0cu: goto label_35eb0c;
        case 0x35eb10u: goto label_35eb10;
        case 0x35eb14u: goto label_35eb14;
        case 0x35eb18u: goto label_35eb18;
        case 0x35eb1cu: goto label_35eb1c;
        case 0x35eb20u: goto label_35eb20;
        case 0x35eb24u: goto label_35eb24;
        default: break;
    }

    ctx->pc = 0x35ea00u;

label_35ea00:
    // 0x35ea00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x35ea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_35ea04:
    // 0x35ea04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35ea08:
    // 0x35ea08: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x35ea08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_35ea0c:
    // 0x35ea0c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35ea0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35ea10:
    // 0x35ea10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x35ea10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_35ea14:
    // 0x35ea14: 0x240800fe  addiu       $t0, $zero, 0xFE
    ctx->pc = 0x35ea14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_35ea18:
    // 0x35ea18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35ea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_35ea1c:
    // 0x35ea1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35ea1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_35ea20:
    // 0x35ea20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35ea20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_35ea24:
    // 0x35ea24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35ea24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35ea28:
    // 0x35ea28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35ea28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35ea2c:
    // 0x35ea2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ea2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35ea30:
    // 0x35ea30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35ea30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35ea34:
    // 0x35ea34: 0xa0802af4  sb          $zero, 0x2AF4($a0)
    ctx->pc = 0x35ea34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10996), (uint8_t)GPR_U32(ctx, 0));
label_35ea38:
    // 0x35ea38: 0xa0802af5  sb          $zero, 0x2AF5($a0)
    ctx->pc = 0x35ea38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10997), (uint8_t)GPR_U32(ctx, 0));
label_35ea3c:
    // 0x35ea3c: 0xa0800280  sb          $zero, 0x280($a0)
    ctx->pc = 0x35ea3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 640), (uint8_t)GPR_U32(ctx, 0));
label_35ea40:
    // 0x35ea40: 0xa0820281  sb          $v0, 0x281($a0)
    ctx->pc = 0x35ea40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 641), (uint8_t)GPR_U32(ctx, 2));
label_35ea44:
    // 0x35ea44: 0x8c82085c  lw          $v0, 0x85C($a0)
    ctx->pc = 0x35ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2140)));
label_35ea48:
    // 0x35ea48: 0x90500002  lbu         $s0, 0x2($v0)
    ctx->pc = 0x35ea48u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_35ea4c:
    // 0x35ea4c: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x35ea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
label_35ea50:
    // 0x35ea50: 0x90560003  lbu         $s6, 0x3($v0)
    ctx->pc = 0x35ea50u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_35ea54:
    // 0x35ea54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35ea54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35ea58:
    // 0x35ea58: 0xc050ed4  jal         func_143B50
label_35ea5c:
    if (ctx->pc == 0x35EA5Cu) {
        ctx->pc = 0x35EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA58u;
        // 0x35ea5c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EA60u;
        goto label_35ea60;
    }
    ctx->pc = 0x35EA58u;
    SET_GPR_U32(ctx, 31, 0x35EA60u);
    ctx->pc = 0x35EA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EA58u;
    // 0x35ea5c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x35EA58u, 0x35EA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA60u;
label_35ea60:
    // 0x35ea60: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_35ea64:
    if (ctx->pc == 0x35EA64u) {
        ctx->pc = 0x35EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA60u;
        // 0x35ea64: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EA68u;
        goto label_35ea68;
    }
    ctx->pc = 0x35EA60u;
    {
        const bool branch_taken_0x35ea60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA60u;
        // 0x35ea64: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ea60) {
            ctx->pc = 0x35EB00u;
            goto label_35eb00;
        }
    }
    ctx->pc = 0x35EA68u;
label_35ea68:
    // 0x35ea68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35ea68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35ea6c:
    // 0x35ea6c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x35ea6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35ea70:
    // 0x35ea70: 0x922608e8  lbu         $a2, 0x8E8($s1)
    ctx->pc = 0x35ea70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_35ea74:
    // 0x35ea74: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x35ea74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
label_35ea78:
    // 0x35ea78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ea78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35ea7c:
    // 0x35ea7c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x35ea7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_35ea80:
    // 0x35ea80: 0x24e7ef50  addiu       $a3, $a3, -0x10B0
    ctx->pc = 0x35ea80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963024));
label_35ea84:
    // 0x35ea84: 0xc0b2fa4  jal         func_2CBE90
label_35ea88:
    if (ctx->pc == 0x35EA88u) {
        ctx->pc = 0x35EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA84u;
        // 0x35ea88: 0x24080520  addiu       $t0, $zero, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EA8Cu;
        goto label_35ea8c;
    }
    ctx->pc = 0x35EA84u;
    SET_GPR_U32(ctx, 31, 0x35EA8Cu);
    ctx->pc = 0x35EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EA84u;
    // 0x35ea88: 0x24080520  addiu       $t0, $zero, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBE90u, 0x35EA84u, 0x35EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA8Cu;
label_35ea8c:
    // 0x35ea8c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x35ea8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35ea90:
    // 0x35ea90: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_35ea94:
    if (ctx->pc == 0x35EA94u) {
        ctx->pc = 0x35EA98u;
        goto label_35ea98;
    }
    ctx->pc = 0x35EA90u;
    {
        const bool branch_taken_0x35ea90 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ea90) {
            ctx->pc = 0x35EAD8u;
            goto label_35ead8;
        }
    }
    ctx->pc = 0x35EA98u;
label_35ea98:
    // 0x35ea98: 0x8e9904d4  lw          $t9, 0x4D4($s4)
    ctx->pc = 0x35ea98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1236)));
label_35ea9c:
    // 0x35ea9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35ea9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35eaa0:
    // 0x35eaa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35eaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35eaa4:
    // 0x35eaa4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x35eaa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_35eaa8:
    // 0x35eaa8: 0x320f809  jalr        $t9
label_35eaac:
    if (ctx->pc == 0x35EAACu) {
        ctx->pc = 0x35EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAA8u;
        // 0x35eaac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EAB0u;
        goto label_35eab0;
    }
    ctx->pc = 0x35EAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35EAB0u);
        ctx->pc = 0x35EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAA8u;
        // 0x35eaac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EAA8u, 0x35EAB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35EAB0u;
label_35eab0:
    // 0x35eab0: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x35eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_35eab4:
    // 0x35eab4: 0x8e84004c  lw          $a0, 0x4C($s4)
    ctx->pc = 0x35eab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_35eab8:
    // 0x35eab8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x35eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_35eabc:
    // 0x35eabc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35eabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_35eac0:
    // 0x35eac0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35eac0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_35eac4:
    // 0x35eac4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35eac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_35eac8:
    // 0x35eac8: 0xc0a85ec  jal         func_2A17B0
label_35eacc:
    if (ctx->pc == 0x35EACCu) {
        ctx->pc = 0x35EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAC8u;
        // 0x35eacc: 0x34450064  ori         $a1, $v0, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EAD0u;
        goto label_35ead0;
    }
    ctx->pc = 0x35EAC8u;
    SET_GPR_U32(ctx, 31, 0x35EAD0u);
    ctx->pc = 0x35EACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EAC8u;
    // 0x35eacc: 0x34450064  ori         $a1, $v0, 0x64 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A17B0u, 0x35EAC8u, 0x35EAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EAD0u;
label_35ead0:
    // 0x35ead0: 0x10000005  b           . + 4 + (0x5 << 2)
label_35ead4:
    if (ctx->pc == 0x35EAD4u) {
        ctx->pc = 0x35EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAD0u;
        // 0x35ead4: 0xae542af8  sw          $s4, 0x2AF8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 11000), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EAD8u;
        goto label_35ead8;
    }
    ctx->pc = 0x35EAD0u;
    {
        const bool branch_taken_0x35ead0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAD0u;
        // 0x35ead4: 0xae542af8  sw          $s4, 0x2AF8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 11000), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ead0) {
            ctx->pc = 0x35EAE8u;
            goto label_35eae8;
        }
    }
    ctx->pc = 0x35EAD8u;
label_35ead8:
    // 0x35ead8: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x35ead8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_35eadc:
    // 0x35eadc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x35eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_35eae0:
    // 0x35eae0: 0x10000007  b           . + 4 + (0x7 << 2)
label_35eae4:
    if (ctx->pc == 0x35EAE4u) {
        ctx->pc = 0x35EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAE0u;
        // 0x35eae4: 0xac602af8  sw          $zero, 0x2AF8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EAE8u;
        goto label_35eae8;
    }
    ctx->pc = 0x35EAE0u;
    {
        const bool branch_taken_0x35eae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAE0u;
        // 0x35eae4: 0xac602af8  sw          $zero, 0x2AF8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eae0) {
            ctx->pc = 0x35EB00u;
            goto label_35eb00;
        }
    }
    ctx->pc = 0x35EAE8u;
label_35eae8:
    // 0x35eae8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x35eae8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_35eaec:
    // 0x35eaec: 0x2aa30004  slti        $v1, $s5, 0x4
    ctx->pc = 0x35eaecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
label_35eaf0:
    // 0x35eaf0: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x35eaf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
label_35eaf4:
    // 0x35eaf4: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
label_35eaf8:
    if (ctx->pc == 0x35EAF8u) {
        ctx->pc = 0x35EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAF4u;
        // 0x35eaf8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EAFCu;
        goto label_35eafc;
    }
    ctx->pc = 0x35EAF4u;
    {
        const bool branch_taken_0x35eaf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAF4u;
        // 0x35eaf8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eaf4) {
            ctx->pc = 0x35EA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ea70;
        }
    }
    ctx->pc = 0x35EAFCu;
label_35eafc:
    // 0x35eafc: 0x0  nop
    ctx->pc = 0x35eafcu;
    // NOP
label_35eb00:
    // 0x35eb00: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x35eb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_35eb04:
    // 0x35eb04: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x35eb04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_35eb08:
    // 0x35eb08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35eb08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35eb0c:
    // 0x35eb0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35eb0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35eb10:
    // 0x35eb10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35eb10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35eb14:
    // 0x35eb14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35eb14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35eb18:
    // 0x35eb18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35eb18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35eb1c:
    // 0x35eb1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35eb1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35eb20:
    // 0x35eb20: 0x3e00008  jr          $ra
label_35eb24:
    if (ctx->pc == 0x35EB24u) {
        ctx->pc = 0x35EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB20u;
        // 0x35eb24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EB28u;
        goto label_fallthrough_0x35eb20;
    }
    ctx->pc = 0x35EB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB20u;
        // 0x35eb24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35eb20:
    ctx->pc = 0x35EB28u;
}
