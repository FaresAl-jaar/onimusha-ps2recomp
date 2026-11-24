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

// Function: sub_002AE3C0
// Address: 0x2ae3c0 - 0x2ae890
void sub_002AE3C0_0x2ae3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE3C0_0x2ae3c0");
#endif

    switch (ctx->pc) {
        case 0x2ae488u: goto label_2ae488;
        case 0x2ae494u: goto label_2ae494;
        case 0x2ae4a8u: goto label_2ae4a8;
        case 0x2ae4b8u: goto label_2ae4b8;
        case 0x2ae4c4u: goto label_2ae4c4;
        case 0x2ae560u: goto label_2ae560;
        case 0x2ae5a8u: goto label_2ae5a8;
        case 0x2ae5b8u: goto label_2ae5b8;
        case 0x2ae608u: goto label_2ae608;
        case 0x2ae61cu: goto label_2ae61c;
        case 0x2ae6f4u: goto label_2ae6f4;
        case 0x2ae704u: goto label_2ae704;
        case 0x2ae738u: goto label_2ae738;
        case 0x2ae780u: goto label_2ae780;
        case 0x2ae83cu: goto label_2ae83c;
        case 0x2ae850u: goto label_2ae850;
        default: break;
    }

    ctx->pc = 0x2ae3c0u;

    // 0x2ae3c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2ae3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2ae3c4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ae3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ae3c8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2ae3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2ae3cc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2ae3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2ae3d0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2ae3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2ae3d4: 0x24424b56  addiu       $v0, $v0, 0x4B56
    ctx->pc = 0x2ae3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19286));
    // 0x2ae3d8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2ae3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2ae3dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2ae3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae3e0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2ae3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2ae3e4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2ae3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2ae3e8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2ae3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2ae3ec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2ae3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ae3f0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2ae3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2ae3f4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ae3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2ae3f8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2ae3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2ae3fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ae3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ae400: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ae400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae404: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ae404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ae408: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ae408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ae40c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2ae40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ae410: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x2ae410u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ae414: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2ae414u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2ae418: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2ae418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2ae41c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2ae41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2ae420: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ae420u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ae424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae428: 0x0  nop
    ctx->pc = 0x2ae428u;
    // NOP
    // 0x2ae42c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ae42cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ae430: 0x41103  sra         $v0, $a0, 4
    ctx->pc = 0x2ae430u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2ae434: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ae434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ae438: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE438u;
    {
        const bool branch_taken_0x2ae438 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AE43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE438u;
        // 0x2ae43c: 0x30540003  andi        $s4, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae438) {
            ctx->pc = 0x2AE450u;
            goto label_2ae450;
        }
    }
    ctx->pc = 0x2AE440u;
    // 0x2ae440: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ae440u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ae444: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ae444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ae448: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AE448u;
    {
        const bool branch_taken_0x2ae448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae448) {
            ctx->pc = 0x2AE468u;
            goto label_2ae468;
        }
    }
    ctx->pc = 0x2AE450u;
label_2ae450:
    // 0x2ae450: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ae450u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ae454: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2ae454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2ae458: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ae458u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ae45c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ae45cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ae460: 0x0  nop
    ctx->pc = 0x2ae460u;
    // NOP
    // 0x2ae464: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ae464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ae468:
    // 0x2ae468: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2ae468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2ae46c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2ae46cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ae470: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x2ae470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x2ae474: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ae474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae478: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae47c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ae47cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae480: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x2AE480u;
    SET_GPR_U32(ctx, 31, 0x2AE488u);
    ctx->pc = 0x2AE484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE480u;
    // 0x2ae484: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x2AE480u, 0x2AE488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE488u;
label_2ae488:
    // 0x2ae488: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ae488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae48c: 0xc048296  jal         func_120A58
    ctx->pc = 0x2AE48Cu;
    SET_GPR_U32(ctx, 31, 0x2AE494u);
    ctx->pc = 0x2AE490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE48Cu;
    // 0x2ae490: 0x278585b4  addiu       $a1, $gp, -0x7A4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935988));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A58u, 0x2AE48Cu, 0x2AE494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE494u;
label_2ae494:
    // 0x2ae494: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2ae494u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ae498: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2ae498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2ae49c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2AE49Cu;
    {
        const bool branch_taken_0x2ae49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae49c) {
            ctx->pc = 0x2AE4D8u;
            goto label_2ae4d8;
        }
    }
    ctx->pc = 0x2AE4A4u;
    // 0x2ae4a4: 0x0  nop
    ctx->pc = 0x2ae4a4u;
    // NOP
