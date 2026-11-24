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

// Function: sub_0033C630
// Address: 0x33c630 - 0x33c8f0
void sub_0033C630_0x33c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C630_0x33c630");
#endif

    switch (ctx->pc) {
        case 0x33c684u: goto label_33c684;
        case 0x33c69cu: goto label_33c69c;
        case 0x33c6b4u: goto label_33c6b4;
        case 0x33c6ccu: goto label_33c6cc;
        case 0x33c6e4u: goto label_33c6e4;
        case 0x33c6fcu: goto label_33c6fc;
        case 0x33c714u: goto label_33c714;
        case 0x33c72cu: goto label_33c72c;
        case 0x33c744u: goto label_33c744;
        case 0x33c75cu: goto label_33c75c;
        case 0x33c774u: goto label_33c774;
        case 0x33c78cu: goto label_33c78c;
        case 0x33c7a4u: goto label_33c7a4;
        case 0x33c7bcu: goto label_33c7bc;
        case 0x33c7d4u: goto label_33c7d4;
        case 0x33c7e4u: goto label_33c7e4;
        case 0x33c7fcu: goto label_33c7fc;
        case 0x33c80cu: goto label_33c80c;
        case 0x33c824u: goto label_33c824;
        case 0x33c834u: goto label_33c834;
        case 0x33c84cu: goto label_33c84c;
        case 0x33c864u: goto label_33c864;
        case 0x33c87cu: goto label_33c87c;
        case 0x33c894u: goto label_33c894;
        case 0x33c8acu: goto label_33c8ac;
        case 0x33c8c4u: goto label_33c8c4;
        default: break;
    }

    ctx->pc = 0x33c630u;

    // 0x33c630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33c630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33c634: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x33c634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x33c638: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33c638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33c63c: 0x2c41001a  sltiu       $at, $v0, 0x1A
    ctx->pc = 0x33c63cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x33c640: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33c640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33c644: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33c644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33c648: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33c648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c64c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33c64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33c650: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33c650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c654: 0x1020009e  beqz        $at, . + 4 + (0x9E << 2)
    ctx->pc = 0x33C654u;
    {
        const bool branch_taken_0x33c654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C654u;
        // 0x33c658: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c654) {
            ctx->pc = 0x33C8D0u;
            goto label_33c8d0;
        }
    }
    ctx->pc = 0x33C65Cu;
    // 0x33c65c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x33c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x33c660: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33c660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33c664: 0x2463ef80  addiu       $v1, $v1, -0x1080
    ctx->pc = 0x33c664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963072));
    // 0x33c668: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33c668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c66c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c670: 0x400008  jr          $v0
    ctx->pc = 0x33C670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33C678u: goto label_33c678;
            case 0x33C690u: goto label_33c690;
            case 0x33C6A8u: goto label_33c6a8;
            case 0x33C6C0u: goto label_33c6c0;
            case 0x33C6D8u: goto label_33c6d8;
            case 0x33C6F0u: goto label_33c6f0;
            case 0x33C708u: goto label_33c708;
            case 0x33C720u: goto label_33c720;
            case 0x33C738u: goto label_33c738;
            case 0x33C750u: goto label_33c750;
            case 0x33C768u: goto label_33c768;
            case 0x33C780u: goto label_33c780;
            case 0x33C798u: goto label_33c798;
            case 0x33C7B0u: goto label_33c7b0;
            case 0x33C7C8u: goto label_33c7c8;
            case 0x33C7F0u: goto label_33c7f0;
            case 0x33C818u: goto label_33c818;
            case 0x33C840u: goto label_33c840;
            case 0x33C858u: goto label_33c858;
            case 0x33C870u: goto label_33c870;
            case 0x33C888u: goto label_33c888;
            case 0x33C8A0u: goto label_33c8a0;
            case 0x33C8B8u: goto label_33c8b8;
            case 0x33C8D0u: goto label_33c8d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C670u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33C678u;
