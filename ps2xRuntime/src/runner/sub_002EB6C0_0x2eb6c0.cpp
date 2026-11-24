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

// Function: sub_002EB6C0
// Address: 0x2eb6c0 - 0x2eb9d8
void sub_002EB6C0_0x2eb6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB6C0_0x2eb6c0");
#endif

    switch (ctx->pc) {
        case 0x2eb7b0u: goto label_2eb7b0;
        case 0x2eb7e4u: goto label_2eb7e4;
        case 0x2eb80cu: goto label_2eb80c;
        case 0x2eb924u: goto label_2eb924;
        case 0x2eb96cu: goto label_2eb96c;
        case 0x2eb980u: goto label_2eb980;
        case 0x2eb9b4u: goto label_2eb9b4;
        default: break;
    }

    ctx->pc = 0x2eb6c0u;

    // 0x2eb6c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2eb6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2eb6c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2eb6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2eb6c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2eb6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2eb6cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2eb6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2eb6d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2eb6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2eb6d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2eb6d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb6d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2eb6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2eb6dc: 0x5263c  dsll32      $a0, $a1, 24
    ctx->pc = 0x2eb6dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 24));
    // 0x2eb6e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2eb6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2eb6e4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2eb6e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2eb6e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2eb6e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2eb6ec: 0x24120180  addiu       $s2, $zero, 0x180
    ctx->pc = 0x2eb6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2eb6f0: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2eb6f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2eb6f4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2eb6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2eb6f8: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2EB6F8u;
    {
        const bool branch_taken_0x2eb6f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6F8u;
        // 0x2eb6fc: 0x24110111  addiu       $s1, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6f8) {
            ctx->pc = 0x2EB788u;
            goto label_2eb788;
        }
    }
    ctx->pc = 0x2EB700u;
    // 0x2eb700: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2eb700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2eb704: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EB704u;
    {
        const bool branch_taken_0x2eb704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EB708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB704u;
        // 0x2eb708: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb704) {
            ctx->pc = 0x2EB788u;
            goto label_2eb788;
        }
    }
    ctx->pc = 0x2EB70Cu;
    // 0x2eb70c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB70Cu;
    {
        const bool branch_taken_0x2eb70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb70c) {
            ctx->pc = 0x2EB728u;
            goto label_2eb728;
        }
    }
    ctx->pc = 0x2EB714u;
    // 0x2eb714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eb714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb718: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB718u;
    {
        const bool branch_taken_0x2eb718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb718) {
            ctx->pc = 0x2EB728u;
            goto label_2eb728;
        }
    }
    ctx->pc = 0x2EB720u;
    // 0x2eb720: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2EB720u;
    {
        const bool branch_taken_0x2eb720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb720) {
            ctx->pc = 0x2EB798u;
            goto label_2eb798;
        }
    }
    ctx->pc = 0x2EB728u;
label_2eb728:
    // 0x2eb728: 0x8e64026c  lw          $a0, 0x26C($s3)
    ctx->pc = 0x2eb728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 620)));
    // 0x2eb72c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2eb72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2eb730: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2eb730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2eb734: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x2eb734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x2eb738: 0x2484000b  addiu       $a0, $a0, 0xB
    ctx->pc = 0x2eb738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11));
    // 0x2eb73c: 0x4863c  dsll32      $s0, $a0, 24
    ctx->pc = 0x2eb73cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2eb740: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EB740u;
    {
        const bool branch_taken_0x2eb740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB740u;
        // 0x2eb744: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb740) {
            ctx->pc = 0x2EB7A0u;
            goto label_2eb7a0;
        }
    }
    ctx->pc = 0x2EB748u;
    // 0x2eb748: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2eb748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2eb74c: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x2eb74cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2eb750: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2eb750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2eb754: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EB754u;
    {
        const bool branch_taken_0x2eb754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB754u;
        // 0x2eb758: 0x3c02439c  lui         $v0, 0x439C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17308 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb754) {
            ctx->pc = 0x2EB7A0u;
            goto label_2eb7a0;
        }
    }
    ctx->pc = 0x2EB75Cu;
    // 0x2eb75c: 0x3c033f92  lui         $v1, 0x3F92
    ctx->pc = 0x2eb75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16274 << 16));
    // 0x2eb760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb764: 0x34634925  ori         $v1, $v1, 0x4925
    ctx->pc = 0x2eb764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18725);
    // 0x2eb768: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2eb768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2eb76c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eb76cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2eb770: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2eb770u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2eb774: 0x0  nop
    ctx->pc = 0x2eb774u;
    // NOP
    // 0x2eb778: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x2eb778u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2eb77c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EB77Cu;
    {
        const bool branch_taken_0x2eb77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB77Cu;
        // 0x2eb780: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb77c) {
            ctx->pc = 0x2EB7A0u;
            goto label_2eb7a0;
        }
    }
    ctx->pc = 0x2EB784u;
    // 0x2eb784: 0x0  nop
    ctx->pc = 0x2eb784u;
    // NOP