label_2ae4a8:
    // 0x2ae4a8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2ae4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2ae4ac: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x2ae4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x2ae4b0: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AE4B0u;
    SET_GPR_U32(ctx, 31, 0x2AE4B8u);
    ctx->pc = 0x2AE4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE4B0u;
    // 0x2ae4b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AE4B0u, 0x2AE4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE4B8u;
label_2ae4b8:
    // 0x2ae4b8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ae4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae4bc: 0xc048296  jal         func_120A58
    ctx->pc = 0x2AE4BCu;
    SET_GPR_U32(ctx, 31, 0x2AE4C4u);
    ctx->pc = 0x2AE4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE4BCu;
    // 0x2ae4c0: 0x278585b4  addiu       $a1, $gp, -0x7A4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935988));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A58u, 0x2AE4BCu, 0x2AE4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE4C4u;
label_2ae4c4:
    // 0x2ae4c4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2ae4c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ae4c8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2ae4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2ae4cc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2AE4CCu;
    {
        const bool branch_taken_0x2ae4cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae4cc) {
            ctx->pc = 0x2AE4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae4a8;
        }
    }
    ctx->pc = 0x2AE4D4u;
    // 0x2ae4d4: 0x0  nop
    ctx->pc = 0x2ae4d4u;
    // NOP
label_2ae4d8:
    // 0x2ae4d8: 0x8f8385b4  lw          $v1, -0x7A4C($gp)
    ctx->pc = 0x2ae4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935988)));
    // 0x2ae4dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE4DCu;
    {
        const bool branch_taken_0x2ae4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae4dc) {
            ctx->pc = 0x2AE4F0u;
            goto label_2ae4f0;
        }
    }
    ctx->pc = 0x2AE4E4u;
    // 0x2ae4e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE4E4u;
    {
        const bool branch_taken_0x2ae4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4E4u;
        // 0x2ae4e8: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae4e4) {
            ctx->pc = 0x2AE508u;
            goto label_2ae508;
        }
    }
    ctx->pc = 0x2AE4ECu;
    // 0x2ae4ec: 0x0  nop
    ctx->pc = 0x2ae4ecu;
    // NOP
label_2ae4f0:
    // 0x2ae4f0: 0x8f8385b0  lw          $v1, -0x7A50($gp)
    ctx->pc = 0x2ae4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x2ae4f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ae4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae4f8: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x2ae4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x2ae4fc: 0x2831824  and         $v1, $s4, $v1
    ctx->pc = 0x2ae4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
    // 0x2ae500: 0x146000d7  bnez        $v1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x2AE500u;
    {
        const bool branch_taken_0x2ae500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae500) {
            ctx->pc = 0x2AE860u;
            goto label_2ae860;
        }
    }
    ctx->pc = 0x2AE508u;
label_2ae508:
    // 0x2ae508: 0x3c024870  lui         $v0, 0x4870
    ctx->pc = 0x2ae508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18544 << 16));
    // 0x2ae50c: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x2ae50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae510: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ae510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae514: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ae514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ae518: 0x3c11001e  lui         $s1, 0x1E
    ctx->pc = 0x2ae518u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)30 << 16));
    // 0x2ae51c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ae51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae520: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2ae520u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae528: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ae528u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ae52c: 0x0  nop
    ctx->pc = 0x2ae52cu;
    // NOP
    // 0x2ae530: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ae530u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ae534: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x2ae534u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x2ae538: 0x16820002  bne         $s4, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE538u;
    {
        const bool branch_taken_0x2ae538 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE538u;
        // 0x2ae53c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae538) {
            ctx->pc = 0x2AE544u;
            goto label_2ae544;
        }
    }
    ctx->pc = 0x2AE540u;
    // 0x2ae540: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2ae540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2ae544:
    // 0x2ae544: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2ae544u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ae548: 0x171040  sll         $v0, $s7, 1
    ctx->pc = 0x2ae548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x2ae54c: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x2ae54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2ae550: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x2ae550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x2ae554: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2ae554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2ae558: 0x312c0  sll         $v0, $v1, 11
    ctx->pc = 0x2ae558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x2ae55c: 0x2f303  sra         $fp, $v0, 12
    ctx->pc = 0x2ae55cu;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 12));
