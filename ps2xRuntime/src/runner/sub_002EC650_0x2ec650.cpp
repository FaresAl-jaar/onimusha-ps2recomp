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

// Function: sub_002EC650
// Address: 0x2ec650 - 0x2ec718
void sub_002EC650_0x2ec650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC650_0x2ec650");
#endif

    switch (ctx->pc) {
        case 0x2ec650u: goto label_2ec650;
        case 0x2ec654u: goto label_2ec654;
        case 0x2ec658u: goto label_2ec658;
        case 0x2ec65cu: goto label_2ec65c;
        case 0x2ec660u: goto label_2ec660;
        case 0x2ec664u: goto label_2ec664;
        case 0x2ec668u: goto label_2ec668;
        case 0x2ec66cu: goto label_2ec66c;
        case 0x2ec670u: goto label_2ec670;
        case 0x2ec674u: goto label_2ec674;
        case 0x2ec678u: goto label_2ec678;
        case 0x2ec67cu: goto label_2ec67c;
        case 0x2ec680u: goto label_2ec680;
        case 0x2ec684u: goto label_2ec684;
        case 0x2ec688u: goto label_2ec688;
        case 0x2ec68cu: goto label_2ec68c;
        case 0x2ec690u: goto label_2ec690;
        case 0x2ec694u: goto label_2ec694;
        case 0x2ec698u: goto label_2ec698;
        case 0x2ec69cu: goto label_2ec69c;
        case 0x2ec6a0u: goto label_2ec6a0;
        case 0x2ec6a4u: goto label_2ec6a4;
        case 0x2ec6a8u: goto label_2ec6a8;
        case 0x2ec6acu: goto label_2ec6ac;
        case 0x2ec6b0u: goto label_2ec6b0;
        case 0x2ec6b4u: goto label_2ec6b4;
        case 0x2ec6b8u: goto label_2ec6b8;
        case 0x2ec6bcu: goto label_2ec6bc;
        case 0x2ec6c0u: goto label_2ec6c0;
        case 0x2ec6c4u: goto label_2ec6c4;
        case 0x2ec6c8u: goto label_2ec6c8;
        case 0x2ec6ccu: goto label_2ec6cc;
        case 0x2ec6d0u: goto label_2ec6d0;
        case 0x2ec6d4u: goto label_2ec6d4;
        case 0x2ec6d8u: goto label_2ec6d8;
        case 0x2ec6dcu: goto label_2ec6dc;
        case 0x2ec6e0u: goto label_2ec6e0;
        case 0x2ec6e4u: goto label_2ec6e4;
        case 0x2ec6e8u: goto label_2ec6e8;
        case 0x2ec6ecu: goto label_2ec6ec;
        case 0x2ec6f0u: goto label_2ec6f0;
        case 0x2ec6f4u: goto label_2ec6f4;
        case 0x2ec6f8u: goto label_2ec6f8;
        case 0x2ec6fcu: goto label_2ec6fc;
        case 0x2ec700u: goto label_2ec700;
        case 0x2ec704u: goto label_2ec704;
        case 0x2ec708u: goto label_2ec708;
        case 0x2ec70cu: goto label_2ec70c;
        case 0x2ec710u: goto label_2ec710;
        case 0x2ec714u: goto label_2ec714;
        default: break;
    }

    ctx->pc = 0x2ec650u;

label_2ec650:
    // 0x2ec650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ec650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ec654:
    // 0x2ec654: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ec654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
label_2ec658:
    // 0x2ec658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ec658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ec65c:
    // 0x2ec65c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ec65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ec660:
    // 0x2ec660: 0x8c292410  lw          $t1, 0x2410($at)
    ctx->pc = 0x2ec660u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9232)));
label_2ec664:
    // 0x2ec664: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x2ec664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_2ec668:
    // 0x2ec668: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_2ec66c:
    if (ctx->pc == 0x2EC66Cu) {
        ctx->pc = 0x2EC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC668u;
        // 0x2ec66c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC670u;
        goto label_2ec670;
    }
    ctx->pc = 0x2EC668u;
    {
        const bool branch_taken_0x2ec668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC668u;
        // 0x2ec66c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec668) {
            ctx->pc = 0x2EC6E8u;
            goto label_2ec6e8;
        }
    }
    ctx->pc = 0x2EC670u;
