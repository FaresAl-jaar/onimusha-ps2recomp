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

// Function: sub_0013B340
// Address: 0x13b340 - 0x13b590
void sub_0013B340_0x13b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B340_0x13b340");
#endif

    switch (ctx->pc) {
        case 0x13b43cu: goto label_13b43c;
        case 0x13b470u: goto label_13b470;
        case 0x13b490u: goto label_13b490;
        case 0x13b550u: goto label_13b550;
        default: break;
    }

    ctx->pc = 0x13b340u;

    // 0x13b340: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x13b340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b344: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x13b344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x13b348: 0x94246ad2  lhu         $a0, 0x6AD2($at)
    ctx->pc = 0x13b348u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AD2u));
    // 0x13b34c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b34cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13b350: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13b350u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13b354: 0x0  nop
    ctx->pc = 0x13b354u;
    // NOP
    // 0x13b358: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x13b358u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13b35c: 0x0  nop
    ctx->pc = 0x13b35cu;
    // NOP
    // 0x13b360: 0x0  nop
    ctx->pc = 0x13b360u;
    // NOP
    // 0x13b364: 0x3812  mflo        $a3
    ctx->pc = 0x13b364u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x13b368: 0x28e10008  slti        $at, $a3, 0x8
    ctx->pc = 0x13b368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b36c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13B36Cu;
    {
        const bool branch_taken_0x13b36c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B36Cu;
        // 0x13b370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b36c) {
            ctx->pc = 0x13B378u;
            goto label_13b378;
        }
    }
    ctx->pc = 0x13B374u;
    // 0x13b374: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x13b374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_13b378:
    // 0x13b378: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x13b378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b37c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b37cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13b380: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13b380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13b384: 0x0  nop
    ctx->pc = 0x13b384u;
    // NOP
    // 0x13b388: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x13b388u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13b38c: 0x0  nop
    ctx->pc = 0x13b38cu;
    // NOP
    // 0x13b390: 0x0  nop
    ctx->pc = 0x13b390u;
    // NOP
    // 0x13b394: 0x2812  mflo        $a1
    ctx->pc = 0x13b394u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x13b398: 0x28a10008  slti        $at, $a1, 0x8
    ctx->pc = 0x13b398u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b39c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13B39Cu;
    {
        const bool branch_taken_0x13b39c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b39c) {
            ctx->pc = 0x13B3A8u;
            goto label_13b3a8;
        }
    }
    ctx->pc = 0x13B3A4u;
    // 0x13b3a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x13b3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_13b3a8:
    // 0x13b3a8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x13b3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b3ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b3acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13b3b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13b3b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13b3b4: 0x0  nop
    ctx->pc = 0x13b3b4u;
    // NOP
    // 0x13b3b8: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x13b3b8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13b3bc: 0x0  nop
    ctx->pc = 0x13b3bcu;
    // NOP
    // 0x13b3c0: 0x0  nop
    ctx->pc = 0x13b3c0u;
    // NOP
    // 0x13b3c4: 0x4812  mflo        $t1
    ctx->pc = 0x13b3c4u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x13b3c8: 0x29210008  slti        $at, $t1, 0x8
    ctx->pc = 0x13b3c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b3cc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13B3CCu;
    {
        const bool branch_taken_0x13b3cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b3cc) {
            ctx->pc = 0x13B3D8u;
            goto label_13b3d8;
        }
    }
    ctx->pc = 0x13B3D4u;
    // 0x13b3d4: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x13b3d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_13b3d8:
    // 0x13b3d8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x13b3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b3dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b3dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13b3e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13b3e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13b3e4: 0x0  nop
    ctx->pc = 0x13b3e4u;
    // NOP
    // 0x13b3e8: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x13b3e8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13b3ec: 0x0  nop
    ctx->pc = 0x13b3ecu;
    // NOP
    // 0x13b3f0: 0x0  nop
    ctx->pc = 0x13b3f0u;
    // NOP
    // 0x13b3f4: 0x4012  mflo        $t0
    ctx->pc = 0x13b3f4u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x13b3f8: 0x29010008  slti        $at, $t0, 0x8
    ctx->pc = 0x13b3f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b3fc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13B3FCu;
    {
        const bool branch_taken_0x13b3fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b3fc) {
            ctx->pc = 0x13B408u;
            goto label_13b408;
        }
    }
    ctx->pc = 0x13B404u;
    // 0x13b404: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x13b404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_13b408:
    // 0x13b408: 0xe9082a  slt         $at, $a3, $t1
    ctx->pc = 0x13b408u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x13b40c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B40Cu;
    {
        const bool branch_taken_0x13b40c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B40Cu;
        // 0x13b410: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b40c) {
            ctx->pc = 0x13B420u;
            goto label_13b420;
        }
    }
    ctx->pc = 0x13B414u;
    // 0x13b414: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13B414u;
    {
        const bool branch_taken_0x13b414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b414) {
            ctx->pc = 0x13B428u;
            goto label_13b428;
        }
    }
    ctx->pc = 0x13B41Cu;
    // 0x13b41c: 0x0  nop
    ctx->pc = 0x13b41cu;
    // NOP
