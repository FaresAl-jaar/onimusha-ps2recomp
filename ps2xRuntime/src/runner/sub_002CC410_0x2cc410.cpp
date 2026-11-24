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

// Function: sub_002CC410
// Address: 0x2cc410 - 0x2cc5b8
void sub_002CC410_0x2cc410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC410_0x2cc410");
#endif

    switch (ctx->pc) {
        case 0x2cc498u: goto label_2cc498;
        case 0x2cc500u: goto label_2cc500;
        case 0x2cc570u: goto label_2cc570;
        default: break;
    }

    ctx->pc = 0x2cc410u;

    // 0x2cc410: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cc410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cc414: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cc414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc418: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2cc418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2cc41c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cc41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2cc420: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cc420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cc424: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2cc424u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc428: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cc428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cc42c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2cc42cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc430: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cc434: 0x30f200ff  andi        $s2, $a3, 0xFF
    ctx->pc = 0x2cc434u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2cc438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc43c: 0x8784823c  lh          $a0, -0x7DC4($gp)
    ctx->pc = 0x2cc43cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935100)));
    // 0x2cc440: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cc440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc444: 0x9383823e  lbu         $v1, -0x7DC2($gp)
    ctx->pc = 0x2cc444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935102)));
    // 0x2cc448: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x2cc448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2cc44c: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x2cc44cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2cc450: 0x12420011  beq         $s2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CC450u;
    {
        const bool branch_taken_0x2cc450 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC450u;
        // 0x2cc454: 0xa0a30002  sb          $v1, 0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc450) {
            ctx->pc = 0x2CC498u;
            goto label_2cc498;
        }
    }
    ctx->pc = 0x2CC458u;
    // 0x2cc458: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2cc458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2cc45c: 0x14263c  dsll32      $a0, $s4, 24
    ctx->pc = 0x2cc45cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 24));
    // 0x2cc460: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x2cc460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2cc464: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2cc464u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2cc468: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2cc468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2cc46c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2cc46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2cc470: 0x24426c04  addiu       $v0, $v0, 0x6C04
    ctx->pc = 0x2cc470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27652));
    // 0x2cc474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cc474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc478: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2cc478u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc47c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC47Cu;
    {
        const bool branch_taken_0x2cc47c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CC480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC47Cu;
        // 0x2cc480: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc47c) {
            ctx->pc = 0x2CC490u;
            goto label_2cc490;
        }
    }
    ctx->pc = 0x2CC484u;
    // 0x2cc484: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2CC484u;
    {
        const bool branch_taken_0x2cc484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc484) {
            ctx->pc = 0x2CC598u;
            goto label_2cc598;
        }
    }
    ctx->pc = 0x2CC48Cu;
    // 0x2cc48c: 0x0  nop
    ctx->pc = 0x2cc48cu;
    // NOP
label_2cc490:
    // 0x2cc490: 0xc0b3358  jal         func_2CCD60
    ctx->pc = 0x2CC490u;
    SET_GPR_U32(ctx, 31, 0x2CC498u);
    ctx->pc = 0x2CC494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC490u;
    // 0x2cc494: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCD60u, 0x2CC490u, 0x2CC498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC498u;
label_2cc498:
    // 0x2cc498: 0x148e3c  dsll32      $s1, $s4, 24
    ctx->pc = 0x2cc498u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) << (32 + 24));
    // 0x2cc49c: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x2cc49cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x2cc4a0: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC4A0u;
    {
        const bool branch_taken_0x2cc4a0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2CC4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4A0u;
        // 0x2cc4a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc4a0) {
            ctx->pc = 0x2CC4B0u;
            goto label_2cc4b0;
        }
    }
    ctx->pc = 0x2CC4A8u;
    // 0x2cc4a8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2CC4A8u;
    {
        const bool branch_taken_0x2cc4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc4a8) {
            ctx->pc = 0x2CC598u;
            goto label_2cc598;
        }
    }
    ctx->pc = 0x2CC4B0u;
