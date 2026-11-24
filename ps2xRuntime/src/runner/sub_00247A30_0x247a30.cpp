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

// Function: sub_00247A30
// Address: 0x247a30 - 0x247b20
void sub_00247A30_0x247a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247A30_0x247a30");
#endif

    switch (ctx->pc) {
        case 0x247a70u: goto label_247a70;
        case 0x247a7cu: goto label_247a7c;
        case 0x247a8cu: goto label_247a8c;
        case 0x247a90u: goto label_247a90;
        case 0x247ac8u: goto label_247ac8;
        default: break;
    }

    ctx->pc = 0x247a30u;

    // 0x247a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247a34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x247a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x247a38: 0x3c13004d  lui         $s3, 0x4D
    ctx->pc = 0x247a38u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)77 << 16));
    // 0x247a3c: 0x8e62f23c  lw          $v0, -0xDC4($s3)
    ctx->pc = 0x247a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4CF23Cu));
    // 0x247a40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247a44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x247a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x247a48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x247a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x247a4c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x247a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x247a50: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x247A50u;
    {
        const bool branch_taken_0x247a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A50u;
        // 0x247a54: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a50) {
            ctx->pc = 0x247AF0u;
            goto label_247af0;
        }
    }
    ctx->pc = 0x247A58u;
    // 0x247a58: 0x3c10004d  lui         $s0, 0x4D
    ctx->pc = 0x247a58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
    // 0x247a5c: 0x3c12004d  lui         $s2, 0x4D
    ctx->pc = 0x247a5cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)77 << 16));
    // 0x247a60: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x247a60u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
    // 0x247a64: 0x2611fac0  addiu       $s1, $s0, -0x540
    ctx->pc = 0x247a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965952));
    // 0x247a68: 0x8e45f224  lw          $a1, -0xDDC($s2)
    ctx->pc = 0x247a68u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4CF224u));
    // 0x247a6c: 0x0  nop
    ctx->pc = 0x247a6cu;
    // NOP
label_247a70:
    // 0x247a70: 0x2604fac0  addiu       $a0, $s0, -0x540
    ctx->pc = 0x247a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965952));
    // 0x247a74: 0xc044752  jal         func_111D48
    ctx->pc = 0x247A74u;
    SET_GPR_U32(ctx, 31, 0x247A7Cu);
    ctx->pc = 0x247A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247A74u;
    // 0x247a78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D48u, 0x247A74u, 0x247A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A7Cu;
label_247a7c:
    // 0x247a7c: 0x443000c  bgezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x247A7Cu;
    {
        const bool branch_taken_0x247a7c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x247a7c) {
            ctx->pc = 0x247A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247A7Cu;
            // 0x247a80: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247AB0u;
            goto label_247ab0;
        }
    }
    ctx->pc = 0x247A84u;
    // 0x247a84: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x247A84u;
    SET_GPR_U32(ctx, 31, 0x247A8Cu);
    ctx->pc = 0x247A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247A84u;
    // 0x247a88: 0x2684cde8  addiu       $a0, $s4, -0x3218 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x247A84u, 0x247A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A8Cu;
label_247a8c:
    // 0x247a8c: 0x0  nop
    ctx->pc = 0x247a8cu;
    // NOP
label_247a90:
    // 0x247a90: 0x0  nop
    ctx->pc = 0x247a90u;
    // NOP
    // 0x247a94: 0x0  nop
    ctx->pc = 0x247a94u;
    // NOP
    // 0x247a98: 0x0  nop
    ctx->pc = 0x247a98u;
    // NOP
    // 0x247a9c: 0x0  nop
    ctx->pc = 0x247a9cu;
    // NOP
    // 0x247aa0: 0x0  nop
    ctx->pc = 0x247aa0u;
    // NOP
    // 0x247aa4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x247AA4u;
    {
        const bool branch_taken_0x247aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247aa4) {
            ctx->pc = 0x247A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247a90;
        }
    }
    ctx->pc = 0x247AACu;
    // 0x247aac: 0x0  nop
    ctx->pc = 0x247aacu;
    // NOP
label_247ab0:
    // 0x247ab0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x247AB0u;
    {
        const bool branch_taken_0x247ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247AB0u;
        // 0x247ab4: 0x2663f23c  addiu       $v1, $s3, -0xDC4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ab0) {
            ctx->pc = 0x247AF4u;
            goto label_247af4;
        }
    }
    ctx->pc = 0x247AB8u;
    // 0x247ab8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x247ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x247abc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x247abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x247ac0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x247ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x247ac4: 0x0  nop
    ctx->pc = 0x247ac4u;
    // NOP
label_247ac8:
    // 0x247ac8: 0x0  nop
    ctx->pc = 0x247ac8u;
    // NOP
    // 0x247acc: 0x0  nop
    ctx->pc = 0x247accu;
    // NOP
    // 0x247ad0: 0x0  nop
    ctx->pc = 0x247ad0u;
    // NOP
    // 0x247ad4: 0x0  nop
    ctx->pc = 0x247ad4u;
    // NOP
    // 0x247ad8: 0x0  nop
    ctx->pc = 0x247ad8u;
    // NOP
    // 0x247adc: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x247ADCu;
    {
        const bool branch_taken_0x247adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x247adc) {
            ctx->pc = 0x247AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247ADCu;
            // 0x247ae0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247ac8;
        }
    }
    ctx->pc = 0x247AE4u;
    // 0x247ae4: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x247AE4u;
    {
        const bool branch_taken_0x247ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247AE4u;
        // 0x247ae8: 0x8e45f224  lw          $a1, -0xDDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ae4) {
            ctx->pc = 0x247A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247a70;
        }
    }
    ctx->pc = 0x247AECu;
    // 0x247aec: 0x0  nop
    ctx->pc = 0x247aecu;
    // NOP
label_247af0:
    // 0x247af0: 0x2663f23c  addiu       $v1, $s3, -0xDC4
    ctx->pc = 0x247af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963772));
label_247af4:
    // 0x247af4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x247af4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x247af8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x247af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x247afc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247b00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x247b00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247b04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x247b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x247b08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x247b08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247b0c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x247b0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247b10: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x247b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b14: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x247b14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x247b18: 0x3e00008  jr          $ra
    ctx->pc = 0x247B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B18u;
        // 0x247b1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247B20u;
}