label_13b420:
    // 0x13b420: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x13b420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b424: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x13b424u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_13b428:
    // 0x13b428: 0xa8082a  slt         $at, $a1, $t0
    ctx->pc = 0x13b428u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x13b42c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B42Cu;
    {
        const bool branch_taken_0x13b42c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B42Cu;
        // 0x13b430: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b42c) {
            ctx->pc = 0x13B440u;
            goto label_13b440;
        }
    }
    ctx->pc = 0x13B434u;
    // 0x13b434: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13B434u;
    {
        const bool branch_taken_0x13b434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b434) {
            ctx->pc = 0x13B448u;
            goto label_13b448;
        }
    }
    ctx->pc = 0x13B43Cu;
label_13b43c:
    // 0x13b43c: 0x0  nop
    ctx->pc = 0x13b43cu;
    // NOP
label_13b440:
    // 0x13b440: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x13b440u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b444: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x13b444u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13b448:
    // 0x13b448: 0x306bffff  andi        $t3, $v1, 0xFFFF
    ctx->pc = 0x13b448u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13b44c: 0x10b082a  slt         $at, $t0, $t3
    ctx->pc = 0x13b44cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x13b450: 0x1420004d  bnez        $at, . + 4 + (0x4D << 2)
    ctx->pc = 0x13B450u;
    {
        const bool branch_taken_0x13b450 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b450) {
            ctx->pc = 0x13B588u;
            goto label_13b588;
        }
    }
    ctx->pc = 0x13B458u;
    // 0x13b458: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x13b458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x13b45c: 0xb30c0  sll         $a2, $t3, 3
    ctx->pc = 0x13b45cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x13b460: 0x1241823  subu        $v1, $t1, $a0
    ctx->pc = 0x13b460u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x13b464: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x13b464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13b468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b46c: 0x2527fff8  addiu       $a3, $t1, -0x8
    ctx->pc = 0x13b46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
label_13b470:
    // 0x13b470: 0x124082a  slt         $at, $t1, $a0
    ctx->pc = 0x13b470u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13b474: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x13b474u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b478: 0x1420003d  bnez        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x13B478u;
    {
        const bool branch_taken_0x13b478 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B478u;
        // 0x13b47c: 0x80602d  daddu       $t4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b478) {
            ctx->pc = 0x13B570u;
            goto label_13b570;
        }
    }
    ctx->pc = 0x13B480u;
    // 0x13b480: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x13b480u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x13b484: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x13B484u;
    {
        const bool branch_taken_0x13b484 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b484) {
            ctx->pc = 0x13B540u;
            goto label_13b540;
        }
    }
    ctx->pc = 0x13B48Cu;
    // 0x13b48c: 0x0  nop
    ctx->pc = 0x13b48cu;
    // NOP
