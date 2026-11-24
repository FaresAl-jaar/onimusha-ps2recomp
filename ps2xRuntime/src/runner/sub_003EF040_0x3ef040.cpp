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

// Function: sub_003EF040
// Address: 0x3ef040 - 0x3ef088
void sub_003EF040_0x3ef040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF040_0x3ef040");
#endif

    switch (ctx->pc) {
        case 0x3ef058u: goto label_3ef058;
        default: break;
    }

    ctx->pc = 0x3ef040u;

    // 0x3ef040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ef040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ef044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ef044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ef048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ef048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ef04c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ef04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef050: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3EF050u;
    SET_GPR_U32(ctx, 31, 0x3EF058u);
    ctx->pc = 0x3EF054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF050u;
    // 0x3ef054: 0x8c842950  lw          $a0, 0x2950($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3EF050u, 0x3EF058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF058u;
label_3ef058:
    // 0x3ef058: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3ef058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3ef05c: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x3ef05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x3ef060: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3ef060u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ef064: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3ef064u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ef068: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3ef068u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ef06c: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x3ef06cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3ef070: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x3ef070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3ef074: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x3ef074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3ef078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ef078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ef07c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ef07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ef080: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF080u;
        // 0x3ef084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF088u;
}
