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

// Function: sub_003C0860
// Address: 0x3c0860 - 0x3c08a8
void sub_003C0860_0x3c0860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0860_0x3c0860");
#endif

    ctx->pc = 0x3c0860u;

    // 0x3c0860: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3c0860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0864: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x3c0864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3c0868: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3c0868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c086c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3c086cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3c0870: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3c0870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0874: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x3c0874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3c0878: 0xa4860004  sh          $a2, 0x4($a0)
    ctx->pc = 0x3c0878u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x3c087c: 0xa4880006  sh          $t0, 0x6($a0)
    ctx->pc = 0x3c087cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 8));
    // 0x3c0880: 0xa0870001  sb          $a3, 0x1($a0)
    ctx->pc = 0x3c0880u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x3c0884: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x3c0884u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3c0888: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C0888u;
    {
        const bool branch_taken_0x3c0888 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3C088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0888u;
        // 0x3c088c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0888) {
            ctx->pc = 0x3C0898u;
            goto label_3c0898;
        }
    }
    ctx->pc = 0x3C0890u;
    // 0x3c0890: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C0890u;
    {
        const bool branch_taken_0x3c0890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0890u;
        // 0x3c0894: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0890) {
            ctx->pc = 0x3C08A0u;
            goto label_3c08a0;
        }
    }
    ctx->pc = 0x3C0898u;
label_3c0898:
    // 0x3c0898: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c0898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c089c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3c089cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3c08a0:
    // 0x3c08a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C08A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C08A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C08A8u;
}
