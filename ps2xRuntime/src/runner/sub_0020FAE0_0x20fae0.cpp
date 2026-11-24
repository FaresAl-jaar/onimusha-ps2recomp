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

// Function: sub_0020FAE0
// Address: 0x20fae0 - 0x20fb40
void sub_0020FAE0_0x20fae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FAE0_0x20fae0");
#endif

    ctx->pc = 0x20fae0u;

    // 0x20fae0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x20fae0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fae4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x20fae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x20fae8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20faec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20faecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20faf0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20faf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20faf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20faf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20fafc: 0x24871310  addiu       $a3, $a0, 0x1310
    ctx->pc = 0x20fafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4880));
    // 0x20fb00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20fb04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20fb08: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x20fb08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x20fb0c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x20fb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x20fb10: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x20fb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x20fb14: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20FB14u;
    {
        const bool branch_taken_0x20fb14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB14u;
        // 0x20fb18: 0x34a50401  ori         $a1, $a1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1025);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb14) {
            ctx->pc = 0x20FB28u;
            goto label_20fb28;
        }
    }
    ctx->pc = 0x20FB1Cu;
    // 0x20fb1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20fb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fb20: 0x80848e0  j           func_212380
    ctx->pc = 0x20FB20u;
    ctx->pc = 0x20FB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FB20u;
    // 0x20fb24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x20FB28u;
label_20fb28:
    // 0x20fb28: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x20fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x20fb2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20fb2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fb30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20fb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fb34: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x20fb34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x20fb38: 0x3e00008  jr          $ra
    ctx->pc = 0x20FB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB38u;
        // 0x20fb3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FB40u;
}
