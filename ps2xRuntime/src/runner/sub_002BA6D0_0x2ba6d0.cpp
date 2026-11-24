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

// Function: sub_002BA6D0
// Address: 0x2ba6d0 - 0x2ba708
void sub_002BA6D0_0x2ba6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA6D0_0x2ba6d0");
#endif

    ctx->pc = 0x2ba6d0u;

    // 0x2ba6d0: 0x94830022  lhu         $v1, 0x22($a0)
    ctx->pc = 0x2ba6d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x2ba6d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA6D4u;
    {
        const bool branch_taken_0x2ba6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba6d4) {
            ctx->pc = 0x2BA6E8u;
            goto label_2ba6e8;
        }
    }
    ctx->pc = 0x2BA6DCu;
    // 0x2ba6dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ba6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ba6e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BA6E0u;
    {
        const bool branch_taken_0x2ba6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6E0u;
        // 0x2ba6e4: 0xa4830022  sh          $v1, 0x22($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba6e0) {
            ctx->pc = 0x2BA700u;
            goto label_2ba700;
        }
    }
    ctx->pc = 0x2BA6E8u;
label_2ba6e8:
    // 0x2ba6e8: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x2ba6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba6ec: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2ba6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba6f0: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2ba6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba6f4: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2ba6f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2ba6f8: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2ba6f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2ba6fc: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2ba6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2ba700:
    // 0x2ba700: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA708u;
}
