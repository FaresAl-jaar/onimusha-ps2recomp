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

// Function: sub_003B9220
// Address: 0x3b9220 - 0x3b9430
void sub_003B9220_0x3b9220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9220_0x3b9220");
#endif

    switch (ctx->pc) {
        case 0x3b926cu: goto label_3b926c;
        case 0x3b9420u: goto label_3b9420;
        default: break;
    }

    ctx->pc = 0x3b9220u;

    // 0x3b9220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b9220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b9224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b9224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b9228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b9228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b922c: 0x90832b55  lbu         $v1, 0x2B55($a0)
    ctx->pc = 0x3b922cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11093)));
    // 0x3b9230: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3b9230u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3b9234: 0x1020007a  beqz        $at, . + 4 + (0x7A << 2)
    ctx->pc = 0x3B9234u;
    {
        const bool branch_taken_0x3b9234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9234u;
        // 0x3b9238: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9234) {
            ctx->pc = 0x3B9420u;
            goto label_3b9420;
        }
    }
    ctx->pc = 0x3B923Cu;
    // 0x3b923c: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3b923cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3b9240: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b9240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b9244: 0x24a52d00  addiu       $a1, $a1, 0x2D00
    ctx->pc = 0x3b9244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11520));
    // 0x3b9248: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b9248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b924c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b924cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b9250: 0x600008  jr          $v1
    ctx->pc = 0x3B9250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B9258u: goto label_3b9258;
            case 0x3B9290u: goto label_3b9290;
            case 0x3B9318u: goto label_3b9318;
            case 0x3B9350u: goto label_3b9350;
            case 0x3B9378u: goto label_3b9378;
            case 0x3B9400u: goto label_3b9400;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9250u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B9258u;
label_3b9258:
    // 0x3b9258: 0xa6002b46  sh          $zero, 0x2B46($s0)
    ctx->pc = 0x3b9258u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11078), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b925c: 0x92022b4b  lbu         $v0, 0x2B4B($s0)
    ctx->pc = 0x3b925cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b9260: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3b9260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3b9264: 0xc0eeecc  jal         func_3BBB30
    ctx->pc = 0x3B9264u;
    SET_GPR_U32(ctx, 31, 0x3B926Cu);
    ctx->pc = 0x3B9268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9264u;
    // 0x3b9268: 0xa2022b4b  sb          $v0, 0x2B4B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBB30u, 0x3B9264u, 0x3B926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B926Cu;
label_3b926c:
    // 0x3b926c: 0x240300f1  addiu       $v1, $zero, 0xF1
    ctx->pc = 0x3b926cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x3b9270: 0xa2032b57  sb          $v1, 0x2B57($s0)
    ctx->pc = 0x3b9270u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9274: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b9274u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9278: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3b9278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b927c: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b927cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9280: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b9280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b9284: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b9284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b9288: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b9288u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b928c: 0x0  nop
    ctx->pc = 0x3b928cu;
    // NOP
label_3b9290:
    // 0x3b9290: 0x92032b56  lbu         $v1, 0x2B56($s0)
    ctx->pc = 0x3b9290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11094)));
    // 0x3b9294: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x3B9294u;
    {
        const bool branch_taken_0x3b9294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9294u;
        // 0x3b9298: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9294) {
            ctx->pc = 0x3B9420u;
            goto label_3b9420;
        }
    }
    ctx->pc = 0x3B929Cu;
    // 0x3b929c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3b929cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x3b92a0: 0xa2042b57  sb          $a0, 0x2B57($s0)
    ctx->pc = 0x3b92a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b92a4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3b92a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b92a8: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b92a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b92ac: 0xa2040780  sb          $a0, 0x780($s0)
    ctx->pc = 0x3b92acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b92b0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3b92b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3b92b4: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b92b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b92b8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3b92b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3b92bc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3b92bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b92c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b92c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b92c4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b92c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3b92c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b92c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b92cc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3b92ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b92d0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b92d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b92d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b92d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b92d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B92D8u;
    {
        const bool branch_taken_0x3b92d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b92d8) {
            ctx->pc = 0x3B92F0u;
            goto label_3b92f0;
        }
    }
    ctx->pc = 0x3B92E0u;
    // 0x3b92e0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b92e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b92e4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b92e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b92e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B92E8u;
    {
        const bool branch_taken_0x3b92e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B92E8u;
        // 0x3b92ec: 0xae042b88  sw          $a0, 0x2B88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b92e8) {
            ctx->pc = 0x3B930Cu;
            goto label_3b930c;
        }
    }
    ctx->pc = 0x3B92F0u;
label_3b92f0:
    // 0x3b92f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b92f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b92f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b92f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3b92f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b92f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b92fc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b92fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b9300: 0x0  nop
    ctx->pc = 0x3b9300u;
    // NOP
    // 0x3b9304: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b9304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b9308: 0xae042b88  sw          $a0, 0x2B88($s0)
    ctx->pc = 0x3b9308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
label_3b930c:
    // 0x3b930c: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b930cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b9310: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b9310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b9314: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b9314u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
