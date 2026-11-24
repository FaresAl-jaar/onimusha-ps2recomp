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

// Function: sub_0029B230
// Address: 0x29b230 - 0x29b528
void sub_0029B230_0x29b230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B230_0x29b230");
#endif

    switch (ctx->pc) {
        case 0x29b270u: goto label_29b270;
        case 0x29b27cu: goto label_29b27c;
        case 0x29b2c0u: goto label_29b2c0;
        case 0x29b370u: goto label_29b370;
        case 0x29b3b8u: goto label_29b3b8;
        case 0x29b3ccu: goto label_29b3cc;
        case 0x29b438u: goto label_29b438;
        case 0x29b450u: goto label_29b450;
        case 0x29b46cu: goto label_29b46c;
        case 0x29b48cu: goto label_29b48c;
        case 0x29b4bcu: goto label_29b4bc;
        default: break;
    }

    ctx->pc = 0x29b230u;

    // 0x29b230: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29b230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29b234: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29b234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29b238: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29b238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29b23c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29b23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29b240: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29b240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29b244: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x29b244u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b248: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29b248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29b24c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29b24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29b250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29b250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29b254: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b258: 0xa4820030  sh          $v0, 0x30($a0)
    ctx->pc = 0x29b258u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x29b25c: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x29b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x29b260: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29B260u;
    {
        const bool branch_taken_0x29b260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b260) {
            ctx->pc = 0x29B280u;
            goto label_29b280;
        }
    }
    ctx->pc = 0x29B268u;
    // 0x29b268: 0xc05a03c  jal         func_1680F0
    ctx->pc = 0x29B268u;
    SET_GPR_U32(ctx, 31, 0x29B270u);
    ctx->pc = 0x1680F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1680F0u, 0x29B268u, 0x29B270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B270u;
label_29b270:
    // 0x29b270: 0x8ea4005c  lw          $a0, 0x5C($s5)
    ctx->pc = 0x29b270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x29b274: 0xc05a044  jal         func_168110
    ctx->pc = 0x29B274u;
    SET_GPR_U32(ctx, 31, 0x29B27Cu);
    ctx->pc = 0x29B278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B274u;
    // 0x29b278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168110u, 0x29B274u, 0x29B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B27Cu;
label_29b27c:
    // 0x29b27c: 0x0  nop
    ctx->pc = 0x29b27cu;
    // NOP
label_29b280:
    // 0x29b280: 0x8ea4004c  lw          $a0, 0x4C($s5)
    ctx->pc = 0x29b280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x29b284: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x29B284u;
    {
        const bool branch_taken_0x29b284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b284) {
            ctx->pc = 0x29B2C0u;
            goto label_29b2c0;
        }
    }
    ctx->pc = 0x29B28Cu;
    // 0x29b28c: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x29b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x29b290: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x29b290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x29b294: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x29b294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x29b298: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x29b298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x29b29c: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x29b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x29b2a0: 0xac430084  sw          $v1, 0x84($v0)
    ctx->pc = 0x29b2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
    // 0x29b2a4: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x29b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x29b2a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29b2ac: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x29b2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x29b2b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x29b2b4: 0x8ea4004c  lw          $a0, 0x4C($s5)
    ctx->pc = 0x29b2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x29b2b8: 0xc0a8524  jal         func_2A1490
    ctx->pc = 0x29B2B8u;
    SET_GPR_U32(ctx, 31, 0x29B2C0u);
    ctx->pc = 0x29B2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B2B8u;
    // 0x29b2bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1490u, 0x29B2B8u, 0x29B2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B2C0u;
label_29b2c0:
    // 0x29b2c0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x29b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x29b2c4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x29b2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29b2c8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x29b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x29b2cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x29b2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29b2d0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x29b2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x29b2d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29b2d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b2d8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x29b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x29b2dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b2e0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x29b2e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x29b2e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29b2e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29b2e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29b2e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b2ec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x29B2ECu;
    {
        const bool branch_taken_0x29b2ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b2ec) {
            ctx->pc = 0x29B304u;
            goto label_29b304;
        }
    }
    ctx->pc = 0x29B2F4u;
    // 0x29b2f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29b2f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29b2f8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29b2f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29b2fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29B2FCu;
    {
        const bool branch_taken_0x29b2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B2FCu;
        // 0x29b300: 0xa2a30160  sb          $v1, 0x160($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 352), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b2fc) {
            ctx->pc = 0x29B320u;
            goto label_29b320;
        }
    }
    ctx->pc = 0x29B304u;
