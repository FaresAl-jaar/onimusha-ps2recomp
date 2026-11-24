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

// Function: sub_003BCD00
// Address: 0x3bcd00 - 0x3bcd9c
void sub_003BCD00_0x3bcd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BCD00_0x3bcd00");
#endif

    switch (ctx->pc) {
        case 0x3bcd14u: goto label_3bcd14;
        case 0x3bcd8cu: goto label_3bcd8c;
        default: break;
    }

    ctx->pc = 0x3bcd00u;

    // 0x3bcd00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bcd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bcd04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bcd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bcd08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bcd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bcd0c: 0xc0f1ec4  jal         func_3C7B10
    ctx->pc = 0x3BCD0Cu;
    SET_GPR_U32(ctx, 31, 0x3BCD14u);
    ctx->pc = 0x3BCD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCD0Cu;
    // 0x3bcd10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7B10u, 0x3BCD0Cu, 0x3BCD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCD14u;
label_3bcd14:
    // 0x3bcd14: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3bcd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bcd18: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3bcd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x3bcd1c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3bcd1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3bcd20: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3bcd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3bcd24: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3bcd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3bcd28: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3bcd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3bcd2c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3bcd2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3bcd30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3bcd30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bcd34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bcd34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bcd38: 0x0  nop
    ctx->pc = 0x3bcd38u;
    // NOP
    // 0x3bcd3c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3bcd3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3bcd40: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3bcd40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bcd44: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3BCD44u;
    {
        const bool branch_taken_0x3bcd44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bcd44) {
            ctx->pc = 0x3BCD5Cu;
            goto label_3bcd5c;
        }
    }
    ctx->pc = 0x3BCD4Cu;
    // 0x3bcd4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bcd4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bcd50: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3bcd50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3bcd54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BCD54u;
    {
        const bool branch_taken_0x3bcd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCD54u;
        // 0x3bcd58: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcd54) {
            ctx->pc = 0x3BCD78u;
            goto label_3bcd78;
        }
    }
    ctx->pc = 0x3BCD5Cu;
label_3bcd5c:
    // 0x3bcd5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3bcd5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3bcd60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bcd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bcd64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bcd64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bcd68: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3bcd68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3bcd6c: 0x0  nop
    ctx->pc = 0x3bcd6cu;
    // NOP
    // 0x3bcd70: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3bcd70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3bcd74: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3bcd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3bcd78:
    // 0x3bcd78: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x3bcd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x3bcd7c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x3bcd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3bcd80: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3bcd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3bcd84: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x3BCD84u;
    SET_GPR_U32(ctx, 31, 0x3BCD8Cu);
    ctx->pc = 0x3BCD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCD84u;
    // 0x3bcd88: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x3BCD84u, 0x3BCD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCD8Cu;
label_3bcd8c:
    // 0x3bcd8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bcd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bcd90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bcd90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bcd94: 0x3e00008  jr          $ra
    ctx->pc = 0x3BCD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BCD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCD94u;
        // 0x3bcd98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BCD9Cu;
}
