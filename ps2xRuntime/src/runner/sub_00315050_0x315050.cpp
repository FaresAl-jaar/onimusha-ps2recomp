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

// Function: sub_00315050
// Address: 0x315050 - 0x315a38
void sub_00315050_0x315050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315050_0x315050");
#endif

    switch (ctx->pc) {
        case 0x315150u: goto label_315150;
        case 0x31516cu: goto label_31516c;
        case 0x3152a8u: goto label_3152a8;
        case 0x31533cu: goto label_31533c;
        case 0x315368u: goto label_315368;
        case 0x315428u: goto label_315428;
        case 0x3154b0u: goto label_3154b0;
        case 0x3155e8u: goto label_3155e8;
        case 0x3156e8u: goto label_3156e8;
        case 0x315710u: goto label_315710;
        case 0x315848u: goto label_315848;
        default: break;
    }

    ctx->pc = 0x315050u;

    // 0x315050: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x315050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x315054: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x315054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x315058: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x315058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x31505c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31505cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315060: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x315060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x315064: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x315064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x315068: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x315068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x31506c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31506cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315070: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x315070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x315074: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x315074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x315078: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x315078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31507c: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x31507cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x315080: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x315080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x315084: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x315084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x315088: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x315088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31508c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x31508cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x315090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x315094: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x315094u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x315098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31509c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31509cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3150a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3150a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3150a4: 0xa54018  mult        $t0, $a1, $a1
    ctx->pc = 0x3150a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3150a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3150a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3150ac: 0x56842  srl         $t5, $a1, 1
    ctx->pc = 0x3150acu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x3150b0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3150b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3150b4: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x3150b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3150b8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3150b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x3150bc: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x3150bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3150c0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3150c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3150c4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3150c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3150c8: 0xaf868b28  sw          $a2, -0x74D8($gp)
    ctx->pc = 0x3150c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 6));
    // 0x3150cc: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x3150ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x3150d0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3150d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3150d4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3150d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3150d8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3150d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x3150dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3150dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3150e0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x3150e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x3150e4: 0xaf828b2c  sw          $v0, -0x74D4($gp)
    ctx->pc = 0x3150e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 2));
    // 0x3150e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3150e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3150ec: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x3150ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    // 0x3150f0: 0xd1182  srl         $v0, $t5, 6
    ctx->pc = 0x3150f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), 6));
    // 0x3150f4: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x3150f4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x3150f8: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x3150f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3150fc: 0xaf868b30  sw          $a2, -0x74D0($gp)
    ctx->pc = 0x3150fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 6));
    // 0x315100: 0x812c2  srl         $v0, $t0, 11
    ctx->pc = 0x315100u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 11));
    // 0x315104: 0xfcc90010  sd          $t1, 0x10($a2)
    ctx->pc = 0x315104u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 9));
    // 0x315108: 0xfcc30018  sd          $v1, 0x18($a2)
    ctx->pc = 0x315108u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
    // 0x31510c: 0x24420084  addiu       $v0, $v0, 0x84
    ctx->pc = 0x31510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x315110: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x315110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315114: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x315114u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x315118: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x315118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31511c: 0x71438  dsll        $v0, $a3, 16
    ctx->pc = 0x31511cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 16);
    // 0x315120: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x315120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x315124: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x315124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x315128: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x315128u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x31512c: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x31512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x315130: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x315130u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x315134: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x315134u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x315138: 0x51182  srl         $v0, $a1, 6
    ctx->pc = 0x315138u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x31513c: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x31513cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315140: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x315140u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x315144: 0x913b8  dsll        $v0, $t1, 14
    ctx->pc = 0x315144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << 14);
    // 0x315148: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x315148u;
    SET_GPR_U32(ctx, 31, 0x315150u);
    ctx->pc = 0x31514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315148u;
    // 0x31514c: 0xffa200c0  sd          $v0, 0xC0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x315148u, 0x315150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315150u;
label_315150:
    // 0x315150: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x315150u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315154: 0xdfa200c0  ld          $v0, 0xC0($sp)
    ctx->pc = 0x315154u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x315158: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x315158u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x31515c: 0xa56b8  dsll        $t2, $t2, 26
    ctx->pc = 0x31515cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 26);
    // 0x315160: 0x34421080  ori         $v0, $v0, 0x1080
    ctx->pc = 0x315160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4224);
    // 0x315164: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x315164u;
    SET_GPR_U32(ctx, 31, 0x31516Cu);
    ctx->pc = 0x315168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315164u;
    // 0x315168: 0x4a5025  or          $t2, $v0, $t2 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x315164u, 0x31516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31516Cu;
