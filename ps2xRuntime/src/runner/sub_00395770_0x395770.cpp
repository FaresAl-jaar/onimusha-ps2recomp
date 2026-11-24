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

// Function: sub_00395770
// Address: 0x395770 - 0x395870
void sub_00395770_0x395770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395770_0x395770");
#endif

    switch (ctx->pc) {
        case 0x395848u: goto label_395848;
        default: break;
    }

    ctx->pc = 0x395770u;

    // 0x395770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x395770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x395774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x395774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x395778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x395778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39577c: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x39577cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x395780: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x395780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395784: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x395784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395788: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x395788u;
    {
        const bool branch_taken_0x395788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x395788) {
            ctx->pc = 0x3957C8u;
            goto label_3957c8;
        }
    }
    ctx->pc = 0x395790u;
    // 0x395790: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x395790u;
    {
        const bool branch_taken_0x395790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x395790) {
            ctx->pc = 0x3957A0u;
            goto label_3957a0;
        }
    }
    ctx->pc = 0x395798u;
    // 0x395798: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x395798u;
    {
        const bool branch_taken_0x395798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395798) {
            ctx->pc = 0x395860u;
            goto label_395860;
        }
    }
    ctx->pc = 0x3957A0u;
label_3957a0:
    // 0x3957a0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3957a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3957a4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3957a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3957a8: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x3957a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3957ac: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3957acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3957b0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3957b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3957b4: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3957b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3957b8: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3957b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3957bc: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3957bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3957c0: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x3957c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3957c4: 0x0  nop
    ctx->pc = 0x3957c4u;
    // NOP
label_3957c8:
    // 0x3957c8: 0x3c034282  lui         $v1, 0x4282
    ctx->pc = 0x3957c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17026 << 16));
    // 0x3957cc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3957ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3957d0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3957d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3957d4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3957d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3957d8: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3957d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3957dc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3957dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3957e0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3957e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3957e4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3957e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3957e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3957e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3957ec: 0x0  nop
    ctx->pc = 0x3957ecu;
    // NOP
    // 0x3957f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3957f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3957f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3957f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3957f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3957F8u;
    {
        const bool branch_taken_0x3957f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3957FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3957F8u;
        // 0x3957fc: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3957f8) {
            ctx->pc = 0x395810u;
            goto label_395810;
        }
    }
    ctx->pc = 0x395800u;
    // 0x395800: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x395800u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x395804: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x395804u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x395808: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x395808u;
    {
        const bool branch_taken_0x395808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395808) {
            ctx->pc = 0x395828u;
            goto label_395828;
        }
    }
    ctx->pc = 0x395810u;
label_395810:
    // 0x395810: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x395810u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x395814: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x395814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x395818: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x395818u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39581c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39581cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x395820: 0x0  nop
    ctx->pc = 0x395820u;
    // NOP
    // 0x395824: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x395824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_395828:
    // 0x395828: 0x14a40009  bne         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x395828u;
    {
        const bool branch_taken_0x395828 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x395828) {
            ctx->pc = 0x395850u;
            goto label_395850;
        }
    }
    ctx->pc = 0x395830u;
    // 0x395830: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x395830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x395834: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x395834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395838: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x395838u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x39583c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x39583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x395840: 0xc0bc768  jal         func_2F1DA0
    ctx->pc = 0x395840u;
    SET_GPR_U32(ctx, 31, 0x395848u);
    ctx->pc = 0x395844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395840u;
    // 0x395844: 0x24460130  addiu       $a2, $v0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DA0u, 0x395840u, 0x395848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395848u;
label_395848:
    // 0x395848: 0xae022b20  sw          $v0, 0x2B20($s0)
    ctx->pc = 0x395848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11040), GPR_U32(ctx, 2));
    // 0x39584c: 0x0  nop
    ctx->pc = 0x39584cu;
    // NOP
label_395850:
    // 0x395850: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x395850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x395854: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x395854u;
    {
        const bool branch_taken_0x395854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395854u;
        // 0x395858: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395854) {
            ctx->pc = 0x395860u;
            goto label_395860;
        }
    }
    ctx->pc = 0x39585Cu;
    // 0x39585c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x39585cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_395860:
    // 0x395860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x395860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x395864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395868: 0x3e00008  jr          $ra
    ctx->pc = 0x395868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395868u;
        // 0x39586c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395870u;
}
