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

// Function: sub_0033B370
// Address: 0x33b370 - 0x33b3e0
void sub_0033B370_0x33b370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B370_0x33b370");
#endif

    switch (ctx->pc) {
        case 0x33b3acu: goto label_33b3ac;
        case 0x33b3c8u: goto label_33b3c8;
        default: break;
    }

    ctx->pc = 0x33b370u;

    // 0x33b370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33b370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33b374: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x33b374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x33b378: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33b378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33b37c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x33b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x33b380: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33b380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33b384: 0x24847014  addiu       $a0, $a0, 0x7014
    ctx->pc = 0x33b384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28692));
    // 0x33b388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33b388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33b38c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33b38cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33b390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33b394: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33b394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b398: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x33b398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b39c: 0x240800a0  addiu       $t0, $zero, 0xA0
    ctx->pc = 0x33b39cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x33b3a0: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x33b3a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x33b3a4: 0xc09c720  jal         func_271C80
    ctx->pc = 0x33B3A4u;
    SET_GPR_U32(ctx, 31, 0x33B3ACu);
    ctx->pc = 0x33B3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B3A4u;
    // 0x33b3a8: 0x344a8080  ori         $t2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x271C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271C80u, 0x33B3A4u, 0x33B3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B3ACu;
label_33b3ac:
    // 0x33b3ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33b3acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b3b0: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x33b3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x33b3b4: 0x2647009f  addiu       $a3, $s2, 0x9F
    ctx->pc = 0x33b3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 159));
    // 0x33b3b8: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x33b3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x33b3bc: 0x26280063  addiu       $t0, $s1, 0x63
    ctx->pc = 0x33b3bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 99));
    // 0x33b3c0: 0xc09c4e8  jal         func_2713A0
    ctx->pc = 0x33B3C0u;
    SET_GPR_U32(ctx, 31, 0x33B3C8u);
    ctx->pc = 0x33B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B3C0u;
    // 0x33b3c4: 0x3c098000  lui         $t1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2713A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2713A0u, 0x33B3C0u, 0x33B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B3C8u;
label_33b3c8:
    // 0x33b3c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33b3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33b3cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33b3ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33b3d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33b3d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b3d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33b3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x33B3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B3D8u;
        // 0x33b3dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B3E0u;
}