label_33c678:
    // 0x33c678: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c67c: 0xc0a9a94  jal         func_2A6A50
    ctx->pc = 0x33C67Cu;
    SET_GPR_U32(ctx, 31, 0x33C684u);
    ctx->pc = 0x33C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C67Cu;
    // 0x33c680: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6A50u, 0x33C67Cu, 0x33C684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C684u;
label_33c684:
    // 0x33c684: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x33C684u;
    {
        const bool branch_taken_0x33c684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c684) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C68Cu;
    // 0x33c68c: 0x0  nop
    ctx->pc = 0x33c68cu;
    // NOP
label_33c690:
    // 0x33c690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c694: 0xc0a9aa4  jal         func_2A6A90
    ctx->pc = 0x33C694u;
    SET_GPR_U32(ctx, 31, 0x33C69Cu);
    ctx->pc = 0x33C698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C694u;
    // 0x33c698: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6A90u, 0x33C694u, 0x33C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C69Cu;
label_33c69c:
    // 0x33c69c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x33C69Cu;
    {
        const bool branch_taken_0x33c69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c69c) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C6A4u;
    // 0x33c6a4: 0x0  nop
    ctx->pc = 0x33c6a4u;
    // NOP
label_33c6a8:
    // 0x33c6a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c6ac: 0xc0a9ab4  jal         func_2A6AD0
    ctx->pc = 0x33C6ACu;
    SET_GPR_U32(ctx, 31, 0x33C6B4u);
    ctx->pc = 0x33C6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C6ACu;
    // 0x33c6b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6AD0u, 0x33C6ACu, 0x33C6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C6B4u;
label_33c6b4:
    // 0x33c6b4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x33C6B4u;
    {
        const bool branch_taken_0x33c6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c6b4) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C6BCu;
    // 0x33c6bc: 0x0  nop
    ctx->pc = 0x33c6bcu;
    // NOP
label_33c6c0:
    // 0x33c6c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c6c4: 0xc0a9ac4  jal         func_2A6B10
    ctx->pc = 0x33C6C4u;
    SET_GPR_U32(ctx, 31, 0x33C6CCu);
    ctx->pc = 0x33C6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C6C4u;
    // 0x33c6c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6B10u, 0x33C6C4u, 0x33C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C6CCu;
label_33c6cc:
    // 0x33c6cc: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x33C6CCu;
    {
        const bool branch_taken_0x33c6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c6cc) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C6D4u;
    // 0x33c6d4: 0x0  nop
    ctx->pc = 0x33c6d4u;
    // NOP
label_33c6d8:
    // 0x33c6d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c6dc: 0xc0a9ad4  jal         func_2A6B50
    ctx->pc = 0x33C6DCu;
    SET_GPR_U32(ctx, 31, 0x33C6E4u);
    ctx->pc = 0x33C6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C6DCu;
    // 0x33c6e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6B50u, 0x33C6DCu, 0x33C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C6E4u;
label_33c6e4:
    // 0x33c6e4: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x33C6E4u;
    {
        const bool branch_taken_0x33c6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c6e4) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C6ECu;
    // 0x33c6ec: 0x0  nop
    ctx->pc = 0x33c6ecu;
    // NOP
label_33c6f0:
    // 0x33c6f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c6f4: 0xc0a9af4  jal         func_2A6BD0
    ctx->pc = 0x33C6F4u;
    SET_GPR_U32(ctx, 31, 0x33C6FCu);
    ctx->pc = 0x33C6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C6F4u;
    // 0x33c6f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6BD0u, 0x33C6F4u, 0x33C6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C6FCu;
label_33c6fc:
    // 0x33c6fc: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x33C6FCu;
    {
        const bool branch_taken_0x33c6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c6fc) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C704u;
    // 0x33c704: 0x0  nop
    ctx->pc = 0x33c704u;
    // NOP
label_33c708:
    // 0x33c708: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c70c: 0xc0a9b04  jal         func_2A6C10
    ctx->pc = 0x33C70Cu;
    SET_GPR_U32(ctx, 31, 0x33C714u);
    ctx->pc = 0x33C710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C70Cu;
    // 0x33c710: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6C10u, 0x33C70Cu, 0x33C714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C714u;
