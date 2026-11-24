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

// Function: sub_001EC5B0
// Address: 0x1ec5b0 - 0x1ec9d0
void sub_001EC5B0_0x1ec5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC5B0_0x1ec5b0");
#endif

    switch (ctx->pc) {
        case 0x1ec618u: goto label_1ec618;
        case 0x1ec638u: goto label_1ec638;
        case 0x1ec640u: goto label_1ec640;
        case 0x1ec64cu: goto label_1ec64c;
        case 0x1ec664u: goto label_1ec664;
        case 0x1ec6bcu: goto label_1ec6bc;
        case 0x1ec6ccu: goto label_1ec6cc;
        case 0x1ec6e8u: goto label_1ec6e8;
        case 0x1ec6fcu: goto label_1ec6fc;
        case 0x1ec79cu: goto label_1ec79c;
        case 0x1ec818u: goto label_1ec818;
        case 0x1ec82cu: goto label_1ec82c;
        case 0x1ec840u: goto label_1ec840;
        case 0x1ec854u: goto label_1ec854;
        case 0x1ec868u: goto label_1ec868;
        case 0x1ec8a0u: goto label_1ec8a0;
        case 0x1ec8c8u: goto label_1ec8c8;
        case 0x1ec8dcu: goto label_1ec8dc;
        case 0x1ec91cu: goto label_1ec91c;
        case 0x1ec948u: goto label_1ec948;
        case 0x1ec974u: goto label_1ec974;
        case 0x1ec980u: goto label_1ec980;
        case 0x1ec998u: goto label_1ec998;
        default: break;
    }

    ctx->pc = 0x1ec5b0u;

    // 0x1ec5b0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1ec5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1ec5b4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1ec5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1ec5b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ec5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1ec5bc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ec5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1ec5c0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ec5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ec5c4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ec5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ec5c8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1ec5c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ec5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ec5d0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1ec5d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ec5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ec5d8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ec5d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ec5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ec5e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ec5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ec5e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ec5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ec5e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec5ec: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ec5ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ec5f0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC5F0u;
    {
        const bool branch_taken_0x1ec5f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5F0u;
        // 0x1ec5f4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5f0) {
            ctx->pc = 0x1EC600u;
            goto label_1ec600;
        }
    }
    ctx->pc = 0x1EC5F8u;
    // 0x1ec5f8: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x1EC5F8u;
    {
        const bool branch_taken_0x1ec5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5F8u;
        // 0x1ec5fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5f8) {
            ctx->pc = 0x1EC9A0u;
            goto label_1ec9a0;
        }
    }
    ctx->pc = 0x1EC600u;
label_1ec600:
    // 0x1ec600: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC600u;
    {
        const bool branch_taken_0x1ec600 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC600u;
        // 0x1ec604: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec600) {
            ctx->pc = 0x1EC610u;
            goto label_1ec610;
        }
    }
    ctx->pc = 0x1EC608u;
    // 0x1ec608: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC608u;
    {
        const bool branch_taken_0x1ec608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC608u;
        // 0x1ec60c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec608) {
            ctx->pc = 0x1EC620u;
            goto label_1ec620;
        }
    }
    ctx->pc = 0x1EC610u;
label_1ec610:
    // 0x1ec610: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1EC610u;
    SET_GPR_U32(ctx, 31, 0x1EC618u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1EC610u, 0x1EC618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC618u;
label_1ec618:
    // 0x1ec618: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ec618u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec61c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ec61cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec620:
    // 0x1ec620: 0x92a50038  lbu         $a1, 0x38($s5)
    ctx->pc = 0x1ec620u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x1ec624: 0x92a60039  lbu         $a2, 0x39($s5)
    ctx->pc = 0x1ec624u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 57)));
    // 0x1ec628: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ec628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ec62c: 0x92a80036  lbu         $t0, 0x36($s5)
    ctx->pc = 0x1ec62cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 54)));
    // 0x1ec630: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x1EC630u;
    SET_GPR_U32(ctx, 31, 0x1EC638u);
    ctx->pc = 0x1EC634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC630u;
    // 0x1ec634: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x1EC630u, 0x1EC638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC638u;