label_29b304:
    // 0x29b304: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29b304u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29b308: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29b308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29b30c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29b30cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29b310: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29b310u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29b314: 0x0  nop
    ctx->pc = 0x29b314u;
    // NOP
    // 0x29b318: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29b318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b31c: 0xa2a30160  sb          $v1, 0x160($s5)
    ctx->pc = 0x29b31cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 352), (uint8_t)GPR_U32(ctx, 3));
label_29b320:
    // 0x29b320: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x29b320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x29b324: 0xa2a30161  sb          $v1, 0x161($s5)
    ctx->pc = 0x29b324u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 353), (uint8_t)GPR_U32(ctx, 3));
    // 0x29b328: 0x3c04428c  lui         $a0, 0x428C
    ctx->pc = 0x29b328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17036 << 16));
    // 0x29b32c: 0xa2a00163  sb          $zero, 0x163($s5)
    ctx->pc = 0x29b32cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 355), (uint8_t)GPR_U32(ctx, 0));
    // 0x29b330: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x29b330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x29b334: 0xaea40154  sw          $a0, 0x154($s5)
    ctx->pc = 0x29b334u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 340), GPR_U32(ctx, 4));
    // 0x29b338: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x29b338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x29b33c: 0xaea30158  sw          $v1, 0x158($s5)
    ctx->pc = 0x29b33cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 344), GPR_U32(ctx, 3));
    // 0x29b340: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x29b340u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29b344: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x29b344u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b348: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x29b348u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b34c: 0xe6a20164  swc1        $f2, 0x164($s5)
    ctx->pc = 0x29b34cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 356), bits); }
    // 0x29b350: 0xe6a10168  swc1        $f1, 0x168($s5)
    ctx->pc = 0x29b350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 360), bits); }
    // 0x29b354: 0xe6a0016c  swc1        $f0, 0x16C($s5)
    ctx->pc = 0x29b354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 364), bits); }
    // 0x29b358: 0x7aa20020  lq          $v0, 0x20($s5)
    ctx->pc = 0x29b358u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x29b35c: 0x7ea20080  sq          $v0, 0x80($s5)
    ctx->pc = 0x29b35cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 128), GPR_VEC(ctx, 2));
    // 0x29b360: 0x92a50002  lbu         $a1, 0x2($s5)
    ctx->pc = 0x29b360u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x29b364: 0x92a60003  lbu         $a2, 0x3($s5)
    ctx->pc = 0x29b364u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x29b368: 0xc0a2adc  jal         func_28AB70
    ctx->pc = 0x29B368u;
    SET_GPR_U32(ctx, 31, 0x29B370u);
    ctx->pc = 0x29B36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B368u;
    // 0x29b36c: 0x92a40001  lbu         $a0, 0x1($s5) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB70u, 0x29B368u, 0x29B370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B370u;
label_29b370:
    // 0x29b370: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B370u;
    {
        const bool branch_taken_0x29b370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B370u;
        // 0x29b374: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b370) {
            ctx->pc = 0x29B388u;
            goto label_29b388;
        }
    }
    ctx->pc = 0x29B378u;
    // 0x29b378: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x29b378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29b37c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29B37Cu;
    {
        const bool branch_taken_0x29b37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B37Cu;
        // 0x29b380: 0xaea204d0  sw          $v0, 0x4D0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b37c) {
            ctx->pc = 0x29B3A0u;
            goto label_29b3a0;
        }
    }
    ctx->pc = 0x29B384u;
    // 0x29b384: 0x0  nop
    ctx->pc = 0x29b384u;
    // NOP
label_29b388:
    // 0x29b388: 0x92a20001  lbu         $v0, 0x1($s5)
    ctx->pc = 0x29b388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x29b38c: 0xa2a204d1  sb          $v0, 0x4D1($s5)
    ctx->pc = 0x29b38cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1233), (uint8_t)GPR_U32(ctx, 2));
    // 0x29b390: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x29b390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x29b394: 0xa2a204d2  sb          $v0, 0x4D2($s5)
    ctx->pc = 0x29b394u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1234), (uint8_t)GPR_U32(ctx, 2));
    // 0x29b398: 0x92a20003  lbu         $v0, 0x3($s5)
    ctx->pc = 0x29b398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x29b39c: 0xa2a204d3  sb          $v0, 0x4D3($s5)
    ctx->pc = 0x29b39cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1235), (uint8_t)GPR_U32(ctx, 2));
label_29b3a0:
    // 0x29b3a0: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x29b3a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
    // 0x29b3a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29b3a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b3a8: 0x26526fc0  addiu       $s2, $s2, 0x6FC0
    ctx->pc = 0x29b3a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28608));
    // 0x29b3ac: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x29b3acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b3b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29b3b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b3b4: 0x0  nop
    ctx->pc = 0x29b3b4u;
    // NOP
