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

// Function: sub_001903D0
// Address: 0x1903d0 - 0x190410
void sub_001903D0_0x1903d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001903D0_0x1903d0");
#endif

    ctx->pc = 0x1903d0u;

    // 0x1903d0: 0x9783873c  lhu         $v1, -0x78C4($gp)
    ctx->pc = 0x1903d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936380)));
    // 0x1903d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1903d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1903d8: 0x0  nop
    ctx->pc = 0x1903d8u;
    // NOP
    // 0x1903dc: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x1903dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1903e0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1903e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1903e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1903E4u;
    {
        const bool branch_taken_0x1903e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1903E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903E4u;
        // 0x1903e8: 0xa783873c  sh          $v1, -0x78C4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936380), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903e4) {
            ctx->pc = 0x1903F0u;
            goto label_1903f0;
        }
    }
    ctx->pc = 0x1903ECu;
    // 0x1903ec: 0xe78c874c  swc1        $f12, -0x78B4($gp)
    ctx->pc = 0x1903ecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936396), bits); }
label_1903f0:
    // 0x1903f0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x1903f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x1903f4: 0xe42cfe4c  swc1        $f12, -0x1B4($at)
    ctx->pc = 0x1903f4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FE4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE4Cu, _value); } while (0); }
    // 0x1903f8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x1903f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x1903fc: 0x8c23fe84  lw          $v1, -0x17C($at)
    ctx->pc = 0x1903fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x92FE84u));
    // 0x190400: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x190400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x190404: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x190404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x190408: 0x3e00008  jr          $ra
    ctx->pc = 0x190408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190408u;
        // 0x19040c: 0xac23fe84  sw          $v1, -0x17C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966916), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190410u;
}