label_2ae560:
    // 0x2ae560: 0x2e610008  sltiu       $at, $s3, 0x8
    ctx->pc = 0x2ae560u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2ae564: 0x10200088  beqz        $at, . + 4 + (0x88 << 2)
    ctx->pc = 0x2AE564u;
    {
        const bool branch_taken_0x2ae564 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE564u;
        // 0x2ae568: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae564) {
            ctx->pc = 0x2AE788u;
            goto label_2ae788;
        }
    }
    ctx->pc = 0x2AE56Cu;
    // 0x2ae56c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2ae56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2ae570: 0x246372e0  addiu       $v1, $v1, 0x72E0
    ctx->pc = 0x2ae570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29408));
    // 0x2ae574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ae574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae578: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ae578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ae57c: 0x400008  jr          $v0
    ctx->pc = 0x2AE57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AE588u: goto label_2ae588;
            case 0x2AE5A0u: goto label_2ae5a0;
            case 0x2AE5D8u: goto label_2ae5d8;
            case 0x2AE5E8u: goto label_2ae5e8;
            case 0x2AE6E0u: goto label_2ae6e0;
            case 0x2AE770u: goto label_2ae770;
            case 0x2AE778u: goto label_2ae778;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE57Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2AE584u;
    // 0x2ae584: 0x0  nop
    ctx->pc = 0x2ae584u;
    // NOP
label_2ae588:
    // 0x2ae588: 0x3c11001e  lui         $s1, 0x1E
    ctx->pc = 0x2ae588u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)30 << 16));
    // 0x2ae58c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ae58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae590: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x2ae590u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae594: 0x3c120008  lui         $s2, 0x8
    ctx->pc = 0x2ae594u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)8 << 16));
    // 0x2ae598: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ae598u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ae59c: 0x0  nop
    ctx->pc = 0x2ae59cu;
    // NOP
label_2ae5a0:
    // 0x2ae5a0: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x2AE5A0u;
    SET_GPR_U32(ctx, 31, 0x2AE5A8u);
    ctx->pc = 0x2AE5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE5A0u;
    // 0x2ae5a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x2AE5A0u, 0x2AE5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE5A8u;
label_2ae5a8:
    // 0x2ae5a8: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2AE5A8u;
    {
        const bool branch_taken_0x2ae5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5A8u;
        // 0x2ae5ac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae5a8) {
            ctx->pc = 0x2AE788u;
            goto label_2ae788;
        }
    }
    ctx->pc = 0x2AE5B0u;
    // 0x2ae5b0: 0xc048296  jal         func_120A58
    ctx->pc = 0x2AE5B0u;
    SET_GPR_U32(ctx, 31, 0x2AE5B8u);
    ctx->pc = 0x2AE5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE5B0u;
    // 0x2ae5b4: 0x278585b4  addiu       $a1, $gp, -0x7A4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935988));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A58u, 0x2AE5B0u, 0x2AE5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE5B8u;
label_2ae5b8:
    // 0x2ae5b8: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2AE5B8u;
    {
        const bool branch_taken_0x2ae5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae5b8) {
            ctx->pc = 0x2AE788u;
            goto label_2ae788;
        }
    }
    ctx->pc = 0x2AE5C0u;
    // 0x2ae5c0: 0x8f8385b4  lw          $v1, -0x7A4C($gp)
    ctx->pc = 0x2ae5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935988)));
    // 0x2ae5c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae5c8: 0x1462006f  bne         $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2AE5C8u;
    {
        const bool branch_taken_0x2ae5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ae5c8) {
            ctx->pc = 0x2AE788u;
            goto label_2ae788;
        }
    }
    ctx->pc = 0x2AE5D0u;
    // 0x2ae5d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ae5d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ae5d4: 0x0  nop
    ctx->pc = 0x2ae5d4u;
    // NOP
label_2ae5d8:
    // 0x2ae5d8: 0x3c11001e  lui         $s1, 0x1E
    ctx->pc = 0x2ae5d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)30 << 16));
    // 0x2ae5dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ae5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae5e0: 0x2415000a  addiu       $s5, $zero, 0xA
    ctx->pc = 0x2ae5e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ae5e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ae5e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2ae5e8:
    // 0x2ae5e8: 0x25e9023  subu        $s2, $s2, $fp
    ctx->pc = 0x2ae5e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x2ae5ec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2ae5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2ae5f0: 0x241082a  slt         $at, $s2, $at
    ctx->pc = 0x2ae5f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x2ae5f4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE5F4u;
    {
        const bool branch_taken_0x2ae5f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae5f4) {
            ctx->pc = 0x2AE600u;
            goto label_2ae600;
        }
    }
    ctx->pc = 0x2AE5FCu;
    // 0x2ae5fc: 0x3c120008  lui         $s2, 0x8
    ctx->pc = 0x2ae5fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)8 << 16));
