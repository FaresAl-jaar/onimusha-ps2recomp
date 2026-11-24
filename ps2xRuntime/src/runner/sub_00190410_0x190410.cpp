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

// Function: sub_00190410
// Address: 0x190410 - 0x190450
void sub_00190410_0x190410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190410_0x190410");
#endif

    ctx->pc = 0x190410u;

    // 0x190410: 0x9783873c  lhu         $v1, -0x78C4($gp)
    ctx->pc = 0x190410u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936380)));
    // 0x190414: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x190414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190418: 0x0  nop
    ctx->pc = 0x190418u;
    // NOP
    // 0x19041c: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x19041cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190420: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x190420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x190424: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x190424u;
    {
        const bool branch_taken_0x190424 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x190428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190424u;
        // 0x190428: 0xa783873c  sh          $v1, -0x78C4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936380), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190424) {
            ctx->pc = 0x190430u;
            goto label_190430;
        }
    }
    ctx->pc = 0x19042Cu;
    // 0x19042c: 0xe78c8750  swc1        $f12, -0x78B0($gp)
    ctx->pc = 0x19042cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936400), bits); }
label_190430:
    // 0x190430: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x190430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x190434: 0xe42cfe44  swc1        $f12, -0x1BC($at)
    ctx->pc = 0x190434u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FE44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE44u, _value); } while (0); }
    // 0x190438: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x190438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x19043c: 0x8c23fe84  lw          $v1, -0x17C($at)
    ctx->pc = 0x19043cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x92FE84u));
    // 0x190440: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x190440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x190444: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x190444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x190448: 0x3e00008  jr          $ra
    ctx->pc = 0x190448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190448u;
        // 0x19044c: 0xac23fe84  sw          $v1, -0x17C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966916), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190450u;
}
