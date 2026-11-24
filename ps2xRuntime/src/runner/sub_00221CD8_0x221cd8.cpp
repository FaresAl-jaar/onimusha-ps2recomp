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

// Function: sub_00221CD8
// Address: 0x221cd8 - 0x221d58
void sub_00221CD8_0x221cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221CD8_0x221cd8");
#endif

    switch (ctx->pc) {
        case 0x221cd8u: goto label_221cd8;
        case 0x221cdcu: goto label_221cdc;
        case 0x221ce0u: goto label_221ce0;
        case 0x221ce4u: goto label_221ce4;
        case 0x221ce8u: goto label_221ce8;
        case 0x221cecu: goto label_221cec;
        case 0x221cf0u: goto label_221cf0;
        case 0x221cf4u: goto label_221cf4;
        case 0x221cf8u: goto label_221cf8;
        case 0x221cfcu: goto label_221cfc;
        case 0x221d00u: goto label_221d00;
        case 0x221d04u: goto label_221d04;
        case 0x221d08u: goto label_221d08;
        case 0x221d0cu: goto label_221d0c;
        case 0x221d10u: goto label_221d10;
        case 0x221d14u: goto label_221d14;
        case 0x221d18u: goto label_221d18;
        case 0x221d1cu: goto label_221d1c;
        case 0x221d20u: goto label_221d20;
        case 0x221d24u: goto label_221d24;
        case 0x221d28u: goto label_221d28;
        case 0x221d2cu: goto label_221d2c;
        case 0x221d30u: goto label_221d30;
        case 0x221d34u: goto label_221d34;
        case 0x221d38u: goto label_221d38;
        case 0x221d3cu: goto label_221d3c;
        case 0x221d40u: goto label_221d40;
        case 0x221d44u: goto label_221d44;
        case 0x221d48u: goto label_221d48;
        case 0x221d4cu: goto label_221d4c;
        case 0x221d50u: goto label_221d50;
        case 0x221d54u: goto label_221d54;
        default: break;
    }

    ctx->pc = 0x221cd8u;

label_221cd8:
    // 0x221cd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_221cdc:
    // 0x221cdc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x221cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_221ce0:
    // 0x221ce0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x221ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_221ce4:
    // 0x221ce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x221ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_221ce8:
    // 0x221ce8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x221ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_221cec:
    // 0x221cec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x221cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221cf0:
    // 0x221cf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x221cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_221cf4:
    // 0x221cf4: 0x59080  sll         $s2, $a1, 2
    ctx->pc = 0x221cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_221cf8:
    // 0x221cf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x221cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221cfc:
    // 0x221cfc: 0x2a22000f  slti        $v0, $s1, 0xF
    ctx->pc = 0x221cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
label_221d00:
    // 0x221d00: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_221d04:
    if (ctx->pc == 0x221D04u) {
        ctx->pc = 0x221D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D00u;
        // 0x221d04: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221D08u;
        goto label_221d08;
    }
    ctx->pc = 0x221D00u;
    {
        const bool branch_taken_0x221d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D00u;
        // 0x221d04: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d00) {
            ctx->pc = 0x221D3Cu;
            goto label_221d3c;
        }
    }
    ctx->pc = 0x221D08u;
label_221d08:
    // 0x221d08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x221d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_221d0c:
    // 0x221d0c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x221d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_221d10:
    // 0x221d10: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_221d14:
    if (ctx->pc == 0x221D14u) {
        ctx->pc = 0x221D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D10u;
        // 0x221d14: 0x2421821  addu        $v1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221D18u;
        goto label_221d18;
    }
    ctx->pc = 0x221D10u;
    {
        const bool branch_taken_0x221d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D10u;
        // 0x221d14: 0x2421821  addu        $v1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d10) {
            ctx->pc = 0x221D3Cu;
            goto label_221d3c;
        }
    }
    ctx->pc = 0x221D18u;
label_221d18:
    // 0x221d18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x221d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_221d1c:
    // 0x221d1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x221d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221d20:
    // 0x221d20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x221d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221d24:
    // 0x221d24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221d28:
    // 0x221d28: 0x40f809  jalr        $v0
label_221d2c:
    if (ctx->pc == 0x221D2Cu) {
        ctx->pc = 0x221D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D28u;
        // 0x221d2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221D30u;
        goto label_221d30;
    }
    ctx->pc = 0x221D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x221D30u);
        ctx->pc = 0x221D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D28u;
        // 0x221d2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221D28u, 0x221D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x221D30u;
label_221d30:
    // 0x221d30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x221d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_221d34:
    // 0x221d34: 0x1080fff2  beqz        $a0, . + 4 + (-0xE << 2)
label_221d38:
    if (ctx->pc == 0x221D38u) {
        ctx->pc = 0x221D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D34u;
        // 0x221d38: 0x2a22000f  slti        $v0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x221D3Cu;
        goto label_221d3c;
    }
    ctx->pc = 0x221D34u;
    {
        const bool branch_taken_0x221d34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D34u;
        // 0x221d38: 0x2a22000f  slti        $v0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d34) {
            ctx->pc = 0x221D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221d00;
        }
    }
    ctx->pc = 0x221D3Cu;
label_221d3c:
    // 0x221d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_221d40:
    // 0x221d40: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x221d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_221d44:
    // 0x221d44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x221d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_221d48:
    // 0x221d48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x221d48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_221d4c:
    // 0x221d4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x221d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_221d50:
    // 0x221d50: 0x3e00008  jr          $ra
label_221d54:
    if (ctx->pc == 0x221D54u) {
        ctx->pc = 0x221D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D50u;
        // 0x221d54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221D58u;
        goto label_fallthrough_0x221d50;
    }
    ctx->pc = 0x221D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D50u;
        // 0x221d54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x221d50:
    ctx->pc = 0x221D58u;
}
