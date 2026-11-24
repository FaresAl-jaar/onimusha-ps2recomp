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

// Function: sub_0029B530
// Address: 0x29b530 - 0x29b5b4
void sub_0029B530_0x29b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B530_0x29b530");
#endif

    switch (ctx->pc) {
        case 0x29b530u: goto label_29b530;
        case 0x29b534u: goto label_29b534;
        case 0x29b538u: goto label_29b538;
        case 0x29b53cu: goto label_29b53c;
        case 0x29b540u: goto label_29b540;
        case 0x29b544u: goto label_29b544;
        case 0x29b548u: goto label_29b548;
        case 0x29b54cu: goto label_29b54c;
        case 0x29b550u: goto label_29b550;
        case 0x29b554u: goto label_29b554;
        case 0x29b558u: goto label_29b558;
        case 0x29b55cu: goto label_29b55c;
        case 0x29b560u: goto label_29b560;
        case 0x29b564u: goto label_29b564;
        case 0x29b568u: goto label_29b568;
        case 0x29b56cu: goto label_29b56c;
        case 0x29b570u: goto label_29b570;
        case 0x29b574u: goto label_29b574;
        case 0x29b578u: goto label_29b578;
        case 0x29b57cu: goto label_29b57c;
        case 0x29b580u: goto label_29b580;
        case 0x29b584u: goto label_29b584;
        case 0x29b588u: goto label_29b588;
        case 0x29b58cu: goto label_29b58c;
        case 0x29b590u: goto label_29b590;
        case 0x29b594u: goto label_29b594;
        case 0x29b598u: goto label_29b598;
        case 0x29b59cu: goto label_29b59c;
        case 0x29b5a0u: goto label_29b5a0;
        case 0x29b5a4u: goto label_29b5a4;
        case 0x29b5a8u: goto label_29b5a8;
        case 0x29b5acu: goto label_29b5ac;
        case 0x29b5b0u: goto label_29b5b0;
        default: break;
    }

    ctx->pc = 0x29b530u;

label_29b530:
    // 0x29b530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29b534:
    // 0x29b534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29b538:
    // 0x29b538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29b53c:
    // 0x29b53c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29b540:
    // 0x29b540: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x29b540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_29b544:
    // 0x29b544: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_29b548:
    if (ctx->pc == 0x29B548u) {
        ctx->pc = 0x29B54Cu;
        goto label_29b54c;
    }
    ctx->pc = 0x29B544u;
    {
        const bool branch_taken_0x29b544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b544) {
            ctx->pc = 0x29B568u;
            goto label_29b568;
        }
    }
    ctx->pc = 0x29B54Cu;
label_29b54c:
    // 0x29b54c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29b54cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29b550:
    // 0x29b550: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29b550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29b554:
    // 0x29b554: 0x320f809  jalr        $t9
label_29b558:
    if (ctx->pc == 0x29B558u) {
        ctx->pc = 0x29B55Cu;
        goto label_29b55c;
    }
    ctx->pc = 0x29B554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29B55Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B554u, 0x29B55Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29B55Cu;
label_29b55c:
    // 0x29b55c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x29b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_29b560:
    // 0x29b560: 0xac6000b4  sw          $zero, 0xB4($v1)
    ctx->pc = 0x29b560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 0));
label_29b564:
    // 0x29b564: 0xac6000b8  sw          $zero, 0xB8($v1)
    ctx->pc = 0x29b564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 0));
label_29b568:
    // 0x29b568: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x29b568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_29b56c:
    // 0x29b56c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_29b570:
    if (ctx->pc == 0x29B570u) {
        ctx->pc = 0x29B574u;
        goto label_29b574;
    }
    ctx->pc = 0x29B56Cu;
    {
        const bool branch_taken_0x29b56c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b56c) {
            ctx->pc = 0x29B590u;
            goto label_29b590;
        }
    }
    ctx->pc = 0x29B574u;
label_29b574:
    // 0x29b574: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29b574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29b578:
    // 0x29b578: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29b578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29b57c:
    // 0x29b57c: 0x320f809  jalr        $t9
label_29b580:
    if (ctx->pc == 0x29B580u) {
        ctx->pc = 0x29B584u;
        goto label_29b584;
    }
    ctx->pc = 0x29B57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29B584u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B57Cu, 0x29B584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29B584u;
label_29b584:
    // 0x29b584: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x29b584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_29b588:
    // 0x29b588: 0xac6000b4  sw          $zero, 0xB4($v1)
    ctx->pc = 0x29b588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 0));
label_29b58c:
    // 0x29b58c: 0xac6000b8  sw          $zero, 0xB8($v1)
    ctx->pc = 0x29b58cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 0));
label_29b590:
    // 0x29b590: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x29b590u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_29b594:
    // 0x29b594: 0x7e030080  sq          $v1, 0x80($s0)
    ctx->pc = 0x29b594u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 3));
label_29b598:
    // 0x29b598: 0x92030172  lbu         $v1, 0x172($s0)
    ctx->pc = 0x29b598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 370)));
label_29b59c:
    // 0x29b59c: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x29b59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
label_29b5a0:
    // 0x29b5a0: 0xa2030172  sb          $v1, 0x172($s0)
    ctx->pc = 0x29b5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 370), (uint8_t)GPR_U32(ctx, 3));
label_29b5a4:
    // 0x29b5a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29b5a8:
    // 0x29b5a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29b5ac:
    // 0x29b5ac: 0x3e00008  jr          $ra
label_29b5b0:
    if (ctx->pc == 0x29B5B0u) {
        ctx->pc = 0x29B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B5ACu;
        // 0x29b5b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B5B4u;
        goto label_fallthrough_0x29b5ac;
    }
    ctx->pc = 0x29B5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B5ACu;
        // 0x29b5b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29b5ac:
    ctx->pc = 0x29B5B4u;
}