label_2ae600:
    // 0x2ae600: 0xc048072  jal         func_1201C8
    ctx->pc = 0x2AE600u;
    SET_GPR_U32(ctx, 31, 0x2AE608u);
    ctx->pc = 0x2AE604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE600u;
    // 0x2ae604: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1201C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1201C8u, 0x2AE600u, 0x2AE608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE608u;
label_2ae608:
    // 0x2ae608: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2ae608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ae60c: 0x1043005e  beq         $v0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x2AE60Cu;
    {
        const bool branch_taken_0x2ae60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ae60c) {
            ctx->pc = 0x2AE788u;
            goto label_2ae788;
        }
    }
    ctx->pc = 0x2AE614u;
    // 0x2ae614: 0xc0481a6  jal         func_120698
    ctx->pc = 0x2AE614u;
    SET_GPR_U32(ctx, 31, 0x2AE61Cu);
    ctx->pc = 0x120698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120698u, 0x2AE614u, 0x2AE61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE61Cu;
label_2ae61c:
    // 0x2ae61c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2ae61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ae620: 0x10430027  beq         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2AE620u;
    {
        const bool branch_taken_0x2ae620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AE624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE620u;
        // 0x2ae624: 0x240300fe  addiu       $v1, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae620) {
            ctx->pc = 0x2AE6C0u;
            goto label_2ae6c0;
        }
    }
    ctx->pc = 0x2AE628u;
    // 0x2ae628: 0x10430025  beq         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2AE628u;
    {
        const bool branch_taken_0x2ae628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ae628) {
            ctx->pc = 0x2AE6C0u;
            goto label_2ae6c0;
        }
    }
    ctx->pc = 0x2AE630u;
    // 0x2ae630: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x2ae630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x2ae634: 0x10430022  beq         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2AE634u;
    {
        const bool branch_taken_0x2ae634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AE638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE634u;
        // 0x2ae638: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae634) {
            ctx->pc = 0x2AE6C0u;
            goto label_2ae6c0;
        }
    }
    ctx->pc = 0x2AE63Cu;
    // 0x2ae63c: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2AE63Cu;
    {
        const bool branch_taken_0x2ae63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ae63c) {
            ctx->pc = 0x2AE6C0u;
            goto label_2ae6c0;
        }
    }
    ctx->pc = 0x2AE644u;
    // 0x2ae644: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2ae644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2ae648: 0x1043001d  beq         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2AE648u;
    {
        const bool branch_taken_0x2ae648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE648u;
        // 0x2ae64c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae648) {
            ctx->pc = 0x2AE6C0u;
            goto label_2ae6c0;
        }
    }
    ctx->pc = 0x2AE650u;
    // 0x2ae650: 0x1044001b  beq         $v0, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2AE650u;
    {
        const bool branch_taken_0x2ae650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2AE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE650u;
        // 0x2ae654: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae650) {
            ctx->pc = 0x2AE6C0u;
            goto label_2ae6c0;
        }
    }
    ctx->pc = 0x2AE658u;
    // 0x2ae658: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2AE658u;
    {
        const bool branch_taken_0x2ae658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ae658) {
            ctx->pc = 0x2AE6C0u;
            goto label_2ae6c0;
        }
    }
    ctx->pc = 0x2AE660u;
    // 0x2ae660: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2ae660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2ae664: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2AE664u;
    {
        const bool branch_taken_0x2ae664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ae664) {
            ctx->pc = 0x2AE6C0u;
            goto label_2ae6c0;
        }
    }
    ctx->pc = 0x2AE66Cu;
    // 0x2ae66c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AE66Cu;
    {
        const bool branch_taken_0x2ae66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE66Cu;
        // 0x2ae670: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae66c) {
            ctx->pc = 0x2AE6A0u;
            goto label_2ae6a0;
        }
    }
    ctx->pc = 0x2AE674u;
    // 0x2ae674: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE674u;
    {
        const bool branch_taken_0x2ae674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ae674) {
            ctx->pc = 0x2AE698u;
            goto label_2ae698;
        }
    }
    ctx->pc = 0x2AE67Cu;
    // 0x2ae67c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ae67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae680: 0x10430041  beq         $v0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2AE680u;
    {
        const bool branch_taken_0x2ae680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE680u;
        // 0x2ae684: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae680) {
            ctx->pc = 0x2AE788u;
            goto label_2ae788;
        }
    }
    ctx->pc = 0x2AE688u;
    // 0x2ae688: 0x1043003f  beq         $v0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2AE688u;
    {
        const bool branch_taken_0x2ae688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ae688) {
            ctx->pc = 0x2AE788u;
            goto label_2ae788;
        }
    }
    ctx->pc = 0x2AE690u;
    // 0x2ae690: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2AE690u;
    {
        const bool branch_taken_0x2ae690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae690) {
            ctx->pc = 0x2AE6C0u;
            goto label_2ae6c0;
        }
    }
    ctx->pc = 0x2AE698u;
