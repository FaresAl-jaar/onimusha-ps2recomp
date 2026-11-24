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

// Function: sub_00139FF0
// Address: 0x139ff0 - 0x13a544
void sub_00139FF0_0x139ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139FF0_0x139ff0");
#endif

    switch (ctx->pc) {
        case 0x13a160u: goto label_13a160;
        case 0x13a240u: goto label_13a240;
        case 0x13a278u: goto label_13a278;
        case 0x13a318u: goto label_13a318;
        case 0x13a328u: goto label_13a328;
        case 0x13a3acu: goto label_13a3ac;
        case 0x13a3b8u: goto label_13a3b8;
        case 0x13a498u: goto label_13a498;
        default: break;
    }

    ctx->pc = 0x139ff0u;

    // 0x139ff0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x139ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x139ff4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x139ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x139ff8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x139ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x139ffc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x139ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x13a000: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x13a000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x13a004: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x13a004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x13a008: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x13a008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x13a00c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x13a00cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a010: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x13a010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x13a014: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x13a014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x13a018: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x13a018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x13a01c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13a01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13a020: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13a020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13a024: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13a024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a028: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13a028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13a02c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13a02cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a030: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13a030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13a034: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x13a034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a038: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x13a038u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x13a03c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13a03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13a040: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A040u;
    {
        const bool branch_taken_0x13a040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A040u;
        // 0x13a044: 0xafa0012c  sw          $zero, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a040) {
            ctx->pc = 0x13A050u;
            goto label_13a050;
        }
    }
    ctx->pc = 0x13A048u;
    // 0x13a048: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x13A048u;
    {
        const bool branch_taken_0x13a048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A048u;
        // 0x13a04c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a048) {
            ctx->pc = 0x13A510u;
            goto label_13a510;
        }
    }
    ctx->pc = 0x13A050u;
label_13a050:
    // 0x13a050: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x13a050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13a054: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A054u;
    {
        const bool branch_taken_0x13a054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A054u;
        // 0x13a058: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a054) {
            ctx->pc = 0x13A068u;
            goto label_13a068;
        }
    }
    ctx->pc = 0x13A05Cu;
    // 0x13a05c: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x13A05Cu;
    {
        const bool branch_taken_0x13a05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a05c) {
            ctx->pc = 0x13A510u;
            goto label_13a510;
        }
    }
    ctx->pc = 0x13A064u;
    // 0x13a064: 0x0  nop
    ctx->pc = 0x13a064u;
    // NOP