label_2ec670:
    // 0x2ec670: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ec670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ec674:
    // 0x2ec674: 0x24040099  addiu       $a0, $zero, 0x99
    ctx->pc = 0x2ec674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_2ec678:
    // 0x2ec678: 0x2405009a  addiu       $a1, $zero, 0x9A
    ctx->pc = 0x2ec678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_2ec67c:
    // 0x2ec67c: 0x240700c2  addiu       $a3, $zero, 0xC2
    ctx->pc = 0x2ec67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
label_2ec680:
    // 0x2ec680: 0x11300015  beq         $t1, $s0, . + 4 + (0x15 << 2)
label_2ec684:
    if (ctx->pc == 0x2EC684u) {
        ctx->pc = 0x2EC688u;
        goto label_2ec688;
    }
    ctx->pc = 0x2EC680u;
    {
        const bool branch_taken_0x2ec680 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 16));
        if (branch_taken_0x2ec680) {
            ctx->pc = 0x2EC6D8u;
            goto label_2ec6d8;
        }
    }
    ctx->pc = 0x2EC688u;
label_2ec688:
    // 0x2ec688: 0x91280002  lbu         $t0, 0x2($t1)
    ctx->pc = 0x2ec688u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_2ec68c:
    // 0x2ec68c: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x2ec68cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_2ec690:
    // 0x2ec690: 0x15030011  bne         $t0, $v1, . + 4 + (0x11 << 2)
label_2ec694:
    if (ctx->pc == 0x2EC694u) {
        ctx->pc = 0x2EC698u;
        goto label_2ec698;
    }
    ctx->pc = 0x2EC690u;
    {
        const bool branch_taken_0x2ec690 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ec690) {
            ctx->pc = 0x2EC6D8u;
            goto label_2ec6d8;
        }
    }
    ctx->pc = 0x2EC698u;
label_2ec698:
    // 0x2ec698: 0x9123065c  lbu         $v1, 0x65C($t1)
    ctx->pc = 0x2ec698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1628)));
label_2ec69c:
    // 0x2ec69c: 0x1467000e  bne         $v1, $a3, . + 4 + (0xE << 2)
label_2ec6a0:
    if (ctx->pc == 0x2EC6A0u) {
        ctx->pc = 0x2EC6A4u;
        goto label_2ec6a4;
    }
    ctx->pc = 0x2EC69Cu;
    {
        const bool branch_taken_0x2ec69c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x2ec69c) {
            ctx->pc = 0x2EC6D8u;
            goto label_2ec6d8;
        }
    }
    ctx->pc = 0x2EC6A4u;
label_2ec6a4:
    // 0x2ec6a4: 0x92030780  lbu         $v1, 0x780($s0)
    ctx->pc = 0x2ec6a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1920)));
label_2ec6a8:
    // 0x2ec6a8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_2ec6ac:
    if (ctx->pc == 0x2EC6ACu) {
        ctx->pc = 0x2EC6B0u;
        goto label_2ec6b0;
    }
    ctx->pc = 0x2EC6A8u;
    {
        const bool branch_taken_0x2ec6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec6a8) {
            ctx->pc = 0x2EC6D8u;
            goto label_2ec6d8;
        }
    }
    ctx->pc = 0x2EC6B0u;
label_2ec6b0:
    // 0x2ec6b0: 0x912307d8  lbu         $v1, 0x7D8($t1)
    ctx->pc = 0x2ec6b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2008)));
label_2ec6b4:
    // 0x2ec6b4: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
label_2ec6b8:
    if (ctx->pc == 0x2EC6B8u) {
        ctx->pc = 0x2EC6BCu;
        goto label_2ec6bc;
    }
    ctx->pc = 0x2EC6B4u;
    {
        const bool branch_taken_0x2ec6b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2ec6b4) {
            ctx->pc = 0x2EC6C8u;
            goto label_2ec6c8;
        }
    }
    ctx->pc = 0x2EC6BCu;
