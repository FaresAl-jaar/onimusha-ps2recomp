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

// Function: sub_00392EE0
// Address: 0x392ee0 - 0x3930b0
void sub_00392EE0_0x392ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392EE0_0x392ee0");
#endif

    switch (ctx->pc) {
        case 0x392f9cu: goto label_392f9c;
        default: break;
    }

    ctx->pc = 0x392ee0u;

    // 0x392ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x392ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x392ee4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x392ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x392ee8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x392ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x392eec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x392eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x392ef0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x392ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392ef4: 0x90840032  lbu         $a0, 0x32($a0)
    ctx->pc = 0x392ef4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x392ef8: 0x10830063  beq         $a0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x392EF8u;
    {
        const bool branch_taken_0x392ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x392EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EF8u;
        // 0x392efc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ef8) {
            ctx->pc = 0x393088u;
            goto label_393088;
        }
    }
    ctx->pc = 0x392F00u;
    // 0x392f00: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x392F00u;
    {
        const bool branch_taken_0x392f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x392f00) {
            ctx->pc = 0x392F28u;
            goto label_392f28;
        }
    }
    ctx->pc = 0x392F08u;
    // 0x392f08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x392F08u;
    {
        const bool branch_taken_0x392f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x392f08) {
            ctx->pc = 0x392F18u;
            goto label_392f18;
        }
    }
    ctx->pc = 0x392F10u;
    // 0x392f10: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x392F10u;
    {
        const bool branch_taken_0x392f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x392f10) {
            ctx->pc = 0x3930A0u;
            goto label_3930a0;
        }
    }
    ctx->pc = 0x392F18u;
label_392f18:
    // 0x392f18: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x392f18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x392f1c: 0x92030032  lbu         $v1, 0x32($s0)
    ctx->pc = 0x392f1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x392f20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x392f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x392f24: 0xa2030032  sb          $v1, 0x32($s0)
    ctx->pc = 0x392f24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 3));
label_392f28:
    // 0x392f28: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x392f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x392f2c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x392f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x392f30: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x392f30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x392f34: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x392f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x392f38: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x392f38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x392f3c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x392f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x392f40: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x392f40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x392f44: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x392f44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x392f48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x392f48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392f4c: 0x0  nop
    ctx->pc = 0x392f4cu;
    // NOP
    // 0x392f50: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x392f50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x392f54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x392f54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x392f58: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x392F58u;
    {
        const bool branch_taken_0x392f58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x392F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F58u;
        // 0x392f5c: 0x96050034  lhu         $a1, 0x34($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f58) {
            ctx->pc = 0x392F70u;
            goto label_392f70;
        }
    }
    ctx->pc = 0x392F60u;
    // 0x392f60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x392f60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x392f64: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x392f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x392f68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x392F68u;
    {
        const bool branch_taken_0x392f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F68u;
        // 0x392f6c: 0xa4082b  sltu        $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f68) {
            ctx->pc = 0x392F8Cu;
            goto label_392f8c;
        }
    }
    ctx->pc = 0x392F70u;
label_392f70:
    // 0x392f70: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x392f70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x392f74: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x392f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x392f78: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x392f78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x392f7c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x392f7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x392f80: 0x0  nop
    ctx->pc = 0x392f80u;
    // NOP
    // 0x392f84: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x392f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x392f88: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x392f88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_392f8c:
    // 0x392f8c: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x392F8Cu;
    {
        const bool branch_taken_0x392f8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x392f8c) {
            ctx->pc = 0x393078u;
            goto label_393078;
        }
    }
    ctx->pc = 0x392F94u;
    // 0x392f94: 0xc0e4acc  jal         func_392B30
    ctx->pc = 0x392F94u;
    SET_GPR_U32(ctx, 31, 0x392F9Cu);
    ctx->pc = 0x392F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392F94u;
    // 0x392f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392B30u, 0x392F94u, 0x392F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392F9Cu;
label_392f9c:
    // 0x392f9c: 0x96030034  lhu         $v1, 0x34($s0)
    ctx->pc = 0x392f9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x392fa0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x392FA0u;
    {
        const bool branch_taken_0x392fa0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x392FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FA0u;
        // 0x392fa4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392fa0) {
            ctx->pc = 0x392FB4u;
            goto label_392fb4;
        }
    }
    ctx->pc = 0x392FA8u;
    // 0x392fa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x392fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392fac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x392FACu;
    {
        const bool branch_taken_0x392fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FACu;
        // 0x392fb0: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x392fac) {
            ctx->pc = 0x392FCCu;
            goto label_392fcc;
        }
    }
    ctx->pc = 0x392FB4u;