label_2cc4b0:
    // 0x2cc4b0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2cc4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2cc4b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2cc4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cc4b8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2cc4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2cc4bc: 0x244211b0  addiu       $v0, $v0, 0x11B0
    ctx->pc = 0x2cc4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4528));
    // 0x2cc4c0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2cc4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc4c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cc4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cc4c8: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2cc4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2cc4cc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2cc4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2cc4d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cc4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc4d4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2cc4d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc4d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC4D8u;
    {
        const bool branch_taken_0x2cc4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4D8u;
        // 0x2cc4dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc4d8) {
            ctx->pc = 0x2CC4E8u;
            goto label_2cc4e8;
        }
    }
    ctx->pc = 0x2CC4E0u;
    // 0x2cc4e0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2CC4E0u;
    {
        const bool branch_taken_0x2cc4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc4e0) {
            ctx->pc = 0x2CC598u;
            goto label_2cc598;
        }
    }
    ctx->pc = 0x2CC4E8u;
label_2cc4e8:
    // 0x2cc4e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cc4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc4ec: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC4ECu;
    {
        const bool branch_taken_0x2cc4ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CC4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4ECu;
        // 0x2cc4f0: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc4ec) {
            ctx->pc = 0x2CC500u;
            goto label_2cc500;
        }
    }
    ctx->pc = 0x2CC4F4u;
    // 0x2cc4f4: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x2cc4f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2cc4f8: 0xc052db8  jal         func_14B6E0
    ctx->pc = 0x2CC4F8u;
    SET_GPR_U32(ctx, 31, 0x2CC500u);
    ctx->pc = 0x2CC4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC4F8u;
    // 0x2cc4fc: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6E0u, 0x2CC4F8u, 0x2CC500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC500u;
label_2cc500:
    // 0x2cc500: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cc500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cc504: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2CC504u;
    {
        const bool branch_taken_0x2cc504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC504u;
        // 0x2cc508: 0x24460014  addiu       $a2, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc504) {
            ctx->pc = 0x2CC590u;
            goto label_2cc590;
        }
    }
    ctx->pc = 0x2CC50Cu;
    // 0x2cc50c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2cc50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2cc510: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CC510u;
    {
        const bool branch_taken_0x2cc510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc510) {
            ctx->pc = 0x2CC590u;
            goto label_2cc590;
        }
    }
    ctx->pc = 0x2CC518u;
    // 0x2cc518: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cc518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc51c: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CC51Cu;
    {
        const bool branch_taken_0x2cc51c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CC520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC51Cu;
        // 0x2cc520: 0x326400ff  andi        $a0, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc51c) {
            ctx->pc = 0x2CC548u;
            goto label_2cc548;
        }
    }
    ctx->pc = 0x2CC524u;
    // 0x2cc524: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2cc524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2cc528: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2cc528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2cc52c: 0x142e3c  dsll32      $a1, $s4, 24
    ctx->pc = 0x2cc52cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 24));
    // 0x2cc530: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cc530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cc534: 0x24426c04  addiu       $v0, $v0, 0x6C04
    ctx->pc = 0x2cc534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27652));
    // 0x2cc538: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2cc538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2cc53c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x2cc53cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x2cc540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cc540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc544: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x2cc544u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
label_2cc548:
    // 0x2cc548: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2cc548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cc54c: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x2cc54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2cc550: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x2cc550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x2cc554: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2cc554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2cc558: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x2cc558u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2cc55c: 0x9046006c  lbu         $a2, 0x6C($v0)
    ctx->pc = 0x2cc55cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2cc560: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x2cc560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2cc564: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2cc564u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc568: 0xc052d94  jal         func_14B650
    ctx->pc = 0x2CC568u;
    SET_GPR_U32(ctx, 31, 0x2CC570u);
    ctx->pc = 0x2CC56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC568u;
    // 0x2cc56c: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B650u, 0x2CC568u, 0x2CC570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC570u;
label_2cc570:
    // 0x2cc570: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cc570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cc574: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2cc574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2cc578: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2cc578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2cc57c: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x2cc57cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2cc580: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x2cc580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2cc584: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2cc584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2cc588: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC588u;
    {
        const bool branch_taken_0x2cc588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC588u;
        // 0x2cc58c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc588) {
            ctx->pc = 0x2CC598u;
            goto label_2cc598;
        }
    }
    ctx->pc = 0x2CC590u;
label_2cc590:
    // 0x2cc590: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cc590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc594: 0x0  nop
    ctx->pc = 0x2cc594u;
    // NOP
label_2cc598:
    // 0x2cc598: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2cc598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cc59c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cc59cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cc5a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cc5a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc5a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cc5a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc5a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc5ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5B0u;
        // 0x2cc5b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC5B8u;
}
