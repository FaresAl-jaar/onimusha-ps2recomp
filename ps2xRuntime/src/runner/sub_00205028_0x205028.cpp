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

// Function: sub_00205028
// Address: 0x205028 - 0x205098
void sub_00205028_0x205028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205028_0x205028");
#endif

    switch (ctx->pc) {
        case 0x20503cu: goto label_20503c;
        default: break;
    }

    ctx->pc = 0x205028u;

    // 0x205028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20502c: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x20502cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x205030: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x205030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x205034: 0xc089346  jal         func_224D18
    ctx->pc = 0x205034u;
    SET_GPR_U32(ctx, 31, 0x20503Cu);
    ctx->pc = 0x205038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205034u;
    // 0x205038: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224D18u, 0x205034u, 0x20503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20503Cu;
label_20503c:
    // 0x20503c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20503cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205040: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x205040u;
    {
        const bool branch_taken_0x205040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x205044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205040u;
        // 0x205044: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205040) {
            ctx->pc = 0x20508Cu;
            goto label_20508c;
        }
    }
    ctx->pc = 0x205048u;
    // 0x205048: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x205048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20504c: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x20504cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x205050: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x205050u;
    {
        const bool branch_taken_0x205050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205050u;
        // 0x205054: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205050) {
            ctx->pc = 0x20508Cu;
            goto label_20508c;
        }
    }
    ctx->pc = 0x205058u;
    // 0x205058: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x205058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20505c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x20505cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x205060: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x205060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205064: 0x8c636d70  lw          $v1, 0x6D70($v1)
    ctx->pc = 0x205064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28016)));
    // 0x205068: 0x600008  jr          $v1
    ctx->pc = 0x205068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205070u: goto label_205070;
            case 0x205078u: goto label_205078;
            case 0x205080u: goto label_205080;
            case 0x205088u: goto label_205088;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205068u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x205070u;
label_205070:
    // 0x205070: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x205070u;
    {
        const bool branch_taken_0x205070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205070u;
        // 0x205074: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205070) {
            ctx->pc = 0x20508Cu;
            goto label_20508c;
        }
    }
    ctx->pc = 0x205078u;
label_205078:
    // 0x205078: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x205078u;
    {
        const bool branch_taken_0x205078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205078u;
        // 0x20507c: 0x24020051  addiu       $v0, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205078) {
            ctx->pc = 0x20508Cu;
            goto label_20508c;
        }
    }
    ctx->pc = 0x205080u;
label_205080:
    // 0x205080: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x205080u;
    {
        const bool branch_taken_0x205080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205080u;
        // 0x205084: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205080) {
            ctx->pc = 0x20508Cu;
            goto label_20508c;
        }
    }
    ctx->pc = 0x205088u;
label_205088:
    // 0x205088: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x205088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_20508c:
    // 0x20508c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20508cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205090: 0x3e00008  jr          $ra
    ctx->pc = 0x205090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205090u;
        // 0x205094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205098u;
}
