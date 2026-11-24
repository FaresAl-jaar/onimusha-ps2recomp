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

// Function: sub_00284840
// Address: 0x284840 - 0x28488c
void sub_00284840_0x284840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284840_0x284840");
#endif

    switch (ctx->pc) {
        case 0x284860u: goto label_284860;
        default: break;
    }

    ctx->pc = 0x284840u;

    // 0x284840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x284840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x284844: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x284844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x284848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x284848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28484c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28484cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x284850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x284850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284854: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x284854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x284858: 0xc09bcc8  jal         func_26F320
    ctx->pc = 0x284858u;
    SET_GPR_U32(ctx, 31, 0x284860u);
    ctx->pc = 0x28485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284858u;
    // 0x28485c: 0x24840500  addiu       $a0, $a0, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F320u, 0x284858u, 0x284860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284860u;
label_284860:
    // 0x284860: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x284860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x284864: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x284864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x284868: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x284868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x28486c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28486cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284870: 0x24426510  addiu       $v0, $v0, 0x6510
    ctx->pc = 0x284870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25872));
    // 0x284874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x284874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284878: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x284878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28487c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28487cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x284880: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x284880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284884: 0x3e00008  jr          $ra
    ctx->pc = 0x284884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284884u;
        // 0x284888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28488Cu;
}