label_31516c:
    // 0x31516c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x31516cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315170: 0x3c0b0003  lui         $t3, 0x3
    ctx->pc = 0x315170u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)3 << 16));
    // 0x315174: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x315174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x315178: 0x3c022003  lui         $v0, 0x2003
    ctx->pc = 0x315178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8195 << 16));
    // 0x31517c: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x31517cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x315180: 0x3442a58c  ori         $v0, $v0, 0xA58C
    ctx->pc = 0x315180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42380);
    // 0x315184: 0x1442025  or          $a0, $t2, $a0
    ctx->pc = 0x315184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x315188: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x315188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31518c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x31518cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x315190: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x315190u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x315194: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x315194u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x315198: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x315198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31519c: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x31519cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x3151a0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3151a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3151a4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3151a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3151a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3151a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3151ac: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x3151acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    // 0x3151b0: 0xd082b  sltu        $at, $zero, $t5
    ctx->pc = 0x3151b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3151b4: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x3151b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3151b8: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x3151b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x3151bc: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x3151bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x3151c0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3151c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3151c4: 0x344400c0  ori         $a0, $v0, 0xC0
    ctx->pc = 0x3151c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x3151c8: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x3151c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x3151cc: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x3151ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x3151d0: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x3151d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x3151d4: 0x240a0047  addiu       $t2, $zero, 0x47
    ctx->pc = 0x3151d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3151d8: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x3151d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x3151dc: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x3151dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x3151e0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3151e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3151e4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3151e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3151e8: 0xfccb0000  sd          $t3, 0x0($a2)
    ctx->pc = 0x3151e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
    // 0x3151ec: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x3151ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x3151f0: 0xfcca0008  sd          $t2, 0x8($a2)
    ctx->pc = 0x3151f0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 10));
    // 0x3151f4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3151f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3151f8: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x3151f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3151fc: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x3151fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x315200: 0x24040116  addiu       $a0, $zero, 0x116
    ctx->pc = 0x315200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x315204: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x315204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x315208: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x315208u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x31520c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x31520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x315210: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x315210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x315214: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x315214u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x315218: 0xfcca0008  sd          $t2, 0x8($a2)
    ctx->pc = 0x315218u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 10));
    // 0x31521c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x31521cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x315220: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x315220u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x315224: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x315224u;
    {
        const bool branch_taken_0x315224 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x315228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315224u;
        // 0x315228: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315224) {
            ctx->pc = 0x315308u;
            goto label_315308;
        }
    }
    ctx->pc = 0x31522Cu;
    // 0x31522c: 0x25aaffff  addiu       $t2, $t5, -0x1
    ctx->pc = 0x31522cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x315230: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x315230u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x315234: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x315234u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x315238: 0x4703c  dsll32      $t6, $a0, 0
    ctx->pc = 0x315238u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31523c: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x31523cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x315240: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x315240u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x315244: 0xa5c3c  dsll32      $t3, $t2, 16
    ctx->pc = 0x315244u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) << (32 + 16));
    // 0x315248: 0xe2438  dsll        $a0, $t6, 16
    ctx->pc = 0x315248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) << 16);
    // 0x31524c: 0x1c45025  or          $t2, $t6, $a0
    ctx->pc = 0x31524cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) | GPR_U64(ctx, 4));
    // 0x315250: 0x25a40700  addiu       $a0, $t5, 0x700
    ctx->pc = 0x315250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 1792));
    // 0x315254: 0x47100  sll         $t6, $a0, 4
    ctx->pc = 0x315254u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x315258: 0x25a40790  addiu       $a0, $t5, 0x790
    ctx->pc = 0x315258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 1936));
    // 0x31525c: 0xe783c  dsll32      $t7, $t6, 0
    ctx->pc = 0x31525cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) << (32 + 0));
    // 0x315260: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x315260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x315264: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x315264u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x315268: 0x4703c  dsll32      $t6, $a0, 0
    ctx->pc = 0x315268u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31526c: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x31526cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x315270: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x315270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x315274: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x315274u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
    // 0x315278: 0x4803c  dsll32      $s0, $a0, 0
    ctx->pc = 0x315278u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31527c: 0x1ee7025  or          $t6, $t7, $t6
    ctx->pc = 0x31527cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x315280: 0x70102389  pcpyld      $a0, $zero, $s0
    ctx->pc = 0x315280u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x315284: 0x1c42025  or          $a0, $t6, $a0
    ctx->pc = 0x315284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 4));
    // 0x315288: 0x3c0e7900  lui         $t6, 0x7900
    ctx->pc = 0x315288u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)30976 << 16));
    // 0x31528c: 0x24120040  addiu       $s2, $zero, 0x40
    ctx->pc = 0x31528cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x315290: 0x35ce7000  ori         $t6, $t6, 0x7000
    ctx->pc = 0x315290u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)28672);
    // 0x315294: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x315294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x315298: 0x1d07025  or          $t6, $t6, $s0
    ctx->pc = 0x315298u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 16));
    // 0x31529c: 0x240f000d  addiu       $t7, $zero, 0xD
    ctx->pc = 0x31529cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3152a0: 0x700e8389  pcpyld      $s0, $zero, $t6
    ctx->pc = 0x3152a0u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 14)));
    // 0x3152a4: 0x0  nop
    ctx->pc = 0x3152a4u;
    // NOP
label_3152a8:
    // 0x3152a8: 0x258e001f  addiu       $t6, $t4, 0x1F
    ctx->pc = 0x3152a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 31));
    // 0x3152ac: 0xe983c  dsll32      $s3, $t6, 0
    ctx->pc = 0x3152acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 14) << (32 + 0));
    // 0x3152b0: 0xc703c  dsll32      $t6, $t4, 0
    ctx->pc = 0x3152b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) << (32 + 0));
    // 0x3152b4: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x3152b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x3152b8: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x3152b8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x3152bc: 0x139c38  dsll        $s3, $s3, 16
    ctx->pc = 0x3152bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 16);
    // 0x3152c0: 0x1d39825  or          $s3, $t6, $s3
    ctx->pc = 0x3152c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 14) | GPR_U64(ctx, 19));
    // 0x3152c4: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x3152c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x3152c8: 0x1739825  or          $s3, $t3, $s3
    ctx->pc = 0x3152c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 11) | GPR_U64(ctx, 19));
    // 0x3152cc: 0x18d702b  sltu        $t6, $t4, $t5
    ctx->pc = 0x3152ccu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3152d0: 0xfcd30000  sd          $s3, 0x0($a2)
    ctx->pc = 0x3152d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 19));
    // 0x3152d4: 0xfcd20008  sd          $s2, 0x8($a2)
    ctx->pc = 0x3152d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 18));
    // 0x3152d8: 0xfcc00010  sd          $zero, 0x10($a2)
    ctx->pc = 0x3152d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 0));
    // 0x3152dc: 0xfcd10018  sd          $s1, 0x18($a2)
    ctx->pc = 0x3152dcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 17));
    // 0x3152e0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3152e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3152e4: 0xfcd00000  sd          $s0, 0x0($a2)
    ctx->pc = 0x3152e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 16));
    // 0x3152e8: 0xfccf0008  sd          $t7, 0x8($a2)
    ctx->pc = 0x3152e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 15));
    // 0x3152ec: 0xfcca0010  sd          $t2, 0x10($a2)
    ctx->pc = 0x3152ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 10));
    // 0x3152f0: 0xfcd10018  sd          $s1, 0x18($a2)
    ctx->pc = 0x3152f0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 17));
    // 0x3152f4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3152f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3152f8: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x3152f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x3152fc: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x3152fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x315300: 0x15c0ffe9  bnez        $t6, . + 4 + (-0x17 << 2)
    ctx->pc = 0x315300u;
    {
        const bool branch_taken_0x315300 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x315304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315300u;
        // 0x315304: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315300) {
            ctx->pc = 0x3152A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3152a8;
        }
    }
    ctx->pc = 0x315308u;
