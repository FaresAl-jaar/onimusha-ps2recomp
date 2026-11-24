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

// Function: sub_001A2790
// Address: 0x1a2790 - 0x1a27e0
void sub_001A2790_0x1a2790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2790_0x1a2790");
#endif

    switch (ctx->pc) {
        case 0x1a27a8u: goto label_1a27a8;
        case 0x1a27ccu: goto label_1a27cc;
        default: break;
    }

    ctx->pc = 0x1a2790u;

    // 0x1a2790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a2794: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x1a2794u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a279c: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x1a279cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27a0: 0xc0688e4  jal         func_1A2390
    ctx->pc = 0x1A27A0u;
    SET_GPR_U32(ctx, 31, 0x1A27A8u);
    ctx->pc = 0x1A27A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A27A0u;
    // 0x1a27a4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2390u, 0x1A27A0u, 0x1A27A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A27A8u;
label_1a27a8:
    // 0x1a27a8: 0x460003c6  mov.s       $f15, $f0
    ctx->pc = 0x1a27a8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
    // 0x1a27ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a27acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a27b0: 0x0  nop
    ctx->pc = 0x1a27b0u;
    // NOP
    // 0x1a27b4: 0x460f0032  c.eq.s      $f0, $f15
    ctx->pc = 0x1a27b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a27b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A27B8u;
    {
        const bool branch_taken_0x1a27b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A27BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27B8u;
        // 0x1a27bc: 0x320282d  daddu       $a1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27b8) {
            ctx->pc = 0x1A27D0u;
            goto label_1a27d0;
        }
    }
    ctx->pc = 0x1A27C0u;
    // 0x1a27c0: 0x300382d  daddu       $a3, $t8, $zero
    ctx->pc = 0x1a27c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27c4: 0xc068964  jal         func_1A2590
    ctx->pc = 0x1A27C4u;
    SET_GPR_U32(ctx, 31, 0x1A27CCu);
    ctx->pc = 0x1A27C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A27C4u;
    // 0x1a27c8: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2590u, 0x1A27C4u, 0x1A27CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A27CCu;
label_1a27cc:
    // 0x1a27cc: 0x0  nop
    ctx->pc = 0x1a27ccu;
    // NOP
label_1a27d0:
    // 0x1a27d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a27d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a27d4: 0x46007806  mov.s       $f0, $f15
    ctx->pc = 0x1a27d4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[15]);
    // 0x1a27d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A27D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27D8u;
        // 0x1a27dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A27D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A27E0u;
}
