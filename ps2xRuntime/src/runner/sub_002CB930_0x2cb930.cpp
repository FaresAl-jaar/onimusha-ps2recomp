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

// Function: sub_002CB930
// Address: 0x2cb930 - 0x2cb9a0
void sub_002CB930_0x2cb930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB930_0x2cb930");
#endif

    switch (ctx->pc) {
        case 0x2cb950u: goto label_2cb950;
        default: break;
    }

    ctx->pc = 0x2cb930u;

    // 0x2cb930: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB930u;
    {
        const bool branch_taken_0x2cb930 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB930u;
        // 0x2cb934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb930) {
            ctx->pc = 0x2CB940u;
            goto label_2cb940;
        }
    }
    ctx->pc = 0x2CB938u;
    // 0x2cb938: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2CB938u;
    {
        const bool branch_taken_0x2cb938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb938) {
            ctx->pc = 0x2CB998u;
            goto label_2cb998;
        }
    }
    ctx->pc = 0x2CB940u;
label_2cb940:
    // 0x2cb940: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x2cb940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x2cb944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cb944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb948: 0x24636be0  addiu       $v1, $v1, 0x6BE0
    ctx->pc = 0x2cb948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27616));
    // 0x2cb94c: 0x0  nop
    ctx->pc = 0x2cb94cu;
    // NOP
label_2cb950:
    // 0x2cb950: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2cb950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cb954: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CB954u;
    {
        const bool branch_taken_0x2cb954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cb954) {
            ctx->pc = 0x2CB980u;
            goto label_2cb980;
        }
    }
    ctx->pc = 0x2CB95Cu;
    // 0x2cb95c: 0x27838a38  addiu       $v1, $gp, -0x75C8
    ctx->pc = 0x2cb95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937144));
    // 0x2cb960: 0x27828a48  addiu       $v0, $gp, -0x75B8
    ctx->pc = 0x2cb960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937160));
    // 0x2cb964: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cb964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cb968: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2cb968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cb96c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cb96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cb970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cb970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb974: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CB974u;
    {
        const bool branch_taken_0x2cb974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB974u;
        // 0x2cb978: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb974) {
            ctx->pc = 0x2CB998u;
            goto label_2cb998;
        }
    }
    ctx->pc = 0x2CB97Cu;
    // 0x2cb97c: 0x0  nop
    ctx->pc = 0x2cb97cu;
    // NOP
label_2cb980:
    // 0x2cb980: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2cb980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2cb984: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x2cb984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2cb988: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2CB988u;
    {
        const bool branch_taken_0x2cb988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB988u;
        // 0x2cb98c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb988) {
            ctx->pc = 0x2CB950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb950;
        }
    }
    ctx->pc = 0x2CB990u;
    // 0x2cb990: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cb990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb994: 0x0  nop
    ctx->pc = 0x2cb994u;
    // NOP
label_2cb998:
    // 0x2cb998: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB9A0u;
}