label_2ae698:
    // 0x2ae698: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2AE698u;
    {
        const bool branch_taken_0x2ae698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE698u;
        // 0x2ae69c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae698) {
            ctx->pc = 0x2AE788u;
            goto label_2ae788;
        }
    }
    ctx->pc = 0x2AE6A0u;
label_2ae6a0:
    // 0x2ae6a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae6a4: 0x16820002  bne         $s4, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE6A4u;
    {
        const bool branch_taken_0x2ae6a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ae6a4) {
            ctx->pc = 0x2AE6B0u;
            goto label_2ae6b0;
        }
    }
    ctx->pc = 0x2AE6ACu;
    // 0x2ae6ac: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2ae6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2ae6b0:
    // 0x2ae6b0: 0x309600ff  andi        $s6, $a0, 0xFF
    ctx->pc = 0x2ae6b0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ae6b4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2AE6B4u;
    {
        const bool branch_taken_0x2ae6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6B4u;
        // 0x2ae6b8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae6b4) {
            ctx->pc = 0x2AE788u;
            goto label_2ae788;
        }
    }
    ctx->pc = 0x2AE6BCu;
    // 0x2ae6bc: 0x0  nop
    ctx->pc = 0x2ae6bcu;
    // NOP
label_2ae6c0:
    // 0x2ae6c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae6c4: 0x16820002  bne         $s4, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE6C4u;
    {
        const bool branch_taken_0x2ae6c4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6C4u;
        // 0x2ae6c8: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae6c4) {
            ctx->pc = 0x2AE6D0u;
            goto label_2ae6d0;
        }
    }
    ctx->pc = 0x2AE6CCu;
    // 0x2ae6cc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2ae6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2ae6d0:
    // 0x2ae6d0: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2ae6d0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ae6d4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2AE6D4u;
    {
        const bool branch_taken_0x2ae6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6D4u;
        // 0x2ae6d8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae6d4) {
            ctx->pc = 0x2AE788u;
            goto label_2ae788;
        }
    }
    ctx->pc = 0x2AE6DCu;
    // 0x2ae6dc: 0x0  nop
    ctx->pc = 0x2ae6dcu;
    // NOP
label_2ae6e0:
    // 0x2ae6e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ae6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ae6e4: 0x1682000e  bne         $s4, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2AE6E4u;
    {
        const bool branch_taken_0x2ae6e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6E4u;
        // 0x2ae6e8: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae6e4) {
            ctx->pc = 0x2AE720u;
            goto label_2ae720;
        }
    }
    ctx->pc = 0x2AE6ECu;
    // 0x2ae6ec: 0xc054e00  jal         func_153800
    ctx->pc = 0x2AE6ECu;
    SET_GPR_U32(ctx, 31, 0x2AE6F4u);
    ctx->pc = 0x2AE6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE6ECu;
    // 0x2ae6f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153800u, 0x2AE6ECu, 0x2AE6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE6F4u;
label_2ae6f4:
    // 0x2ae6f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE6F4u;
    {
        const bool branch_taken_0x2ae6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6F4u;
        // 0x2ae6f8: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae6f4) {
            ctx->pc = 0x2AE710u;
            goto label_2ae710;
        }
    }
    ctx->pc = 0x2AE6FCu;
    // 0x2ae6fc: 0xc054e00  jal         func_153800
    ctx->pc = 0x2AE6FCu;
    SET_GPR_U32(ctx, 31, 0x2AE704u);
    ctx->pc = 0x2AE700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE6FCu;
    // 0x2ae700: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153800u, 0x2AE6FCu, 0x2AE704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE704u;