label_3b9318:
    // 0x3b9318: 0x8e032b88  lw          $v1, 0x2B88($s0)
    ctx->pc = 0x3b9318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11144)));
    // 0x3b931c: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x3B931Cu;
    {
        const bool branch_taken_0x3b931c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B931Cu;
        // 0x3b9320: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b931c) {
            ctx->pc = 0x3B9420u;
            goto label_3b9420;
        }
    }
    ctx->pc = 0x3B9324u;
    // 0x3b9324: 0x240300f4  addiu       $v1, $zero, 0xF4
    ctx->pc = 0x3b9324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x3b9328: 0xa2042b5a  sb          $a0, 0x2B5A($s0)
    ctx->pc = 0x3b9328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11098), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b932c: 0xa2002b5b  sb          $zero, 0x2B5B($s0)
    ctx->pc = 0x3b932cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11099), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9330: 0xa2002b5c  sb          $zero, 0x2B5C($s0)
    ctx->pc = 0x3b9330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11100), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9334: 0xa2032b57  sb          $v1, 0x2B57($s0)
    ctx->pc = 0x3b9334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9338: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b9338u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b933c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3b933cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9340: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b9340u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9344: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b9344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b9348: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b9348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b934c: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b934cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
label_3b9350:
    // 0x3b9350: 0x92032b56  lbu         $v1, 0x2B56($s0)
    ctx->pc = 0x3b9350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11094)));
    // 0x3b9354: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x3B9354u;
    {
        const bool branch_taken_0x3b9354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9354u;
        // 0x3b9358: 0x240300f9  addiu       $v1, $zero, 0xF9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9354) {
            ctx->pc = 0x3B9420u;
            goto label_3b9420;
        }
    }
    ctx->pc = 0x3B935Cu;
    // 0x3b935c: 0xa2032b57  sb          $v1, 0x2B57($s0)
    ctx->pc = 0x3b935cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9360: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b9360u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9364: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3b9364u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9368: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b9368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b936c: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b936cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b9370: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b9370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b9374: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b9374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
label_3b9378:
    // 0x3b9378: 0x92032b56  lbu         $v1, 0x2B56($s0)
    ctx->pc = 0x3b9378u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11094)));
    // 0x3b937c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x3B937Cu;
    {
        const bool branch_taken_0x3b937c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B937Cu;
        // 0x3b9380: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b937c) {
            ctx->pc = 0x3B9420u;
            goto label_3b9420;
        }
    }
    ctx->pc = 0x3B9384u;
    // 0x3b9384: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x3b9384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x3b9388: 0xa2042b57  sb          $a0, 0x2B57($s0)
    ctx->pc = 0x3b9388u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b938c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b938cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b9390: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b9390u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9394: 0xa2040780  sb          $a0, 0x780($s0)
    ctx->pc = 0x3b9394u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b9398: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b9398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3b939c: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b939cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b93a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b93a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b93a4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3b93a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b93a8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b93a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3b93ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b93acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b93b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B93B0u;
    {
        const bool branch_taken_0x3b93b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b93b0) {
            ctx->pc = 0x3B93C8u;
            goto label_3b93c8;
        }
    }
    ctx->pc = 0x3B93B8u;
    // 0x3b93b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b93b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b93bc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b93bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b93c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B93C0u;
    {
        const bool branch_taken_0x3b93c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B93C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B93C0u;
        // 0x3b93c4: 0xae042b88  sw          $a0, 0x2B88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b93c0) {
            ctx->pc = 0x3B93E4u;
            goto label_3b93e4;
        }
    }
    ctx->pc = 0x3B93C8u;
label_3b93c8:
    // 0x3b93c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b93c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b93cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b93ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3b93d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b93d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b93d4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b93d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b93d8: 0x0  nop
    ctx->pc = 0x3b93d8u;
    // NOP
    // 0x3b93dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b93dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b93e0: 0xae042b88  sw          $a0, 0x2B88($s0)
    ctx->pc = 0x3b93e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
label_3b93e4:
    // 0x3b93e4: 0x92032b4b  lbu         $v1, 0x2B4B($s0)
    ctx->pc = 0x3b93e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b93e8: 0x306300bf  andi        $v1, $v1, 0xBF
    ctx->pc = 0x3b93e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)191);
    // 0x3b93ec: 0xa2032b4b  sb          $v1, 0x2B4B($s0)
    ctx->pc = 0x3b93ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b93f0: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b93f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b93f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b93f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b93f8: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b93f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b93fc: 0x0  nop
    ctx->pc = 0x3b93fcu;
    // NOP
label_3b9400:
    // 0x3b9400: 0x8e032b88  lw          $v1, 0x2B88($s0)
    ctx->pc = 0x3b9400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11144)));
    // 0x3b9404: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B9404u;
    {
        const bool branch_taken_0x3b9404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b9404) {
            ctx->pc = 0x3B9420u;
            goto label_3b9420;
        }
    }
    ctx->pc = 0x3B940Cu;
    // 0x3b940c: 0x92022b4b  lbu         $v0, 0x2B4B($s0)
    ctx->pc = 0x3b940cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b9410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b9410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9414: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3b9414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3b9418: 0xc0ee024  jal         func_3B8090
    ctx->pc = 0x3B9418u;
    SET_GPR_U32(ctx, 31, 0x3B9420u);
    ctx->pc = 0x3B941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9418u;
    // 0x3b941c: 0xa2022b4b  sb          $v0, 0x2B4B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8090u, 0x3B9418u, 0x3B9420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9420u;
label_3b9420:
    // 0x3b9420: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b9420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b9424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9428: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9428u;
        // 0x3b942c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9430u;
}