label_1ec638:
    // 0x1ec638: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x1EC638u;
    SET_GPR_U32(ctx, 31, 0x1EC640u);
    ctx->pc = 0x1EC63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC638u;
    // 0x1ec63c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x1EC638u, 0x1EC640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC640u;
label_1ec640:
    // 0x1ec640: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ec640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec644: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x1EC644u;
    SET_GPR_U32(ctx, 31, 0x1EC64Cu);
    ctx->pc = 0x1EC648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC644u;
    // 0x1ec648: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x1EC644u, 0x1EC64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC64Cu;
label_1ec64c:
    // 0x1ec64c: 0x92a80032  lbu         $t0, 0x32($s5)
    ctx->pc = 0x1ec64cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 50)));
    // 0x1ec650: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ec650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec654: 0x26a40090  addiu       $a0, $s5, 0x90
    ctx->pc = 0x1ec654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x1ec658: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1ec658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec65c: 0xc074458  jal         func_1D1160
    ctx->pc = 0x1EC65Cu;
    SET_GPR_U32(ctx, 31, 0x1EC664u);
    ctx->pc = 0x1EC660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC65Cu;
    // 0x1ec660: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x1EC65Cu, 0x1EC664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC664u;
label_1ec664:
    // 0x1ec664: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1ec664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1ec668: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1ec668u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec66c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x1ec66cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x1ec670: 0x27aa0140  addiu       $t2, $sp, 0x140
    ctx->pc = 0x1ec670u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1ec674: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ec674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ec678: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1ec678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1ec67c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ec67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec680: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x1ec680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1ec684: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1ec684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1ec688: 0x7fa90110  sq          $t1, 0x110($sp)
    ctx->pc = 0x1ec688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 9));
    // 0x1ec68c: 0x78285c30  lq          $t0, 0x5C30($at)
    ctx->pc = 0x1ec68cu;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C30u));
    // 0x1ec690: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1ec690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1ec694: 0x7fa80120  sq          $t0, 0x120($sp)
    ctx->pc = 0x1ec694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 8));
    // 0x1ec698: 0x78275c40  lq          $a3, 0x5C40($at)
    ctx->pc = 0x1ec698u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C40u));
    // 0x1ec69c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1ec69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1ec6a0: 0x7fa70130  sq          $a3, 0x130($sp)
    ctx->pc = 0x1ec6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 7));
    // 0x1ec6a4: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x1ec6a4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x1ec6a8: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1ec6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1ec6ac: 0x7aa30070  lq          $v1, 0x70($s5)
    ctx->pc = 0x1ec6acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x1ec6b0: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1ec6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1ec6b4: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1EC6B4u;
    SET_GPR_U32(ctx, 31, 0x1EC6BCu);
    ctx->pc = 0x1EC6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC6B4u;
    // 0x1ec6b8: 0xafa2014c  sw          $v0, 0x14C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1EC6B4u, 0x1EC6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC6BCu;
label_1ec6bc:
    // 0x1ec6bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ec6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec6c0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1ec6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1ec6c4: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1EC6C4u;
    SET_GPR_U32(ctx, 31, 0x1EC6CCu);
    ctx->pc = 0x1EC6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC6C4u;
    // 0x1ec6c8: 0x26a60070  addiu       $a2, $s5, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1EC6C4u, 0x1EC6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC6CCu;