label_315308:
    // 0x315308: 0x91438  dsll        $v0, $t1, 16
    ctx->pc = 0x315308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << 16);
    // 0x31530c: 0xffa200d0  sd          $v0, 0xD0($sp)
    ctx->pc = 0x31530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 2));
    // 0x315310: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x315310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315314: 0xfcc00000  sd          $zero, 0x0($a2)
    ctx->pc = 0x315314u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
    // 0x315318: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x315318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x31531c: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x31531cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x315320: 0xdfa200d0  ld          $v0, 0xD0($sp)
    ctx->pc = 0x315320u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x315324: 0x34420084  ori         $v0, $v0, 0x84
    ctx->pc = 0x315324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)132);
    // 0x315328: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x315328u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x31532c: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x31532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x315330: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x315330u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x315334: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x315334u;
    SET_GPR_U32(ctx, 31, 0x31533Cu);
    ctx->pc = 0x315338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315334u;
    // 0x315338: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x315334u, 0x31533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31533Cu;
label_31533c:
    // 0x31533c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31533cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315340: 0x84182  srl         $t0, $t0, 6
    ctx->pc = 0x315340u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
    // 0x315344: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x315344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x315348: 0x25081080  addiu       $t0, $t0, 0x1080
    ctx->pc = 0x315348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4224));
    // 0x31534c: 0x24eb8  dsll        $t1, $v0, 26
    ctx->pc = 0x31534cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << 26);
    // 0x315350: 0x73bb8  dsll        $a3, $a3, 14
    ctx->pc = 0x315350u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 14);
    // 0x315354: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x315354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x315358: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x315358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31535c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x31535cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x315360: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x315360u;
    SET_GPR_U32(ctx, 31, 0x315368u);
    ctx->pc = 0x315364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315360u;
    // 0x315364: 0x493825  or          $a3, $v0, $t1 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x315360u, 0x315368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315368u;
label_315368:
    // 0x315368: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x315368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31536c: 0x240c0042  addiu       $t4, $zero, 0x42
    ctx->pc = 0x31536cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x315370: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x315370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x315374: 0xd1100  sll         $v0, $t5, 4
    ctx->pc = 0x315374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x315378: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x315378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x31537c: 0x2c03c  dsll32      $t8, $v0, 0
    ctx->pc = 0x31537cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315380: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x315380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x315384: 0x18c03e  dsrl32      $t8, $t8, 0
    ctx->pc = 0x315384u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) >> (32 + 0));
    // 0x315388: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x315388u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x31538c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x31538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x315390: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x315390u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x315394: 0x2404015c  addiu       $a0, $zero, 0x15C
    ctx->pc = 0x315394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x315398: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x315398u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x31539c: 0x24020088  addiu       $v0, $zero, 0x88
    ctx->pc = 0x31539cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x3153a0: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x3153a0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x3153a4: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x3153a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x3153a8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3153a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3153ac: 0x240b0047  addiu       $t3, $zero, 0x47
    ctx->pc = 0x3153acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3153b0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x3153b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x3153b4: 0x187c38  dsll        $t7, $t8, 16
    ctx->pc = 0x3153b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) << 16);
    // 0x3153b8: 0xfccc0008  sd          $t4, 0x8($a2)
    ctx->pc = 0x3153b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 12));
    // 0x3153bc: 0x511c2  srl         $v0, $a1, 7
    ctx->pc = 0x3153bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x3153c0: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x3153c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
    // 0x3153c4: 0x24a4078f  addiu       $a0, $a1, 0x78F
    ctx->pc = 0x3153c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1935));
    // 0x3153c8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x3153c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x3153cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3153ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3153d0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x3153d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3153d4: 0xfccb0018  sd          $t3, 0x18($a2)
    ctx->pc = 0x3153d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 11));
    // 0x3153d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3153d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3153dc: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x3153dcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3153e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3153e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3153e4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3153e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3153e8: 0xffa200b0  sd          $v0, 0xB0($sp)
    ctx->pc = 0x3153e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 2));
    // 0x3153ec: 0x2f43c  dsll32      $fp, $v0, 16
    ctx->pc = 0x3153ecu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3153f0: 0x30f1025  or          $v0, $t8, $t7
    ctx->pc = 0x3153f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) | GPR_U64(ctx, 15));
    // 0x3153f4: 0xffa200f0  sd          $v0, 0xF0($sp)
    ctx->pc = 0x3153f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 2));
    // 0x3153f8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x3153f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3153fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3153fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315400: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x315400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x315404: 0x27438  dsll        $t6, $v0, 16
    ctx->pc = 0x315404u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << 16);
    // 0x315408: 0x3c040d80  lui         $a0, 0xD80
    ctx->pc = 0x315408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3456 << 16));
    // 0x31540c: 0x34e2000d  ori         $v0, $a3, 0xD
    ctx->pc = 0x31540cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)13);
    // 0x315410: 0x34898080  ori         $t1, $a0, 0x8080
    ctx->pc = 0x315410u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x315414: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x315414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x315418: 0x24a40700  addiu       $a0, $a1, 0x700
    ctx->pc = 0x315418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1792));
    // 0x31541c: 0x24aa06ff  addiu       $t2, $a1, 0x6FF
    ctx->pc = 0x31541cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 1791));
    // 0x315420: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x315420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
    // 0x315424: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x315424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_315428:
    // 0x315428: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x315428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x31542c: 0xf99818  mult        $s3, $a3, $t9
    ctx->pc = 0x31542cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x315430: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x315430u;
    {
        const bool branch_taken_0x315430 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x315434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315430u;
        // 0x315434: 0x139083  sra         $s2, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315430) {
            ctx->pc = 0x315440u;
            goto label_315440;
        }
    }
    ctx->pc = 0x315438u;
    // 0x315438: 0x26670003  addiu       $a3, $s3, 0x3
    ctx->pc = 0x315438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x31543c: 0x79083  sra         $s2, $a3, 2
    ctx->pc = 0x31543cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 7), 2));
