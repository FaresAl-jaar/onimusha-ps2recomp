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

// Function: sub_00127050
// Address: 0x127050 - 0x1270d4
void sub_00127050_0x127050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127050_0x127050");
#endif

    switch (ctx->pc) {
        case 0x127084u: goto label_127084;
        case 0x1270b4u: goto label_1270b4;
        default: break;
    }

    ctx->pc = 0x127050u;

    // 0x127050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x127050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x127054: 0x2caf0020  sltiu       $t7, $a1, 0x20
    ctx->pc = 0x127054u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x127058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12705c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12705cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x127060: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x127060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x127064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x127064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127068: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x127068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12706c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12706cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127070: 0x15e0000b  bnez        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x127070u;
    {
        const bool branch_taken_0x127070 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x127074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127070u;
        // 0x127074: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127070) {
            ctx->pc = 0x1270A0u;
            goto label_1270a0;
        }
    }
    ctx->pc = 0x127078u;
    // 0x127078: 0x240f0016  addiu       $t7, $zero, 0x16
    ctx->pc = 0x127078u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x12707c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12707cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127080: 0xac8f0000  sw          $t7, 0x0($a0)
    ctx->pc = 0x127080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
label_127084:
    // 0x127084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127088: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x127088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12708c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12708cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127090: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x127090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127094: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x127094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127098: 0x3e00008  jr          $ra
    ctx->pc = 0x127098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127098u;
        // 0x12709c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1270A0u;
label_1270a0:
    // 0x1270a0: 0x8c8501d4  lw          $a1, 0x1D4($a0)
    ctx->pc = 0x1270a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x1270a4: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1270A4u;
    {
        const bool branch_taken_0x1270a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1270A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270A4u;
        // 0x1270a8: 0x117880  sll         $t7, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270a4) {
            ctx->pc = 0x1270C4u;
            goto label_1270c4;
        }
    }
    ctx->pc = 0x1270ACu;
    // 0x1270ac: 0xc049bfa  jal         func_126FE8
    ctx->pc = 0x1270ACu;
    SET_GPR_U32(ctx, 31, 0x1270B4u);
    ctx->pc = 0x126FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126FE8u, 0x1270ACu, 0x1270B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1270B4u;
label_1270b4:
    // 0x1270b4: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1270B4u;
    {
        const bool branch_taken_0x1270b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1270B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270B4u;
        // 0x1270b8: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270b4) {
            ctx->pc = 0x127084u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127084;
        }
    }
    ctx->pc = 0x1270BCu;
    // 0x1270bc: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x1270bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x1270c0: 0x117880  sll         $t7, $s1, 2
    ctx->pc = 0x1270c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1270c4:
    // 0x1270c4: 0x1e57821  addu        $t7, $t7, $a1
    ctx->pc = 0x1270c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x1270c8: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1270c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1270cc: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1270CCu;
    {
        const bool branch_taken_0x1270cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1270D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270CCu;
        // 0x1270d0: 0xadf20000  sw          $s2, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270cc) {
            ctx->pc = 0x127084u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127084;
        }
    }
    ctx->pc = 0x1270D4u;
}
