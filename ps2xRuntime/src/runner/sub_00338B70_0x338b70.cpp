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

// Function: sub_00338B70
// Address: 0x338b70 - 0x338bec
void sub_00338B70_0x338b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338B70_0x338b70");
#endif

    switch (ctx->pc) {
        case 0x338b88u: goto label_338b88;
        case 0x338b9cu: goto label_338b9c;
        default: break;
    }

    ctx->pc = 0x338b70u;

    // 0x338b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x338b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x338b74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x338b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x338b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x338b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x338b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x338b80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x338b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338b84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x338b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338b88:
    // 0x338b88: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x338b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x338b8c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x338B8Cu;
    {
        const bool branch_taken_0x338b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x338b8c) {
            ctx->pc = 0x338BC0u;
            goto label_338bc0;
        }
    }
    ctx->pc = 0x338B94u;
    // 0x338b94: 0xc08e730  jal         func_239CC0
    ctx->pc = 0x338B94u;
    SET_GPR_U32(ctx, 31, 0x338B9Cu);
    ctx->pc = 0x239CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239CC0u, 0x338B94u, 0x338B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338B9Cu;
label_338b9c:
    // 0x338b9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x338b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x338ba0: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x338BA0u;
    {
        const bool branch_taken_0x338ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x338ba0) {
            ctx->pc = 0x338BC0u;
            goto label_338bc0;
        }
    }
    ctx->pc = 0x338BA8u;
    // 0x338ba8: 0x9222000a  lbu         $v0, 0xA($s1)
    ctx->pc = 0x338ba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x338bac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338BACu;
    {
        const bool branch_taken_0x338bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338BACu;
        // 0x338bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338bac) {
            ctx->pc = 0x338BC0u;
            goto label_338bc0;
        }
    }
    ctx->pc = 0x338BB4u;
    // 0x338bb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x338BB4u;
    {
        const bool branch_taken_0x338bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338bb4) {
            ctx->pc = 0x338BD8u;
            goto label_338bd8;
        }
    }
    ctx->pc = 0x338BBCu;
    // 0x338bbc: 0x0  nop
    ctx->pc = 0x338bbcu;
    // NOP
label_338bc0:
    // 0x338bc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x338bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x338bc4: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x338bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x338bc8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x338BC8u;
    {
        const bool branch_taken_0x338bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x338BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338BC8u;
        // 0x338bcc: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338bc8) {
            ctx->pc = 0x338B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338b88;
        }
    }
    ctx->pc = 0x338BD0u;
    // 0x338bd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338bd4: 0x0  nop
    ctx->pc = 0x338bd4u;
    // NOP
label_338bd8:
    // 0x338bd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x338bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338bdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x338bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338be0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338be4: 0x3e00008  jr          $ra
    ctx->pc = 0x338BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338BE4u;
        // 0x338be8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338BECu;
}
