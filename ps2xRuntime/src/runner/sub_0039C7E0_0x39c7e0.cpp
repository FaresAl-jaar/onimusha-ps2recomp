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

// Function: sub_0039C7E0
// Address: 0x39c7e0 - 0x39c860
void sub_0039C7E0_0x39c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C7E0_0x39c7e0");
#endif

    switch (ctx->pc) {
        case 0x39c810u: goto label_39c810;
        case 0x39c820u: goto label_39c820;
        case 0x39c834u: goto label_39c834;
        default: break;
    }

    ctx->pc = 0x39c7e0u;

    // 0x39c7e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x39c7e4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x39c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x39c7e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39c7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x39c7ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x39c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39c7f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39c7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39c7f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x39c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x39c7f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39c7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39c7fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x39c7fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c800: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39c800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39c804: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39c804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c808: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x39c808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x39c80c: 0x0  nop
    ctx->pc = 0x39c80cu;
    // NOP
label_39c810:
    // 0x39c810: 0x8e052b20  lw          $a1, 0x2B20($s0)
    ctx->pc = 0x39c810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x39c814: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x39c814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x39c818: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x39C818u;
    SET_GPR_U32(ctx, 31, 0x39C820u);
    ctx->pc = 0x39C81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C818u;
    // 0x39c81c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x39C818u, 0x39C820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C820u;
label_39c820:
    // 0x39c820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39c820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c824: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39C824u;
    {
        const bool branch_taken_0x39c824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C824u;
        // 0x39c828: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c824) {
            ctx->pc = 0x39C838u;
            goto label_39c838;
        }
    }
    ctx->pc = 0x39C82Cu;
    // 0x39c82c: 0xc0e68e0  jal         func_39A380
    ctx->pc = 0x39C82Cu;
    SET_GPR_U32(ctx, 31, 0x39C834u);
    ctx->pc = 0x39A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A380u, 0x39C82Cu, 0x39C834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C834u;
label_39c834:
    // 0x39c834: 0x0  nop
    ctx->pc = 0x39c834u;
    // NOP
label_39c838:
    // 0x39c838: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39c838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x39c83c: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x39c83cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x39c840: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x39C840u;
    {
        const bool branch_taken_0x39c840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C840u;
        // 0x39c844: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c840) {
            ctx->pc = 0x39C810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c810;
        }
    }
    ctx->pc = 0x39C848u;
    // 0x39c848: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39c848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39c84c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39c84cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39c850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39c850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39c854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c858: 0x3e00008  jr          $ra
    ctx->pc = 0x39C858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C858u;
        // 0x39c85c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C860u;
}
