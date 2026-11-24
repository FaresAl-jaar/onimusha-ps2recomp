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

// Function: sub_003836B0
// Address: 0x3836b0 - 0x3839dc
void sub_003836B0_0x3836b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003836B0_0x3836b0");
#endif

    switch (ctx->pc) {
        case 0x383768u: goto label_383768;
        case 0x383780u: goto label_383780;
        case 0x3837e0u: goto label_3837e0;
        case 0x383800u: goto label_383800;
        default: break;
    }

    ctx->pc = 0x3836b0u;

    // 0x3836b0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3836b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3836b4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3836b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3836b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3836b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3836bc: 0x28a4000d  slti        $a0, $a1, 0xD
    ctx->pc = 0x3836bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x3836c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3836c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3836c4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3836C4u;
    {
        const bool branch_taken_0x3836c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3836C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836C4u;
        // 0x3836c8: 0x24c30110  addiu       $v1, $a2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3836c4) {
            ctx->pc = 0x3836D8u;
            goto label_3836d8;
        }
    }
    ctx->pc = 0x3836CCu;
    // 0x3836cc: 0x28a40023  slti        $a0, $a1, 0x23
    ctx->pc = 0x3836ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)35) ? 1 : 0);
    // 0x3836d0: 0x148000bb  bnez        $a0, . + 4 + (0xBB << 2)
    ctx->pc = 0x3836D0u;
    {
        const bool branch_taken_0x3836d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3836d0) {
            ctx->pc = 0x3839C0u;
            goto label_3839c0;
        }
    }
    ctx->pc = 0x3836D8u;
label_3836d8:
    // 0x3836d8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3836d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3836dc: 0x10a400b0  beq         $a1, $a0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x3836DCu;
    {
        const bool branch_taken_0x3836dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3836E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836DCu;
        // 0x3836e0: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3836dc) {
            ctx->pc = 0x3839A0u;
            goto label_3839a0;
        }
    }
    ctx->pc = 0x3836E4u;
    // 0x3836e4: 0x10a4009c  beq         $a1, $a0, . + 4 + (0x9C << 2)
    ctx->pc = 0x3836E4u;
    {
        const bool branch_taken_0x3836e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3836e4) {
            ctx->pc = 0x383958u;
            goto label_383958;
        }
    }
    ctx->pc = 0x3836ECu;
    // 0x3836ec: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3836ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3836f0: 0x10a40095  beq         $a1, $a0, . + 4 + (0x95 << 2)
    ctx->pc = 0x3836F0u;
    {
        const bool branch_taken_0x3836f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3836F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836F0u;
        // 0x3836f4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3836f0) {
            ctx->pc = 0x383948u;
            goto label_383948;
        }
    }
    ctx->pc = 0x3836F8u;
    // 0x3836f8: 0x10a4008f  beq         $a1, $a0, . + 4 + (0x8F << 2)
    ctx->pc = 0x3836F8u;
    {
        const bool branch_taken_0x3836f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3836f8) {
            ctx->pc = 0x383938u;
            goto label_383938;
        }
    }
    ctx->pc = 0x383700u;
    // 0x383700: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x383700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x383704: 0x10a40088  beq         $a1, $a0, . + 4 + (0x88 << 2)
    ctx->pc = 0x383704u;
    {
        const bool branch_taken_0x383704 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x383708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383704u;
        // 0x383708: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383704) {
            ctx->pc = 0x383928u;
            goto label_383928;
        }
    }
    ctx->pc = 0x38370Cu;
    // 0x38370c: 0x10a40074  beq         $a1, $a0, . + 4 + (0x74 << 2)
    ctx->pc = 0x38370Cu;
    {
        const bool branch_taken_0x38370c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x38370c) {
            ctx->pc = 0x3838E0u;
            goto label_3838e0;
        }
    }
    ctx->pc = 0x383714u;
    // 0x383714: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x383714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x383718: 0x10a4005f  beq         $a1, $a0, . + 4 + (0x5F << 2)
    ctx->pc = 0x383718u;
    {
        const bool branch_taken_0x383718 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x38371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383718u;
        // 0x38371c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383718) {
            ctx->pc = 0x383898u;
            goto label_383898;
        }
    }
    ctx->pc = 0x383720u;
    // 0x383720: 0x10a4004b  beq         $a1, $a0, . + 4 + (0x4B << 2)
    ctx->pc = 0x383720u;
    {
        const bool branch_taken_0x383720 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x383720) {
            ctx->pc = 0x383850u;
            goto label_383850;
        }
    }
    ctx->pc = 0x383728u;
    // 0x383728: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x383728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38372c: 0x10a4002e  beq         $a1, $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x38372Cu;
    {
        const bool branch_taken_0x38372c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x383730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38372Cu;
        // 0x383730: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38372c) {
            ctx->pc = 0x3837E8u;
            goto label_3837e8;
        }
    }
    ctx->pc = 0x383734u;
    // 0x383734: 0x10a40026  beq         $a1, $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x383734u;
    {
        const bool branch_taken_0x383734 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x383734) {
            ctx->pc = 0x3837D0u;
            goto label_3837d0;
        }
    }
    ctx->pc = 0x38373Cu;
    // 0x38373c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x38373cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x383740: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x383740u;
    {
        const bool branch_taken_0x383740 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x383744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383740u;
        // 0x383744: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383740) {
            ctx->pc = 0x383770u;
            goto label_383770;
        }
    }
    ctx->pc = 0x383748u;
    // 0x383748: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x383748u;
    {
        const bool branch_taken_0x383748 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x383748) {
            ctx->pc = 0x383758u;
            goto label_383758;
        }
    }
    ctx->pc = 0x383750u;
    // 0x383750: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x383750u;
    {
        const bool branch_taken_0x383750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383750) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x383758u;
