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

// Function: sub_0030CAA0
// Address: 0x30caa0 - 0x30cc40
void sub_0030CAA0_0x30caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CAA0_0x30caa0");
#endif

    switch (ctx->pc) {
        case 0x30cad4u: goto label_30cad4;
        case 0x30cae8u: goto label_30cae8;
        case 0x30cb04u: goto label_30cb04;
        case 0x30cb18u: goto label_30cb18;
        case 0x30cb34u: goto label_30cb34;
        case 0x30cb48u: goto label_30cb48;
        case 0x30cb94u: goto label_30cb94;
        case 0x30cba8u: goto label_30cba8;
        case 0x30cbb8u: goto label_30cbb8;
        default: break;
    }

    ctx->pc = 0x30caa0u;

    // 0x30caa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30caa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30caa4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30caa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30caa8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30caa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30caac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30caacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30cab0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30cab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30cab4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30cab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30cab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30cabc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30cabcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cac0: 0x94d30000  lhu         $s3, 0x0($a2)
    ctx->pc = 0x30cac0u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30cac4: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x30CAC4u;
    {
        const bool branch_taken_0x30cac4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAC4u;
        // 0x30cac8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cac4) {
            ctx->pc = 0x30CAF0u;
            goto label_30caf0;
        }
    }
    ctx->pc = 0x30CACCu;
    // 0x30cacc: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x30CACCu;
    SET_GPR_U32(ctx, 31, 0x30CAD4u);
    ctx->pc = 0x30CAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CACCu;
    // 0x30cad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x30CACCu, 0x30CAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CAD4u;
label_30cad4:
    // 0x30cad4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x30cad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30cad8: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x30cad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x30cadc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x30cadcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30cae0: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x30CAE0u;
    SET_GPR_U32(ctx, 31, 0x30CAE8u);
    ctx->pc = 0x30CAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CAE0u;
    // 0x30cae4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x30CAE0u, 0x30CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CAE8u;
label_30cae8:
    // 0x30cae8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x30cae8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x30caec: 0x0  nop
    ctx->pc = 0x30caecu;
    // NOP
label_30caf0:
    // 0x30caf0: 0x96130002  lhu         $s3, 0x2($s0)
    ctx->pc = 0x30caf0u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x30caf4: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x30CAF4u;
    {
        const bool branch_taken_0x30caf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAF4u;
        // 0x30caf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30caf4) {
            ctx->pc = 0x30CB20u;
            goto label_30cb20;
        }
    }
    ctx->pc = 0x30CAFCu;
    // 0x30cafc: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x30CAFCu;
    SET_GPR_U32(ctx, 31, 0x30CB04u);
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x30CAFCu, 0x30CB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CB04u;
label_30cb04:
    // 0x30cb04: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x30cb04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30cb08: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x30cb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x30cb0c: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x30cb0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x30cb10: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x30CB10u;
    SET_GPR_U32(ctx, 31, 0x30CB18u);
    ctx->pc = 0x30CB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CB10u;
    // 0x30cb14: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x30CB10u, 0x30CB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CB18u;
label_30cb18:
    // 0x30cb18: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x30cb18u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x30cb1c: 0x0  nop
    ctx->pc = 0x30cb1cu;
    // NOP
label_30cb20:
    // 0x30cb20: 0x96130004  lhu         $s3, 0x4($s0)
    ctx->pc = 0x30cb20u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30cb24: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x30CB24u;
    {
        const bool branch_taken_0x30cb24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB24u;
        // 0x30cb28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb24) {
            ctx->pc = 0x30CB50u;
            goto label_30cb50;
        }
    }
    ctx->pc = 0x30CB2Cu;
    // 0x30cb2c: 0xc0d2744  jal         func_349D10
    ctx->pc = 0x30CB2Cu;
    SET_GPR_U32(ctx, 31, 0x30CB34u);
    ctx->pc = 0x349D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D10u, 0x30CB2Cu, 0x30CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CB34u;
label_30cb34:
    // 0x30cb34: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x30cb34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30cb38: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x30cb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x30cb3c: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x30cb3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x30cb40: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x30CB40u;
    SET_GPR_U32(ctx, 31, 0x30CB48u);
    ctx->pc = 0x30CB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CB40u;
    // 0x30cb44: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x30CB40u, 0x30CB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CB48u;
