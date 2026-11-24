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

// Function: sub_001D9F80
// Address: 0x1d9f80 - 0x1d9fa0
void sub_001D9F80_0x1d9f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9F80_0x1d9f80");
#endif

    ctx->pc = 0x1d9f80u;

    // 0x1d9f80: 0x70a40848  psubw       $at, $a1, $a0
    ctx->pc = 0x1d9f80u;
    SET_GPR_VEC(ctx, 1, PS2_PSUBW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1d9f84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d9f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9f88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d9f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d9f8c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x1d9f8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1d9f90: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d9f90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d9f94: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1d9f94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1d9f98: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F98u;
        // 0x1d9f9c: 0x70441008  paddw       $v0, $v0, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9FA0u;
}
