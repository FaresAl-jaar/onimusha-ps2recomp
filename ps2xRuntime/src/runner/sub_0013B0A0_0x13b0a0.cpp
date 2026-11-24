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

// Function: sub_0013B0A0
// Address: 0x13b0a0 - 0x13b340
void sub_0013B0A0_0x13b0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B0A0_0x13b0a0");
#endif

    ctx->pc = 0x13b0a0u;

    // 0x13b0a0: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x13b0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13b0a4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x13b0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x13b0a8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x13b0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b0ac: 0x94236ad2  lhu         $v1, 0x6AD2($at)
    ctx->pc = 0x13b0acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AD2u));
    // 0x13b0b0: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b0b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13b0b4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x13b0b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13b0b8: 0x0  nop
    ctx->pc = 0x13b0b8u;
    // NOP
    // 0x13b0bc: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x13b0bcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13b0c0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b0c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13b0c4: 0x0  nop
    ctx->pc = 0x13b0c4u;
    // NOP
    // 0x13b0c8: 0x3812  mflo        $a3
    ctx->pc = 0x13b0c8u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x13b0cc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x13b0ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13b0d0: 0x0  nop
    ctx->pc = 0x13b0d0u;
    // NOP
    // 0x13b0d4: 0x70a3001a  div1        $zero, $a1, $v1
    ctx->pc = 0x13b0d4u;
    { int32_t divisor = GPR_S32(ctx, 3); int32_t dividend = GPR_S32(ctx, 5); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x13b0d8: 0x0  nop
    ctx->pc = 0x13b0d8u;
    // NOP
    // 0x13b0dc: 0x0  nop
    ctx->pc = 0x13b0dcu;
    // NOP
    // 0x13b0e0: 0x70002812  mflo1       $a1
    ctx->pc = 0x13b0e0u;
    SET_GPR_U64(ctx, 5, ctx->lo1);
    // 0x13b0e4: 0x4e0000c  bltz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x13B0E4u;
    {
        const bool branch_taken_0x13b0e4 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x13B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B0E4u;
        // 0x13b0e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b0e4) {
            ctx->pc = 0x13B118u;
            goto label_13b118;
        }
    }
    ctx->pc = 0x13B0ECu;
    // 0x13b0ec: 0x28e10008  slti        $at, $a3, 0x8
    ctx->pc = 0x13b0ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b0f0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13B0F0u;
    {
        const bool branch_taken_0x13b0f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b0f0) {
            ctx->pc = 0x13B118u;
            goto label_13b118;
        }
    }
    ctx->pc = 0x13B0F8u;
    // 0x13b0f8: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B0F8u;
    {
        const bool branch_taken_0x13b0f8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x13B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B0F8u;
        // 0x13b0fc: 0x28a10008  slti        $at, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b0f8) {
            ctx->pc = 0x13B118u;
            goto label_13b118;
        }
    }
    ctx->pc = 0x13B100u;
    // 0x13b100: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B100u;
    {
        const bool branch_taken_0x13b100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B100u;
        // 0x13b104: 0x548c0  sll         $t1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b100) {
            ctx->pc = 0x13B118u;
            goto label_13b118;
        }
    }
    ctx->pc = 0x13B108u;
    // 0x13b108: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x13b108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b10c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x13b10cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x13b110: 0x1284014  dsllv       $t0, $t0, $t1
    ctx->pc = 0x13b110u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x13b114: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x13b114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_13b118:
    // 0x13b118: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B118u;
    {
        const bool branch_taken_0x13b118 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b118) {
            ctx->pc = 0x13B128u;
            goto label_13b128;
        }
    }
    ctx->pc = 0x13B120u;
    // 0x13b120: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x13B120u;
    {
        const bool branch_taken_0x13b120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b120) {
            ctx->pc = 0x13B338u;
            goto label_13b338;
        }
    }
    ctx->pc = 0x13B128u;
