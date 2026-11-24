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

// Function: sub_001468B0
// Address: 0x1468b0 - 0x146aa0
void sub_001468B0_0x1468b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001468B0_0x1468b0");
#endif

    switch (ctx->pc) {
        case 0x146908u: goto label_146908;
        default: break;
    }

    ctx->pc = 0x1468b0u;

    // 0x1468b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1468b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1468b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1468b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1468b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1468b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1468bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1468bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1468c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1468c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1468c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1468c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1468c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1468c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1468cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1468ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1468d0: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x1468d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1468d4: 0x1483006c  bne         $a0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x1468D4u;
    {
        const bool branch_taken_0x1468d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1468D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1468D4u;
        // 0x1468d8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1468d4) {
            ctx->pc = 0x146A88u;
            goto label_146a88;
        }
    }
    ctx->pc = 0x1468DCu;
    // 0x1468dc: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1468dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1468e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1468e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1468e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1468e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1468e8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1468e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1468ec: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1468ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1468f0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1468f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1468f4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1468f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1468f8: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1468f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1468fc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1468fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x146900: 0xc04d7fc  jal         func_135FF0
    ctx->pc = 0x146900u;
    SET_GPR_U32(ctx, 31, 0x146908u);
    ctx->pc = 0x146904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146900u;
    // 0x146904: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FF0u, 0x146900u, 0x146908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146908u;
label_146908:
    // 0x146908: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x146908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14690c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x14690cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x146910: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x146910u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x146914: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x146914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x146918: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x146918u;
    {
        const bool branch_taken_0x146918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146918) {
            ctx->pc = 0x146930u;
            goto label_146930;
        }
    }
    ctx->pc = 0x146920u;
    // 0x146920: 0xc6040024  lwc1        $f4, 0x24($s0)
    ctx->pc = 0x146920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x146924: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x146924u;
    {
        const bool branch_taken_0x146924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146924u;
        // 0x146928: 0x46142040  add.s       $f1, $f4, $f20 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146924) {
            ctx->pc = 0x146958u;
            goto label_146958;
        }
    }
    ctx->pc = 0x14692Cu;
    // 0x14692c: 0x0  nop
    ctx->pc = 0x14692cu;
    // NOP
label_146930:
    // 0x146930: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x146930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x146934: 0xc6040024  lwc1        $f4, 0x24($s0)
    ctx->pc = 0x146934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x146938: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x146938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x14693c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14693cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146940: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x146940u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146944: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x146944u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x146948: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x146948u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x14694c: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x14694cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x146950: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x146950u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x146954: 0x0  nop
    ctx->pc = 0x146954u;
    // NOP
