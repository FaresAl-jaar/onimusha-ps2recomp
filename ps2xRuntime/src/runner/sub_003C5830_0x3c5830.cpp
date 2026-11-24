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

// Function: sub_003C5830
// Address: 0x3c5830 - 0x3c585c
void sub_003C5830_0x3c5830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5830_0x3c5830");
#endif

    ctx->pc = 0x3c5830u;

    // 0x3c5830: 0xc4820570  lwc1        $f2, 0x570($a0)
    ctx->pc = 0x3c5830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5834: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3c5834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3c5838: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c5838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c583c: 0xc480056c  lwc1        $f0, 0x56C($a0)
    ctx->pc = 0x3c583cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5840: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3c5840u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3c5844: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3c5844u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5848: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3C5848u;
    {
        const bool branch_taken_0x3c5848 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5848u;
        // 0x3c584c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5848) {
            ctx->pc = 0x3C5854u;
            goto label_3c5854;
        }
    }
    ctx->pc = 0x3C5850u;
    // 0x3c5850: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c5850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c5854:
    // 0x3c5854: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5854u;
        // 0x3c5858: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C585Cu;
}
