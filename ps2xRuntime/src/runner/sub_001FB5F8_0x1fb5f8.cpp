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

// Function: sub_001FB5F8
// Address: 0x1fb5f8 - 0x1fb700
void sub_001FB5F8_0x1fb5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB5F8_0x1fb5f8");
#endif

    switch (ctx->pc) {
        case 0x1fb5f8u: goto label_1fb5f8;
        case 0x1fb5fcu: goto label_1fb5fc;
        case 0x1fb600u: goto label_1fb600;
        case 0x1fb604u: goto label_1fb604;
        case 0x1fb608u: goto label_1fb608;
        case 0x1fb60cu: goto label_1fb60c;
        case 0x1fb610u: goto label_1fb610;
        case 0x1fb614u: goto label_1fb614;
        case 0x1fb618u: goto label_1fb618;
        case 0x1fb61cu: goto label_1fb61c;
        case 0x1fb620u: goto label_1fb620;
        case 0x1fb624u: goto label_1fb624;
        case 0x1fb628u: goto label_1fb628;
        case 0x1fb62cu: goto label_1fb62c;
        case 0x1fb630u: goto label_1fb630;
        case 0x1fb634u: goto label_1fb634;
        case 0x1fb638u: goto label_1fb638;
        case 0x1fb63cu: goto label_1fb63c;
        case 0x1fb640u: goto label_1fb640;
        case 0x1fb644u: goto label_1fb644;
        case 0x1fb648u: goto label_1fb648;
        case 0x1fb64cu: goto label_1fb64c;
        case 0x1fb650u: goto label_1fb650;
        case 0x1fb654u: goto label_1fb654;
        case 0x1fb658u: goto label_1fb658;
        case 0x1fb65cu: goto label_1fb65c;
        case 0x1fb660u: goto label_1fb660;
        case 0x1fb664u: goto label_1fb664;
        case 0x1fb668u: goto label_1fb668;
        case 0x1fb66cu: goto label_1fb66c;
        case 0x1fb670u: goto label_1fb670;
        case 0x1fb674u: goto label_1fb674;
        case 0x1fb678u: goto label_1fb678;
        case 0x1fb67cu: goto label_1fb67c;
        case 0x1fb680u: goto label_1fb680;
        case 0x1fb684u: goto label_1fb684;
        case 0x1fb688u: goto label_1fb688;
        case 0x1fb68cu: goto label_1fb68c;
        case 0x1fb690u: goto label_1fb690;
        case 0x1fb694u: goto label_1fb694;
        case 0x1fb698u: goto label_1fb698;
        case 0x1fb69cu: goto label_1fb69c;
        case 0x1fb6a0u: goto label_1fb6a0;
        case 0x1fb6a4u: goto label_1fb6a4;
        case 0x1fb6a8u: goto label_1fb6a8;
        case 0x1fb6acu: goto label_1fb6ac;
        case 0x1fb6b0u: goto label_1fb6b0;
        case 0x1fb6b4u: goto label_1fb6b4;
        case 0x1fb6b8u: goto label_1fb6b8;
        case 0x1fb6bcu: goto label_1fb6bc;
        case 0x1fb6c0u: goto label_1fb6c0;
        case 0x1fb6c4u: goto label_1fb6c4;
        case 0x1fb6c8u: goto label_1fb6c8;
        case 0x1fb6ccu: goto label_1fb6cc;
        case 0x1fb6d0u: goto label_1fb6d0;
        case 0x1fb6d4u: goto label_1fb6d4;
        case 0x1fb6d8u: goto label_1fb6d8;
        case 0x1fb6dcu: goto label_1fb6dc;
        case 0x1fb6e0u: goto label_1fb6e0;
        case 0x1fb6e4u: goto label_1fb6e4;
        case 0x1fb6e8u: goto label_1fb6e8;
        case 0x1fb6ecu: goto label_1fb6ec;
        case 0x1fb6f0u: goto label_1fb6f0;
        case 0x1fb6f4u: goto label_1fb6f4;
        case 0x1fb6f8u: goto label_1fb6f8;
        case 0x1fb6fcu: goto label_1fb6fc;
        default: break;
    }

    ctx->pc = 0x1fb5f8u;

label_1fb5f8:
    // 0x1fb5f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fb5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fb5fc:
    // 0x1fb5fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fb5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1fb600:
    // 0x1fb600: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1fb600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fb604:
    // 0x1fb604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fb608:
    // 0x1fb608: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1fb608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fb60c:
    // 0x1fb60c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1fb610:
    // 0x1fb610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fb610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb614:
    // 0x1fb614: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fb614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1fb618:
    // 0x1fb618: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fb618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fb61c:
    // 0x1fb61c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fb61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1fb620:
    // 0x1fb620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fb620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fb624:
    // 0x1fb624: 0xc07f410  jal         func_1FD040
