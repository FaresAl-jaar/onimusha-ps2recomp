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

// Function: sub_00277560
// Address: 0x277560 - 0x27767c
void sub_00277560_0x277560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277560_0x277560");
#endif

    switch (ctx->pc) {
        case 0x2775b0u: goto label_2775b0;
        case 0x2775bcu: goto label_2775bc;
        case 0x2775ccu: goto label_2775cc;
        case 0x2775dcu: goto label_2775dc;
        case 0x277624u: goto label_277624;
        case 0x277634u: goto label_277634;
        case 0x27764cu: goto label_27764c;
        default: break;
    }

    ctx->pc = 0x277560u;

    // 0x277560: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x277560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x277564: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x277564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x277568: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x277568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x27756c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27756cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x277570: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x277570u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277574: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x277574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x277578: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x277578u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27757c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27757cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x277580: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x277580u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277584: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x277584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x277588: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x277588u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27758c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27758cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x277590: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x277590u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277594: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x277594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x277598: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x277598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27759c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27759cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2775a0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2775a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2775a4: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2775a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2775a8: 0xc09d4d4  jal         func_275350
    ctx->pc = 0x2775A8u;
    SET_GPR_U32(ctx, 31, 0x2775B0u);
    ctx->pc = 0x2775ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2775A8u;
    // 0x2775ac: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x2775A8u, 0x2775B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2775B0u;
label_2775b0:
    // 0x2775b0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2775b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2775b4: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x2775B4u;
    SET_GPR_U32(ctx, 31, 0x2775BCu);
    ctx->pc = 0x2775B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2775B4u;
    // 0x2775b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x2775B4u, 0x2775BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2775BCu;
label_2775bc:
    // 0x2775bc: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x2775bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2775c0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2775c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2775c4: 0xc09d524  jal         func_275490
    ctx->pc = 0x2775C4u;
    SET_GPR_U32(ctx, 31, 0x2775CCu);
    ctx->pc = 0x2775C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2775C4u;
    // 0x2775c8: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2775C4u, 0x2775CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2775CCu;
label_2775cc:
    // 0x2775cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2775CCu;
    {
        const bool branch_taken_0x2775cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2775D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775CCu;
        // 0x2775d0: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2775cc) {
            ctx->pc = 0x2775E8u;
            goto label_2775e8;
        }
    }
    ctx->pc = 0x2775D4u;
    // 0x2775d4: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2775D4u;
    SET_GPR_U32(ctx, 31, 0x2775DCu);
    ctx->pc = 0x2775D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2775D4u;
    // 0x2775d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2775D4u, 0x2775DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2775DCu;
label_2775dc:
    // 0x2775dc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2775DCu;
    {
        const bool branch_taken_0x2775dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2775E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775DCu;
        // 0x2775e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2775dc) {
            ctx->pc = 0x277650u;
            goto label_277650;
        }
    }
    ctx->pc = 0x2775E4u;
    // 0x2775e4: 0x0  nop
    ctx->pc = 0x2775e4u;
    // NOP
label_2775e8:
    // 0x2775e8: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2775e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2775ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2775ECu;
    {
        const bool branch_taken_0x2775ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2775ec) {
            ctx->pc = 0x277600u;
            goto label_277600;
        }
    }
    ctx->pc = 0x2775F4u;
    // 0x2775f4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2775F4u;
    {
        const bool branch_taken_0x2775f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2775f4) {
            ctx->pc = 0x277640u;
            goto label_277640;
        }
    }
    ctx->pc = 0x2775FCu;
    // 0x2775fc: 0x0  nop
    ctx->pc = 0x2775fcu;
    // NOP
label_277600:
    // 0x277600: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x277600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277604: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x277604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277608: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x277608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27760c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27760cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277610: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x277610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277614: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x277614u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277618: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x277618u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27761c: 0xc09e144  jal         func_278510
    ctx->pc = 0x27761Cu;
    SET_GPR_U32(ctx, 31, 0x277624u);
    ctx->pc = 0x277620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27761Cu;
    // 0x277620: 0x2e0582d  daddu       $t3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278510u, 0x27761Cu, 0x277624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277624u;
label_277624:
    // 0x277624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x277624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277628: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x277628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x27762c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x27762Cu;
    SET_GPR_U32(ctx, 31, 0x277634u);
    ctx->pc = 0x277630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27762Cu;
    // 0x277630: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x27762Cu, 0x277634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277634u;
label_277634:
    // 0x277634: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x277634u;
    {
        const bool branch_taken_0x277634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277634u;
        // 0x277638: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277634) {
            ctx->pc = 0x277650u;
            goto label_277650;
        }
    }
    ctx->pc = 0x27763Cu;
    // 0x27763c: 0x0  nop
    ctx->pc = 0x27763cu;
    // NOP
label_277640:
    // 0x277640: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x277640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x277644: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x277644u;
    SET_GPR_U32(ctx, 31, 0x27764Cu);
    ctx->pc = 0x277648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277644u;
    // 0x277648: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x277644u, 0x27764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27764Cu;
label_27764c:
    // 0x27764c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27764cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277650:
    // 0x277650: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x277650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x277654: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x277654u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277658: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x277658u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27765c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27765cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277660: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x277660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277664: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x277664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x277668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27766c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27766cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277674: 0x3e00008  jr          $ra
    ctx->pc = 0x277674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277674u;
        // 0x277678: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27767Cu;
}
