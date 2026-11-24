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

// Function: sub_00374220
// Address: 0x374220 - 0x3743d8
void sub_00374220_0x374220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374220_0x374220");
#endif

    switch (ctx->pc) {
        case 0x3742d0u: goto label_3742d0;
        case 0x3743c8u: goto label_3743c8;
        default: break;
    }

    ctx->pc = 0x374220u;

    // 0x374220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x374220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x374224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x374224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x374228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x374228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37422c: 0x90822b28  lbu         $v0, 0x2B28($a0)
    ctx->pc = 0x37422cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11048)));
    // 0x374230: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x374230u;
    {
        const bool branch_taken_0x374230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x374234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374230u;
        // 0x374234: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374230) {
            ctx->pc = 0x3742D8u;
            goto label_3742d8;
        }
    }
    ctx->pc = 0x374238u;
    // 0x374238: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x374238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x37423c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x37423cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374240: 0x2442ad20  addiu       $v0, $v0, -0x52E0
    ctx->pc = 0x374240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946080));
    // 0x374244: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x374244u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x65AD20u));
    // 0x374248: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x374248u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x37424c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x37424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x374250: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x374250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x374254: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x374254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x374258: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x374258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x37425c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x37425cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x374260: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x374260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x374264: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x374264u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x374268: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x374268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37426c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37426cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374270: 0x0  nop
    ctx->pc = 0x374270u;
    // NOP
    // 0x374274: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x374274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x374278: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x374278u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37427c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37427Cu;
    {
        const bool branch_taken_0x37427c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37427c) {
            ctx->pc = 0x374294u;
            goto label_374294;
        }
    }
    ctx->pc = 0x374284u;
    // 0x374284: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x374284u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x374288: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x374288u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x37428c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37428Cu;
    {
        const bool branch_taken_0x37428c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37428Cu;
        // 0x374290: 0x3543c  dsll32      $t2, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37428c) {
            ctx->pc = 0x3742B0u;
            goto label_3742b0;
        }
    }
    ctx->pc = 0x374294u;
label_374294:
    // 0x374294: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x374294u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x374298: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x374298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37429c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37429cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3742a0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3742a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3742a4: 0x0  nop
    ctx->pc = 0x3742a4u;
    // NOP
    // 0x3742a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3742a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3742ac: 0x3543c  dsll32      $t2, $v1, 16
    ctx->pc = 0x3742acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
label_3742b0:
    // 0x3742b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3742b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3742b4: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x3742b4u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x3742b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3742b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3742bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3742bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3742c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3742c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3742c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3742c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3742c8: 0xc0a90f4  jal         func_2A43D0
    ctx->pc = 0x3742C8u;
    SET_GPR_U32(ctx, 31, 0x3742D0u);
    ctx->pc = 0x3742CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3742C8u;
    // 0x3742cc: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A43D0u, 0x3742C8u, 0x3742D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3742D0u;
label_3742d0:
    // 0x3742d0: 0xa2002b28  sb          $zero, 0x2B28($s0)
    ctx->pc = 0x3742d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11048), (uint8_t)GPR_U32(ctx, 0));
    // 0x3742d4: 0x0  nop
    ctx->pc = 0x3742d4u;
    // NOP
label_3742d8:
    // 0x3742d8: 0x92022b24  lbu         $v0, 0x2B24($s0)
    ctx->pc = 0x3742d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x3742dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3742DCu;
    {
        const bool branch_taken_0x3742dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3742dc) {
            ctx->pc = 0x374328u;
            goto label_374328;
        }
    }
    ctx->pc = 0x3742E4u;
    // 0x3742e4: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x3742e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3742e8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3742e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3742ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3742ECu;
    {
        const bool branch_taken_0x3742ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3742ec) {
            ctx->pc = 0x374328u;
            goto label_374328;
        }
    }
    ctx->pc = 0x3742F4u;
    // 0x3742f4: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x3742f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3742f8: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x3742f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x3742fc: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x3742fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x374300: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x374300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x374304: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x374304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x374308: 0xae0206cc  sw          $v0, 0x6CC($s0)
    ctx->pc = 0x374308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    // 0x37430c: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x37430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x374310: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x374310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x374314: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x374314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x374318: 0x9202083b  lbu         $v0, 0x83B($s0)
    ctx->pc = 0x374318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x37431c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x37431cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x374320: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x374320u;
    {
        const bool branch_taken_0x374320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374320u;
        // 0x374324: 0xa202083b  sb          $v0, 0x83B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2107), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374320) {
            ctx->pc = 0x374358u;
            goto label_374358;
        }
    }
    ctx->pc = 0x374328u;