label_13b128:
    // 0x13b128: 0xc4800fac  lwc1        $f0, 0xFAC($a0)
    ctx->pc = 0x13b128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b12c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x13b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x13b130: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x13b130u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b134: 0x0  nop
    ctx->pc = 0x13b134u;
    // NOP
    // 0x13b138: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13b138u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b13c: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x13b13cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x13b140: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b140u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13b144: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13b144u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13b148: 0x0  nop
    ctx->pc = 0x13b148u;
    // NOP
    // 0x13b14c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x13b14cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13b150: 0x0  nop
    ctx->pc = 0x13b150u;
    // NOP
    // 0x13b154: 0x0  nop
    ctx->pc = 0x13b154u;
    // NOP
    // 0x13b158: 0x4812  mflo        $t1
    ctx->pc = 0x13b158u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x13b15c: 0x520000c  bltz        $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x13B15Cu;
    {
        const bool branch_taken_0x13b15c = (GPR_S64(ctx, 9) < 0);
        ctx->pc = 0x13B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B15Cu;
        // 0x13b160: 0x29210008  slti        $at, $t1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b15c) {
            ctx->pc = 0x13B190u;
            goto label_13b190;
        }
    }
    ctx->pc = 0x13B164u;
    // 0x13b164: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x13B164u;
    {
        const bool branch_taken_0x13b164 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b164) {
            ctx->pc = 0x13B190u;
            goto label_13b190;
        }
    }
    ctx->pc = 0x13B16Cu;
    // 0x13b16c: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13B16Cu;
    {
        const bool branch_taken_0x13b16c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x13B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B16Cu;
        // 0x13b170: 0x28a10008  slti        $at, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b16c) {
            ctx->pc = 0x13B190u;
            goto label_13b190;
        }
    }
    ctx->pc = 0x13B174u;
    // 0x13b174: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x13B174u;
    {
        const bool branch_taken_0x13b174 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B174u;
        // 0x13b178: 0x540c0  sll         $t0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b174) {
            ctx->pc = 0x13B190u;
            goto label_13b190;
        }
    }
    ctx->pc = 0x13B17Cu;
    // 0x13b17c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13b17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b180: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x13b180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x13b184: 0x1042014  dsllv       $a0, $a0, $t0
    ctx->pc = 0x13b184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x13b188: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13b188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13b18c: 0x0  nop
    ctx->pc = 0x13b18cu;
    // NOP
