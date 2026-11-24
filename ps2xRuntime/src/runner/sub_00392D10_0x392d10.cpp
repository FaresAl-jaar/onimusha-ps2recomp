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

// Function: sub_00392D10
// Address: 0x392d10 - 0x392ed8
void sub_00392D10_0x392d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392D10_0x392d10");
#endif

    switch (ctx->pc) {
        case 0x392dccu: goto label_392dcc;
        default: break;
    }

    ctx->pc = 0x392d10u;

    // 0x392d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x392d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x392d14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x392d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x392d18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x392d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x392d1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x392d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x392d20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x392d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392d24: 0x90840032  lbu         $a0, 0x32($a0)
    ctx->pc = 0x392d24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x392d28: 0x10830063  beq         $a0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x392D28u;
    {
        const bool branch_taken_0x392d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x392D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D28u;
        // 0x392d2c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d28) {
            ctx->pc = 0x392EB8u;
            goto label_392eb8;
        }
    }
    ctx->pc = 0x392D30u;
    // 0x392d30: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x392D30u;
    {
        const bool branch_taken_0x392d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x392d30) {
            ctx->pc = 0x392D58u;
            goto label_392d58;
        }
    }
    ctx->pc = 0x392D38u;
    // 0x392d38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x392D38u;
    {
        const bool branch_taken_0x392d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x392d38) {
            ctx->pc = 0x392D48u;
            goto label_392d48;
        }
    }
    ctx->pc = 0x392D40u;
    // 0x392d40: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x392D40u;
    {
        const bool branch_taken_0x392d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x392d40) {
            ctx->pc = 0x392EC8u;
            goto label_392ec8;
        }
    }
    ctx->pc = 0x392D48u;
label_392d48:
    // 0x392d48: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x392d48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x392d4c: 0x92030032  lbu         $v1, 0x32($s0)
    ctx->pc = 0x392d4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x392d50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x392d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x392d54: 0xa2030032  sb          $v1, 0x32($s0)
    ctx->pc = 0x392d54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 3));
label_392d58:
    // 0x392d58: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x392d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x392d5c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x392d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x392d60: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x392d60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x392d64: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x392d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x392d68: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x392d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x392d6c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x392d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x392d70: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x392d70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x392d74: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x392d74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x392d78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x392d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392d7c: 0x0  nop
    ctx->pc = 0x392d7cu;
    // NOP
    // 0x392d80: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x392d80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x392d84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x392d84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x392d88: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x392D88u;
    {
        const bool branch_taken_0x392d88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x392D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D88u;
        // 0x392d8c: 0x96050034  lhu         $a1, 0x34($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d88) {
            ctx->pc = 0x392DA0u;
            goto label_392da0;
        }
    }
    ctx->pc = 0x392D90u;
    // 0x392d90: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x392d90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x392d94: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x392d94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x392d98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x392D98u;
    {
        const bool branch_taken_0x392d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D98u;
        // 0x392d9c: 0xa4082b  sltu        $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d98) {
            ctx->pc = 0x392DBCu;
            goto label_392dbc;
        }
    }
    ctx->pc = 0x392DA0u;
label_392da0:
    // 0x392da0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x392da0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x392da4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x392da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x392da8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x392da8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x392dac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x392dacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x392db0: 0x0  nop
    ctx->pc = 0x392db0u;
    // NOP
    // 0x392db4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x392db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x392db8: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x392db8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_392dbc:
    // 0x392dbc: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x392DBCu;
    {
        const bool branch_taken_0x392dbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x392dbc) {
            ctx->pc = 0x392EA8u;
            goto label_392ea8;
        }
    }
    ctx->pc = 0x392DC4u;
    // 0x392dc4: 0xc0e4acc  jal         func_392B30
    ctx->pc = 0x392DC4u;
    SET_GPR_U32(ctx, 31, 0x392DCCu);
    ctx->pc = 0x392DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392DC4u;
    // 0x392dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392B30u, 0x392DC4u, 0x392DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392DCCu;
