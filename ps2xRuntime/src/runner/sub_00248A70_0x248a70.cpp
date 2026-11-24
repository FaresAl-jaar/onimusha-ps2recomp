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

// Function: sub_00248A70
// Address: 0x248a70 - 0x248b04
void sub_00248A70_0x248a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248A70_0x248a70");
#endif

    switch (ctx->pc) {
        case 0x248a94u: goto label_248a94;
        case 0x248aa0u: goto label_248aa0;
        case 0x248aa8u: goto label_248aa8;
        case 0x248ac0u: goto label_248ac0;
        case 0x248ad4u: goto label_248ad4;
        default: break;
    }

    ctx->pc = 0x248a70u;

    // 0x248a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x248a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x248a74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x248a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x248a78: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x248a78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248a7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x248a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x248a80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x248a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x248a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248a88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x248a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x248a8c: 0xc049f18  jal         func_127C60
    ctx->pc = 0x248A8Cu;
    SET_GPR_U32(ctx, 31, 0x248A94u);
    ctx->pc = 0x248A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248A8Cu;
    // 0x248a90: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x248A8Cu, 0x248A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A94u;
label_248a94:
    // 0x248a94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x248a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248a98: 0xc049f18  jal         func_127C60
    ctx->pc = 0x248A98u;
    SET_GPR_U32(ctx, 31, 0x248AA0u);
    ctx->pc = 0x248A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248A98u;
    // 0x248a9c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x248A98u, 0x248AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248AA0u;
label_248aa0:
    // 0x248aa0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x248AA0u;
    {
        const bool branch_taken_0x248aa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x248aa0) {
            ctx->pc = 0x248AB0u;
            goto label_248ab0;
        }
    }
    ctx->pc = 0x248AA8u;
label_248aa8:
    // 0x248aa8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x248AA8u;
    {
        const bool branch_taken_0x248aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248AA8u;
        // 0x248aac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248aa8) {
            ctx->pc = 0x248AE8u;
            goto label_248ae8;
        }
    }
    ctx->pc = 0x248AB0u;
label_248ab0:
    // 0x248ab0: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x248AB0u;
    {
        const bool branch_taken_0x248ab0 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x248AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248AB0u;
        // 0x248ab4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ab0) {
            ctx->pc = 0x248AE4u;
            goto label_248ae4;
        }
    }
    ctx->pc = 0x248AB8u;
    // 0x248ab8: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x248ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x248abc: 0x0  nop
    ctx->pc = 0x248abcu;
    // NOP
label_248ac0:
    // 0x248ac0: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x248ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x248ac4: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x248ac4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x248ac8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x248ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x248acc: 0xc092286  jal         func_248A18
    ctx->pc = 0x248ACCu;
    SET_GPR_U32(ctx, 31, 0x248AD4u);
    ctx->pc = 0x248AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248ACCu;
    // 0x248ad0: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248A18u, 0x248ACCu, 0x248AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248AD4u;
label_248ad4:
    // 0x248ad4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x248AD4u;
    {
        const bool branch_taken_0x248ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248AD4u;
        // 0x248ad8: 0x211182a  slt         $v1, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ad4) {
            ctx->pc = 0x248AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248aa8;
        }
    }
    ctx->pc = 0x248ADCu;
    // 0x248adc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x248ADCu;
    {
        const bool branch_taken_0x248adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x248AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248ADCu;
        // 0x248ae0: 0x2501821  addu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248adc) {
            ctx->pc = 0x248AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248ac0;
        }
    }
    ctx->pc = 0x248AE4u;
label_248ae4:
    // 0x248ae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x248ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248ae8:
    // 0x248ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248aec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x248aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x248af0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x248af0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248af4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x248af4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x248af8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x248af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248afc: 0x3e00008  jr          $ra
    ctx->pc = 0x248AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248AFCu;
        // 0x248b00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248B04u;
}
