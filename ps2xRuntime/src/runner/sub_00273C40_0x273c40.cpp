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

// Function: sub_00273C40
// Address: 0x273c40 - 0x273e8c
void sub_00273C40_0x273c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273C40_0x273c40");
#endif

    switch (ctx->pc) {
        case 0x273c90u: goto label_273c90;
        case 0x273d38u: goto label_273d38;
        case 0x273d68u: goto label_273d68;
        case 0x273d90u: goto label_273d90;
        case 0x273db0u: goto label_273db0;
        case 0x273dd4u: goto label_273dd4;
        case 0x273e20u: goto label_273e20;
        default: break;
    }

    ctx->pc = 0x273c40u;

    // 0x273c40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x273c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x273c44: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x273c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x273c48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x273c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x273c4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x273c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x273c50: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x273c50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x273c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x273c58: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x273c58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x273c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x273c60: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x273c60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x273c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x273c68: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x273c68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x273c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x273c70: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x273c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c74: 0x838388a4  lb          $v1, -0x775C($gp)
    ctx->pc = 0x273c74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936740)));
    // 0x273c78: 0x1460007b  bnez        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x273C78u;
    {
        const bool branch_taken_0x273c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C78u;
        // 0x273c7c: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c78) {
            ctx->pc = 0x273E68u;
            goto label_273e68;
        }
    }
    ctx->pc = 0x273C80u;
    // 0x273c80: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x273c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x273c84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x273c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c88: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x273C88u;
    SET_GPR_U32(ctx, 31, 0x273C90u);
    ctx->pc = 0x273C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273C88u;
    // 0x273c8c: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x273C88u, 0x273C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273C90u;
label_273c90:
    // 0x273c90: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x273c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x273c94: 0xa39288ac  sb          $s2, -0x7754($gp)
    ctx->pc = 0x273c94u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936748), (uint8_t)GPR_U32(ctx, 18));
    // 0x273c98: 0xa78288c0  sh          $v0, -0x7740($gp)
    ctx->pc = 0x273c98u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936768), (uint16_t)GPR_U32(ctx, 2));
    // 0x273c9c: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x273c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x273ca0: 0xa79088a8  sh          $s0, -0x7758($gp)
    ctx->pc = 0x273ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936744), (uint16_t)GPR_U32(ctx, 16));
    // 0x273ca4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x273CA4u;
    {
        const bool branch_taken_0x273ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CA4u;
        // 0x273ca8: 0xa78088bc  sh          $zero, -0x7744($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936764), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ca4) {
            ctx->pc = 0x273D40u;
            goto label_273d40;
        }
    }
    ctx->pc = 0x273CACu;
    // 0x273cac: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273CACu;
    {
        const bool branch_taken_0x273cac = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x273CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CACu;
        // 0x273cb0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273cac) {
            ctx->pc = 0x273CC0u;
            goto label_273cc0;
        }
    }
    ctx->pc = 0x273CB4u;
    // 0x273cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x273cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273cb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x273CB8u;
    {
        const bool branch_taken_0x273cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CB8u;
        // 0x273cbc: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x273cb8) {
            ctx->pc = 0x273CD8u;
            goto label_273cd8;
        }
    }
    ctx->pc = 0x273CC0u;
label_273cc0:
    // 0x273cc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x273cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x273cc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x273cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x273cc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x273cc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273ccc: 0x0  nop
    ctx->pc = 0x273cccu;
    // NOP
    // 0x273cd0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x273cd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x273cd4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x273cd4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_273cd8:
    // 0x273cd8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x273cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273cdc: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x273cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x273ce0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x273ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x273ce4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x273ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x273ce8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x273ce8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x273cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273cf0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x273cf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x273cf4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x273cf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x273cf8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x273cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273cfc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x273CFCu;
    {
        const bool branch_taken_0x273cfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273cfc) {
            ctx->pc = 0x273D14u;
            goto label_273d14;
        }
    }
    ctx->pc = 0x273D04u;
    // 0x273d04: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x273d04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x273d08: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x273d08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x273d0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x273D0Cu;
    {
        const bool branch_taken_0x273d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D0Cu;
        // 0x273d10: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d0c) {
            ctx->pc = 0x273D30u;
            goto label_273d30;
        }
    }
    ctx->pc = 0x273D14u;
