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

// Function: sub_00194510
// Address: 0x194510 - 0x194544
void sub_00194510_0x194510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194510_0x194510");
#endif

    ctx->pc = 0x194510u;

    // 0x194510: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x194510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x194514: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x194514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x194518: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x194518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19451c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x19451cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194520: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x194520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194524: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x194524u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x194528: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x194528u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x19452c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19452cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194530: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x194530u;
    {
        const bool branch_taken_0x194530 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194530u;
        // 0x194534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194530) {
            ctx->pc = 0x19453Cu;
            goto label_19453c;
        }
    }
    ctx->pc = 0x194538u;
    // 0x194538: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x194538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19453c:
    // 0x19453c: 0x3e00008  jr          $ra
    ctx->pc = 0x19453Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19453Cu;
        // 0x194540: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19453Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194544u;
}