label_29b3b8:
    // 0x29b3b8: 0x92a50001  lbu         $a1, 0x1($s5)
    ctx->pc = 0x29b3b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x29b3bc: 0x92a60002  lbu         $a2, 0x2($s5)
    ctx->pc = 0x29b3bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x29b3c0: 0x92a70003  lbu         $a3, 0x3($s5)
    ctx->pc = 0x29b3c0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x29b3c4: 0xc0a2a8c  jal         func_28AA30
    ctx->pc = 0x29B3C4u;
    SET_GPR_U32(ctx, 31, 0x29B3CCu);
    ctx->pc = 0x29B3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B3C4u;
    // 0x29b3c8: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA30u, 0x29B3C4u, 0x29B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B3CCu;
label_29b3cc:
    // 0x29b3cc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29B3CCu;
    {
        const bool branch_taken_0x29b3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b3cc) {
            ctx->pc = 0x29B408u;
            goto label_29b408;
        }
    }
    ctx->pc = 0x29B3D4u;
    // 0x29b3d4: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x29b3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x29b3d8: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x29b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x29b3dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B3DCu;
    {
        const bool branch_taken_0x29b3dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b3dc) {
            ctx->pc = 0x29B3F0u;
            goto label_29b3f0;
        }
    }
    ctx->pc = 0x29B3E4u;
    // 0x29b3e4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x29b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x29b3e8: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x29b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x29b3ec: 0x0  nop
    ctx->pc = 0x29b3ecu;
    // NOP
label_29b3f0:
    // 0x29b3f0: 0x8ea30058  lw          $v1, 0x58($s5)
    ctx->pc = 0x29b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x29b3f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B3F4u;
    {
        const bool branch_taken_0x29b3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b3f4) {
            ctx->pc = 0x29B408u;
            goto label_29b408;
        }
    }
    ctx->pc = 0x29B3FCu;
    // 0x29b3fc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x29b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x29b400: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x29b400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x29b404: 0x0  nop
    ctx->pc = 0x29b404u;
    // NOP
label_29b408:
    // 0x29b408: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29b408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29b40c: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x29b40cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x29b410: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29b410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29b414: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x29b414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x29b418: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x29B418u;
    {
        const bool branch_taken_0x29b418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B418u;
        // 0x29b41c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b418) {
            ctx->pc = 0x29B3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b3b8;
        }
    }
    ctx->pc = 0x29B420u;
    // 0x29b420: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x29b420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x29b424: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B424u;
    {
        const bool branch_taken_0x29b424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b424) {
            ctx->pc = 0x29B438u;
            goto label_29b438;
        }
    }
    ctx->pc = 0x29B42Cu;
    // 0x29b42c: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x29b42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x29b430: 0xc0600fc  jal         func_1803F0
    ctx->pc = 0x29B430u;
    SET_GPR_U32(ctx, 31, 0x29B438u);
    ctx->pc = 0x29B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B430u;
    // 0x29b434: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1803F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1803F0u, 0x29B430u, 0x29B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B438u;
label_29b438:
    // 0x29b438: 0x8ea40058  lw          $a0, 0x58($s5)
    ctx->pc = 0x29b438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x29b43c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B43Cu;
    {
        const bool branch_taken_0x29b43c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b43c) {
            ctx->pc = 0x29B450u;
            goto label_29b450;
        }
    }
    ctx->pc = 0x29B444u;
    // 0x29b444: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x29b444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x29b448: 0xc0600fc  jal         func_1803F0
    ctx->pc = 0x29B448u;
    SET_GPR_U32(ctx, 31, 0x29B450u);
    ctx->pc = 0x29B44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B448u;
    // 0x29b44c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1803F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1803F0u, 0x29B448u, 0x29B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B450u;
label_29b450:
    // 0x29b450: 0x26a404a0  addiu       $a0, $s5, 0x4A0
    ctx->pc = 0x29b450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1184));
    // 0x29b454: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x29b454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b458: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29b458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b45c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29b45cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b460: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29b460u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b464: 0xc09e718  jal         func_279C60
    ctx->pc = 0x29B464u;
    SET_GPR_U32(ctx, 31, 0x29B46Cu);
    ctx->pc = 0x29B468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B464u;
    // 0x29b468: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279C60u, 0x29B464u, 0x29B46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B46Cu;
