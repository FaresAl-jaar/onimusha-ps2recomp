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

// Function: sub_002CD1B0
// Address: 0x2cd1b0 - 0x2cd224
void sub_002CD1B0_0x2cd1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD1B0_0x2cd1b0");
#endif

    ctx->pc = 0x2cd1b0u;

    // 0x2cd1b0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2cd1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd1b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd1b8: 0xa3838a84  sb          $v1, -0x757C($gp)
    ctx->pc = 0x2cd1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937220), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cd1bc: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x2cd1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x2cd1c0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2cd1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2cd1c4: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x2cd1c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x2cd1c8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2cd1c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2cd1cc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2cd1ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd1d0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2cd1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2cd1d4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2cd1d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2cd1d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2cd1d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2cd1dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cd1dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd1e0: 0x0  nop
    ctx->pc = 0x2cd1e0u;
    // NOP
    // 0x2cd1e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cd1e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd1e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD1E8u;
    {
        const bool branch_taken_0x2cd1e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd1e8) {
            ctx->pc = 0x2CD200u;
            goto label_2cd200;
        }
    }
    ctx->pc = 0x2CD1F0u;
    // 0x2cd1f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cd1f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cd1f4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2cd1f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2cd1f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD1F8u;
    {
        const bool branch_taken_0x2cd1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1F8u;
        // 0x2cd1fc: 0xa3848a80  sb          $a0, -0x7580($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937216), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1f8) {
            ctx->pc = 0x2CD21Cu;
            goto label_2cd21c;
        }
    }
    ctx->pc = 0x2CD200u;
label_2cd200:
    // 0x2cd200: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cd200u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cd204: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2cd204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2cd208: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cd208u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cd20c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2cd20cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2cd210: 0x0  nop
    ctx->pc = 0x2cd210u;
    // NOP
    // 0x2cd214: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2cd214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2cd218: 0xa3848a80  sb          $a0, -0x7580($gp)
    ctx->pc = 0x2cd218u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937216), (uint8_t)GPR_U32(ctx, 4));
label_2cd21c:
    // 0x2cd21c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD224u;
}
