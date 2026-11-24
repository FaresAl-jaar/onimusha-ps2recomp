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

// Function: sub_00395870
// Address: 0x395870 - 0x395968
void sub_00395870_0x395870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395870_0x395870");
#endif

    switch (ctx->pc) {
        case 0x395948u: goto label_395948;
        default: break;
    }

    ctx->pc = 0x395870u;

    // 0x395870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x395870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x395874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x395874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x395878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x395878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39587c: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x39587cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x395880: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x395880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395884: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x395884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395888: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x395888u;
    {
        const bool branch_taken_0x395888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x395888) {
            ctx->pc = 0x3958C8u;
            goto label_3958c8;
        }
    }
    ctx->pc = 0x395890u;
    // 0x395890: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x395890u;
    {
        const bool branch_taken_0x395890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x395890) {
            ctx->pc = 0x3958A0u;
            goto label_3958a0;
        }
    }
    ctx->pc = 0x395898u;
    // 0x395898: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x395898u;
    {
        const bool branch_taken_0x395898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395898) {
            ctx->pc = 0x395958u;
            goto label_395958;
        }
    }
    ctx->pc = 0x3958A0u;
label_3958a0:
    // 0x3958a0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3958a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3958a4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3958a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3958a8: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x3958a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3958ac: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3958acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3958b0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3958b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3958b4: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3958b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3958b8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3958b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3958bc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3958bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3958c0: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3958c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3958c4: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x3958c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
label_3958c8:
    // 0x3958c8: 0x3c03430c  lui         $v1, 0x430C
    ctx->pc = 0x3958c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
    // 0x3958cc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3958ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3958d0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3958d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3958d4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3958d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3958d8: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3958d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3958dc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3958dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3958e0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3958e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3958e4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3958e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3958e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3958e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3958ec: 0x0  nop
    ctx->pc = 0x3958ecu;
    // NOP
    // 0x3958f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3958f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3958f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3958f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3958f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3958F8u;
    {
        const bool branch_taken_0x3958f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3958FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958F8u;
        // 0x3958fc: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3958f8) {
            ctx->pc = 0x395910u;
            goto label_395910;
        }
    }
    ctx->pc = 0x395900u;
    // 0x395900: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x395900u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x395904: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x395904u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x395908: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x395908u;
    {
        const bool branch_taken_0x395908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395908) {
            ctx->pc = 0x395928u;
            goto label_395928;
        }
    }
    ctx->pc = 0x395910u;
label_395910:
    // 0x395910: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x395910u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x395914: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x395914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x395918: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x395918u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39591c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39591cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x395920: 0x0  nop
    ctx->pc = 0x395920u;
    // NOP
    // 0x395924: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x395924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_395928:
    // 0x395928: 0x14a40007  bne         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x395928u;
    {
        const bool branch_taken_0x395928 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x395928) {
            ctx->pc = 0x395948u;
            goto label_395948;
        }
    }
    ctx->pc = 0x395930u;
    // 0x395930: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x395930u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x395934: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x395934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x395938: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x395938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39593c: 0x24c62290  addiu       $a2, $a2, 0x2290
    ctx->pc = 0x39593cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8848));
    // 0x395940: 0xc0bc770  jal         func_2F1DC0
    ctx->pc = 0x395940u;
    SET_GPR_U32(ctx, 31, 0x395948u);
    ctx->pc = 0x395944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395940u;
    // 0x395944: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DC0u, 0x395940u, 0x395948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395948u;
label_395948:
    // 0x395948: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x395948u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x39594c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x39594Cu;
    {
        const bool branch_taken_0x39594c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39594Cu;
        // 0x395950: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39594c) {
            ctx->pc = 0x395958u;
            goto label_395958;
        }
    }
    ctx->pc = 0x395954u;
    // 0x395954: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x395954u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_395958:
    // 0x395958: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x395958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39595c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39595cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395960: 0x3e00008  jr          $ra
    ctx->pc = 0x395960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395960u;
        // 0x395964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395968u;
}
