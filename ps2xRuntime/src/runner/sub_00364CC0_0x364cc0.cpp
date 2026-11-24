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

// Function: sub_00364CC0
// Address: 0x364cc0 - 0x364d38
void sub_00364CC0_0x364cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364CC0_0x364cc0");
#endif

    switch (ctx->pc) {
        case 0x364ce8u: goto label_364ce8;
        case 0x364d0cu: goto label_364d0c;
        case 0x364d1cu: goto label_364d1c;
        case 0x364d28u: goto label_364d28;
        default: break;
    }

    ctx->pc = 0x364cc0u;

    // 0x364cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x364cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x364cc4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x364cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x364cc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x364cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x364ccc: 0x2442a890  addiu       $v0, $v0, -0x5770
    ctx->pc = 0x364cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944912));
    // 0x364cd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x364cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x364cd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x364cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364cd8: 0x93838bd0  lbu         $v1, -0x7430($gp)
    ctx->pc = 0x364cd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937552)));
    // 0x364cdc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x364cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x364ce0: 0xc0d8f34  jal         func_363CD0
    ctx->pc = 0x364CE0u;
    SET_GPR_U32(ctx, 31, 0x364CE8u);
    ctx->pc = 0x364CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364CE0u;
    // 0x364ce4: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363CD0u, 0x364CE0u, 0x364CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364CE8u;
label_364ce8:
    // 0x364ce8: 0x83848bdc  lb          $a0, -0x7424($gp)
    ctx->pc = 0x364ce8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937564)));
    // 0x364cec: 0xa3828a54  sb          $v0, -0x75AC($gp)
    ctx->pc = 0x364cecu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937172), (uint8_t)GPR_U32(ctx, 2));
    // 0x364cf0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x364cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x364cf4: 0x2442a8a8  addiu       $v0, $v0, -0x5758
    ctx->pc = 0x364cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944936));
    // 0x364cf8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x364cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x364cfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x364cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x364d00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x364d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x364d04: 0xc0d8f34  jal         func_363CD0
    ctx->pc = 0x364D04u;
    SET_GPR_U32(ctx, 31, 0x364D0Cu);
    ctx->pc = 0x364D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364D04u;
    // 0x364d08: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363CD0u, 0x364D04u, 0x364D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D0Cu;
label_364d0c:
    // 0x364d0c: 0x93858bdc  lbu         $a1, -0x7424($gp)
    ctx->pc = 0x364d0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937564)));
    // 0x364d10: 0x93848bd0  lbu         $a0, -0x7430($gp)
    ctx->pc = 0x364d10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937552)));
    // 0x364d14: 0xc0b9dc0  jal         func_2E7700
    ctx->pc = 0x364D14u;
    SET_GPR_U32(ctx, 31, 0x364D1Cu);
    ctx->pc = 0x364D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364D14u;
    // 0x364d18: 0xa3828a55  sb          $v0, -0x75AB($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937173), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7700u, 0x364D14u, 0x364D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D1Cu;
label_364d1c:
    // 0x364d1c: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x364d1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x364d20: 0xc054048  jal         func_150120
    ctx->pc = 0x364D20u;
    SET_GPR_U32(ctx, 31, 0x364D28u);
    ctx->pc = 0x364D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364D20u;
    // 0x364d24: 0x92050006  lbu         $a1, 0x6($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150120u, 0x364D20u, 0x364D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D28u;
label_364d28:
    // 0x364d28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x364d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364d2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x364d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364d30: 0x3e00008  jr          $ra
    ctx->pc = 0x364D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364D30u;
        // 0x364d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364D38u;
}
