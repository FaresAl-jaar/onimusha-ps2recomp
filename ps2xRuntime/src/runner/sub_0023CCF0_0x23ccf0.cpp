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

// Function: sub_0023CCF0
// Address: 0x23ccf0 - 0x23cd6c
void sub_0023CCF0_0x23ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CCF0_0x23ccf0");
#endif

    switch (ctx->pc) {
        case 0x23cd10u: goto label_23cd10;
        case 0x23cd18u: goto label_23cd18;
        case 0x23cd28u: goto label_23cd28;
        case 0x23cd30u: goto label_23cd30;
        case 0x23cd40u: goto label_23cd40;
        case 0x23cd48u: goto label_23cd48;
        default: break;
    }

    ctx->pc = 0x23ccf0u;

    // 0x23ccf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ccf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23ccf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23ccf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ccf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ccfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23ccfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23cd00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23cd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23cd04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23cd08: 0xc08f25c  jal         func_23C970
    ctx->pc = 0x23CD08u;
    SET_GPR_U32(ctx, 31, 0x23CD10u);
    ctx->pc = 0x23CD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CD08u;
    // 0x23cd0c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C970u, 0x23CD08u, 0x23CD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD10u;
label_23cd10:
    // 0x23cd10: 0xc08f15c  jal         func_23C570
    ctx->pc = 0x23CD10u;
    SET_GPR_U32(ctx, 31, 0x23CD18u);
    ctx->pc = 0x23CD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CD10u;
    // 0x23cd14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C570u, 0x23CD10u, 0x23CD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD18u;
label_23cd18:
    // 0x23cd18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23cd18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cd1c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x23CD1Cu;
    {
        const bool branch_taken_0x23cd1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD1Cu;
        // 0x23cd20: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd1c) {
            ctx->pc = 0x23CD50u;
            goto label_23cd50;
        }
    }
    ctx->pc = 0x23CD24u;
    // 0x23cd24: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x23cd24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23cd28:
    // 0x23cd28: 0xc08d570  jal         func_2355C0
    ctx->pc = 0x23CD28u;
    SET_GPR_U32(ctx, 31, 0x23CD30u);
    ctx->pc = 0x23CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CD28u;
    // 0x23cd2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2355C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2355C0u, 0x23CD28u, 0x23CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD30u;
label_23cd30:
    // 0x23cd30: 0x50530008  beql        $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x23CD30u;
    {
        const bool branch_taken_0x23cd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x23cd30) {
            ctx->pc = 0x23CD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CD30u;
            // 0x23cd34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD54u;
            goto label_23cd54;
        }
    }
    ctx->pc = 0x23CD38u;
    // 0x23cd38: 0xc08ecfe  jal         func_23B3F8
    ctx->pc = 0x23CD38u;
    SET_GPR_U32(ctx, 31, 0x23CD40u);
    ctx->pc = 0x23B3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B3F8u, 0x23CD38u, 0x23CD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD40u;
label_23cd40:
    // 0x23cd40: 0xc08e730  jal         func_239CC0
    ctx->pc = 0x23CD40u;
    SET_GPR_U32(ctx, 31, 0x23CD48u);
    ctx->pc = 0x23CD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CD40u;
    // 0x23cd44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239CC0u, 0x23CD40u, 0x23CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD48u;
label_23cd48:
    // 0x23cd48: 0x1452fff7  bne         $v0, $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x23CD48u;
    {
        const bool branch_taken_0x23cd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x23cd48) {
            ctx->pc = 0x23CD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cd28;
        }
    }
    ctx->pc = 0x23CD50u;
label_23cd50:
    // 0x23cd50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23cd50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23cd54:
    // 0x23cd54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23cd54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23cd58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23cd58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cd5c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23cd5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23cd60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23cd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cd64: 0x3e00008  jr          $ra
    ctx->pc = 0x23CD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD64u;
        // 0x23cd68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CD6Cu;
}
