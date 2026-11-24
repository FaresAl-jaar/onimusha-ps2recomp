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

// Function: sub_0012E620
// Address: 0x12e620 - 0x12e6b0
void sub_0012E620_0x12e620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E620_0x12e620");
#endif

    switch (ctx->pc) {
        case 0x12e674u: goto label_12e674;
        case 0x12e688u: goto label_12e688;
        default: break;
    }

    ctx->pc = 0x12e620u;

    // 0x12e620: 0xdc8e0000  ld          $t6, 0x0($a0)
    ctx->pc = 0x12e620u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12e624: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x12e624u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x12e628: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x12e628u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x12e62c: 0xe6ffe  dsrl32      $t5, $t6, 31
    ctx->pc = 0x12e62cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) >> (32 + 31));
    // 0x12e630: 0xe653e  dsrl32      $t4, $t6, 20
    ctx->pc = 0x12e630u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) >> (32 + 20));
    // 0x12e634: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x12e634u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x12e638: 0xacad0004  sw          $t5, 0x4($a1)
    ctx->pc = 0x12e638u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 13));
    // 0x12e63c: 0x318c07ff  andi        $t4, $t4, 0x7FF
    ctx->pc = 0x12e63cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)2047);
    // 0x12e640: 0x11800011  beqz        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x12E640u;
    {
        const bool branch_taken_0x12e640 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E640u;
        // 0x12e644: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e640) {
            ctx->pc = 0x12E688u;
            goto label_12e688;
        }
    }
    ctx->pc = 0x12E648u;
    // 0x12e648: 0x240f07ff  addiu       $t7, $zero, 0x7FF
    ctx->pc = 0x12e648u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x12e64c: 0x158f0010  bne         $t4, $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x12E64Cu;
    {
        const bool branch_taken_0x12e64c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 15));
        ctx->pc = 0x12E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E64Cu;
        // 0x12e650: 0xe7a38  dsll        $t7, $t6, 8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) << 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e64c) {
            ctx->pc = 0x12E690u;
            goto label_12e690;
        }
    }
    ctx->pc = 0x12E654u;
    // 0x12e654: 0x11c0000c  beqz        $t6, . + 4 + (0xC << 2)
    ctx->pc = 0x12E654u;
    {
        const bool branch_taken_0x12e654 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E654u;
        // 0x12e658: 0x240f0004  addiu       $t7, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e654) {
            ctx->pc = 0x12E688u;
            goto label_12e688;
        }
    }
    ctx->pc = 0x12E65Cu;
    // 0x12e65c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12e65cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e660: 0xf7cfc  dsll32      $t7, $t7, 19
    ctx->pc = 0x12e660u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 19));
    // 0x12e664: 0x1cf7824  and         $t7, $t6, $t7
    ctx->pc = 0x12e664u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x12e668: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E668u;
    {
        const bool branch_taken_0x12e668 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E668u;
        // 0x12e66c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e668) {
            ctx->pc = 0x12E67Cu;
            goto label_12e67c;
        }
    }
    ctx->pc = 0x12E670u;
    // 0x12e670: 0xacaf0000  sw          $t7, 0x0($a1)
    ctx->pc = 0x12e670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
label_12e674:
    // 0x12e674: 0x3e00008  jr          $ra
    ctx->pc = 0x12E674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E674u;
        // 0x12e678: 0xfcae0010  sd          $t6, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E67Cu;
label_12e67c:
    // 0x12e67c: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x12E67Cu;
    {
        const bool branch_taken_0x12e67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E67Cu;
        // 0x12e680: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e67c) {
            ctx->pc = 0x12E674u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e674;
        }
    }
    ctx->pc = 0x12E684u;
    // 0x12e684: 0x0  nop
    ctx->pc = 0x12e684u;
    // NOP
label_12e688:
    // 0x12e688: 0x3e00008  jr          $ra
    ctx->pc = 0x12E688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E688u;
        // 0x12e68c: 0xacaf0000  sw          $t7, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E690u;
label_12e690:
    // 0x12e690: 0x258dfc01  addiu       $t5, $t4, -0x3FF
    ctx->pc = 0x12e690u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294966273));
    // 0x12e694: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x12e694u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e698: 0xacad0008  sw          $t5, 0x8($a1)
    ctx->pc = 0x12e698u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 13));
    // 0x12e69c: 0xe773c  dsll32      $t6, $t6, 28
    ctx->pc = 0x12e69cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 28));
    // 0x12e6a0: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x12e6a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x12e6a4: 0xfcaf0010  sd          $t7, 0x10($a1)
    ctx->pc = 0x12e6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 15));
    // 0x12e6a8: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x12E6A8u;
    {
        const bool branch_taken_0x12e6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6A8u;
        // 0x12e6ac: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6a8) {
            ctx->pc = 0x12E688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e688;
        }
    }
    ctx->pc = 0x12E6B0u;
}