label_392fb4:
    // 0x392fb4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x392fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x392fb8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x392fb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x392fbc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x392fbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392fc0: 0x0  nop
    ctx->pc = 0x392fc0u;
    // NOP
    // 0x392fc4: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x392fc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x392fc8: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x392fc8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_392fcc:
    // 0x392fcc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x392fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x392fd0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x392fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x392fd4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x392fd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x392fd8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x392fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x392fdc: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x392fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x392fe0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x392fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x392fe4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x392fe4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x392fe8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x392fe8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x392fec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x392fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392ff0: 0x0  nop
    ctx->pc = 0x392ff0u;
    // NOP
    // 0x392ff4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x392ff4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x392ff8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x392ff8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x392ffc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x392FFCu;
    {
        const bool branch_taken_0x392ffc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x392ffc) {
            ctx->pc = 0x393014u;
            goto label_393014;
        }
    }
    ctx->pc = 0x393004u;
    // 0x393004: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x393004u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x393008: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x393008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x39300c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39300Cu;
    {
        const bool branch_taken_0x39300c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39300c) {
            ctx->pc = 0x39302Cu;
            goto label_39302c;
        }
    }
    ctx->pc = 0x393014u;
label_393014:
    // 0x393014: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x393014u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x393018: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x393018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39301c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39301cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x393020: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x393020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x393024: 0x0  nop
    ctx->pc = 0x393024u;
    // NOP
    // 0x393028: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x393028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_39302c:
    // 0x39302c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39302Cu;
    {
        const bool branch_taken_0x39302c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x393030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39302Cu;
        // 0x393030: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39302c) {
            ctx->pc = 0x393040u;
            goto label_393040;
        }
    }
    ctx->pc = 0x393034u;
    // 0x393034: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x393034u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x393038: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x393038u;
    {
        const bool branch_taken_0x393038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393038u;
        // 0x39303c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x393038) {
            ctx->pc = 0x393058u;
            goto label_393058;
        }
    }
    ctx->pc = 0x393040u;
label_393040:
    // 0x393040: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x393040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x393044: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x393044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x393048: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x393048u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39304c: 0x0  nop
    ctx->pc = 0x39304cu;
    // NOP
    // 0x393050: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x393050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x393054: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x393054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_393058:
    // 0x393058: 0x0  nop
    ctx->pc = 0x393058u;
    // NOP
    // 0x39305c: 0x0  nop
    ctx->pc = 0x39305cu;
    // NOP
    // 0x393060: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x393060u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x393064: 0x0  nop
    ctx->pc = 0x393064u;
    // NOP
    // 0x393068: 0x0  nop
    ctx->pc = 0x393068u;
    // NOP
    // 0x39306c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39306Cu;
    {
        const bool branch_taken_0x39306c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39306Cu;
        // 0x393070: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39306c) {
            ctx->pc = 0x3930A0u;
            goto label_3930a0;
        }
    }
    ctx->pc = 0x393074u;
    // 0x393074: 0x0  nop
    ctx->pc = 0x393074u;
    // NOP
label_393078:
    // 0x393078: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x393078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x39307c: 0x92030032  lbu         $v1, 0x32($s0)
    ctx->pc = 0x39307cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x393080: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x393080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x393084: 0xa2030032  sb          $v1, 0x32($s0)
    ctx->pc = 0x393084u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 3));
label_393088:
    // 0x393088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x393088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39308c: 0xa2030030  sb          $v1, 0x30($s0)
    ctx->pc = 0x39308cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x393090: 0xa2000032  sb          $zero, 0x32($s0)
    ctx->pc = 0x393090u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x393094: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x393094u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x393098: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x393098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x39309c: 0x0  nop
    ctx->pc = 0x39309cu;
    // NOP
label_3930a0:
    // 0x3930a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3930a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3930a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3930a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3930a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3930A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3930ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930A8u;
        // 0x3930ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3930A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3930B0u;
}
