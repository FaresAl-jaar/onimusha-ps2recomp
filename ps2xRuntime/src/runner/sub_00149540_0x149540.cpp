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

// Function: sub_00149540
// Address: 0x149540 - 0x149588
void sub_00149540_0x149540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149540_0x149540");
#endif

    switch (ctx->pc) {
        case 0x149564u: goto label_149564;
        case 0x149574u: goto label_149574;
        default: break;
    }

    ctx->pc = 0x149540u;

    // 0x149540: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x149540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x149544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x149544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x149548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14954c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x149550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149554: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x149554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149558: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x149558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14955c: 0xc04d594  jal         func_135650
    ctx->pc = 0x14955Cu;
    SET_GPR_U32(ctx, 31, 0x149564u);
    ctx->pc = 0x149560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14955Cu;
    // 0x149560: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x14955Cu, 0x149564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149564u;
label_149564:
    // 0x149564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149568: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x149568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14956c: 0xc041442  jal         func_105108
    ctx->pc = 0x14956Cu;
    SET_GPR_U32(ctx, 31, 0x149574u);
    ctx->pc = 0x149570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14956Cu;
    // 0x149570: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x14956Cu, 0x149574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149574u;
label_149574:
    // 0x149574: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x149574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14957c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14957cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149580: 0x3e00008  jr          $ra
    ctx->pc = 0x149580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149580u;
        // 0x149584: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149588u;
}