label_1fb628:
    if (ctx->pc == 0x1FB628u) {
        ctx->pc = 0x1FB628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB624u;
        // 0x1fb628: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB62Cu;
        goto label_1fb62c;
    }
    ctx->pc = 0x1FB624u;
    SET_GPR_U32(ctx, 31, 0x1FB62Cu);
    ctx->pc = 0x1FB628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB624u;
    // 0x1fb628: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD040u, 0x1FB624u, 0x1FB62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB62Cu;
label_1fb62c:
    // 0x1fb62c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fb62cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb630:
    // 0x1fb630: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1fb630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1fb634:
    // 0x1fb634: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1fb634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1fb638:
    // 0x1fb638: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_1fb63c:
    if (ctx->pc == 0x1FB63Cu) {
        ctx->pc = 0x1FB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB638u;
        // 0x1fb63c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB640u;
        goto label_1fb640;
    }
    ctx->pc = 0x1FB638u;
    {
        const bool branch_taken_0x1fb638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB638u;
        // 0x1fb63c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb638) {
            ctx->pc = 0x1FB690u;
            goto label_1fb690;
        }
    }
    ctx->pc = 0x1FB640u;
label_1fb640:
    // 0x1fb640: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1fb640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1fb644:
    // 0x1fb644: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1fb648:
    if (ctx->pc == 0x1FB648u) {
        ctx->pc = 0x1FB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB644u;
        // 0x1fb648: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB64Cu;
        goto label_1fb64c;
    }
    ctx->pc = 0x1FB644u;
    {
        const bool branch_taken_0x1fb644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB644u;
        // 0x1fb648: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb644) {
            ctx->pc = 0x1FB660u;
            goto label_1fb660;
        }
    }
    ctx->pc = 0x1FB64Cu;
label_1fb64c:
    // 0x1fb64c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1fb64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1fb650:
    // 0x1fb650: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1fb654:
    if (ctx->pc == 0x1FB654u) {
        ctx->pc = 0x1FB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB650u;
        // 0x1fb654: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB658u;
        goto label_1fb658;
    }
    ctx->pc = 0x1FB650u;
    {
        const bool branch_taken_0x1fb650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB650u;
        // 0x1fb654: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb650) {
            ctx->pc = 0x1FB670u;
            goto label_1fb670;
        }
    }
    ctx->pc = 0x1FB658u;
label_1fb658:
    // 0x1fb658: 0x10000023  b           . + 4 + (0x23 << 2)
label_1fb65c:
    if (ctx->pc == 0x1FB65Cu) {
        ctx->pc = 0x1FB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB658u;
        // 0x1fb65c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB660u;
        goto label_1fb660;
    }
    ctx->pc = 0x1FB658u;
    {
        const bool branch_taken_0x1fb658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB658u;
        // 0x1fb65c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb658) {
            ctx->pc = 0x1FB6E8u;
            goto label_1fb6e8;
        }
    }
    ctx->pc = 0x1FB660u;
label_1fb660:
    // 0x1fb660: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_1fb664:
    if (ctx->pc == 0x1FB664u) {
        ctx->pc = 0x1FB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB660u;
        // 0x1fb664: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB668u;
        goto label_1fb668;
    }
    ctx->pc = 0x1FB660u;
    {
        const bool branch_taken_0x1fb660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB660u;
        // 0x1fb664: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb660) {
            ctx->pc = 0x1FB6B0u;
            goto label_1fb6b0;
        }
    }
    ctx->pc = 0x1FB668u;
label_1fb668:
    // 0x1fb668: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1fb66c:
    if (ctx->pc == 0x1FB66Cu) {
        ctx->pc = 0x1FB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB668u;
        // 0x1fb66c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB670u;
        goto label_1fb670;
    }
    ctx->pc = 0x1FB668u;
    {
        const bool branch_taken_0x1fb668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB668u;
        // 0x1fb66c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb668) {
            ctx->pc = 0x1FB6E8u;
            goto label_1fb6e8;
        }
    }
    ctx->pc = 0x1FB670u;
label_1fb670:
    // 0x1fb670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb674:
    // 0x1fb674: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fb674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fb678:
    // 0x1fb678: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1fb678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fb67c:
    // 0x1fb67c: 0xc07edc0  jal         func_1FB700
label_1fb680:
    if (ctx->pc == 0x1FB680u) {
        ctx->pc = 0x1FB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB67Cu;
        // 0x1fb680: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB684u;
        goto label_1fb684;
    }
    ctx->pc = 0x1FB67Cu;
    SET_GPR_U32(ctx, 31, 0x1FB684u);
    ctx->pc = 0x1FB680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB67Cu;
    // 0x1fb680: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB700u, 0x1FB67Cu, 0x1FB684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB684u;
label_1fb684:
    // 0x1fb684: 0x10000017  b           . + 4 + (0x17 << 2)
label_1fb688:
    if (ctx->pc == 0x1FB688u) {
        ctx->pc = 0x1FB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB684u;
        // 0x1fb688: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB68Cu;
        goto label_1fb68c;
    }
    ctx->pc = 0x1FB684u;
    {
        const bool branch_taken_0x1fb684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB684u;
        // 0x1fb688: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb684) {
            ctx->pc = 0x1FB6E4u;
            goto label_1fb6e4;
        }
    }
    ctx->pc = 0x1FB68Cu;
