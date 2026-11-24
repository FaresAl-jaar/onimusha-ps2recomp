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

// Function: sub_003C7B50
// Address: 0x3c7b50 - 0x3c7b88
void sub_003C7B50_0x3c7b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7B50_0x3c7b50");
#endif

    ctx->pc = 0x3c7b50u;

    // 0x3c7b50: 0x93838cbc  lbu         $v1, -0x7344($gp)
    ctx->pc = 0x3c7b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937788)));
    // 0x3c7b54: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3C7B54u;
    {
        const bool branch_taken_0x3c7b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7B54u;
        // 0x3c7b58: 0x3c010093  lui         $at, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7b54) {
            ctx->pc = 0x3C7B80u;
            goto label_3c7b80;
        }
    }
    ctx->pc = 0x3C7B5Cu;
    // 0x3c7b5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c7b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c7b60: 0xe42c0730  swc1        $f12, 0x730($at)
    ctx->pc = 0x3c7b60u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 1840), bits); }
    // 0x3c7b64: 0xa3838cbc  sb          $v1, -0x7344($gp)
    ctx->pc = 0x3c7b64u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937788), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c7b68: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3c7b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3c7b6c: 0xe42d0738  swc1        $f13, 0x738($at)
    ctx->pc = 0x3c7b6cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x930738u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x930738u, _value); } while (0); }
    // 0x3c7b70: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3c7b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3c7b74: 0xe78e8cc0  swc1        $f14, -0x7340($gp)
    ctx->pc = 0x3c7b74u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), bits); }
    // 0x3c7b78: 0xac200734  sw          $zero, 0x734($at)
    ctx->pc = 0x3c7b78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x930734u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x930734u, _value); } while (0);
    // 0x3c7b7c: 0x0  nop
    ctx->pc = 0x3c7b7cu;
    // NOP
label_3c7b80:
    // 0x3c7b80: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7B88u;
}