label_13b190:
    // 0x13b190: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x13b190u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x13b194: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b194u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13b198: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13b198u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13b19c: 0x0  nop
    ctx->pc = 0x13b19cu;
    // NOP
    // 0x13b1a0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x13b1a0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13b1a4: 0x0  nop
    ctx->pc = 0x13b1a4u;
    // NOP
    // 0x13b1a8: 0x0  nop
    ctx->pc = 0x13b1a8u;
    // NOP
    // 0x13b1ac: 0x4812  mflo        $t1
    ctx->pc = 0x13b1acu;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x13b1b0: 0x520000b  bltz        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x13B1B0u;
    {
        const bool branch_taken_0x13b1b0 = (GPR_S64(ctx, 9) < 0);
        ctx->pc = 0x13B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B1B0u;
        // 0x13b1b4: 0x29210008  slti        $at, $t1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b1b0) {
            ctx->pc = 0x13B1E0u;
            goto label_13b1e0;
        }
    }
    ctx->pc = 0x13B1B8u;
    // 0x13b1b8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13B1B8u;
    {
        const bool branch_taken_0x13b1b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b1b8) {
            ctx->pc = 0x13B1E0u;
            goto label_13b1e0;
        }
    }
    ctx->pc = 0x13B1C0u;
    // 0x13b1c0: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B1C0u;
    {
        const bool branch_taken_0x13b1c0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x13B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B1C0u;
        // 0x13b1c4: 0x28a10008  slti        $at, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b1c0) {
            ctx->pc = 0x13B1E0u;
            goto label_13b1e0;
        }
    }
    ctx->pc = 0x13B1C8u;
    // 0x13b1c8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B1C8u;
    {
        const bool branch_taken_0x13b1c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B1C8u;
        // 0x13b1cc: 0x540c0  sll         $t0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b1c8) {
            ctx->pc = 0x13B1E0u;
            goto label_13b1e0;
        }
    }
    ctx->pc = 0x13B1D0u;
    // 0x13b1d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13b1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b1d4: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x13b1d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x13b1d8: 0x1042014  dsllv       $a0, $a0, $t0
    ctx->pc = 0x13b1d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x13b1dc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13b1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_13b1e0:
    // 0x13b1e0: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x13b1e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x13b1e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b1e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13b1e8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13b1e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13b1ec: 0x0  nop
    ctx->pc = 0x13b1ecu;
    // NOP
    // 0x13b1f0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x13b1f0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13b1f4: 0x0  nop
    ctx->pc = 0x13b1f4u;
    // NOP
    // 0x13b1f8: 0x0  nop
    ctx->pc = 0x13b1f8u;
    // NOP
    // 0x13b1fc: 0x2012  mflo        $a0
    ctx->pc = 0x13b1fcu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x13b200: 0x4e0000b  bltz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x13B200u;
    {
        const bool branch_taken_0x13b200 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x13B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B200u;
        // 0x13b204: 0x28e10008  slti        $at, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b200) {
            ctx->pc = 0x13B230u;
            goto label_13b230;
        }
    }
    ctx->pc = 0x13B208u;
    // 0x13b208: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13B208u;
    {
        const bool branch_taken_0x13b208 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b208) {
            ctx->pc = 0x13B230u;
            goto label_13b230;
        }
    }
    ctx->pc = 0x13B210u;
    // 0x13b210: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B210u;
    {
        const bool branch_taken_0x13b210 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x13B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B210u;
        // 0x13b214: 0x28810008  slti        $at, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b210) {
            ctx->pc = 0x13B230u;
            goto label_13b230;
        }
    }
    ctx->pc = 0x13B218u;
    // 0x13b218: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B218u;
    {
        const bool branch_taken_0x13b218 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B218u;
        // 0x13b21c: 0x440c0  sll         $t0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b218) {
            ctx->pc = 0x13B230u;
            goto label_13b230;
        }
    }
    ctx->pc = 0x13B220u;
    // 0x13b220: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13b220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b224: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x13b224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x13b228: 0x1042014  dsllv       $a0, $a0, $t0
    ctx->pc = 0x13b228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x13b22c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13b22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_13b230:
    // 0x13b230: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x13b230u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x13b234: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b234u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13b238: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13b238u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13b23c: 0x0  nop
    ctx->pc = 0x13b23cu;
    // NOP
    // 0x13b240: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x13b240u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13b244: 0x0  nop
    ctx->pc = 0x13b244u;
    // NOP
    // 0x13b248: 0x0  nop
    ctx->pc = 0x13b248u;
    // NOP
    // 0x13b24c: 0x1812  mflo        $v1
    ctx->pc = 0x13b24cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x13b250: 0x4e0000b  bltz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x13B250u;
    {
        const bool branch_taken_0x13b250 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x13B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B250u;
        // 0x13b254: 0x28e10008  slti        $at, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b250) {
            ctx->pc = 0x13B280u;
            goto label_13b280;
        }
    }
    ctx->pc = 0x13B258u;
    // 0x13b258: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13B258u;
    {
        const bool branch_taken_0x13b258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b258) {
            ctx->pc = 0x13B280u;
            goto label_13b280;
        }
    }
    ctx->pc = 0x13B260u;
    // 0x13b260: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B260u;
    {
        const bool branch_taken_0x13b260 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x13B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B260u;
        // 0x13b264: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b260) {
            ctx->pc = 0x13B280u;
            goto label_13b280;
        }
    }
    ctx->pc = 0x13B268u;
    // 0x13b268: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B268u;
    {
        const bool branch_taken_0x13b268 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B268u;
        // 0x13b26c: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b268) {
            ctx->pc = 0x13B280u;
            goto label_13b280;
        }
    }
    ctx->pc = 0x13B270u;
    // 0x13b270: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b274: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x13b274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x13b278: 0x831814  dsllv       $v1, $v1, $a0
    ctx->pc = 0x13b278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x13b27c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13b27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13b280:
    // 0x13b280: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x13b280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x13b284: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13b284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b288: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x13B288u;
    {
        const bool branch_taken_0x13b288 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x13B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B288u;
        // 0x13b28c: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b288) {
            ctx->pc = 0x13B338u;
            goto label_13b338;
        }
    }
    ctx->pc = 0x13B290u;
    // 0x13b290: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x13b290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13b294: 0x90246ac5  lbu         $a0, 0x6AC5($at)
    ctx->pc = 0x13b294u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27333)));
    // 0x13b298: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x13B298u;
    {
        const bool branch_taken_0x13b298 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x13B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B298u;
        // 0x13b29c: 0x24e6ffff  addiu       $a2, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b298) {
            ctx->pc = 0x13B338u;
            goto label_13b338;
        }
    }
    ctx->pc = 0x13B2A0u;
    // 0x13b2a0: 0x4c00011  bltz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x13B2A0u;
    {
        const bool branch_taken_0x13b2a0 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x13B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2A0u;
        // 0x13b2a4: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b2a0) {
            ctx->pc = 0x13B2E8u;
            goto label_13b2e8;
        }
    }
    ctx->pc = 0x13B2A8u;
    // 0x13b2a8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B2A8u;
    {
        const bool branch_taken_0x13b2a8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x13B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2A8u;
        // 0x13b2ac: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b2a8) {
            ctx->pc = 0x13B2C0u;
            goto label_13b2c0;
        }
    }
    ctx->pc = 0x13B2B0u;
    // 0x13b2b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b2b4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x13b2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x13b2b8: 0x831814  dsllv       $v1, $v1, $a0
    ctx->pc = 0x13b2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x13b2bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13b2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13b2c0:
    // 0x13b2c0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x13b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13b2c4: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x13b2c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b2c8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B2C8u;
    {
        const bool branch_taken_0x13b2c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b2c8) {
            ctx->pc = 0x13B2E8u;
            goto label_13b2e8;
        }
    }
    ctx->pc = 0x13B2D0u;
    // 0x13b2d0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13b2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13b2d4: 0x24e4ffff  addiu       $a0, $a3, -0x1
    ctx->pc = 0x13b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x13b2d8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x13b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13b2dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b2e0: 0x831814  dsllv       $v1, $v1, $a0
    ctx->pc = 0x13b2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x13b2e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13b2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13b2e8:
    // 0x13b2e8: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x13b2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x13b2ec: 0x28c10008  slti        $at, $a2, 0x8
    ctx->pc = 0x13b2ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b2f0: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x13B2F0u;
    {
        const bool branch_taken_0x13b2f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2F0u;
        // 0x13b2f4: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b2f0) {
            ctx->pc = 0x13B338u;
            goto label_13b338;
        }
    }
    ctx->pc = 0x13B2F8u;
    // 0x13b2f8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B2F8u;
    {
        const bool branch_taken_0x13b2f8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x13B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2F8u;
        // 0x13b2fc: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b2f8) {
            ctx->pc = 0x13B310u;
            goto label_13b310;
        }
    }
    ctx->pc = 0x13B300u;
    // 0x13b300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b304: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x13b304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x13b308: 0x831814  dsllv       $v1, $v1, $a0
    ctx->pc = 0x13b308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x13b30c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13b30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13b310:
    // 0x13b310: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x13b310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13b314: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x13b314u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13b318: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B318u;
    {
        const bool branch_taken_0x13b318 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B318u;
        // 0x13b31c: 0x24e40001  addiu       $a0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b318) {
            ctx->pc = 0x13B338u;
            goto label_13b338;
        }
    }
    ctx->pc = 0x13B320u;
    // 0x13b320: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13b320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13b324: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x13b324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13b328: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b32c: 0x831814  dsllv       $v1, $v1, $a0
    ctx->pc = 0x13b32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x13b330: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13b330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13b334: 0x0  nop
    ctx->pc = 0x13b334u;
    // NOP
label_13b338:
    // 0x13b338: 0x3e00008  jr          $ra
    ctx->pc = 0x13B338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B340u;
}
