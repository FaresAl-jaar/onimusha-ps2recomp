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

// Function: sub_003DE660
// Address: 0x3de660 - 0x3de838
void sub_003DE660_0x3de660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE660_0x3de660");
#endif

    switch (ctx->pc) {
        case 0x3de72cu: goto label_3de72c;
        case 0x3de754u: goto label_3de754;
        case 0x3de79cu: goto label_3de79c;
        case 0x3de800u: goto label_3de800;
        default: break;
    }

    ctx->pc = 0x3de660u;

    // 0x3de660: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3de660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3de664: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3de664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3de668: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3de668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3de66c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3de66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3de670: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3de670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3de674: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3de674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3de678: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3de678u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de67c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3de67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3de680: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3de680u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de684: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3de684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3de688: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3de688u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de68c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3de68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3de690: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3de690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de694: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3de694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3de698: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3de698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de69c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3de69cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3de6a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DE6A0u;
    {
        const bool branch_taken_0x3de6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DE6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE6A0u;
        // 0x3de6a4: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de6a0) {
            ctx->pc = 0x3DE6B0u;
            goto label_3de6b0;
        }
    }
    ctx->pc = 0x3DE6A8u;
    // 0x3de6a8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x3DE6A8u;
    {
        const bool branch_taken_0x3de6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE6A8u;
        // 0x3de6ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de6a8) {
            ctx->pc = 0x3DE810u;
            goto label_3de810;
        }
    }
    ctx->pc = 0x3DE6B0u;
label_3de6b0:
    // 0x3de6b0: 0x926529d0  lbu         $a1, 0x29D0($s3)
    ctx->pc = 0x3de6b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10704)));
    // 0x3de6b4: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x3de6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x3de6b8: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x3de6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3de6bc: 0x24421760  addiu       $v0, $v0, 0x1760
    ctx->pc = 0x3de6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5984));
    // 0x3de6c0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3de6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3de6c4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3de6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3de6c8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3de6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3de6cc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3de6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3de6d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3de6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3de6d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3de6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3de6d8: 0x9063005f  lbu         $v1, 0x5F($v1)
    ctx->pc = 0x3de6d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 95)));
    // 0x3de6dc: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x3de6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x3de6e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3de6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3de6e4: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x3de6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x3de6e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DE6E8u;
    {
        const bool branch_taken_0x3de6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de6e8) {
            ctx->pc = 0x3DE710u;
            goto label_3de710;
        }
    }
    ctx->pc = 0x3DE6F0u;
    // 0x3de6f0: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x3de6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x3de6f4: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3de6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x3de6f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3de6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3de6fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DE6FCu;
    {
        const bool branch_taken_0x3de6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3de6fc) {
            ctx->pc = 0x3DE710u;
            goto label_3de710;
        }
    }
    ctx->pc = 0x3DE704u;
    // 0x3de704: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x3DE704u;
    {
        const bool branch_taken_0x3de704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE704u;
        // 0x3de708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de704) {
            ctx->pc = 0x3DE810u;
            goto label_3de810;
        }
    }
    ctx->pc = 0x3DE70Cu;
    // 0x3de70c: 0x0  nop
    ctx->pc = 0x3de70cu;
    // NOP
label_3de710:
    // 0x3de710: 0x3c08003e  lui         $t0, 0x3E
    ctx->pc = 0x3de710u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62 << 16));
    // 0x3de714: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3de714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de718: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3de718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de71c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3de71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de720: 0x240705a0  addiu       $a3, $zero, 0x5A0
    ctx->pc = 0x3de720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
    // 0x3de724: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3DE724u;
    SET_GPR_U32(ctx, 31, 0x3DE72Cu);
    ctx->pc = 0x3DE728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE724u;
    // 0x3de728: 0x2508e5f0  addiu       $t0, $t0, -0x1A10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294960624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3DE724u, 0x3DE72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE72Cu;
label_3de72c:
    // 0x3de72c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3de72cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de730: 0x12c00035  beqz        $s6, . + 4 + (0x35 << 2)
    ctx->pc = 0x3DE730u;
    {
        const bool branch_taken_0x3de730 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE730u;
        // 0x3de734: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de730) {
            ctx->pc = 0x3DE808u;
            goto label_3de808;
        }
    }
    ctx->pc = 0x3DE738u;
    // 0x3de738: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3de738u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de73c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3de73cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de740: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3de740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de744: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3de744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3de748: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x3de748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3de74c: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3DE74Cu;
    SET_GPR_U32(ctx, 31, 0x3DE754u);
    ctx->pc = 0x3DE750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE74Cu;
    // 0x3de750: 0x264a0030  addiu       $t2, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3DE74Cu, 0x3DE754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE754u;
