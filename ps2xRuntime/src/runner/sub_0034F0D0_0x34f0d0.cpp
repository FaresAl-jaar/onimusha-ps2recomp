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

// Function: sub_0034F0D0
// Address: 0x34f0d0 - 0x34f14c
void sub_0034F0D0_0x34f0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F0D0_0x34f0d0");
#endif

    switch (ctx->pc) {
        case 0x34f118u: goto label_34f118;
        default: break;
    }

    ctx->pc = 0x34f0d0u;

    // 0x34f0d0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x34f0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34f0d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34f0d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34f0d8: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x34f0d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x34f0dc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34F0DCu;
    {
        const bool branch_taken_0x34f0dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0DCu;
        // 0x34f0e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f0dc) {
            ctx->pc = 0x34F0F0u;
            goto label_34f0f0;
        }
    }
    ctx->pc = 0x34F0E4u;
    // 0x34f0e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x34F0E4u;
    {
        const bool branch_taken_0x34f0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0E4u;
        // 0x34f0e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f0e4) {
            ctx->pc = 0x34F110u;
            goto label_34f110;
        }
    }
    ctx->pc = 0x34F0ECu;
    // 0x34f0ec: 0x0  nop
    ctx->pc = 0x34f0ecu;
    // NOP
label_34f0f0:
    // 0x34f0f0: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x34f0f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x34f0f4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34F0F4u;
    {
        const bool branch_taken_0x34f0f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0F4u;
        // 0x34f0f8: 0x3046000f  andi        $a2, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f0f4) {
            ctx->pc = 0x34F108u;
            goto label_34f108;
        }
    }
    ctx->pc = 0x34F0FCu;
    // 0x34f0fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34F0FCu;
    {
        const bool branch_taken_0x34f0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f0fc) {
            ctx->pc = 0x34F110u;
            goto label_34f110;
        }
    }
    ctx->pc = 0x34F104u;
    // 0x34f104: 0x0  nop
    ctx->pc = 0x34f104u;
    // NOP
label_34f108:
    // 0x34f108: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x34f108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x34f10c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x34f10cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34f110:
    // 0x34f110: 0xc0d343c  jal         func_34D0F0
    ctx->pc = 0x34F110u;
    SET_GPR_U32(ctx, 31, 0x34F118u);
    ctx->pc = 0x34F114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F110u;
    // 0x34f114: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D0F0u, 0x34F110u, 0x34F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F118u;
label_34f118:
    // 0x34f118: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x34f118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x34f11c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x34f11cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34f120: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x34f120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34f124: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x34f124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x34f128: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34f128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34f12c: 0x24428170  addiu       $v0, $v0, -0x7E90
    ctx->pc = 0x34f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934896));
    // 0x34f130: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34f134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34f138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34f13c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x34f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x34f140: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34f140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34f144: 0x3e00008  jr          $ra
    ctx->pc = 0x34F144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F144u;
        // 0x34f148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F14Cu;
}