label_1ec6cc:
    // 0x1ec6cc: 0x92a20033  lbu         $v0, 0x33($s5)
    ctx->pc = 0x1ec6ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x1ec6d0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1ec6d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ec6d4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EC6D4u;
    {
        const bool branch_taken_0x1ec6d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6D4u;
        // 0x1ec6d8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6d4) {
            ctx->pc = 0x1EC718u;
            goto label_1ec718;
        }
    }
    ctx->pc = 0x1EC6DCu;
    // 0x1ec6dc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ec6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec6e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ec6e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec6e4: 0x34500080  ori         $s0, $v0, 0x80
    ctx->pc = 0x1ec6e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1ec6e8:
    // 0x1ec6e8: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x1ec6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1ec6ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ec6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec6f0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1ec6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1ec6f4: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1EC6F4u;
    SET_GPR_U32(ctx, 31, 0x1EC6FCu);
    ctx->pc = 0x1EC6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC6F4u;
    // 0x1ec6f8: 0x513021  addu        $a2, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1EC6F4u, 0x1EC6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC6FCu;
label_1ec6fc:
    // 0x1ec6fc: 0x92a20033  lbu         $v0, 0x33($s5)
    ctx->pc = 0x1ec6fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x1ec700: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ec700u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1ec704: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1ec704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1ec708: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1ec708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ec70c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1EC70Cu;
    {
        const bool branch_taken_0x1ec70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC70Cu;
        // 0x1ec710: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec70c) {
            ctx->pc = 0x1EC6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec6e8;
        }
    }
    ctx->pc = 0x1EC714u;
    // 0x1ec714: 0x0  nop
    ctx->pc = 0x1ec714u;
    // NOP
label_1ec718:
    // 0x1ec718: 0x7aa30050  lq          $v1, 0x50($s5)
    ctx->pc = 0x1ec718u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x1ec71c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ec71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec720: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1ec720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1ec724: 0x162c3c  dsll32      $a1, $s6, 16
    ctx->pc = 0x1ec724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) << (32 + 16));
    // 0x1ec728: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x1ec728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ec72c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1ec72cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1ec730: 0x7c230040  sq          $v1, 0x40($at)
    ctx->pc = 0x1ec730u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 64), GPR_VEC(ctx, 3));
    // 0x1ec734: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ec734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec738: 0x8c22004c  lw          $v0, 0x4C($at)
    ctx->pc = 0x1ec738u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x1ec73c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1ec73cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ec740: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ec740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec744: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1ec744u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1ec748: 0xac22004c  sw          $v0, 0x4C($at)
    ctx->pc = 0x1ec748u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    // 0x1ec74c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ec74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec750: 0x78220040  lq          $v0, 0x40($at)
    ctx->pc = 0x1ec750u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000040u));
    // 0x1ec754: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ec754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec758: 0x7c220050  sq          $v0, 0x50($at)
    ctx->pc = 0x1ec758u;
    runtime->Store128(rdram, ctx, 0x70000050u, GPR_VEC(ctx, 2));
    // 0x1ec75c: 0x7aa20060  lq          $v0, 0x60($s5)
    ctx->pc = 0x1ec75cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ec760: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ec760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec764: 0x7c220060  sq          $v0, 0x60($at)
    ctx->pc = 0x1ec764u;
    runtime->Store128(rdram, ctx, 0x70000060u, GPR_VEC(ctx, 2));
    // 0x1ec768: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ec768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec76c: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x1ec76cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000006Cu)); // MMIO: 0x7000006c
    // 0x1ec770: 0x70451018  mult1       $v0, $v0, $a1
    ctx->pc = 0x1ec770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ec774: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ec774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec778: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1ec778u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1ec77c: 0xac22006c  sw          $v0, 0x6C($at)
    ctx->pc = 0x1ec77cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 108), GPR_U32(ctx, 2));
    // 0x1ec780: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ec780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec784: 0x78220060  lq          $v0, 0x60($at)
    ctx->pc = 0x1ec784u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000060u));
    // 0x1ec788: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ec788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec78c: 0x7c220070  sq          $v0, 0x70($at)
    ctx->pc = 0x1ec78cu;
    runtime->Store128(rdram, ctx, 0x70000070u, GPR_VEC(ctx, 2));
    // 0x1ec790: 0x92a50031  lbu         $a1, 0x31($s5)
    ctx->pc = 0x1ec790u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 49)));
    // 0x1ec794: 0xc078604  jal         func_1E1810
    ctx->pc = 0x1EC794u;
    SET_GPR_U32(ctx, 31, 0x1EC79Cu);
    ctx->pc = 0x1EC798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC794u;
    // 0x1ec798: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x1EC794u, 0x1EC79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC79Cu;
