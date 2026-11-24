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

// Function: sub_003DC470
// Address: 0x3dc470 - 0x3dc884
void sub_003DC470_0x3dc470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC470_0x3dc470");
#endif

    switch (ctx->pc) {
        case 0x3dc4acu: goto label_3dc4ac;
        case 0x3dc640u: goto label_3dc640;
        case 0x3dc64cu: goto label_3dc64c;
        case 0x3dc6a8u: goto label_3dc6a8;
        case 0x3dc6b4u: goto label_3dc6b4;
        case 0x3dc728u: goto label_3dc728;
        case 0x3dc734u: goto label_3dc734;
        case 0x3dc7d0u: goto label_3dc7d0;
        case 0x3dc830u: goto label_3dc830;
        case 0x3dc848u: goto label_3dc848;
        default: break;
    }

    ctx->pc = 0x3dc470u;

    // 0x3dc470: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3dc470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3dc474: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3dc474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3dc478: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3dc478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3dc47c: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x3dc47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x3dc480: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3dc480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3dc484: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dc484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3dc488: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3dc488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc48c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dc48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dc490: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3dc490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3dc494: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dc494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dc498: 0x87868454  lh          $a2, -0x7BAC($gp)
    ctx->pc = 0x3dc498u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935636)));
    // 0x3dc49c: 0x93858456  lbu         $a1, -0x7BAA($gp)
    ctx->pc = 0x3dc49cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935638)));
    // 0x3dc4a0: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x3dc4a0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3dc4a4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DC4A4u;
    {
        const bool branch_taken_0x3dc4a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC4A4u;
        // 0x3dc4a8: 0xa0e50002  sb          $a1, 0x2($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc4a4) {
            ctx->pc = 0x3DC4C8u;
            goto label_3dc4c8;
        }
    }
    ctx->pc = 0x3DC4ACu;
label_3dc4ac:
    // 0x3dc4ac: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3dc4acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dc4b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3dc4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3dc4b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dc4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dc4b8: 0x0  nop
    ctx->pc = 0x3dc4b8u;
    // NOP
    // 0x3dc4bc: 0x0  nop
    ctx->pc = 0x3dc4bcu;
    // NOP
    // 0x3dc4c0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3DC4C0u;
    {
        const bool branch_taken_0x3dc4c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dc4c0) {
            ctx->pc = 0x3DC4ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc4ac;
        }
    }
    ctx->pc = 0x3DC4C8u;
label_3dc4c8:
    // 0x3dc4c8: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3dc4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dc4cc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3dc4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3dc4d0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3dc4d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3dc4d4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3dc4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3dc4d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dc4d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dc4dc: 0x0  nop
    ctx->pc = 0x3dc4dcu;
    // NOP
    // 0x3dc4e0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3dc4e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3dc4e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3dc4e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dc4e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DC4E8u;
    {
        const bool branch_taken_0x3dc4e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dc4e8) {
            ctx->pc = 0x3DC500u;
            goto label_3dc500;
        }
    }
    ctx->pc = 0x3DC4F0u;
    // 0x3dc4f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dc4f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3dc4f4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3dc4f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3dc4f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DC4F8u;
    {
        const bool branch_taken_0x3dc4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC4F8u;
        // 0x3dc4fc: 0xc7818078  lwc1        $f1, -0x7F88($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc4f8) {
            ctx->pc = 0x3DC51Cu;
            goto label_3dc51c;
        }
    }
    ctx->pc = 0x3DC500u;
label_3dc500:
    // 0x3dc500: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3dc500u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3dc504: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3dc504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3dc508: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dc508u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3dc50c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3dc50cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3dc510: 0x0  nop
    ctx->pc = 0x3dc510u;
    // NOP
    // 0x3dc514: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3dc514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3dc518: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3dc518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dc51c:
    // 0x3dc51c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x3dc51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x3dc520: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3dc520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3dc524: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3dc524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3dc528: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dc528u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dc52c: 0x0  nop
    ctx->pc = 0x3dc52cu;
    // NOP
    // 0x3dc530: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3dc530u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3dc534: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3dc534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dc538: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DC538u;
    {
        const bool branch_taken_0x3dc538 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC538u;
        // 0x3dc53c: 0xa7a40070  sh          $a0, 0x70($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc538) {
            ctx->pc = 0x3DC550u;
            goto label_3dc550;
        }
    }
    ctx->pc = 0x3DC540u;
    // 0x3dc540: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dc540u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3dc544: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3dc544u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3dc548: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DC548u;
    {
        const bool branch_taken_0x3dc548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC548u;
        // 0x3dc54c: 0xc7818078  lwc1        $f1, -0x7F88($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc548) {
            ctx->pc = 0x3DC56Cu;
            goto label_3dc56c;
        }
    }
    ctx->pc = 0x3DC550u;
