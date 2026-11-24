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

// Function: sub_001E5EE0
// Address: 0x1e5ee0 - 0x1e5f34
void sub_001E5EE0_0x1e5ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5EE0_0x1e5ee0");
#endif

    switch (ctx->pc) {
        case 0x1e5ee0u: goto label_1e5ee0;
        case 0x1e5ee4u: goto label_1e5ee4;
        case 0x1e5ee8u: goto label_1e5ee8;
        case 0x1e5eecu: goto label_1e5eec;
        case 0x1e5ef0u: goto label_1e5ef0;
        case 0x1e5ef4u: goto label_1e5ef4;
        case 0x1e5ef8u: goto label_1e5ef8;
        case 0x1e5efcu: goto label_1e5efc;
        case 0x1e5f00u: goto label_1e5f00;
        case 0x1e5f04u: goto label_1e5f04;
        case 0x1e5f08u: goto label_1e5f08;
        case 0x1e5f0cu: goto label_1e5f0c;
        case 0x1e5f10u: goto label_1e5f10;
        case 0x1e5f14u: goto label_1e5f14;
        case 0x1e5f18u: goto label_1e5f18;
        case 0x1e5f1cu: goto label_1e5f1c;
        case 0x1e5f20u: goto label_1e5f20;
        case 0x1e5f24u: goto label_1e5f24;
        case 0x1e5f28u: goto label_1e5f28;
        case 0x1e5f2cu: goto label_1e5f2c;
        case 0x1e5f30u: goto label_1e5f30;
        default: break;
    }

    ctx->pc = 0x1e5ee0u;

label_1e5ee0:
    // 0x1e5ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e5ee4:
    // 0x1e5ee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e5ee8:
    // 0x1e5ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e5eec:
    // 0x1e5eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e5eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e5ef0:
    // 0x1e5ef0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e5ef4:
    if (ctx->pc == 0x1E5EF4u) {
        ctx->pc = 0x1E5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5EF0u;
        // 0x1e5ef4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5EF8u;
        goto label_1e5ef8;
    }
    ctx->pc = 0x1E5EF0u;
    {
        const bool branch_taken_0x1e5ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5EF0u;
        // 0x1e5ef4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ef0) {
            ctx->pc = 0x1E5F20u;
            goto label_1e5f20;
        }
    }
    ctx->pc = 0x1E5EF8u;
label_1e5ef8:
    // 0x1e5ef8: 0x24426ab0  addiu       $v0, $v0, 0x6AB0
    ctx->pc = 0x1e5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
label_1e5efc:
    // 0x1e5efc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e5efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e5f00:
    // 0x1e5f00: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e5f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e5f04:
    // 0x1e5f04: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e5f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e5f08:
    // 0x1e5f08: 0x320f809  jalr        $t9
label_1e5f0c:
    if (ctx->pc == 0x1E5F0Cu) {
        ctx->pc = 0x1E5F10u;
        goto label_1e5f10;
    }
    ctx->pc = 0x1E5F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5F10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5F08u, 0x1E5F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5F10u;
label_1e5f10:
    // 0x1e5f10: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e5f14:
    if (ctx->pc == 0x1E5F14u) {
        ctx->pc = 0x1E5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F10u;
        // 0x1e5f14: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5F18u;
        goto label_1e5f18;
    }
    ctx->pc = 0x1E5F10u;
    {
        const bool branch_taken_0x1e5f10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F10u;
        // 0x1e5f14: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f10) {
            ctx->pc = 0x1E5F20u;
            goto label_1e5f20;
        }
    }
    ctx->pc = 0x1E5F18u;
label_1e5f18:
    // 0x1e5f18: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e5f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e5f1c:
    // 0x1e5f1c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e5f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e5f20:
    // 0x1e5f20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e5f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e5f24:
    // 0x1e5f24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5f28:
    // 0x1e5f28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5f2c:
    // 0x1e5f2c: 0x3e00008  jr          $ra
label_1e5f30:
    if (ctx->pc == 0x1E5F30u) {
        ctx->pc = 0x1E5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F2Cu;
        // 0x1e5f30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5F34u;
        goto label_fallthrough_0x1e5f2c;
    }
    ctx->pc = 0x1E5F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F2Cu;
        // 0x1e5f30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e5f2c:
    ctx->pc = 0x1E5F34u;
}
