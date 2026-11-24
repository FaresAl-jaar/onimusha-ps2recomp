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

// Function: sub_002C05F0
// Address: 0x2c05f0 - 0x2c07e0
void sub_002C05F0_0x2c05f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C05F0_0x2c05f0");
#endif

    switch (ctx->pc) {
        case 0x2c07d0u: goto label_2c07d0;
        default: break;
    }

    ctx->pc = 0x2c05f0u;

    // 0x2c05f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c05f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c05f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c05f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c05f8: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2c05f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c05fc: 0xa082005e  sb          $v0, 0x5E($a0)
    ctx->pc = 0x2c05fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c0600: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x2c0600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x2c0604: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x2c0604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c0608: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2c0608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2c060c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2c060cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c0610: 0xa4820086  sh          $v0, 0x86($a0)
    ctx->pc = 0x2c0610u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 134), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c0614: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x2c0614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c0618: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2c0618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2c061c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2c061cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2c0620: 0xa4820084  sh          $v0, 0x84($a0)
    ctx->pc = 0x2c0620u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c0624: 0x90c20005  lbu         $v0, 0x5($a2)
    ctx->pc = 0x2c0624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x2c0628: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0628u;
    {
        const bool branch_taken_0x2c0628 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0628u;
        // 0x2c062c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0628) {
            ctx->pc = 0x2C063Cu;
            goto label_2c063c;
        }
    }
    ctx->pc = 0x2C0630u;
    // 0x2c0630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0634: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C0634u;
    {
        const bool branch_taken_0x2c0634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0634u;
        // 0x2c0638: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0634) {
            ctx->pc = 0x2C0654u;
            goto label_2c0654;
        }
    }
    ctx->pc = 0x2C063Cu;
label_2c063c:
    // 0x2c063c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c063cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c0640: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c0640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c0644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0648: 0x0  nop
    ctx->pc = 0x2c0648u;
    // NOP
    // 0x2c064c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c064cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0650: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c0650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2c0654:
    // 0x2c0654: 0xe480009c  swc1        $f0, 0x9C($a0)
    ctx->pc = 0x2c0654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x2c0658: 0x94c70006  lhu         $a3, 0x6($a2)
    ctx->pc = 0x2c0658u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x2c065c: 0x10e00028  beqz        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C065Cu;
    {
        const bool branch_taken_0x2c065c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C065Cu;
        // 0x2c0660: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c065c) {
            ctx->pc = 0x2C0700u;
            goto label_2c0700;
        }
    }
    ctx->pc = 0x2C0664u;
    // 0x2c0664: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x2c0664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2c0668: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0668u;
    {
        const bool branch_taken_0x2c0668 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0668u;
        // 0x2c066c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0668) {
            ctx->pc = 0x2C067Cu;
            goto label_2c067c;
        }
    }
    ctx->pc = 0x2C0670u;
    // 0x2c0670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0674: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C0674u;
    {
        const bool branch_taken_0x2c0674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0674u;
        // 0x2c0678: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0674) {
            ctx->pc = 0x2C0694u;
            goto label_2c0694;
        }
    }
    ctx->pc = 0x2C067Cu;
label_2c067c:
    // 0x2c067c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c067cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c0680: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c0680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c0684: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0688: 0x0  nop
    ctx->pc = 0x2c0688u;
    // NOP
    // 0x2c068c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c068cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c0690: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c0690u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c0694:
    // 0x2c0694: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c0694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c0698: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2c0698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2c069c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2c069cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2c06a0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2c06a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2c06a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c06a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c06a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c06a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c06ac: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c06acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c06b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c06b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c06b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c06b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c06b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C06B8u;
    {
        const bool branch_taken_0x2c06b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c06b8) {
            ctx->pc = 0x2C06D0u;
            goto label_2c06d0;
        }
    }
    ctx->pc = 0x2C06C0u;
    // 0x2c06c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c06c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c06c4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c06c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c06c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C06C8u;
    {
        const bool branch_taken_0x2c06c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C06C8u;
        // 0x2c06cc: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c06c8) {
            ctx->pc = 0x2C06ECu;
            goto label_2c06ec;
        }
    }
    ctx->pc = 0x2C06D0u;