label_2eb788:
    // 0x2eb788: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x2eb788u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb78c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2eb78cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb790: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB790u;
    {
        const bool branch_taken_0x2eb790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB790u;
        // 0x2eb794: 0x2410000e  addiu       $s0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb790) {
            ctx->pc = 0x2EB7A0u;
            goto label_2eb7a0;
        }
    }
    ctx->pc = 0x2EB798u;
label_2eb798:
    // 0x2eb798: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x2EB798u;
    {
        const bool branch_taken_0x2eb798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb798) {
            ctx->pc = 0x2EB9B8u;
            goto label_2eb9b8;
        }
    }
    ctx->pc = 0x2EB7A0u;
label_2eb7a0:
    // 0x2eb7a0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2eb7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2eb7a4: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x2eb7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x2eb7a8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x2EB7A8u;
    SET_GPR_U32(ctx, 31, 0x2EB7B0u);
    ctx->pc = 0x2EB7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB7A8u;
    // 0x2eb7ac: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x2EB7A8u, 0x2EB7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB7B0u;
label_2eb7b0:
    // 0x2eb7b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EB7B0u;
    {
        const bool branch_taken_0x2eb7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7B0u;
        // 0x2eb7b4: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7b0) {
            ctx->pc = 0x2EB7E8u;
            goto label_2eb7e8;
        }
    }
    ctx->pc = 0x2EB7B8u;
    // 0x2eb7b8: 0x3c030410  lui         $v1, 0x410
    ctx->pc = 0x2eb7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1040 << 16));
    // 0x2eb7bc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2eb7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2eb7c0: 0x34630014  ori         $v1, $v1, 0x14
    ctx->pc = 0x2eb7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20);
    // 0x2eb7c4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2eb7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2eb7c8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2eb7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2eb7cc: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x2eb7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2eb7d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eb7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb7d4: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x2eb7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x2eb7d8: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2eb7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2eb7dc: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2EB7DCu;
    SET_GPR_U32(ctx, 31, 0x2EB7E4u);
    ctx->pc = 0x2EB7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB7DCu;
    // 0x2eb7e0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2EB7DCu, 0x2EB7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB7E4u;
label_2eb7e4:
    // 0x2eb7e4: 0x0  nop
    ctx->pc = 0x2eb7e4u;
    // NOP
label_2eb7e8:
    // 0x2eb7e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2eb7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2eb7ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2eb7ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eb7f0: 0x0  nop
    ctx->pc = 0x2eb7f0u;
    // NOP
    // 0x2eb7f4: 0x46146032  c.eq.s      $f12, $f20
    ctx->pc = 0x2eb7f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eb7f8: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
    ctx->pc = 0x2EB7F8u;
    {
        const bool branch_taken_0x2eb7f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7F8u;
        // 0x2eb7fc: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7f8) {
            ctx->pc = 0x2EB930u;
            goto label_2eb930;
        }
    }
    ctx->pc = 0x2EB800u;
    // 0x2eb800: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2eb800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2eb804: 0xc05e360  jal         func_178D80
    ctx->pc = 0x2EB804u;
    SET_GPR_U32(ctx, 31, 0x2EB80Cu);
    ctx->pc = 0x2EB808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB804u;
    // 0x2eb808: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x2EB804u, 0x2EB80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB80Cu;