label_3dc550:
    // 0x3dc550: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3dc550u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3dc554: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3dc554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3dc558: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dc558u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3dc55c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3dc55cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3dc560: 0x0  nop
    ctx->pc = 0x3dc560u;
    // NOP
    // 0x3dc564: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3dc564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3dc568: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3dc568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dc56c:
    // 0x3dc56c: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x3dc56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x3dc570: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3dc570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3dc574: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3dc574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3dc578: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dc578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dc57c: 0x0  nop
    ctx->pc = 0x3dc57cu;
    // NOP
    // 0x3dc580: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3dc580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3dc584: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3dc584u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dc588: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DC588u;
    {
        const bool branch_taken_0x3dc588 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC588u;
        // 0x3dc58c: 0xa7a40072  sh          $a0, 0x72($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc588) {
            ctx->pc = 0x3DC5A0u;
            goto label_3dc5a0;
        }
    }
    ctx->pc = 0x3DC590u;
    // 0x3dc590: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dc590u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3dc594: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3dc594u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3dc598: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DC598u;
    {
        const bool branch_taken_0x3dc598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC598u;
        // 0x3dc59c: 0xc7818078  lwc1        $f1, -0x7F88($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc598) {
            ctx->pc = 0x3DC5BCu;
            goto label_3dc5bc;
        }
    }
    ctx->pc = 0x3DC5A0u;
label_3dc5a0:
    // 0x3dc5a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3dc5a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3dc5a4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3dc5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3dc5a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dc5a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3dc5ac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3dc5acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3dc5b0: 0x0  nop
    ctx->pc = 0x3dc5b0u;
    // NOP
    // 0x3dc5b4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3dc5b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3dc5b8: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3dc5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dc5bc:
    // 0x3dc5bc: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3dc5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x3dc5c0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3dc5c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3dc5c4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3dc5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3dc5c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dc5c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dc5cc: 0x0  nop
    ctx->pc = 0x3dc5ccu;
    // NOP
    // 0x3dc5d0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3dc5d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3dc5d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3dc5d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dc5d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DC5D8u;
    {
        const bool branch_taken_0x3dc5d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DC5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC5D8u;
        // 0x3dc5dc: 0xa7a40074  sh          $a0, 0x74($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 116), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc5d8) {
            ctx->pc = 0x3DC5F0u;
            goto label_3dc5f0;
        }
    }
    ctx->pc = 0x3DC5E0u;
    // 0x3dc5e0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dc5e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3dc5e4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3dc5e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3dc5e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DC5E8u;
    {
        const bool branch_taken_0x3dc5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC5E8u;
        // 0x3dc5ec: 0xa7a40076  sh          $a0, 0x76($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 118), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc5e8) {
            ctx->pc = 0x3DC60Cu;
            goto label_3dc60c;
        }
    }
    ctx->pc = 0x3DC5F0u;
label_3dc5f0:
    // 0x3dc5f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3dc5f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3dc5f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3dc5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3dc5f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dc5f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3dc5fc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3dc5fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3dc600: 0x0  nop
    ctx->pc = 0x3dc600u;
    // NOP
    // 0x3dc604: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3dc604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3dc608: 0xa7a40076  sh          $a0, 0x76($sp)
    ctx->pc = 0x3dc608u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 118), (uint16_t)GPR_U32(ctx, 4));
label_3dc60c:
    // 0x3dc60c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dc60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3dc610: 0x92642bd9  lbu         $a0, 0x2BD9($s3)
    ctx->pc = 0x3dc610u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11225)));
    // 0x3dc614: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x3DC614u;
    {
        const bool branch_taken_0x3dc614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC614u;
        // 0x3dc618: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc614) {
            ctx->pc = 0x3DC720u;
            goto label_3dc720;
        }
    }
    ctx->pc = 0x3DC61Cu;
    // 0x3dc61c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dc61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dc620: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3DC620u;
    {
        const bool branch_taken_0x3dc620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dc620) {
            ctx->pc = 0x3DC6A0u;
            goto label_3dc6a0;
        }
    }
    ctx->pc = 0x3DC628u;
    // 0x3dc628: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DC628u;
    {
        const bool branch_taken_0x3dc628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc628) {
            ctx->pc = 0x3DC638u;
            goto label_3dc638;
        }
    }
    ctx->pc = 0x3DC630u;
    // 0x3dc630: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x3DC630u;
    {
        const bool branch_taken_0x3dc630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc630) {
            ctx->pc = 0x3DC798u;
            goto label_3dc798;
        }
    }
    ctx->pc = 0x3DC638u;