label_315440:
    // 0x315440: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x315440u;
    {
        const bool branch_taken_0x315440 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x315444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315440u;
        // 0x315444: 0x138903  sra         $s1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315440) {
            ctx->pc = 0x315450u;
            goto label_315450;
        }
    }
    ctx->pc = 0x315448u;
    // 0x315448: 0x2667000f  addiu       $a3, $s3, 0xF
    ctx->pc = 0x315448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x31544c: 0x78903  sra         $s1, $a3, 4
    ctx->pc = 0x31544cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 4));
label_315450:
    // 0x315450: 0x5082b  sltu        $at, $zero, $a1
    ctx->pc = 0x315450u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x315454: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x315454u;
    {
        const bool branch_taken_0x315454 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x315458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315454u;
        // 0x315458: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315454) {
            ctx->pc = 0x315570u;
            goto label_315570;
        }
    }
    ctx->pc = 0x31545Cu;
    // 0x31545c: 0x2647078f  addiu       $a3, $s2, 0x78F
    ctx->pc = 0x31545cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1935));
    // 0x315460: 0x240d06ff  addiu       $t5, $zero, 0x6FF
    ctx->pc = 0x315460u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1791));
    // 0x315464: 0x1b36823  subu        $t5, $t5, $s3
    ctx->pc = 0x315464u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x315468: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x315468u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x31546c: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x31546cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x315470: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x315470u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x315474: 0x1a76825  or          $t5, $t5, $a3
    ctx->pc = 0x315474u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 7));
    // 0x315478: 0x153a823  subu        $s5, $t2, $s3
    ctx->pc = 0x315478u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 19)));
    // 0x31547c: 0xffad00e0  sd          $t5, 0xE0($sp)
    ctx->pc = 0x31547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 13));
    // 0x315480: 0x156900  sll         $t5, $s5, 4
    ctx->pc = 0x315480u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x315484: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x315484u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x315488: 0x263506ff  addiu       $s5, $s1, 0x6FF
    ctx->pc = 0x315488u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1791));
    // 0x31548c: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x31548cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x315490: 0xed6825  or          $t5, $a3, $t5
    ctx->pc = 0x315490u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x315494: 0x153900  sll         $a3, $s5, 4
    ctx->pc = 0x315494u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x315498: 0xeeb025  or          $s6, $a3, $t6
    ctx->pc = 0x315498u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 7) | GPR_U64(ctx, 14));
    // 0x31549c: 0x1513821  addu        $a3, $t2, $s1
    ctx->pc = 0x31549cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x3154a0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x3154a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x3154a4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x3154a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3154a8: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x3154a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x3154ac: 0x1c7b825  or          $s7, $t6, $a3
    ctx->pc = 0x3154acu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) | GPR_U64(ctx, 7));
label_3154b0:
    // 0x3154b0: 0x2607001f  addiu       $a3, $s0, 0x1F
    ctx->pc = 0x3154b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x3154b4: 0x7a83c  dsll32      $s5, $a3, 0
    ctx->pc = 0x3154b4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3154b8: 0x10383c  dsll32      $a3, $s0, 0
    ctx->pc = 0x3154b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3154bc: 0x15a83f  dsra32      $s5, $s5, 0
    ctx->pc = 0x3154bcu;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x3154c0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x3154c0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x3154c4: 0x15ac38  dsll        $s5, $s5, 16
    ctx->pc = 0x3154c4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << 16);
    // 0x3154c8: 0xf5a825  or          $s5, $a3, $s5
    ctx->pc = 0x3154c8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7) | GPR_U64(ctx, 21));
    // 0x3154cc: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x3154ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3154d0: 0x3d5a825  or          $s5, $fp, $s5
    ctx->pc = 0x3154d0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 30) | GPR_U64(ctx, 21));
    // 0x3154d4: 0x205382b  sltu        $a3, $s0, $a1
    ctx->pc = 0x3154d4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3154d8: 0xfcd50000  sd          $s5, 0x0($a2)
    ctx->pc = 0x3154d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 21));
    // 0x3154dc: 0x24150040  addiu       $s5, $zero, 0x40
    ctx->pc = 0x3154dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3154e0: 0xfcd50008  sd          $s5, 0x8($a2)
    ctx->pc = 0x3154e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 21));
    // 0x3154e4: 0xfcc90010  sd          $t1, 0x10($a2)
    ctx->pc = 0x3154e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 9));
    // 0x3154e8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3154e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3154ec: 0xfcd50018  sd          $s5, 0x18($a2)
    ctx->pc = 0x3154ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 21));
    // 0x3154f0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3154f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3154f4: 0xfcc00000  sd          $zero, 0x0($a2)
    ctx->pc = 0x3154f4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
    // 0x3154f8: 0xfcc80008  sd          $t0, 0x8($a2)
    ctx->pc = 0x3154f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
    // 0x3154fc: 0xdfb500e0  ld          $s5, 0xE0($sp)
    ctx->pc = 0x3154fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x315500: 0xfcd50010  sd          $s5, 0x10($a2)
    ctx->pc = 0x315500u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 21));
    // 0x315504: 0x2415000d  addiu       $s5, $zero, 0xD
    ctx->pc = 0x315504u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x315508: 0xfcd50018  sd          $s5, 0x18($a2)
    ctx->pc = 0x315508u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 21));
    // 0x31550c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x31550cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x315510: 0xfcd80000  sd          $t8, 0x0($a2)
    ctx->pc = 0x315510u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 24));
    // 0x315514: 0xfcc80008  sd          $t0, 0x8($a2)
    ctx->pc = 0x315514u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
    // 0x315518: 0xfccd0010  sd          $t5, 0x10($a2)
    ctx->pc = 0x315518u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 13));
    // 0x31551c: 0xfcd50018  sd          $s5, 0x18($a2)
    ctx->pc = 0x31551cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 21));
    // 0x315520: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x315520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x315524: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x315524u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315528: 0xfcc90000  sd          $t1, 0x0($a2)
    ctx->pc = 0x315528u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
    // 0x31552c: 0xfcd50008  sd          $s5, 0x8($a2)
    ctx->pc = 0x31552cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 21));
    // 0x315530: 0xfccf0010  sd          $t7, 0x10($a2)
    ctx->pc = 0x315530u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 15));
    // 0x315534: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x315534u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x315538: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x315538u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x31553c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x31553cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x315540: 0xfcd60000  sd          $s6, 0x0($a2)
    ctx->pc = 0x315540u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 22));
    // 0x315544: 0xfcd50008  sd          $s5, 0x8($a2)
    ctx->pc = 0x315544u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 21));
    // 0x315548: 0xdfb500f0  ld          $s5, 0xF0($sp)
    ctx->pc = 0x315548u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31554c: 0xfcd50010  sd          $s5, 0x10($a2)
    ctx->pc = 0x31554cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 21));
    // 0x315550: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x315550u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x315554: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x315554u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x315558: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x315558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x31555c: 0xfcd70000  sd          $s7, 0x0($a2)
    ctx->pc = 0x31555cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 23));
    // 0x315560: 0xfcd50008  sd          $s5, 0x8($a2)
    ctx->pc = 0x315560u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 21));
    // 0x315564: 0x14e0ffd2  bnez        $a3, . + 4 + (-0x2E << 2)
    ctx->pc = 0x315564u;
    {
        const bool branch_taken_0x315564 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x315568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315564u;
        // 0x315568: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315564) {
            ctx->pc = 0x3154B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3154b0;
        }
    }
    ctx->pc = 0x31556Cu;
    // 0x31556c: 0x0  nop
    ctx->pc = 0x31556cu;
    // NOP
