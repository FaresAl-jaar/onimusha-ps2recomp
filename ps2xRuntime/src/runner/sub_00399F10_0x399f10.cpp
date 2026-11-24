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

// Function: sub_00399F10
// Address: 0x399f10 - 0x39a224
void sub_00399F10_0x399f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399F10_0x399f10");
#endif

    switch (ctx->pc) {
        case 0x399fe8u: goto label_399fe8;
        case 0x39a040u: goto label_39a040;
        case 0x39a06cu: goto label_39a06c;
        case 0x39a094u: goto label_39a094;
        case 0x39a0a8u: goto label_39a0a8;
        case 0x39a0d8u: goto label_39a0d8;
        case 0x39a128u: goto label_39a128;
        case 0x39a194u: goto label_39a194;
        case 0x39a1a8u: goto label_39a1a8;
        case 0x39a1b8u: goto label_39a1b8;
        case 0x39a1d4u: goto label_39a1d4;
        default: break;
    }

    ctx->pc = 0x399f10u;

    // 0x399f10: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x399f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x399f14: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x399f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x399f18: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x399f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x399f1c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x399f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x399f20: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x399f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x399f24: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x399f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x399f28: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x399f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x399f2c: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x399f2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x399f30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x399f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x399f34: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x399f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x399f38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x399f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x399f3c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x399f3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x399f40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x399f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x399f44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x399f44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x399f48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x399f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x399f4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x399f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x399f50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x399f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x399f54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x399f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x399f58: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x399f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x399f5c: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x399f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399f60: 0xa3a000b0  sb          $zero, 0xB0($sp)
    ctx->pc = 0x399f60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 0));
    // 0x399f64: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x399f64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x399f68: 0x94a31db8  lhu         $v1, 0x1DB8($a1)
    ctx->pc = 0x399f68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 7608)));
    // 0x399f6c: 0x24a61db8  addiu       $a2, $a1, 0x1DB8
    ctx->pc = 0x399f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 7608));
    // 0x399f70: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x399f70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x399f74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x399f74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x399f78: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x399F78u;
    {
        const bool branch_taken_0x399f78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x399F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F78u;
        // 0x399f7c: 0x24650001  addiu       $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399f78) {
            ctx->pc = 0x399F90u;
            goto label_399f90;
        }
    }
    ctx->pc = 0x399F80u;
    // 0x399f80: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x399f80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x399f84: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x399f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x399f88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x399F88u;
    {
        const bool branch_taken_0x399f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F88u;
        // 0x399f8c: 0xa4001b  divu        $zero, $a1, $a0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x399f88) {
            ctx->pc = 0x399FACu;
            goto label_399fac;
        }
    }
    ctx->pc = 0x399F90u;
label_399f90:
    // 0x399f90: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x399f90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x399f94: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x399f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x399f98: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x399f98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x399f9c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x399f9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x399fa0: 0x0  nop
    ctx->pc = 0x399fa0u;
    // NOP
    // 0x399fa4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x399fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x399fa8: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x399fa8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_399fac:
    // 0x399fac: 0x0  nop
    ctx->pc = 0x399facu;
    // NOP
    // 0x399fb0: 0x0  nop
    ctx->pc = 0x399fb0u;
    // NOP
    // 0x399fb4: 0x1810  mfhi        $v1
    ctx->pc = 0x399fb4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x399fb8: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x399fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x399fbc: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x399fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399fc0: 0x94631db8  lhu         $v1, 0x1DB8($v1)
    ctx->pc = 0x399fc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 7608)));
    // 0x399fc4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x399FC4u;
    {
        const bool branch_taken_0x399fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x399FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FC4u;
        // 0x399fc8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399fc4) {
            ctx->pc = 0x399FD0u;
            goto label_399fd0;
        }
    }
    ctx->pc = 0x399FCCu;
    // 0x399fcc: 0xa3a300b0  sb          $v1, 0xB0($sp)
    ctx->pc = 0x399fccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 3));
label_399fd0:
    // 0x399fd0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x399fd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399fd4: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x399fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x399fd8: 0x27b600e4  addiu       $s6, $sp, 0xE4
    ctx->pc = 0x399fd8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x399fdc: 0x27b700e8  addiu       $s7, $sp, 0xE8
    ctx->pc = 0x399fdcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x399fe0: 0x27be00ec  addiu       $fp, $sp, 0xEC
    ctx->pc = 0x399fe0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x399fe4: 0x0  nop
    ctx->pc = 0x399fe4u;
    // NOP
