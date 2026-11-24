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

// Function: sub_002305F8
// Address: 0x2305f8 - 0x230698
void sub_002305F8_0x2305f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002305F8_0x2305f8");
#endif

    switch (ctx->pc) {
        case 0x23062cu: goto label_23062c;
        case 0x230634u: goto label_230634;
        case 0x230650u: goto label_230650;
        case 0x230664u: goto label_230664;
        case 0x23067cu: goto label_23067c;
        default: break;
    }

    ctx->pc = 0x2305f8u;

    // 0x2305f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2305f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2305fc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2305fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230600: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x230604: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x230604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230608: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x230608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23060c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23060cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x230610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230614: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x230614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230618: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x230618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23061c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23061cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230620: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x230620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x230624: 0xc08bbbc  jal         func_22EEF0
    ctx->pc = 0x230624u;
    SET_GPR_U32(ctx, 31, 0x23062Cu);
    ctx->pc = 0x230628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230624u;
    // 0x230628: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EEF0u, 0x230624u, 0x23062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23062Cu;
label_23062c:
    // 0x23062c: 0xc08c040  jal         func_230100
    ctx->pc = 0x23062Cu;
    SET_GPR_U32(ctx, 31, 0x230634u);
    ctx->pc = 0x230100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230100u, 0x23062Cu, 0x230634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230634u;
label_230634:
    // 0x230634: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x230634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23063c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23063cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230640: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x230640u;
    {
        const bool branch_taken_0x230640 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x230644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230640u;
        // 0x230644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230640) {
            ctx->pc = 0x230664u;
            goto label_230664;
        }
    }
    ctx->pc = 0x230648u;
    // 0x230648: 0xc08c136  jal         func_2304D8
    ctx->pc = 0x230648u;
    SET_GPR_U32(ctx, 31, 0x230650u);
    ctx->pc = 0x2304D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2304D8u, 0x230648u, 0x230650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230650u;
label_230650:
    // 0x230650: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230650u;
    {
        const bool branch_taken_0x230650 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x230654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230650u;
        // 0x230654: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230650) {
            ctx->pc = 0x230668u;
            goto label_230668;
        }
    }
    ctx->pc = 0x230658u;
    // 0x230658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23065c: 0xc08c1ce  jal         func_230738
    ctx->pc = 0x23065Cu;
    SET_GPR_U32(ctx, 31, 0x230664u);
    ctx->pc = 0x230660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23065Cu;
    // 0x230660: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230738u, 0x23065Cu, 0x230664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230664u;
label_230664:
    // 0x230664: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x230664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_230668:
    // 0x230668: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x230668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23066c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23066cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230670: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x230670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230674: 0xc08bbbc  jal         func_22EEF0
    ctx->pc = 0x230674u;
    SET_GPR_U32(ctx, 31, 0x23067Cu);
    ctx->pc = 0x230678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230674u;
    // 0x230678: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EEF0u, 0x230674u, 0x23067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23067Cu;
label_23067c:
    // 0x23067c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23067cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230680: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230680u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230688: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x230688u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23068c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23068cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230690: 0x3e00008  jr          $ra
    ctx->pc = 0x230690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230690u;
        // 0x230694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230698u;
}
