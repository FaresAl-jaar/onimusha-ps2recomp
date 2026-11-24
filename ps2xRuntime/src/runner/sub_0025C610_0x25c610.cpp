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

// Function: sub_0025C610
// Address: 0x25c610 - 0x25c784
void sub_0025C610_0x25c610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C610_0x25c610");
#endif

    switch (ctx->pc) {
        case 0x25c640u: goto label_25c640;
        case 0x25c668u: goto label_25c668;
        case 0x25c680u: goto label_25c680;
        case 0x25c708u: goto label_25c708;
        default: break;
    }

    ctx->pc = 0x25c610u;

    // 0x25c610: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x25c610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x25c614: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25c614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25c618: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25c618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25c61c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25c61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25c620: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25c620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c624: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25c628: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25c628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c62c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x25c62cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c630: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25c630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25c634: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x25c634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x25c638: 0xc09e900  jal         func_27A400
    ctx->pc = 0x25C638u;
    SET_GPR_U32(ctx, 31, 0x25C640u);
    ctx->pc = 0x25C63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C638u;
    // 0x25c63c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A400u, 0x25C638u, 0x25C640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C640u;
label_25c640:
    // 0x25c640: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25c640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c644: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C644u;
    {
        const bool branch_taken_0x25c644 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c644) {
            ctx->pc = 0x25C658u;
            goto label_25c658;
        }
    }
    ctx->pc = 0x25C64Cu;
    // 0x25c64c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x25C64Cu;
    {
        const bool branch_taken_0x25c64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C64Cu;
        // 0x25c650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c64c) {
            ctx->pc = 0x25C768u;
            goto label_25c768;
        }
    }
    ctx->pc = 0x25C654u;
    // 0x25c654: 0x0  nop
    ctx->pc = 0x25c654u;
    // NOP
label_25c658:
    // 0x25c658: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x25c658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x25c65c: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x25c65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x25c660: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x25C660u;
    SET_GPR_U32(ctx, 31, 0x25C668u);
    ctx->pc = 0x25C664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C660u;
    // 0x25c664: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x25C660u, 0x25C668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C668u;
label_25c668:
    // 0x25c668: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x25C668u;
    {
        const bool branch_taken_0x25c668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C668u;
        // 0x25c66c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c668) {
            ctx->pc = 0x25C6F0u;
            goto label_25c6f0;
        }
    }
    ctx->pc = 0x25C670u;
    // 0x25c670: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x25c670u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x25c674: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x25C674u;
    {
        const bool branch_taken_0x25c674 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C674u;
        // 0x25c678: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c674) {
            ctx->pc = 0x25C6B0u;
            goto label_25c6b0;
        }
    }
    ctx->pc = 0x25C67Cu;
    // 0x25c67c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x25c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_25c680:
    // 0x25c680: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25c680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c684: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x25c684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25c688: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C688u;
    {
        const bool branch_taken_0x25c688 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x25C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C688u;
        // 0x25c68c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c688) {
            ctx->pc = 0x25C6A0u;
            goto label_25c6a0;
        }
    }
    ctx->pc = 0x25C690u;
    // 0x25c690: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x25c690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x25c694: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25C694u;
    {
        const bool branch_taken_0x25c694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C694u;
        // 0x25c698: 0x8c440050  lw          $a0, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c694) {
            ctx->pc = 0x25C6B0u;
            goto label_25c6b0;
        }
    }
    ctx->pc = 0x25C69Cu;
    // 0x25c69c: 0x0  nop
    ctx->pc = 0x25c69cu;
    // NOP
label_25c6a0:
    // 0x25c6a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x25c6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x25c6a4: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x25c6a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x25c6a8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x25C6A8u;
    {
        const bool branch_taken_0x25c6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C6A8u;
        // 0x25c6ac: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c6a8) {
            ctx->pc = 0x25C680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c680;
        }
    }
    ctx->pc = 0x25C6B0u;
label_25c6b0:
    // 0x25c6b0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x25C6B0u;
    {
        const bool branch_taken_0x25c6b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c6b0) {
            ctx->pc = 0x25C6F0u;
            goto label_25c6f0;
        }
    }
    ctx->pc = 0x25C6B8u;
    // 0x25c6b8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C6B8u;
    {
        const bool branch_taken_0x25c6b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c6b8) {
            ctx->pc = 0x25C6D0u;
            goto label_25c6d0;
        }
    }
    ctx->pc = 0x25C6C0u;
    // 0x25c6c0: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x25c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x25c6c4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x25c6c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c6c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25C6C8u;
    {
        const bool branch_taken_0x25c6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c6c8) {
            ctx->pc = 0x25C6F0u;
            goto label_25c6f0;
        }
    }
    ctx->pc = 0x25C6D0u;
