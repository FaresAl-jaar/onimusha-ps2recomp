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

// Function: sub_003B76A0
// Address: 0x3b76a0 - 0x3b7710
void sub_003B76A0_0x3b76a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B76A0_0x3b76a0");
#endif

    ctx->pc = 0x3b76a0u;

    // 0x3b76a0: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x3b76a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b76a4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3b76a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b76a8: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x3b76a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x3b76ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b76acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b76b0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x3B76B0u;
    {
        const bool branch_taken_0x3b76b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b76b0) {
            ctx->pc = 0x3B7700u;
            goto label_3b7700;
        }
    }
    ctx->pc = 0x3B76B8u;
    // 0x3b76b8: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x3b76b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b76bc: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x3b76bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x3b76c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b76c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b76c4: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x3B76C4u;
    {
        const bool branch_taken_0x3b76c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b76c4) {
            ctx->pc = 0x3B7700u;
            goto label_3b7700;
        }
    }
    ctx->pc = 0x3B76CCu;
    // 0x3b76cc: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x3b76ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b76d0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3b76d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b76d4: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x3b76d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x3b76d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b76d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b76dc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x3B76DCu;
    {
        const bool branch_taken_0x3b76dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b76dc) {
            ctx->pc = 0x3B7700u;
            goto label_3b7700;
        }
    }
    ctx->pc = 0x3B76E4u;
    // 0x3b76e4: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x3b76e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b76e8: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x3b76e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x3b76ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b76ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b76f0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3B76F0u;
    {
        const bool branch_taken_0x3b76f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B76F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B76F0u;
        // 0x3b76f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b76f0) {
            ctx->pc = 0x3B7700u;
            goto label_3b7700;
        }
    }
    ctx->pc = 0x3B76F8u;
    // 0x3b76f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B76F8u;
    {
        const bool branch_taken_0x3b76f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b76f8) {
            ctx->pc = 0x3B7708u;
            goto label_3b7708;
        }
    }
    ctx->pc = 0x3B7700u;
label_3b7700:
    // 0x3b7700: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b7700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7704: 0x0  nop
    ctx->pc = 0x3b7704u;
    // NOP
label_3b7708:
    // 0x3b7708: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7710u;
}