label_383758:
    // 0x383758: 0x24c500a0  addiu       $a1, $a2, 0xA0
    ctx->pc = 0x383758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x38375c: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x38375cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x383760: 0xc049522  jal         func_125488
    ctx->pc = 0x383760u;
    SET_GPR_U32(ctx, 31, 0x383768u);
    ctx->pc = 0x383764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383760u;
    // 0x383764: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x383760u, 0x383768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383768u;
label_383768:
    // 0x383768: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x383768u;
    {
        const bool branch_taken_0x383768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383768) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x383770u;
label_383770:
    // 0x383770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x383770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383774: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x383774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x383778: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x383778u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38377c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x38377cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_383780:
    // 0x383780: 0xc4c10030  lwc1        $f1, 0x30($a2)
    ctx->pc = 0x383780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x383784: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x383784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x383788: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x383788u;
    {
        const bool branch_taken_0x383788 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383788u;
        // 0x38378c: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x383788) {
            ctx->pc = 0x383798u;
            goto label_383798;
        }
    }
    ctx->pc = 0x383790u;
    // 0x383790: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x383790u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x383794: 0x0  nop
    ctx->pc = 0x383794u;
    // NOP
label_383798:
    // 0x383798: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x383798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38379c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x38379cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3837a0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3837A0u;
    {
        const bool branch_taken_0x3837a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3837a0) {
            ctx->pc = 0x3837B0u;
            goto label_3837b0;
        }
    }
    ctx->pc = 0x3837A8u;
    // 0x3837a8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3837a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3837ac: 0x0  nop
    ctx->pc = 0x3837acu;
    // NOP
label_3837b0:
    // 0x3837b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3837b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3837b4: 0x28a4000e  slti        $a0, $a1, 0xE
    ctx->pc = 0x3837b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x3837b8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3837b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3837bc: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3837BCu;
    {
        const bool branch_taken_0x3837bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3837C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3837BCu;
        // 0x3837c0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3837bc) {
            ctx->pc = 0x383780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383780;
        }
    }
    ctx->pc = 0x3837C4u;
    // 0x3837c4: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x3837C4u;
    {
        const bool branch_taken_0x3837c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3837c4) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x3837CCu;
    // 0x3837cc: 0x0  nop
    ctx->pc = 0x3837ccu;
    // NOP
