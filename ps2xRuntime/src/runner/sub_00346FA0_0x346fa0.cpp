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

// Function: sub_00346FA0
// Address: 0x346fa0 - 0x347094
void sub_00346FA0_0x346fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346FA0_0x346fa0");
#endif

    switch (ctx->pc) {
        case 0x346fa0u: goto label_346fa0;
        case 0x346fa4u: goto label_346fa4;
        case 0x346fa8u: goto label_346fa8;
        case 0x346facu: goto label_346fac;
        case 0x346fb0u: goto label_346fb0;
        case 0x346fb4u: goto label_346fb4;
        case 0x346fb8u: goto label_346fb8;
        case 0x346fbcu: goto label_346fbc;
        case 0x346fc0u: goto label_346fc0;
        case 0x346fc4u: goto label_346fc4;
        case 0x346fc8u: goto label_346fc8;
        case 0x346fccu: goto label_346fcc;
        case 0x346fd0u: goto label_346fd0;
        case 0x346fd4u: goto label_346fd4;
        case 0x346fd8u: goto label_346fd8;
        case 0x346fdcu: goto label_346fdc;
        case 0x346fe0u: goto label_346fe0;
        case 0x346fe4u: goto label_346fe4;
        case 0x346fe8u: goto label_346fe8;
        case 0x346fecu: goto label_346fec;
        case 0x346ff0u: goto label_346ff0;
        case 0x346ff4u: goto label_346ff4;
        case 0x346ff8u: goto label_346ff8;
        case 0x346ffcu: goto label_346ffc;
        case 0x347000u: goto label_347000;
        case 0x347004u: goto label_347004;
        case 0x347008u: goto label_347008;
        case 0x34700cu: goto label_34700c;
        case 0x347010u: goto label_347010;
        case 0x347014u: goto label_347014;
        case 0x347018u: goto label_347018;
        case 0x34701cu: goto label_34701c;
        case 0x347020u: goto label_347020;
        case 0x347024u: goto label_347024;
        case 0x347028u: goto label_347028;
        case 0x34702cu: goto label_34702c;
        case 0x347030u: goto label_347030;
        case 0x347034u: goto label_347034;
        case 0x347038u: goto label_347038;
        case 0x34703cu: goto label_34703c;
        case 0x347040u: goto label_347040;
        case 0x347044u: goto label_347044;
        case 0x347048u: goto label_347048;
        case 0x34704cu: goto label_34704c;
        case 0x347050u: goto label_347050;
        case 0x347054u: goto label_347054;
        case 0x347058u: goto label_347058;
        case 0x34705cu: goto label_34705c;
        case 0x347060u: goto label_347060;
        case 0x347064u: goto label_347064;
        case 0x347068u: goto label_347068;
        case 0x34706cu: goto label_34706c;
        case 0x347070u: goto label_347070;
        case 0x347074u: goto label_347074;
        case 0x347078u: goto label_347078;
        case 0x34707cu: goto label_34707c;
        case 0x347080u: goto label_347080;
        case 0x347084u: goto label_347084;
        case 0x347088u: goto label_347088;
        case 0x34708cu: goto label_34708c;
        case 0x347090u: goto label_347090;
        default: break;
    }

    ctx->pc = 0x346fa0u;

label_346fa0:
    // 0x346fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x346fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_346fa4:
    // 0x346fa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x346fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_346fa8:
    // 0x346fa8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x346fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_346fac:
    // 0x346fac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x346facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_346fb0:
    // 0x346fb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x346fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_346fb4:
    // 0x346fb4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x346fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_346fb8:
    // 0x346fb8: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x346fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_346fbc:
    // 0x346fbc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x346fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_346fc0:
    // 0x346fc0: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x346fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_346fc4:
    // 0x346fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346fc8:
    // 0x346fc8: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x346fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_346fcc:
    // 0x346fcc: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x346fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_346fd0:
    // 0x346fd0: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x346fd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_346fd4:
    // 0x346fd4: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x346fd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_346fd8:
    // 0x346fd8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x346fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_346fdc:
    // 0x346fdc: 0xc0a4408  jal         func_291020
label_346fe0:
    if (ctx->pc == 0x346FE0u) {
        ctx->pc = 0x346FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346FDCu;
        // 0x346fe0: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x346FE4u;
        goto label_346fe4;
    }
    ctx->pc = 0x346FDCu;
    SET_GPR_U32(ctx, 31, 0x346FE4u);
    ctx->pc = 0x346FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346FDCu;
    // 0x346fe0: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x346FDCu, 0x346FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346FE4u;
