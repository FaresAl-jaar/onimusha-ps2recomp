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

// Function: sub_00329BB0
// Address: 0x329bb0 - 0x329bf8
void sub_00329BB0_0x329bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329BB0_0x329bb0");
#endif

    switch (ctx->pc) {
        case 0x329bc8u: goto label_329bc8;
        default: break;
    }

    ctx->pc = 0x329bb0u;

    // 0x329bb0: 0x9085000f  lbu         $a1, 0xF($a0)
    ctx->pc = 0x329bb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x329bb4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x329bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x329bb8: 0x24470008  addiu       $a3, $v0, 0x8
    ctx->pc = 0x329bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x329bbc: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x329bbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x329bc0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x329BC0u;
    {
        const bool branch_taken_0x329bc0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x329BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BC0u;
        // 0x329bc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329bc0) {
            ctx->pc = 0x329BF0u;
            goto label_329bf0;
        }
    }
    ctx->pc = 0x329BC8u;
label_329bc8:
    // 0x329bc8: 0x94e40002  lhu         $a0, 0x2($a3)
    ctx->pc = 0x329bc8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x329bcc: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x329bccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x329bd0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x329bd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x329bd4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x329BD4u;
    {
        const bool branch_taken_0x329bd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x329bd4) {
            ctx->pc = 0x329BE0u;
            goto label_329be0;
        }
    }
    ctx->pc = 0x329BDCu;
    // 0x329bdc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x329bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_329be0:
    // 0x329be0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x329be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x329be4: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x329be4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x329be8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x329BE8u;
    {
        const bool branch_taken_0x329be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x329BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BE8u;
        // 0x329bec: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329be8) {
            ctx->pc = 0x329BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329bc8;
        }
    }
    ctx->pc = 0x329BF0u;
label_329bf0:
    // 0x329bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x329BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BF0u;
        // 0x329bf4: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329BF8u;
}
