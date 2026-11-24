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

// Function: sub_003B9010
// Address: 0x3b9010 - 0x3b9220
void sub_003B9010_0x3b9010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9010_0x3b9010");
#endif

    switch (ctx->pc) {
        case 0x3b905cu: goto label_3b905c;
        case 0x3b9210u: goto label_3b9210;
        default: break;
    }

    ctx->pc = 0x3b9010u;

    // 0x3b9010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b9010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b9014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b9014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b9018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b9018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b901c: 0x90832b55  lbu         $v1, 0x2B55($a0)
    ctx->pc = 0x3b901cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11093)));
    // 0x3b9020: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3b9020u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3b9024: 0x1020007a  beqz        $at, . + 4 + (0x7A << 2)
    ctx->pc = 0x3B9024u;
    {
        const bool branch_taken_0x3b9024 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9024u;
        // 0x3b9028: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9024) {
            ctx->pc = 0x3B9210u;
            goto label_3b9210;
        }
    }
    ctx->pc = 0x3B902Cu;
    // 0x3b902c: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3b902cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3b9030: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b9030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b9034: 0x24a52ce0  addiu       $a1, $a1, 0x2CE0
    ctx->pc = 0x3b9034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11488));
    // 0x3b9038: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b9038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b903c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b903cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b9040: 0x600008  jr          $v1
    ctx->pc = 0x3B9040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B9048u: goto label_3b9048;
            case 0x3B9080u: goto label_3b9080;
            case 0x3B9108u: goto label_3b9108;
            case 0x3B9140u: goto label_3b9140;
            case 0x3B9168u: goto label_3b9168;
            case 0x3B91F0u: goto label_3b91f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9040u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B9048u;
label_3b9048:
    // 0x3b9048: 0xa6002b46  sh          $zero, 0x2B46($s0)
    ctx->pc = 0x3b9048u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11078), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b904c: 0x92022b4b  lbu         $v0, 0x2B4B($s0)
    ctx->pc = 0x3b904cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b9050: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3b9050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3b9054: 0xc0eeed4  jal         func_3BBB50
    ctx->pc = 0x3B9054u;
    SET_GPR_U32(ctx, 31, 0x3B905Cu);
    ctx->pc = 0x3B9058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9054u;
    // 0x3b9058: 0xa2022b4b  sb          $v0, 0x2B4B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBB50u, 0x3B9054u, 0x3B905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B905Cu;
label_3b905c:
    // 0x3b905c: 0x240300f1  addiu       $v1, $zero, 0xF1
    ctx->pc = 0x3b905cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x3b9060: 0xa2032b57  sb          $v1, 0x2B57($s0)
    ctx->pc = 0x3b9060u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9064: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b9064u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9068: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3b9068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b906c: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b906cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9070: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b9070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b9074: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b9074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b9078: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b9078u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b907c: 0x0  nop
    ctx->pc = 0x3b907cu;
    // NOP
label_3b9080:
    // 0x3b9080: 0x92032b56  lbu         $v1, 0x2B56($s0)
    ctx->pc = 0x3b9080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11094)));
    // 0x3b9084: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x3B9084u;
    {
        const bool branch_taken_0x3b9084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9084u;
        // 0x3b9088: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9084) {
            ctx->pc = 0x3B9210u;
            goto label_3b9210;
        }
    }
    ctx->pc = 0x3B908Cu;
    // 0x3b908c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3b908cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x3b9090: 0xa2042b57  sb          $a0, 0x2B57($s0)
    ctx->pc = 0x3b9090u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b9094: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3b9094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b9098: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b9098u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b909c: 0xa2040780  sb          $a0, 0x780($s0)
    ctx->pc = 0x3b909cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b90a0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3b90a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3b90a4: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b90a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b90a8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3b90a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3b90ac: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3b90acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b90b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b90b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b90b4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b90b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3b90b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b90b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b90bc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3b90bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b90c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b90c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b90c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b90c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b90c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B90C8u;
    {
        const bool branch_taken_0x3b90c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b90c8) {
            ctx->pc = 0x3B90E0u;
            goto label_3b90e0;
        }
    }
    ctx->pc = 0x3B90D0u;
    // 0x3b90d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b90d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b90d4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b90d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b90d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B90D8u;
    {
        const bool branch_taken_0x3b90d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B90DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B90D8u;
        // 0x3b90dc: 0xae042b88  sw          $a0, 0x2B88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b90d8) {
            ctx->pc = 0x3B90FCu;
            goto label_3b90fc;
        }
    }
    ctx->pc = 0x3B90E0u;
label_3b90e0:
    // 0x3b90e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b90e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b90e4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b90e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3b90e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b90e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b90ec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b90ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b90f0: 0x0  nop
    ctx->pc = 0x3b90f0u;
    // NOP
    // 0x3b90f4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b90f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b90f8: 0xae042b88  sw          $a0, 0x2B88($s0)
    ctx->pc = 0x3b90f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
label_3b90fc:
    // 0x3b90fc: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b90fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b9100: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b9100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b9104: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b9104u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