label_315570:
    // 0x315570: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x315570u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x315574: 0xfccc0008  sd          $t4, 0x8($a2)
    ctx->pc = 0x315574u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 12));
    // 0x315578: 0x5082b  sltu        $at, $zero, $a1
    ctx->pc = 0x315578u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x31557c: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x31557cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x315580: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x315580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315584: 0xfccb0018  sd          $t3, 0x18($a2)
    ctx->pc = 0x315584u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 11));
    // 0x315588: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x315588u;
    {
        const bool branch_taken_0x315588 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315588u;
        // 0x31558c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315588) {
            ctx->pc = 0x3156A0u;
            goto label_3156a0;
        }
    }
    ctx->pc = 0x315590u;
    // 0x315590: 0x264d0790  addiu       $t5, $s2, 0x790
    ctx->pc = 0x315590u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 1936));
    // 0x315594: 0x26700700  addiu       $s0, $s3, 0x700
    ctx->pc = 0x315594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1792));
    // 0x315598: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x315598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31559c: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x31559cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x3155a0: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x3155a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3155a4: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x3155a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x3155a8: 0x20da825  or          $s5, $s0, $t5
    ctx->pc = 0x3155a8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 16) | GPR_U64(ctx, 13));
    // 0x3155ac: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x3155acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x3155b0: 0x128100  sll         $s0, $s2, 4
    ctx->pc = 0x3155b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x3155b4: 0x10903c  dsll32      $s2, $s0, 0
    ctx->pc = 0x3155b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3155b8: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x3155b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x3155bc: 0x241006ff  addiu       $s0, $zero, 0x6FF
    ctx->pc = 0x3155bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1791));
    // 0x3155c0: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x3155c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x3155c4: 0x1b29825  or          $s3, $t5, $s2
    ctx->pc = 0x3155c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 13) | GPR_U64(ctx, 18));
    // 0x3155c8: 0x106900  sll         $t5, $s0, 4
    ctx->pc = 0x3155c8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3155cc: 0x1ae9025  or          $s2, $t5, $t6
    ctx->pc = 0x3155ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x3155d0: 0x1516823  subu        $t5, $t2, $s1
    ctx->pc = 0x3155d0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x3155d4: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x3155d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x3155d8: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x3155d8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3155dc: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x3155dcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x3155e0: 0x1cd8025  or          $s0, $t6, $t5
    ctx->pc = 0x3155e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x3155e4: 0x0  nop
    ctx->pc = 0x3155e4u;
    // NOP