label_2ec6bc:
    // 0x2ec6bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ec6c0:
    if (ctx->pc == 0x2EC6C0u) {
        ctx->pc = 0x2EC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6BCu;
        // 0x2ec6c0: 0xa1250780  sb          $a1, 0x780($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 1920), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC6C4u;
        goto label_2ec6c4;
    }
    ctx->pc = 0x2EC6BCu;
    {
        const bool branch_taken_0x2ec6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6BCu;
        // 0x2ec6c0: 0xa1250780  sb          $a1, 0x780($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 1920), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec6bc) {
            ctx->pc = 0x2EC6D0u;
            goto label_2ec6d0;
        }
    }
    ctx->pc = 0x2EC6C4u;
label_2ec6c4:
    // 0x2ec6c4: 0x0  nop
    ctx->pc = 0x2ec6c4u;
    // NOP
label_2ec6c8:
    // 0x2ec6c8: 0xa1240780  sb          $a0, 0x780($t1)
    ctx->pc = 0x2ec6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1920), (uint8_t)GPR_U32(ctx, 4));
label_2ec6cc:
    // 0x2ec6cc: 0x0  nop
    ctx->pc = 0x2ec6ccu;
    // NOP
label_2ec6d0:
    // 0x2ec6d0: 0xad2008d8  sw          $zero, 0x8D8($t1)
    ctx->pc = 0x2ec6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 2264), GPR_U32(ctx, 0));
label_2ec6d4:
    // 0x2ec6d4: 0x0  nop
    ctx->pc = 0x2ec6d4u;
    // NOP
label_2ec6d8:
    // 0x2ec6d8: 0x8d290010  lw          $t1, 0x10($t1)
    ctx->pc = 0x2ec6d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_2ec6dc:
    // 0x2ec6dc: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x2ec6dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_2ec6e0:
    // 0x2ec6e0: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_2ec6e4:
    if (ctx->pc == 0x2EC6E4u) {
        ctx->pc = 0x2EC6E8u;
        goto label_2ec6e8;
    }
    ctx->pc = 0x2EC6E0u;
    {
        const bool branch_taken_0x2ec6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec6e0) {
            ctx->pc = 0x2EC680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec680;
        }
    }
    ctx->pc = 0x2EC6E8u;
label_2ec6e8:
    // 0x2ec6e8: 0x8e0308d8  lw          $v1, 0x8D8($s0)
    ctx->pc = 0x2ec6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2264)));
label_2ec6ec:
    // 0x2ec6ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2ec6f0:
    if (ctx->pc == 0x2EC6F0u) {
        ctx->pc = 0x2EC6F4u;
        goto label_2ec6f4;
    }
    ctx->pc = 0x2EC6ECu;
    {
        const bool branch_taken_0x2ec6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec6ec) {
            ctx->pc = 0x2EC708u;
            goto label_2ec708;
        }
    }
    ctx->pc = 0x2EC6F4u;
label_2ec6f4:
    // 0x2ec6f4: 0x8e0508dc  lw          $a1, 0x8DC($s0)
    ctx->pc = 0x2ec6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2268)));
label_2ec6f8:
    // 0x2ec6f8: 0x60f809  jalr        $v1
label_2ec6fc:
    if (ctx->pc == 0x2EC6FCu) {
        ctx->pc = 0x2EC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6F8u;
        // 0x2ec6fc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC700u;
        goto label_2ec700;
    }
    ctx->pc = 0x2EC6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EC700u);
        ctx->pc = 0x2EC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6F8u;
        // 0x2ec6fc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC6F8u, 0x2EC700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EC700u;
label_2ec700:
    // 0x2ec700: 0xae0008d8  sw          $zero, 0x8D8($s0)
    ctx->pc = 0x2ec700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2264), GPR_U32(ctx, 0));
label_2ec704:
    // 0x2ec704: 0x0  nop
    ctx->pc = 0x2ec704u;
    // NOP
label_2ec708:
    // 0x2ec708: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ec708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ec70c:
    // 0x2ec70c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ec70cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ec710:
    // 0x2ec710: 0x3e00008  jr          $ra
label_2ec714:
    if (ctx->pc == 0x2EC714u) {
        ctx->pc = 0x2EC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC710u;
        // 0x2ec714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC718u;
        goto label_fallthrough_0x2ec710;
    }
    ctx->pc = 0x2EC710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC710u;
        // 0x2ec714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ec710:
    ctx->pc = 0x2EC718u;
}
