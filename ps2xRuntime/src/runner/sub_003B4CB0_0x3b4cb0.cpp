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

// Function: sub_003B4CB0
// Address: 0x3b4cb0 - 0x3b4d38
void sub_003B4CB0_0x3b4cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4CB0_0x3b4cb0");
#endif

    switch (ctx->pc) {
        case 0x3b4cf0u: goto label_3b4cf0;
        case 0x3b4d00u: goto label_3b4d00;
        case 0x3b4d10u: goto label_3b4d10;
        case 0x3b4d18u: goto label_3b4d18;
        default: break;
    }

    ctx->pc = 0x3b4cb0u;

    // 0x3b4cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b4cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b4cb4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b4cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b4cb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b4cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b4cbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b4cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b4cc0: 0x9083000a  lbu         $v1, 0xA($a0)
    ctx->pc = 0x3b4cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x3b4cc4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B4CC4u;
    {
        const bool branch_taken_0x3b4cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4CC4u;
        // 0x3b4cc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4cc4) {
            ctx->pc = 0x3B4D08u;
            goto label_3b4d08;
        }
    }
    ctx->pc = 0x3B4CCCu;
    // 0x3b4ccc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b4cd0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B4CD0u;
    {
        const bool branch_taken_0x3b4cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B4CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4CD0u;
        // 0x3b4cd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4cd0) {
            ctx->pc = 0x3B4CF8u;
            goto label_3b4cf8;
        }
    }
    ctx->pc = 0x3B4CD8u;
    // 0x3b4cd8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4CD8u;
    {
        const bool branch_taken_0x3b4cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b4cd8) {
            ctx->pc = 0x3B4CE8u;
            goto label_3b4ce8;
        }
    }
    ctx->pc = 0x3B4CE0u;
    // 0x3b4ce0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3B4CE0u;
    {
        const bool branch_taken_0x3b4ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4ce0) {
            ctx->pc = 0x3B4D18u;
            goto label_3b4d18;
        }
    }
    ctx->pc = 0x3B4CE8u;
label_3b4ce8:
    // 0x3b4ce8: 0xc0ed354  jal         func_3B4D50
    ctx->pc = 0x3B4CE8u;
    SET_GPR_U32(ctx, 31, 0x3B4CF0u);
    ctx->pc = 0x3B4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4D50u, 0x3B4CE8u, 0x3B4CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4CF0u;
label_3b4cf0:
    // 0x3b4cf0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3B4CF0u;
    {
        const bool branch_taken_0x3b4cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4cf0) {
            ctx->pc = 0x3B4D18u;
            goto label_3b4d18;
        }
    }
    ctx->pc = 0x3B4CF8u;
label_3b4cf8:
    // 0x3b4cf8: 0xc0ed3cc  jal         func_3B4F30
    ctx->pc = 0x3B4CF8u;
    SET_GPR_U32(ctx, 31, 0x3B4D00u);
    ctx->pc = 0x3B4F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4F30u, 0x3B4CF8u, 0x3B4D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D00u;
label_3b4d00:
    // 0x3b4d00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4D00u;
    {
        const bool branch_taken_0x3b4d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4d00) {
            ctx->pc = 0x3B4D18u;
            goto label_3b4d18;
        }
    }
    ctx->pc = 0x3B4D08u;
label_3b4d08:
    // 0x3b4d08: 0xc0ed424  jal         func_3B5090
    ctx->pc = 0x3B4D08u;
    SET_GPR_U32(ctx, 31, 0x3B4D10u);
    ctx->pc = 0x3B5090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5090u, 0x3B4D08u, 0x3B4D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D10u;
label_3b4d10:
    // 0x3b4d10: 0xc0ed4e0  jal         func_3B5380
    ctx->pc = 0x3B4D10u;
    SET_GPR_U32(ctx, 31, 0x3B4D18u);
    ctx->pc = 0x3B4D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4D10u;
    // 0x3b4d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5380u, 0x3B4D10u, 0x3B4D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D18u;
label_3b4d18:
    // 0x3b4d18: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x3b4d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3b4d1c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B4D1Cu;
    {
        const bool branch_taken_0x3b4d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D1Cu;
        // 0x3b4d20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4d1c) {
            ctx->pc = 0x3B4D28u;
            goto label_3b4d28;
        }
    }
    ctx->pc = 0x3B4D24u;
    // 0x3b4d24: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x3b4d24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_3b4d28:
    // 0x3b4d28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b4d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b4d2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b4d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b4d30: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D30u;
        // 0x3b4d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4D38u;
}
