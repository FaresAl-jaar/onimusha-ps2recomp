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

// Function: sub_0010A9F8
// Address: 0x10a9f8 - 0x10aa84
void sub_0010A9F8_0x10a9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A9F8_0x10a9f8");
#endif

    switch (ctx->pc) {
        case 0x10aa10u: goto label_10aa10;
        case 0x10aa1cu: goto label_10aa1c;
        case 0x10aa2cu: goto label_10aa2c;
        case 0x10aa38u: goto label_10aa38;
        case 0x10aa44u: goto label_10aa44;
        case 0x10aa54u: goto label_10aa54;
        case 0x10aa64u: goto label_10aa64;
        case 0x10aa70u: goto label_10aa70;
        default: break;
    }

    ctx->pc = 0x10a9f8u;

    // 0x10a9f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a9fc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10a9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10aa00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10aa04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10aa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10aa08: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10AA08u;
    SET_GPR_U32(ctx, 31, 0x10AA10u);
    ctx->pc = 0x10AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA08u;
    // 0x10aa0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10AA08u, 0x10AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA10u;
label_10aa10:
    // 0x10aa10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aa10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa14: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10AA14u;
    SET_GPR_U32(ctx, 31, 0x10AA1Cu);
    ctx->pc = 0x10AA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA14u;
    // 0x10aa18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10AA14u, 0x10AA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA1Cu;
label_10aa1c:
    // 0x10aa1c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10AA1Cu;
    {
        const bool branch_taken_0x10aa1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA1Cu;
        // 0x10aa20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa1c) {
            ctx->pc = 0x10AA48u;
            goto label_10aa48;
        }
    }
    ctx->pc = 0x10AA24u;
    // 0x10aa24: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10AA24u;
    SET_GPR_U32(ctx, 31, 0x10AA2Cu);
    ctx->pc = 0x10AA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA24u;
    // 0x10aa28: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10AA24u, 0x10AA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA2Cu;
label_10aa2c:
    // 0x10aa2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa30: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10AA30u;
    SET_GPR_U32(ctx, 31, 0x10AA38u);
    ctx->pc = 0x10AA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA30u;
    // 0x10aa34: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10AA30u, 0x10AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA38u;
label_10aa38:
    // 0x10aa38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa3c: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10AA3Cu;
    SET_GPR_U32(ctx, 31, 0x10AA44u);
    ctx->pc = 0x10AA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA3Cu;
    // 0x10aa40: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10AA3Cu, 0x10AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA44u;
label_10aa44:
    // 0x10aa44: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x10aa44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_10aa48:
    // 0x10aa48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa4c: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10AA4Cu;
    SET_GPR_U32(ctx, 31, 0x10AA54u);
    ctx->pc = 0x10AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA4Cu;
    // 0x10aa50: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10AA4Cu, 0x10AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA54u;
label_10aa54:
    // 0x10aa54: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x10aa54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x10aa58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa5c: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10AA5Cu;
    SET_GPR_U32(ctx, 31, 0x10AA64u);
    ctx->pc = 0x10AA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA5Cu;
    // 0x10aa60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10AA5Cu, 0x10AA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA64u;
label_10aa64:
    // 0x10aa64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa68: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10AA68u;
    SET_GPR_U32(ctx, 31, 0x10AA70u);
    ctx->pc = 0x10AA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA68u;
    // 0x10aa6c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10AA68u, 0x10AA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA70u;
label_10aa70:
    // 0x10aa70: 0xae02015c  sw          $v0, 0x15C($s0)
    ctx->pc = 0x10aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    // 0x10aa74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10aa74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10aa78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10aa78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10aa7c: 0x3e00008  jr          $ra
    ctx->pc = 0x10AA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA7Cu;
        // 0x10aa80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AA84u;
}