label_29b46c:
    // 0x29b46c: 0xaea004c4  sw          $zero, 0x4C4($s5)
    ctx->pc = 0x29b46cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1220), GPR_U32(ctx, 0));
    // 0x29b470: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x29b470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
    // 0x29b474: 0xa2a00033  sb          $zero, 0x33($s5)
    ctx->pc = 0x29b474u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 51), (uint8_t)GPR_U32(ctx, 0));
    // 0x29b478: 0x92a50001  lbu         $a1, 0x1($s5)
    ctx->pc = 0x29b478u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x29b47c: 0x92a60002  lbu         $a2, 0x2($s5)
    ctx->pc = 0x29b47cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x29b480: 0x92a70003  lbu         $a3, 0x3($s5)
    ctx->pc = 0x29b480u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x29b484: 0xc050ed4  jal         func_143B50
    ctx->pc = 0x29B484u;
    SET_GPR_U32(ctx, 31, 0x29B48Cu);
    ctx->pc = 0x29B488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B484u;
    // 0x29b488: 0x240800fe  addiu       $t0, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x29B484u, 0x29B48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B48Cu;
label_29b48c:
    // 0x29b48c: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x29B48Cu;
    {
        const bool branch_taken_0x29b48c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B48Cu;
        // 0x29b490: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b48c) {
            ctx->pc = 0x29B4C4u;
            goto label_29b4c4;
        }
    }
    ctx->pc = 0x29B494u;
    // 0x29b494: 0x90450026  lbu         $a1, 0x26($v0)
    ctx->pc = 0x29b494u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x29b498: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x29b498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x29b49c: 0x90430025  lbu         $v1, 0x25($v0)
    ctx->pc = 0x29b49cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 37)));
    // 0x29b4a0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x29b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x29b4a4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x29b4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x29b4a8: 0x90420024  lbu         $v0, 0x24($v0)
    ctx->pc = 0x29b4a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x29b4ac: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x29b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x29b4b0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x29b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29b4b4: 0xc04cd08  jal         func_133420
    ctx->pc = 0x29B4B4u;
    SET_GPR_U32(ctx, 31, 0x29B4BCu);
    ctx->pc = 0x29B4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B4B4u;
    // 0x29b4b8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133420u, 0x29B4B4u, 0x29B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B4BCu;
label_29b4bc:
    // 0x29b4bc: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x29b4bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x29b4c0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x29b4c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_29b4c4:
    // 0x29b4c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x29b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29b4c8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B4C8u;
    {
        const bool branch_taken_0x29b4c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B4C8u;
        // 0x29b4cc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b4c8) {
            ctx->pc = 0x29B4E0u;
            goto label_29b4e0;
        }
    }
    ctx->pc = 0x29B4D0u;
    // 0x29b4d0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B4D0u;
    {
        const bool branch_taken_0x29b4d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29b4d0) {
            ctx->pc = 0x29B4E0u;
            goto label_29b4e0;
        }
    }
    ctx->pc = 0x29B4D8u;
    // 0x29b4d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29B4D8u;
    {
        const bool branch_taken_0x29b4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b4d8) {
            ctx->pc = 0x29B4F0u;
            goto label_29b4f0;
        }
    }
    ctx->pc = 0x29B4E0u;
label_29b4e0:
    // 0x29b4e0: 0x92a30033  lbu         $v1, 0x33($s5)
    ctx->pc = 0x29b4e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x29b4e4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x29b4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x29b4e8: 0xa2a30033  sb          $v1, 0x33($s5)
    ctx->pc = 0x29b4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 51), (uint8_t)GPR_U32(ctx, 3));
    // 0x29b4ec: 0x0  nop
    ctx->pc = 0x29b4ecu;
    // NOP
label_29b4f0:
    // 0x29b4f0: 0xaea00148  sw          $zero, 0x148($s5)
    ctx->pc = 0x29b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 328), GPR_U32(ctx, 0));
    // 0x29b4f4: 0xaea0014c  sw          $zero, 0x14C($s5)
    ctx->pc = 0x29b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 332), GPR_U32(ctx, 0));
    // 0x29b4f8: 0xaea00150  sw          $zero, 0x150($s5)
    ctx->pc = 0x29b4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 336), GPR_U32(ctx, 0));
    // 0x29b4fc: 0xa2a00115  sb          $zero, 0x115($s5)
    ctx->pc = 0x29b4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 277), (uint8_t)GPR_U32(ctx, 0));
    // 0x29b500: 0xa2a00172  sb          $zero, 0x172($s5)
    ctx->pc = 0x29b500u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 370), (uint8_t)GPR_U32(ctx, 0));
    // 0x29b504: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29b504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29b508: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29b508u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29b50c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29b50cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b510: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29b510u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b514: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29b514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b518: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29b518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b51c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b520: 0x3e00008  jr          $ra
    ctx->pc = 0x29B520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B520u;
        // 0x29b524: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B528u;
}
