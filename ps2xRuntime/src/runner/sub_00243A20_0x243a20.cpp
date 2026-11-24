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

// Function: sub_00243A20
// Address: 0x243a20 - 0x243a80
void sub_00243A20_0x243a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243A20_0x243a20");
#endif

    switch (ctx->pc) {
        case 0x243a34u: goto label_243a34;
        case 0x243a48u: goto label_243a48;
        default: break;
    }

    ctx->pc = 0x243a20u;

    // 0x243a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x243a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x243a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x243a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x243a28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x243a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x243a2c: 0xc049f18  jal         func_127C60
    ctx->pc = 0x243A2Cu;
    SET_GPR_U32(ctx, 31, 0x243A34u);
    ctx->pc = 0x243A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243A2Cu;
    // 0x243a30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x243A2Cu, 0x243A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A34u;
label_243a34:
    // 0x243a34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243a38: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x243A38u;
    {
        const bool branch_taken_0x243a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A38u;
        // 0x243a3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a38) {
            ctx->pc = 0x243A70u;
            goto label_243a70;
        }
    }
    ctx->pc = 0x243A40u;
    // 0x243a40: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x243a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243a44: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x243a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_243a48:
    // 0x243a48: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x243a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x243a4c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x243a4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x243a50: 0x2443ffe0  addiu       $v1, $v0, -0x20
    ctx->pc = 0x243a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x243a54: 0x2442ff9f  addiu       $v0, $v0, -0x61
    ctx->pc = 0x243a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967199));
    // 0x243a58: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x243a58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x243a5c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x243A5Cu;
    {
        const bool branch_taken_0x243a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A5Cu;
        // 0x243a60: 0xc7282b  sltu        $a1, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a5c) {
            ctx->pc = 0x243A68u;
            goto label_243a68;
        }
    }
    ctx->pc = 0x243A64u;
    // 0x243a64: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x243a64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_243a68:
    // 0x243a68: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x243A68u;
    {
        const bool branch_taken_0x243a68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x243A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A68u;
        // 0x243a6c: 0x2062021  addu        $a0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a68) {
            ctx->pc = 0x243A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243a48;
        }
    }
    ctx->pc = 0x243A70u;
label_243a70:
    // 0x243a70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243a74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x243a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x243a78: 0x3e00008  jr          $ra
    ctx->pc = 0x243A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A78u;
        // 0x243a7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243A80u;
}
