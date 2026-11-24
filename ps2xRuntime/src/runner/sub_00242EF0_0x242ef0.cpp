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

// Function: sub_00242EF0
// Address: 0x242ef0 - 0x242f50
void sub_00242EF0_0x242ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242EF0_0x242ef0");
#endif

    switch (ctx->pc) {
        case 0x242ef0u: goto label_242ef0;
        case 0x242ef4u: goto label_242ef4;
        case 0x242ef8u: goto label_242ef8;
        case 0x242efcu: goto label_242efc;
        case 0x242f00u: goto label_242f00;
        case 0x242f04u: goto label_242f04;
        case 0x242f08u: goto label_242f08;
        case 0x242f0cu: goto label_242f0c;
        case 0x242f10u: goto label_242f10;
        case 0x242f14u: goto label_242f14;
        case 0x242f18u: goto label_242f18;
        case 0x242f1cu: goto label_242f1c;
        case 0x242f20u: goto label_242f20;
        case 0x242f24u: goto label_242f24;
        case 0x242f28u: goto label_242f28;
        case 0x242f2cu: goto label_242f2c;
        case 0x242f30u: goto label_242f30;
        case 0x242f34u: goto label_242f34;
        case 0x242f38u: goto label_242f38;
        case 0x242f3cu: goto label_242f3c;
        case 0x242f40u: goto label_242f40;
        case 0x242f44u: goto label_242f44;
        case 0x242f48u: goto label_242f48;
        case 0x242f4cu: goto label_242f4c;
        default: break;
    }

    ctx->pc = 0x242ef0u;

label_242ef0:
    // 0x242ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_242ef4:
    // 0x242ef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_242ef8:
    // 0x242ef8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x242ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_242efc:
    // 0x242efc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x242efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_242f00:
    // 0x242f00: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x242f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_242f04:
    // 0x242f04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x242f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_242f08:
    // 0x242f08: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x242f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_242f0c:
    // 0x242f0c: 0x40f809  jalr        $v0
label_242f10:
    if (ctx->pc == 0x242F10u) {
        ctx->pc = 0x242F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F0Cu;
        // 0x242f10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F14u;
        goto label_242f14;
    }
    ctx->pc = 0x242F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x242F14u);
        ctx->pc = 0x242F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F0Cu;
        // 0x242f10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242F0Cu, 0x242F14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242F14u;
label_242f14:
    // 0x242f14: 0x28420024  slti        $v0, $v0, 0x24
    ctx->pc = 0x242f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)36) ? 1 : 0);
label_242f18:
    // 0x242f18: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_242f1c:
    if (ctx->pc == 0x242F1Cu) {
        ctx->pc = 0x242F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F18u;
        // 0x242f1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F20u;
        goto label_242f20;
    }
    ctx->pc = 0x242F18u;
    {
        const bool branch_taken_0x242f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242f18) {
            ctx->pc = 0x242F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242F18u;
            // 0x242f1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242F44u;
            goto label_242f44;
        }
    }
    ctx->pc = 0x242F20u;
label_242f20:
    // 0x242f20: 0xc08fcda  jal         func_23F368
label_242f24:
    if (ctx->pc == 0x242F24u) {
        ctx->pc = 0x242F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F20u;
        // 0x242f24: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F28u;
        goto label_242f28;
    }
    ctx->pc = 0x242F20u;
    SET_GPR_U32(ctx, 31, 0x242F28u);
    ctx->pc = 0x242F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242F20u;
    // 0x242f24: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F368u, 0x242F20u, 0x242F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F28u;
label_242f28:
    // 0x242f28: 0xc08fd44  jal         func_23F510
label_242f2c:
    if (ctx->pc == 0x242F2Cu) {
        ctx->pc = 0x242F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F28u;
        // 0x242f2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F30u;
        goto label_242f30;
    }
    ctx->pc = 0x242F28u;
    SET_GPR_U32(ctx, 31, 0x242F30u);
    ctx->pc = 0x242F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242F28u;
    // 0x242f2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F510u, 0x242F28u, 0x242F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F30u;
label_242f30:
    // 0x242f30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x242f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242f34:
    // 0x242f34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x242f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_242f38:
    // 0x242f38: 0xa203000b  sb          $v1, 0xB($s0)
    ctx->pc = 0x242f38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 3));
label_242f3c:
    // 0x242f3c: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x242f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
label_242f40:
    // 0x242f40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_242f44:
    // 0x242f44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x242f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_242f48:
    // 0x242f48: 0x3e00008  jr          $ra
label_242f4c:
    if (ctx->pc == 0x242F4Cu) {
        ctx->pc = 0x242F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F48u;
        // 0x242f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F50u;
        goto label_fallthrough_0x242f48;
    }
    ctx->pc = 0x242F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F48u;
        // 0x242f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x242f48:
    ctx->pc = 0x242F50u;
}
