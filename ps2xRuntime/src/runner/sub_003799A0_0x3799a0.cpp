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

// Function: sub_003799A0
// Address: 0x3799a0 - 0x379b18
void sub_003799A0_0x3799a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003799A0_0x3799a0");
#endif

    ctx->pc = 0x3799a0u;

    // 0x3799a0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3799a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3799a4: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3799a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3799a8: 0x10200059  beqz        $at, . + 4 + (0x59 << 2)
    ctx->pc = 0x3799A8u;
    {
        const bool branch_taken_0x3799a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3799ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3799A8u;
        // 0x3799ac: 0x3c050068  lui         $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3799a8) {
            ctx->pc = 0x379B10u;
            goto label_379b10;
        }
    }
    ctx->pc = 0x3799B0u;
    // 0x3799b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3799b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3799b4: 0x24a51c90  addiu       $a1, $a1, 0x1C90
    ctx->pc = 0x3799b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7312));
    // 0x3799b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3799b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3799bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3799bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3799c0: 0x600008  jr          $v1
    ctx->pc = 0x3799C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3799C8u: goto label_3799c8;
            case 0x3799F8u: goto label_3799f8;
            case 0x379A38u: goto label_379a38;
            case 0x379AA0u: goto label_379aa0;
            case 0x379AF8u: goto label_379af8;
            case 0x379B00u: goto label_379b00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3799C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3799C8u;
label_3799c8:
    // 0x3799c8: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3799c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3799cc: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3799ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3799d0: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x3799d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x3799d4: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3799d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3799d8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3799d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3799dc: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x3799dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3799e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3799e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3799e4: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x3799e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3799e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3799e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3799ec: 0xac8507ec  sw          $a1, 0x7EC($a0)
    ctx->pc = 0x3799ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 5));
    // 0x3799f0: 0xa0830821  sb          $v1, 0x821($a0)
    ctx->pc = 0x3799f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3799f4: 0x0  nop
    ctx->pc = 0x3799f4u;
    // NOP
label_3799f8:
    // 0x3799f8: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x3799f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x3799fc: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3799FCu;
    {
        const bool branch_taken_0x3799fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3799fc) {
            ctx->pc = 0x379B10u;
            goto label_379b10;
        }
    }
    ctx->pc = 0x379A04u;
    // 0x379a04: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x379a04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x379a08: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x379a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x379a0c: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x379a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x379a10: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x379a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x379a14: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x379a14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x379a18: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x379a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x379a1c: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x379a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x379a20: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x379a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x379a24: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x379a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x379a28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x379a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x379a2c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x379A2Cu;
    {
        const bool branch_taken_0x379a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A2Cu;
        // 0x379a30: 0xa0830821  sb          $v1, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379a2c) {
            ctx->pc = 0x379B10u;
            goto label_379b10;
        }
    }
    ctx->pc = 0x379A34u;
    // 0x379a34: 0x0  nop
    ctx->pc = 0x379a34u;
    // NOP
label_379a38:
    // 0x379a38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x379a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379a3c: 0xa0830821  sb          $v1, 0x821($a0)
    ctx->pc = 0x379a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x379a40: 0x3c053c88  lui         $a1, 0x3C88
    ctx->pc = 0x379a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15496 << 16));
    // 0x379a44: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x379a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x379a48: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x379a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x379a4c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x379a4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x379a50: 0x34a58889  ori         $a1, $a1, 0x8889
    ctx->pc = 0x379a50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34953);
    // 0x379a54: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x379a54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x379a58: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x379a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x379a5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x379a5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379a60: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x379a60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x379a64: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x379a64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x379a68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x379a68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x379a6c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x379A6Cu;
    {
        const bool branch_taken_0x379a6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x379a6c) {
            ctx->pc = 0x379A84u;
            goto label_379a84;
        }
    }
    ctx->pc = 0x379A74u;
    // 0x379a74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x379a74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x379a78: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x379a78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x379a7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x379A7Cu;
    {
        const bool branch_taken_0x379a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A7Cu;
        // 0x379a80: 0xa4852b86  sh          $a1, 0x2B86($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 11142), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379a7c) {
            ctx->pc = 0x379AA0u;
            goto label_379aa0;
        }
    }
    ctx->pc = 0x379A84u;
label_379a84:
    // 0x379a84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x379a84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x379a88: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x379a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x379a8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x379a8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x379a90: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x379a90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x379a94: 0x0  nop
    ctx->pc = 0x379a94u;
    // NOP
    // 0x379a98: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x379a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x379a9c: 0xa4852b86  sh          $a1, 0x2B86($a0)
    ctx->pc = 0x379a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11142), (uint16_t)GPR_U32(ctx, 5));
label_379aa0:
    // 0x379aa0: 0x84832b86  lh          $v1, 0x2B86($a0)
    ctx->pc = 0x379aa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11142)));
    // 0x379aa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x379AA4u;
    {
        const bool branch_taken_0x379aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x379aa4) {
            ctx->pc = 0x379AB8u;
            goto label_379ab8;
        }
    }
    ctx->pc = 0x379AACu;
    // 0x379aac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x379aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x379ab0: 0xa4832b86  sh          $v1, 0x2B86($a0)
    ctx->pc = 0x379ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11142), (uint16_t)GPR_U32(ctx, 3));
    // 0x379ab4: 0x0  nop
    ctx->pc = 0x379ab4u;
    // NOP
label_379ab8:
    // 0x379ab8: 0x84832b86  lh          $v1, 0x2B86($a0)
    ctx->pc = 0x379ab8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11142)));
    // 0x379abc: 0x1c600014  bgtz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x379ABCu;
    {
        const bool branch_taken_0x379abc = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x379abc) {
            ctx->pc = 0x379B10u;
            goto label_379b10;
        }
    }
    ctx->pc = 0x379AC4u;
    // 0x379ac4: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x379ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x379ac8: 0x2403005e  addiu       $v1, $zero, 0x5E
    ctx->pc = 0x379ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x379acc: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x379accu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x379ad0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x379ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x379ad4: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x379ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x379ad8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x379ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x379adc: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x379adcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x379ae0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x379ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x379ae4: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x379ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x379ae8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x379ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x379aec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x379AECu;
    {
        const bool branch_taken_0x379aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379AECu;
        // 0x379af0: 0xa0830821  sb          $v1, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379aec) {
            ctx->pc = 0x379B10u;
            goto label_379b10;
        }
    }
    ctx->pc = 0x379AF4u;
    // 0x379af4: 0x0  nop
    ctx->pc = 0x379af4u;
    // NOP
label_379af8:
    // 0x379af8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x379af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x379afc: 0xa0830821  sb          $v1, 0x821($a0)
    ctx->pc = 0x379afcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
label_379b00:
    // 0x379b00: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x379b00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x379b04: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x379B04u;
    {
        const bool branch_taken_0x379b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x379B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B04u;
        // 0x379b08: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379b04) {
            ctx->pc = 0x379B10u;
            goto label_379b10;
        }
    }
    ctx->pc = 0x379B0Cu;
    // 0x379b0c: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x379b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_379b10:
    // 0x379b10: 0x3e00008  jr          $ra
    ctx->pc = 0x379B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379B18u;
}