label_273d14:
    // 0x273d14: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x273d14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x273d18: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x273d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x273d1c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x273d1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x273d20: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x273d20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x273d24: 0x0  nop
    ctx->pc = 0x273d24u;
    // NOP
    // 0x273d28: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x273d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x273d2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x273d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273d30:
    // 0x273d30: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x273D30u;
    SET_GPR_U32(ctx, 31, 0x273D38u);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x273D30u, 0x273D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273D38u;
label_273d38:
    // 0x273d38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x273D38u;
    {
        const bool branch_taken_0x273d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273d38) {
            ctx->pc = 0x273D48u;
            goto label_273d48;
        }
    }
    ctx->pc = 0x273D40u;
label_273d40:
    // 0x273d40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273d44: 0x0  nop
    ctx->pc = 0x273d44u;
    // NOP
label_273d48:
    // 0x273d48: 0xa78288b4  sh          $v0, -0x774C($gp)
    ctx->pc = 0x273d48u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936756), (uint16_t)GPR_U32(ctx, 2));
    // 0x273d4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x273d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x273d50: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x273d50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x273d54: 0xa38288a4  sb          $v0, -0x775C($gp)
    ctx->pc = 0x273d54u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936740), (uint8_t)GPR_U32(ctx, 2));
    // 0x273d58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x273d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273d5c: 0xa39388a0  sb          $s3, -0x7760($gp)
    ctx->pc = 0x273d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936736), (uint8_t)GPR_U32(ctx, 19));
    // 0x273d60: 0xc0ba400  jal         func_2E9000
    ctx->pc = 0x273D60u;
    SET_GPR_U32(ctx, 31, 0x273D68u);
    ctx->pc = 0x273D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273D60u;
    // 0x273d64: 0xa79488b8  sh          $s4, -0x7748($gp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936760), (uint16_t)GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9000u, 0x273D60u, 0x273D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273D68u;
label_273d68:
    // 0x273d68: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x273d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x273d6c: 0x838388a0  lb          $v1, -0x7760($gp)
    ctx->pc = 0x273d6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x273d70: 0x8c2440b4  lw          $a0, 0x40B4($at)
    ctx->pc = 0x273d70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x9140B4u));
    // 0x273d74: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x273d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x273d78: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273D78u;
    {
        const bool branch_taken_0x273d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x273D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D78u;
        // 0x273d7c: 0xaf8488f4  sw          $a0, -0x770C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936820), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d78) {
            ctx->pc = 0x273D88u;
            goto label_273d88;
        }
    }
    ctx->pc = 0x273D80u;
    // 0x273d80: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x273D80u;
    {
        const bool branch_taken_0x273d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D80u;
        // 0x273d84: 0x241019c8  addiu       $s0, $zero, 0x19C8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d80) {
            ctx->pc = 0x273DC0u;
            goto label_273dc0;
        }
    }
    ctx->pc = 0x273D88u;
label_273d88:
    // 0x273d88: 0xc0d8ca0  jal         func_363280
    ctx->pc = 0x273D88u;
    SET_GPR_U32(ctx, 31, 0x273D90u);
    ctx->pc = 0x363280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363280u, 0x273D88u, 0x273D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273D90u;