label_346fe4:
    // 0x346fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346fe8:
    // 0x346fe8: 0xc0a43fc  jal         func_290FF0
label_346fec:
    if (ctx->pc == 0x346FECu) {
        ctx->pc = 0x346FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346FE8u;
        // 0x346fec: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x346FF0u;
        goto label_346ff0;
    }
    ctx->pc = 0x346FE8u;
    SET_GPR_U32(ctx, 31, 0x346FF0u);
    ctx->pc = 0x346FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346FE8u;
    // 0x346fec: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x346FE8u, 0x346FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346FF0u;
label_346ff0:
    // 0x346ff0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x346ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_346ff4:
    // 0x346ff4: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x346ff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_346ff8:
    // 0x346ff8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x346ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_346ffc:
    // 0x346ffc: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x346ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_347000:
    // 0x347000: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x347000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347004:
    // 0x347004: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x347004u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_347008:
    // 0x347008: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x347008u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_34700c:
    // 0x34700c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x34700cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347010:
    // 0x347010: 0xc0510e0  jal         func_144380
label_347014:
    if (ctx->pc == 0x347014u) {
        ctx->pc = 0x347014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347010u;
        // 0x347014: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347018u;
        goto label_347018;
    }
    ctx->pc = 0x347010u;
    SET_GPR_U32(ctx, 31, 0x347018u);
    ctx->pc = 0x347014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347010u;
    // 0x347014: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x347010u, 0x347018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347018u;
label_347018:
    // 0x347018: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x347018u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_34701c:
    // 0x34701c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34701cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_347020:
    // 0x347020: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x347020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_347024:
    // 0x347024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_347028:
    // 0x347028: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x347028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_34702c:
    // 0x34702c: 0x24050214  addiu       $a1, $zero, 0x214
    ctx->pc = 0x34702cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
label_347030:
    // 0x347030: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x347030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_347034:
    // 0x347034: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x347034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_347038:
    // 0x347038: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x347038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_34703c:
    // 0x34703c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x34703cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_347040:
    // 0x347040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_347044:
    // 0x347044: 0x0  nop
    ctx->pc = 0x347044u;
    // NOP
label_347048:
    // 0x347048: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x347048u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_34704c:
    // 0x34704c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34704cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_347050:
    // 0x347050: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x347050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_347054:
    // 0x347054: 0x0  nop
    ctx->pc = 0x347054u;
    // NOP
label_347058:
    // 0x347058: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x347058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_34705c:
    // 0x34705c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34705cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_347060:
    // 0x347060: 0xc0d0484  jal         func_341210
label_347064:
    if (ctx->pc == 0x347064u) {
        ctx->pc = 0x347064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347060u;
        // 0x347064: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x347068u;
        goto label_347068;
    }
    ctx->pc = 0x347060u;
    SET_GPR_U32(ctx, 31, 0x347068u);
    ctx->pc = 0x347064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347060u;
    // 0x347064: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x347060u, 0x347068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347068u;
label_347068:
    // 0x347068: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x347068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_34706c:
    // 0x34706c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x34706cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_347070:
    // 0x347070: 0x320f809  jalr        $t9
label_347074:
    if (ctx->pc == 0x347074u) {
        ctx->pc = 0x347074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347070u;
        // 0x347074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347078u;
        goto label_347078;
    }
    ctx->pc = 0x347070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x347078u);
        ctx->pc = 0x347074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347070u;
        // 0x347074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347070u, 0x347078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x347078u;
label_347078:
    // 0x347078: 0xc0e2c74  jal         func_38B1D0
label_34707c:
    if (ctx->pc == 0x34707Cu) {
        ctx->pc = 0x34707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347078u;
        // 0x34707c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347080u;
        goto label_347080;
    }
    ctx->pc = 0x347078u;
    SET_GPR_U32(ctx, 31, 0x347080u);
    ctx->pc = 0x34707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347078u;
    // 0x34707c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B1D0u, 0x347078u, 0x347080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347080u;
label_347080:
    // 0x347080: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x347080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_347084:
    // 0x347084: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_347088:
    // 0x347088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34708c:
    // 0x34708c: 0x3e00008  jr          $ra
label_347090:
    if (ctx->pc == 0x347090u) {
        ctx->pc = 0x347090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34708Cu;
        // 0x347090: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347094u;
        goto label_fallthrough_0x34708c;
    }
    ctx->pc = 0x34708Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34708Cu;
        // 0x347090: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34708Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34708c:
    ctx->pc = 0x347094u;
}