label_3837d0:
    // 0x3837d0: 0x24c500bc  addiu       $a1, $a2, 0xBC
    ctx->pc = 0x3837d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 188));
    // 0x3837d4: 0x2464008c  addiu       $a0, $v1, 0x8C
    ctx->pc = 0x3837d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
    // 0x3837d8: 0xc049522  jal         func_125488
    ctx->pc = 0x3837D8u;
    SET_GPR_U32(ctx, 31, 0x3837E0u);
    ctx->pc = 0x3837DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3837D8u;
    // 0x3837dc: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x3837D8u, 0x3837E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3837E0u;
label_3837e0:
    // 0x3837e0: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x3837E0u;
    {
        const bool branch_taken_0x3837e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3837e0) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x3837E8u;
label_3837e8:
    // 0x3837e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3837e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3837ec: 0x3c043fc0  lui         $a0, 0x3FC0
    ctx->pc = 0x3837ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16320 << 16));
    // 0x3837f0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x3837f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x3837f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3837f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3837f8: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3837f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3837fc: 0x0  nop
    ctx->pc = 0x3837fcu;
    // NOP
label_383800:
    // 0x383800: 0xc4c10068  lwc1        $f1, 0x68($a2)
    ctx->pc = 0x383800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x383804: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x383804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x383808: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x383808u;
    {
        const bool branch_taken_0x383808 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383808u;
        // 0x38380c: 0xe4610038  swc1        $f1, 0x38($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x383808) {
            ctx->pc = 0x383818u;
            goto label_383818;
        }
    }
    ctx->pc = 0x383810u;
    // 0x383810: 0xe4620038  swc1        $f2, 0x38($v1)
    ctx->pc = 0x383810u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x383814: 0x0  nop
    ctx->pc = 0x383814u;
    // NOP
label_383818:
    // 0x383818: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x383818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38381c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x38381cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x383820: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x383820u;
    {
        const bool branch_taken_0x383820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x383820) {
            ctx->pc = 0x383830u;
            goto label_383830;
        }
    }
    ctx->pc = 0x383828u;
    // 0x383828: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x383828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x38382c: 0x0  nop
    ctx->pc = 0x38382cu;
    // NOP
label_383830:
    // 0x383830: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x383830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x383834: 0x28e4000e  slti        $a0, $a3, 0xE
    ctx->pc = 0x383834u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x383838: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x383838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x38383c: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x38383Cu;
    {
        const bool branch_taken_0x38383c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x383840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38383Cu;
        // 0x383840: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38383c) {
            ctx->pc = 0x383800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383800;
        }
    }
    ctx->pc = 0x383844u;
    // 0x383844: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x383844u;
    {
        const bool branch_taken_0x383844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383844) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x38384Cu;
    // 0x38384c: 0x0  nop
    ctx->pc = 0x38384cu;
    // NOP
label_383850:
    // 0x383850: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x383850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x383854: 0xc4c100e0  lwc1        $f1, 0xE0($a2)
    ctx->pc = 0x383854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x383858: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x383858u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38385c: 0x0  nop
    ctx->pc = 0x38385cu;
    // NOP
    // 0x383860: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x383860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x383864: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x383864u;
    {
        const bool branch_taken_0x383864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x383868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383864u;
        // 0x383868: 0xe46100b0  swc1        $f1, 0xB0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x383864) {
            ctx->pc = 0x383870u;
            goto label_383870;
        }
    }
    ctx->pc = 0x38386Cu;
    // 0x38386c: 0xe46000b0  swc1        $f0, 0xB0($v1)
    ctx->pc = 0x38386cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
