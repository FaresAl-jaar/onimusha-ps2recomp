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

// Function: sub_0031C730
// Address: 0x31c730 - 0x31c774
void sub_0031C730_0x31c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C730_0x31c730");
#endif

    ctx->pc = 0x31c730u;

    // 0x31c730: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x31c730u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x31c734: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x31c734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x31c738: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c73c: 0x0  nop
    ctx->pc = 0x31c73cu;
    // NOP
    // 0x31c740: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31c740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31c744: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x31c744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x31c748: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x31c748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x31c74c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c74cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c750: 0x0  nop
    ctx->pc = 0x31c750u;
    // NOP
    // 0x31c754: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31c754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31c758: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x31c758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x31c75c: 0x84a30006  lh          $v1, 0x6($a1)
    ctx->pc = 0x31c75cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x31c760: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c764: 0x0  nop
    ctx->pc = 0x31c764u;
    // NOP
    // 0x31c768: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31c768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31c76c: 0x3e00008  jr          $ra
    ctx->pc = 0x31C76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C76Cu;
        // 0x31c770: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C774u;
}
