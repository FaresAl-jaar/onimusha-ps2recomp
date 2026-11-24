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

// Function: sub_00384770
// Address: 0x384770 - 0x3848ac
void sub_00384770_0x384770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384770_0x384770");
#endif

    switch (ctx->pc) {
        case 0x3847a8u: goto label_3847a8;
        case 0x3847c0u: goto label_3847c0;
        case 0x384810u: goto label_384810;
        case 0x384840u: goto label_384840;
        default: break;
    }

    ctx->pc = 0x384770u;

    // 0x384770: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x384770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x384774: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x384774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x384778: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x384778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x38477c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38477cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x384780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x384780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x384784: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x384784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x384788: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x384788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38478c: 0x10a00040  beqz        $a1, . + 4 + (0x40 << 2)
    ctx->pc = 0x38478Cu;
    {
        const bool branch_taken_0x38478c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x384790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38478Cu;
        // 0x384790: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38478c) {
            ctx->pc = 0x384890u;
            goto label_384890;
        }
    }
    ctx->pc = 0x384794u;
    // 0x384794: 0x86630028  lh          $v1, 0x28($s3)
    ctx->pc = 0x384794u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x384798: 0x1860003d  blez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x384798u;
    {
        const bool branch_taken_0x384798 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x38479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384798u;
        // 0x38479c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384798) {
            ctx->pc = 0x384890u;
            goto label_384890;
        }
    }
    ctx->pc = 0x3847A0u;
    // 0x3847a0: 0xc09c46c  jal         func_2711B0
    ctx->pc = 0x3847A0u;
    SET_GPR_U32(ctx, 31, 0x3847A8u);
    ctx->pc = 0x2711B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2711B0u, 0x3847A0u, 0x3847A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3847A8u;
label_3847a8:
    // 0x3847a8: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x3847a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
    // 0x3847ac: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x3847acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
    // 0x3847b0: 0x2652c600  addiu       $s2, $s2, -0x3A00
    ctx->pc = 0x3847b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952448));
    // 0x3847b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3847b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3847b8: 0x2610c510  addiu       $s0, $s0, -0x3AF0
    ctx->pc = 0x3847b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952208));
    // 0x3847bc: 0x0  nop
    ctx->pc = 0x3847bcu;
    // NOP
label_3847c0:
    // 0x3847c0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x3847c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3847c4: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3847C4u;
    {
        const bool branch_taken_0x3847c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3847c4) {
            ctx->pc = 0x384840u;
            goto label_384840;
        }
    }
    ctx->pc = 0x3847CCu;
    // 0x3847cc: 0x8262002a  lb          $v0, 0x2A($s3)
    ctx->pc = 0x3847ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 42)));
    // 0x3847d0: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3847D0u;
    {
        const bool branch_taken_0x3847d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3847D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3847D0u;
        // 0x3847d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3847d0) {
            ctx->pc = 0x384818u;
            goto label_384818;
        }
    }
    ctx->pc = 0x3847D8u;
    // 0x3847d8: 0x866a002c  lh          $t2, 0x2C($s3)
    ctx->pc = 0x3847d8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x3847dc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3847dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3847e0: 0x96470004  lhu         $a3, 0x4($s2)
    ctx->pc = 0x3847e0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3847e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3847e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3847e8: 0x2484c570  addiu       $a0, $a0, -0x3A90
    ctx->pc = 0x3847e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952304));
    // 0x3847ec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3847ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3847f0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x3847f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3847f4: 0x3408fffa  ori         $t0, $zero, 0xFFFA
    ctx->pc = 0x3847f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x3847f8: 0xa1a00  sll         $v1, $t2, 8
    ctx->pc = 0x3847f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x3847fc: 0xa4c00  sll         $t1, $t2, 16
    ctx->pc = 0x3847fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x384800: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x384800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x384804: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x384804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x384808: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x384808u;
    SET_GPR_U32(ctx, 31, 0x384810u);
    ctx->pc = 0x38480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384808u;
    // 0x38480c: 0x624821  addu        $t1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x384808u, 0x384810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384810u;
label_384810:
    // 0x384810: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x384810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x384814: 0x0  nop
    ctx->pc = 0x384814u;
    // NOP
label_384818:
    // 0x384818: 0x86630028  lh          $v1, 0x28($s3)
    ctx->pc = 0x384818u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x38481c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x38481cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x384820: 0x96470004  lhu         $a3, 0x4($s2)
    ctx->pc = 0x384820u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x384824: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x384824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x384828: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x384828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x38482c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x38482cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x384830: 0x3408fff9  ori         $t0, $zero, 0xFFF9
    ctx->pc = 0x384830u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x384834: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x384834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x384838: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x384838u;
    SET_GPR_U32(ctx, 31, 0x384840u);
    ctx->pc = 0x38483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384838u;
    // 0x38483c: 0x624821  addu        $t1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x384838u, 0x384840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384840u;
label_384840:
    // 0x384840: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x384840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x384844: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x384844u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x384848: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x384848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x38484c: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x38484Cu;
    {
        const bool branch_taken_0x38484c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x384850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38484Cu;
        // 0x384850: 0x26520006  addiu       $s2, $s2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38484c) {
            ctx->pc = 0x3847C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3847c0;
        }
    }
    ctx->pc = 0x384854u;
    // 0x384854: 0x8664002c  lh          $a0, 0x2C($s3)
    ctx->pc = 0x384854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x384858: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x384858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x38485c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38485Cu;
    {
        const bool branch_taken_0x38485c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x384860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38485Cu;
        // 0x384860: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38485c) {
            ctx->pc = 0x384868u;
            goto label_384868;
        }
    }
    ctx->pc = 0x384864u;
    // 0x384864: 0xa263002e  sb          $v1, 0x2E($s3)
    ctx->pc = 0x384864u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 46), (uint8_t)GPR_U32(ctx, 3));
label_384868:
    // 0x384868: 0x8664002c  lh          $a0, 0x2C($s3)
    ctx->pc = 0x384868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x38486c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x38486cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384870: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x384870u;
    {
        const bool branch_taken_0x384870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x384874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384870u;
        // 0x384874: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384870) {
            ctx->pc = 0x384880u;
            goto label_384880;
        }
    }
    ctx->pc = 0x384878u;
    // 0x384878: 0xa263002e  sb          $v1, 0x2E($s3)
    ctx->pc = 0x384878u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 46), (uint8_t)GPR_U32(ctx, 3));
    // 0x38487c: 0x0  nop
    ctx->pc = 0x38487cu;
    // NOP
label_384880:
    // 0x384880: 0x8264002e  lb          $a0, 0x2E($s3)
    ctx->pc = 0x384880u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 46)));
    // 0x384884: 0x8663002c  lh          $v1, 0x2C($s3)
    ctx->pc = 0x384884u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x384888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x384888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38488c: 0xa663002c  sh          $v1, 0x2C($s3)
    ctx->pc = 0x38488cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 3));
label_384890:
    // 0x384890: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x384890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x384894: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x384894u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x384898: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x384898u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38489c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38489cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3848a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3848a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3848a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3848A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3848A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3848A4u;
        // 0x3848a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3848A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3848ACu;
}