label_13a068:
    // 0x13a068: 0x8e420f80  lw          $v0, 0xF80($s2)
    ctx->pc = 0x13a068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3968)));
    // 0x13a06c: 0x26440f60  addiu       $a0, $s2, 0xF60
    ctx->pc = 0x13a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3936));
    // 0x13a070: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x13a070u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a074: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13a074u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a078: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x13a078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x13a07c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x13a07cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x13a080: 0x26420f70  addiu       $v0, $s2, 0xF70
    ctx->pc = 0x13a080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3952));
    // 0x13a084: 0x8e430f80  lw          $v1, 0xF80($s2)
    ctx->pc = 0x13a084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3968)));
    // 0x13a088: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13a088u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a08c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x13a08cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x13a090: 0x8e420f80  lw          $v0, 0xF80($s2)
    ctx->pc = 0x13a090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3968)));
    // 0x13a094: 0xc6400fb0  lwc1        $f0, 0xFB0($s2)
    ctx->pc = 0x13a094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a098: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x13a098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a09c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a09cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13a0a0: 0xe6400f64  swc1        $f0, 0xF64($s2)
    ctx->pc = 0x13a0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3940), bits); }
    // 0x13a0a4: 0x8e420f80  lw          $v0, 0xF80($s2)
    ctx->pc = 0x13a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3968)));
    // 0x13a0a8: 0xc6400fb4  lwc1        $f0, 0xFB4($s2)
    ctx->pc = 0x13a0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a0ac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x13a0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a0b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a0b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13a0b4: 0xe6400f74  swc1        $f0, 0xF74($s2)
    ctx->pc = 0x13a0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3956), bits); }
    // 0x13a0b8: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x13a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x13a0bc: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x13a0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x13a0c0: 0xc6410f60  lwc1        $f1, 0xF60($s2)
    ctx->pc = 0x13a0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a0c4: 0x94236ad2  lhu         $v1, 0x6AD2($at)
    ctx->pc = 0x13a0c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AD2u));
    // 0x13a0c8: 0xc6400f68  lwc1        $f0, 0xF68($s2)
    ctx->pc = 0x13a0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a0cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13a0ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13a0d0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x13a0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x13a0d4: 0x94226ad2  lhu         $v0, 0x6AD2($at)
    ctx->pc = 0x13a0d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7E6AD2u));
    // 0x13a0d8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x13a0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13a0dc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x13a0dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13a0e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13a0e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13a0e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13a0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13a0e8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x13a0e8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13a0ec: 0x0  nop
    ctx->pc = 0x13a0ecu;
    // NOP
    // 0x13a0f0: 0x0  nop
    ctx->pc = 0x13a0f0u;
    // NOP
    // 0x13a0f4: 0x2012  mflo        $a0
    ctx->pc = 0x13a0f4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x13a0f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13a0f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13a0fc: 0x0  nop
    ctx->pc = 0x13a0fcu;
    // NOP
    // 0x13a100: 0x7062001a  div1        $zero, $v1, $v0
    ctx->pc = 0x13a100u;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 3); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x13a104: 0x0  nop
    ctx->pc = 0x13a104u;
    // NOP
    // 0x13a108: 0x0  nop
    ctx->pc = 0x13a108u;
    // NOP
    // 0x13a10c: 0x70001012  mflo1       $v0
    ctx->pc = 0x13a10cu;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x13a110: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x13a110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x13a114: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x13a114u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13a118: 0x2a810040  slti        $at, $s4, 0x40
    ctx->pc = 0x13a118u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x13a11c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13A11Cu;
    {
        const bool branch_taken_0x13a11c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a11c) {
            ctx->pc = 0x13A128u;
            goto label_13a128;
        }
    }
    ctx->pc = 0x13A124u;
    // 0x13a124: 0x2414003f  addiu       $s4, $zero, 0x3F
    ctx->pc = 0x13a124u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_13a128:
    // 0x13a128: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A128u;
    {
        const bool branch_taken_0x13a128 = (GPR_S64(ctx, 20) >= 0);
        if (branch_taken_0x13a128) {
            ctx->pc = 0x13A138u;
            goto label_13a138;
        }
    }
    ctx->pc = 0x13A130u;
    // 0x13a130: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x13a130u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a134: 0x0  nop
    ctx->pc = 0x13a134u;
    // NOP
label_13a138:
    // 0x13a138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a13c: 0x2821014  dsllv       $v0, $v0, $s4
    ctx->pc = 0x13a13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 20) & 0x3F));
    // 0x13a140: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x13a140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x13a144: 0xff828538  sd          $v0, -0x7AC8($gp)
    ctx->pc = 0x13a144u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935864), GPR_U64(ctx, 2));
    // 0x13a148: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13a148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13a14c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x13a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x13a150: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13a150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13a154: 0x8c530ad0  lw          $s3, 0xAD0($v0)
    ctx->pc = 0x13a154u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2768)));
    // 0x13a158: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x13A158u;
    {
        const bool branch_taken_0x13a158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A158u;
        // 0x13a15c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a158) {
            ctx->pc = 0x13A458u;
            goto label_13a458;
        }
    }
    ctx->pc = 0x13A160u;