label_1ec79c:
    // 0x1ec79c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1ec79cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ec7a0: 0x92a20048  lbu         $v0, 0x48($s5)
    ctx->pc = 0x1ec7a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x1ec7a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ec7a8: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1EC7A8u;
    {
        const bool branch_taken_0x1ec7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec7a8) {
            ctx->pc = 0x1EC8E8u;
            goto label_1ec8e8;
        }
    }
    ctx->pc = 0x1EC7B0u;
    // 0x1ec7b0: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x1ec7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec7b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ec7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ec7b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ec7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec7bc: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1ec7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec7c0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ec7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ec7c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ec7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec7c8: 0x87c20008  lh          $v0, 0x8($fp)
    ctx->pc = 0x1ec7c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1ec7cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ec7ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ec7d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec7d4: 0x0  nop
    ctx->pc = 0x1ec7d4u;
    // NOP
    // 0x1ec7d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ec7d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ec7dc: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1ec7dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1ec7e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ec7e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ec7e4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ec7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ec7e8: 0xc6a00044  lwc1        $f0, 0x44($s5)
    ctx->pc = 0x1ec7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec7ec: 0x87c2000a  lh          $v0, 0xA($fp)
    ctx->pc = 0x1ec7ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x1ec7f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ec7f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ec7f4: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x1ec7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x1ec7f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec7fc: 0x0  nop
    ctx->pc = 0x1ec7fcu;
    // NOP
    // 0x1ec800: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ec800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ec804: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1ec804u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1ec808: 0x0  nop
    ctx->pc = 0x1ec808u;
    // NOP
    // 0x1ec80c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ec80cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ec810: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EC810u;
    SET_GPR_U32(ctx, 31, 0x1EC818u);
    ctx->pc = 0x1EC814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC810u;
    // 0x1ec814: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EC810u, 0x1EC818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC818u;
label_1ec818:
    // 0x1ec818: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ec818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec81c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ec81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ec820: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x1ec820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1ec824: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EC824u;
    SET_GPR_U32(ctx, 31, 0x1EC82Cu);
    ctx->pc = 0x1EC828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC824u;
    // 0x1ec828: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EC824u, 0x1EC82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC82Cu;
label_1ec82c:
    // 0x1ec82c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ec82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec830: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ec830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ec834: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x1ec834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1ec838: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EC838u;
    SET_GPR_U32(ctx, 31, 0x1EC840u);
    ctx->pc = 0x1EC83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC838u;
    // 0x1ec83c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EC838u, 0x1EC840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC840u;
label_1ec840:
    // 0x1ec840: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ec840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec844: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ec844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ec848: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x1ec848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x1ec84c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EC84Cu;
    SET_GPR_U32(ctx, 31, 0x1EC854u);
    ctx->pc = 0x1EC850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC84Cu;
    // 0x1ec850: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EC84Cu, 0x1EC854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC854u;
label_1ec854:
    // 0x1ec854: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1ec854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1ec858: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1ec858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec85c: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x1ec85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ec860: 0xc078624  jal         func_1E1890
    ctx->pc = 0x1EC860u;
    SET_GPR_U32(ctx, 31, 0x1EC868u);
    ctx->pc = 0x1EC864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC860u;
    // 0x1ec864: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1890u, 0x1EC860u, 0x1EC868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC868u;