label_3dc638:
    // 0x3dc638: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3DC638u;
    SET_GPR_U32(ctx, 31, 0x3DC640u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3DC638u, 0x3DC640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC640u;
label_3dc640:
    // 0x3dc640: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3dc640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3dc644: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3DC644u;
    SET_GPR_U32(ctx, 31, 0x3DC64Cu);
    ctx->pc = 0x3DC648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC644u;
    // 0x3dc648: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3DC644u, 0x3DC64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC64Cu;
label_3dc64c:
    // 0x3dc64c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3dc64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3dc650: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3dc650u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3dc654: 0x2c61001e  sltiu       $at, $v1, 0x1E
    ctx->pc = 0x3dc654u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x3dc658: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DC658u;
    {
        const bool branch_taken_0x3dc658 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc658) {
            ctx->pc = 0x3DC668u;
            goto label_3dc668;
        }
    }
    ctx->pc = 0x3DC660u;
    // 0x3dc660: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3DC660u;
    {
        const bool branch_taken_0x3dc660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC660u;
        // 0x3dc664: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc660) {
            ctx->pc = 0x3DC688u;
            goto label_3dc688;
        }
    }
    ctx->pc = 0x3DC668u;
label_3dc668:
    // 0x3dc668: 0x2c610046  sltiu       $at, $v1, 0x46
    ctx->pc = 0x3dc668u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
    // 0x3dc66c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC66Cu;
    {
        const bool branch_taken_0x3dc66c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc66c) {
            ctx->pc = 0x3DC680u;
            goto label_3dc680;
        }
    }
    ctx->pc = 0x3DC674u;
    // 0x3dc674: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC674u;
    {
        const bool branch_taken_0x3dc674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC674u;
        // 0x3dc678: 0x64030002  daddiu      $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc674) {
            ctx->pc = 0x3DC688u;
            goto label_3dc688;
        }
    }
    ctx->pc = 0x3DC67Cu;
    // 0x3dc67c: 0x0  nop
    ctx->pc = 0x3dc67cu;
    // NOP
label_3dc680:
    // 0x3dc680: 0x64030003  daddiu      $v1, $zero, 0x3
    ctx->pc = 0x3dc680u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x3dc684: 0x0  nop
    ctx->pc = 0x3dc684u;
    // NOP
label_3dc688:
    // 0x3dc688: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3dc688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3dc68c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3dc68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3dc690: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3dc690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3dc694: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3DC694u;
    {
        const bool branch_taken_0x3dc694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC694u;
        // 0x3dc698: 0x84720070  lh          $s2, 0x70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc694) {
            ctx->pc = 0x3DC798u;
            goto label_3dc798;
        }
    }
    ctx->pc = 0x3DC69Cu;
    // 0x3dc69c: 0x0  nop
    ctx->pc = 0x3dc69cu;
    // NOP
label_3dc6a0:
    // 0x3dc6a0: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3DC6A0u;
    SET_GPR_U32(ctx, 31, 0x3DC6A8u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3DC6A0u, 0x3DC6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC6A8u;
label_3dc6a8:
    // 0x3dc6a8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3dc6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3dc6ac: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3DC6ACu;
    SET_GPR_U32(ctx, 31, 0x3DC6B4u);
    ctx->pc = 0x3DC6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC6ACu;
    // 0x3dc6b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3DC6ACu, 0x3DC6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC6B4u;
label_3dc6b4:
    // 0x3dc6b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3dc6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3dc6b8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3dc6b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3dc6bc: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x3dc6bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3dc6c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DC6C0u;
    {
        const bool branch_taken_0x3dc6c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc6c0) {
            ctx->pc = 0x3DC6D0u;
            goto label_3dc6d0;
        }
    }
    ctx->pc = 0x3DC6C8u;
    // 0x3dc6c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3DC6C8u;
    {
        const bool branch_taken_0x3dc6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6C8u;
        // 0x3dc6cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc6c8) {
            ctx->pc = 0x3DC708u;
            goto label_3dc708;
        }
    }
    ctx->pc = 0x3DC6D0u;
