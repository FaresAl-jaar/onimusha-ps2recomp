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

// Function: sub_0023B170
// Address: 0x23b170 - 0x23b1b0
void sub_0023B170_0x23b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B170_0x23b170");
#endif

    switch (ctx->pc) {
        case 0x23b188u: goto label_23b188;
        case 0x23b190u: goto label_23b190;
        case 0x23b198u: goto label_23b198;
        default: break;
    }

    ctx->pc = 0x23b170u;

    // 0x23b170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23b170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23b174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b178: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23b178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b17c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23b17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23b180: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23B180u;
    SET_GPR_U32(ctx, 31, 0x23B188u);
    ctx->pc = 0x23B184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B180u;
    // 0x23b184: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23B180u, 0x23B188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B188u;
label_23b188:
    // 0x23b188: 0xc08ec6c  jal         func_23B1B0
    ctx->pc = 0x23B188u;
    SET_GPR_U32(ctx, 31, 0x23B190u);
    ctx->pc = 0x23B18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B188u;
    // 0x23b18c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1B0u, 0x23B188u, 0x23B190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B190u;
label_23b190:
    // 0x23b190: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23B190u;
    SET_GPR_U32(ctx, 31, 0x23B198u);
    ctx->pc = 0x23B194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B190u;
    // 0x23b194: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23B190u, 0x23B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B198u;
label_23b198:
    // 0x23b198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b19c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x23b19cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x23b1a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23b1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b1a4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x23b1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23b1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x23B1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1A8u;
        // 0x23b1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B1B0u;
}