label_399fe8:
    // 0x399fe8: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x399fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399fec: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x399fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x399ff0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x399ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x399ff4: 0x24830780  addiu       $v1, $a0, 0x780
    ctx->pc = 0x399ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1920));
    // 0x399ff8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x399ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x399ffc: 0x8c850784  lw          $a1, 0x784($a0)
    ctx->pc = 0x399ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1924)));
    // 0x39a000: 0x10a00075  beqz        $a1, . + 4 + (0x75 << 2)
    ctx->pc = 0x39A000u;
    {
        const bool branch_taken_0x39a000 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A000u;
        // 0x39a004: 0x2aa10002  slti        $at, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a000) {
            ctx->pc = 0x39A1D8u;
            goto label_39a1d8;
        }
    }
    ctx->pc = 0x39A008u;
    // 0x39a008: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x39A008u;
    {
        const bool branch_taken_0x39a008 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a008) {
            ctx->pc = 0x39A060u;
            goto label_39a060;
        }
    }
    ctx->pc = 0x39A010u;
    // 0x39a010: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x39A010u;
    {
        const bool branch_taken_0x39a010 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a010) {
            ctx->pc = 0x39A020u;
            goto label_39a020;
        }
    }
    ctx->pc = 0x39A018u;
    // 0x39a018: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39A018u;
    {
        const bool branch_taken_0x39a018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A018u;
        // 0x39a01c: 0x8f948060  lw          $s4, -0x7FA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a018) {
            ctx->pc = 0x39A030u;
            goto label_39a030;
        }
    }
    ctx->pc = 0x39A020u;
label_39a020:
    // 0x39a020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39a020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a024: 0x16a20002  bne         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x39A024u;
    {
        const bool branch_taken_0x39a024 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x39a024) {
            ctx->pc = 0x39A030u;
            goto label_39a030;
        }
    }
    ctx->pc = 0x39A02Cu;
    // 0x39a02c: 0x8f948064  lw          $s4, -0x7F9C($gp)
    ctx->pc = 0x39a02cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
label_39a030:
    // 0x39a030: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x39A030u;
    {
        const bool branch_taken_0x39a030 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a030) {
            ctx->pc = 0x39A050u;
            goto label_39a050;
        }
    }
    ctx->pc = 0x39A038u;
    // 0x39a038: 0xc0e6580  jal         func_399600
    ctx->pc = 0x39A038u;
    SET_GPR_U32(ctx, 31, 0x39A040u);
    ctx->pc = 0x39A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A038u;
    // 0x39a03c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399600u, 0x39A038u, 0x39A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A040u;
label_39a040:
    // 0x39a040: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x39a040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x39a044: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x39A044u;
    {
        const bool branch_taken_0x39a044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A044u;
        // 0x39a048: 0xac750004  sw          $s5, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a044) {
            ctx->pc = 0x39A1D8u;
            goto label_39a1d8;
        }
    }
    ctx->pc = 0x39A04Cu;
    // 0x39a04c: 0x0  nop
    ctx->pc = 0x39a04cu;
    // NOP
label_39a050:
    // 0x39a050: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x39a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x39a054: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x39A054u;
    {
        const bool branch_taken_0x39a054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A054u;
        // 0x39a058: 0xac820784  sw          $v0, 0x784($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1924), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a054) {
            ctx->pc = 0x39A0A0u;
            goto label_39a0a0;
        }
    }
    ctx->pc = 0x39A05Cu;
    // 0x39a05c: 0x0  nop
    ctx->pc = 0x39a05cu;
    // NOP
label_39a060:
    // 0x39a060: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x39a060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x39a064: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x39A064u;
    SET_GPR_U32(ctx, 31, 0x39A06Cu);
    ctx->pc = 0x39A068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A064u;
    // 0x39a068: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x39A064u, 0x39A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A06Cu;
label_39a06c:
    // 0x39a06c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x39a06cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a070: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x39A070u;
    {
        const bool branch_taken_0x39a070 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a070) {
            ctx->pc = 0x39A088u;
            goto label_39a088;
        }
    }
    ctx->pc = 0x39A078u;
    // 0x39a078: 0x8e8229c0  lw          $v0, 0x29C0($s4)
    ctx->pc = 0x39a078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x39a07c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x39a07cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39a080: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39A080u;
    {
        const bool branch_taken_0x39a080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a080) {
            ctx->pc = 0x39A0A0u;
            goto label_39a0a0;
        }
    }
    ctx->pc = 0x39A088u;
