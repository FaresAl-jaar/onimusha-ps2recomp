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

// Function: sub_00281E90
// Address: 0x281e90 - 0x282090
void sub_00281E90_0x281e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281E90_0x281e90");
#endif

    switch (ctx->pc) {
        case 0x281ec8u: goto label_281ec8;
        case 0x282018u: goto label_282018;
        case 0x282030u: goto label_282030;
        default: break;
    }

    ctx->pc = 0x281e90u;

    // 0x281e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x281e94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x281e9c: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x281e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x281ea0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x281ea4: 0x87838178  lh          $v1, -0x7E88($gp)
    ctx->pc = 0x281ea4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x281ea8: 0x9382817a  lbu         $v0, -0x7E86($gp)
    ctx->pc = 0x281ea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934906)));
    // 0x281eac: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x281eacu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x281eb0: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x281eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x281eb4: 0x90820821  lbu         $v0, 0x821($a0)
    ctx->pc = 0x281eb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x281eb8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x281eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x281ebc: 0x9045002c  lbu         $a1, 0x2C($v0)
    ctx->pc = 0x281ebcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x281ec0: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x281EC0u;
    SET_GPR_U32(ctx, 31, 0x281EC8u);
    ctx->pc = 0x281EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281EC0u;
    // 0x281ec4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x281EC0u, 0x281EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281EC8u;
label_281ec8:
    // 0x281ec8: 0x92050821  lbu         $a1, 0x821($s0)
    ctx->pc = 0x281ec8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x281ecc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x281eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x281ed0: 0x10a30065  beq         $a1, $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x281ED0u;
    {
        const bool branch_taken_0x281ed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x281ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281ED0u;
        // 0x281ed4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ed0) {
            ctx->pc = 0x282068u;
            goto label_282068;
        }
    }
    ctx->pc = 0x281ED8u;
    // 0x281ed8: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x281ED8u;
    {
        const bool branch_taken_0x281ed8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x281ed8) {
            ctx->pc = 0x281F10u;
            goto label_281f10;
        }
    }
    ctx->pc = 0x281EE0u;
    // 0x281ee0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281EE0u;
    {
        const bool branch_taken_0x281ee0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x281ee0) {
            ctx->pc = 0x281EF0u;
            goto label_281ef0;
        }
    }
    ctx->pc = 0x281EE8u;
    // 0x281ee8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x281EE8u;
    {
        const bool branch_taken_0x281ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281ee8) {
            ctx->pc = 0x282080u;
            goto label_282080;
        }
    }
    ctx->pc = 0x281EF0u;
label_281ef0:
    // 0x281ef0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x281ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x281ef4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x281ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x281ef8: 0x24030088  addiu       $v1, $zero, 0x88
    ctx->pc = 0x281ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x281efc: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x281efcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x281f00: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x281f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x281f04: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x281f04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x281f08: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x281f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x281f0c: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x281f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
label_281f10:
    // 0x281f10: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x281f10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x281f14: 0x1020005a  beqz        $at, . + 4 + (0x5A << 2)
    ctx->pc = 0x281F14u;
    {
        const bool branch_taken_0x281f14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x281f14) {
            ctx->pc = 0x282080u;
            goto label_282080;
        }
    }
    ctx->pc = 0x281F1Cu;
    // 0x281f1c: 0x92030783  lbu         $v1, 0x783($s0)
    ctx->pc = 0x281f1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1923)));
    // 0x281f20: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x281F20u;
    {
        const bool branch_taken_0x281f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x281f20) {
            ctx->pc = 0x281FC8u;
            goto label_281fc8;
        }
    }
    ctx->pc = 0x281F28u;
    // 0x281f28: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x281f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x281f2c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x281f2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281f30: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x281F30u;
    {
        const bool branch_taken_0x281f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x281f30) {
            ctx->pc = 0x281FC8u;
            goto label_281fc8;
        }
    }
    ctx->pc = 0x281F38u;
    // 0x281f38: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x281f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281f3c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x281f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x281f40: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x281f40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x281f44: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x281f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x281f48: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x281f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x281f4c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x281f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x281f50: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x281f50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x281f54: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x281f54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281f58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281f58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281f5c: 0x0  nop
    ctx->pc = 0x281f5cu;
    // NOP
    // 0x281f60: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x281f60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x281f64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x281f64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281f68: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x281F68u;
    {
        const bool branch_taken_0x281f68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x281f68) {
            ctx->pc = 0x281F80u;
            goto label_281f80;
        }
    }
    ctx->pc = 0x281F70u;
    // 0x281f70: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x281f70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x281f74: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x281f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x281f78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x281F78u;
    {
        const bool branch_taken_0x281f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F78u;
        // 0x281f7c: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f78) {
            ctx->pc = 0x281F9Cu;
            goto label_281f9c;
        }
    }
    ctx->pc = 0x281F80u;
