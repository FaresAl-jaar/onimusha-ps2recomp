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

// Function: sub_00206B28
// Address: 0x206b28 - 0x206bb8
void sub_00206B28_0x206b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206B28_0x206b28");
#endif

    switch (ctx->pc) {
        case 0x206b40u: goto label_206b40;
        case 0x206b68u: goto label_206b68;
        case 0x206b7cu: goto label_206b7c;
        case 0x206b84u: goto label_206b84;
        case 0x206b98u: goto label_206b98;
        case 0x206ba0u: goto label_206ba0;
        default: break;
    }

    ctx->pc = 0x206b28u;

    // 0x206b28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x206b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x206b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206b30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x206b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x206b34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x206b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x206b38: 0xc081b1a  jal         func_206C68
    ctx->pc = 0x206B38u;
    SET_GPR_U32(ctx, 31, 0x206B40u);
    ctx->pc = 0x206C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206C68u, 0x206B38u, 0x206B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B40u;
label_206b40:
    // 0x206b40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x206b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b44: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x206b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x206b48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206b4c: 0x16030015  bne         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x206B4Cu;
    {
        const bool branch_taken_0x206b4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x206B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B4Cu;
        // 0x206b50: 0x24519f80  addiu       $s1, $v0, -0x6080 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b4c) {
            ctx->pc = 0x206BA4u;
            goto label_206ba4;
        }
    }
    ctx->pc = 0x206B54u;
    // 0x206b54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x206b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x206b58: 0x50500013  beql        $v0, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x206B58u;
    {
        const bool branch_taken_0x206b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x206b58) {
            ctx->pc = 0x206B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206B58u;
            // 0x206b5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206BA8u;
            goto label_206ba8;
        }
    }
    ctx->pc = 0x206B60u;
    // 0x206b60: 0xc081b3c  jal         func_206CF0
    ctx->pc = 0x206B60u;
    SET_GPR_U32(ctx, 31, 0x206B68u);
    ctx->pc = 0x206CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206CF0u, 0x206B60u, 0x206B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B68u;
label_206b68:
    // 0x206b68: 0x3c060087  lui         $a2, 0x87
    ctx->pc = 0x206b68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)135 << 16));
    // 0x206b6c: 0x24c67a40  addiu       $a2, $a2, 0x7A40
    ctx->pc = 0x206b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31296));
    // 0x206b70: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x206b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x206b74: 0xc081b44  jal         func_206D10
    ctx->pc = 0x206B74u;
    SET_GPR_U32(ctx, 31, 0x206B7Cu);
    ctx->pc = 0x206B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B74u;
    // 0x206b78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206D10u, 0x206B74u, 0x206B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B7Cu;
label_206b7c:
    // 0x206b7c: 0xc081bba  jal         func_206EE8
    ctx->pc = 0x206B7Cu;
    SET_GPR_U32(ctx, 31, 0x206B84u);
    ctx->pc = 0x206B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B7Cu;
    // 0x206b80: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206EE8u, 0x206B7Cu, 0x206B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B84u;
label_206b84:
    // 0x206b84: 0x3c040088  lui         $a0, 0x88
    ctx->pc = 0x206b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)136 << 16));
    // 0x206b88: 0x2484ba40  addiu       $a0, $a0, -0x45C0
    ctx->pc = 0x206b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949440));
    // 0x206b8c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x206b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x206b90: 0xc081b7c  jal         func_206DF0
    ctx->pc = 0x206B90u;
    SET_GPR_U32(ctx, 31, 0x206B98u);
    ctx->pc = 0x206B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B90u;
    // 0x206b94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206DF0u, 0x206B90u, 0x206B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B98u;
label_206b98:
    // 0x206b98: 0xc081bba  jal         func_206EE8
    ctx->pc = 0x206B98u;
    SET_GPR_U32(ctx, 31, 0x206BA0u);
    ctx->pc = 0x206B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B98u;
    // 0x206b9c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206EE8u, 0x206B98u, 0x206BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206BA0u;
label_206ba0:
    // 0x206ba0: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x206ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_206ba4:
    // 0x206ba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206ba8:
    // 0x206ba8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x206ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206bac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x206bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x206BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BB0u;
        // 0x206bb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206BB8u;
}