label_1ec868:
    // 0x1ec868: 0x92a80033  lbu         $t0, 0x33($s5)
    ctx->pc = 0x1ec868u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x1ec86c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1ec86cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ec870: 0x92a90049  lbu         $t1, 0x49($s5)
    ctx->pc = 0x1ec870u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 73)));
    // 0x1ec874: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x1ec874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1ec878: 0x1449000b  bne         $v0, $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x1EC878u;
    {
        const bool branch_taken_0x1ec878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x1ec878) {
            ctx->pc = 0x1EC8A8u;
            goto label_1ec8a8;
        }
    }
    ctx->pc = 0x1EC880u;
    // 0x1ec880: 0xc6ac003c  lwc1        $f12, 0x3C($s5)
    ctx->pc = 0x1ec880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ec884: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1ec884u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec888: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1ec888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1ec88c: 0x34c50080  ori         $a1, $a2, 0x80
    ctx->pc = 0x1ec88cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1ec890: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x1ec890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ec894: 0x34c70040  ori         $a3, $a2, 0x40
    ctx->pc = 0x1ec894u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x1ec898: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x1EC898u;
    SET_GPR_U32(ctx, 31, 0x1EC8A0u);
    ctx->pc = 0x1EC89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC898u;
    // 0x1ec89c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x1EC898u, 0x1EC8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC8A0u;
label_1ec8a0:
    // 0x1ec8a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EC8A0u;
    {
        const bool branch_taken_0x1ec8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC8A0u;
        // 0x1ec8a4: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec8a0) {
            ctx->pc = 0x1EC8D0u;
            goto label_1ec8d0;
        }
    }
    ctx->pc = 0x1EC8A8u;
label_1ec8a8:
    // 0x1ec8a8: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1ec8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec8ac: 0xc6ac003c  lwc1        $f12, 0x3C($s5)
    ctx->pc = 0x1ec8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ec8b0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1ec8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1ec8b4: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x1ec8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ec8b8: 0x34c50080  ori         $a1, $a2, 0x80
    ctx->pc = 0x1ec8b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1ec8bc: 0x34c70040  ori         $a3, $a2, 0x40
    ctx->pc = 0x1ec8bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x1ec8c0: 0xc075a18  jal         func_1D6860
    ctx->pc = 0x1EC8C0u;
    SET_GPR_U32(ctx, 31, 0x1EC8C8u);
    ctx->pc = 0x1EC8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC8C0u;
    // 0x1ec8c4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6860u, 0x1EC8C0u, 0x1EC8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC8C8u;
label_1ec8c8:
    // 0x1ec8c8: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1ec8c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ec8cc: 0x0  nop
    ctx->pc = 0x1ec8ccu;
    // NOP
label_1ec8d0:
    // 0x1ec8d0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1ec8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1ec8d4: 0xc07864c  jal         func_1E1930
    ctx->pc = 0x1EC8D4u;
    SET_GPR_U32(ctx, 31, 0x1EC8DCu);
    ctx->pc = 0x1EC8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC8D4u;
    // 0x1ec8d8: 0x2622021  addu        $a0, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1930u, 0x1EC8D4u, 0x1EC8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC8DCu;
label_1ec8dc:
    // 0x1ec8dc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1EC8DCu;
    {
        const bool branch_taken_0x1ec8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC8DCu;
        // 0x1ec8e0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec8dc) {
            ctx->pc = 0x1EC950u;
            goto label_1ec950;
        }
    }
    ctx->pc = 0x1EC8E4u;
    // 0x1ec8e4: 0x0  nop
    ctx->pc = 0x1ec8e4u;
    // NOP
label_1ec8e8:
    // 0x1ec8e8: 0x92a80033  lbu         $t0, 0x33($s5)
    ctx->pc = 0x1ec8e8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x1ec8ec: 0x92a90049  lbu         $t1, 0x49($s5)
    ctx->pc = 0x1ec8ecu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 73)));
    // 0x1ec8f0: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x1ec8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1ec8f4: 0x1449000c  bne         $v0, $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x1EC8F4u;
    {
        const bool branch_taken_0x1ec8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x1ec8f4) {
            ctx->pc = 0x1EC928u;
            goto label_1ec928;
        }
    }
    ctx->pc = 0x1EC8FCu;
    // 0x1ec8fc: 0xc6ac003c  lwc1        $f12, 0x3C($s5)
    ctx->pc = 0x1ec8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ec900: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1ec900u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec904: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1ec904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1ec908: 0x34c50080  ori         $a1, $a2, 0x80
    ctx->pc = 0x1ec908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1ec90c: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x1ec90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ec910: 0x34c70040  ori         $a3, $a2, 0x40
    ctx->pc = 0x1ec910u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x1ec914: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x1EC914u;
    SET_GPR_U32(ctx, 31, 0x1EC91Cu);
    ctx->pc = 0x1EC918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC914u;
    // 0x1ec918: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x1EC914u, 0x1EC91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC91Cu;