label_2ae704:
    // 0x2ae704: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE704u;
    {
        const bool branch_taken_0x2ae704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae704) {
            ctx->pc = 0x2AE720u;
            goto label_2ae720;
        }
    }
    ctx->pc = 0x2AE70Cu;
    // 0x2ae70c: 0x0  nop
    ctx->pc = 0x2ae70cu;
    // NOP
label_2ae710:
    // 0x2ae710: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2ae710u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae714: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2AE714u;
    {
        const bool branch_taken_0x2ae714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE714u;
        // 0x2ae718: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae714) {
            ctx->pc = 0x2AE788u;
            goto label_2ae788;
        }
    }
    ctx->pc = 0x2AE71Cu;
    // 0x2ae71c: 0x0  nop
    ctx->pc = 0x2ae71cu;
    // NOP
label_2ae720:
    // 0x2ae720: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ae720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ae724: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x2ae724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x2ae728: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ae728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ae72c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ae72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ae730: 0xc054e00  jal         func_153800
    ctx->pc = 0x2AE730u;
    SET_GPR_U32(ctx, 31, 0x2AE738u);
    ctx->pc = 0x2AE734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE730u;
    // 0x2ae734: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153800u, 0x2AE730u, 0x2AE738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE738u;
label_2ae738:
    // 0x2ae738: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE738u;
    {
        const bool branch_taken_0x2ae738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae738) {
            ctx->pc = 0x2AE750u;
            goto label_2ae750;
        }
    }
    ctx->pc = 0x2AE740u;
    // 0x2ae740: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2ae740u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae744: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2AE744u;
    {
        const bool branch_taken_0x2ae744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE744u;
        // 0x2ae748: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae744) {
            ctx->pc = 0x2AE788u;
            goto label_2ae788;
        }
    }
    ctx->pc = 0x2AE74Cu;
    // 0x2ae74c: 0x0  nop
    ctx->pc = 0x2ae74cu;
    // NOP
label_2ae750:
    // 0x2ae750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae754: 0x16820002  bne         $s4, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE754u;
    {
        const bool branch_taken_0x2ae754 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE754u;
        // 0x2ae758: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae754) {
            ctx->pc = 0x2AE760u;
            goto label_2ae760;
        }
    }
    ctx->pc = 0x2AE75Cu;
    // 0x2ae75c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2ae75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2ae760:
    // 0x2ae760: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2ae760u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ae764: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE764u;
    {
        const bool branch_taken_0x2ae764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE764u;
        // 0x2ae768: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae764) {
            ctx->pc = 0x2AE788u;
            goto label_2ae788;
        }
    }
    ctx->pc = 0x2AE76Cu;
    // 0x2ae76c: 0x0  nop
    ctx->pc = 0x2ae76cu;
    // NOP
label_2ae770:
    // 0x2ae770: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE770u;
    {
        const bool branch_taken_0x2ae770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE770u;
        // 0x2ae774: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae770) {
            ctx->pc = 0x2AE788u;
            goto label_2ae788;
        }
    }
    ctx->pc = 0x2AE778u;
label_2ae778:
    // 0x2ae778: 0xc054e34  jal         func_1538D0
    ctx->pc = 0x2AE778u;
    SET_GPR_U32(ctx, 31, 0x2AE780u);
    ctx->pc = 0x2AE77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE778u;
    // 0x2ae77c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1538D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1538D0u, 0x2AE778u, 0x2AE780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE780u;
label_2ae780:
    // 0x2ae780: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2ae780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ae784: 0x0  nop
    ctx->pc = 0x2ae784u;
    // NOP
label_2ae788:
    // 0x2ae788: 0x12a0002d  beqz        $s5, . + 4 + (0x2D << 2)
    ctx->pc = 0x2AE788u;
    {
        const bool branch_taken_0x2ae788 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE788u;
        // 0x2ae78c: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae788) {
            ctx->pc = 0x2AE840u;
            goto label_2ae840;
        }
    }
    ctx->pc = 0x2AE790u;
    // 0x2ae790: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2ae790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2ae794: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x2ae794u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ae798: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE798u;
    {
        const bool branch_taken_0x2ae798 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2ae798) {
            ctx->pc = 0x2AE7A8u;
            goto label_2ae7a8;
        }
    }
    ctx->pc = 0x2AE7A0u;
    // 0x2ae7a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE7A0u;
    {
        const bool branch_taken_0x2ae7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE7A0u;
        // 0x2ae7a4: 0x31023  negu        $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae7a0) {
            ctx->pc = 0x2AE7ACu;
            goto label_2ae7ac;
        }
    }
    ctx->pc = 0x2AE7A8u;
