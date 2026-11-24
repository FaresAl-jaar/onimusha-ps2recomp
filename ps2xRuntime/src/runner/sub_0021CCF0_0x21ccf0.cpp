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

// Function: sub_0021CCF0
// Address: 0x21ccf0 - 0x21cd8c
void sub_0021CCF0_0x21ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CCF0_0x21ccf0");
#endif

    switch (ctx->pc) {
        case 0x21cd0cu: goto label_21cd0c;
        case 0x21cd1cu: goto label_21cd1c;
        case 0x21cd30u: goto label_21cd30;
        case 0x21cd44u: goto label_21cd44;
        case 0x21cd4cu: goto label_21cd4c;
        case 0x21cd5cu: goto label_21cd5c;
        case 0x21cd68u: goto label_21cd68;
        default: break;
    }

    ctx->pc = 0x21ccf0u;

    // 0x21ccf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21ccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ccf4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x21ccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21ccf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21ccf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21ccfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ccfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21cd00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21cd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21cd04: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21CD04u;
    SET_GPR_U32(ctx, 31, 0x21CD0Cu);
    ctx->pc = 0x21CD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CD04u;
    // 0x21cd08: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21CD04u, 0x21CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD0Cu;
label_21cd0c:
    // 0x21cd0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21CD0Cu;
    {
        const bool branch_taken_0x21cd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD0Cu;
        // 0x21cd10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd0c) {
            ctx->pc = 0x21CD24u;
            goto label_21cd24;
        }
    }
    ctx->pc = 0x21CD14u;
    // 0x21cd14: 0xc0888fc  jal         func_2223F0
    ctx->pc = 0x21CD14u;
    SET_GPR_U32(ctx, 31, 0x21CD1Cu);
    ctx->pc = 0x21CD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CD14u;
    // 0x21cd18: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223F0u, 0x21CD14u, 0x21CD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD1Cu;
label_21cd1c:
    // 0x21cd1c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21CD1Cu;
    {
        const bool branch_taken_0x21cd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD1Cu;
        // 0x21cd20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd1c) {
            ctx->pc = 0x21CD78u;
            goto label_21cd78;
        }
    }
    ctx->pc = 0x21CD24u;
label_21cd24:
    // 0x21cd24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21cd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd28: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21CD28u;
    SET_GPR_U32(ctx, 31, 0x21CD30u);
    ctx->pc = 0x21CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CD28u;
    // 0x21cd2c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21CD28u, 0x21CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD30u;
label_21cd30:
    // 0x21cd30: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21CD30u;
    {
        const bool branch_taken_0x21cd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD30u;
        // 0x21cd34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd30) {
            ctx->pc = 0x21CD58u;
            goto label_21cd58;
        }
    }
    ctx->pc = 0x21CD38u;
    // 0x21cd38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21cd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd3c: 0xc0888fc  jal         func_2223F0
    ctx->pc = 0x21CD3Cu;
    SET_GPR_U32(ctx, 31, 0x21CD44u);
    ctx->pc = 0x21CD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CD3Cu;
    // 0x21cd40: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223F0u, 0x21CD3Cu, 0x21CD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD44u;
label_21cd44:
    // 0x21cd44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CD44u;
    {
        const bool branch_taken_0x21cd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD44u;
        // 0x21cd48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd44) {
            ctx->pc = 0x21CD58u;
            goto label_21cd58;
        }
    }
    ctx->pc = 0x21CD4Cu;
label_21cd4c:
    // 0x21cd4c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21CD4Cu;
    {
        const bool branch_taken_0x21cd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD4Cu;
        // 0x21cd50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd4c) {
            ctx->pc = 0x21CD78u;
            goto label_21cd78;
        }
    }
    ctx->pc = 0x21CD54u;
    // 0x21cd54: 0x0  nop
    ctx->pc = 0x21cd54u;
    // NOP
label_21cd58:
    // 0x21cd58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21cd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21cd5c:
    // 0x21cd5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21cd5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21cd60: 0xc08408e  jal         func_210238
    ctx->pc = 0x21CD60u;
    SET_GPR_U32(ctx, 31, 0x21CD68u);
    ctx->pc = 0x21CD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CD60u;
    // 0x21cd64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210238u, 0x21CD60u, 0x21CD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD68u;
label_21cd68:
    // 0x21cd68: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21CD68u;
    {
        const bool branch_taken_0x21cd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD68u;
        // 0x21cd6c: 0x2e030008  sltiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd68) {
            ctx->pc = 0x21CD4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cd4c;
        }
    }
    ctx->pc = 0x21CD70u;
    // 0x21cd70: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21CD70u;
    {
        const bool branch_taken_0x21cd70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD70u;
        // 0x21cd74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd70) {
            ctx->pc = 0x21CD5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cd5c;
        }
    }
    ctx->pc = 0x21CD78u;
label_21cd78:
    // 0x21cd78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21cd78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cd7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21cd7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21cd80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21cd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cd84: 0x3e00008  jr          $ra
    ctx->pc = 0x21CD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD84u;
        // 0x21cd88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CD8Cu;
}