label_39a088:
    // 0x39a088: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x39a088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x39a08c: 0xc0e6580  jal         func_399600
    ctx->pc = 0x39A08Cu;
    SET_GPR_U32(ctx, 31, 0x39A094u);
    ctx->pc = 0x39A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A08Cu;
    // 0x39a090: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399600u, 0x39A08Cu, 0x39A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A094u;
label_39a094:
    // 0x39a094: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x39A094u;
    {
        const bool branch_taken_0x39a094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a094) {
            ctx->pc = 0x39A1D8u;
            goto label_39a1d8;
        }
    }
    ctx->pc = 0x39A09Cu;
    // 0x39a09c: 0x0  nop
    ctx->pc = 0x39a09cu;
    // NOP
label_39a0a0:
    // 0x39a0a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39a0a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a0a4: 0x0  nop
    ctx->pc = 0x39a0a4u;
    // NOP
label_39a0a8:
    // 0x39a0a8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x39a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x39a0ac: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x39a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x39a0b0: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x39a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x39a0b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39a0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39a0b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39a0bc: 0x24511dbc  addiu       $s1, $v0, 0x1DBC
    ctx->pc = 0x39a0bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 7612));
    // 0x39a0c0: 0x90421dcd  lbu         $v0, 0x1DCD($v0)
    ctx->pc = 0x39a0c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7629)));
    // 0x39a0c4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x39a0c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x39a0c8: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x39A0C8u;
    {
        const bool branch_taken_0x39a0c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0C8u;
        // 0x39a0cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a0c8) {
            ctx->pc = 0x39A148u;
            goto label_39a148;
        }
    }
    ctx->pc = 0x39A0D0u;
    // 0x39a0d0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x39a0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a0d4: 0x0  nop
    ctx->pc = 0x39a0d4u;
    // NOP
label_39a0d8:
    // 0x39a0d8: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x39a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x39a0dc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x39a0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39a0e0: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x39a0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x39a0e4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x39a0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39a0e8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x39a0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x39a0ec: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x39a0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x39a0f0: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x39a0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x39a0f4: 0xe6e10000  swc1        $f1, 0x0($s7)
    ctx->pc = 0x39a0f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x39a0f8: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x39a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x39a0fc: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x39a0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39a100: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x39a100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39a104: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x39a104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x39a108: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x39a108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x39a10c: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x39a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x39a110: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x39a110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x39a114: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x39a114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x39a118: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x39a118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x39a11c: 0x92070010  lbu         $a3, 0x10($s0)
    ctx->pc = 0x39a11cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x39a120: 0xc0e6470  jal         func_3991C0
    ctx->pc = 0x39A120u;
    SET_GPR_U32(ctx, 31, 0x39A128u);
    ctx->pc = 0x39A124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A120u;
    // 0x39a124: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3991C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3991C0u, 0x39A120u, 0x39A128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A128u;
label_39a128:
    // 0x39a128: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x39a128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x39a12c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39A12Cu;
    {
        const bool branch_taken_0x39a12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a12c) {
            ctx->pc = 0x39A148u;
            goto label_39a148;
        }
    }
    ctx->pc = 0x39A134u;
    // 0x39a134: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x39a134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x39a138: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39a138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x39a13c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x39a13cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x39a140: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x39A140u;
    {
        const bool branch_taken_0x39a140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A140u;
        // 0x39a144: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a140) {
            ctx->pc = 0x39A0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a0d8;
        }
    }
    ctx->pc = 0x39A148u;
label_39a148:
    // 0x39a148: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x39a148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x39a14c: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x39A14Cu;
    {
        const bool branch_taken_0x39a14c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x39a14c) {
            ctx->pc = 0x39A170u;
            goto label_39a170;
        }
    }
    ctx->pc = 0x39A154u;
    // 0x39a154: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39a158: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x39a158u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x39a15c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x39a15cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x39a160: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x39a160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x39a164: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x39A164u;
    {
        const bool branch_taken_0x39a164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a164) {
            ctx->pc = 0x39A0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a0a8;
        }
    }
    ctx->pc = 0x39A16Cu;
    // 0x39a16c: 0x0  nop
    ctx->pc = 0x39a16cu;
    // NOP
