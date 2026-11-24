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

// Function: sub_00377B90
// Address: 0x377b90 - 0x377bc8
void sub_00377B90_0x377b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377B90_0x377b90");
#endif

    ctx->pc = 0x377b90u;

    // 0x377b90: 0x93838c1c  lbu         $v1, -0x73E4($gp)
    ctx->pc = 0x377b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937628)));
    // 0x377b94: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x377B94u;
    {
        const bool branch_taken_0x377b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x377B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B94u;
        // 0x377b98: 0x3c010092  lui         $at, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377b94) {
            ctx->pc = 0x377BC0u;
            goto label_377bc0;
        }
    }
    ctx->pc = 0x377B9Cu;
    // 0x377b9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x377b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377ba0: 0xe42c1740  swc1        $f12, 0x1740($at)
    ctx->pc = 0x377ba0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 5952), bits); }
    // 0x377ba4: 0xa3838c1c  sb          $v1, -0x73E4($gp)
    ctx->pc = 0x377ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937628), (uint8_t)GPR_U32(ctx, 3));
    // 0x377ba8: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x377ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x377bac: 0xe42d1748  swc1        $f13, 0x1748($at)
    ctx->pc = 0x377bacu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x921748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x921748u, _value); } while (0); }
    // 0x377bb0: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x377bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x377bb4: 0xe78e8c20  swc1        $f14, -0x73E0($gp)
    ctx->pc = 0x377bb4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937632), bits); }
    // 0x377bb8: 0xac201744  sw          $zero, 0x1744($at)
    ctx->pc = 0x377bb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x921744u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x921744u, _value); } while (0);
    // 0x377bbc: 0x0  nop
    ctx->pc = 0x377bbcu;
    // NOP
label_377bc0:
    // 0x377bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x377BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377BC8u;
}