label_2c06d0:
    // 0x2c06d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c06d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c06d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c06d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c06d8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c06d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c06dc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c06dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c06e0: 0x0  nop
    ctx->pc = 0x2c06e0u;
    // NOP
    // 0x2c06e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c06e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c06e8: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2c06e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2c06ec:
    // 0x2c06ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c06ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c06f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C06F0u;
    {
        const bool branch_taken_0x2c06f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c06f0) {
            ctx->pc = 0x2C0700u;
            goto label_2c0700;
        }
    }
    ctx->pc = 0x2C06F8u;
    // 0x2c06f8: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x2c06f8u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2c06fc: 0x0  nop
    ctx->pc = 0x2c06fcu;
    // NOP
label_2c0700:
    // 0x2c0700: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0700u;
    {
        const bool branch_taken_0x2c0700 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0700u;
        // 0x2c0704: 0x30e2ffff  andi        $v0, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0700) {
            ctx->pc = 0x2C0710u;
            goto label_2c0710;
        }
    }
    ctx->pc = 0x2C0708u;
    // 0x2c0708: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2C0708u;
    {
        const bool branch_taken_0x2c0708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0708u;
        // 0x2c070c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0708) {
            ctx->pc = 0x2C0790u;
            goto label_2c0790;
        }
    }
    ctx->pc = 0x2C0710u;
label_2c0710:
    // 0x2c0710: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0710u;
    {
        const bool branch_taken_0x2c0710 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C0714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0710u;
        // 0x2c0714: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0710) {
            ctx->pc = 0x2C0724u;
            goto label_2c0724;
        }
    }
    ctx->pc = 0x2C0718u;
    // 0x2c0718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c071c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C071Cu;
    {
        const bool branch_taken_0x2c071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C071Cu;
        // 0x2c0720: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c071c) {
            ctx->pc = 0x2C073Cu;
            goto label_2c073c;
        }
    }
    ctx->pc = 0x2C0724u;
label_2c0724:
    // 0x2c0724: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c0724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c0728: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c0728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c072c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c072cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0730: 0x0  nop
    ctx->pc = 0x2c0730u;
    // NOP
    // 0x2c0734: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c0734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c0738: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c0738u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c073c:
    // 0x2c073c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c073cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c0740: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2c0740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2c0744: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2c0744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2c0748: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2c0748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2c074c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c074cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0754: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c0754u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c0758: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c0758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c075c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c075cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0760: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0760u;
    {
        const bool branch_taken_0x2c0760 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0760) {
            ctx->pc = 0x2C0778u;
            goto label_2c0778;
        }
    }
    ctx->pc = 0x2C0768u;
    // 0x2c0768: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c0768u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c076c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c076cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c0770: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C0770u;
    {
        const bool branch_taken_0x2c0770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0770) {
            ctx->pc = 0x2C0790u;
            goto label_2c0790;
        }
    }
    ctx->pc = 0x2C0778u;
label_2c0778:
    // 0x2c0778: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c0778u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c077c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c077cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c0780: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c0780u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c0784: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c0784u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c0788: 0x0  nop
    ctx->pc = 0x2c0788u;
    // NOP
    // 0x2c078c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c078cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2c0790:
    // 0x2c0790: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x2c0790u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c0794: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2c0794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2c0798: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2c0798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2c079c: 0x24990008  addiu       $t9, $a0, 0x8
    ctx->pc = 0x2c079cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2c07a0: 0x24635190  addiu       $v1, $v1, 0x5190
    ctx->pc = 0x2c07a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20880));
    // 0x2c07a4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c07a4u;
    { uint32_t bits = FAST_READ32(0x4E5190u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c07a8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c07a8u;
    { uint32_t bits = FAST_READ32(0x4E5194u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c07ac: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c07acu;
    { uint32_t bits = FAST_READ32(0x4E5198u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c07b0: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2c07b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c07b4: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2c07b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2c07b8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2c07b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2c07bc: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x2c07bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x2c07c0: 0xa4800058  sh          $zero, 0x58($a0)
    ctx->pc = 0x2c07c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c07c4: 0xa4800056  sh          $zero, 0x56($a0)
    ctx->pc = 0x2c07c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c07c8: 0xc040250  jal         func_100940
    ctx->pc = 0x2C07C8u;
    SET_GPR_U32(ctx, 31, 0x2C07D0u);
    ctx->pc = 0x2C07CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C07C8u;
    // 0x2c07cc: 0xa0800107  sb          $zero, 0x107($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 263), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x2C07C8u, 0x2C07D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C07D0u;
label_2c07d0:
    // 0x2c07d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c07d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c07d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c07d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c07d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C07D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C07DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07D8u;
        // 0x2c07dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C07D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C07E0u;
}
