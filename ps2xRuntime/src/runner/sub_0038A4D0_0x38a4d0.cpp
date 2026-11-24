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

// Function: sub_0038A4D0
// Address: 0x38a4d0 - 0x38a698
void sub_0038A4D0_0x38a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A4D0_0x38a4d0");
#endif

    switch (ctx->pc) {
        case 0x38a528u: goto label_38a528;
        case 0x38a538u: goto label_38a538;
        case 0x38a644u: goto label_38a644;
        case 0x38a658u: goto label_38a658;
        case 0x38a678u: goto label_38a678;
        default: break;
    }

    ctx->pc = 0x38a4d0u;

    // 0x38a4d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38a4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38a4d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38a4d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38a4dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38a4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38a4e0: 0x90850118  lbu         $a1, 0x118($a0)
    ctx->pc = 0x38a4e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x38a4e4: 0x10a30062  beq         $a1, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x38A4E4u;
    {
        const bool branch_taken_0x38a4e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x38A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A4E4u;
        // 0x38a4e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a4e4) {
            ctx->pc = 0x38A670u;
            goto label_38a670;
        }
    }
    ctx->pc = 0x38A4ECu;
    // 0x38a4ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38a4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a4f0: 0x10a30057  beq         $a1, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x38A4F0u;
    {
        const bool branch_taken_0x38a4f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38a4f0) {
            ctx->pc = 0x38A650u;
            goto label_38a650;
        }
    }
    ctx->pc = 0x38A4F8u;
    // 0x38a4f8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38A4F8u;
    {
        const bool branch_taken_0x38a4f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a4f8) {
            ctx->pc = 0x38A508u;
            goto label_38a508;
        }
    }
    ctx->pc = 0x38A500u;
    // 0x38a500: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x38A500u;
    {
        const bool branch_taken_0x38a500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a500) {
            ctx->pc = 0x38A688u;
            goto label_38a688;
        }
    }
    ctx->pc = 0x38A508u;
label_38a508:
    // 0x38a508: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x38a508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x38a50c: 0x2463c750  addiu       $v1, $v1, -0x38B0
    ctx->pc = 0x38a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952784));
    // 0x38a510: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x38a510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x38a514: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x38a514u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x65C750u));
    // 0x38a518: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x38a518u;
    { uint32_t bits = FAST_READ32(0x65C758u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38a51c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x38a51cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x38a520: 0xc0e2e4c  jal         func_38B930
    ctx->pc = 0x38A520u;
    SET_GPR_U32(ctx, 31, 0x38A528u);
    ctx->pc = 0x38A524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A520u;
    // 0x38a524: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B930u, 0x38A520u, 0x38A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A528u;
label_38a528:
    // 0x38a528: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x38a528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x38a52c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38a52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x38a530: 0xc0e2d3c  jal         func_38B4F0
    ctx->pc = 0x38A530u;
    SET_GPR_U32(ctx, 31, 0x38A538u);
    ctx->pc = 0x38A534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A530u;
    // 0x38a534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B4F0u, 0x38A530u, 0x38A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A538u;
label_38a538:
    // 0x38a538: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38A538u;
    {
        const bool branch_taken_0x38a538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A538u;
        // 0x38a53c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a538) {
            ctx->pc = 0x38A548u;
            goto label_38a548;
        }
    }
    ctx->pc = 0x38A540u;
    // 0x38a540: 0xa2030118  sb          $v1, 0x118($s0)
    ctx->pc = 0x38a540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
    // 0x38a544: 0xa2000119  sb          $zero, 0x119($s0)
    ctx->pc = 0x38a544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 0));
label_38a548:
    // 0x38a548: 0x86032aca  lh          $v1, 0x2ACA($s0)
    ctx->pc = 0x38a548u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10954)));
    // 0x38a54c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x38a550: 0xa6032aca  sh          $v1, 0x2ACA($s0)
    ctx->pc = 0x38a550u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10954), (uint16_t)GPR_U32(ctx, 3));
    // 0x38a554: 0x86032aca  lh          $v1, 0x2ACA($s0)
    ctx->pc = 0x38a554u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10954)));
    // 0x38a558: 0x1c60004b  bgtz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x38A558u;
    {
        const bool branch_taken_0x38a558 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x38a558) {
            ctx->pc = 0x38A688u;
            goto label_38a688;
        }
    }
    ctx->pc = 0x38A560u;
    // 0x38a560: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x38a560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38a564: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x38a564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x38a568: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x38a568u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F004u));
    // 0x38a56c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x38a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x38a570: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38a570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38a574: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x38a574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x38a578: 0x3444a9e5  ori         $a0, $v0, 0xA9E5
    ctx->pc = 0x38a578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x38a57c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x38a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x38a580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38a580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38a584: 0x0  nop
    ctx->pc = 0x38a584u;
    // NOP
    // 0x38a588: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38a588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38a58c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x38a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x38a590: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x38a590u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x38a594: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x38a594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38a598: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x38a598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x38a59c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38a5a0: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x38a5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x38a5a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38a5a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38a5a8: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x38a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x38a5ac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38A5ACu;
    {
        const bool branch_taken_0x38a5ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5ACu;
        // 0x38a5b0: 0x22202  srl         $a0, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a5ac) {
            ctx->pc = 0x38A5C4u;
            goto label_38a5c4;
        }
    }
    ctx->pc = 0x38A5B4u;
    // 0x38a5b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38a5b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38a5b8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x38a5b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x38a5bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38A5BCu;
    {
        const bool branch_taken_0x38a5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5BCu;
        // 0x38a5c0: 0x83001b  divu        $zero, $a0, $v1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a5bc) {
            ctx->pc = 0x38A5E0u;
            goto label_38a5e0;
        }
    }
    ctx->pc = 0x38A5C4u;