label_25c6d0:
    // 0x25c6d0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C6D0u;
    {
        const bool branch_taken_0x25c6d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c6d0) {
            ctx->pc = 0x25C6E8u;
            goto label_25c6e8;
        }
    }
    ctx->pc = 0x25C6D8u;
    // 0x25c6d8: 0x8c8206ac  lw          $v0, 0x6AC($a0)
    ctx->pc = 0x25c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x25c6dc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25c6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25c6e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C6E0u;
    {
        const bool branch_taken_0x25c6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c6e0) {
            ctx->pc = 0x25C6F0u;
            goto label_25c6f0;
        }
    }
    ctx->pc = 0x25C6E8u;
label_25c6e8:
    // 0x25c6e8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x25C6E8u;
    {
        const bool branch_taken_0x25c6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C6E8u;
        // 0x25c6ec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c6e8) {
            ctx->pc = 0x25C768u;
            goto label_25c768;
        }
    }
    ctx->pc = 0x25C6F0u;
label_25c6f0:
    // 0x25c6f0: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x25c6f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x25c6f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25c6f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c6f8: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x25C6F8u;
    {
        const bool branch_taken_0x25c6f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C6F8u;
        // 0x25c6fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c6f8) {
            ctx->pc = 0x25C768u;
            goto label_25c768;
        }
    }
    ctx->pc = 0x25C700u;
    // 0x25c700: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25c700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25c704: 0x0  nop
    ctx->pc = 0x25c704u;
    // NOP
label_25c708:
    // 0x25c708: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x25C708u;
    {
        const bool branch_taken_0x25c708 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c708) {
            ctx->pc = 0x25C728u;
            goto label_25c728;
        }
    }
    ctx->pc = 0x25C710u;
    // 0x25c710: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x25c710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25c714: 0x8c6329c0  lw          $v1, 0x29C0($v1)
    ctx->pc = 0x25c714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10688)));
    // 0x25c718: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25c718u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c71c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x25C71Cu;
    {
        const bool branch_taken_0x25c71c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c71c) {
            ctx->pc = 0x25C758u;
            goto label_25c758;
        }
    }
    ctx->pc = 0x25C724u;
    // 0x25c724: 0x0  nop
    ctx->pc = 0x25c724u;
    // NOP
label_25c728:
    // 0x25c728: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25C728u;
    {
        const bool branch_taken_0x25c728 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c728) {
            ctx->pc = 0x25C748u;
            goto label_25c748;
        }
    }
    ctx->pc = 0x25C730u;
    // 0x25c730: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x25c730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25c734: 0x8c6306ac  lw          $v1, 0x6AC($v1)
    ctx->pc = 0x25c734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1708)));
    // 0x25c738: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25c738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25c73c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25C73Cu;
    {
        const bool branch_taken_0x25c73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c73c) {
            ctx->pc = 0x25C758u;
            goto label_25c758;
        }
    }
    ctx->pc = 0x25C744u;
    // 0x25c744: 0x0  nop
    ctx->pc = 0x25c744u;
    // NOP
label_25c748:
    // 0x25c748: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x25c748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25c74c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x25c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x25c750: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25C750u;
    {
        const bool branch_taken_0x25c750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C750u;
        // 0x25c754: 0x8c420050  lw          $v0, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c750) {
            ctx->pc = 0x25C768u;
            goto label_25c768;
        }
    }
    ctx->pc = 0x25C758u;
label_25c758:
    // 0x25c758: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x25c758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25c75c: 0x90182a  slt         $v1, $a0, $s0
    ctx->pc = 0x25c75cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x25c760: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x25C760u;
    {
        const bool branch_taken_0x25c760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C760u;
        // 0x25c764: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c760) {
            ctx->pc = 0x25C708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c708;
        }
    }
    ctx->pc = 0x25C768u;
label_25c768:
    // 0x25c768: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25c768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25c76c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25c76cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c770: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25c770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c77c: 0x3e00008  jr          $ra
    ctx->pc = 0x25C77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C77Cu;
        // 0x25c780: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C784u;
}
