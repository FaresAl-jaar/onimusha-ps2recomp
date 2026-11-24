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

// Function: sub_0012F160
// Address: 0x12f160 - 0x12f1e8
void sub_0012F160_0x12f160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F160_0x12f160");
#endif

    switch (ctx->pc) {
        case 0x12f1c4u: goto label_12f1c4;
        default: break;
    }

    ctx->pc = 0x12f160u;

    // 0x12f160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12f160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12f164: 0x3c023ef5  lui         $v0, 0x3EF5
    ctx->pc = 0x12f164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16117 << 16));
    // 0x12f168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12f168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12f16c: 0x3442be0b  ori         $v0, $v0, 0xBE0B
    ctx->pc = 0x12f16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48651);
    // 0x12f170: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12f170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12f174: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f178: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12f178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12f17c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x12f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x12f180: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12f180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12f184: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12f184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12f188: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12f188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12f18c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12f18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f190: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x12f190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x12f194: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x12f194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x12f198: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x12f198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x12f19c: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x12f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x12f1a0: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x12f1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x12f1a4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x12f1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x12f1a8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x12f1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x12f1ac: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x12f1acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x12f1b0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x12f1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x12f1b4: 0xa4800020  sh          $zero, 0x20($a0)
    ctx->pc = 0x12f1b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f1b8: 0xa4800022  sh          $zero, 0x22($a0)
    ctx->pc = 0x12f1b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f1bc: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x12F1BCu;
    SET_GPR_U32(ctx, 31, 0x12F1C4u);
    ctx->pc = 0x12F1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F1BCu;
    // 0x12f1c0: 0xa4800024  sh          $zero, 0x24($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x12F1BCu, 0x12F1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F1C4u;
label_12f1c4:
    // 0x12f1c4: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x12f1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x12f1c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12f1c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f1cc: 0x0  nop
    ctx->pc = 0x12f1ccu;
    // NOP
    // 0x12f1d0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x12f1d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x12f1d4: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x12f1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x12f1d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12f1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f1dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f1dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x12F1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1E0u;
        // 0x12f1e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F1E8u;
}