label_383870:
    // 0x383870: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x383870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x383874: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x383874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x383878: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x383878u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38387c: 0x0  nop
    ctx->pc = 0x38387cu;
    // NOP
    // 0x383880: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x383880u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x383884: 0x45010052  bc1t        . + 4 + (0x52 << 2)
    ctx->pc = 0x383884u;
    {
        const bool branch_taken_0x383884 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x383884) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x38388Cu;
    // 0x38388c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x38388Cu;
    {
        const bool branch_taken_0x38388c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38388Cu;
        // 0x383890: 0xe46000b0  swc1        $f0, 0xB0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38388c) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x383894u;
    // 0x383894: 0x0  nop
    ctx->pc = 0x383894u;
    // NOP
label_383898:
    // 0x383898: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x383898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x38389c: 0xc4c100d8  lwc1        $f1, 0xD8($a2)
    ctx->pc = 0x38389cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3838a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3838a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3838a4: 0x0  nop
    ctx->pc = 0x3838a4u;
    // NOP
    // 0x3838a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3838a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3838ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3838ACu;
    {
        const bool branch_taken_0x3838ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3838B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838ACu;
        // 0x3838b0: 0xe46100a8  swc1        $f1, 0xA8($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3838ac) {
            ctx->pc = 0x3838B8u;
            goto label_3838b8;
        }
    }
    ctx->pc = 0x3838B4u;
    // 0x3838b4: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x3838b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
label_3838b8:
    // 0x3838b8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x3838b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x3838bc: 0xc46100a8  lwc1        $f1, 0xA8($v1)
    ctx->pc = 0x3838bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3838c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3838c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3838c4: 0x0  nop
    ctx->pc = 0x3838c4u;
    // NOP
    // 0x3838c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3838c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3838cc: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x3838CCu;
    {
        const bool branch_taken_0x3838cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3838cc) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x3838D4u;
    // 0x3838d4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3838D4u;
    {
        const bool branch_taken_0x3838d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3838D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838D4u;
        // 0x3838d8: 0xe46000a8  swc1        $f0, 0xA8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3838d4) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x3838DCu;
    // 0x3838dc: 0x0  nop
    ctx->pc = 0x3838dcu;
    // NOP
label_3838e0:
    // 0x3838e0: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x3838e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x3838e4: 0xc4c100dc  lwc1        $f1, 0xDC($a2)
    ctx->pc = 0x3838e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3838e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3838e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3838ec: 0x0  nop
    ctx->pc = 0x3838ecu;
    // NOP
    // 0x3838f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3838f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3838f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3838F4u;
    {
        const bool branch_taken_0x3838f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3838F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838F4u;
        // 0x3838f8: 0xe46100ac  swc1        $f1, 0xAC($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3838f4) {
            ctx->pc = 0x383900u;
            goto label_383900;
        }
    }
    ctx->pc = 0x3838FCu;
    // 0x3838fc: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x3838fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