label_13a160:
    // 0x13a160: 0xc6630024  lwc1        $f3, 0x24($s3)
    ctx->pc = 0x13a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13a164: 0xc6620034  lwc1        $f2, 0x34($s3)
    ctx->pc = 0x13a164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13a168: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x13a168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a16c: 0x46021929  min.s       $f4, $f3, $f2
    ctx->pc = 0x13a16cu;
    ctx->f[4] = std::min(ctx->f[3], ctx->f[2]);
    // 0x13a170: 0x46040929  min.s       $f4, $f1, $f4
    ctx->pc = 0x13a170u;
    ctx->f[4] = std::min(ctx->f[1], ctx->f[4]);
    // 0x13a174: 0xc6400f64  lwc1        $f0, 0xF64($s2)
    ctx->pc = 0x13a174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a178: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x13a178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a17c: 0x450000b2  bc1f        . + 4 + (0xB2 << 2)
    ctx->pc = 0x13A17Cu;
    {
        const bool branch_taken_0x13a17c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a17c) {
            ctx->pc = 0x13A448u;
            goto label_13a448;
        }
    }
    ctx->pc = 0x13A184u;
    // 0x13a184: 0x460218a8  max.s       $f2, $f3, $f2
    ctx->pc = 0x13a184u;
    ctx->f[2] = std::max(ctx->f[3], ctx->f[2]);
    // 0x13a188: 0x460208a8  max.s       $f2, $f1, $f2
    ctx->pc = 0x13a188u;
    ctx->f[2] = std::max(ctx->f[1], ctx->f[2]);
    // 0x13a18c: 0xc6400f74  lwc1        $f0, 0xF74($s2)
    ctx->pc = 0x13a18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a190: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x13a190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a194: 0x450100ac  bc1t        . + 4 + (0xAC << 2)
    ctx->pc = 0x13A194u;
    {
        const bool branch_taken_0x13a194 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a194) {
            ctx->pc = 0x13A448u;
            goto label_13a448;
        }
    }
    ctx->pc = 0x13A19Cu;
    // 0x13a19c: 0xc6630020  lwc1        $f3, 0x20($s3)
    ctx->pc = 0x13a19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13a1a0: 0xc6620030  lwc1        $f2, 0x30($s3)
    ctx->pc = 0x13a1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13a1a4: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x13a1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a1a8: 0x46021929  min.s       $f4, $f3, $f2
    ctx->pc = 0x13a1a8u;
    ctx->f[4] = std::min(ctx->f[3], ctx->f[2]);
    // 0x13a1ac: 0x46040929  min.s       $f4, $f1, $f4
    ctx->pc = 0x13a1acu;
    ctx->f[4] = std::min(ctx->f[1], ctx->f[4]);
    // 0x13a1b0: 0x8e420f80  lw          $v0, 0xF80($s2)
    ctx->pc = 0x13a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3968)));
    // 0x13a1b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13a1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a1b8: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x13a1b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a1bc: 0x450100a2  bc1t        . + 4 + (0xA2 << 2)
    ctx->pc = 0x13A1BCu;
    {
        const bool branch_taken_0x13a1bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a1bc) {
            ctx->pc = 0x13A448u;
            goto label_13a448;
        }
    }
    ctx->pc = 0x13A1C4u;
    // 0x13a1c4: 0x460218a8  max.s       $f2, $f3, $f2
    ctx->pc = 0x13a1c4u;
    ctx->f[2] = std::max(ctx->f[3], ctx->f[2]);
    // 0x13a1c8: 0x460208a8  max.s       $f2, $f1, $f2
    ctx->pc = 0x13a1c8u;
    ctx->f[2] = std::max(ctx->f[1], ctx->f[2]);
    // 0x13a1cc: 0x8e420f80  lw          $v0, 0xF80($s2)
    ctx->pc = 0x13a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3968)));
    // 0x13a1d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13a1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a1d4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x13a1d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a1d8: 0x4500009b  bc1f        . + 4 + (0x9B << 2)
    ctx->pc = 0x13A1D8u;
    {
        const bool branch_taken_0x13a1d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A1D8u;
        // 0x13a1dc: 0x26650028  addiu       $a1, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a1d8) {
            ctx->pc = 0x13A448u;
            goto label_13a448;
        }
    }
    ctx->pc = 0x13A1E0u;
    // 0x13a1e0: 0x26640038  addiu       $a0, $s3, 0x38
    ctx->pc = 0x13a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x13a1e4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x13a1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a1e8: 0x26630048  addiu       $v1, $s3, 0x48
    ctx->pc = 0x13a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x13a1ec: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x13a1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a1f0: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x13a1f0u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x13a1f4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13a1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a1f8: 0x46010069  min.s       $f1, $f0, $f1
    ctx->pc = 0x13a1f8u;
    ctx->f[1] = std::min(ctx->f[0], ctx->f[1]);
    // 0x13a1fc: 0x8e420f80  lw          $v0, 0xF80($s2)
    ctx->pc = 0x13a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3968)));
    // 0x13a200: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13a200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a204: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13a204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a208: 0x4501008f  bc1t        . + 4 + (0x8F << 2)
    ctx->pc = 0x13A208u;
    {
        const bool branch_taken_0x13a208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a208) {
            ctx->pc = 0x13A448u;
            goto label_13a448;
        }
    }
    ctx->pc = 0x13A210u;
    // 0x13a210: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x13a210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a214: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x13a214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a218: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x13a218u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x13a21c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13a21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a220: 0x46010068  max.s       $f1, $f0, $f1
    ctx->pc = 0x13a220u;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[1]);
    // 0x13a224: 0x8e420f80  lw          $v0, 0xF80($s2)
    ctx->pc = 0x13a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3968)));
    // 0x13a228: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13a228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a22c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13a22cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a230: 0x45000085  bc1f        . + 4 + (0x85 << 2)
    ctx->pc = 0x13A230u;
    {
        const bool branch_taken_0x13a230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A230u;
        // 0x13a234: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a230) {
            ctx->pc = 0x13A448u;
            goto label_13a448;
        }
    }
    ctx->pc = 0x13A238u;
    // 0x13a238: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x13A238u;
    {
        const bool branch_taken_0x13a238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a238) {
            ctx->pc = 0x13A2A8u;
            goto label_13a2a8;
        }
    }
    ctx->pc = 0x13A240u;