label_13b490:
    // 0x13b490: 0x1866021  addu        $t4, $t4, $a2
    ctx->pc = 0x13b490u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x13b494: 0x1836814  dsllv       $t5, $v1, $t4
    ctx->pc = 0x13b494u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x13b498: 0x254c0001  addiu       $t4, $t2, 0x1
    ctx->pc = 0x13b498u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x13b49c: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x13b49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x13b4a0: 0x318cffff  andi        $t4, $t4, 0xFFFF
    ctx->pc = 0x13b4a0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x13b4a4: 0x1866821  addu        $t5, $t4, $a2
    ctx->pc = 0x13b4a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x13b4a8: 0x254c0002  addiu       $t4, $t2, 0x2
    ctx->pc = 0x13b4a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x13b4ac: 0x1a36814  dsllv       $t5, $v1, $t5
    ctx->pc = 0x13b4acu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << (GPR_U32(ctx, 13) & 0x3F));
    // 0x13b4b0: 0x318cffff  andi        $t4, $t4, 0xFFFF
    ctx->pc = 0x13b4b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x13b4b4: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x13b4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x13b4b8: 0x1866021  addu        $t4, $t4, $a2
    ctx->pc = 0x13b4b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x13b4bc: 0x1836814  dsllv       $t5, $v1, $t4
    ctx->pc = 0x13b4bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x13b4c0: 0x254c0003  addiu       $t4, $t2, 0x3
    ctx->pc = 0x13b4c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x13b4c4: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x13b4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x13b4c8: 0x318cffff  andi        $t4, $t4, 0xFFFF
    ctx->pc = 0x13b4c8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x13b4cc: 0x1866821  addu        $t5, $t4, $a2
    ctx->pc = 0x13b4ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x13b4d0: 0x254c0004  addiu       $t4, $t2, 0x4
    ctx->pc = 0x13b4d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x13b4d4: 0x1a36814  dsllv       $t5, $v1, $t5
    ctx->pc = 0x13b4d4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << (GPR_U32(ctx, 13) & 0x3F));
    // 0x13b4d8: 0x318cffff  andi        $t4, $t4, 0xFFFF
    ctx->pc = 0x13b4d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x13b4dc: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x13b4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x13b4e0: 0x1866021  addu        $t4, $t4, $a2
    ctx->pc = 0x13b4e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x13b4e4: 0x1836814  dsllv       $t5, $v1, $t4
    ctx->pc = 0x13b4e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x13b4e8: 0x254c0005  addiu       $t4, $t2, 0x5
    ctx->pc = 0x13b4e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 5));
    // 0x13b4ec: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x13b4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x13b4f0: 0x318cffff  andi        $t4, $t4, 0xFFFF
    ctx->pc = 0x13b4f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x13b4f4: 0x1866821  addu        $t5, $t4, $a2
    ctx->pc = 0x13b4f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x13b4f8: 0x254c0006  addiu       $t4, $t2, 0x6
    ctx->pc = 0x13b4f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 6));
    // 0x13b4fc: 0x1a36814  dsllv       $t5, $v1, $t5
    ctx->pc = 0x13b4fcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << (GPR_U32(ctx, 13) & 0x3F));
    // 0x13b500: 0x318cffff  andi        $t4, $t4, 0xFFFF
    ctx->pc = 0x13b500u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x13b504: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x13b504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x13b508: 0x1866021  addu        $t4, $t4, $a2
    ctx->pc = 0x13b508u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x13b50c: 0x1836814  dsllv       $t5, $v1, $t4
    ctx->pc = 0x13b50cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x13b510: 0x254c0007  addiu       $t4, $t2, 0x7
    ctx->pc = 0x13b510u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 7));
    // 0x13b514: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x13b514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x13b518: 0x318cffff  andi        $t4, $t4, 0xFFFF
    ctx->pc = 0x13b518u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x13b51c: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x13b51cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x13b520: 0x1866021  addu        $t4, $t4, $a2
    ctx->pc = 0x13b520u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x13b524: 0x314affff  andi        $t2, $t2, 0xFFFF
    ctx->pc = 0x13b524u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x13b528: 0x1836014  dsllv       $t4, $v1, $t4
    ctx->pc = 0x13b528u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x13b52c: 0xea082a  slt         $at, $a3, $t2
    ctx->pc = 0x13b52cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x13b530: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x13b530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x13b534: 0x1020ffd6  beqz        $at, . + 4 + (-0x2A << 2)
    ctx->pc = 0x13B534u;
    {
        const bool branch_taken_0x13b534 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B534u;
        // 0x13b538: 0x140602d  daddu       $t4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b534) {
            ctx->pc = 0x13B490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b490;
        }
    }
    ctx->pc = 0x13B53Cu;
    // 0x13b53c: 0x0  nop
    ctx->pc = 0x13b53cu;
    // NOP
label_13b540:
    // 0x13b540: 0x12c082a  slt         $at, $t1, $t4
    ctx->pc = 0x13b540u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x13b544: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x13B544u;
    {
        const bool branch_taken_0x13b544 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b544) {
            ctx->pc = 0x13B570u;
            goto label_13b570;
        }
    }
    ctx->pc = 0x13B54Cu;
    // 0x13b54c: 0x0  nop
    ctx->pc = 0x13b54cu;
    // NOP
label_13b550:
    // 0x13b550: 0x1866021  addu        $t4, $t4, $a2
    ctx->pc = 0x13b550u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x13b554: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x13b554u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x13b558: 0x1836014  dsllv       $t4, $v1, $t4
    ctx->pc = 0x13b558u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x13b55c: 0x314affff  andi        $t2, $t2, 0xFFFF
    ctx->pc = 0x13b55cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x13b560: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x13b560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x13b564: 0x12a082a  slt         $at, $t1, $t2
    ctx->pc = 0x13b564u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x13b568: 0x1020fff9  beqz        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13B568u;
    {
        const bool branch_taken_0x13b568 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B568u;
        // 0x13b56c: 0x140602d  daddu       $t4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b568) {
            ctx->pc = 0x13B550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b550;
        }
    }
    ctx->pc = 0x13B570u;
label_13b570:
    // 0x13b570: 0x256a0001  addiu       $t2, $t3, 0x1
    ctx->pc = 0x13b570u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x13b574: 0x314bffff  andi        $t3, $t2, 0xFFFF
    ctx->pc = 0x13b574u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x13b578: 0x10b082a  slt         $at, $t0, $t3
    ctx->pc = 0x13b578u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x13b57c: 0x1020ffbc  beqz        $at, . + 4 + (-0x44 << 2)
    ctx->pc = 0x13B57Cu;
    {
        const bool branch_taken_0x13b57c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B57Cu;
        // 0x13b580: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b57c) {
            ctx->pc = 0x13B470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b470;
        }
    }
    ctx->pc = 0x13B584u;
    // 0x13b584: 0x0  nop
    ctx->pc = 0x13b584u;
    // NOP
label_13b588:
    // 0x13b588: 0x3e00008  jr          $ra
    ctx->pc = 0x13B588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B590u;
}