label_33c714:
    // 0x33c714: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x33C714u;
    {
        const bool branch_taken_0x33c714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c714) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C71Cu;
    // 0x33c71c: 0x0  nop
    ctx->pc = 0x33c71cu;
    // NOP
label_33c720:
    // 0x33c720: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c724: 0xc0a9b14  jal         func_2A6C50
    ctx->pc = 0x33C724u;
    SET_GPR_U32(ctx, 31, 0x33C72Cu);
    ctx->pc = 0x33C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C724u;
    // 0x33c728: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6C50u, 0x33C724u, 0x33C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C72Cu;
label_33c72c:
    // 0x33c72c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x33C72Cu;
    {
        const bool branch_taken_0x33c72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c72c) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C734u;
    // 0x33c734: 0x0  nop
    ctx->pc = 0x33c734u;
    // NOP
label_33c738:
    // 0x33c738: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c73c: 0xc0a9b24  jal         func_2A6C90
    ctx->pc = 0x33C73Cu;
    SET_GPR_U32(ctx, 31, 0x33C744u);
    ctx->pc = 0x33C740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C73Cu;
    // 0x33c740: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6C90u, 0x33C73Cu, 0x33C744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C744u;
label_33c744:
    // 0x33c744: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x33C744u;
    {
        const bool branch_taken_0x33c744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c744) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C74Cu;
    // 0x33c74c: 0x0  nop
    ctx->pc = 0x33c74cu;
    // NOP
label_33c750:
    // 0x33c750: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c754: 0xc0a9b34  jal         func_2A6CD0
    ctx->pc = 0x33C754u;
    SET_GPR_U32(ctx, 31, 0x33C75Cu);
    ctx->pc = 0x33C758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C754u;
    // 0x33c758: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6CD0u, 0x33C754u, 0x33C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C75Cu;
label_33c75c:
    // 0x33c75c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x33C75Cu;
    {
        const bool branch_taken_0x33c75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c75c) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C764u;
    // 0x33c764: 0x0  nop
    ctx->pc = 0x33c764u;
    // NOP
label_33c768:
    // 0x33c768: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c76c: 0xc0a9b44  jal         func_2A6D10
    ctx->pc = 0x33C76Cu;
    SET_GPR_U32(ctx, 31, 0x33C774u);
    ctx->pc = 0x33C770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C76Cu;
    // 0x33c770: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6D10u, 0x33C76Cu, 0x33C774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C774u;
label_33c774:
    // 0x33c774: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x33C774u;
    {
        const bool branch_taken_0x33c774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c774) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C77Cu;
    // 0x33c77c: 0x0  nop
    ctx->pc = 0x33c77cu;
    // NOP
label_33c780:
    // 0x33c780: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c784: 0xc0a9b54  jal         func_2A6D50
    ctx->pc = 0x33C784u;
    SET_GPR_U32(ctx, 31, 0x33C78Cu);
    ctx->pc = 0x33C788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C784u;
    // 0x33c788: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6D50u, 0x33C784u, 0x33C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C78Cu;
label_33c78c:
    // 0x33c78c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x33C78Cu;
    {
        const bool branch_taken_0x33c78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c78c) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C794u;
    // 0x33c794: 0x0  nop
    ctx->pc = 0x33c794u;
    // NOP
label_33c798:
    // 0x33c798: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c79c: 0xc0a9b64  jal         func_2A6D90
    ctx->pc = 0x33C79Cu;
    SET_GPR_U32(ctx, 31, 0x33C7A4u);
    ctx->pc = 0x33C7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C79Cu;
    // 0x33c7a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6D90u, 0x33C79Cu, 0x33C7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C7A4u;
label_33c7a4:
    // 0x33c7a4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x33C7A4u;
    {
        const bool branch_taken_0x33c7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c7a4) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C7ACu;
    // 0x33c7ac: 0x0  nop
    ctx->pc = 0x33c7acu;
    // NOP