label_392dcc:
    // 0x392dcc: 0x96030034  lhu         $v1, 0x34($s0)
    ctx->pc = 0x392dccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x392dd0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x392DD0u;
    {
        const bool branch_taken_0x392dd0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x392DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DD0u;
        // 0x392dd4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392dd0) {
            ctx->pc = 0x392DE4u;
            goto label_392de4;
        }
    }
    ctx->pc = 0x392DD8u;
    // 0x392dd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x392dd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392ddc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x392DDCu;
    {
        const bool branch_taken_0x392ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DDCu;
        // 0x392de0: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ddc) {
            ctx->pc = 0x392DFCu;
            goto label_392dfc;
        }
    }
    ctx->pc = 0x392DE4u;
label_392de4:
    // 0x392de4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x392de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x392de8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x392de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x392dec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x392decu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392df0: 0x0  nop
    ctx->pc = 0x392df0u;
    // NOP
    // 0x392df4: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x392df4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x392df8: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x392df8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_392dfc:
    // 0x392dfc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x392dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x392e00: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x392e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x392e04: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x392e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x392e08: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x392e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x392e0c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x392e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x392e10: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x392e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x392e14: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x392e14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x392e18: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x392e18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x392e1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x392e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392e20: 0x0  nop
    ctx->pc = 0x392e20u;
    // NOP
    // 0x392e24: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x392e24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x392e28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x392e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x392e2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x392E2Cu;
    {
        const bool branch_taken_0x392e2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x392e2c) {
            ctx->pc = 0x392E44u;
            goto label_392e44;
        }
    }
    ctx->pc = 0x392E34u;
    // 0x392e34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x392e34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x392e38: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x392e38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x392e3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x392E3Cu;
    {
        const bool branch_taken_0x392e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x392e3c) {
            ctx->pc = 0x392E5Cu;
            goto label_392e5c;
        }
    }
    ctx->pc = 0x392E44u;
label_392e44:
    // 0x392e44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x392e44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x392e48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x392e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x392e4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x392e4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x392e50: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x392e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x392e54: 0x0  nop
    ctx->pc = 0x392e54u;
    // NOP
    // 0x392e58: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x392e58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_392e5c:
    // 0x392e5c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x392E5Cu;
    {
        const bool branch_taken_0x392e5c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x392E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E5Cu;
        // 0x392e60: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392e5c) {
            ctx->pc = 0x392E70u;
            goto label_392e70;
        }
    }
    ctx->pc = 0x392E64u;
    // 0x392e64: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x392e64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392e68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x392E68u;
    {
        const bool branch_taken_0x392e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E68u;
        // 0x392e6c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x392e68) {
            ctx->pc = 0x392E88u;
            goto label_392e88;
        }
    }
    ctx->pc = 0x392E70u;
label_392e70:
    // 0x392e70: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x392e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x392e74: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x392e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x392e78: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x392e78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392e7c: 0x0  nop
    ctx->pc = 0x392e7cu;
    // NOP
    // 0x392e80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x392e80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x392e84: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x392e84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_392e88:
    // 0x392e88: 0x0  nop
    ctx->pc = 0x392e88u;
    // NOP
    // 0x392e8c: 0x0  nop
    ctx->pc = 0x392e8cu;
    // NOP
    // 0x392e90: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x392e90u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x392e94: 0x0  nop
    ctx->pc = 0x392e94u;
    // NOP
    // 0x392e98: 0x0  nop
    ctx->pc = 0x392e98u;
    // NOP
    // 0x392e9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x392E9Cu;
    {
        const bool branch_taken_0x392e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E9Cu;
        // 0x392ea0: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x392e9c) {
            ctx->pc = 0x392EC8u;
            goto label_392ec8;
        }
    }
    ctx->pc = 0x392EA4u;
    // 0x392ea4: 0x0  nop
    ctx->pc = 0x392ea4u;
    // NOP
label_392ea8:
    // 0x392ea8: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x392ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x392eac: 0x92030032  lbu         $v1, 0x32($s0)
    ctx->pc = 0x392eacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x392eb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x392eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x392eb4: 0xa2030032  sb          $v1, 0x32($s0)
    ctx->pc = 0x392eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 3));
label_392eb8:
    // 0x392eb8: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x392eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x392ebc: 0xa2000032  sb          $zero, 0x32($s0)
    ctx->pc = 0x392ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x392ec0: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x392ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x392ec4: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x392ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_392ec8:
    // 0x392ec8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x392ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x392ecc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x392eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x392ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x392ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392ED0u;
        // 0x392ed4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392ED8u;
}
