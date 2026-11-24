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

// Function: sub_0025EE30
// Address: 0x25ee30 - 0x25ee98
void sub_0025EE30_0x25ee30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EE30_0x25ee30");
#endif

    switch (ctx->pc) {
        case 0x25ee44u: goto label_25ee44;
        case 0x25ee54u: goto label_25ee54;
        case 0x25ee6cu: goto label_25ee6c;
        case 0x25ee78u: goto label_25ee78;
        case 0x25ee88u: goto label_25ee88;
        default: break;
    }

    ctx->pc = 0x25ee30u;

    // 0x25ee30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ee30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ee34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25ee34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25ee38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ee38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25ee3c: 0xc097b7c  jal         func_25EDF0
    ctx->pc = 0x25EE3Cu;
    SET_GPR_U32(ctx, 31, 0x25EE44u);
    ctx->pc = 0x25EE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE3Cu;
    // 0x25ee40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EDF0u, 0x25EE3Cu, 0x25EE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE44u;
label_25ee44:
    // 0x25ee44: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x25ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x25ee48: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x25ee48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25ee4c: 0xc07ba50  jal         func_1EE940
    ctx->pc = 0x25EE4Cu;
    SET_GPR_U32(ctx, 31, 0x25EE54u);
    ctx->pc = 0x25EE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE4Cu;
    // 0x25ee50: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE940u, 0x25EE4Cu, 0x25EE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE54u;
label_25ee54:
    // 0x25ee54: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x25ee54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x25ee58: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25ee58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25ee5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EE5Cu;
    {
        const bool branch_taken_0x25ee5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ee5c) {
            ctx->pc = 0x25EE70u;
            goto label_25ee70;
        }
    }
    ctx->pc = 0x25EE64u;
    // 0x25ee64: 0xc07bc24  jal         func_1EF090
    ctx->pc = 0x25EE64u;
    SET_GPR_U32(ctx, 31, 0x25EE6Cu);
    ctx->pc = 0x25EE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE64u;
    // 0x25ee68: 0x8e0400c0  lw          $a0, 0xC0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF090u, 0x25EE64u, 0x25EE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE6Cu;
label_25ee6c:
    // 0x25ee6c: 0x0  nop
    ctx->pc = 0x25ee6cu;
    // NOP
label_25ee70:
    // 0x25ee70: 0xc07bc10  jal         func_1EF040
    ctx->pc = 0x25EE70u;
    SET_GPR_U32(ctx, 31, 0x25EE78u);
    ctx->pc = 0x25EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE70u;
    // 0x25ee74: 0x8e0400c0  lw          $a0, 0xC0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF040u, 0x25EE70u, 0x25EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE78u;
label_25ee78:
    // 0x25ee78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EE78u;
    {
        const bool branch_taken_0x25ee78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE78u;
        // 0x25ee7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee78) {
            ctx->pc = 0x25EE88u;
            goto label_25ee88;
        }
    }
    ctx->pc = 0x25EE80u;
    // 0x25ee80: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x25EE80u;
    SET_GPR_U32(ctx, 31, 0x25EE88u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x25EE80u, 0x25EE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE88u;
label_25ee88:
    // 0x25ee88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25ee88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ee8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ee8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ee90: 0x3e00008  jr          $ra
    ctx->pc = 0x25EE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE90u;
        // 0x25ee94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EE98u;
}
