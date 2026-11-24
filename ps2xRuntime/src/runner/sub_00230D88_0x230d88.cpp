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

// Function: sub_00230D88
// Address: 0x230d88 - 0x230e74
void sub_00230D88_0x230d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230D88_0x230d88");
#endif

    switch (ctx->pc) {
        case 0x230db4u: goto label_230db4;
        case 0x230dc8u: goto label_230dc8;
        case 0x230e04u: goto label_230e04;
        case 0x230e18u: goto label_230e18;
        case 0x230e20u: goto label_230e20;
        case 0x230e28u: goto label_230e28;
        case 0x230e3cu: goto label_230e3c;
        case 0x230e44u: goto label_230e44;
        case 0x230e5cu: goto label_230e5c;
        default: break;
    }

    ctx->pc = 0x230d88u;

    // 0x230d88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x230d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x230d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230d94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x230d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d9c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x230d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230da0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x230da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230da4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x230da8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x230da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x230dac: 0xc08bbbc  jal         func_22EEF0
    ctx->pc = 0x230DACu;
    SET_GPR_U32(ctx, 31, 0x230DB4u);
    ctx->pc = 0x230DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DACu;
    // 0x230db0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EEF0u, 0x230DACu, 0x230DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DB4u;
label_230db4:
    // 0x230db4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x230db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x230db8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230DB8u;
    {
        const bool branch_taken_0x230db8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x230DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DB8u;
        // 0x230dbc: 0x2484a778  addiu       $a0, $a0, -0x5888 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230db8) {
            ctx->pc = 0x230DD0u;
            goto label_230dd0;
        }
    }
    ctx->pc = 0x230DC0u;
    // 0x230dc0: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x230DC0u;
    SET_GPR_U32(ctx, 31, 0x230DC8u);
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x230DC0u, 0x230DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DC8u;
label_230dc8:
    // 0x230dc8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x230DC8u;
    {
        const bool branch_taken_0x230dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DC8u;
        // 0x230dcc: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230dc8) {
            ctx->pc = 0x230E60u;
            goto label_230e60;
        }
    }
    ctx->pc = 0x230DD0u;
label_230dd0:
    // 0x230dd0: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x230dd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x230dd4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x230dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230dd8: 0x10710020  beq         $v1, $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x230DD8u;
    {
        const bool branch_taken_0x230dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x230DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DD8u;
        // 0x230ddc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230dd8) {
            ctx->pc = 0x230E5Cu;
            goto label_230e5c;
        }
    }
    ctx->pc = 0x230DE0u;
    // 0x230de0: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230DE0u;
    {
        const bool branch_taken_0x230de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x230de0) {
            ctx->pc = 0x230DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230DE0u;
            // 0x230de4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230DF0u;
            goto label_230df0;
        }
    }
    ctx->pc = 0x230DE8u;
    // 0x230de8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x230DE8u;
    {
        const bool branch_taken_0x230de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DE8u;
        // 0x230dec: 0xa2110001  sb          $s1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230de8) {
            ctx->pc = 0x230E5Cu;
            goto label_230e5c;
        }
    }
    ctx->pc = 0x230DF0u;
label_230df0:
    // 0x230df0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x230DF0u;
    {
        const bool branch_taken_0x230df0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x230df0) {
            ctx->pc = 0x230E10u;
            goto label_230e10;
        }
    }
    ctx->pc = 0x230DF8u;
    // 0x230df8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x230df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x230dfc: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x230DFCu;
    SET_GPR_U32(ctx, 31, 0x230E04u);
    ctx->pc = 0x230E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DFCu;
    // 0x230e00: 0x2484a7a0  addiu       $a0, $a0, -0x5860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x230DFCu, 0x230E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E04u;
label_230e04:
    // 0x230e04: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x230E04u;
    {
        const bool branch_taken_0x230e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E04u;
        // 0x230e08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e04) {
            ctx->pc = 0x230E60u;
            goto label_230e60;
        }
    }
    ctx->pc = 0x230E0Cu;
    // 0x230e0c: 0x0  nop
    ctx->pc = 0x230e0cu;
    // NOP
label_230e10:
    // 0x230e10: 0xc08de38  jal         func_2378E0
    ctx->pc = 0x230E10u;
    SET_GPR_U32(ctx, 31, 0x230E18u);
    ctx->pc = 0x2378E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2378E0u, 0x230E10u, 0x230E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E18u;
label_230e18:
    // 0x230e18: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x230E18u;
    SET_GPR_U32(ctx, 31, 0x230E20u);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x230E18u, 0x230E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E20u;
label_230e20:
    // 0x230e20: 0xc08ddae  jal         func_2376B8
    ctx->pc = 0x230E20u;
    SET_GPR_U32(ctx, 31, 0x230E28u);
    ctx->pc = 0x230E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E20u;
    // 0x230e24: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2376B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2376B8u, 0x230E20u, 0x230E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E28u;
label_230e28:
    // 0x230e28: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x230e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x230e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e30: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x230e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230e34: 0xc08c1a6  jal         func_230698
    ctx->pc = 0x230E34u;
    SET_GPR_U32(ctx, 31, 0x230E3Cu);
    ctx->pc = 0x230E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E34u;
    // 0x230e38: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230698u, 0x230E34u, 0x230E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E3Cu;
label_230e3c:
    // 0x230e3c: 0xc08b52e  jal         func_22D4B8
    ctx->pc = 0x230E3Cu;
    SET_GPR_U32(ctx, 31, 0x230E44u);
    ctx->pc = 0x230E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E3Cu;
    // 0x230e40: 0xa2110001  sb          $s1, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x230E3Cu, 0x230E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E44u;
label_230e44:
    // 0x230e44: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x230e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230e48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x230e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230e4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x230e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e50: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x230e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230e54: 0xc08bbbc  jal         func_22EEF0
    ctx->pc = 0x230E54u;
    SET_GPR_U32(ctx, 31, 0x230E5Cu);
    ctx->pc = 0x230E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E54u;
    // 0x230e58: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EEF0u, 0x230E54u, 0x230E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E5Cu;
label_230e5c:
    // 0x230e5c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x230e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_230e60:
    // 0x230e60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230e64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230e64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230e68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x230e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x230E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E6Cu;
        // 0x230e70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230E74u;
}
