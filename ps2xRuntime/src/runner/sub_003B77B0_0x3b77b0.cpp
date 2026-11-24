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

// Function: sub_003B77B0
// Address: 0x3b77b0 - 0x3b7804
void sub_003B77B0_0x3b77b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B77B0_0x3b77b0");
#endif

    switch (ctx->pc) {
        case 0x3b77d8u: goto label_3b77d8;
        case 0x3b77ecu: goto label_3b77ec;
        default: break;
    }

    ctx->pc = 0x3b77b0u;

    // 0x3b77b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b77b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b77b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b77b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b77b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b77b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b77bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b77bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b77c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b77c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b77c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b77c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b77c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b77c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b77cc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3b77ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3b77d0: 0xc0eddc4  jal         func_3B7710
    ctx->pc = 0x3B77D0u;
    SET_GPR_U32(ctx, 31, 0x3B77D8u);
    ctx->pc = 0x3B77D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B77D0u;
    // 0x3b77d4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7710u, 0x3B77D0u, 0x3B77D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B77D8u;
label_3b77d8:
    // 0x3b77d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b77d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b77dc: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3b77dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3b77e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3b77e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3b77e4: 0xc0414c0  jal         func_105300
    ctx->pc = 0x3B77E4u;
    SET_GPR_U32(ctx, 31, 0x3B77ECu);
    ctx->pc = 0x3B77E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B77E4u;
    // 0x3b77e8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x3B77E4u, 0x3B77ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B77ECu;
label_3b77ec:
    // 0x3b77ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b77ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b77f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b77f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b77f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b77f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b77f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b77f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b77fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B77FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B77FCu;
        // 0x3b7800: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B77FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7804u;
}