label_13a240:
    // 0x13a240: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x13a240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x13a244: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13a244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13a248: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x13a248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x13a24c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x13a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x13a250: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x13a250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13a254: 0x24420f60  addiu       $v0, $v0, 0xF60
    ctx->pc = 0x13a254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3936));
    // 0x13a258: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13a258u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a25c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x13a25cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a260: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13a260u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13a264: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13a264u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13a268: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x13a268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x13a26c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x13a26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13a270: 0xc0414d6  jal         func_105358
    ctx->pc = 0x13A270u;
    SET_GPR_U32(ctx, 31, 0x13A278u);
    ctx->pc = 0x13A274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A270u;
    // 0x13a274: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x13A270u, 0x13A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A278u;
label_13a278:
    // 0x13a278: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x13a278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a27c: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x13a27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x13a280: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x13a280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a284: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13a284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a288: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x13a288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13a28c: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x13a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x13a290: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x13a290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13a294: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x13a294u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13a298: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13a29c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x13a29cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x13a2a0: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x13a2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x13a2a4: 0x0  nop
    ctx->pc = 0x13a2a4u;
    // NOP
label_13a2a8:
    // 0x13a2a8: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x13a2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x13a2ac: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x13a2acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13a2b0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x13A2B0u;
    {
        const bool branch_taken_0x13a2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a2b0) {
            ctx->pc = 0x13A240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a240;
        }
    }
    ctx->pc = 0x13A2B8u;
    // 0x13a2b8: 0xc7a20120  lwc1        $f2, 0x120($sp)
    ctx->pc = 0x13a2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13a2bc: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x13a2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a2c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a2c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a2c4: 0x0  nop
    ctx->pc = 0x13a2c4u;
    // NOP
    // 0x13a2c8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x13a2c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x13a2cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13a2ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a2d0: 0x4500005d  bc1f        . + 4 + (0x5D << 2)
    ctx->pc = 0x13A2D0u;
    {
        const bool branch_taken_0x13a2d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a2d0) {
            ctx->pc = 0x13A448u;
            goto label_13a448;
        }
    }
    ctx->pc = 0x13A2D8u;
    // 0x13a2d8: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x13a2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a2dc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13a2e0: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x13a2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a2e4: 0x34443000  ori         $a0, $v0, 0x3000
    ctx->pc = 0x13a2e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x13a2e8: 0x26450f60  addiu       $a1, $s2, 0xF60
    ctx->pc = 0x13a2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3936));
    // 0x13a2ec: 0x26460f70  addiu       $a2, $s2, 0xF70
    ctx->pc = 0x13a2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3952));
    // 0x13a2f0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x13a2f0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x13a2f4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x13a2f4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x13a2f8: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x13a2f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x13a2fc: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x13a2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x13a300: 0xc7a20120  lwc1        $f2, 0x120($sp)
    ctx->pc = 0x13a300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13a304: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x13a304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a308: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x13a308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a30c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x13a30cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x13a310: 0xc0414c0  jal         func_105300
    ctx->pc = 0x13A310u;
    SET_GPR_U32(ctx, 31, 0x13A318u);
    ctx->pc = 0x13A314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A310u;
    // 0x13a314: 0x46010303  div.s       $f12, $f0, $f1 (Delay Slot)
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x13A310u, 0x13A318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A318u;
label_13a318:
    // 0x13a318: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x13a318u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a31c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x13A31Cu;
    {
        const bool branch_taken_0x13a31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A31Cu;
        // 0x13a320: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a31c) {
            ctx->pc = 0x13A3E0u;
            goto label_13a3e0;
        }
    }
    ctx->pc = 0x13A324u;
    // 0x13a324: 0x0  nop
    ctx->pc = 0x13a324u;
    // NOP