label_146958:
    // 0x146958: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x146958u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14695c: 0x4500004a  bc1f        . + 4 + (0x4A << 2)
    ctx->pc = 0x14695Cu;
    {
        const bool branch_taken_0x14695c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14695c) {
            ctx->pc = 0x146A88u;
            goto label_146a88;
        }
    }
    ctx->pc = 0x146964u;
    // 0x146964: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x146964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x146968: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x146968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14696c: 0x46041883  div.s       $f2, $f3, $f4
    ctx->pc = 0x14696cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    // 0x146970: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x146970u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x146974: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x146974u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x146978: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x146978u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14697c: 0x45010042  bc1t        . + 4 + (0x42 << 2)
    ctx->pc = 0x14697Cu;
    {
        const bool branch_taken_0x14697c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14697c) {
            ctx->pc = 0x146A88u;
            goto label_146a88;
        }
    }
    ctx->pc = 0x146984u;
    // 0x146984: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x146984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146988: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x146988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14698c: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
    ctx->pc = 0x14698Cu;
    {
        const bool branch_taken_0x14698c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14698c) {
            ctx->pc = 0x146A78u;
            goto label_146a78;
        }
    }
    ctx->pc = 0x146994u;
    // 0x146994: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x146994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146998: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x146998u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14699c: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x14699Cu;
    {
        const bool branch_taken_0x14699c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14699c) {
            ctx->pc = 0x146A50u;
            goto label_146a50;
        }
    }
    ctx->pc = 0x1469A4u;
    // 0x1469a4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1469a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1469a8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1469a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1469ac: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1469ACu;
    {
        const bool branch_taken_0x1469ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1469ac) {
            ctx->pc = 0x146A10u;
            goto label_146a10;
        }
    }
    ctx->pc = 0x1469B4u;
    // 0x1469b4: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x1469b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x1469b8: 0xae2300fc  sw          $v1, 0xFC($s1)
    ctx->pc = 0x1469b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 3));
    // 0x1469bc: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x1469bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x1469c0: 0xae2300f8  sw          $v1, 0xF8($s1)
    ctx->pc = 0x1469c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 3));
    // 0x1469c4: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1469c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1469c8: 0xae2300f4  sw          $v1, 0xF4($s1)
    ctx->pc = 0x1469c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
    // 0x1469cc: 0xae3000f0  sw          $s0, 0xF0($s1)
    ctx->pc = 0x1469ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 16));
    // 0x1469d0: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1469d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1469d4: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x1469d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1469d8: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1469d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1469dc: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x1469dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x1469e0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1469e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1469e4: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x1469e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1469e8: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1469e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1469ec: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x1469ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1469f0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1469f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1469f4: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x1469f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1469f8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1469f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1469fc: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x1469fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x146a00: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x146a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x146a04: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x146A04u;
    {
        const bool branch_taken_0x146a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A04u;
        // 0x146a08: 0xe6220004  swc1        $f2, 0x4($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a04) {
            ctx->pc = 0x146A88u;
            goto label_146a88;
        }
    }
    ctx->pc = 0x146A0Cu;
    // 0x146a0c: 0x0  nop
    ctx->pc = 0x146a0cu;
    // NOP
label_146a10:
    // 0x146a10: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x146a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x146a14: 0xae2300fc  sw          $v1, 0xFC($s1)
    ctx->pc = 0x146a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 3));
    // 0x146a18: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x146a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x146a1c: 0xae2300f8  sw          $v1, 0xF8($s1)
    ctx->pc = 0x146a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 3));
    // 0x146a20: 0xae3000f4  sw          $s0, 0xF4($s1)
    ctx->pc = 0x146a20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 16));
    // 0x146a24: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x146a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146a28: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x146a28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x146a2c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x146a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146a30: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x146a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x146a34: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x146a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146a38: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x146a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x146a3c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x146a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146a40: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x146a40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x146a44: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x146a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x146a48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x146A48u;
    {
        const bool branch_taken_0x146a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A48u;
        // 0x146a4c: 0xe622000c  swc1        $f2, 0xC($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a48) {
            ctx->pc = 0x146A88u;
            goto label_146a88;
        }
    }
    ctx->pc = 0x146A50u;
label_146a50:
    // 0x146a50: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x146a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x146a54: 0xae2300fc  sw          $v1, 0xFC($s1)
    ctx->pc = 0x146a54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 3));
    // 0x146a58: 0xae3000f8  sw          $s0, 0xF8($s1)
    ctx->pc = 0x146a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 16));
    // 0x146a5c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x146a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146a60: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x146a60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x146a64: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x146a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146a68: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x146a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x146a6c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x146a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x146a70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x146A70u;
    {
        const bool branch_taken_0x146a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A70u;
        // 0x146a74: 0xe6220014  swc1        $f2, 0x14($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a70) {
            ctx->pc = 0x146A88u;
            goto label_146a88;
        }
    }
    ctx->pc = 0x146A78u;
label_146a78:
    // 0x146a78: 0xae3000fc  sw          $s0, 0xFC($s1)
    ctx->pc = 0x146a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 16));
    // 0x146a7c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x146a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x146a80: 0xe622001c  swc1        $f2, 0x1C($s1)
    ctx->pc = 0x146a80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x146a84: 0x0  nop
    ctx->pc = 0x146a84u;
    // NOP
label_146a88:
    // 0x146a88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x146a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146a8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x146a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146a90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x146a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x146a94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x146a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146a98: 0x3e00008  jr          $ra
    ctx->pc = 0x146A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A98u;
        // 0x146a9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146AA0u;
}
