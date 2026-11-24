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

// Function: sub_003EB150
// Address: 0x3eb150 - 0x3eb2b8
void sub_003EB150_0x3eb150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB150_0x3eb150");
#endif

    ctx->pc = 0x3eb150u;

    // 0x3eb150: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3eb150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3eb154: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3eb154u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3eb158: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
    ctx->pc = 0x3EB158u;
    {
        const bool branch_taken_0x3eb158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB158u;
        // 0x3eb15c: 0x3c050068  lui         $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb158) {
            ctx->pc = 0x3EB2B0u;
            goto label_3eb2b0;
        }
    }
    ctx->pc = 0x3EB160u;
    // 0x3eb160: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3eb160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3eb164: 0x24a54e20  addiu       $a1, $a1, 0x4E20
    ctx->pc = 0x3eb164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20000));
    // 0x3eb168: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3eb168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3eb16c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3eb16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eb170: 0x600008  jr          $v1
    ctx->pc = 0x3EB170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3EB178u: goto label_3eb178;
            case 0x3EB1A8u: goto label_3eb1a8;
            case 0x3EB1E8u: goto label_3eb1e8;
            case 0x3EB250u: goto label_3eb250;
            case 0x3EB298u: goto label_3eb298;
            case 0x3EB2A0u: goto label_3eb2a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB170u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3EB178u;
label_3eb178:
    // 0x3eb178: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3eb178u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb17c: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3eb17cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb180: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x3eb180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3eb184: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3eb184u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eb188: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3eb188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eb18c: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x3eb18cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eb190: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb194: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x3eb194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3eb198: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3eb198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3eb19c: 0xac8507ec  sw          $a1, 0x7EC($a0)
    ctx->pc = 0x3eb19cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 5));
    // 0x3eb1a0: 0xa0830821  sb          $v1, 0x821($a0)
    ctx->pc = 0x3eb1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eb1a4: 0x0  nop
    ctx->pc = 0x3eb1a4u;
    // NOP
label_3eb1a8:
    // 0x3eb1a8: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x3eb1a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x3eb1ac: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x3EB1ACu;
    {
        const bool branch_taken_0x3eb1ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb1ac) {
            ctx->pc = 0x3EB2B0u;
            goto label_3eb2b0;
        }
    }
    ctx->pc = 0x3EB1B4u;
    // 0x3eb1b4: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3eb1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb1b8: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x3eb1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x3eb1bc: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3eb1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb1c0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3eb1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eb1c4: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3eb1c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eb1c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb1cc: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x3eb1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3eb1d0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3eb1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3eb1d4: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3eb1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3eb1d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3eb1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3eb1dc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3EB1DCu;
    {
        const bool branch_taken_0x3eb1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB1DCu;
        // 0x3eb1e0: 0xa0830821  sb          $v1, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb1dc) {
            ctx->pc = 0x3EB2B0u;
            goto label_3eb2b0;
        }
    }
    ctx->pc = 0x3EB1E4u;
    // 0x3eb1e4: 0x0  nop
    ctx->pc = 0x3eb1e4u;
    // NOP
label_3eb1e8:
    // 0x3eb1e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3eb1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3eb1ec: 0xa0830821  sb          $v1, 0x821($a0)
    ctx->pc = 0x3eb1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eb1f0: 0x3c053c88  lui         $a1, 0x3C88
    ctx->pc = 0x3eb1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15496 << 16));
    // 0x3eb1f4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3eb1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eb1f8: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3eb1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x3eb1fc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3eb1fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3eb200: 0x34a58889  ori         $a1, $a1, 0x8889
    ctx->pc = 0x3eb200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34953);
    // 0x3eb204: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3eb204u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eb208: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3eb208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3eb20c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3eb20cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eb210: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3eb210u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eb214: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eb214u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eb218: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3eb218u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eb21c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB21Cu;
    {
        const bool branch_taken_0x3eb21c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3eb21c) {
            ctx->pc = 0x3EB234u;
            goto label_3eb234;
        }
    }
    ctx->pc = 0x3EB224u;
    // 0x3eb224: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eb224u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eb228: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3eb228u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3eb22c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EB22Cu;
    {
        const bool branch_taken_0x3eb22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB22Cu;
        // 0x3eb230: 0xa4852b22  sh          $a1, 0x2B22($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 11042), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb22c) {
            ctx->pc = 0x3EB250u;
            goto label_3eb250;
        }
    }
    ctx->pc = 0x3EB234u;
label_3eb234:
    // 0x3eb234: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3eb234u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3eb238: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb23c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eb23cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eb240: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3eb240u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3eb244: 0x0  nop
    ctx->pc = 0x3eb244u;
    // NOP
    // 0x3eb248: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3eb248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3eb24c: 0xa4852b22  sh          $a1, 0x2B22($a0)
    ctx->pc = 0x3eb24cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11042), (uint16_t)GPR_U32(ctx, 5));
label_3eb250:
    // 0x3eb250: 0x84832b22  lh          $v1, 0x2B22($a0)
    ctx->pc = 0x3eb250u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11042)));
    // 0x3eb254: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eb254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3eb258: 0xa4832b22  sh          $v1, 0x2B22($a0)
    ctx->pc = 0x3eb258u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11042), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eb25c: 0x84832b22  lh          $v1, 0x2B22($a0)
    ctx->pc = 0x3eb25cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11042)));
    // 0x3eb260: 0x1c600013  bgtz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3EB260u;
    {
        const bool branch_taken_0x3eb260 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3eb260) {
            ctx->pc = 0x3EB2B0u;
            goto label_3eb2b0;
        }
    }
    ctx->pc = 0x3EB268u;
    // 0x3eb268: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3eb268u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb26c: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x3eb26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3eb270: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3eb270u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb274: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3eb274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eb278: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3eb278u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eb27c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb280: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x3eb280u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3eb284: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3eb284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3eb288: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3eb288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3eb28c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3eb28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3eb290: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EB290u;
    {
        const bool branch_taken_0x3eb290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB290u;
        // 0x3eb294: 0xa0830821  sb          $v1, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb290) {
            ctx->pc = 0x3EB2B0u;
            goto label_3eb2b0;
        }
    }
    ctx->pc = 0x3EB298u;
label_3eb298:
    // 0x3eb298: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3eb298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3eb29c: 0xa0830821  sb          $v1, 0x821($a0)
    ctx->pc = 0x3eb29cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3eb2a0:
    // 0x3eb2a0: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x3eb2a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x3eb2a4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EB2A4u;
    {
        const bool branch_taken_0x3eb2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2A4u;
        // 0x3eb2a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb2a4) {
            ctx->pc = 0x3EB2B0u;
            goto label_3eb2b0;
        }
    }
    ctx->pc = 0x3EB2ACu;
    // 0x3eb2ac: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x3eb2acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3eb2b0:
    // 0x3eb2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EB2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EB2B8u;
}