label_13a328:
    // 0x13a328: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x13a328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x13a32c: 0x32a3ffff  andi        $v1, $s5, 0xFFFF
    ctx->pc = 0x13a32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x13a330: 0x244248e8  addiu       $v0, $v0, 0x48E8
    ctx->pc = 0x13a330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18664));
    // 0x13a334: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x13a334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13a338: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x13a338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13a33c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13a33cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a340: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x13a340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x13a344: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13a344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13a348: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13a348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13a34c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13a350: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x13a350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13a354: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13a354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13a358: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13a358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13a35c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13a360: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13a360u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a364: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x13a364u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13a368: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13a368u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13a36c: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x13a36cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13a370: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x13a370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x13a374: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13a374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13a378: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13a378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13a37c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13a380: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x13a380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x13a384: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13a384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13a388: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x13a388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x13a38c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13a38cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003000u));
    // 0x13a390: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13a390u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a394: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13a394u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13a398: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13a398u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13a39c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x13a39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13a3a0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x13a3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x13a3a4: 0xc041460  jal         func_105180
    ctx->pc = 0x13A3A4u;
    SET_GPR_U32(ctx, 31, 0x13A3ACu);
    ctx->pc = 0x13A3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A3A4u;
    // 0x13a3a8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x13A3A4u, 0x13A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3ACu;
label_13a3ac:
    // 0x13a3ac: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x13a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13a3b0: 0xc041468  jal         func_1051A0
    ctx->pc = 0x13A3B0u;
    SET_GPR_U32(ctx, 31, 0x13A3B8u);
    ctx->pc = 0x13A3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A3B0u;
    // 0x13a3b4: 0x26650050  addiu       $a1, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x13A3B0u, 0x13A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3B8u;
