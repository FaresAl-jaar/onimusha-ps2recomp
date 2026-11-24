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

// Function: sub_00302740
// Address: 0x302740 - 0x3028b4
void sub_00302740_0x302740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302740_0x302740");
#endif

    switch (ctx->pc) {
        case 0x302788u: goto label_302788;
        case 0x3027b0u: goto label_3027b0;
        case 0x3027c0u: goto label_3027c0;
        case 0x3027d0u: goto label_3027d0;
        case 0x302800u: goto label_302800;
        case 0x302828u: goto label_302828;
        case 0x302850u: goto label_302850;
        case 0x302880u: goto label_302880;
        case 0x302898u: goto label_302898;
        default: break;
    }

    ctx->pc = 0x302740u;

    // 0x302740: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x302740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x302744: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x302744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x302748: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x302748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30274c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30274cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x302750: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x302750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302754: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x302754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x302758: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x302758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30275c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30275cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x302760: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x302760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302764: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x302764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x302768: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x302768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30276c: 0x908305d4  lbu         $v1, 0x5D4($a0)
    ctx->pc = 0x30276cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1492)));
    // 0x302770: 0x26660590  addiu       $a2, $s3, 0x590
    ctx->pc = 0x302770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1424));
    // 0x302774: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x302774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x302778: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x302778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x30277c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30277cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302780: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x302780u;
    SET_GPR_U32(ctx, 31, 0x302788u);
    ctx->pc = 0x302784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302780u;
    // 0x302784: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x302780u, 0x302788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302788u;
label_302788:
    // 0x302788: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x302788u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30278c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30278cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302790: 0x7e620020  sq          $v0, 0x20($s3)
    ctx->pc = 0x302790u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
    // 0x302794: 0x864300c2  lh          $v1, 0xC2($s2)
    ctx->pc = 0x302794u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x302798: 0x866205d0  lh          $v0, 0x5D0($s3)
    ctx->pc = 0x302798u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1488)));
    // 0x30279c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30279cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3027a0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3027a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3027a4: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3027a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3027a8: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3027A8u;
    SET_GPR_U32(ctx, 31, 0x3027B0u);
    ctx->pc = 0x3027ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3027A8u;
    // 0x3027ac: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3027A8u, 0x3027B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3027B0u;
label_3027b0:
    // 0x3027b0: 0xc66c05cc  lwc1        $f12, 0x5CC($s3)
    ctx->pc = 0x3027b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3027b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3027b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3027b8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3027B8u;
    SET_GPR_U32(ctx, 31, 0x3027C0u);
    ctx->pc = 0x3027BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3027B8u;
    // 0x3027bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3027B8u, 0x3027C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3027C0u;
label_3027c0:
    // 0x3027c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3027c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3027c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3027c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3027c8: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3027C8u;
    SET_GPR_U32(ctx, 31, 0x3027D0u);
    ctx->pc = 0x3027CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3027C8u;
    // 0x3027cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3027C8u, 0x3027D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3027D0u;
label_3027d0:
    // 0x3027d0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3027d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3027d4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3027d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3027d8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x3027d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x3027dc: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x3027dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x3027e0: 0x926205d6  lbu         $v0, 0x5D6($s3)
    ctx->pc = 0x3027e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1494)));
    // 0x3027e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3027E4u;
    {
        const bool branch_taken_0x3027e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3027E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027E4u;
        // 0x3027e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3027e4) {
            ctx->pc = 0x302818u;
            goto label_302818;
        }
    }
    ctx->pc = 0x3027ECu;
    // 0x3027ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3027ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3027f0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3027f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3027f4: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x3027f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3027f8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x3027F8u;
    SET_GPR_U32(ctx, 31, 0x302800u);
    ctx->pc = 0x3027FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3027F8u;
    // 0x3027fc: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x3027F8u, 0x302800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302800u;
label_302800:
    // 0x302800: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x302800u;
    {
        const bool branch_taken_0x302800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302800) {
            ctx->pc = 0x302818u;
            goto label_302818;
        }
    }
    ctx->pc = 0x302808u;
    // 0x302808: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x302808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30280c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x30280cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x302810: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x302810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302814: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x302814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_302818:
    // 0x302818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30281c: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x30281cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x302820: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x302820u;
    SET_GPR_U32(ctx, 31, 0x302828u);
    ctx->pc = 0x302824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302820u;
    // 0x302824: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x302820u, 0x302828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302828u;
label_302828:
    // 0x302828: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x302828u;
    {
        const bool branch_taken_0x302828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302828) {
            ctx->pc = 0x302840u;
            goto label_302840;
        }
    }
    ctx->pc = 0x302830u;
    // 0x302830: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x302830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302834: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x302834u;
    {
        const bool branch_taken_0x302834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302834u;
        // 0x302838: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302834) {
            ctx->pc = 0x302870u;
            goto label_302870;
        }
    }
    ctx->pc = 0x30283Cu;
    // 0x30283c: 0x0  nop
    ctx->pc = 0x30283cu;
    // NOP
label_302840:
    // 0x302840: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x302840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x302844: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x302844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x302848: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x302848u;
    SET_GPR_U32(ctx, 31, 0x302850u);
    ctx->pc = 0x30284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302848u;
    // 0x30284c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x302848u, 0x302850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302850u;
label_302850:
    // 0x302850: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x302850u;
    {
        const bool branch_taken_0x302850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302850) {
            ctx->pc = 0x302868u;
            goto label_302868;
        }
    }
    ctx->pc = 0x302858u;
    // 0x302858: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x302858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30285c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30285Cu;
    {
        const bool branch_taken_0x30285c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30285Cu;
        // 0x302860: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30285c) {
            ctx->pc = 0x302870u;
            goto label_302870;
        }
    }
    ctx->pc = 0x302864u;
    // 0x302864: 0x0  nop
    ctx->pc = 0x302864u;
    // NOP
label_302868:
    // 0x302868: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x302868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30286c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x30286cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_302870:
    // 0x302870: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302874: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x302874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x302878: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x302878u;
    SET_GPR_U32(ctx, 31, 0x302880u);
    ctx->pc = 0x30287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302878u;
    // 0x30287c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x302878u, 0x302880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302880u;
label_302880:
    // 0x302880: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x302880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x302884: 0x26640550  addiu       $a0, $s3, 0x550
    ctx->pc = 0x302884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1360));
    // 0x302888: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x302888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30288c: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x30288cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x302890: 0xc097384  jal         func_25CE10
    ctx->pc = 0x302890u;
    SET_GPR_U32(ctx, 31, 0x302898u);
    ctx->pc = 0x302894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302890u;
    // 0x302894: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x302890u, 0x302898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302898u;
label_302898:
    // 0x302898: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x302898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30289c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30289cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3028a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3028a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3028a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3028a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3028a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3028a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3028ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3028ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3028B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028ACu;
        // 0x3028b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3028ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3028B4u;
}