label_3dc6d0:
    // 0x3dc6d0: 0x2c610032  sltiu       $at, $v1, 0x32
    ctx->pc = 0x3dc6d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x3dc6d4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC6D4u;
    {
        const bool branch_taken_0x3dc6d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc6d4) {
            ctx->pc = 0x3DC6E8u;
            goto label_3dc6e8;
        }
    }
    ctx->pc = 0x3DC6DCu;
    // 0x3dc6dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3DC6DCu;
    {
        const bool branch_taken_0x3dc6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6DCu;
        // 0x3dc6e0: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc6dc) {
            ctx->pc = 0x3DC708u;
            goto label_3dc708;
        }
    }
    ctx->pc = 0x3DC6E4u;
    // 0x3dc6e4: 0x0  nop
    ctx->pc = 0x3dc6e4u;
    // NOP
label_3dc6e8:
    // 0x3dc6e8: 0x2c610050  sltiu       $at, $v1, 0x50
    ctx->pc = 0x3dc6e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x3dc6ec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC6ECu;
    {
        const bool branch_taken_0x3dc6ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc6ec) {
            ctx->pc = 0x3DC700u;
            goto label_3dc700;
        }
    }
    ctx->pc = 0x3DC6F4u;
    // 0x3dc6f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC6F4u;
    {
        const bool branch_taken_0x3dc6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6F4u;
        // 0x3dc6f8: 0x64030002  daddiu      $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc6f4) {
            ctx->pc = 0x3DC708u;
            goto label_3dc708;
        }
    }
    ctx->pc = 0x3DC6FCu;
    // 0x3dc6fc: 0x0  nop
    ctx->pc = 0x3dc6fcu;
    // NOP
label_3dc700:
    // 0x3dc700: 0x64030003  daddiu      $v1, $zero, 0x3
    ctx->pc = 0x3dc700u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x3dc704: 0x0  nop
    ctx->pc = 0x3dc704u;
    // NOP
label_3dc708:
    // 0x3dc708: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3dc708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3dc70c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3dc70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3dc710: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3dc710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3dc714: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3DC714u;
    {
        const bool branch_taken_0x3dc714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC714u;
        // 0x3dc718: 0x84720070  lh          $s2, 0x70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc714) {
            ctx->pc = 0x3DC798u;
            goto label_3dc798;
        }
    }
    ctx->pc = 0x3DC71Cu;
    // 0x3dc71c: 0x0  nop
    ctx->pc = 0x3dc71cu;
    // NOP
label_3dc720:
    // 0x3dc720: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3DC720u;
    SET_GPR_U32(ctx, 31, 0x3DC728u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3DC720u, 0x3DC728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC728u;
label_3dc728:
    // 0x3dc728: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3dc728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3dc72c: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3DC72Cu;
    SET_GPR_U32(ctx, 31, 0x3DC734u);
    ctx->pc = 0x3DC730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC72Cu;
    // 0x3dc730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3DC72Cu, 0x3DC734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC734u;
label_3dc734:
    // 0x3dc734: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3dc734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3dc738: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3dc738u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3dc73c: 0x2c610032  sltiu       $at, $v1, 0x32
    ctx->pc = 0x3dc73cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x3dc740: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DC740u;
    {
        const bool branch_taken_0x3dc740 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc740) {
            ctx->pc = 0x3DC750u;
            goto label_3dc750;
        }
    }
    ctx->pc = 0x3DC748u;
    // 0x3dc748: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3DC748u;
    {
        const bool branch_taken_0x3dc748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC748u;
        // 0x3dc74c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc748) {
            ctx->pc = 0x3DC788u;
            goto label_3dc788;
        }
    }
    ctx->pc = 0x3DC750u;
label_3dc750:
    // 0x3dc750: 0x2c610064  sltiu       $at, $v1, 0x64
    ctx->pc = 0x3dc750u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x3dc754: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC754u;
    {
        const bool branch_taken_0x3dc754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc754) {
            ctx->pc = 0x3DC768u;
            goto label_3dc768;
        }
    }
    ctx->pc = 0x3DC75Cu;
    // 0x3dc75c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3DC75Cu;
    {
        const bool branch_taken_0x3dc75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC75Cu;
        // 0x3dc760: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc75c) {
            ctx->pc = 0x3DC788u;
            goto label_3dc788;
        }
    }
    ctx->pc = 0x3DC764u;
    // 0x3dc764: 0x0  nop
    ctx->pc = 0x3dc764u;
    // NOP
label_3dc768:
    // 0x3dc768: 0x2c610064  sltiu       $at, $v1, 0x64
    ctx->pc = 0x3dc768u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x3dc76c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC76Cu;
    {
        const bool branch_taken_0x3dc76c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc76c) {
            ctx->pc = 0x3DC780u;
            goto label_3dc780;
        }
    }
    ctx->pc = 0x3DC774u;
    // 0x3dc774: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC774u;
    {
        const bool branch_taken_0x3dc774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC774u;
        // 0x3dc778: 0x64030002  daddiu      $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc774) {
            ctx->pc = 0x3DC788u;
            goto label_3dc788;
        }
    }
    ctx->pc = 0x3DC77Cu;
    // 0x3dc77c: 0x0  nop
    ctx->pc = 0x3dc77cu;
    // NOP
