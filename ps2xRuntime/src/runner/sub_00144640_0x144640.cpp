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

// Function: sub_00144640
// Address: 0x144640 - 0x144774
void sub_00144640_0x144640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144640_0x144640");
#endif

    switch (ctx->pc) {
        case 0x144684u: goto label_144684;
        case 0x144708u: goto label_144708;
        case 0x144718u: goto label_144718;
        case 0x144744u: goto label_144744;
        default: break;
    }

    ctx->pc = 0x144640u;

    // 0x144640: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x144640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x144644: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x144644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x144648: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x144648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14464c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14464cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x144650: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x144650u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144654: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x144654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x144658: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x144658u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14465c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14465cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x144660: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x144660u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144664: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x144664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x144668: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x144668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14466c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14466cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144670: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x144670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144674: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x144674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14467c: 0xc0513b4  jal         func_144ED0
    ctx->pc = 0x14467Cu;
    SET_GPR_U32(ctx, 31, 0x144684u);
    ctx->pc = 0x144680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14467Cu;
    // 0x144680: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144ED0u, 0x14467Cu, 0x144684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144684u;
label_144684:
    // 0x144684: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x144684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x144688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x144688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14468c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x14468cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x144690: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x144690u;
    {
        const bool branch_taken_0x144690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144690u;
        // 0x144694: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144690) {
            ctx->pc = 0x1446A8u;
            goto label_1446a8;
        }
    }
    ctx->pc = 0x144698u;
    // 0x144698: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x144698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x14469c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x14469cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1446a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1446a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1446a4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1446a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1446a8:
    // 0x1446a8: 0x92060003  lbu         $a2, 0x3($s0)
    ctx->pc = 0x1446a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1446ac: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x1446acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1446b0: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x1446b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x1446b4: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x1446b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1446b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1446b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1446bc: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x1446bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1446c0: 0x863023  subu        $a2, $a0, $a2
    ctx->pc = 0x1446c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1446c4: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1446c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1446c8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1446c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1446cc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1446ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1446d0: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x1446d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1446d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1446d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1446d8: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1446d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1446dc: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x1446dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1446e0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1446e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1446e4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1446E4u;
    {
        const bool branch_taken_0x1446e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1446E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446E4u;
        // 0x1446e8: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446e4) {
            ctx->pc = 0x144728u;
            goto label_144728;
        }
    }
    ctx->pc = 0x1446ECu;
    // 0x1446ec: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1446ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1446f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1446f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1446f4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1446f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1446f8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1446f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1446fc: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x1446fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
    // 0x144700: 0xc050fa4  jal         func_143E90
    ctx->pc = 0x144700u;
    SET_GPR_U32(ctx, 31, 0x144708u);
    ctx->pc = 0x144704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144700u;
    // 0x144704: 0x2412015f  addiu       $s2, $zero, 0x15F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143E90u, 0x144700u, 0x144708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144708u;
label_144708:
    // 0x144708: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x144708u;
    {
        const bool branch_taken_0x144708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144708u;
        // 0x14470c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144708) {
            ctx->pc = 0x144720u;
            goto label_144720;
        }
    }
    ctx->pc = 0x144710u;
    // 0x144710: 0xc0a7e68  jal         func_29F9A0
    ctx->pc = 0x144710u;
    SET_GPR_U32(ctx, 31, 0x144718u);
    ctx->pc = 0x29F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F9A0u, 0x144710u, 0x144718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144718u;
label_144718:
    // 0x144718: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x144718u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x14471c: 0x0  nop
    ctx->pc = 0x14471cu;
    // NOP
label_144720:
    // 0x144720: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x144720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x144724: 0x0  nop
    ctx->pc = 0x144724u;
    // NOP
label_144728:
    // 0x144728: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x144728u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x14472c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14472Cu;
    {
        const bool branch_taken_0x14472c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14472c) {
            ctx->pc = 0x144748u;
            goto label_144748;
        }
    }
    ctx->pc = 0x144734u;
    // 0x144734: 0x92060008  lbu         $a2, 0x8($s0)
    ctx->pc = 0x144734u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x144738: 0x92070009  lbu         $a3, 0x9($s0)
    ctx->pc = 0x144738u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x14473c: 0xc05ff54  jal         func_17FD50
    ctx->pc = 0x14473Cu;
    SET_GPR_U32(ctx, 31, 0x144744u);
    ctx->pc = 0x144740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14473Cu;
    // 0x144740: 0x92050007  lbu         $a1, 0x7($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FD50u, 0x14473Cu, 0x144744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144744u;
label_144744:
    // 0x144744: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x144744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_144748:
    // 0x144748: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x144748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14474c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x14474cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x144750: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x144750u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144754: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x144754u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144758: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x144758u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14475c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14475cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144760: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14476c: 0x3e00008  jr          $ra
    ctx->pc = 0x14476Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14476Cu;
        // 0x144770: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14476Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144774u;
}