label_39a170:
    // 0x39a170: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x39a170u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x39a174: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x39A174u;
    {
        const bool branch_taken_0x39a174 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a174) {
            ctx->pc = 0x39A1B0u;
            goto label_39a1b0;
        }
    }
    ctx->pc = 0x39A17Cu;
    // 0x39a17c: 0x82250012  lb          $a1, 0x12($s1)
    ctx->pc = 0x39a17cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x39a180: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x39a180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39a184: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39A184u;
    {
        const bool branch_taken_0x39a184 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x39A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A184u;
        // 0x39a188: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a184) {
            ctx->pc = 0x39A1A0u;
            goto label_39a1a0;
        }
    }
    ctx->pc = 0x39A18Cu;
    // 0x39a18c: 0xc0e6550  jal         func_399540
    ctx->pc = 0x39A18Cu;
    SET_GPR_U32(ctx, 31, 0x39A194u);
    ctx->pc = 0x399540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399540u, 0x39A18Cu, 0x39A194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A194u;
label_39a194:
    // 0x39a194: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x39A194u;
    {
        const bool branch_taken_0x39a194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a194) {
            ctx->pc = 0x39A1C0u;
            goto label_39a1c0;
        }
    }
    ctx->pc = 0x39A19Cu;
    // 0x39a19c: 0x0  nop
    ctx->pc = 0x39a19cu;
    // NOP
label_39a1a0:
    // 0x39a1a0: 0xc0e6528  jal         func_3994A0
    ctx->pc = 0x39A1A0u;
    SET_GPR_U32(ctx, 31, 0x39A1A8u);
    ctx->pc = 0x39A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A1A0u;
    // 0x39a1a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3994A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3994A0u, 0x39A1A0u, 0x39A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A1A8u;
label_39a1a8:
    // 0x39a1a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39A1A8u;
    {
        const bool branch_taken_0x39a1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a1a8) {
            ctx->pc = 0x39A1C0u;
            goto label_39a1c0;
        }
    }
    ctx->pc = 0x39A1B0u;
label_39a1b0:
    // 0x39a1b0: 0xc0e6550  jal         func_399540
    ctx->pc = 0x39A1B0u;
    SET_GPR_U32(ctx, 31, 0x39A1B8u);
    ctx->pc = 0x39A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A1B0u;
    // 0x39a1b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399540u, 0x39A1B0u, 0x39A1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A1B8u;
label_39a1b8:
    // 0x39a1b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39A1B8u;
    {
        const bool branch_taken_0x39a1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a1b8) {
            ctx->pc = 0x39A1D8u;
            goto label_39a1d8;
        }
    }
    ctx->pc = 0x39A1C0u;
label_39a1c0:
    // 0x39a1c0: 0x83a300b0  lb          $v1, 0xB0($sp)
    ctx->pc = 0x39a1c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x39a1c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A1C4u;
    {
        const bool branch_taken_0x39a1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a1c4) {
            ctx->pc = 0x39A1D8u;
            goto label_39a1d8;
        }
    }
    ctx->pc = 0x39A1CCu;
    // 0x39a1cc: 0xc0e64fc  jal         func_3993F0
    ctx->pc = 0x39A1CCu;
    SET_GPR_U32(ctx, 31, 0x39A1D4u);
    ctx->pc = 0x39A1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A1CCu;
    // 0x39a1d0: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3993F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3993F0u, 0x39A1CCu, 0x39A1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A1D4u;
label_39a1d4:
    // 0x39a1d4: 0x0  nop
    ctx->pc = 0x39a1d4u;
    // NOP
label_39a1d8:
    // 0x39a1d8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x39a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x39a1dc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x39a1dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x39a1e0: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x39a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x39a1e4: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x39a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x39a1e8: 0x2aa30008  slti        $v1, $s5, 0x8
    ctx->pc = 0x39a1e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x39a1ec: 0x1460ff7e  bnez        $v1, . + 4 + (-0x82 << 2)
    ctx->pc = 0x39A1ECu;
    {
        const bool branch_taken_0x39a1ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a1ec) {
            ctx->pc = 0x399FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399fe8;
        }
    }
    ctx->pc = 0x39A1F4u;
    // 0x39a1f4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x39a1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x39a1f8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x39a1f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39a1fc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x39a1fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39a200: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x39a200u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39a204: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39a204u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39a208: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39a208u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39a20c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39a20cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39a210: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39a210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39a214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39a214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39a218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a21c: 0x3e00008  jr          $ra
    ctx->pc = 0x39A21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A21Cu;
        // 0x39a220: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A224u;
}