label_13a3b8:
    // 0x13a3b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13a3b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a3bc: 0x0  nop
    ctx->pc = 0x13a3bcu;
    // NOP
    // 0x13a3c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13a3c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a3c4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13A3C4u;
    {
        const bool branch_taken_0x13a3c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a3c4) {
            ctx->pc = 0x13A3D8u;
            goto label_13a3d8;
        }
    }
    ctx->pc = 0x13A3CCu;
    // 0x13a3cc: 0x64150003  daddiu      $s5, $zero, 0x3
    ctx->pc = 0x13a3ccu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x13a3d0: 0x641e0001  daddiu      $fp, $zero, 0x1
    ctx->pc = 0x13a3d0u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13a3d4: 0x0  nop
    ctx->pc = 0x13a3d4u;
    // NOP
label_13a3d8:
    // 0x13a3d8: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x13a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x13a3dc: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x13a3dcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_13a3e0:
    // 0x13a3e0: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x13a3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x13a3e4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x13a3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13a3e8: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x13A3E8u;
    {
        const bool branch_taken_0x13a3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a3e8) {
            ctx->pc = 0x13A328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a328;
        }
    }
    ctx->pc = 0x13A3F0u;
    // 0x13a3f0: 0x17c00015  bnez        $fp, . + 4 + (0x15 << 2)
    ctx->pc = 0x13A3F0u;
    {
        const bool branch_taken_0x13a3f0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A3F0u;
        // 0x13a3f4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a3f0) {
            ctx->pc = 0x13A448u;
            goto label_13a448;
        }
    }
    ctx->pc = 0x13A3F8u;
    // 0x13a3f8: 0xc4213004  lwc1        $f1, 0x3004($at)
    ctx->pc = 0x13a3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 12292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a3fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a3fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a400: 0x0  nop
    ctx->pc = 0x13a400u;
    // NOP
    // 0x13a404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13a404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a408: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13A408u;
    {
        const bool branch_taken_0x13a408 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a408) {
            ctx->pc = 0x13A418u;
            goto label_13a418;
        }
    }
    ctx->pc = 0x13A410u;
    // 0x13a410: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13a410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13a414: 0xe4203004  swc1        $f0, 0x3004($at)
    ctx->pc = 0x13a414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003004u, bits); }
label_13a418:
    // 0x13a418: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13a418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13a41c: 0xc4203004  lwc1        $f0, 0x3004($at)
    ctx->pc = 0x13a41cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003004u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a420: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x13a420u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a424: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x13A424u;
    {
        const bool branch_taken_0x13a424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a424) {
            ctx->pc = 0x13A448u;
            goto label_13a448;
        }
    }
    ctx->pc = 0x13A42Cu;
    // 0x13a42c: 0xae530034  sw          $s3, 0x34($s2)
    ctx->pc = 0x13a42cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 19));
    // 0x13a430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a434: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x13a434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x13a438: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13a438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13a43c: 0xafb300bc  sw          $s3, 0xBC($sp)
    ctx->pc = 0x13a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 19));
    // 0x13a440: 0xc4343004  lwc1        $f20, 0x3004($at)
    ctx->pc = 0x13a440u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003004u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13a444: 0x0  nop
    ctx->pc = 0x13a444u;
    // NOP
label_13a448:
    // 0x13a448: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x13a448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x13a44c: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x13a44cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13a450: 0x26730070  addiu       $s3, $s3, 0x70
    ctx->pc = 0x13a450u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x13a454: 0x0  nop
    ctx->pc = 0x13a454u;
    // NOP
