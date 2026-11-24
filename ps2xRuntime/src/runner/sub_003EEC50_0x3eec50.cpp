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

// Function: sub_003EEC50
// Address: 0x3eec50 - 0x3eec98
void sub_003EEC50_0x3eec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EEC50_0x3eec50");
#endif

    switch (ctx->pc) {
        case 0x3eec68u: goto label_3eec68;
        default: break;
    }

    ctx->pc = 0x3eec50u;

    // 0x3eec50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eec50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3eec54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3eec54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3eec58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3eec58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3eec5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3eec5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eec60: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3EEC60u;
    SET_GPR_U32(ctx, 31, 0x3EEC68u);
    ctx->pc = 0x3EEC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEC60u;
    // 0x3eec64: 0x8c842950  lw          $a0, 0x2950($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3EEC60u, 0x3EEC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEC68u;
label_3eec68:
    // 0x3eec68: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3eec68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3eec6c: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x3eec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x3eec70: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3eec70u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eec74: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3eec74u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3eec78: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3eec78u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3eec7c: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x3eec7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3eec80: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x3eec80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3eec84: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x3eec84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3eec88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3eec88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eec8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3eec8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eec90: 0x3e00008  jr          $ra
    ctx->pc = 0x3EEC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EEC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEC90u;
        // 0x3eec94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EEC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EEC98u;
}
