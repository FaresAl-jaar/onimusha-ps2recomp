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

// Function: sub_002E6F40
// Address: 0x2e6f40 - 0x2e6f84
void sub_002E6F40_0x2e6f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6F40_0x2e6f40");
#endif

    switch (ctx->pc) {
        case 0x2e6f58u: goto label_2e6f58;
        default: break;
    }

    ctx->pc = 0x2e6f40u;

    // 0x2e6f40: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2e6f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2e6f44: 0x8c252410  lw          $a1, 0x2410($at)
    ctx->pc = 0x2e6f44u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8D2410u));
    // 0x2e6f48: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2e6f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e6f4c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E6F4Cu;
    {
        const bool branch_taken_0x2e6f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F4Cu;
        // 0x2e6f50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f4c) {
            ctx->pc = 0x2E6F78u;
            goto label_2e6f78;
        }
    }
    ctx->pc = 0x2E6F54u;
    // 0x2e6f54: 0x90832b64  lbu         $v1, 0x2B64($a0)
    ctx->pc = 0x2e6f54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11108)));
label_2e6f58:
    // 0x2e6f58: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x2e6f58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2e6f5c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E6F5Cu;
    {
        const bool branch_taken_0x2e6f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E6F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F5Cu;
        // 0x2e6f60: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f5c) {
            ctx->pc = 0x2E6F68u;
            goto label_2e6f68;
        }
    }
    ctx->pc = 0x2E6F64u;
    // 0x2e6f64: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x2e6f64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e6f68:
    // 0x2e6f68: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x2e6f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2e6f6c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2e6f6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e6f70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E6F70u;
    {
        const bool branch_taken_0x2e6f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6f70) {
            ctx->pc = 0x2E6F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6f58;
        }
    }
    ctx->pc = 0x2E6F78u;
label_2e6f78:
    // 0x2e6f78: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2e6f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2e6f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F7Cu;
        // 0x2e6f80: 0x28420008  slti        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6F84u;
}