label_13a458:
    // 0x13a458: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x13a458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x13a45c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13a460: 0x32c3ffff  andi        $v1, $s6, 0xFFFF
    ctx->pc = 0x13a460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x13a464: 0x9442085c  lhu         $v0, 0x85C($v0)
    ctx->pc = 0x13a464u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2140)));
    // 0x13a468: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x13a468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13a46c: 0x1440ff3c  bnez        $v0, . + 4 + (-0xC4 << 2)
    ctx->pc = 0x13A46Cu;
    {
        const bool branch_taken_0x13a46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a46c) {
            ctx->pc = 0x13A160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a160;
        }
    }
    ctx->pc = 0x13A474u;
    // 0x13a474: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x13a474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x13a478: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13A478u;
    {
        const bool branch_taken_0x13a478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A478u;
        // 0x13a47c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a478) {
            ctx->pc = 0x13A4D8u;
            goto label_13a4d8;
        }
    }
    ctx->pc = 0x13A480u;
    // 0x13a480: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a484: 0x26460f60  addiu       $a2, $s2, 0xF60
    ctx->pc = 0x13a484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3936));
    // 0x13a488: 0x26470f70  addiu       $a3, $s2, 0xF70
    ctx->pc = 0x13a488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 3952));
    // 0x13a48c: 0x27a8012c  addiu       $t0, $sp, 0x12C
    ctx->pc = 0x13a48cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x13a490: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13A490u;
    SET_GPR_U32(ctx, 31, 0x13A498u);
    ctx->pc = 0x13A494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A490u;
    // 0x13a494: 0x27a900d0  addiu       $t1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13A490u, 0x13A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A498u;
label_13a498:
    // 0x13a498: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13a498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13a49c: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x13A49Cu;
    {
        const bool branch_taken_0x13a49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13a49c) {
            ctx->pc = 0x13A4D8u;
            goto label_13a4d8;
        }
    }
    ctx->pc = 0x13A4A4u;
    // 0x13a4a4: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x13a4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a4a8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x13a4a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a4ac: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x13A4ACu;
    {
        const bool branch_taken_0x13a4ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a4ac) {
            ctx->pc = 0x13A4D8u;
            goto label_13a4d8;
        }
    }
    ctx->pc = 0x13A4B4u;
    // 0x13a4b4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13A4B4u;
    {
        const bool branch_taken_0x13a4b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A4B4u;
        // 0x13a4b8: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a4b4) {
            ctx->pc = 0x13A4D0u;
            goto label_13a4d0;
        }
    }
    ctx->pc = 0x13A4BCu;
    // 0x13a4bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a4bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4c0: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x13a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13a4c4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13a4c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a4c8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x13a4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x13a4cc: 0x0  nop
    ctx->pc = 0x13a4ccu;
    // NOP
label_13a4d0:
    // 0x13a4d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13A4D0u;
    {
        const bool branch_taken_0x13a4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A4D0u;
        // 0x13a4d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a4d0) {
            ctx->pc = 0x13A510u;
            goto label_13a510;
        }
    }
    ctx->pc = 0x13A4D8u;
label_13a4d8:
    // 0x13a4d8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x13a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13a4dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13A4DCu;
    {
        const bool branch_taken_0x13a4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a4dc) {
            ctx->pc = 0x13A508u;
            goto label_13a508;
        }
    }
    ctx->pc = 0x13A4E4u;
    // 0x13a4e4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13A4E4u;
    {
        const bool branch_taken_0x13a4e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A4E4u;
        // 0x13a4e8: 0xe6f40000  swc1        $f20, 0x0($s7) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a4e4) {
            ctx->pc = 0x13A500u;
            goto label_13a500;
        }
    }
    ctx->pc = 0x13A4ECu;
    // 0x13a4ec: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x13a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x13a4f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13a4f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4f4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x13a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x13a4f8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13a4f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a4fc: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x13a4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_13a500:
    // 0x13a500: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13A500u;
    {
        const bool branch_taken_0x13a500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A500u;
        // 0x13a504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a500) {
            ctx->pc = 0x13A510u;
            goto label_13a510;
        }
    }
    ctx->pc = 0x13A508u;
label_13a508:
    // 0x13a508: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13a508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13a50c: 0x0  nop
    ctx->pc = 0x13a50cu;
    // NOP
label_13a510:
    // 0x13a510: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x13a510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13a514: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x13a514u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13a518: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13a518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13a51c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x13a51cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13a520: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x13a520u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13a524: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x13a524u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13a528: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x13a528u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13a52c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x13a52cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a530: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13a530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a534: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13a534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a538: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13a538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a53c: 0x3e00008  jr          $ra
    ctx->pc = 0x13A53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A53Cu;
        // 0x13a540: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A544u;
}