label_1fb68c:
    // 0x1fb68c: 0x0  nop
    ctx->pc = 0x1fb68cu;
    // NOP
label_1fb690:
    // 0x1fb690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb694:
    // 0x1fb694: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fb694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fb698:
    // 0x1fb698: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1fb698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fb69c:
    // 0x1fb69c: 0xc07eeda  jal         func_1FBB68
label_1fb6a0:
    if (ctx->pc == 0x1FB6A0u) {
        ctx->pc = 0x1FB6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB69Cu;
        // 0x1fb6a0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB6A4u;
        goto label_1fb6a4;
    }
    ctx->pc = 0x1FB69Cu;
    SET_GPR_U32(ctx, 31, 0x1FB6A4u);
    ctx->pc = 0x1FB6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB69Cu;
    // 0x1fb6a0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBB68u, 0x1FB69Cu, 0x1FB6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB6A4u;
label_1fb6a4:
    // 0x1fb6a4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1fb6a8:
    if (ctx->pc == 0x1FB6A8u) {
        ctx->pc = 0x1FB6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6A4u;
        // 0x1fb6a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB6ACu;
        goto label_1fb6ac;
    }
    ctx->pc = 0x1FB6A4u;
    {
        const bool branch_taken_0x1fb6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6A4u;
        // 0x1fb6a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6a4) {
            ctx->pc = 0x1FB6E4u;
            goto label_1fb6e4;
        }
    }
    ctx->pc = 0x1FB6ACu;
label_1fb6ac:
    // 0x1fb6ac: 0x0  nop
    ctx->pc = 0x1fb6acu;
    // NOP
label_1fb6b0:
    // 0x1fb6b0: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x1fb6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1fb6b4:
    // 0x1fb6b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fb6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fb6b8:
    // 0x1fb6b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1fb6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fb6bc:
    // 0x1fb6bc: 0xc07f0f6  jal         func_1FC3D8
label_1fb6c0:
    if (ctx->pc == 0x1FB6C0u) {
        ctx->pc = 0x1FB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6BCu;
        // 0x1fb6c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB6C4u;
        goto label_1fb6c4;
    }
    ctx->pc = 0x1FB6BCu;
    SET_GPR_U32(ctx, 31, 0x1FB6C4u);
    ctx->pc = 0x1FB6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB6BCu;
    // 0x1fb6c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3D8u, 0x1FB6BCu, 0x1FB6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB6C4u;
label_1fb6c4:
    // 0x1fb6c4: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x1fb6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_1fb6c8:
    // 0x1fb6c8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1fb6cc:
    if (ctx->pc == 0x1FB6CCu) {
        ctx->pc = 0x1FB6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6C8u;
        // 0x1fb6cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB6D0u;
        goto label_1fb6d0;
    }
    ctx->pc = 0x1FB6C8u;
    {
        const bool branch_taken_0x1fb6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb6c8) {
            ctx->pc = 0x1FB6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB6C8u;
            // 0x1fb6cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB6E4u;
            goto label_1fb6e4;
        }
    }
    ctx->pc = 0x1FB6D0u;
label_1fb6d0:
    // 0x1fb6d0: 0xde2600a8  ld          $a2, 0xA8($s1)
    ctx->pc = 0x1fb6d0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 168)));
label_1fb6d4:
    // 0x1fb6d4: 0x8e2400f8  lw          $a0, 0xF8($s1)
    ctx->pc = 0x1fb6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_1fb6d8:
    // 0x1fb6d8: 0x40f809  jalr        $v0
label_1fb6dc:
    if (ctx->pc == 0x1FB6DCu) {
        ctx->pc = 0x1FB6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6D8u;
        // 0x1fb6dc: 0x922500b8  lbu         $a1, 0xB8($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB6E0u;
        goto label_1fb6e0;
    }
    ctx->pc = 0x1FB6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FB6E0u);
        ctx->pc = 0x1FB6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6D8u;
        // 0x1fb6dc: 0x922500b8  lbu         $a1, 0xB8($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB6D8u, 0x1FB6E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB6E0u;
label_1fb6e0:
    // 0x1fb6e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fb6e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb6e4:
    // 0x1fb6e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb6e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb6e8:
    // 0x1fb6e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb6e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1fb6ec:
    // 0x1fb6ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fb6ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb6f0:
    // 0x1fb6f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fb6f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1fb6f4:
    // 0x1fb6f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fb6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb6f8:
    // 0x1fb6f8: 0x3e00008  jr          $ra
label_1fb6fc:
    if (ctx->pc == 0x1FB6FCu) {
        ctx->pc = 0x1FB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6F8u;
        // 0x1fb6fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB700u;
        goto label_fallthrough_0x1fb6f8;
    }
    ctx->pc = 0x1FB6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6F8u;
        // 0x1fb6fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fb6f8:
    ctx->pc = 0x1FB700u;
}
