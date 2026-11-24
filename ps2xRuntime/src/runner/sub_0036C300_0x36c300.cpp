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

// Function: sub_0036C300
// Address: 0x36c300 - 0x36c464
void sub_0036C300_0x36c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C300_0x36c300");
#endif

    switch (ctx->pc) {
        case 0x36c33cu: goto label_36c33c;
        case 0x36c35cu: goto label_36c35c;
        case 0x36c3a8u: goto label_36c3a8;
        case 0x36c3d4u: goto label_36c3d4;
        case 0x36c3e8u: goto label_36c3e8;
        case 0x36c424u: goto label_36c424;
        case 0x36c43cu: goto label_36c43c;
        default: break;
    }

    ctx->pc = 0x36c300u;

    // 0x36c300: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36c300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36c304: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36c304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36c308: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36c308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36c30c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36c30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36c310: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36c314: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36c314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36c31c: 0x48840  sll         $s1, $a0, 1
    ctx->pc = 0x36c31cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x36c320: 0x8f848c00  lw          $a0, -0x7400($gp)
    ctx->pc = 0x36c320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c324: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x36c324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x36c328: 0x84631eee  lh          $v1, 0x1EEE($v1)
    ctx->pc = 0x36c328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 7918)));
    // 0x36c32c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36C32Cu;
    {
        const bool branch_taken_0x36c32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x36C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C32Cu;
        // 0x36c330: 0x2441021  addu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c32c) {
            ctx->pc = 0x36C350u;
            goto label_36c350;
        }
    }
    ctx->pc = 0x36C334u;
    // 0x36c334: 0xc0db048  jal         func_36C120
    ctx->pc = 0x36C334u;
    SET_GPR_U32(ctx, 31, 0x36C33Cu);
    ctx->pc = 0x36C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C334u;
    // 0x36c338: 0x90441eac  lbu         $a0, 0x1EAC($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C120u, 0x36C334u, 0x36C33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C33Cu;
label_36c33c:
    // 0x36c33c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36c33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36c340: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c344: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x36c344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x36c348: 0xa4431eee  sh          $v1, 0x1EEE($v0)
    ctx->pc = 0x36c348u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 7918), (uint16_t)GPR_U32(ctx, 3));
    // 0x36c34c: 0x0  nop
    ctx->pc = 0x36c34cu;
    // NOP
label_36c350:
    // 0x36c350: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x36c350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36c354: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36C354u;
    {
        const bool branch_taken_0x36c354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C354u;
        // 0x36c358: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c354) {
            ctx->pc = 0x36C378u;
            goto label_36c378;
        }
    }
    ctx->pc = 0x36C35Cu;
label_36c35c:
    // 0x36c35c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x36c35cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c360: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x36c360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x36c364: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36c364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36c368: 0x0  nop
    ctx->pc = 0x36c368u;
    // NOP
    // 0x36c36c: 0x0  nop
    ctx->pc = 0x36c36cu;
    // NOP
    // 0x36c370: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36C370u;
    {
        const bool branch_taken_0x36c370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c370) {
            ctx->pc = 0x36C35Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c35c;
        }
    }
    ctx->pc = 0x36C378u;
label_36c378:
    // 0x36c378: 0x8f848c00  lw          $a0, -0x7400($gp)
    ctx->pc = 0x36c378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c37c: 0x128100  sll         $s0, $s2, 4
    ctx->pc = 0x36c37cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x36c380: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x36c380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36c384: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x36c384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36c388: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x36c388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x36c38c: 0xc4801f78  lwc1        $f0, 0x1F78($a0)
    ctx->pc = 0x36c38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c390: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x36c390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x36c394: 0xc4801f7c  lwc1        $f0, 0x1F7C($a0)
    ctx->pc = 0x36c394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c398: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x36c398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x36c39c: 0xc4801f80  lwc1        $f0, 0x1F80($a0)
    ctx->pc = 0x36c39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c3a0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36C3A0u;
    {
        const bool branch_taken_0x36c3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C3A0u;
        // 0x36c3a4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c3a0) {
            ctx->pc = 0x36C3C4u;
            goto label_36c3c4;
        }
    }
    ctx->pc = 0x36C3A8u;
label_36c3a8:
    // 0x36c3a8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x36c3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c3ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x36c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x36c3b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36c3b4: 0x0  nop
    ctx->pc = 0x36c3b4u;
    // NOP
    // 0x36c3b8: 0x0  nop
    ctx->pc = 0x36c3b8u;
    // NOP
    // 0x36c3bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36C3BCu;
    {
        const bool branch_taken_0x36c3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c3bc) {
            ctx->pc = 0x36C3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c3a8;
        }
    }
    ctx->pc = 0x36C3C4u;
label_36c3c4:
    // 0x36c3c4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c3c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x36c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x36c3cc: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x36C3CCu;
    SET_GPR_U32(ctx, 31, 0x36C3D4u);
    ctx->pc = 0x36C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C3CCu;
    // 0x36c3d0: 0xc44c1f84  lwc1        $f12, 0x1F84($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x36C3CCu, 0x36C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C3D4u;
label_36c3d4:
    // 0x36c3d4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c3d8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x36c3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x36c3dc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x36c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x36c3e0: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x36C3E0u;
    SET_GPR_U32(ctx, 31, 0x36C3E8u);
    ctx->pc = 0x36C3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C3E0u;
    // 0x36c3e4: 0xc44c1f84  lwc1        $f12, 0x1F84($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x36C3E0u, 0x36C3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C3E8u;
label_36c3e8:
    // 0x36c3e8: 0x8f858c00  lw          $a1, -0x7400($gp)
    ctx->pc = 0x36c3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c3ec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x36c3ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x36c3f0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x36c3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x36c3f4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x36c3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36c3f8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x36c3f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36c3fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x36c3fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c400: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x36c400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x36c404: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x36c404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36c408: 0x84431eee  lh          $v1, 0x1EEE($v0)
    ctx->pc = 0x36c408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 7918)));
    // 0x36c40c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x36c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36c410: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x36c410u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36c414: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x36c414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x36c418: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x36c418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x36c41c: 0xc0d6bf0  jal         func_35AFC0
    ctx->pc = 0x36C41Cu;
    SET_GPR_U32(ctx, 31, 0x36C424u);
    ctx->pc = 0x36C420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C41Cu;
    // 0x36c420: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AFC0u, 0x36C41Cu, 0x36C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C424u;
label_36c424:
    // 0x36c424: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36c424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c428: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x36c428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x36c42c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x36c42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36c430: 0x90451eac  lbu         $a1, 0x1EAC($v0)
    ctx->pc = 0x36c430u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7852)));
    // 0x36c434: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C434u;
    SET_GPR_U32(ctx, 31, 0x36C43Cu);
    ctx->pc = 0x36C438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C434u;
    // 0x36c438: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C434u, 0x36C43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C43Cu;
label_36c43c:
    // 0x36c43c: 0x8f848c00  lw          $a0, -0x7400($gp)
    ctx->pc = 0x36c43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c440: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x36c440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x36c444: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36c444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36c448: 0xac601d20  sw          $zero, 0x1D20($v1)
    ctx->pc = 0x36c448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7456), GPR_U32(ctx, 0));
    // 0x36c44c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36c44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36c450: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36c450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36c458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c45c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C45Cu;
        // 0x36c460: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C464u;
}
