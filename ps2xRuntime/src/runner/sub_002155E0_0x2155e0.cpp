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

// Function: sub_002155E0
// Address: 0x2155e0 - 0x21566c
void sub_002155E0_0x2155e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002155E0_0x2155e0");
#endif

    switch (ctx->pc) {
        case 0x215600u: goto label_215600;
        case 0x215618u: goto label_215618;
        case 0x215638u: goto label_215638;
        case 0x215654u: goto label_215654;
        default: break;
    }

    ctx->pc = 0x2155e0u;

    // 0x2155e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2155e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2155e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2155e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2155e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2155e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2155ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2155ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2155f0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2155f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2155f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2155f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2155f8: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x2155f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2155fc: 0x0  nop
    ctx->pc = 0x2155fcu;
    // NOP
label_215600:
    // 0x215600: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x215600u;
    {
        const bool branch_taken_0x215600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215600u;
        // 0x215604: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215600) {
            ctx->pc = 0x21564Cu;
            goto label_21564c;
        }
    }
    ctx->pc = 0x215608u;
    // 0x215608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21560c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x21560cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x215610: 0xc08559c  jal         func_215670
    ctx->pc = 0x215610u;
    SET_GPR_U32(ctx, 31, 0x215618u);
    ctx->pc = 0x215614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215610u;
    // 0x215614: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215670u, 0x215610u, 0x215618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215618u;
label_215618:
    // 0x215618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21561c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21561cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215620: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x215620u;
    {
        const bool branch_taken_0x215620 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x215624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215620u;
        // 0x215624: 0x27a8000c  addiu       $t0, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215620) {
            ctx->pc = 0x21564Cu;
            goto label_21564c;
        }
    }
    ctx->pc = 0x215628u;
    // 0x215628: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x215628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21562c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x21562cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x215630: 0xc085788  jal         func_215E20
    ctx->pc = 0x215630u;
    SET_GPR_U32(ctx, 31, 0x215638u);
    ctx->pc = 0x215634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215630u;
    // 0x215634: 0x8fa70008  lw          $a3, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215E20u, 0x215630u, 0x215638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215638u;
label_215638:
    // 0x215638: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x215638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21563c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21563Cu;
    {
        const bool branch_taken_0x21563c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x215640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21563Cu;
        // 0x215640: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21563c) {
            ctx->pc = 0x21564Cu;
            goto label_21564c;
        }
    }
    ctx->pc = 0x215644u;
    // 0x215644: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x215644u;
    {
        const bool branch_taken_0x215644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215644) {
            ctx->pc = 0x215648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215644u;
            // 0x215648: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215600;
        }
    }
    ctx->pc = 0x21564Cu;
label_21564c:
    // 0x21564c: 0xc0863d8  jal         func_218F60
    ctx->pc = 0x21564Cu;
    SET_GPR_U32(ctx, 31, 0x215654u);
    ctx->pc = 0x215650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21564Cu;
    // 0x215650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F60u, 0x21564Cu, 0x215654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215654u;
label_215654:
    // 0x215654: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x215654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215658: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x215658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21565c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21565cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x215660: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x215660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215664: 0x3e00008  jr          $ra
    ctx->pc = 0x215664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215664u;
        // 0x215668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21566Cu;
}
