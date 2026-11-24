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

// Function: sub_00360310
// Address: 0x360310 - 0x3604e8
void sub_00360310_0x360310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360310_0x360310");
#endif

    switch (ctx->pc) {
        case 0x360340u: goto label_360340;
        case 0x3604d0u: goto label_3604d0;
        default: break;
    }

    ctx->pc = 0x360310u;

    // 0x360310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x360310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x360314: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x360314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x360318: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x360318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36031c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36031cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x360320: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x360320u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360324: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x360324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x360328: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x360328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36032c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x36032cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x360330: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x360330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360334: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x360334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x360338: 0xc05e360  jal         func_178D80
    ctx->pc = 0x360338u;
    SET_GPR_U32(ctx, 31, 0x360340u);
    ctx->pc = 0x36033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360338u;
    // 0x36033c: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x360338u, 0x360340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360340u;
label_360340:
    // 0x360340: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x360340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360344: 0x10a00062  beqz        $a1, . + 4 + (0x62 << 2)
    ctx->pc = 0x360344u;
    {
        const bool branch_taken_0x360344 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x360348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360344u;
        // 0x360348: 0x3c033f92  lui         $v1, 0x3F92 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16274 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360344) {
            ctx->pc = 0x3604D0u;
            goto label_3604d0;
        }
    }
    ctx->pc = 0x36034Cu;
    // 0x36034c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x36034cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x360350: 0x34634925  ori         $v1, $v1, 0x4925
    ctx->pc = 0x360350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18725);
    // 0x360354: 0x344c8080  ori         $t4, $v0, 0x8080
    ctx->pc = 0x360354u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x360358: 0xae431fa8  sw          $v1, 0x1FA8($s2)
    ctx->pc = 0x360358u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8104), GPR_U32(ctx, 3));
    // 0x36035c: 0x3c024438  lui         $v0, 0x4438
    ctx->pc = 0x36035cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17464 << 16));
    // 0x360360: 0x924d1fb6  lbu         $t5, 0x1FB6($s2)
    ctx->pc = 0x360360u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8118)));
    // 0x360364: 0x34470154  ori         $a3, $v0, 0x154
    ctx->pc = 0x360364u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)340);
    // 0x360368: 0x864b1fb0  lh          $t3, 0x1FB0($s2)
    ctx->pc = 0x360368u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8112)));
    // 0x36036c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x36036cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x360370: 0x86431fb2  lh          $v1, 0x1FB2($s2)
    ctx->pc = 0x360370u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8114)));
    // 0x360374: 0x348a2000  ori         $t2, $a0, 0x2000
    ctx->pc = 0x360374u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x360378: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x360378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36037c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x36037cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x360380: 0xc6411fa8  lwc1        $f1, 0x1FA8($s2)
    ctx->pc = 0x360380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360384: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x360384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x360388: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x360388u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x36038c: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x36038cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x360390: 0xd6e00  sll         $t5, $t5, 24
    ctx->pc = 0x360390u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x360394: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x360394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x360398: 0x1ac7825  or          $t7, $t5, $t4
    ctx->pc = 0x360398u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x36039c: 0x72036018  mult1       $t4, $s0, $v1
    ctx->pc = 0x36039cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3603a0: 0x22b7018  mult        $t6, $s1, $t3
    ctx->pc = 0x3603a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3603a4: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x3603a4u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3603a8: 0xc6c3c  dsll32      $t5, $t4, 16
    ctx->pc = 0x3603a8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << (32 + 16));
    // 0x3603ac: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x3603acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x3603b0: 0xd6c3f  dsra32      $t5, $t5, 16
    ctx->pc = 0x3603b0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 16));
    // 0x3603b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3603b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3603b8: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x3603b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x3603bc: 0xacaf0008  sw          $t7, 0x8($a1)
    ctx->pc = 0x3603bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 15));
    // 0x3603c0: 0xe743c  dsll32      $t6, $t6, 16
    ctx->pc = 0x3603c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 16));
    // 0x3603c4: 0xe743f  dsra32      $t6, $t6, 16
    ctx->pc = 0x3603c4u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 16));
    // 0x3603c8: 0x8e4c000c  lw          $t4, 0xC($s2)
    ctx->pc = 0x3603c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3603cc: 0x1cb3821  addu        $a3, $t6, $t3
    ctx->pc = 0x3603ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x3603d0: 0x25c80700  addiu       $t0, $t6, 0x700
    ctx->pc = 0x3603d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), 1792));
    // 0x3603d4: 0x75c3c  dsll32      $t3, $a3, 16
    ctx->pc = 0x3603d4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) << (32 + 16));
    // 0x3603d8: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x3603d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x3603dc: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x3603dcu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x3603e0: 0xe8100  sll         $s0, $t6, 4
    ctx->pc = 0x3603e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x3603e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3603e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3603e8: 0x25670700  addiu       $a3, $t3, 0x700
    ctx->pc = 0x3603e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 1792));
    // 0x3603ec: 0xb7900  sll         $t7, $t3, 4
    ctx->pc = 0x3603ecu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x3603f0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x3603f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x3603f4: 0xacac0010  sw          $t4, 0x10($a1)
    ctx->pc = 0x3603f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 12));
    // 0x3603f8: 0x1a35821  addu        $t3, $t5, $v1
    ctx->pc = 0x3603f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x3603fc: 0xd6500  sll         $t4, $t5, 20
    ctx->pc = 0x3603fcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 20));
    // 0x360400: 0xb5c3c  dsll32      $t3, $t3, 16
    ctx->pc = 0x360400u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 16));
    // 0x360404: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x360404u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x360408: 0xa4a00014  sh          $zero, 0x14($a1)
    ctx->pc = 0x360408u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x36040c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36040cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x360410: 0x20c7025  or          $t6, $s0, $t4
    ctx->pc = 0x360410u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) | GPR_U64(ctx, 12));
    // 0x360414: 0x1ec6825  or          $t5, $t7, $t4
    ctx->pc = 0x360414u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x360418: 0xb5d00  sll         $t3, $t3, 20
    ctx->pc = 0x360418u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 20));
    // 0x36041c: 0x20b6025  or          $t4, $s0, $t3
    ctx->pc = 0x36041cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 16) | GPR_U64(ctx, 11));
    // 0x360420: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x360420u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x360424: 0x1eb5825  or          $t3, $t7, $t3
    ctx->pc = 0x360424u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x360428: 0xa4a00016  sh          $zero, 0x16($a1)
    ctx->pc = 0x360428u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x36042c: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x36042cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x360430: 0x440f0000  mfc1        $t7, $f0
    ctx->pc = 0x360430u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x360434: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x360434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360438: 0xf843c  dsll32      $s0, $t7, 16
    ctx->pc = 0x360438u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 15) << (32 + 16));
    // 0x36043c: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x36043cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x360440: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x360440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x360444: 0x26030f20  addiu       $v1, $s0, 0xF20
    ctx->pc = 0x360444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3872));
    // 0x360448: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x360448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x36044c: 0x1037825  or          $t7, $t0, $v1
    ctx->pc = 0x36044cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x360450: 0xacaf0020  sw          $t7, 0x20($a1)
    ctx->pc = 0x360450u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 15));
    // 0x360454: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x360454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x360458: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x360458u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x36045c: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x36045cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
    // 0x360460: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x360460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x360464: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x360464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x360468: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x360468u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36046c: 0x0  nop
    ctx->pc = 0x36046cu;
    // NOP
    // 0x360470: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x360470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x360474: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x360474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x360478: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x360478u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x36047c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x36047cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x360480: 0x0  nop
    ctx->pc = 0x360480u;
    // NOP
    // 0x360484: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x360484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x360488: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x360488u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x36048c: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x36048cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x360490: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x360490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x360494: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x360494u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x360498: 0xaca80038  sw          $t0, 0x38($a1)
    ctx->pc = 0x360498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 8));
    // 0x36049c: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x36049cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3604a0: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x3604a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x3604a4: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x3604a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x3604a8: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x3604a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    // 0x3604ac: 0xacae0018  sw          $t6, 0x18($a1)
    ctx->pc = 0x3604acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 14));
    // 0x3604b0: 0xacad001c  sw          $t5, 0x1C($a1)
    ctx->pc = 0x3604b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 13));
    // 0x3604b4: 0xacac0030  sw          $t4, 0x30($a1)
    ctx->pc = 0x3604b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 12));
    // 0x3604b8: 0xacab0034  sw          $t3, 0x34($a1)
    ctx->pc = 0x3604b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 11));
    // 0x3604bc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3604bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3604c0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x3604c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x3604c4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3604c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3604c8: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3604C8u;
    SET_GPR_U32(ctx, 31, 0x3604D0u);
    ctx->pc = 0x3604CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3604C8u;
    // 0x3604cc: 0xa0a9000f  sb          $t1, 0xF($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3604C8u, 0x3604D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3604D0u;
label_3604d0:
    // 0x3604d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3604d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3604d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3604d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3604d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3604d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3604dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3604dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3604e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3604E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3604E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3604E0u;
        // 0x3604e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3604E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3604E8u;
}
