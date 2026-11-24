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

// Function: sub_00187550
// Address: 0x187550 - 0x187694
void sub_00187550_0x187550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187550_0x187550");
#endif

    switch (ctx->pc) {
        case 0x187624u: goto label_187624;
        case 0x187660u: goto label_187660;
        default: break;
    }

    ctx->pc = 0x187550u;

    // 0x187550: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x187550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x187554: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x187554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x187558: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x187558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18755c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18755cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x187560: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x187560u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187564: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x187564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x187568: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x187568u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18756c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18756cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x187570: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x187570u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187574: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x187574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x187578: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x187578u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18757c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18757cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187580: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187584: 0x8c820314  lw          $v0, 0x314($a0)
    ctx->pc = 0x187584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 788)));
    // 0x187588: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187588u;
    {
        const bool branch_taken_0x187588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187588u;
        // 0x18758c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187588) {
            ctx->pc = 0x187598u;
            goto label_187598;
        }
    }
    ctx->pc = 0x187590u;
    // 0x187590: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x187590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187594: 0x0  nop
    ctx->pc = 0x187594u;
    // NOP
label_187598:
    // 0x187598: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x187598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x18759c: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x18759cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1875a0: 0x24020910  addiu       $v0, $zero, 0x910
    ctx->pc = 0x1875a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2320));
    // 0x1875a4: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1875A4u;
    {
        const bool branch_taken_0x1875a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1875A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875A4u;
        // 0x1875a8: 0x24020054  addiu       $v0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1875a4) {
            ctx->pc = 0x1875F0u;
            goto label_1875f0;
        }
    }
    ctx->pc = 0x1875ACu;
    // 0x1875ac: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1875ACu;
    {
        const bool branch_taken_0x1875ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1875ac) {
            ctx->pc = 0x1875E8u;
            goto label_1875e8;
        }
    }
    ctx->pc = 0x1875B4u;
    // 0x1875b4: 0x24020710  addiu       $v0, $zero, 0x710
    ctx->pc = 0x1875b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1808));
    // 0x1875b8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1875B8u;
    {
        const bool branch_taken_0x1875b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1875BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875B8u;
        // 0x1875bc: 0x24020700  addiu       $v0, $zero, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1875b8) {
            ctx->pc = 0x1875E8u;
            goto label_1875e8;
        }
    }
    ctx->pc = 0x1875C0u;
    // 0x1875c0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1875C0u;
    {
        const bool branch_taken_0x1875c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1875c0) {
            ctx->pc = 0x1875E8u;
            goto label_1875e8;
        }
    }
    ctx->pc = 0x1875C8u;
    // 0x1875c8: 0x24020504  addiu       $v0, $zero, 0x504
    ctx->pc = 0x1875c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x1875cc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1875CCu;
    {
        const bool branch_taken_0x1875cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1875D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875CCu;
        // 0x1875d0: 0x24020103  addiu       $v0, $zero, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1875cc) {
            ctx->pc = 0x1875E8u;
            goto label_1875e8;
        }
    }
    ctx->pc = 0x1875D4u;
    // 0x1875d4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1875D4u;
    {
        const bool branch_taken_0x1875d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1875d4) {
            ctx->pc = 0x1875E8u;
            goto label_1875e8;
        }
    }
    ctx->pc = 0x1875DCu;
    // 0x1875dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1875DCu;
    {
        const bool branch_taken_0x1875dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1875dc) {
            ctx->pc = 0x187600u;
            goto label_187600;
        }
    }
    ctx->pc = 0x1875E4u;
    // 0x1875e4: 0x0  nop
    ctx->pc = 0x1875e4u;
    // NOP
label_1875e8:
    // 0x1875e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1875E8u;
    {
        const bool branch_taken_0x1875e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1875ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875E8u;
        // 0x1875ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1875e8) {
            ctx->pc = 0x187600u;
            goto label_187600;
        }
    }
    ctx->pc = 0x1875F0u;
label_1875f0:
    // 0x1875f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1875f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1875f4: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1875F4u;
    {
        const bool branch_taken_0x1875f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1875f4) {
            ctx->pc = 0x187600u;
            goto label_187600;
        }
    }
    ctx->pc = 0x1875FCu;
    // 0x1875fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1875fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187600:
    // 0x187600: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x187600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x187604: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x187604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x187608: 0x24040160  addiu       $a0, $zero, 0x160
    ctx->pc = 0x187608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x18760c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18760cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x187610: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x187610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x187614: 0x28940  sll         $s1, $v0, 5
    ctx->pc = 0x187614u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x187618: 0x2d18021  addu        $s0, $s6, $s1
    ctx->pc = 0x187618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x18761c: 0xc05e664  jal         func_179990
    ctx->pc = 0x18761Cu;
    SET_GPR_U32(ctx, 31, 0x187624u);
    ctx->pc = 0x187620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18761Cu;
    // 0x187620: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179990u, 0x18761Cu, 0x187624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187624u;
label_187624:
    // 0x187624: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x187624u;
    {
        const bool branch_taken_0x187624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187624u;
        // 0x187628: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187624) {
            ctx->pc = 0x187640u;
            goto label_187640;
        }
    }
    ctx->pc = 0x18762Cu;
    // 0x18762c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x18762cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x187630: 0x24845fd0  addiu       $a0, $a0, 0x5FD0
    ctx->pc = 0x187630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24528));
    // 0x187634: 0x24635ff0  addiu       $v1, $v1, 0x5FF0
    ctx->pc = 0x187634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24560));
    // 0x187638: 0xac440144  sw          $a0, 0x144($v0)
    ctx->pc = 0x187638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 4));
    // 0x18763c: 0xac430144  sw          $v1, 0x144($v0)
    ctx->pc = 0x18763cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 3));
label_187640:
    // 0x187640: 0x2361021  addu        $v0, $s1, $s6
    ctx->pc = 0x187640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x187644: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x187644u;
    {
        const bool branch_taken_0x187644 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x187648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187644u;
        // 0x187648: 0xac400150  sw          $zero, 0x150($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187644) {
            ctx->pc = 0x187668u;
            goto label_187668;
        }
    }
    ctx->pc = 0x18764Cu;
    // 0x18764c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18764cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187650: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x187650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187654: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x187654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187658: 0xc05f458  jal         func_17D160
    ctx->pc = 0x187658u;
    SET_GPR_U32(ctx, 31, 0x187660u);
    ctx->pc = 0x18765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187658u;
    // 0x18765c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D160u, 0x187658u, 0x187660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187660u;
label_187660:
    // 0x187660: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x187660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187664: 0x0  nop
    ctx->pc = 0x187664u;
    // NOP
label_187668:
    // 0x187668: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x187668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18766c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18766cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x187670: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x187670u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x187674: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x187674u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x187678: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x187678u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18767c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18767cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187680: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x187680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187684: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18768c: 0x3e00008  jr          $ra
    ctx->pc = 0x18768Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18768Cu;
        // 0x187690: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18768Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187694u;
}
