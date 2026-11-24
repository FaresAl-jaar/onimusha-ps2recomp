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

// Function: sub_003B7640
// Address: 0x3b7640 - 0x3b76a0
void sub_003B7640_0x3b7640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7640_0x3b7640");
#endif

    ctx->pc = 0x3b7640u;

    // 0x3b7640: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3b7640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b7644: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x3b7644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b7648: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b7648u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b764c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x3B764Cu;
    {
        const bool branch_taken_0x3b764c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b764c) {
            ctx->pc = 0x3B7678u;
            goto label_3b7678;
        }
    }
    ctx->pc = 0x3B7654u;
    // 0x3b7654: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3b7654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b7658: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x3b7658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b765c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b765cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b7660: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3B7660u;
    {
        const bool branch_taken_0x3b7660 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B7664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7660u;
        // 0x3b7664: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7660) {
            ctx->pc = 0x3B766Cu;
            goto label_3b766c;
        }
    }
    ctx->pc = 0x3B7668u;
    // 0x3b7668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b7668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b766c:
    // 0x3b766c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3B766Cu;
    {
        const bool branch_taken_0x3b766c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B766Cu;
        // 0x3b7670: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b766c) {
            ctx->pc = 0x3B7698u;
            goto label_3b7698;
        }
    }
    ctx->pc = 0x3B7674u;
    // 0x3b7674: 0x0  nop
    ctx->pc = 0x3b7674u;
    // NOP
label_3b7678:
    // 0x3b7678: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3b7678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b767c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x3b767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b7680: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b7680u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b7684: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7684u;
    {
        const bool branch_taken_0x3b7684 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7684u;
        // 0x3b7688: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7684) {
            ctx->pc = 0x3B7694u;
            goto label_3b7694;
        }
    }
    ctx->pc = 0x3B768Cu;
    // 0x3b768c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3B768Cu;
    {
        const bool branch_taken_0x3b768c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B768Cu;
        // 0x3b7690: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b768c) {
            ctx->pc = 0x3B7694u;
            goto label_3b7694;
        }
    }
    ctx->pc = 0x3B7694u;
label_3b7694:
    // 0x3b7694: 0x0  nop
    ctx->pc = 0x3b7694u;
    // NOP
label_3b7698:
    // 0x3b7698: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B76A0u;
}
