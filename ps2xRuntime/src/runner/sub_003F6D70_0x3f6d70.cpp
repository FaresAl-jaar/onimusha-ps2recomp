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

// Function: sub_003F6D70
// Address: 0x3f6d70 - 0x3f6ddc
void sub_003F6D70_0x3f6d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6D70_0x3f6d70");
#endif

    switch (ctx->pc) {
        case 0x3f6da8u: goto label_3f6da8;
        case 0x3f6db8u: goto label_3f6db8;
        default: break;
    }

    ctx->pc = 0x3f6d70u;

    // 0x3f6d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f6d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f6d74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f6d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f6d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f6d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f6d7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f6d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f6d80: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3f6d80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3f6d84: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F6D84u;
    {
        const bool branch_taken_0x3f6d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D84u;
        // 0x3f6d88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6d84) {
            ctx->pc = 0x3F6DB0u;
            goto label_3f6db0;
        }
    }
    ctx->pc = 0x3F6D8Cu;
    // 0x3f6d8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F6D8Cu;
    {
        const bool branch_taken_0x3f6d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6d8c) {
            ctx->pc = 0x3F6DA0u;
            goto label_3f6da0;
        }
    }
    ctx->pc = 0x3F6D94u;
    // 0x3f6d94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F6D94u;
    {
        const bool branch_taken_0x3f6d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6d94) {
            ctx->pc = 0x3F6DB8u;
            goto label_3f6db8;
        }
    }
    ctx->pc = 0x3F6D9Cu;
    // 0x3f6d9c: 0x0  nop
    ctx->pc = 0x3f6d9cu;
    // NOP
label_3f6da0:
    // 0x3f6da0: 0xc0fdb80  jal         func_3F6E00
    ctx->pc = 0x3F6DA0u;
    SET_GPR_U32(ctx, 31, 0x3F6DA8u);
    ctx->pc = 0x3F6E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6E00u, 0x3F6DA0u, 0x3F6DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6DA8u;
label_3f6da8:
    // 0x3f6da8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F6DA8u;
    {
        const bool branch_taken_0x3f6da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6da8) {
            ctx->pc = 0x3F6DB8u;
            goto label_3f6db8;
        }
    }
    ctx->pc = 0x3F6DB0u;
label_3f6db0:
    // 0x3f6db0: 0xc0fdbac  jal         func_3F6EB0
    ctx->pc = 0x3F6DB0u;
    SET_GPR_U32(ctx, 31, 0x3F6DB8u);
    ctx->pc = 0x3F6EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6EB0u, 0x3F6DB0u, 0x3F6DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6DB8u;
label_3f6db8:
    // 0x3f6db8: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3f6db8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3f6dbc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3f6dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3f6dc0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F6DC0u;
    {
        const bool branch_taken_0x3f6dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6DC0u;
        // 0x3f6dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6dc0) {
            ctx->pc = 0x3F6DCCu;
            goto label_3f6dcc;
        }
    }
    ctx->pc = 0x3F6DC8u;
    // 0x3f6dc8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3f6dc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_3f6dcc:
    // 0x3f6dcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f6dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f6dd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f6dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f6dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F6DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6DD4u;
        // 0x3f6dd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F6DDCu;
}