label_30cb48:
    // 0x30cb48: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x30cb48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x30cb4c: 0x0  nop
    ctx->pc = 0x30cb4cu;
    // NOP
label_30cb50:
    // 0x30cb50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x30cb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x30cb54: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x30cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x30cb58: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x30cb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x30cb5c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x30CB5Cu;
    {
        const bool branch_taken_0x30cb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30cb5c) {
            ctx->pc = 0x30CC20u;
            goto label_30cc20;
        }
    }
    ctx->pc = 0x30CB64u;
    // 0x30cb64: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x30cb64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30cb68: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x30CB68u;
    {
        const bool branch_taken_0x30cb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB68u;
        // 0x30cb6c: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb68) {
            ctx->pc = 0x30CC20u;
            goto label_30cc20;
        }
    }
    ctx->pc = 0x30CB70u;
    // 0x30cb70: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x30cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x30cb74: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x30cb74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x30cb78: 0x3251ffff  andi        $s1, $s2, 0xFFFF
    ctx->pc = 0x30cb78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x30cb7c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x30cb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x30cb80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30cb80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30cb84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30cb88: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x30cb88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30cb8c: 0xc0d8f4c  jal         func_363D30
    ctx->pc = 0x30CB8Cu;
    SET_GPR_U32(ctx, 31, 0x30CB94u);
    ctx->pc = 0x30CB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CB8Cu;
    // 0x30cb90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D30u, 0x30CB8Cu, 0x30CB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CB94u;
label_30cb94:
    // 0x30cb94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30cb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30cb98: 0x16220021  bne         $s1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x30CB98u;
    {
        const bool branch_taken_0x30cb98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x30CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB98u;
        // 0x30cb9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb98) {
            ctx->pc = 0x30CC20u;
            goto label_30cc20;
        }
    }
    ctx->pc = 0x30CBA0u;
    // 0x30cba0: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x30CBA0u;
    SET_GPR_U32(ctx, 31, 0x30CBA8u);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x30CBA0u, 0x30CBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CBA8u;
label_30cba8:
    // 0x30cba8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x30cba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30cbac: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x30cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x30cbb0: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x30CBB0u;
    SET_GPR_U32(ctx, 31, 0x30CBB8u);
    ctx->pc = 0x30CBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CBB0u;
    // 0x30cbb4: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x30CBB0u, 0x30CBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CBB8u;
label_30cbb8:
    // 0x30cbb8: 0x8e0529c0  lw          $a1, 0x29C0($s0)
    ctx->pc = 0x30cbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x30cbbc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x30cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x30cbc0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x30cbc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30cbc4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x30cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x30cbc8: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x30cbc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x30cbcc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x30cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x30cbd0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x30cbd0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x30cbd4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x30cbd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30cbd8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x30cbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30cbdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30cbdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30cbe0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x30cbe0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x30cbe4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30cbe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30cbe8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30cbe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cbec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30CBECu;
    {
        const bool branch_taken_0x30cbec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30cbec) {
            ctx->pc = 0x30CC04u;
            goto label_30cc04;
        }
    }
    ctx->pc = 0x30CBF4u;
    // 0x30cbf4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cbf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30cbf8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30cbf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30cbfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30CBFCu;
    {
        const bool branch_taken_0x30cbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CBFCu;
        // 0x30cc00: 0xa6030784  sh          $v1, 0x784($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1924), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cbfc) {
            ctx->pc = 0x30CC20u;
            goto label_30cc20;
        }
    }
    ctx->pc = 0x30CC04u;
label_30cc04:
    // 0x30cc04: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30cc04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30cc08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x30cc0c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30cc0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30cc10: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30cc10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30cc14: 0x0  nop
    ctx->pc = 0x30cc14u;
    // NOP
    // 0x30cc18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30cc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30cc1c: 0xa6030784  sh          $v1, 0x784($s0)
    ctx->pc = 0x30cc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1924), (uint16_t)GPR_U32(ctx, 3));
label_30cc20:
    // 0x30cc20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30cc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30cc24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30cc24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30cc28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cc2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30cc2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30cc30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30cc30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30cc34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30cc34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cc38: 0x3e00008  jr          $ra
    ctx->pc = 0x30CC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC38u;
        // 0x30cc3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CC40u;
}