label_33c7b0:
    // 0x33c7b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c7b4: 0xc0a9a94  jal         func_2A6A50
    ctx->pc = 0x33C7B4u;
    SET_GPR_U32(ctx, 31, 0x33C7BCu);
    ctx->pc = 0x33C7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C7B4u;
    // 0x33c7b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6A50u, 0x33C7B4u, 0x33C7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C7BCu;
label_33c7bc:
    // 0x33c7bc: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x33C7BCu;
    {
        const bool branch_taken_0x33c7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c7bc) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C7C4u;
    // 0x33c7c4: 0x0  nop
    ctx->pc = 0x33c7c4u;
    // NOP
label_33c7c8:
    // 0x33c7c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c7cc: 0xc0a9b44  jal         func_2A6D10
    ctx->pc = 0x33C7CCu;
    SET_GPR_U32(ctx, 31, 0x33C7D4u);
    ctx->pc = 0x33C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C7CCu;
    // 0x33c7d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6D10u, 0x33C7CCu, 0x33C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C7D4u;
label_33c7d4:
    // 0x33c7d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33c7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c7d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c7dc: 0xc0a9aa4  jal         func_2A6A90
    ctx->pc = 0x33C7DCu;
    SET_GPR_U32(ctx, 31, 0x33C7E4u);
    ctx->pc = 0x33C7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C7DCu;
    // 0x33c7e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6A90u, 0x33C7DCu, 0x33C7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C7E4u;
label_33c7e4:
    // 0x33c7e4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x33C7E4u;
    {
        const bool branch_taken_0x33c7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c7e4) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C7ECu;
    // 0x33c7ec: 0x0  nop
    ctx->pc = 0x33c7ecu;
    // NOP
label_33c7f0:
    // 0x33c7f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c7f4: 0xc0a9b54  jal         func_2A6D50
    ctx->pc = 0x33C7F4u;
    SET_GPR_U32(ctx, 31, 0x33C7FCu);
    ctx->pc = 0x33C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C7F4u;
    // 0x33c7f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6D50u, 0x33C7F4u, 0x33C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C7FCu;
label_33c7fc:
    // 0x33c7fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33c7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c800: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c804: 0xc0a9ab4  jal         func_2A6AD0
    ctx->pc = 0x33C804u;
    SET_GPR_U32(ctx, 31, 0x33C80Cu);
    ctx->pc = 0x33C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C804u;
    // 0x33c808: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6AD0u, 0x33C804u, 0x33C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C80Cu;
label_33c80c:
    // 0x33c80c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x33C80Cu;
    {
        const bool branch_taken_0x33c80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c80c) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C814u;
    // 0x33c814: 0x0  nop
    ctx->pc = 0x33c814u;
    // NOP
label_33c818:
    // 0x33c818: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c81c: 0xc0a9b64  jal         func_2A6D90
    ctx->pc = 0x33C81Cu;
    SET_GPR_U32(ctx, 31, 0x33C824u);
    ctx->pc = 0x33C820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C81Cu;
    // 0x33c820: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6D90u, 0x33C81Cu, 0x33C824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C824u;
label_33c824:
    // 0x33c824: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33c824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c828: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c82c: 0xc0a9ac4  jal         func_2A6B10
    ctx->pc = 0x33C82Cu;
    SET_GPR_U32(ctx, 31, 0x33C834u);
    ctx->pc = 0x33C830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C82Cu;
    // 0x33c830: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6B10u, 0x33C82Cu, 0x33C834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C834u;
label_33c834:
    // 0x33c834: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x33C834u;
    {
        const bool branch_taken_0x33c834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c834) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C83Cu;
    // 0x33c83c: 0x0  nop
    ctx->pc = 0x33c83cu;
    // NOP
label_33c840:
    // 0x33c840: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c844: 0xc0a9ad4  jal         func_2A6B50
    ctx->pc = 0x33C844u;
    SET_GPR_U32(ctx, 31, 0x33C84Cu);
    ctx->pc = 0x33C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C844u;
    // 0x33c848: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6B50u, 0x33C844u, 0x33C84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C84Cu;