label_273d90:
    // 0x273d90: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x273d90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x273d94: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x273D94u;
    {
        const bool branch_taken_0x273d94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x273d94) {
            ctx->pc = 0x273DA4u;
            goto label_273da4;
        }
    }
    ctx->pc = 0x273D9Cu;
    // 0x273d9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x273D9Cu;
    {
        const bool branch_taken_0x273d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D9Cu;
        // 0x273da0: 0x240219c4  addiu       $v0, $zero, 0x19C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6596));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d9c) {
            ctx->pc = 0x273DA8u;
            goto label_273da8;
        }
    }
    ctx->pc = 0x273DA4u;
label_273da4:
    // 0x273da4: 0x240219c6  addiu       $v0, $zero, 0x19C6
    ctx->pc = 0x273da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6598));
label_273da8:
    // 0x273da8: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x273DA8u;
    SET_GPR_U32(ctx, 31, 0x273DB0u);
    ctx->pc = 0x273DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273DA8u;
    // 0x273dac: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x273DA8u, 0x273DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273DB0u;
label_273db0:
    // 0x273db0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x273db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x273db4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x273db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x273db8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x273db8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x273dbc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x273dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_273dc0:
    // 0x273dc0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x273dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x273dc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x273dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273dc8: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x273dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x273dcc: 0xc0ce590  jal         func_339640
    ctx->pc = 0x273DCCu;
    SET_GPR_U32(ctx, 31, 0x273DD4u);
    ctx->pc = 0x273DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273DCCu;
    // 0x273dd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339640u, 0x273DCCu, 0x273DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273DD4u;
label_273dd4:
    // 0x273dd4: 0x838488a0  lb          $a0, -0x7760($gp)
    ctx->pc = 0x273dd4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x273dd8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x273dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x273ddc: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x273DDCu;
    {
        const bool branch_taken_0x273ddc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x273ddc) {
            ctx->pc = 0x273DE8u;
            goto label_273de8;
        }
    }
    ctx->pc = 0x273DE4u;
    // 0x273de4: 0xa38088cc  sb          $zero, -0x7734($gp)
    ctx->pc = 0x273de4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936780), (uint8_t)GPR_U32(ctx, 0));
label_273de8:
    // 0x273de8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x273de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x273dec: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x273DECu;
    {
        const bool branch_taken_0x273dec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x273dec) {
            ctx->pc = 0x273E10u;
            goto label_273e10;
        }
    }
    ctx->pc = 0x273DF4u;
    // 0x273df4: 0x978488c0  lhu         $a0, -0x7740($gp)
    ctx->pc = 0x273df4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936768)));
    // 0x273df8: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x273df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x273dfc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x273dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273e00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x273e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273e04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273e08: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x273e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x273e0c: 0xa78388c0  sh          $v1, -0x7740($gp)
    ctx->pc = 0x273e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936768), (uint16_t)GPR_U32(ctx, 3));
label_273e10:
    // 0x273e10: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x273e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x273e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x273e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273e18: 0x24840850  addiu       $a0, $a0, 0x850
    ctx->pc = 0x273e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2128));
    // 0x273e1c: 0x0  nop
    ctx->pc = 0x273e1cu;
    // NOP
label_273e20:
    // 0x273e20: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x273e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x273e24: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x273e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x273e28: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x273e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x273e2c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x273e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x273e30: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x273e30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x273e34: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x273e34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x273e38: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x273e38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x273e3c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x273e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x273e40: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x273e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x273e44: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x273e44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x273e48: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x273E48u;
    {
        const bool branch_taken_0x273e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E48u;
        // 0x273e4c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e48) {
            ctx->pc = 0x273E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273e20;
        }
    }
    ctx->pc = 0x273E50u;
    // 0x273e50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x273e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x273e54: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x273e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x273e58: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x273e58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x273e5c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x273e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x273e60: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x273e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x273e64: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x273e64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
label_273e68:
    // 0x273e68: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x273e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x273e6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x273e6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x273e70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x273e70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x273e74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x273e74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273e78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x273e78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273e7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x273e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273e80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273e84: 0x3e00008  jr          $ra
    ctx->pc = 0x273E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E84u;
        // 0x273e88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273E8Cu;
}