label_281f80:
    // 0x281f80: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x281f80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x281f84: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x281f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x281f88: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x281f88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x281f8c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x281f8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x281f90: 0x0  nop
    ctx->pc = 0x281f90u;
    // NOP
    // 0x281f94: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x281f94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x281f98: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x281f98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_281f9c:
    // 0x281f9c: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x281f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x281fa0: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x281fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x281fa4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x281fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x281fa8: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x281fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x281fac: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x281facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x281fb0: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x281fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x281fb4: 0x2403009d  addiu       $v1, $zero, 0x9D
    ctx->pc = 0x281fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x281fb8: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x281fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x281fbc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x281FBCu;
    {
        const bool branch_taken_0x281fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FBCu;
        // 0x281fc0: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281fbc) {
            ctx->pc = 0x282080u;
            goto label_282080;
        }
    }
    ctx->pc = 0x281FC4u;
    // 0x281fc4: 0x0  nop
    ctx->pc = 0x281fc4u;
    // NOP
label_281fc8:
    // 0x281fc8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x281fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x281fcc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x281fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281fd0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x281fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x281fd4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x281fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x281fd8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x281fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x281fdc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x281fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281fe0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x281fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x281fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281fe8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x281fe8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x281fec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x281fecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x281ff0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x281ff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281ff4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x281FF4u;
    {
        const bool branch_taken_0x281ff4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x281ff4) {
            ctx->pc = 0x28200Cu;
            goto label_28200c;
        }
    }
    ctx->pc = 0x281FFCu;
    // 0x281ffc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x281ffcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282000: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x282000u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x282004: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x282004u;
    {
        const bool branch_taken_0x282004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282004u;
        // 0x282008: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282004) {
            ctx->pc = 0x282028u;
            goto label_282028;
        }
    }
    ctx->pc = 0x28200Cu;
label_28200c:
    // 0x28200c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28200cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282010: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x282010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x282014: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x282014u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_282018:
    // 0x282018: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x282018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x28201c: 0x0  nop
    ctx->pc = 0x28201cu;
    // NOP
    // 0x282020: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x282020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x282024: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x282024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_282028:
    // 0x282028: 0xc0a6b14  jal         func_29AC50
    ctx->pc = 0x282028u;
    SET_GPR_U32(ctx, 31, 0x282030u);
    ctx->pc = 0x28202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282028u;
    // 0x28202c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC50u, 0x282028u, 0x282030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282030u;
label_282030:
    // 0x282030: 0x9206083b  lbu         $a2, 0x83B($s0)
    ctx->pc = 0x282030u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x282034: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x282034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282038: 0x24040089  addiu       $a0, $zero, 0x89
    ctx->pc = 0x282038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x28203c: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x28203cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x282040: 0xa206083c  sb          $a2, 0x83C($s0)
    ctx->pc = 0x282040u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2108), (uint8_t)GPR_U32(ctx, 6));
    // 0x282044: 0xa205083b  sb          $a1, 0x83B($s0)
    ctx->pc = 0x282044u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2107), (uint8_t)GPR_U32(ctx, 5));
    // 0x282048: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x282048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x28204c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x28204cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x282050: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x282050u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x282054: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x282054u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x282058: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x282058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x28205c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28205Cu;
    {
        const bool branch_taken_0x28205c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28205Cu;
        // 0x282060: 0xa2050821  sb          $a1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28205c) {
            ctx->pc = 0x282080u;
            goto label_282080;
        }
    }
    ctx->pc = 0x282064u;
    // 0x282064: 0x0  nop
    ctx->pc = 0x282064u;
    // NOP
label_282068:
    // 0x282068: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x282068u;
    {
        const bool branch_taken_0x282068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282068) {
            ctx->pc = 0x282080u;
            goto label_282080;
        }
    }
    ctx->pc = 0x282070u;
    // 0x282070: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x282070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x282074: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x282074u;
    {
        const bool branch_taken_0x282074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282074u;
        // 0x282078: 0x2403009a  addiu       $v1, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282074) {
            ctx->pc = 0x282080u;
            goto label_282080;
        }
    }
    ctx->pc = 0x28207Cu;
    // 0x28207c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x28207cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_282080:
    // 0x282080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x282080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282088: 0x3e00008  jr          $ra
    ctx->pc = 0x282088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282088u;
        // 0x28208c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282090u;
}
