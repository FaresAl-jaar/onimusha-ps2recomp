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

// Function: sub_00135750
// Address: 0x135750 - 0x1357c0
void sub_00135750_0x135750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135750_0x135750");
#endif

    ctx->pc = 0x135750u;

    // 0x135750: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x135750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x135754: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x135754u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x135758: 0x30650fff  andi        $a1, $v1, 0xFFF
    ctx->pc = 0x135758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x13575c: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x13575cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x135760: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x135760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x135764: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x135764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x135768: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x135768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x13576c: 0x24a56540  addiu       $a1, $a1, 0x6540
    ctx->pc = 0x13576cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25920));
    // 0x135770: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x135770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135774: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x135774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x135778: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x135778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13577c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x13577cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135780: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x135780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x135784: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x135784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135788: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x135788u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x13578c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13578cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x135790: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x135790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x135794: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x135794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x135798: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x135798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x13579c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x13579cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1357a0: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x1357a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1357a4: 0xe4820018  swc1        $f2, 0x18($a0)
    ctx->pc = 0x1357a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1357a8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1357a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1357ac: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1357acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1357b0: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1357b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1357b4: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x1357b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1357b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1357B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1357BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1357B8u;
        // 0x1357bc: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1357B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1357C0u;
}