label_33c84c:
    // 0x33c84c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x33C84Cu;
    {
        const bool branch_taken_0x33c84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c84c) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C854u;
    // 0x33c854: 0x0  nop
    ctx->pc = 0x33c854u;
    // NOP
label_33c858:
    // 0x33c858: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c85c: 0xc0a9b74  jal         func_2A6DD0
    ctx->pc = 0x33C85Cu;
    SET_GPR_U32(ctx, 31, 0x33C864u);
    ctx->pc = 0x33C860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C85Cu;
    // 0x33c860: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6DD0u, 0x33C85Cu, 0x33C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C864u;
label_33c864:
    // 0x33c864: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x33C864u;
    {
        const bool branch_taken_0x33c864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c864) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C86Cu;
    // 0x33c86c: 0x0  nop
    ctx->pc = 0x33c86cu;
    // NOP
label_33c870:
    // 0x33c870: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c874: 0xc0a9b84  jal         func_2A6E10
    ctx->pc = 0x33C874u;
    SET_GPR_U32(ctx, 31, 0x33C87Cu);
    ctx->pc = 0x33C878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C874u;
    // 0x33c878: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6E10u, 0x33C874u, 0x33C87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C87Cu;
label_33c87c:
    // 0x33c87c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x33C87Cu;
    {
        const bool branch_taken_0x33c87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c87c) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C884u;
    // 0x33c884: 0x0  nop
    ctx->pc = 0x33c884u;
    // NOP
label_33c888:
    // 0x33c888: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c88c: 0xc0a9b94  jal         func_2A6E50
    ctx->pc = 0x33C88Cu;
    SET_GPR_U32(ctx, 31, 0x33C894u);
    ctx->pc = 0x33C890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C88Cu;
    // 0x33c890: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6E50u, 0x33C88Cu, 0x33C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C894u;
label_33c894:
    // 0x33c894: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x33C894u;
    {
        const bool branch_taken_0x33c894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c894) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C89Cu;
    // 0x33c89c: 0x0  nop
    ctx->pc = 0x33c89cu;
    // NOP
label_33c8a0:
    // 0x33c8a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c8a4: 0xc0a9ba4  jal         func_2A6E90
    ctx->pc = 0x33C8A4u;
    SET_GPR_U32(ctx, 31, 0x33C8ACu);
    ctx->pc = 0x33C8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C8A4u;
    // 0x33c8a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6E90u, 0x33C8A4u, 0x33C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C8ACu;
label_33c8ac:
    // 0x33c8ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x33C8ACu;
    {
        const bool branch_taken_0x33c8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c8ac) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C8B4u;
    // 0x33c8b4: 0x0  nop
    ctx->pc = 0x33c8b4u;
    // NOP
label_33c8b8:
    // 0x33c8b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c8bc: 0xc0a9bb4  jal         func_2A6ED0
    ctx->pc = 0x33C8BCu;
    SET_GPR_U32(ctx, 31, 0x33C8C4u);
    ctx->pc = 0x33C8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C8BCu;
    // 0x33c8c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6ED0u, 0x33C8BCu, 0x33C8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C8C4u;
label_33c8c4:
    // 0x33c8c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33C8C4u;
    {
        const bool branch_taken_0x33c8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c8c4) {
            ctx->pc = 0x33C8D8u;
            goto label_33c8d8;
        }
    }
    ctx->pc = 0x33C8CCu;
    // 0x33c8cc: 0x0  nop
    ctx->pc = 0x33c8ccu;
    // NOP
label_33c8d0:
    // 0x33c8d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33c8d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c8d4: 0x0  nop
    ctx->pc = 0x33c8d4u;
    // NOP
label_33c8d8:
    // 0x33c8d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33c8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33c8dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33c8dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33c8e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33c8e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c8e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33c8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x33C8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C8E8u;
        // 0x33c8ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C8F0u;
}
