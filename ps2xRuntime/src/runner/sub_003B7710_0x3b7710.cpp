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

// Function: sub_003B7710
// Address: 0x3b7710 - 0x3b77ac
void sub_003B7710_0x3b7710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7710_0x3b7710");
#endif

    ctx->pc = 0x3b7710u;

    // 0x3b7710: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x3b7710u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3b7714: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b7714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b7718: 0x10c3001d  beq         $a2, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3B7718u;
    {
        const bool branch_taken_0x3b7718 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7718u;
        // 0x3b771c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7718) {
            ctx->pc = 0x3B7790u;
            goto label_3b7790;
        }
    }
    ctx->pc = 0x3B7720u;
    // 0x3b7720: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B7720u;
    {
        const bool branch_taken_0x3b7720 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b7720) {
            ctx->pc = 0x3B7778u;
            goto label_3b7778;
        }
    }
    ctx->pc = 0x3B7728u;
    // 0x3b7728: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b7728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b772c: 0x10c3000c  beq         $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3B772Cu;
    {
        const bool branch_taken_0x3b772c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b772c) {
            ctx->pc = 0x3B7760u;
            goto label_3b7760;
        }
    }
    ctx->pc = 0x3B7734u;
    // 0x3b7734: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7734u;
    {
        const bool branch_taken_0x3b7734 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7734) {
            ctx->pc = 0x3B7748u;
            goto label_3b7748;
        }
    }
    ctx->pc = 0x3B773Cu;
    // 0x3b773c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3B773Cu;
    {
        const bool branch_taken_0x3b773c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b773c) {
            ctx->pc = 0x3B77A0u;
            goto label_3b77a0;
        }
    }
    ctx->pc = 0x3B7744u;
    // 0x3b7744: 0x0  nop
    ctx->pc = 0x3b7744u;
    // NOP
label_3b7748:
    // 0x3b7748: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x3b7748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b774c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3b774cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3b7750: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x3b7750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b7754: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3B7754u;
    {
        const bool branch_taken_0x3b7754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7754u;
        // 0x3b7758: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7754) {
            ctx->pc = 0x3B77A0u;
            goto label_3b77a0;
        }
    }
    ctx->pc = 0x3B775Cu;
    // 0x3b775c: 0x0  nop
    ctx->pc = 0x3b775cu;
    // NOP
label_3b7760:
    // 0x3b7760: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x3b7760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b7764: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3b7764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3b7768: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x3b7768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b776c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B776Cu;
    {
        const bool branch_taken_0x3b776c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B776Cu;
        // 0x3b7770: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b776c) {
            ctx->pc = 0x3B77A0u;
            goto label_3b77a0;
        }
    }
    ctx->pc = 0x3B7774u;
    // 0x3b7774: 0x0  nop
    ctx->pc = 0x3b7774u;
    // NOP
label_3b7778:
    // 0x3b7778: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x3b7778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b777c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3b777cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3b7780: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x3b7780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b7784: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B7784u;
    {
        const bool branch_taken_0x3b7784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7784u;
        // 0x3b7788: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7784) {
            ctx->pc = 0x3B77A0u;
            goto label_3b77a0;
        }
    }
    ctx->pc = 0x3B778Cu;
    // 0x3b778c: 0x0  nop
    ctx->pc = 0x3b778cu;
    // NOP
label_3b7790:
    // 0x3b7790: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x3b7790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b7794: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3b7794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3b7798: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x3b7798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b779c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x3b779cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_3b77a0:
    // 0x3b77a0: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x3b77a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b77a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B77A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B77A4u;
        // 0x3b77a8: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B77A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B77ACu;
}
