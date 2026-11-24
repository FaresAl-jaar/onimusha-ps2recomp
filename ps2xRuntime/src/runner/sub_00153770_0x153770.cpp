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

// Function: sub_00153770
// Address: 0x153770 - 0x153800
void sub_00153770_0x153770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153770_0x153770");
#endif

    switch (ctx->pc) {
        case 0x153790u: goto label_153790;
        case 0x1537d0u: goto label_1537d0;
        case 0x1537d8u: goto label_1537d8;
        default: break;
    }

    ctx->pc = 0x153770u;

    // 0x153770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x153774: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x153774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153778: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15377c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15377cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153780: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x153780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153784: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x153784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x153788: 0x2484e610  addiu       $a0, $a0, -0x19F0
    ctx->pc = 0x153788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960656));
    // 0x15378c: 0x0  nop
    ctx->pc = 0x15378cu;
    // NOP
label_153790:
    // 0x153790: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x153790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x153794: 0x14650012  bne         $v1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x153794u;
    {
        const bool branch_taken_0x153794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x153794) {
            ctx->pc = 0x1537E0u;
            goto label_1537e0;
        }
    }
    ctx->pc = 0x15379Cu;
    // 0x15379c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x15379cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1537a0: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x1537a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1537a4: 0x2442e614  addiu       $v0, $v0, -0x19EC
    ctx->pc = 0x1537a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960660));
    // 0x1537a8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1537a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1537ac: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1537acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1537b0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1537b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1537b4: 0x2442e618  addiu       $v0, $v0, -0x19E8
    ctx->pc = 0x1537b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960664));
    // 0x1537b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1537b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1537bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1537bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1537c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1537c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1537c4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1537c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1537c8: 0xc054d48  jal         func_153520
    ctx->pc = 0x1537C8u;
    SET_GPR_U32(ctx, 31, 0x1537D0u);
    ctx->pc = 0x1537CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537C8u;
    // 0x1537cc: 0x24460800  addiu       $a2, $v0, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153520u, 0x1537C8u, 0x1537D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1537D0u;
label_1537d0:
    // 0x1537d0: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x1537D0u;
    SET_GPR_U32(ctx, 31, 0x1537D8u);
    ctx->pc = 0x1537D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537D0u;
    // 0x1537d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x1537D0u, 0x1537D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1537D8u;
label_1537d8:
    // 0x1537d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1537D8u;
    {
        const bool branch_taken_0x1537d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1537d8) {
            ctx->pc = 0x1537F0u;
            goto label_1537f0;
        }
    }
    ctx->pc = 0x1537E0u;
label_1537e0:
    // 0x1537e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1537e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1537e4: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x1537e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1537e8: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1537E8u;
    {
        const bool branch_taken_0x1537e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1537ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537E8u;
        // 0x1537ec: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537e8) {
            ctx->pc = 0x153790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153790;
        }
    }
    ctx->pc = 0x1537F0u;
label_1537f0:
    // 0x1537f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1537f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1537f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1537f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1537f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1537F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1537FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537F8u;
        // 0x1537fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1537F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153800u;
}
