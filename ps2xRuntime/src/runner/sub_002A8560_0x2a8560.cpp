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

// Function: sub_002A8560
// Address: 0x2a8560 - 0x2a85f4
void sub_002A8560_0x2a8560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8560_0x2a8560");
#endif

    switch (ctx->pc) {
        case 0x2a85b0u: goto label_2a85b0;
        case 0x2a85dcu: goto label_2a85dc;
        default: break;
    }

    ctx->pc = 0x2a8560u;

    // 0x2a8560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a8560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a8564: 0x3c021e00  lui         $v0, 0x1E00
    ctx->pc = 0x2a8564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7680 << 16));
    // 0x2a8568: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a8568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a856c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a856cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8570: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a8570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a8574: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a8574u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8578: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a8578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a857c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a857cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8580: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a8580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a8584: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a8584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8588: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a8588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a858c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a858cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a8590: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a8590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a8594: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a8594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8598: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x2a8598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x2a859c: 0x26070030  addiu       $a3, $s0, 0x30
    ctx->pc = 0x2a859cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2a85a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a85a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a85a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85a8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A85A8u;
    SET_GPR_U32(ctx, 31, 0x2A85B0u);
    ctx->pc = 0x2A85ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A85A8u;
    // 0x2a85ac: 0xffb10000  sd          $s1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A85A8u, 0x2A85B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A85B0u;
label_2a85b0:
    // 0x2a85b0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a85b4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a85b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85b8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2a85b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85bc: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2a85bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a85c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85c4: 0x34451ee8  ori         $a1, $v0, 0x1EE8
    ctx->pc = 0x2a85c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7912);
    // 0x2a85c8: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x2a85c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x2a85cc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a85ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a85d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a85d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85d4: 0xc097d94  jal         func_25F650
    ctx->pc = 0x2A85D4u;
    SET_GPR_U32(ctx, 31, 0x2A85DCu);
    ctx->pc = 0x2A85D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A85D4u;
    // 0x2a85d8: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F650u, 0x2A85D4u, 0x2A85DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A85DCu;
label_2a85dc:
    // 0x2a85dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a85dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a85e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a85e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a85e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a85e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a85e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a85e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a85ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2A85ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A85F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A85ECu;
        // 0x2a85f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A85ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A85F4u;
}
