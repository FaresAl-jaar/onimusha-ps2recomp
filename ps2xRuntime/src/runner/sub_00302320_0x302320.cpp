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

// Function: sub_00302320
// Address: 0x302320 - 0x30238c
void sub_00302320_0x302320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302320_0x302320");
#endif

    switch (ctx->pc) {
        case 0x302320u: goto label_302320;
        case 0x302324u: goto label_302324;
        case 0x302328u: goto label_302328;
        case 0x30232cu: goto label_30232c;
        case 0x302330u: goto label_302330;
        case 0x302334u: goto label_302334;
        case 0x302338u: goto label_302338;
        case 0x30233cu: goto label_30233c;
        case 0x302340u: goto label_302340;
        case 0x302344u: goto label_302344;
        case 0x302348u: goto label_302348;
        case 0x30234cu: goto label_30234c;
        case 0x302350u: goto label_302350;
        case 0x302354u: goto label_302354;
        case 0x302358u: goto label_302358;
        case 0x30235cu: goto label_30235c;
        case 0x302360u: goto label_302360;
        case 0x302364u: goto label_302364;
        case 0x302368u: goto label_302368;
        case 0x30236cu: goto label_30236c;
        case 0x302370u: goto label_302370;
        case 0x302374u: goto label_302374;
        case 0x302378u: goto label_302378;
        case 0x30237cu: goto label_30237c;
        case 0x302380u: goto label_302380;
        case 0x302384u: goto label_302384;
        case 0x302388u: goto label_302388;
        default: break;
    }

    ctx->pc = 0x302320u;

label_302320:
    // 0x302320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_302324:
    // 0x302324: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x302324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_302328:
    // 0x302328: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_30232c:
    // 0x30232c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30232cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_302330:
    // 0x302330: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x302330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_302334:
    // 0x302334: 0xc096c80  jal         func_25B200
label_302338:
    if (ctx->pc == 0x302338u) {
        ctx->pc = 0x302338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302334u;
        // 0x302338: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30233Cu;
        goto label_30233c;
    }
    ctx->pc = 0x302334u;
    SET_GPR_U32(ctx, 31, 0x30233Cu);
    ctx->pc = 0x302338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302334u;
    // 0x302338: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x302334u, 0x30233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30233Cu;
label_30233c:
    // 0x30233c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30233cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302340:
    // 0x302340: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_302344:
    if (ctx->pc == 0x302344u) {
        ctx->pc = 0x302348u;
        goto label_302348;
    }
    ctx->pc = 0x302340u;
    {
        const bool branch_taken_0x302340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x302340) {
            ctx->pc = 0x302370u;
            goto label_302370;
        }
    }
    ctx->pc = 0x302348u;
label_302348:
    // 0x302348: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x302348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_30234c:
    // 0x30234c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30234cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302350:
    // 0x302350: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x302350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_302354:
    // 0x302354: 0x320f809  jalr        $t9
label_302358:
    if (ctx->pc == 0x302358u) {
        ctx->pc = 0x302358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302354u;
        // 0x302358: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30235Cu;
        goto label_30235c;
    }
    ctx->pc = 0x302354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30235Cu);
        ctx->pc = 0x302358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302354u;
        // 0x302358: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302354u, 0x30235Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30235Cu;
label_30235c:
    // 0x30235c: 0x7a230030  lq          $v1, 0x30($s1)
    ctx->pc = 0x30235cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_302360:
    // 0x302360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x302360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302364:
    // 0x302364: 0x10000004  b           . + 4 + (0x4 << 2)
label_302368:
    if (ctx->pc == 0x302368u) {
        ctx->pc = 0x302368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302364u;
        // 0x302368: 0x7e030040  sq          $v1, 0x40($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30236Cu;
        goto label_30236c;
    }
    ctx->pc = 0x302364u;
    {
        const bool branch_taken_0x302364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302364u;
        // 0x302368: 0x7e030040  sq          $v1, 0x40($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302364) {
            ctx->pc = 0x302378u;
            goto label_302378;
        }
    }
    ctx->pc = 0x30236Cu;
label_30236c:
    // 0x30236c: 0x0  nop
    ctx->pc = 0x30236cu;
    // NOP
label_302370:
    // 0x302370: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x302370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302374:
    // 0x302374: 0x0  nop
    ctx->pc = 0x302374u;
    // NOP
label_302378:
    // 0x302378: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30237c:
    // 0x30237c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30237cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_302380:
    // 0x302380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x302380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_302384:
    // 0x302384: 0x3e00008  jr          $ra
label_302388:
    if (ctx->pc == 0x302388u) {
        ctx->pc = 0x302388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302384u;
        // 0x302388: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30238Cu;
        goto label_fallthrough_0x302384;
    }
    ctx->pc = 0x302384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302384u;
        // 0x302388: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x302384:
    ctx->pc = 0x30238Cu;
}
