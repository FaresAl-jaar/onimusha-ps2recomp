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

// Function: sub_00275CA0
// Address: 0x275ca0 - 0x275d0c
void sub_00275CA0_0x275ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275CA0_0x275ca0");
#endif

    switch (ctx->pc) {
        case 0x275cb8u: goto label_275cb8;
        case 0x275cccu: goto label_275ccc;
        case 0x275ce0u: goto label_275ce0;
        default: break;
    }

    ctx->pc = 0x275ca0u;

    // 0x275ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275ca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x275ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x275ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x275ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x275cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x275cb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x275cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275cb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x275cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_275cb8:
    // 0x275cb8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x275cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x275cbc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x275CBCu;
    {
        const bool branch_taken_0x275cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x275cbc) {
            ctx->pc = 0x275CE8u;
            goto label_275ce8;
        }
    }
    ctx->pc = 0x275CC4u;
    // 0x275cc4: 0xc09d684  jal         func_275A10
    ctx->pc = 0x275CC4u;
    SET_GPR_U32(ctx, 31, 0x275CCCu);
    ctx->pc = 0x275A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A10u, 0x275CC4u, 0x275CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275CCCu;
label_275ccc:
    // 0x275ccc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x275cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x275cd0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x275CD0u;
    {
        const bool branch_taken_0x275cd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x275cd0) {
            ctx->pc = 0x275CE8u;
            goto label_275ce8;
        }
    }
    ctx->pc = 0x275CD8u;
    // 0x275cd8: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x275CD8u;
    SET_GPR_U32(ctx, 31, 0x275CE0u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x275CD8u, 0x275CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275CE0u;
label_275ce0:
    // 0x275ce0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x275ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x275ce4: 0x0  nop
    ctx->pc = 0x275ce4u;
    // NOP
label_275ce8:
    // 0x275ce8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x275ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x275cec: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x275cecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x275cf0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x275CF0u;
    {
        const bool branch_taken_0x275cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x275CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275CF0u;
        // 0x275cf4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275cf0) {
            ctx->pc = 0x275CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275cb8;
        }
    }
    ctx->pc = 0x275CF8u;
    // 0x275cf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x275cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275cfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x275cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275d00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275d04: 0x3e00008  jr          $ra
    ctx->pc = 0x275D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D04u;
        // 0x275d08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275D0Cu;
}