label_3155e8:
    // 0x3155e8: 0x24ed001f  addiu       $t5, $a3, 0x1F
    ctx->pc = 0x3155e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
    // 0x3155ec: 0xd883c  dsll32      $s1, $t5, 0
    ctx->pc = 0x3155ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3155f0: 0x7683c  dsll32      $t5, $a3, 0
    ctx->pc = 0x3155f0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3155f4: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x3155f4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x3155f8: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x3155f8u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x3155fc: 0x118c38  dsll        $s1, $s1, 16
    ctx->pc = 0x3155fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x315600: 0x1b18825  or          $s1, $t5, $s1
    ctx->pc = 0x315600u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 13) | GPR_U64(ctx, 17));
    // 0x315604: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x315604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x315608: 0x3d18825  or          $s1, $fp, $s1
    ctx->pc = 0x315608u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 30) | GPR_U64(ctx, 17));
    // 0x31560c: 0xe5682b  sltu        $t5, $a3, $a1
    ctx->pc = 0x31560cu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x315610: 0xfcd10000  sd          $s1, 0x0($a2)
    ctx->pc = 0x315610u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 17));
    // 0x315614: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x315614u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x315618: 0xfcd10008  sd          $s1, 0x8($a2)
    ctx->pc = 0x315618u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 17));
    // 0x31561c: 0xfcc90010  sd          $t1, 0x10($a2)
    ctx->pc = 0x31561cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 9));
    // 0x315620: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x315620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315624: 0xfcd10018  sd          $s1, 0x18($a2)
    ctx->pc = 0x315624u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 17));
    // 0x315628: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x315628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x31562c: 0x2411000d  addiu       $s1, $zero, 0xD
    ctx->pc = 0x31562cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x315630: 0xfcc00000  sd          $zero, 0x0($a2)
    ctx->pc = 0x315630u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
    // 0x315634: 0xfcc80008  sd          $t0, 0x8($a2)
    ctx->pc = 0x315634u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
    // 0x315638: 0xfcd50010  sd          $s5, 0x10($a2)
    ctx->pc = 0x315638u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 21));
    // 0x31563c: 0xfcd10018  sd          $s1, 0x18($a2)
    ctx->pc = 0x31563cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 17));
    // 0x315640: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x315640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x315644: 0xfcd80000  sd          $t8, 0x0($a2)
    ctx->pc = 0x315644u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 24));
    // 0x315648: 0xfcc80008  sd          $t0, 0x8($a2)
    ctx->pc = 0x315648u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
    // 0x31564c: 0xfcd30010  sd          $s3, 0x10($a2)
    ctx->pc = 0x31564cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 19));
    // 0x315650: 0xfcd10018  sd          $s1, 0x18($a2)
    ctx->pc = 0x315650u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 17));
    // 0x315654: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x315654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x315658: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x315658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31565c: 0xfcc90000  sd          $t1, 0x0($a2)
    ctx->pc = 0x31565cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
    // 0x315660: 0xfcd10008  sd          $s1, 0x8($a2)
    ctx->pc = 0x315660u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 17));
    // 0x315664: 0xfccf0010  sd          $t7, 0x10($a2)
    ctx->pc = 0x315664u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 15));
    // 0x315668: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x315668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31566c: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x31566cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x315670: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x315670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x315674: 0xfcd20000  sd          $s2, 0x0($a2)
    ctx->pc = 0x315674u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 18));
    // 0x315678: 0xfcd10008  sd          $s1, 0x8($a2)
    ctx->pc = 0x315678u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 17));
    // 0x31567c: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x31567cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x315680: 0xfcd10010  sd          $s1, 0x10($a2)
    ctx->pc = 0x315680u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 17));
    // 0x315684: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x315684u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x315688: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x315688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31568c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x31568cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x315690: 0xfcd00000  sd          $s0, 0x0($a2)
    ctx->pc = 0x315690u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 16));
    // 0x315694: 0xfcd10008  sd          $s1, 0x8($a2)
    ctx->pc = 0x315694u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 17));
    // 0x315698: 0x15a0ffd3  bnez        $t5, . + 4 + (-0x2D << 2)
    ctx->pc = 0x315698u;
    {
        const bool branch_taken_0x315698 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x31569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315698u;
        // 0x31569c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315698) {
            ctx->pc = 0x3155E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3155e8;
        }
    }
    ctx->pc = 0x3156A0u;
label_3156a0:
    // 0x3156a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3156a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3156a4: 0x2a870005  slti        $a3, $s4, 0x5
    ctx->pc = 0x3156a4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3156a8: 0x14e0ff5f  bnez        $a3, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x3156A8u;
    {
        const bool branch_taken_0x3156a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3156ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156A8u;
        // 0x3156ac: 0x323c821  addu        $t9, $t9, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3156a8) {
            ctx->pc = 0x315428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315428;
        }
    }
    ctx->pc = 0x3156B0u;
    // 0x3156b0: 0xfcc00000  sd          $zero, 0x0($a2)
    ctx->pc = 0x3156b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
    // 0x3156b4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3156b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3156b8: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x3156b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x3156bc: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x3156bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3156c0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3156c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3156c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3156c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3156c8: 0x34430084  ori         $v1, $v0, 0x84
    ctx->pc = 0x3156c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)132);
    // 0x3156cc: 0xdfa200d0  ld          $v0, 0xD0($sp)
    ctx->pc = 0x3156ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3156d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3156d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3156d4: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x3156d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x3156d8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3156d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3156dc: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x3156dcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x3156e0: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x3156E0u;
    SET_GPR_U32(ctx, 31, 0x3156E8u);
    ctx->pc = 0x3156E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3156E0u;
    // 0x3156e4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x3156E0u, 0x3156E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3156E8u;
label_3156e8:
    // 0x3156e8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3156e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3156ec: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3156ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3156f0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x3156f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x3156f4: 0x43eb8  dsll        $a3, $a0, 26
    ctx->pc = 0x3156f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << 26);
    // 0x3156f8: 0x34441080  ori         $a0, $v0, 0x1080
    ctx->pc = 0x3156f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4224);
    // 0x3156fc: 0xdfa200c0  ld          $v0, 0xC0($sp)
    ctx->pc = 0x3156fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x315700: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x315700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x315704: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x315704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315708: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x315708u;
    SET_GPR_U32(ctx, 31, 0x315710u);
    ctx->pc = 0x31570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315708u;
    // 0x31570c: 0x474025  or          $t0, $v0, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x315708u, 0x315710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315710u;
