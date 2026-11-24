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

// Function: sub_0033CAF0
// Address: 0x33caf0 - 0x33cb54
void sub_0033CAF0_0x33caf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CAF0_0x33caf0");
#endif

    switch (ctx->pc) {
        case 0x33cb04u: goto label_33cb04;
        case 0x33cb30u: goto label_33cb30;
        case 0x33cb44u: goto label_33cb44;
        default: break;
    }

    ctx->pc = 0x33caf0u;

    // 0x33caf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33caf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33caf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33caf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33caf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33caf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33cafc: 0xc097f7c  jal         func_25FDF0
    ctx->pc = 0x33CAFCu;
    SET_GPR_U32(ctx, 31, 0x33CB04u);
    ctx->pc = 0x33CB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CAFCu;
    // 0x33cb00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDF0u, 0x33CAFCu, 0x33CB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CB04u;
label_33cb04:
    // 0x33cb04: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x33cb04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x33cb08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33cb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cb0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33cb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cb10: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x33cb10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33cb14: 0x34420046  ori         $v0, $v0, 0x46
    ctx->pc = 0x33cb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)70);
    // 0x33cb18: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x33cb18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x33cb1c: 0xae0028d0  sw          $zero, 0x28D0($s0)
    ctx->pc = 0x33cb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10448), GPR_U32(ctx, 0));
    // 0x33cb20: 0xae0028d4  sw          $zero, 0x28D4($s0)
    ctx->pc = 0x33cb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10452), GPR_U32(ctx, 0));
    // 0x33cb24: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x33cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x33cb28: 0xc060a74  jal         func_1829D0
    ctx->pc = 0x33CB28u;
    SET_GPR_U32(ctx, 31, 0x33CB30u);
    ctx->pc = 0x33CB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CB28u;
    // 0x33cb2c: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1829D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1829D0u, 0x33CB28u, 0x33CB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CB30u;
label_33cb30:
    // 0x33cb30: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x33cb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x33cb34: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x33cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x33cb38: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x33cb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x33cb3c: 0xc060b00  jal         func_182C00
    ctx->pc = 0x33CB3Cu;
    SET_GPR_U32(ctx, 31, 0x33CB44u);
    ctx->pc = 0x33CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CB3Cu;
    // 0x33cb40: 0x3446fe01  ori         $a2, $v0, 0xFE01 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65025);
    ctx->in_delay_slot = false;
    ctx->pc = 0x182C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182C00u, 0x33CB3Cu, 0x33CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CB44u;
label_33cb44:
    // 0x33cb44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33cb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33cb48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33cb48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x33CB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB4Cu;
        // 0x33cb50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CB54u;
}
