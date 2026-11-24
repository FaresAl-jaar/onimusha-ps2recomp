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

// Function: sub_003C4E50
// Address: 0x3c4e50 - 0x3c4ee8
void sub_003C4E50_0x3c4e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4E50_0x3c4e50");
#endif

    switch (ctx->pc) {
        case 0x3c4e6cu: goto label_3c4e6c;
        case 0x3c4e78u: goto label_3c4e78;
        case 0x3c4e80u: goto label_3c4e80;
        case 0x3c4e90u: goto label_3c4e90;
        case 0x3c4e9cu: goto label_3c4e9c;
        case 0x3c4ea8u: goto label_3c4ea8;
        case 0x3c4eb4u: goto label_3c4eb4;
        case 0x3c4ed0u: goto label_3c4ed0;
        default: break;
    }

    ctx->pc = 0x3c4e50u;

    // 0x3c4e50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c4e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c4e54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c4e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3c4e58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c4e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c4e5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c4e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c4e60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c4e60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4e64: 0xc0c0858  jal         func_302160
    ctx->pc = 0x3C4E64u;
    SET_GPR_U32(ctx, 31, 0x3C4E6Cu);
    ctx->pc = 0x3C4E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4E64u;
    // 0x3c4e68: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302160u, 0x3C4E64u, 0x3C4E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4E6Cu;
label_3c4e6c:
    // 0x3c4e6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c4e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4e70: 0xc0d0434  jal         func_3410D0
    ctx->pc = 0x3C4E70u;
    SET_GPR_U32(ctx, 31, 0x3C4E78u);
    ctx->pc = 0x3C4E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4E70u;
    // 0x3c4e74: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410D0u, 0x3C4E70u, 0x3C4E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4E78u;
label_3c4e78:
    // 0x3c4e78: 0xc0d0434  jal         func_3410D0
    ctx->pc = 0x3C4E78u;
    SET_GPR_U32(ctx, 31, 0x3C4E80u);
    ctx->pc = 0x3C4E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4E78u;
    // 0x3c4e7c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410D0u, 0x3C4E78u, 0x3C4E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4E80u;
label_3c4e80:
    // 0x3c4e80: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C4E80u;
    {
        const bool branch_taken_0x3c4e80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E80u;
        // 0x3c4e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4e80) {
            ctx->pc = 0x3C4E90u;
            goto label_3c4e90;
        }
    }
    ctx->pc = 0x3C4E88u;
    // 0x3c4e88: 0xc0fa63c  jal         func_3E98F0
    ctx->pc = 0x3C4E88u;
    SET_GPR_U32(ctx, 31, 0x3C4E90u);
    ctx->pc = 0x3C4E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4E88u;
    // 0x3c4e8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E98F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E98F0u, 0x3C4E88u, 0x3C4E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4E90u;
label_3c4e90:
    // 0x3c4e90: 0x8e450550  lw          $a1, 0x550($s2)
    ctx->pc = 0x3c4e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
    // 0x3c4e94: 0xc0c0844  jal         func_302110
    ctx->pc = 0x3C4E94u;
    SET_GPR_U32(ctx, 31, 0x3C4E9Cu);
    ctx->pc = 0x3C4E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4E94u;
    // 0x3c4e98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3C4E94u, 0x3C4E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4E9Cu;
label_3c4e9c:
    // 0x3c4e9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c4e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4ea0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3c4ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4ea4: 0x0  nop
    ctx->pc = 0x3c4ea4u;
    // NOP
label_3c4ea8:
    // 0x3c4ea8: 0x8e050660  lw          $a1, 0x660($s0)
    ctx->pc = 0x3c4ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x3c4eac: 0xc0c0844  jal         func_302110
    ctx->pc = 0x3C4EACu;
    SET_GPR_U32(ctx, 31, 0x3C4EB4u);
    ctx->pc = 0x3C4EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4EACu;
    // 0x3c4eb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3C4EACu, 0x3C4EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4EB4u;
label_3c4eb4:
    // 0x3c4eb4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c4eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3c4eb8: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x3c4eb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3c4ebc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C4EBCu;
    {
        const bool branch_taken_0x3c4ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4EBCu;
        // 0x3c4ec0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4ebc) {
            ctx->pc = 0x3C4EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4ea8;
        }
    }
    ctx->pc = 0x3C4EC4u;
    // 0x3c4ec4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3c4ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3c4ec8: 0xc052260  jal         func_148980
    ctx->pc = 0x3C4EC8u;
    SET_GPR_U32(ctx, 31, 0x3C4ED0u);
    ctx->pc = 0x3C4ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4EC8u;
    // 0x3c4ecc: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148980u, 0x3C4EC8u, 0x3C4ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4ED0u;
label_3c4ed0:
    // 0x3c4ed0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c4ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c4ed4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c4ed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c4ed8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c4ed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c4edc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c4edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c4ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C4EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4EE0u;
        // 0x3c4ee4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C4EE8u;
}