label_2ae7a8:
    // 0x2ae7a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ae7a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ae7ac:
    // 0x2ae7ac: 0x28410200  slti        $at, $v0, 0x200
    ctx->pc = 0x2ae7acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x2ae7b0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE7B0u;
    {
        const bool branch_taken_0x2ae7b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae7b0) {
            ctx->pc = 0x2AE7C8u;
            goto label_2ae7c8;
        }
    }
    ctx->pc = 0x2AE7B8u;
    // 0x2ae7b8: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2ae7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2ae7bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ae7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae7c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ae7c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae7c4: 0x34514000  ori         $s1, $v0, 0x4000
    ctx->pc = 0x2ae7c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_2ae7c8:
    // 0x2ae7c8: 0x24020334  addiu       $v0, $zero, 0x334
    ctx->pc = 0x2ae7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x2ae7cc: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2ae7ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ae7d0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2ae7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2ae7d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae7d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae7d8: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2ae7d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ae7dc: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2ae7dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2ae7e0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2ae7e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae7e4: 0x24020e66  addiu       $v0, $zero, 0xE66
    ctx->pc = 0x2ae7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3686));
    // 0x2ae7e8: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x2ae7e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x2ae7ec: 0x72021818  mult1       $v1, $s0, $v0
    ctx->pc = 0x2ae7ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ae7f0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2ae7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2ae7f4: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x2ae7f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x2ae7f8: 0x244272d0  addiu       $v0, $v0, 0x72D0
    ctx->pc = 0x2ae7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29392));
    // 0x2ae7fc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2ae7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2ae800: 0x121303  sra         $v0, $s2, 12
    ctx->pc = 0x2ae800u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 12));
    // 0x2ae804: 0xffb50008  sd          $s5, 0x8($sp)
    ctx->pc = 0x2ae804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 21));
    // 0x2ae808: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x2ae808u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ae80c: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x2ae80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ae810: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x2ae810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ae814: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2ae814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2ae818: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2ae818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2ae81c: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x2ae81cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x2ae820: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2ae820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ae824: 0x2171018  mult        $v0, $s0, $s7
    ctx->pc = 0x2ae824u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ae828: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x2ae828u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x2ae82c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2ae82cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ae830: 0x111303  sra         $v0, $s1, 12
    ctx->pc = 0x2ae830u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 12));
    // 0x2ae834: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2AE834u;
    SET_GPR_U32(ctx, 31, 0x2AE83Cu);
    ctx->pc = 0x2AE838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE834u;
    // 0x2ae838: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2AE834u, 0x2AE83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE83Cu;
label_2ae83c:
    // 0x2ae83c: 0x0  nop
    ctx->pc = 0x2ae83cu;
    // NOP
label_2ae840:
    // 0x2ae840: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2ae840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2ae844: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x2ae844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x2ae848: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AE848u;
    SET_GPR_U32(ctx, 31, 0x2AE850u);
    ctx->pc = 0x2AE84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE848u;
    // 0x2ae84c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AE848u, 0x2AE850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE850u;
label_2ae850:
    // 0x2ae850: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ae850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ae854: 0x1663ff42  bne         $s3, $v1, . + 4 + (-0xBE << 2)
    ctx->pc = 0x2AE854u;
    {
        const bool branch_taken_0x2ae854 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ae854) {
            ctx->pc = 0x2AE560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae560;
        }
    }
    ctx->pc = 0x2AE85Cu;
    // 0x2ae85c: 0x0  nop
    ctx->pc = 0x2ae85cu;
    // NOP
label_2ae860:
    // 0x2ae860: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2ae860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ae864: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2ae864u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ae868: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2ae868u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ae86c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2ae86cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ae870: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ae870u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ae874: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ae874u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ae878: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ae878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae87c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ae87cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae880: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ae880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae884: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ae884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae888: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE888u;
        // 0x2ae88c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE890u;
}
