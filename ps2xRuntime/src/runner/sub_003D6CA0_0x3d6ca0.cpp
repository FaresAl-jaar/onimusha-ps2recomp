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

// Function: sub_003D6CA0
// Address: 0x3d6ca0 - 0x3d6e18
void sub_003D6CA0_0x3d6ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6CA0_0x3d6ca0");
#endif

    ctx->pc = 0x3d6ca0u;

    // 0x3d6ca0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3d6ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3d6ca4: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3d6ca4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3d6ca8: 0x10200059  beqz        $at, . + 4 + (0x59 << 2)
    ctx->pc = 0x3D6CA8u;
    {
        const bool branch_taken_0x3d6ca8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6CA8u;
        // 0x3d6cac: 0x3c050068  lui         $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6ca8) {
            ctx->pc = 0x3D6E10u;
            goto label_3d6e10;
        }
    }
    ctx->pc = 0x3D6CB0u;
    // 0x3d6cb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d6cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d6cb4: 0x24a54600  addiu       $a1, $a1, 0x4600
    ctx->pc = 0x3d6cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17920));
    // 0x3d6cb8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d6cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d6cbc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d6cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d6cc0: 0x600008  jr          $v1
    ctx->pc = 0x3D6CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D6CC8u: goto label_3d6cc8;
            case 0x3D6CF8u: goto label_3d6cf8;
            case 0x3D6D38u: goto label_3d6d38;
            case 0x3D6DA0u: goto label_3d6da0;
            case 0x3D6DF8u: goto label_3d6df8;
            case 0x3D6E00u: goto label_3d6e00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6CC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D6CC8u;
label_3d6cc8:
    // 0x3d6cc8: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3d6cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6ccc: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3d6cccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6cd0: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x3d6cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x3d6cd4: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3d6cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d6cd8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3d6cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d6cdc: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x3d6cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d6ce0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d6ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d6ce4: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x3d6ce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d6ce8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d6ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d6cec: 0xac8507ec  sw          $a1, 0x7EC($a0)
    ctx->pc = 0x3d6cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 5));
    // 0x3d6cf0: 0xa0830821  sb          $v1, 0x821($a0)
    ctx->pc = 0x3d6cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d6cf4: 0x0  nop
    ctx->pc = 0x3d6cf4u;
    // NOP
label_3d6cf8:
    // 0x3d6cf8: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x3d6cf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x3d6cfc: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3D6CFCu;
    {
        const bool branch_taken_0x3d6cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6cfc) {
            ctx->pc = 0x3D6E10u;
            goto label_3d6e10;
        }
    }
    ctx->pc = 0x3D6D04u;
    // 0x3d6d04: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3d6d04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6d08: 0x24030085  addiu       $v1, $zero, 0x85
    ctx->pc = 0x3d6d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x3d6d0c: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3d6d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6d10: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3d6d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d6d14: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3d6d14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d6d18: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d6d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d6d1c: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x3d6d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d6d20: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3d6d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d6d24: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3d6d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3d6d28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d6d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d6d2c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3D6D2Cu;
    {
        const bool branch_taken_0x3d6d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D2Cu;
        // 0x3d6d30: 0xa0830821  sb          $v1, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6d2c) {
            ctx->pc = 0x3D6E10u;
            goto label_3d6e10;
        }
    }
    ctx->pc = 0x3D6D34u;
    // 0x3d6d34: 0x0  nop
    ctx->pc = 0x3d6d34u;
    // NOP
