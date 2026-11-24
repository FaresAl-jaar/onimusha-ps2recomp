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

// Function: sub_0025E6D0
// Address: 0x25e6d0 - 0x25e850
void sub_0025E6D0_0x25e6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E6D0_0x25e6d0");
#endif

    switch (ctx->pc) {
        case 0x25e6f8u: goto label_25e6f8;
        case 0x25e70cu: goto label_25e70c;
        case 0x25e724u: goto label_25e724;
        case 0x25e838u: goto label_25e838;
        default: break;
    }

    ctx->pc = 0x25e6d0u;

    // 0x25e6d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25e6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25e6d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25e6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25e6d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25e6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25e6dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25e6e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25e6e4: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x25e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x25e6e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25e6e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e6ec: 0x84420018  lh          $v0, 0x18($v0)
    ctx->pc = 0x25e6ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x25e6f0: 0xc095018  jal         func_254060
    ctx->pc = 0x25E6F0u;
    SET_GPR_U32(ctx, 31, 0x25E6F8u);
    ctx->pc = 0x25E6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E6F0u;
    // 0x25e6f4: 0x2451013e  addiu       $s1, $v0, 0x13E (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 318));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x25E6F0u, 0x25E6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E6F8u;
label_25e6f8:
    // 0x25e6f8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x25e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25e6fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e700: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x25e700u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25e704: 0xc095028  jal         func_2540A0
    ctx->pc = 0x25E704u;
    SET_GPR_U32(ctx, 31, 0x25E70Cu);
    ctx->pc = 0x25E708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E704u;
    // 0x25e708: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2540A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2540A0u, 0x25E704u, 0x25E70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E70Cu;
label_25e70c:
    // 0x25e70c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x25e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x25e710: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x25e710u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25e714: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x25e714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x25e718: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x25e718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x25e71c: 0xc05e360  jal         func_178D80
    ctx->pc = 0x25E71Cu;
    SET_GPR_U32(ctx, 31, 0x25E724u);
    ctx->pc = 0x25E720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E71Cu;
    // 0x25e720: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x25E71Cu, 0x25E724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E724u;
