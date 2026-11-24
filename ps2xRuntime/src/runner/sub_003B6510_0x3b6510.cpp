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

// Function: sub_003B6510
// Address: 0x3b6510 - 0x3b6588
void sub_003B6510_0x3b6510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6510_0x3b6510");
#endif

    switch (ctx->pc) {
        case 0x3b6534u: goto label_3b6534;
        default: break;
    }

    ctx->pc = 0x3b6510u;

    // 0x3b6510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b6510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b6514: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x3b6514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3b6518: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b6518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b651c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b651cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b6520: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b6520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b6524: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B6524u;
    {
        const bool branch_taken_0x3b6524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B6528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6524u;
        // 0x3b6528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6524) {
            ctx->pc = 0x3B6548u;
            goto label_3b6548;
        }
    }
    ctx->pc = 0x3B652Cu;
    // 0x3b652c: 0xc0d8fa0  jal         func_363E80
    ctx->pc = 0x3B652Cu;
    SET_GPR_U32(ctx, 31, 0x3B6534u);
    ctx->pc = 0x363E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E80u, 0x3B652Cu, 0x3B6534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6534u;
label_3b6534:
    // 0x3b6534: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6534u;
    {
        const bool branch_taken_0x3b6534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6534) {
            ctx->pc = 0x3B6548u;
            goto label_3b6548;
        }
    }
    ctx->pc = 0x3B653Cu;
    // 0x3b653c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x3b653cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x3b6540: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3B6540u;
    {
        const bool branch_taken_0x3b6540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6540u;
        // 0x3b6544: 0x24426c58  addiu       $v0, $v0, 0x6C58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6540) {
            ctx->pc = 0x3B6578u;
            goto label_3b6578;
        }
    }
    ctx->pc = 0x3B6548u;
label_3b6548:
    // 0x3b6548: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x3b6548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3b654c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3b654cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3b6550: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3b6550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3b6554: 0x2442dfc0  addiu       $v0, $v0, -0x2040
    ctx->pc = 0x3b6554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959040));
    // 0x3b6558: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3b6558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b655c: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x3b655cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b6560: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x3b6560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x3b6564: 0x24426940  addiu       $v0, $v0, 0x6940
    ctx->pc = 0x3b6564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26944));
    // 0x3b6568: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3b6568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3b656c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b656cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b6570: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b6570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b6574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b6574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b6578:
    // 0x3b6578: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b6578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b657c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b657cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6580: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6580u;
        // 0x3b6584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6588u;
}