label_315710:
    // 0x315710: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x315710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315714: 0x24090047  addiu       $t1, $zero, 0x47
    ctx->pc = 0x315714u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x315718: 0xdfa200b0  ld          $v0, 0xB0($sp)
    ctx->pc = 0x315718u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31571c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31571cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x315720: 0x43fb8  dsll        $a3, $a0, 30
    ctx->pc = 0x315720u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << 30);
    // 0x315724: 0x5082b  sltu        $at, $zero, $a1
    ctx->pc = 0x315724u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x315728: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x315728u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x31572c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x31572cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x315730: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x315730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x315734: 0x3444000a  ori         $a0, $v0, 0xA
    ctx->pc = 0x315734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x315738: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x315738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x31573c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31573cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315740: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x315740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x315744: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x315744u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x315748: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x315748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31574c: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x31574cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x315750: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x315750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x315754: 0xfcc00010  sd          $zero, 0x10($a2)
    ctx->pc = 0x315754u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 0));
    // 0x315758: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x315758u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31575c: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x31575cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x315760: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x315760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x315764: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x315764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x315768: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x315768u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x31576c: 0xfcc70000  sd          $a3, 0x0($a2)
    ctx->pc = 0x31576cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
    // 0x315770: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x315770u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x315774: 0x24070116  addiu       $a3, $zero, 0x116
    ctx->pc = 0x315774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x315778: 0xfcc80010  sd          $t0, 0x10($a2)
    ctx->pc = 0x315778u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 8));
    // 0x31577c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x31577cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x315780: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x315780u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315784: 0xfcc90018  sd          $t1, 0x18($a2)
    ctx->pc = 0x315784u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 9));
    // 0x315788: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x315788u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x31578c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x31578cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x315790: 0xfcc70000  sd          $a3, 0x0($a2)
    ctx->pc = 0x315790u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
    // 0x315794: 0x810bc  dsll32      $v0, $t0, 2
    ctx->pc = 0x315794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 2));
    // 0x315798: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x315798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x31579c: 0xfcc00008  sd          $zero, 0x8($a2)
    ctx->pc = 0x31579cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 0));
    // 0x3157a0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3157a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3157a4: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x3157a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x3157a8: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x3157a8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x3157ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3157acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3157b0: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x3157B0u;
    {
        const bool branch_taken_0x3157b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3157B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157B0u;
        // 0x3157b4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3157b0) {
            ctx->pc = 0x3158A8u;
            goto label_3158a8;
        }
    }
    ctx->pc = 0x3157B8u;
    // 0x3157b8: 0x8243c  dsll32      $a0, $t0, 16
    ctx->pc = 0x3157b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 16));
    // 0x3157bc: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3157bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3157c0: 0x24480009  addiu       $t0, $v0, 0x9
    ctx->pc = 0x3157c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x3157c4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x3157c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3157c8: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x3157c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3157cc: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x3157ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x3157d0: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x3157d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x3157d4: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x3157d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3157d8: 0x24620790  addiu       $v0, $v1, 0x790
    ctx->pc = 0x3157d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1936));
    // 0x3157dc: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x3157dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x3157e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3157e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3157e4: 0x81c38  dsll        $v1, $t0, 16
    ctx->pc = 0x3157e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << 16);
    // 0x3157e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3157e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3157ec: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x3157ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x3157f0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3157f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3157f4: 0x24438  dsll        $t0, $v0, 16
    ctx->pc = 0x3157f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 16);
    // 0x3157f8: 0x24a20708  addiu       $v0, $a1, 0x708
    ctx->pc = 0x3157f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1800));
    // 0x3157fc: 0x24900  sll         $t1, $v0, 4
    ctx->pc = 0x3157fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x315800: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x315800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x315804: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x315804u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x315808: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x315808u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x31580c: 0x2583c  dsll32      $t3, $v0, 0
    ctx->pc = 0x31580cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315810: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x315810u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x315814: 0x700b1389  pcpyld      $v0, $zero, $t3
    ctx->pc = 0x315814u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 11)));
    // 0x315818: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x315818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x31581c: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x31581cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
    // 0x315820: 0x240e0040  addiu       $t6, $zero, 0x40
    ctx->pc = 0x315820u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x315824: 0x350d0008  ori         $t5, $t0, 0x8
    ctx->pc = 0x315824u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8);
    // 0x315828: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x315828u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31582c: 0x3c087900  lui         $t0, 0x7900
    ctx->pc = 0x31582cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30976 << 16));
    // 0x315830: 0x240a000d  addiu       $t2, $zero, 0xD
    ctx->pc = 0x315830u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x315834: 0x35087080  ori         $t0, $t0, 0x7080
    ctx->pc = 0x315834u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)28800);
    // 0x315838: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x315838u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31583c: 0x10b4025  or          $t0, $t0, $t3
    ctx->pc = 0x31583cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 11));
    // 0x315840: 0x70085b89  pcpyld      $t3, $zero, $t0
    ctx->pc = 0x315840u;
    SET_GPR_VEC(ctx, 11, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x315844: 0x0  nop
    ctx->pc = 0x315844u;
    // NOP
label_315848:
    // 0x315848: 0x24e8001f  addiu       $t0, $a3, 0x1F
    ctx->pc = 0x315848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
    // 0x31584c: 0x8783c  dsll32      $t7, $t0, 0
    ctx->pc = 0x31584cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) << (32 + 0));
    // 0x315850: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x315850u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x315854: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x315854u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x315858: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x315858u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x31585c: 0xf7c38  dsll        $t7, $t7, 16
    ctx->pc = 0x31585cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 16);
    // 0x315860: 0x10f7825  or          $t7, $t0, $t7
    ctx->pc = 0x315860u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x315864: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x315864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x315868: 0x1e47825  or          $t7, $t7, $a0
    ctx->pc = 0x315868u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 4));
    // 0x31586c: 0xe5402b  sltu        $t0, $a3, $a1
    ctx->pc = 0x31586cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x315870: 0xfccf0000  sd          $t7, 0x0($a2)
    ctx->pc = 0x315870u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 15));
    // 0x315874: 0xfcce0008  sd          $t6, 0x8($a2)
    ctx->pc = 0x315874u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 14));
    // 0x315878: 0xfccd0010  sd          $t5, 0x10($a2)
    ctx->pc = 0x315878u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 13));
    // 0x31587c: 0xfccc0018  sd          $t4, 0x18($a2)
    ctx->pc = 0x31587cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 12));
    // 0x315880: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x315880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x315884: 0xfccb0000  sd          $t3, 0x0($a2)
    ctx->pc = 0x315884u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
    // 0x315888: 0xfcca0008  sd          $t2, 0x8($a2)
    ctx->pc = 0x315888u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 10));
    // 0x31588c: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x31588cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x315890: 0xfccc0018  sd          $t4, 0x18($a2)
    ctx->pc = 0x315890u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 12));
    // 0x315894: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x315894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x315898: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x315898u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x31589c: 0xfcc90008  sd          $t1, 0x8($a2)
    ctx->pc = 0x31589cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 9));
    // 0x3158a0: 0x1500ffe9  bnez        $t0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3158A0u;
    {
        const bool branch_taken_0x3158a0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3158A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158A0u;
        // 0x3158a4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3158a0) {
            ctx->pc = 0x315848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315848;
        }
    }
    ctx->pc = 0x3158A8u;