label_2eb80c:
    // 0x2eb80c: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2EB80Cu;
    {
        const bool branch_taken_0x2eb80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB80Cu;
        // 0x2eb810: 0x121c3c  dsll32      $v1, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb80c) {
            ctx->pc = 0x2EB970u;
            goto label_2eb970;
        }
    }
    ctx->pc = 0x2EB814u;
    // 0x2eb814: 0x102e3c  dsll32      $a1, $s0, 24
    ctx->pc = 0x2eb814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 24));
    // 0x2eb818: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2eb818u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2eb81c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x2eb81cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x2eb820: 0x24640700  addiu       $a0, $v1, 0x700
    ctx->pc = 0x2eb820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x2eb824: 0x24097fff  addiu       $t1, $zero, 0x7FFF
    ctx->pc = 0x2eb824u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2eb828: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x2eb828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2eb82c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2eb82cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2eb830: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2eb830u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2eb834: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2eb834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2eb838: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x2eb838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x2eb83c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2eb83cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb840: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x2eb840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x2eb844: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2eb844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2eb848: 0x835025  or          $t2, $a0, $v1
    ctx->pc = 0x2eb848u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2eb84c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2eb84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2eb850: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2eb850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2eb854: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2eb854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2eb858: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x2eb858u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2eb85c: 0x24637160  addiu       $v1, $v1, 0x7160
    ctx->pc = 0x2eb85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29024));
    // 0x2eb860: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2eb860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2eb864: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2eb864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2eb868: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2eb868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2eb86c: 0x3c052028  lui         $a1, 0x2028
    ctx->pc = 0x2eb86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8232 << 16));
    // 0x2eb870: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x2eb870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x2eb874: 0x34a50156  ori         $a1, $a1, 0x156
    ctx->pc = 0x2eb874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)342);
    // 0x2eb878: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x2eb878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x2eb87c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2eb87cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x2eb880: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x2eb880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x2eb884: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eb884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb888: 0x8e6b0294  lw          $t3, 0x294($s3)
    ctx->pc = 0x2eb888u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 660)));
    // 0x2eb88c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2eb88cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2eb890: 0x34882000  ori         $t0, $a0, 0x2000
    ctx->pc = 0x2eb890u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x2eb894: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2eb894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2eb898: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2eb898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2eb89c: 0xac4b0010  sw          $t3, 0x10($v0)
    ctx->pc = 0x2eb89cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 11));
    // 0x2eb8a0: 0x906b0008  lbu         $t3, 0x8($v1)
    ctx->pc = 0x2eb8a0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2eb8a4: 0xa44b0014  sh          $t3, 0x14($v0)
    ctx->pc = 0x2eb8a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 11));
    // 0x2eb8a8: 0x906b0009  lbu         $t3, 0x9($v1)
    ctx->pc = 0x2eb8a8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x2eb8ac: 0xa44b0016  sh          $t3, 0x16($v0)
    ctx->pc = 0x2eb8acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 11));
    // 0x2eb8b0: 0xac4a0020  sw          $t2, 0x20($v0)
    ctx->pc = 0x2eb8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 10));
    // 0x2eb8b4: 0xac490024  sw          $t1, 0x24($v0)
    ctx->pc = 0x2eb8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 9));
    // 0x2eb8b8: 0x846a0000  lh          $t2, 0x0($v1)
    ctx->pc = 0x2eb8b8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eb8bc: 0x84690002  lh          $t1, 0x2($v1)
    ctx->pc = 0x2eb8bcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2eb8c0: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x2eb8c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x2eb8c4: 0x94d00  sll         $t1, $t1, 20
    ctx->pc = 0x2eb8c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 20));
    // 0x2eb8c8: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x2eb8c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x2eb8cc: 0xac490028  sw          $t1, 0x28($v0)
    ctx->pc = 0x2eb8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 9));
    // 0x2eb8d0: 0x846a0004  lh          $t2, 0x4($v1)
    ctx->pc = 0x2eb8d0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2eb8d4: 0x84690006  lh          $t1, 0x6($v1)
    ctx->pc = 0x2eb8d4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2eb8d8: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x2eb8d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x2eb8dc: 0x94d00  sll         $t1, $t1, 20
    ctx->pc = 0x2eb8dcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 20));
    // 0x2eb8e0: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x2eb8e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x2eb8e4: 0xac490018  sw          $t1, 0x18($v0)
    ctx->pc = 0x2eb8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 9));
    // 0x2eb8e8: 0x846b0004  lh          $t3, 0x4($v1)
    ctx->pc = 0x2eb8e8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2eb8ec: 0x846a0000  lh          $t2, 0x0($v1)
    ctx->pc = 0x2eb8ecu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eb8f0: 0x84690006  lh          $t1, 0x6($v1)
    ctx->pc = 0x2eb8f0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2eb8f4: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x2eb8f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x2eb8f8: 0x84630002  lh          $v1, 0x2($v1)
    ctx->pc = 0x2eb8f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2eb8fc: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x2eb8fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x2eb900: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x2eb900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2eb904: 0x31d00  sll         $v1, $v1, 20
    ctx->pc = 0x2eb904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x2eb908: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x2eb908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x2eb90c: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x2eb90cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x2eb910: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2eb910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2eb914: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x2eb914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x2eb918: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2eb918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2eb91c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2EB91Cu;
    SET_GPR_U32(ctx, 31, 0x2EB924u);
    ctx->pc = 0x2EB920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB91Cu;
    // 0x2eb920: 0xa047000f  sb          $a3, 0xF($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2EB91Cu, 0x2EB924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB924u;