label_3d6d38:
    // 0x3d6d38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d6d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d6d3c: 0xa0830821  sb          $v1, 0x821($a0)
    ctx->pc = 0x3d6d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d6d40: 0x3c053c88  lui         $a1, 0x3C88
    ctx->pc = 0x3d6d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15496 << 16));
    // 0x3d6d44: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3d6d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d6d48: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x3d6d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x3d6d4c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3d6d4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3d6d50: 0x34a58889  ori         $a1, $a1, 0x8889
    ctx->pc = 0x3d6d50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34953);
    // 0x3d6d54: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3d6d54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d6d58: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3d6d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3d6d5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d6d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d6d60: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3d6d60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3d6d64: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d6d64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d6d68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d6d68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d6d6c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D6D6Cu;
    {
        const bool branch_taken_0x3d6d6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d6d6c) {
            ctx->pc = 0x3D6D84u;
            goto label_3d6d84;
        }
    }
    ctx->pc = 0x3D6D74u;
    // 0x3d6d74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d6d74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d6d78: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3d6d78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3d6d7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D6D7Cu;
    {
        const bool branch_taken_0x3d6d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D7Cu;
        // 0x3d6d80: 0xa4852b28  sh          $a1, 0x2B28($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 11048), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6d7c) {
            ctx->pc = 0x3D6DA0u;
            goto label_3d6da0;
        }
    }
    ctx->pc = 0x3D6D84u;
label_3d6d84:
    // 0x3d6d84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d6d84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d6d88: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d6d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d6d8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d6d8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d6d90: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3d6d90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3d6d94: 0x0  nop
    ctx->pc = 0x3d6d94u;
    // NOP
    // 0x3d6d98: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3d6d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3d6d9c: 0xa4852b28  sh          $a1, 0x2B28($a0)
    ctx->pc = 0x3d6d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11048), (uint16_t)GPR_U32(ctx, 5));
label_3d6da0:
    // 0x3d6da0: 0x84832b28  lh          $v1, 0x2B28($a0)
    ctx->pc = 0x3d6da0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11048)));
    // 0x3d6da4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D6DA4u;
    {
        const bool branch_taken_0x3d6da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6da4) {
            ctx->pc = 0x3D6DB8u;
            goto label_3d6db8;
        }
    }
    ctx->pc = 0x3D6DACu;
    // 0x3d6dac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d6dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d6db0: 0xa4832b28  sh          $v1, 0x2B28($a0)
    ctx->pc = 0x3d6db0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11048), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d6db4: 0x0  nop
    ctx->pc = 0x3d6db4u;
    // NOP
label_3d6db8:
    // 0x3d6db8: 0x84832b28  lh          $v1, 0x2B28($a0)
    ctx->pc = 0x3d6db8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11048)));
    // 0x3d6dbc: 0x1c600014  bgtz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D6DBCu;
    {
        const bool branch_taken_0x3d6dbc = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3d6dbc) {
            ctx->pc = 0x3D6E10u;
            goto label_3d6e10;
        }
    }
    ctx->pc = 0x3D6DC4u;
    // 0x3d6dc4: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3d6dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6dc8: 0x24030086  addiu       $v1, $zero, 0x86
    ctx->pc = 0x3d6dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x3d6dcc: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3d6dccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6dd0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3d6dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d6dd4: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3d6dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d6dd8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d6dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d6ddc: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x3d6ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d6de0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3d6de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d6de4: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3d6de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3d6de8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d6de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d6dec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D6DECu;
    {
        const bool branch_taken_0x3d6dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6DECu;
        // 0x3d6df0: 0xa0830821  sb          $v1, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6dec) {
            ctx->pc = 0x3D6E10u;
            goto label_3d6e10;
        }
    }
    ctx->pc = 0x3D6DF4u;
    // 0x3d6df4: 0x0  nop
    ctx->pc = 0x3d6df4u;
    // NOP
label_3d6df8:
    // 0x3d6df8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3d6df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3d6dfc: 0xa0830821  sb          $v1, 0x821($a0)
    ctx->pc = 0x3d6dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3d6e00:
    // 0x3d6e00: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x3d6e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x3d6e04: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D6E04u;
    {
        const bool branch_taken_0x3d6e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E04u;
        // 0x3d6e08: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6e04) {
            ctx->pc = 0x3D6E10u;
            goto label_3d6e10;
        }
    }
    ctx->pc = 0x3D6E0Cu;
    // 0x3d6e0c: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x3d6e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3d6e10:
    // 0x3d6e10: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6E18u;
}