label_3de754:
    // 0x3de754: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x3de754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3de758: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3de758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3de75c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3de75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3de760: 0x24844802  addiu       $a0, $a0, 0x4802
    ctx->pc = 0x3de760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18434));
    // 0x3de764: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3de764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3de768: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3de768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3de76c: 0x29880  sll         $s3, $v0, 2
    ctx->pc = 0x3de76cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3de770: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3de770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3de774: 0x933021  addu        $a2, $a0, $s3
    ctx->pc = 0x3de774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x3de778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3de778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3de77c: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x3de77cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3de780: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3de780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de784: 0xa6c60526  sh          $a2, 0x526($s6)
    ctx->pc = 0x3de784u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x3de788: 0xa6c50528  sh          $a1, 0x528($s6)
    ctx->pc = 0x3de788u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x3de78c: 0xa6c3052a  sh          $v1, 0x52A($s6)
    ctx->pc = 0x3de78cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3de790: 0xa2c00521  sb          $zero, 0x521($s6)
    ctx->pc = 0x3de790u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3de794: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3DE794u;
    SET_GPR_U32(ctx, 31, 0x3DE79Cu);
    ctx->pc = 0x3DE798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE794u;
    // 0x3de798: 0xa2c20520  sb          $v0, 0x520($s6) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 22), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3DE794u, 0x3DE79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE79Cu;
label_3de79c:
    // 0x3de79c: 0xaec00590  sw          $zero, 0x590($s6)
    ctx->pc = 0x3de79cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1424), GPR_U32(ctx, 0));
    // 0x3de7a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3de7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3de7a4: 0xaec20594  sw          $v0, 0x594($s6)
    ctx->pc = 0x3de7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1428), GPR_U32(ctx, 2));
    // 0x3de7a8: 0x26c40090  addiu       $a0, $s6, 0x90
    ctx->pc = 0x3de7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x3de7ac: 0xa2d10598  sb          $s1, 0x598($s6)
    ctx->pc = 0x3de7acu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1432), (uint8_t)GPR_U32(ctx, 17));
    // 0x3de7b0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3de7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3de7b4: 0xa2d00599  sb          $s0, 0x599($s6)
    ctx->pc = 0x3de7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1433), (uint8_t)GPR_U32(ctx, 16));
    // 0x3de7b8: 0x24424808  addiu       $v0, $v0, 0x4808
    ctx->pc = 0x3de7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18440));
    // 0x3de7bc: 0xa6c0059a  sh          $zero, 0x59A($s6)
    ctx->pc = 0x3de7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1434), (uint16_t)GPR_U32(ctx, 0));
    // 0x3de7c0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3de7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3de7c4: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x3de7c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3de7c8: 0x7ec30550  sq          $v1, 0x550($s6)
    ctx->pc = 0x3de7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 1360), GPR_VEC(ctx, 3));
    // 0x3de7cc: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x3de7ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3de7d0: 0x7ec30560  sq          $v1, 0x560($s6)
    ctx->pc = 0x3de7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 1376), GPR_VEC(ctx, 3));
    // 0x3de7d4: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x3de7d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3de7d8: 0x7ec30570  sq          $v1, 0x570($s6)
    ctx->pc = 0x3de7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 1392), GPR_VEC(ctx, 3));
    // 0x3de7dc: 0x7a430030  lq          $v1, 0x30($s2)
    ctx->pc = 0x3de7dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3de7e0: 0x7ec30580  sq          $v1, 0x580($s6)
    ctx->pc = 0x3de7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 1408), GPR_VEC(ctx, 3));
    // 0x3de7e4: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x3de7e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3de7e8: 0x7ec30090  sq          $v1, 0x90($s6)
    ctx->pc = 0x3de7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 144), GPR_VEC(ctx, 3));
    // 0x3de7ec: 0x7a430030  lq          $v1, 0x30($s2)
    ctx->pc = 0x3de7ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3de7f0: 0x7ec30020  sq          $v1, 0x20($s6)
    ctx->pc = 0x3de7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), GPR_VEC(ctx, 3));
    // 0x3de7f4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3de7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3de7f8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3DE7F8u;
    SET_GPR_U32(ctx, 31, 0x3DE800u);
    ctx->pc = 0x3DE7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE7F8u;
    // 0x3de7fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3DE7F8u, 0x3DE800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE800u;
label_3de800:
    // 0x3de800: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DE800u;
    {
        const bool branch_taken_0x3de800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE800u;
        // 0x3de804: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de800) {
            ctx->pc = 0x3DE810u;
            goto label_3de810;
        }
    }
    ctx->pc = 0x3DE808u;
label_3de808:
    // 0x3de808: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3de808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de80c: 0x0  nop
    ctx->pc = 0x3de80cu;
    // NOP
label_3de810:
    // 0x3de810: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3de810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3de814: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3de814u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3de818: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3de818u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3de81c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3de81cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3de820: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3de820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3de824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3de824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3de828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3de828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3de82c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3de82cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3de830: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE830u;
        // 0x3de834: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE838u;
}