label_383900:
    // 0x383900: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x383900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x383904: 0xc46100ac  lwc1        $f1, 0xAC($v1)
    ctx->pc = 0x383904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x383908: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x383908u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38390c: 0x0  nop
    ctx->pc = 0x38390cu;
    // NOP
    // 0x383910: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x383910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x383914: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x383914u;
    {
        const bool branch_taken_0x383914 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x383914) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x38391Cu;
    // 0x38391c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x38391Cu;
    {
        const bool branch_taken_0x38391c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38391Cu;
        // 0x383920: 0xe46000ac  swc1        $f0, 0xAC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38391c) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x383924u;
    // 0x383924: 0x0  nop
    ctx->pc = 0x383924u;
    // NOP
label_383928:
    // 0x383928: 0x94c400ec  lhu         $a0, 0xEC($a2)
    ctx->pc = 0x383928u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 236)));
    // 0x38392c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x38392Cu;
    {
        const bool branch_taken_0x38392c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38392Cu;
        // 0x383930: 0xa46400bc  sh          $a0, 0xBC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38392c) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x383934u;
    // 0x383934: 0x0  nop
    ctx->pc = 0x383934u;
    // NOP
label_383938:
    // 0x383938: 0x94c400ee  lhu         $a0, 0xEE($a2)
    ctx->pc = 0x383938u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 238)));
    // 0x38393c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x38393Cu;
    {
        const bool branch_taken_0x38393c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38393Cu;
        // 0x383940: 0xa46400be  sh          $a0, 0xBE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 190), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38393c) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x383944u;
    // 0x383944: 0x0  nop
    ctx->pc = 0x383944u;
    // NOP
label_383948:
    // 0x383948: 0x94c400f0  lhu         $a0, 0xF0($a2)
    ctx->pc = 0x383948u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 240)));
    // 0x38394c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x38394Cu;
    {
        const bool branch_taken_0x38394c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38394Cu;
        // 0x383950: 0xa46400c0  sh          $a0, 0xC0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 192), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38394c) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x383954u;
    // 0x383954: 0x0  nop
    ctx->pc = 0x383954u;
    // NOP
label_383958:
    // 0x383958: 0xc4c100e4  lwc1        $f1, 0xE4($a2)
    ctx->pc = 0x383958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38395c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x38395cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x383960: 0x0  nop
    ctx->pc = 0x383960u;
    // NOP
    // 0x383964: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x383964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x383968: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x383968u;
    {
        const bool branch_taken_0x383968 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383968u;
        // 0x38396c: 0xe46100b4  swc1        $f1, 0xB4($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x383968) {
            ctx->pc = 0x383978u;
            goto label_383978;
        }
    }
    ctx->pc = 0x383970u;
    // 0x383970: 0xe46000b4  swc1        $f0, 0xB4($v1)
    ctx->pc = 0x383970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
    // 0x383974: 0x0  nop
    ctx->pc = 0x383974u;
    // NOP
label_383978:
    // 0x383978: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x383978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x38397c: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x38397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x383980: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x383980u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x383984: 0x0  nop
    ctx->pc = 0x383984u;
    // NOP
    // 0x383988: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x383988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38398c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x38398Cu;
    {
        const bool branch_taken_0x38398c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38398c) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x383994u;
    // 0x383994: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x383994u;
    {
        const bool branch_taken_0x383994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383994u;
        // 0x383998: 0xe46000b4  swc1        $f0, 0xB4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x383994) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x38399Cu;
    // 0x38399c: 0x0  nop
    ctx->pc = 0x38399cu;
    // NOP
label_3839a0:
    // 0x3839a0: 0xc4c100e8  lwc1        $f1, 0xE8($a2)
    ctx->pc = 0x3839a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3839a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3839a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3839a8: 0x0  nop
    ctx->pc = 0x3839a8u;
    // NOP
    // 0x3839ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3839acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3839b0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x3839B0u;
    {
        const bool branch_taken_0x3839b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3839B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3839B0u;
        // 0x3839b4: 0xe46100b8  swc1        $f1, 0xB8($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3839b0) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x3839B8u;
    // 0x3839b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3839B8u;
    {
        const bool branch_taken_0x3839b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3839BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3839B8u;
        // 0x3839bc: 0xe46000b8  swc1        $f0, 0xB8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3839b8) {
            ctx->pc = 0x3839D0u;
            goto label_3839d0;
        }
    }
    ctx->pc = 0x3839C0u;
label_3839c0:
    // 0x3839c0: 0x8cc400f4  lw          $a0, 0xF4($a2)
    ctx->pc = 0x3839c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 244)));
    // 0x3839c4: 0xac6400c4  sw          $a0, 0xC4($v1)
    ctx->pc = 0x3839c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 4));
    // 0x3839c8: 0x78c40100  lq          $a0, 0x100($a2)
    ctx->pc = 0x3839c8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 256)));
    // 0x3839cc: 0x7c6400d0  sq          $a0, 0xD0($v1)
    ctx->pc = 0x3839ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 208), GPR_VEC(ctx, 4));
label_3839d0:
    // 0x3839d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3839d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3839d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3839D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3839D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3839D4u;
        // 0x3839d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3839D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3839DCu;
}
