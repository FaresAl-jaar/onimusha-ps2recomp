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

// Function: sub_00238128
// Address: 0x238128 - 0x2381a4
void sub_00238128_0x238128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238128_0x238128");
#endif

    switch (ctx->pc) {
        case 0x23814cu: goto label_23814c;
        case 0x238160u: goto label_238160;
        case 0x238174u: goto label_238174;
        default: break;
    }

    ctx->pc = 0x238128u;

    // 0x238128: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23812c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23812cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x238130: 0x3c13004d  lui         $s3, 0x4D
    ctx->pc = 0x238130u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)77 << 16));
    // 0x238134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238138: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23813c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23813cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x238140: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x238140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x238144: 0xc08e2b6  jal         func_238AD8
    ctx->pc = 0x238144u;
    SET_GPR_U32(ctx, 31, 0x23814Cu);
    ctx->pc = 0x238148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238144u;
    // 0x238148: 0x2664803c  addiu       $a0, $s3, -0x7FC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294934588));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AD8u, 0x238144u, 0x23814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23814Cu;
label_23814c:
    // 0x23814c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23814Cu;
    {
        const bool branch_taken_0x23814c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23814Cu;
        // 0x238150: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23814c) {
            ctx->pc = 0x238188u;
            goto label_238188;
        }
    }
    ctx->pc = 0x238154u;
    // 0x238154: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x238154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238158: 0x24508048  addiu       $s0, $v0, -0x7FB8
    ctx->pc = 0x238158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934600));
    // 0x23815c: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x23815cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_238160:
    // 0x238160: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x238160u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x238164: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x238164u;
    {
        const bool branch_taken_0x238164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x238164) {
            ctx->pc = 0x238168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238164u;
            // 0x238168: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238178u;
            goto label_238178;
        }
    }
    ctx->pc = 0x23816Cu;
    // 0x23816c: 0xc08df96  jal         func_237E58
    ctx->pc = 0x23816Cu;
    SET_GPR_U32(ctx, 31, 0x238174u);
    ctx->pc = 0x238170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23816Cu;
    // 0x238170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237E58u, 0x23816Cu, 0x238174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238174u;
label_238174:
    // 0x238174: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x238174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_238178:
    // 0x238178: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x238178u;
    {
        const bool branch_taken_0x238178 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x23817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238178u;
        // 0x23817c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238178) {
            ctx->pc = 0x238160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238160;
        }
    }
    ctx->pc = 0x238180u;
    // 0x238180: 0x2662803c  addiu       $v0, $s3, -0x7FC4
    ctx->pc = 0x238180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294934588));
    // 0x238184: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x238184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_238188:
    // 0x238188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23818c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23818cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238190: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x238190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238194: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x238194u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238198: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x238198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23819c: 0x3e00008  jr          $ra
    ctx->pc = 0x23819Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2381A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23819Cu;
        // 0x2381a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23819Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2381A4u;
}