label_3b9108:
    // 0x3b9108: 0x8e032b88  lw          $v1, 0x2B88($s0)
    ctx->pc = 0x3b9108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11144)));
    // 0x3b910c: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x3B910Cu;
    {
        const bool branch_taken_0x3b910c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B910Cu;
        // 0x3b9110: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b910c) {
            ctx->pc = 0x3B9210u;
            goto label_3b9210;
        }
    }
    ctx->pc = 0x3B9114u;
    // 0x3b9114: 0x240300f4  addiu       $v1, $zero, 0xF4
    ctx->pc = 0x3b9114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x3b9118: 0xa2042b5a  sb          $a0, 0x2B5A($s0)
    ctx->pc = 0x3b9118u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11098), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b911c: 0xa2002b5b  sb          $zero, 0x2B5B($s0)
    ctx->pc = 0x3b911cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11099), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9120: 0xa2002b5c  sb          $zero, 0x2B5C($s0)
    ctx->pc = 0x3b9120u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11100), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9124: 0xa2032b57  sb          $v1, 0x2B57($s0)
    ctx->pc = 0x3b9124u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9128: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b9128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b912c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3b912cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9130: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b9130u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9134: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b9134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b9138: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b9138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b913c: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b913cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
label_3b9140:
    // 0x3b9140: 0x92032b56  lbu         $v1, 0x2B56($s0)
    ctx->pc = 0x3b9140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11094)));
    // 0x3b9144: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x3B9144u;
    {
        const bool branch_taken_0x3b9144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9144u;
        // 0x3b9148: 0x240300f8  addiu       $v1, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9144) {
            ctx->pc = 0x3B9210u;
            goto label_3b9210;
        }
    }
    ctx->pc = 0x3B914Cu;
    // 0x3b914c: 0xa2032b57  sb          $v1, 0x2B57($s0)
    ctx->pc = 0x3b914cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9150: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b9150u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9154: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3b9154u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9158: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b9158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b915c: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b915cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b9160: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b9160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b9164: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b9164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
label_3b9168:
    // 0x3b9168: 0x92032b56  lbu         $v1, 0x2B56($s0)
    ctx->pc = 0x3b9168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11094)));
    // 0x3b916c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x3B916Cu;
    {
        const bool branch_taken_0x3b916c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B916Cu;
        // 0x3b9170: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b916c) {
            ctx->pc = 0x3B9210u;
            goto label_3b9210;
        }
    }
    ctx->pc = 0x3B9174u;
    // 0x3b9174: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x3b9174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x3b9178: 0xa2042b57  sb          $a0, 0x2B57($s0)
    ctx->pc = 0x3b9178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b917c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b917cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b9180: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b9180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9184: 0xa2040780  sb          $a0, 0x780($s0)
    ctx->pc = 0x3b9184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b9188: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b9188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3b918c: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b918cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9190: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b9190u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b9194: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3b9194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b9198: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b9198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3b919c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b919cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b91a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B91A0u;
    {
        const bool branch_taken_0x3b91a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b91a0) {
            ctx->pc = 0x3B91B8u;
            goto label_3b91b8;
        }
    }
    ctx->pc = 0x3B91A8u;
    // 0x3b91a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b91a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b91ac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b91acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b91b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B91B0u;
    {
        const bool branch_taken_0x3b91b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B91B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B91B0u;
        // 0x3b91b4: 0xae042b88  sw          $a0, 0x2B88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b91b0) {
            ctx->pc = 0x3B91D4u;
            goto label_3b91d4;
        }
    }
    ctx->pc = 0x3B91B8u;
label_3b91b8:
    // 0x3b91b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b91b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b91bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b91bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3b91c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b91c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b91c4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b91c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b91c8: 0x0  nop
    ctx->pc = 0x3b91c8u;
    // NOP
    // 0x3b91cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b91ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b91d0: 0xae042b88  sw          $a0, 0x2B88($s0)
    ctx->pc = 0x3b91d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
label_3b91d4:
    // 0x3b91d4: 0x92032b4b  lbu         $v1, 0x2B4B($s0)
    ctx->pc = 0x3b91d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b91d8: 0x306300bf  andi        $v1, $v1, 0xBF
    ctx->pc = 0x3b91d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)191);
    // 0x3b91dc: 0xa2032b4b  sb          $v1, 0x2B4B($s0)
    ctx->pc = 0x3b91dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b91e0: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b91e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b91e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b91e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b91e8: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b91e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b91ec: 0x0  nop
    ctx->pc = 0x3b91ecu;
    // NOP
label_3b91f0:
    // 0x3b91f0: 0x8e032b88  lw          $v1, 0x2B88($s0)
    ctx->pc = 0x3b91f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11144)));
    // 0x3b91f4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B91F4u;
    {
        const bool branch_taken_0x3b91f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b91f4) {
            ctx->pc = 0x3B9210u;
            goto label_3b9210;
        }
    }
    ctx->pc = 0x3B91FCu;
    // 0x3b91fc: 0x92022b4b  lbu         $v0, 0x2B4B($s0)
    ctx->pc = 0x3b91fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b9200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b9200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9204: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3b9204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3b9208: 0xc0ee024  jal         func_3B8090
    ctx->pc = 0x3B9208u;
    SET_GPR_U32(ctx, 31, 0x3B9210u);
    ctx->pc = 0x3B920Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9208u;
    // 0x3b920c: 0xa2022b4b  sb          $v0, 0x2B4B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8090u, 0x3B9208u, 0x3B9210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9210u;
label_3b9210:
    // 0x3b9210: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b9210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b9214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9218: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9218u;
        // 0x3b921c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9220u;
}
