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

// Function: sub_00273340
// Address: 0x273340 - 0x2733c4
void sub_00273340_0x273340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273340_0x273340");
#endif

    switch (ctx->pc) {
        case 0x273340u: goto label_273340;
        case 0x273344u: goto label_273344;
        case 0x273348u: goto label_273348;
        case 0x27334cu: goto label_27334c;
        case 0x273350u: goto label_273350;
        case 0x273354u: goto label_273354;
        case 0x273358u: goto label_273358;
        case 0x27335cu: goto label_27335c;
        case 0x273360u: goto label_273360;
        case 0x273364u: goto label_273364;
        case 0x273368u: goto label_273368;
        case 0x27336cu: goto label_27336c;
        case 0x273370u: goto label_273370;
        case 0x273374u: goto label_273374;
        case 0x273378u: goto label_273378;
        case 0x27337cu: goto label_27337c;
        case 0x273380u: goto label_273380;
        case 0x273384u: goto label_273384;
        case 0x273388u: goto label_273388;
        case 0x27338cu: goto label_27338c;
        case 0x273390u: goto label_273390;
        case 0x273394u: goto label_273394;
        case 0x273398u: goto label_273398;
        case 0x27339cu: goto label_27339c;
        case 0x2733a0u: goto label_2733a0;
        case 0x2733a4u: goto label_2733a4;
        case 0x2733a8u: goto label_2733a8;
        case 0x2733acu: goto label_2733ac;
        case 0x2733b0u: goto label_2733b0;
        case 0x2733b4u: goto label_2733b4;
        case 0x2733b8u: goto label_2733b8;
        case 0x2733bcu: goto label_2733bc;
        case 0x2733c0u: goto label_2733c0;
        default: break;
    }

    ctx->pc = 0x273340u;

label_273340:
    // 0x273340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x273340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_273344:
    // 0x273344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x273344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_273348:
    // 0x273348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x273348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27334c:
    // 0x27334c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27334cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_273350:
    // 0x273350: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x273350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273354:
    // 0x273354: 0x3c10008c  lui         $s0, 0x8C
    ctx->pc = 0x273354u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)140 << 16));
label_273358:
    // 0x273358: 0x26100850  addiu       $s0, $s0, 0x850
    ctx->pc = 0x273358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2128));
label_27335c:
    // 0x27335c: 0x0  nop
    ctx->pc = 0x27335cu;
    // NOP
label_273360:
    // 0x273360: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x273360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_273364:
    // 0x273364: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_273368:
    if (ctx->pc == 0x273368u) {
        ctx->pc = 0x273368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273364u;
        // 0x273368: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27336Cu;
        goto label_27336c;
    }
    ctx->pc = 0x273364u;
    {
        const bool branch_taken_0x273364 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x273368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273364u;
        // 0x273368: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273364) {
            ctx->pc = 0x2733A0u;
            goto label_2733a0;
        }
    }
    ctx->pc = 0x27336Cu;
label_27336c:
    // 0x27336c: 0xc07cce0  jal         func_1F3380
label_273370:
    if (ctx->pc == 0x273370u) {
        ctx->pc = 0x273370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27336Cu;
        // 0x273370: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273374u;
        goto label_273374;
    }
    ctx->pc = 0x27336Cu;
    SET_GPR_U32(ctx, 31, 0x273374u);
    ctx->pc = 0x273370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27336Cu;
    // 0x273370: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x27336Cu, 0x273374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273374u;
label_273374:
    // 0x273374: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_273378:
    // 0x273378: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_27337c:
    if (ctx->pc == 0x27337Cu) {
        ctx->pc = 0x273380u;
        goto label_273380;
    }
    ctx->pc = 0x273378u;
    {
        const bool branch_taken_0x273378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x273378) {
            ctx->pc = 0x2733A0u;
            goto label_2733a0;
        }
    }
    ctx->pc = 0x273380u;
label_273380:
    // 0x273380: 0xa4802b02  sh          $zero, 0x2B02($a0)
    ctx->pc = 0x273380u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11010), (uint16_t)GPR_U32(ctx, 0));
label_273384:
    // 0x273384: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x273384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273388:
    // 0x273388: 0xa4802b00  sh          $zero, 0x2B00($a0)
    ctx->pc = 0x273388u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11008), (uint16_t)GPR_U32(ctx, 0));
label_27338c:
    // 0x27338c: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x27338cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_273390:
    // 0x273390: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x273390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_273394:
    // 0x273394: 0x320f809  jalr        $t9
label_273398:
    if (ctx->pc == 0x273398u) {
        ctx->pc = 0x273398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273394u;
        // 0x273398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27339Cu;
        goto label_27339c;
    }
    ctx->pc = 0x273394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27339Cu);
        ctx->pc = 0x273398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273394u;
        // 0x273398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273394u, 0x27339Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27339Cu;
label_27339c:
    // 0x27339c: 0x0  nop
    ctx->pc = 0x27339cu;
    // NOP
label_2733a0:
    // 0x2733a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2733a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2733a4:
    // 0x2733a4: 0x2e230020  sltiu       $v1, $s1, 0x20
    ctx->pc = 0x2733a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_2733a8:
    // 0x2733a8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_2733ac:
    if (ctx->pc == 0x2733ACu) {
        ctx->pc = 0x2733ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733A8u;
        // 0x2733ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2733B0u;
        goto label_2733b0;
    }
    ctx->pc = 0x2733A8u;
    {
        const bool branch_taken_0x2733a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2733ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733A8u;
        // 0x2733ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733a8) {
            ctx->pc = 0x273360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273360;
        }
    }
    ctx->pc = 0x2733B0u;
label_2733b0:
    // 0x2733b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2733b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2733b4:
    // 0x2733b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2733b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2733b8:
    // 0x2733b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2733b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2733bc:
    // 0x2733bc: 0x3e00008  jr          $ra
label_2733c0:
    if (ctx->pc == 0x2733C0u) {
        ctx->pc = 0x2733C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733BCu;
        // 0x2733c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2733C4u;
        goto label_fallthrough_0x2733bc;
    }
    ctx->pc = 0x2733BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2733C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733BCu;
        // 0x2733c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2733BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2733bc:
    ctx->pc = 0x2733C4u;
}
