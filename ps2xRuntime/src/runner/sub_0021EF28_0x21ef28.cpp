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

// Function: sub_0021EF28
// Address: 0x21ef28 - 0x21efa8
void sub_0021EF28_0x21ef28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EF28_0x21ef28");
#endif

    switch (ctx->pc) {
        case 0x21ef50u: goto label_21ef50;
        case 0x21ef64u: goto label_21ef64;
        default: break;
    }

    ctx->pc = 0x21ef28u;

    // 0x21ef28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21ef28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ef2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21ef2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21ef30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21ef30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef34: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x21ef34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21ef38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ef38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ef3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21ef3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21ef40: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21ef40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef44: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21ef44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21ef48: 0xc088902  jal         func_222408
    ctx->pc = 0x21EF48u;
    SET_GPR_U32(ctx, 31, 0x21EF50u);
    ctx->pc = 0x21EF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF48u;
    // 0x21ef4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222408u, 0x21EF48u, 0x21EF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF50u;
label_21ef50:
    // 0x21ef50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ef50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21EF54u;
    {
        const bool branch_taken_0x21ef54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF54u;
        // 0x21ef58: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef54) {
            ctx->pc = 0x21EF88u;
            goto label_21ef88;
        }
    }
    ctx->pc = 0x21EF5Cu;
    // 0x21ef5c: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21EF5Cu;
    SET_GPR_U32(ctx, 31, 0x21EF64u);
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21EF5Cu, 0x21EF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF64u;
label_21ef64:
    // 0x21ef64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21ef64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ef6c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21EF6Cu;
    {
        const bool branch_taken_0x21ef6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ef6c) {
            ctx->pc = 0x21EF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EF6Cu;
            // 0x21ef70: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EF8Cu;
            goto label_21ef8c;
        }
    }
    ctx->pc = 0x21EF74u;
    // 0x21ef74: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x21ef74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x21ef78: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21ef7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21EF7Cu;
    {
        const bool branch_taken_0x21ef7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF7Cu;
        // 0x21ef80: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef7c) {
            ctx->pc = 0x21EF90u;
            goto label_21ef90;
        }
    }
    ctx->pc = 0x21EF84u;
    // 0x21ef84: 0x0  nop
    ctx->pc = 0x21ef84u;
    // NOP
label_21ef88:
    // 0x21ef88: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x21ef88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_21ef8c:
    // 0x21ef8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21ef8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ef90:
    // 0x21ef90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ef90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ef94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21ef94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ef98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21ef98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ef9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21ef9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21efa0: 0x3e00008  jr          $ra
    ctx->pc = 0x21EFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EFA0u;
        // 0x21efa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EFA8u;
}