label_2eb924:
    // 0x2eb924: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2EB924u;
    {
        const bool branch_taken_0x2eb924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb924) {
            ctx->pc = 0x2EB970u;
            goto label_2eb970;
        }
    }
    ctx->pc = 0x2EB92Cu;
    // 0x2eb92c: 0x0  nop
    ctx->pc = 0x2eb92cu;
    // NOP
label_2eb930:
    // 0x2eb930: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x2eb930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x2eb934: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2eb934u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2eb938: 0x8e680294  lw          $t0, 0x294($s3)
    ctx->pc = 0x2eb938u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 660)));
    // 0x2eb93c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eb93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eb940: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2eb940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb944: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2eb944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eb948: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb94c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2eb94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2eb950: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2eb950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2eb954: 0x24427160  addiu       $v0, $v0, 0x7160
    ctx->pc = 0x2eb954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29024));
    // 0x2eb958: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eb958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb95c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2eb95cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2eb960: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2eb960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eb964: 0xc0ba254  jal         func_2E8950
    ctx->pc = 0x2EB964u;
    SET_GPR_U32(ctx, 31, 0x2EB96Cu);
    ctx->pc = 0x2EB968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB964u;
    // 0x2eb968: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8950u, 0x2EB964u, 0x2EB96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB96Cu;
label_2eb96c:
    // 0x2eb96c: 0x0  nop
    ctx->pc = 0x2eb96cu;
    // NOP
label_2eb970:
    // 0x2eb970: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2eb970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2eb974: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x2eb974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x2eb978: 0xc05e360  jal         func_178D80
    ctx->pc = 0x2EB978u;
    SET_GPR_U32(ctx, 31, 0x2EB980u);
    ctx->pc = 0x2EB97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB978u;
    // 0x2eb97c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x2EB978u, 0x2EB980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB980u;
label_2eb980:
    // 0x2eb980: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eb980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb984: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EB984u;
    {
        const bool branch_taken_0x2eb984 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB984u;
        // 0x2eb988: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb984) {
            ctx->pc = 0x2EB9B8u;
            goto label_2eb9b8;
        }
    }
    ctx->pc = 0x2EB98Cu;
    // 0x2eb98c: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x2eb98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x2eb990: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2eb990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2eb994: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x2eb994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x2eb998: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2eb998u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2eb99c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2eb99cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2eb9a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eb9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb9a4: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2eb9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2eb9a8: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x2eb9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x2eb9ac: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2EB9ACu;
    SET_GPR_U32(ctx, 31, 0x2EB9B4u);
    ctx->pc = 0x2EB9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB9ACu;
    // 0x2eb9b0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2EB9ACu, 0x2EB9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB9B4u;
label_2eb9b4:
    // 0x2eb9b4: 0x0  nop
    ctx->pc = 0x2eb9b4u;
    // NOP
label_2eb9b8:
    // 0x2eb9b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2eb9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb9bc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2eb9bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eb9c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2eb9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2eb9c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2eb9c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eb9c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2eb9c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb9cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2eb9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9D0u;
        // 0x2eb9d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB9D8u;
}