label_3158a8:
    // 0x3158a8: 0xfcc00000  sd          $zero, 0x0($a2)
    ctx->pc = 0x3158a8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
    // 0x3158ac: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x3158acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3158b0: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x3158b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x3158b4: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x3158b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x3158b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3158b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3158bc: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x3158bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x3158c0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3158c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3158c4: 0xfcc30018  sd          $v1, 0x18($a2)
    ctx->pc = 0x3158c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
    // 0x3158c8: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x3158c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x3158cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3158ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3158d0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3158d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3158d4: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x3158d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x3158d8: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x3158d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3158dc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3158dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3158e0: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x3158e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x3158e4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3158e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3158e8: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x3158e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x3158ec: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x3158ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x3158f0: 0x8c27f014  lw          $a3, -0xFEC($at)
    ctx->pc = 0x3158f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
    // 0x3158f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3158f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3158f8: 0xdce70020  ld          $a3, 0x20($a3)
    ctx->pc = 0x3158f8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3158fc: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x3158fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
    // 0x315900: 0xfcc40018  sd          $a0, 0x18($a2)
    ctx->pc = 0x315900u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 4));
    // 0x315904: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x315904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x315908: 0xfcc00000  sd          $zero, 0x0($a2)
    ctx->pc = 0x315908u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
    // 0x31590c: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x31590cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x315910: 0x8f878b30  lw          $a3, -0x74D0($gp)
    ctx->pc = 0x315910u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x315914: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x315914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x315918: 0x32702  srl         $a0, $v1, 28
    ctx->pc = 0x315918u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x31591c: 0x31e82  srl         $v1, $v1, 26
    ctx->pc = 0x31591cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x315920: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x315920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x315924: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x315924u;
    {
        const bool branch_taken_0x315924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x315928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315924u;
        // 0x315928: 0x3084000f  andi        $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315924) {
            ctx->pc = 0x315970u;
            goto label_315970;
        }
    }
    ctx->pc = 0x31592Cu;
    // 0x31592c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31592cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x315930: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x315930u;
    {
        const bool branch_taken_0x315930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x315930) {
            ctx->pc = 0x315948u;
            goto label_315948;
        }
    }
    ctx->pc = 0x315938u;
    // 0x315938: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x315938u;
    {
        const bool branch_taken_0x315938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x315938) {
            ctx->pc = 0x315948u;
            goto label_315948;
        }
    }
    ctx->pc = 0x315940u;
    // 0x315940: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x315940u;
    {
        const bool branch_taken_0x315940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315940) {
            ctx->pc = 0x3159A8u;
            goto label_3159a8;
        }
    }
    ctx->pc = 0x315948u;
label_315948:
    // 0x315948: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x315948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x31594c: 0x471823  subu        $v1, $v0, $a3
    ctx->pc = 0x31594cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x315950: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x315950u;
    {
        const bool branch_taken_0x315950 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x315954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315950u;
        // 0x315954: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315950) {
            ctx->pc = 0x315960u;
            goto label_315960;
        }
    }
    ctx->pc = 0x315958u;
    // 0x315958: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x315958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x31595c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x31595cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_315960:
    // 0x315960: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x315960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x315964: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x315964u;
    {
        const bool branch_taken_0x315964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315964u;
        // 0x315968: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315964) {
            ctx->pc = 0x3159A8u;
            goto label_3159a8;
        }
    }
    ctx->pc = 0x31596Cu;
    // 0x31596c: 0x0  nop
    ctx->pc = 0x31596cu;
    // NOP
label_315970:
    // 0x315970: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x315970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x315974: 0x471823  subu        $v1, $v0, $a3
    ctx->pc = 0x315974u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x315978: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x315978u;
    {
        const bool branch_taken_0x315978 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x31597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315978u;
        // 0x31597c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315978) {
            ctx->pc = 0x315988u;
            goto label_315988;
        }
    }
    ctx->pc = 0x315980u;
    // 0x315980: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x315980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x315984: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x315984u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_315988:
    // 0x315988: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x315988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31598c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x31598cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x315990: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x315990u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x315994: 0x0  nop
    ctx->pc = 0x315994u;
    // NOP
    // 0x315998: 0x0  nop
    ctx->pc = 0x315998u;
    // NOP
    // 0x31599c: 0x1012  mflo        $v0
    ctx->pc = 0x31599cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3159a0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3159a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3159a4: 0x0  nop
    ctx->pc = 0x3159a4u;
    // NOP
label_3159a8:
    // 0x3159a8: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x3159a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3159ac: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x3159acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3159b0: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x3159b0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3159b4: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x3159b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3159b8: 0x8f848b2c  lw          $a0, -0x74D4($gp)
    ctx->pc = 0x3159b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x3159bc: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x3159bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3159c0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3159C0u;
    {
        const bool branch_taken_0x3159c0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3159C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159C0u;
        // 0x3159c4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3159c0) {
            ctx->pc = 0x3159D0u;
            goto label_3159d0;
        }
    }
    ctx->pc = 0x3159C8u;
    // 0x3159c8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3159c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3159cc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3159ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3159d0:
    // 0x3159d0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3159d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3159d4: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x3159d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x3159d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3159d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3159dc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3159dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x3159e0: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x3159e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3159e4: 0x8f848b28  lw          $a0, -0x74D8($gp)
    ctx->pc = 0x3159e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x3159e8: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x3159e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3159ec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3159ECu;
    {
        const bool branch_taken_0x3159ec = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3159F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159ECu;
        // 0x3159f0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3159ec) {
            ctx->pc = 0x3159FCu;
            goto label_3159fc;
        }
    }
    ctx->pc = 0x3159F4u;
    // 0x3159f4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3159f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3159f8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3159f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3159fc:
    // 0x3159fc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3159fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x315a00: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x315a00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x315a04: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x315a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x315a08: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x315a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x315a0c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x315a0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x315a10: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x315a10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x315a14: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x315a14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x315a18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x315a18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x315a1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x315a1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x315a20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x315a20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x315a24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x315a24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x315a28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x315a28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315a2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x315a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315a30: 0x3e00008  jr          $ra
    ctx->pc = 0x315A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A30u;
        // 0x315a34: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315A38u;
}