label_3dc780:
    // 0x3dc780: 0x64030003  daddiu      $v1, $zero, 0x3
    ctx->pc = 0x3dc780u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x3dc784: 0x0  nop
    ctx->pc = 0x3dc784u;
    // NOP
label_3dc788:
    // 0x3dc788: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3dc788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3dc78c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3dc78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3dc790: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3dc790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3dc794: 0x84720070  lh          $s2, 0x70($v1)
    ctx->pc = 0x3dc794u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3dc798:
    // 0x3dc798: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x3dc798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3dc79c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3dc79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dc7a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3dc7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc7a4: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x3dc7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3dc7a8: 0x24630280  addiu       $v1, $v1, 0x280
    ctx->pc = 0x3dc7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
    // 0x3dc7ac: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x3dc7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x3dc7b0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3dc7b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dc7b4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3dc7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3dc7b8: 0x92632bd9  lbu         $v1, 0x2BD9($s3)
    ctx->pc = 0x3dc7b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11225)));
    // 0x3dc7bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3dc7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3dc7c0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3dc7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3dc7c4: 0x9063007c  lbu         $v1, 0x7C($v1)
    ctx->pc = 0x3dc7c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x3dc7c8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3DC7C8u;
    {
        const bool branch_taken_0x3dc7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC7C8u;
        // 0x3dc7cc: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc7c8) {
            ctx->pc = 0x3DC850u;
            goto label_3dc850;
        }
    }
    ctx->pc = 0x3DC7D0u;
label_3dc7d0:
    // 0x3dc7d0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3dc7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3dc7d4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3dc7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3dc7d8: 0x866500c2  lh          $a1, 0xC2($s3)
    ctx->pc = 0x3dc7d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x3dc7dc: 0x24020155  addiu       $v0, $zero, 0x155
    ctx->pc = 0x3dc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 341));
    // 0x3dc7e0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3dc7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3dc7e4: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x3dc7e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3dc7e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3dc7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3dc7ec: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3dc7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3dc7f0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x3dc7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3dc7f4: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3dc7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3dc7f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dc7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dc7fc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3dc7fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3dc800: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x3dc800u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3dc804: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3dc804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3dc808: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3dc808u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3dc80c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3dc80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3dc810: 0x0  nop
    ctx->pc = 0x3dc810u;
    // NOP
    // 0x3dc814: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3dc814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3dc818: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3dc818u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3dc81c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3dc81cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3dc820: 0x0  nop
    ctx->pc = 0x3dc820u;
    // NOP
    // 0x3dc824: 0x0  nop
    ctx->pc = 0x3dc824u;
    // NOP
    // 0x3dc828: 0xc096784  jal         func_259E10
    ctx->pc = 0x3DC828u;
    SET_GPR_U32(ctx, 31, 0x3DC830u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x3DC828u, 0x3DC830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC830u;
label_3dc830:
    // 0x3dc830: 0x926408e8  lbu         $a0, 0x8E8($s3)
    ctx->pc = 0x3dc830u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x3dc834: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3dc834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc838: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3dc838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dc83c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x3dc83cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3dc840: 0xc0bc8a4  jal         func_2F2290
    ctx->pc = 0x3DC840u;
    SET_GPR_U32(ctx, 31, 0x3DC848u);
    ctx->pc = 0x3DC844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC840u;
    // 0x3dc844: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2290u, 0x3DC840u, 0x3DC848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC848u;
label_3dc848:
    // 0x3dc848: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3dc848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3dc84c: 0x0  nop
    ctx->pc = 0x3dc84cu;
    // NOP
label_3dc850:
    // 0x3dc850: 0x92632bd9  lbu         $v1, 0x2BD9($s3)
    ctx->pc = 0x3dc850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11225)));
    // 0x3dc854: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3dc854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3dc858: 0x9063007c  lbu         $v1, 0x7C($v1)
    ctx->pc = 0x3dc858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x3dc85c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3dc85cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dc860: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3DC860u;
    {
        const bool branch_taken_0x3dc860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dc860) {
            ctx->pc = 0x3DC7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc7d0;
        }
    }
    ctx->pc = 0x3DC868u;
    // 0x3dc868: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3dc868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3dc86c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3dc86cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dc870: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dc870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dc874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dc874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dc878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dc878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc87c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC87Cu;
        // 0x3dc880: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC884u;
}