label_38a5c4:
    // 0x38a5c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38a5c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38a5c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38a5cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38a5ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38a5d0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x38a5d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x38a5d4: 0x0  nop
    ctx->pc = 0x38a5d4u;
    // NOP
    // 0x38a5d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38a5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x38a5dc: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x38a5dcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_38a5e0:
    // 0x38a5e0: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x38a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x38a5e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38a5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38a5e8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x38a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x38a5ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38a5ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38a5f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38a5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38a5f4: 0x0  nop
    ctx->pc = 0x38a5f4u;
    // NOP
    // 0x38a5f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38a5f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38a5fc: 0x2010  mfhi        $a0
    ctx->pc = 0x38a5fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x38a600: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38A600u;
    {
        const bool branch_taken_0x38a600 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38a600) {
            ctx->pc = 0x38A618u;
            goto label_38a618;
        }
    }
    ctx->pc = 0x38A608u;
    // 0x38a608: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38a608u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38a60c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x38a60cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x38a610: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38A610u;
    {
        const bool branch_taken_0x38a610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A610u;
        // 0x38a614: 0x641021  addu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a610) {
            ctx->pc = 0x38A634u;
            goto label_38a634;
        }
    }
    ctx->pc = 0x38A618u;
label_38a618:
    // 0x38a618: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38a618u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38a61c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38a620: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38a620u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38a624: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x38a624u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x38a628: 0x0  nop
    ctx->pc = 0x38a628u;
    // NOP
    // 0x38a62c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38a62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x38a630: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x38a630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38a634:
    // 0x38a634: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38a634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a63c: 0xc0d0548  jal         func_341520
    ctx->pc = 0x38A63Cu;
    SET_GPR_U32(ctx, 31, 0x38A644u);
    ctx->pc = 0x38A640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A63Cu;
    // 0x38a640: 0xa6022aca  sh          $v0, 0x2ACA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10954), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341520u, 0x38A63Cu, 0x38A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A644u;
label_38a644:
    // 0x38a644: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x38A644u;
    {
        const bool branch_taken_0x38a644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a644) {
            ctx->pc = 0x38A688u;
            goto label_38a688;
        }
    }
    ctx->pc = 0x38A64Cu;
    // 0x38a64c: 0x0  nop
    ctx->pc = 0x38a64cu;
    // NOP
label_38a650:
    // 0x38a650: 0xc0e29a8  jal         func_38A6A0
    ctx->pc = 0x38A650u;
    SET_GPR_U32(ctx, 31, 0x38A658u);
    ctx->pc = 0x38A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A6A0u, 0x38A650u, 0x38A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A658u;
label_38a658:
    // 0x38a658: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x38A658u;
    {
        const bool branch_taken_0x38a658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A658u;
        // 0x38a65c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a658) {
            ctx->pc = 0x38A688u;
            goto label_38a688;
        }
    }
    ctx->pc = 0x38A660u;
    // 0x38a660: 0xa2030118  sb          $v1, 0x118($s0)
    ctx->pc = 0x38a660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
    // 0x38a664: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38A664u;
    {
        const bool branch_taken_0x38a664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A664u;
        // 0x38a668: 0xa2000119  sb          $zero, 0x119($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a664) {
            ctx->pc = 0x38A688u;
            goto label_38a688;
        }
    }
    ctx->pc = 0x38A66Cu;
    // 0x38a66c: 0x0  nop
    ctx->pc = 0x38a66cu;
    // NOP
label_38a670:
    // 0x38a670: 0xc0e2d60  jal         func_38B580
    ctx->pc = 0x38A670u;
    SET_GPR_U32(ctx, 31, 0x38A678u);
    ctx->pc = 0x38B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B580u, 0x38A670u, 0x38A678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A678u;
label_38a678:
    // 0x38a678: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38A678u;
    {
        const bool branch_taken_0x38a678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a678) {
            ctx->pc = 0x38A688u;
            goto label_38a688;
        }
    }
    ctx->pc = 0x38A680u;
    // 0x38a680: 0xa2000118  sb          $zero, 0x118($s0)
    ctx->pc = 0x38a680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 0));
    // 0x38a684: 0xa2000119  sb          $zero, 0x119($s0)
    ctx->pc = 0x38a684u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 0));
label_38a688:
    // 0x38a688: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a68c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38a68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a690: 0x3e00008  jr          $ra
    ctx->pc = 0x38A690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A690u;
        // 0x38a694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A698u;
}
