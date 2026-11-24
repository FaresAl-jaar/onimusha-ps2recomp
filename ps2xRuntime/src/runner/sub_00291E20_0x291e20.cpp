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

// Function: sub_00291E20
// Address: 0x291e20 - 0x291ec0
void sub_00291E20_0x291e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291E20_0x291e20");
#endif

    switch (ctx->pc) {
        case 0x291e20u: goto label_291e20;
        case 0x291e24u: goto label_291e24;
        case 0x291e28u: goto label_291e28;
        case 0x291e2cu: goto label_291e2c;
        case 0x291e30u: goto label_291e30;
        case 0x291e34u: goto label_291e34;
        case 0x291e38u: goto label_291e38;
        case 0x291e3cu: goto label_291e3c;
        case 0x291e40u: goto label_291e40;
        case 0x291e44u: goto label_291e44;
        case 0x291e48u: goto label_291e48;
        case 0x291e4cu: goto label_291e4c;
        case 0x291e50u: goto label_291e50;
        case 0x291e54u: goto label_291e54;
        case 0x291e58u: goto label_291e58;
        case 0x291e5cu: goto label_291e5c;
        case 0x291e60u: goto label_291e60;
        case 0x291e64u: goto label_291e64;
        case 0x291e68u: goto label_291e68;
        case 0x291e6cu: goto label_291e6c;
        case 0x291e70u: goto label_291e70;
        case 0x291e74u: goto label_291e74;
        case 0x291e78u: goto label_291e78;
        case 0x291e7cu: goto label_291e7c;
        case 0x291e80u: goto label_291e80;
        case 0x291e84u: goto label_291e84;
        case 0x291e88u: goto label_291e88;
        case 0x291e8cu: goto label_291e8c;
        case 0x291e90u: goto label_291e90;
        case 0x291e94u: goto label_291e94;
        case 0x291e98u: goto label_291e98;
        case 0x291e9cu: goto label_291e9c;
        case 0x291ea0u: goto label_291ea0;
        case 0x291ea4u: goto label_291ea4;
        case 0x291ea8u: goto label_291ea8;
        case 0x291eacu: goto label_291eac;
        case 0x291eb0u: goto label_291eb0;
        case 0x291eb4u: goto label_291eb4;
        case 0x291eb8u: goto label_291eb8;
        case 0x291ebcu: goto label_291ebc;
        default: break;
    }

    ctx->pc = 0x291e20u;

label_291e20:
    // 0x291e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_291e24:
    // 0x291e24: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x291e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_291e28:
    // 0x291e28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x291e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_291e2c:
    // 0x291e2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x291e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291e30:
    // 0x291e30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_291e34:
    // 0x291e34: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x291e34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_291e38:
    // 0x291e38: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x291e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_291e3c:
    // 0x291e3c: 0x320f809  jalr        $t9
label_291e40:
    if (ctx->pc == 0x291E40u) {
        ctx->pc = 0x291E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E3Cu;
        // 0x291e40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291E44u;
        goto label_291e44;
    }
    ctx->pc = 0x291E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x291E44u);
        ctx->pc = 0x291E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E3Cu;
        // 0x291e40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291E3Cu, 0x291E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291E44u;
label_291e44:
    // 0x291e44: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x291e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_291e48:
    // 0x291e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_291e4c:
    // 0x291e4c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x291e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_291e50:
    // 0x291e50: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x291e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_291e54:
    // 0x291e54: 0x320f809  jalr        $t9
label_291e58:
    if (ctx->pc == 0x291E58u) {
        ctx->pc = 0x291E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E54u;
        // 0x291e58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291E5Cu;
        goto label_291e5c;
    }
    ctx->pc = 0x291E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x291E5Cu);
        ctx->pc = 0x291E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E54u;
        // 0x291e58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291E54u, 0x291E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291E5Cu;
label_291e5c:
    // 0x291e5c: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x291e5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_291e60:
    // 0x291e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_291e64:
    // 0x291e64: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x291e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_291e68:
    // 0x291e68: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x291e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_291e6c:
    // 0x291e6c: 0x320f809  jalr        $t9
label_291e70:
    if (ctx->pc == 0x291E70u) {
        ctx->pc = 0x291E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E6Cu;
        // 0x291e70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291E74u;
        goto label_291e74;
    }
    ctx->pc = 0x291E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x291E74u);
        ctx->pc = 0x291E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E6Cu;
        // 0x291e70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291E6Cu, 0x291E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291E74u;
label_291e74:
    // 0x291e74: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x291e74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_291e78:
    // 0x291e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_291e7c:
    // 0x291e7c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x291e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_291e80:
    // 0x291e80: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x291e80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_291e84:
    // 0x291e84: 0x320f809  jalr        $t9
label_291e88:
    if (ctx->pc == 0x291E88u) {
        ctx->pc = 0x291E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E84u;
        // 0x291e88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291E8Cu;
        goto label_291e8c;
    }
    ctx->pc = 0x291E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x291E8Cu);
        ctx->pc = 0x291E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E84u;
        // 0x291e88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291E84u, 0x291E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291E8Cu;
label_291e8c:
    // 0x291e8c: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x291e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_291e90:
    // 0x291e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_291e94:
    // 0x291e94: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x291e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_291e98:
    // 0x291e98: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x291e98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_291e9c:
    // 0x291e9c: 0x320f809  jalr        $t9
label_291ea0:
    if (ctx->pc == 0x291EA0u) {
        ctx->pc = 0x291EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E9Cu;
        // 0x291ea0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291EA4u;
        goto label_291ea4;
    }
    ctx->pc = 0x291E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x291EA4u);
        ctx->pc = 0x291EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E9Cu;
        // 0x291ea0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291E9Cu, 0x291EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291EA4u;
label_291ea4:
    // 0x291ea4: 0x92032b0d  lbu         $v1, 0x2B0D($s0)
    ctx->pc = 0x291ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11021)));
label_291ea8:
    // 0x291ea8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x291ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_291eac:
    // 0x291eac: 0xa2032b0d  sb          $v1, 0x2B0D($s0)
    ctx->pc = 0x291eacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11021), (uint8_t)GPR_U32(ctx, 3));
label_291eb0:
    // 0x291eb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x291eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_291eb4:
    // 0x291eb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_291eb8:
    // 0x291eb8: 0x3e00008  jr          $ra
label_291ebc:
    if (ctx->pc == 0x291EBCu) {
        ctx->pc = 0x291EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291EB8u;
        // 0x291ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291EC0u;
        goto label_fallthrough_0x291eb8;
    }
    ctx->pc = 0x291EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291EB8u;
        // 0x291ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x291eb8:
    ctx->pc = 0x291EC0u;
}
