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

// Function: sub_001D4500
// Address: 0x1d4500 - 0x1d4544
void sub_001D4500_0x1d4500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4500_0x1d4500");
#endif

    ctx->pc = 0x1d4500u;

    // 0x1d4500: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1d4500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1d4504: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d4504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4508: 0x0  nop
    ctx->pc = 0x1d4508u;
    // NOP
    // 0x1d450c: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x1d450cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1d4510: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1d4510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1d4514: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d4514u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d4518: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1d4518u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d451c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d451cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d4520: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x1d4520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x1d4524: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d4524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d4528: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d4528u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d452c: 0x0  nop
    ctx->pc = 0x1d452cu;
    // NOP
    // 0x1d4530: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1d4530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1d4534: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1d4534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1d4538: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1d4538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1d453c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D453Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D453Cu;
        // 0x1d4540: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D453Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4544u;
}