label_25e724:
    // 0x25e724: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25e724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e728: 0x10a00043  beqz        $a1, . + 4 + (0x43 << 2)
    ctx->pc = 0x25E728u;
    {
        const bool branch_taken_0x25e728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E728u;
        // 0x25e72c: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e728) {
            ctx->pc = 0x25E838u;
            goto label_25e838;
        }
    }
    ctx->pc = 0x25E730u;
    // 0x25e730: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x25e730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x25e734: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x25e734u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x25e738: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25e738u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25e73c: 0x3c037030  lui         $v1, 0x7030
    ctx->pc = 0x25e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28720 << 16));
    // 0x25e740: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x25e740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x25e744: 0x3463004c  ori         $v1, $v1, 0x4C
    ctx->pc = 0x25e744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)76);
    // 0x25e748: 0x224c0  sll         $a0, $v0, 19
    ctx->pc = 0x25e748u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x25e74c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x25e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x25e750: 0x12343c  dsll32      $a2, $s2, 16
    ctx->pc = 0x25e750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 16));
    // 0x25e754: 0x8cab0004  lw          $t3, 0x4($a1)
    ctx->pc = 0x25e754u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x25e758: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x25e758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x25e75c: 0x344a2000  ori         $t2, $v0, 0x2000
    ctx->pc = 0x25e75cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x25e760: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x25e760u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x25e764: 0x24c20f10  addiu       $v0, $a2, 0xF10
    ctx->pc = 0x25e764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3856));
    // 0x25e768: 0x21cc0  sll         $v1, $v0, 19
    ctx->pc = 0x25e768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x25e76c: 0x24c20f20  addiu       $v0, $a2, 0xF20
    ctx->pc = 0x25e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3872));
    // 0x25e770: 0x34697000  ori         $t1, $v1, 0x7000
    ctx->pc = 0x25e770u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x25e774: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x25e774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x25e778: 0x34689000  ori         $t0, $v1, 0x9000
    ctx->pc = 0x25e778u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x25e77c: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x25e77cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x25e780: 0x34477000  ori         $a3, $v0, 0x7000
    ctx->pc = 0x25e780u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x25e784: 0xacaa0004  sw          $t2, 0x4($a1)
    ctx->pc = 0x25e784u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 10));
    // 0x25e788: 0x34469000  ori         $a2, $v0, 0x9000
    ctx->pc = 0x25e788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x25e78c: 0xa0a0000f  sb          $zero, 0xF($a1)
    ctx->pc = 0x25e78cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x25e790: 0x34837000  ori         $v1, $a0, 0x7000
    ctx->pc = 0x25e790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28672);
    // 0x25e794: 0xaca90010  sw          $t1, 0x10($a1)
    ctx->pc = 0x25e794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 9));
    // 0x25e798: 0x34829000  ori         $v0, $a0, 0x9000
    ctx->pc = 0x25e798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36864);
    // 0x25e79c: 0x8e090040  lw          $t1, 0x40($s0)
    ctx->pc = 0x25e79cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25e7a0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x25e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x25e7a4: 0xaca90014  sw          $t1, 0x14($a1)
    ctx->pc = 0x25e7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 9));
    // 0x25e7a8: 0xaca80020  sw          $t0, 0x20($a1)
    ctx->pc = 0x25e7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 8));
    // 0x25e7ac: 0x8e080040  lw          $t0, 0x40($s0)
    ctx->pc = 0x25e7acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25e7b0: 0xaca80024  sw          $t0, 0x24($a1)
    ctx->pc = 0x25e7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 8));
    // 0x25e7b4: 0xaca70030  sw          $a3, 0x30($a1)
    ctx->pc = 0x25e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 7));
    // 0x25e7b8: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x25e7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25e7bc: 0xaca70034  sw          $a3, 0x34($a1)
    ctx->pc = 0x25e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 7));
    // 0x25e7c0: 0xaca60040  sw          $a2, 0x40($a1)
    ctx->pc = 0x25e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 6));
    // 0x25e7c4: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x25e7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25e7c8: 0xaca60044  sw          $a2, 0x44($a1)
    ctx->pc = 0x25e7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 6));
    // 0x25e7cc: 0xaca30050  sw          $v1, 0x50($a1)
    ctx->pc = 0x25e7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
    // 0x25e7d0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x25e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25e7d4: 0xaca30054  sw          $v1, 0x54($a1)
    ctx->pc = 0x25e7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
    // 0x25e7d8: 0xaca20060  sw          $v0, 0x60($a1)
    ctx->pc = 0x25e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 2));
    // 0x25e7dc: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x25e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25e7e0: 0xaca20064  sw          $v0, 0x64($a1)
    ctx->pc = 0x25e7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 2));
    // 0x25e7e4: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x25e7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x25e7e8: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x25e7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x25e7ec: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x25e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x25e7f0: 0x9042009e  lbu         $v0, 0x9E($v0)
    ctx->pc = 0x25e7f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 158)));
    // 0x25e7f4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x25e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x25e7f8: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x25e7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
    // 0x25e7fc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x25e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x25e800: 0x9042009e  lbu         $v0, 0x9E($v0)
    ctx->pc = 0x25e800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 158)));
    // 0x25e804: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x25e804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x25e808: 0xaca20048  sw          $v0, 0x48($a1)
    ctx->pc = 0x25e808u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
    // 0x25e80c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x25e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x25e810: 0x9042009e  lbu         $v0, 0x9E($v0)
    ctx->pc = 0x25e810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 158)));
    // 0x25e814: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x25e814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x25e818: 0xaca20058  sw          $v0, 0x58($a1)
    ctx->pc = 0x25e818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 2));
    // 0x25e81c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x25e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x25e820: 0x9042009e  lbu         $v0, 0x9E($v0)
    ctx->pc = 0x25e820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 158)));
    // 0x25e824: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x25e824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x25e828: 0xaca20068  sw          $v0, 0x68($a1)
    ctx->pc = 0x25e828u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 2));
    // 0x25e82c: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x25e82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x25e830: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x25E830u;
    SET_GPR_U32(ctx, 31, 0x25E838u);
    ctx->pc = 0x25E834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E830u;
    // 0x25e834: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x25E830u, 0x25E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E838u;
label_25e838:
    // 0x25e838: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25e838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e83c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25e83cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e840: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e844: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e848: 0x3e00008  jr          $ra
    ctx->pc = 0x25E848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E848u;
        // 0x25e84c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E850u;
}