label_374328:
    // 0x374328: 0x9203083b  lbu         $v1, 0x83B($s0)
    ctx->pc = 0x374328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x37432c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37432cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x374330: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x374330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x374334: 0xa203083b  sb          $v1, 0x83B($s0)
    ctx->pc = 0x374334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2107), (uint8_t)GPR_U32(ctx, 3));
    // 0x374338: 0xa20029d1  sb          $zero, 0x29D1($s0)
    ctx->pc = 0x374338u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10705), (uint8_t)GPR_U32(ctx, 0));
    // 0x37433c: 0xae0207b8  sw          $v0, 0x7B8($s0)
    ctx->pc = 0x37433cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 2));
    // 0x374340: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x374340u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x374344: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x374344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x374348: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x374348u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x37434c: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x37434cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x374350: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x374350u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x374354: 0xae022b20  sw          $v0, 0x2B20($s0)
    ctx->pc = 0x374354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11040), GPR_U32(ctx, 2));
label_374358:
    // 0x374358: 0x92022b24  lbu         $v0, 0x2B24($s0)
    ctx->pc = 0x374358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x37435c: 0xa2022b25  sb          $v0, 0x2B25($s0)
    ctx->pc = 0x37435cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11045), (uint8_t)GPR_U32(ctx, 2));
    // 0x374360: 0x92022b27  lbu         $v0, 0x2B27($s0)
    ctx->pc = 0x374360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11047)));
    // 0x374364: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x374364u;
    {
        const bool branch_taken_0x374364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x374364) {
            ctx->pc = 0x3743A0u;
            goto label_3743a0;
        }
    }
    ctx->pc = 0x37436Cu;
    // 0x37436c: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x37436cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x374370: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x374370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x374374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374378: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x374378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x37437c: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x37437cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x374380: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x374380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x374384: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x374384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x374388: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x374388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x37438c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x37438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x374390: 0xc60128f0  lwc1        $f1, 0x28F0($s0)
    ctx->pc = 0x374390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374394: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x374394u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x374398: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x374398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37439c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x37439cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_3743a0:
    // 0x3743a0: 0x92022b26  lbu         $v0, 0x2B26($s0)
    ctx->pc = 0x3743a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11046)));
    // 0x3743a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3743A4u;
    {
        const bool branch_taken_0x3743a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3743a4) {
            ctx->pc = 0x3743B8u;
            goto label_3743b8;
        }
    }
    ctx->pc = 0x3743ACu;
    // 0x3743ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3743acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3743b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3743B0u;
    {
        const bool branch_taken_0x3743b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3743B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3743B0u;
        // 0x3743b4: 0xa2022b26  sb          $v0, 0x2B26($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11046), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3743b0) {
            ctx->pc = 0x3743C0u;
            goto label_3743c0;
        }
    }
    ctx->pc = 0x3743B8u;
label_3743b8:
    // 0x3743b8: 0xa2002b24  sb          $zero, 0x2B24($s0)
    ctx->pc = 0x3743b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11044), (uint8_t)GPR_U32(ctx, 0));
    // 0x3743bc: 0x0  nop
    ctx->pc = 0x3743bcu;
    // NOP
label_3743c0:
    // 0x3743c0: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3743C0u;
    SET_GPR_U32(ctx, 31, 0x3743C8u);
    ctx->pc = 0x3743C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3743C0u;
    // 0x3743c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3743C0u, 0x3743C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3743C8u;
label_3743c8:
    // 0x3743c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3743c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3743cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3743ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3743d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3743D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3743D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3743D0u;
        // 0x3743d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3743D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3743D8u;
}
