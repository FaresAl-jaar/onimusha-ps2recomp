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

// Function: sub_00190390
// Address: 0x190390 - 0x1903d0
void sub_00190390_0x190390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190390_0x190390");
#endif

    ctx->pc = 0x190390u;

    // 0x190390: 0x9783873c  lhu         $v1, -0x78C4($gp)
    ctx->pc = 0x190390u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936380)));
    // 0x190394: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x190394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190398: 0x0  nop
    ctx->pc = 0x190398u;
    // NOP
    // 0x19039c: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x19039cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1903a0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1903a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1903a4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1903A4u;
    {
        const bool branch_taken_0x1903a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1903A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903A4u;
        // 0x1903a8: 0xa783873c  sh          $v1, -0x78C4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936380), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903a4) {
            ctx->pc = 0x1903B0u;
            goto label_1903b0;
        }
    }
    ctx->pc = 0x1903ACu;
    // 0x1903ac: 0xe78c8748  swc1        $f12, -0x78B8($gp)
    ctx->pc = 0x1903acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936392), bits); }
label_1903b0:
    // 0x1903b0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x1903b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x1903b4: 0xe42cfe48  swc1        $f12, -0x1B8($at)
    ctx->pc = 0x1903b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FE48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE48u, _value); } while (0); }
    // 0x1903b8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x1903b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x1903bc: 0x8c23fe84  lw          $v1, -0x17C($at)
    ctx->pc = 0x1903bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x92FE84u));
    // 0x1903c0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1903c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1903c4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x1903c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x1903c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1903C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1903CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903C8u;
        // 0x1903cc: 0xac23fe84  sw          $v1, -0x17C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966916), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1903C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1903D0u;
}