label_1ec91c:
    // 0x1ec91c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EC91Cu;
    {
        const bool branch_taken_0x1ec91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC91Cu;
        // 0x1ec920: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec91c) {
            ctx->pc = 0x1EC950u;
            goto label_1ec950;
        }
    }
    ctx->pc = 0x1EC924u;
    // 0x1ec924: 0x0  nop
    ctx->pc = 0x1ec924u;
    // NOP
label_1ec928:
    // 0x1ec928: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1ec928u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec92c: 0xc6ac003c  lwc1        $f12, 0x3C($s5)
    ctx->pc = 0x1ec92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ec930: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1ec930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1ec934: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x1ec934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ec938: 0x34c50080  ori         $a1, $a2, 0x80
    ctx->pc = 0x1ec938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1ec93c: 0x34c70040  ori         $a3, $a2, 0x40
    ctx->pc = 0x1ec93cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x1ec940: 0xc075a18  jal         func_1D6860
    ctx->pc = 0x1EC940u;
    SET_GPR_U32(ctx, 31, 0x1EC948u);
    ctx->pc = 0x1EC944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC940u;
    // 0x1ec944: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6860u, 0x1EC940u, 0x1EC948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC948u;
label_1ec948:
    // 0x1ec948: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1ec948u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ec94c: 0x0  nop
    ctx->pc = 0x1ec94cu;
    // NOP
label_1ec950:
    // 0x1ec950: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC950u;
    {
        const bool branch_taken_0x1ec950 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC950u;
        // 0x1ec954: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec950) {
            ctx->pc = 0x1EC960u;
            goto label_1ec960;
        }
    }
    ctx->pc = 0x1EC958u;
    // 0x1ec958: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1EC958u;
    {
        const bool branch_taken_0x1ec958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec958) {
            ctx->pc = 0x1EC9A0u;
            goto label_1ec9a0;
        }
    }
    ctx->pc = 0x1EC960u;
label_1ec960:
    // 0x1ec960: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1ec960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1ec964: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ec964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ec968: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1ec968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1ec96c: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x1EC96Cu;
    SET_GPR_U32(ctx, 31, 0x1EC974u);
    ctx->pc = 0x1EC970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC96Cu;
    // 0x1ec970: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x1EC96Cu, 0x1EC974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC974u;
label_1ec974:
    // 0x1ec974: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ec974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec978: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1EC978u;
    SET_GPR_U32(ctx, 31, 0x1EC980u);
    ctx->pc = 0x1EC97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC978u;
    // 0x1ec97c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1EC978u, 0x1EC980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC980u;
label_1ec980:
    // 0x1ec980: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1ec980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ec984: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ec984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec988: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1ec988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1ec98c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ec98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec990: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1EC990u;
    SET_GPR_U32(ctx, 31, 0x1EC998u);
    ctx->pc = 0x1EC994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC990u;
    // 0x1ec994: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1EC990u, 0x1EC998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC998u;
label_1ec998:
    // 0x1ec998: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ec998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec99c: 0x0  nop
    ctx->pc = 0x1ec99cu;
    // NOP
label_1ec9a0:
    // 0x1ec9a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ec9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ec9a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ec9a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ec9a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ec9a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ec9ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ec9acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ec9b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ec9b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ec9b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ec9b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ec9b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ec9b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec9bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ec9bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec9c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ec9c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec9c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec9c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC9C8u;
        // 0x1ec9cc: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC9D0u;
}
