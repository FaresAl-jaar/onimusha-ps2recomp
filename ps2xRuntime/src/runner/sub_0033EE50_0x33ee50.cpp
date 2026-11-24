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

// Function: sub_0033EE50
// Address: 0x33ee50 - 0x33ef18
void sub_0033EE50_0x33ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EE50_0x33ee50");
#endif

    switch (ctx->pc) {
        case 0x33ee64u: goto label_33ee64;
        case 0x33ee74u: goto label_33ee74;
        case 0x33ee84u: goto label_33ee84;
        case 0x33ee98u: goto label_33ee98;
        case 0x33eea8u: goto label_33eea8;
        case 0x33eeb0u: goto label_33eeb0;
        case 0x33eed4u: goto label_33eed4;
        case 0x33ef08u: goto label_33ef08;
        default: break;
    }

    ctx->pc = 0x33ee50u;

    // 0x33ee50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33ee54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33ee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33ee58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33ee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33ee5c: 0xc0cfbe0  jal         func_33EF80
    ctx->pc = 0x33EE5Cu;
    SET_GPR_U32(ctx, 31, 0x33EE64u);
    ctx->pc = 0x33EE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EE5Cu;
    // 0x33ee60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EF80u, 0x33EE5Cu, 0x33EE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EE64u;
label_33ee64:
    // 0x33ee64: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x33EE64u;
    {
        const bool branch_taken_0x33ee64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ee64) {
            ctx->pc = 0x33EF08u;
            goto label_33ef08;
        }
    }
    ctx->pc = 0x33EE6Cu;
    // 0x33ee6c: 0xc0c7fc0  jal         func_31FF00
    ctx->pc = 0x33EE6Cu;
    SET_GPR_U32(ctx, 31, 0x33EE74u);
    ctx->pc = 0x33EE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EE6Cu;
    // 0x33ee70: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FF00u, 0x33EE6Cu, 0x33EE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EE74u;
label_33ee74:
    // 0x33ee74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33EE74u;
    {
        const bool branch_taken_0x33ee74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE74u;
        // 0x33ee78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ee74) {
            ctx->pc = 0x33EE90u;
            goto label_33ee90;
        }
    }
    ctx->pc = 0x33EE7Cu;
    // 0x33ee7c: 0xc0cfb84  jal         func_33EE10
    ctx->pc = 0x33EE7Cu;
    SET_GPR_U32(ctx, 31, 0x33EE84u);
    ctx->pc = 0x33EE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EE10u, 0x33EE7Cu, 0x33EE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EE84u;
label_33ee84:
    // 0x33ee84: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x33EE84u;
    {
        const bool branch_taken_0x33ee84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ee84) {
            ctx->pc = 0x33EF08u;
            goto label_33ef08;
        }
    }
    ctx->pc = 0x33EE8Cu;
    // 0x33ee8c: 0x0  nop
    ctx->pc = 0x33ee8cu;
    // NOP
label_33ee90:
    // 0x33ee90: 0xc0c7fd8  jal         func_31FF60
    ctx->pc = 0x33EE90u;
    SET_GPR_U32(ctx, 31, 0x33EE98u);
    ctx->pc = 0x33EE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EE90u;
    // 0x33ee94: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FF60u, 0x33EE90u, 0x33EE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EE98u;
label_33ee98:
    // 0x33ee98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33EE98u;
    {
        const bool branch_taken_0x33ee98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ee98) {
            ctx->pc = 0x33EEB8u;
            goto label_33eeb8;
        }
    }
    ctx->pc = 0x33EEA0u;
    // 0x33eea0: 0xc0c7fdc  jal         func_31FF70
    ctx->pc = 0x33EEA0u;
    SET_GPR_U32(ctx, 31, 0x33EEA8u);
    ctx->pc = 0x33EEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EEA0u;
    // 0x33eea4: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FF70u, 0x33EEA0u, 0x33EEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EEA8u;
label_33eea8:
    // 0x33eea8: 0xc0cfb84  jal         func_33EE10
    ctx->pc = 0x33EEA8u;
    SET_GPR_U32(ctx, 31, 0x33EEB0u);
    ctx->pc = 0x33EEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EEA8u;
    // 0x33eeac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EE10u, 0x33EEA8u, 0x33EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EEB0u;
label_33eeb0:
    // 0x33eeb0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33EEB0u;
    {
        const bool branch_taken_0x33eeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33eeb0) {
            ctx->pc = 0x33EED8u;
            goto label_33eed8;
        }
    }
    ctx->pc = 0x33EEB8u;
label_33eeb8:
    // 0x33eeb8: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x33eeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x33eebc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33eec0: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x33eec0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x33eec4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33EEC4u;
    {
        const bool branch_taken_0x33eec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x33EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EEC4u;
        // 0x33eec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eec4) {
            ctx->pc = 0x33EED8u;
            goto label_33eed8;
        }
    }
    ctx->pc = 0x33EECCu;
    // 0x33eecc: 0xc0cfb84  jal         func_33EE10
    ctx->pc = 0x33EECCu;
    SET_GPR_U32(ctx, 31, 0x33EED4u);
    ctx->pc = 0x33EE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EE10u, 0x33EECCu, 0x33EED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EED4u;
label_33eed4:
    // 0x33eed4: 0x0  nop
    ctx->pc = 0x33eed4u;
    // NOP
label_33eed8:
    // 0x33eed8: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x33eed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x33eedc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x33eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33eee0: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x33eee0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33eee4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33EEE4u;
    {
        const bool branch_taken_0x33eee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33eee4) {
            ctx->pc = 0x33EEF4u;
            goto label_33eef4;
        }
    }
    ctx->pc = 0x33EEECu;
    // 0x33eeec: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x33eeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x33eef0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x33eef0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_33eef4:
    // 0x33eef4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33EEF4u;
    {
        const bool branch_taken_0x33eef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33eef4) {
            ctx->pc = 0x33EF08u;
            goto label_33ef08;
        }
    }
    ctx->pc = 0x33EEFCu;
    // 0x33eefc: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x33eefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x33ef00: 0xc0cfbc8  jal         func_33EF20
    ctx->pc = 0x33EF00u;
    SET_GPR_U32(ctx, 31, 0x33EF08u);
    ctx->pc = 0x33EF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EF00u;
    // 0x33ef04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EF20u, 0x33EF00u, 0x33EF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EF08u;
label_33ef08:
    // 0x33ef08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33ef08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ef0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33ef0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ef10: 0x3e00008  jr          $ra
    ctx->pc = 0x33EF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EF10u;
        // 0x33ef14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EF18u;
}
