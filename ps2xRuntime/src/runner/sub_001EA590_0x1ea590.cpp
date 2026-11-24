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

// Function: sub_001EA590
// Address: 0x1ea590 - 0x1ea9d0
void sub_001EA590_0x1ea590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA590_0x1ea590");
#endif

    switch (ctx->pc) {
        case 0x1ea5f0u: goto label_1ea5f0;
        case 0x1ea610u: goto label_1ea610;
        case 0x1ea618u: goto label_1ea618;
        case 0x1ea624u: goto label_1ea624;
        case 0x1ea63cu: goto label_1ea63c;
        case 0x1ea664u: goto label_1ea664;
        case 0x1ea670u: goto label_1ea670;
        case 0x1ea6c4u: goto label_1ea6c4;
        case 0x1ea6d4u: goto label_1ea6d4;
        case 0x1ea6e8u: goto label_1ea6e8;
        case 0x1ea6f8u: goto label_1ea6f8;
        case 0x1ea760u: goto label_1ea760;
        case 0x1ea77cu: goto label_1ea77c;
        case 0x1ea7f8u: goto label_1ea7f8;
        case 0x1ea80cu: goto label_1ea80c;
        case 0x1ea820u: goto label_1ea820;
        case 0x1ea834u: goto label_1ea834;
        case 0x1ea848u: goto label_1ea848;
        case 0x1ea87cu: goto label_1ea87c;
        case 0x1ea8b0u: goto label_1ea8b0;
        case 0x1ea8c4u: goto label_1ea8c4;
        case 0x1ea900u: goto label_1ea900;
        case 0x1ea930u: goto label_1ea930;
        case 0x1ea950u: goto label_1ea950;
        case 0x1ea97cu: goto label_1ea97c;
        case 0x1ea988u: goto label_1ea988;
        case 0x1ea9a0u: goto label_1ea9a0;
        default: break;
    }

    ctx->pc = 0x1ea590u;

    // 0x1ea590: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1ea590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1ea594: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1ea594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1ea598: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ea598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1ea59c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1ea59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1ea5a0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1ea5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1ea5a4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1ea5a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1ea5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1ea5ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ea5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1ea5b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ea5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ea5b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ea5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ea5b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ea5b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ea5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ea5c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ea5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5c4: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ea5c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ea5c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA5C8u;
    {
        const bool branch_taken_0x1ea5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EA5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5C8u;
        // 0x1ea5cc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea5c8) {
            ctx->pc = 0x1EA5D8u;
            goto label_1ea5d8;
        }
    }
    ctx->pc = 0x1EA5D0u;
    // 0x1ea5d0: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x1EA5D0u;
    {
        const bool branch_taken_0x1ea5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5D0u;
        // 0x1ea5d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea5d0) {
            ctx->pc = 0x1EA9A8u;
            goto label_1ea9a8;
        }
    }
    ctx->pc = 0x1EA5D8u;
label_1ea5d8:
    // 0x1ea5d8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA5D8u;
    {
        const bool branch_taken_0x1ea5d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5D8u;
        // 0x1ea5dc: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea5d8) {
            ctx->pc = 0x1EA5E8u;
            goto label_1ea5e8;
        }
    }
    ctx->pc = 0x1EA5E0u;
    // 0x1ea5e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA5E0u;
    {
        const bool branch_taken_0x1ea5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5E0u;
        // 0x1ea5e4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea5e0) {
            ctx->pc = 0x1EA5F8u;
            goto label_1ea5f8;
        }
    }
    ctx->pc = 0x1EA5E8u;
label_1ea5e8:
    // 0x1ea5e8: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1EA5E8u;
    SET_GPR_U32(ctx, 31, 0x1EA5F0u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1EA5E8u, 0x1EA5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA5F0u;
label_1ea5f0:
    // 0x1ea5f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1ea5f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5f4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ea5f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea5f8:
    // 0x1ea5f8: 0x92450038  lbu         $a1, 0x38($s2)
    ctx->pc = 0x1ea5f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1ea5fc: 0x92460039  lbu         $a2, 0x39($s2)
    ctx->pc = 0x1ea5fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
    // 0x1ea600: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ea600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ea604: 0x92480090  lbu         $t0, 0x90($s2)
    ctx->pc = 0x1ea604u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1ea608: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x1EA608u;
    SET_GPR_U32(ctx, 31, 0x1EA610u);
    ctx->pc = 0x1EA60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA608u;
    // 0x1ea60c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x1EA608u, 0x1EA610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA610u;
label_1ea610:
    // 0x1ea610: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x1EA610u;
    SET_GPR_U32(ctx, 31, 0x1EA618u);
    ctx->pc = 0x1EA614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA610u;
    // 0x1ea614: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x1EA610u, 0x1EA618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA618u;
label_1ea618:
    // 0x1ea618: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ea618u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea61c: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x1EA61Cu;
    SET_GPR_U32(ctx, 31, 0x1EA624u);
    ctx->pc = 0x1EA620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA61Cu;
    // 0x1ea620: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x1EA61Cu, 0x1EA624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA624u;
label_1ea624:
    // 0x1ea624: 0x92480032  lbu         $t0, 0x32($s2)
    ctx->pc = 0x1ea624u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
    // 0x1ea628: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ea628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea62c: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x1ea62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x1ea630: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1ea630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea634: 0xc074458  jal         func_1D1160
    ctx->pc = 0x1EA634u;
    SET_GPR_U32(ctx, 31, 0x1EA63Cu);
    ctx->pc = 0x1EA638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA634u;
    // 0x1ea638: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x1EA634u, 0x1EA63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA63Cu;
label_1ea63c:
    // 0x1ea63c: 0x92450033  lbu         $a1, 0x33($s2)
    ctx->pc = 0x1ea63cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x1ea640: 0xc64c0048  lwc1        $f12, 0x48($s2)
    ctx->pc = 0x1ea640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ea644: 0xc64d004c  lwc1        $f13, 0x4C($s2)
    ctx->pc = 0x1ea644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ea648: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ea648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea64c: 0xc64e0058  lwc1        $f14, 0x58($s2)
    ctx->pc = 0x1ea64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ea650: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ea650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea654: 0xc64f005c  lwc1        $f15, 0x5C($s2)
    ctx->pc = 0x1ea654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ea658: 0x34440080  ori         $a0, $v0, 0x80
    ctx->pc = 0x1ea658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1ea65c: 0xc074c54  jal         func_1D3150
    ctx->pc = 0x1EA65Cu;
    SET_GPR_U32(ctx, 31, 0x1EA664u);
    ctx->pc = 0x1EA660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA65Cu;
    // 0x1ea660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3150u, 0x1EA65Cu, 0x1EA664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA664u;
label_1ea664:
    // 0x1ea664: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1ea664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1ea668: 0xc076554  jal         func_1D9550
    ctx->pc = 0x1EA668u;
    SET_GPR_U32(ctx, 31, 0x1EA670u);
    ctx->pc = 0x1EA66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA668u;
    // 0x1ea66c: 0x2645003c  addiu       $a1, $s2, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9550u, 0x1EA668u, 0x1EA670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA670u;
label_1ea670:
    // 0x1ea670: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1ea670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1ea674: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x1ea674u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1ea678: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x1ea678u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x1ea67c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ea67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ea680: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ea680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ea684: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1ea684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1ea688: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x1ea688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1ea68c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1ea68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1ea690: 0x7fa90100  sq          $t1, 0x100($sp)
    ctx->pc = 0x1ea690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 9));
    // 0x1ea694: 0x78285c30  lq          $t0, 0x5C30($at)
    ctx->pc = 0x1ea694u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C30u));
    // 0x1ea698: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1ea698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1ea69c: 0x7fa80110  sq          $t0, 0x110($sp)
    ctx->pc = 0x1ea69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 8));
    // 0x1ea6a0: 0x78275c40  lq          $a3, 0x5C40($at)
    ctx->pc = 0x1ea6a0u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C40u));
    // 0x1ea6a4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1ea6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1ea6a8: 0x7fa70120  sq          $a3, 0x120($sp)
    ctx->pc = 0x1ea6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 7));
    // 0x1ea6ac: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x1ea6acu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x1ea6b0: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1ea6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1ea6b4: 0x7a430080  lq          $v1, 0x80($s2)
    ctx->pc = 0x1ea6b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1ea6b8: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1ea6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1ea6bc: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1EA6BCu;
    SET_GPR_U32(ctx, 31, 0x1EA6C4u);
    ctx->pc = 0x1EA6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA6BCu;
    // 0x1ea6c0: 0xafa2013c  sw          $v0, 0x13C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1EA6BCu, 0x1EA6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA6C4u;
label_1ea6c4:
    // 0x1ea6c4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ea6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ea6c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ea6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6cc: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1EA6CCu;
    SET_GPR_U32(ctx, 31, 0x1EA6D4u);
    ctx->pc = 0x1EA6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA6CCu;
    // 0x1ea6d0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1EA6CCu, 0x1EA6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA6D4u;
label_1ea6d4:
    // 0x1ea6d4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ea6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ea6d8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1ea6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1ea6dc: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1ea6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1ea6e0: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1EA6E0u;
    SET_GPR_U32(ctx, 31, 0x1EA6E8u);
    ctx->pc = 0x1EA6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA6E0u;
    // 0x1ea6e4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1EA6E0u, 0x1EA6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA6E8u;
label_1ea6e8:
    // 0x1ea6e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ea6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6ec: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1ea6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1ea6f0: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1EA6F0u;
    SET_GPR_U32(ctx, 31, 0x1EA6F8u);
    ctx->pc = 0x1EA6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA6F0u;
    // 0x1ea6f4: 0x26460080  addiu       $a2, $s2, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1EA6F0u, 0x1EA6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA6F8u;
label_1ea6f8:
    // 0x1ea6f8: 0x7a420060  lq          $v0, 0x60($s2)
    ctx->pc = 0x1ea6f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1ea6fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ea6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea700: 0x161c3c  dsll32      $v1, $s6, 16
    ctx->pc = 0x1ea700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 16));
    // 0x1ea704: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ea704u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ea708: 0x7c220040  sq          $v0, 0x40($at)
    ctx->pc = 0x1ea708u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 64), GPR_VEC(ctx, 2));
    // 0x1ea70c: 0x7a420070  lq          $v0, 0x70($s2)
    ctx->pc = 0x1ea70cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1ea710: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ea710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea714: 0x7c220050  sq          $v0, 0x50($at)
    ctx->pc = 0x1ea714u;
    runtime->Store128(rdram, ctx, 0x70000050u, GPR_VEC(ctx, 2));
    // 0x1ea718: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ea718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea71c: 0x8c22004c  lw          $v0, 0x4C($at)
    ctx->pc = 0x1ea71cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x1ea720: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1ea720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ea724: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ea724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea728: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1ea728u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1ea72c: 0xac22004c  sw          $v0, 0x4C($at)
    ctx->pc = 0x1ea72cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    // 0x1ea730: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ea730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea734: 0x8c22005c  lw          $v0, 0x5C($at)
    ctx->pc = 0x1ea734u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000005Cu)); // MMIO: 0x7000005c
    // 0x1ea738: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x1ea738u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ea73c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ea73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea740: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1ea740u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1ea744: 0xac22005c  sw          $v0, 0x5C($at)
    ctx->pc = 0x1ea744u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 92), GPR_U32(ctx, 2));
    // 0x1ea748: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x1ea748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1ea74c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ea74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ea750: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA750u;
    {
        const bool branch_taken_0x1ea750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA750u;
        // 0x1ea754: 0x141100  sll         $v0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea750) {
            ctx->pc = 0x1EA768u;
            goto label_1ea768;
        }
    }
    ctx->pc = 0x1EA758u;
    // 0x1ea758: 0xc07865c  jal         func_1E1970
    ctx->pc = 0x1EA758u;
    SET_GPR_U32(ctx, 31, 0x1EA760u);
    ctx->pc = 0x1EA75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA758u;
    // 0x1ea75c: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1970u, 0x1EA758u, 0x1EA760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA760u;
label_1ea760:
    // 0x1ea760: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ea760u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ea764: 0x0  nop
    ctx->pc = 0x1ea764u;
    // NOP
label_1ea768:
    // 0x1ea768: 0x92450031  lbu         $a1, 0x31($s2)
    ctx->pc = 0x1ea768u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x1ea76c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ea76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ea770: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ea770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ea774: 0xc078604  jal         func_1E1810
    ctx->pc = 0x1EA774u;
    SET_GPR_U32(ctx, 31, 0x1EA77Cu);
    ctx->pc = 0x1EA778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA774u;
    // 0x1ea778: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x1EA774u, 0x1EA77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA77Cu;
label_1ea77c:
    // 0x1ea77c: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ea77cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ea780: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x1ea780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1ea784: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ea784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ea788: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1EA788u;
    {
        const bool branch_taken_0x1ea788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea788) {
            ctx->pc = 0x1EA8D0u;
            goto label_1ea8d0;
        }
    }
    ctx->pc = 0x1EA790u;
    // 0x1ea790: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x1ea790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea794: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ea794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ea798: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ea798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ea79c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1ea79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea7a0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ea7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ea7a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ea7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea7a8: 0x86620008  lh          $v0, 0x8($s3)
    ctx->pc = 0x1ea7a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1ea7ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ea7acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ea7b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea7b4: 0x0  nop
    ctx->pc = 0x1ea7b4u;
    // NOP
    // 0x1ea7b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ea7b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ea7bc: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1ea7bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1ea7c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ea7c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ea7c4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1ea7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1ea7c8: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x1ea7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea7cc: 0x8662000a  lh          $v0, 0xA($s3)
    ctx->pc = 0x1ea7ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x1ea7d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ea7d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ea7d4: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1ea7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1ea7d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea7dc: 0x0  nop
    ctx->pc = 0x1ea7dcu;
    // NOP
    // 0x1ea7e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ea7e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ea7e4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1ea7e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1ea7e8: 0x0  nop
    ctx->pc = 0x1ea7e8u;
    // NOP
    // 0x1ea7ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ea7ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ea7f0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EA7F0u;
    SET_GPR_U32(ctx, 31, 0x1EA7F8u);
    ctx->pc = 0x1EA7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA7F0u;
    // 0x1ea7f4: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EA7F0u, 0x1EA7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA7F8u;
label_1ea7f8:
    // 0x1ea7f8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ea7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea7fc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ea7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ea800: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x1ea800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1ea804: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EA804u;
    SET_GPR_U32(ctx, 31, 0x1EA80Cu);
    ctx->pc = 0x1EA808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA804u;
    // 0x1ea808: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EA804u, 0x1EA80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA80Cu;
label_1ea80c:
    // 0x1ea80c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ea80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea810: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ea810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ea814: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x1ea814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1ea818: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EA818u;
    SET_GPR_U32(ctx, 31, 0x1EA820u);
    ctx->pc = 0x1EA81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA818u;
    // 0x1ea81c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EA818u, 0x1EA820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA820u;
label_1ea820:
    // 0x1ea820: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ea820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea824: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ea824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ea828: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x1ea828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x1ea82c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EA82Cu;
    SET_GPR_U32(ctx, 31, 0x1EA834u);
    ctx->pc = 0x1EA830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA82Cu;
    // 0x1ea830: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EA82Cu, 0x1EA834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA834u;
label_1ea834:
    // 0x1ea834: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ea834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ea838: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ea838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea83c: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ea83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ea840: 0xc078624  jal         func_1E1890
    ctx->pc = 0x1EA840u;
    SET_GPR_U32(ctx, 31, 0x1EA848u);
    ctx->pc = 0x1EA844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA840u;
    // 0x1ea844: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1890u, 0x1EA840u, 0x1EA848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA848u;
label_1ea848:
    // 0x1ea848: 0x924b0035  lbu         $t3, 0x35($s2)
    ctx->pc = 0x1ea848u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
    // 0x1ea84c: 0x924a0033  lbu         $t2, 0x33($s2)
    ctx->pc = 0x1ea84cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x1ea850: 0x154b000d  bne         $t2, $t3, . + 4 + (0xD << 2)
    ctx->pc = 0x1EA850u;
    {
        const bool branch_taken_0x1ea850 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 11));
        ctx->pc = 0x1EA854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA850u;
        // 0x1ea854: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea850) {
            ctx->pc = 0x1EA888u;
            goto label_1ea888;
        }
    }
    ctx->pc = 0x1EA858u;
    // 0x1ea858: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1ea858u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea85c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ea85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ea860: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ea860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ea864: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ea864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ea868: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1ea868u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1ea86c: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1ea86cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1ea870: 0x34e90050  ori         $t1, $a3, 0x50
    ctx->pc = 0x1ea870u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    // 0x1ea874: 0xc076090  jal         func_1D8240
    ctx->pc = 0x1EA874u;
    SET_GPR_U32(ctx, 31, 0x1EA87Cu);
    ctx->pc = 0x1EA878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA874u;
    // 0x1ea878: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8240u, 0x1EA874u, 0x1EA87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA87Cu;
label_1ea87c:
    // 0x1ea87c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EA87Cu;
    {
        const bool branch_taken_0x1ea87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA87Cu;
        // 0x1ea880: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea87c) {
            ctx->pc = 0x1EA8B8u;
            goto label_1ea8b8;
        }
    }
    ctx->pc = 0x1EA884u;
    // 0x1ea884: 0x0  nop
    ctx->pc = 0x1ea884u;
    // NOP
label_1ea888:
    // 0x1ea888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea88c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1ea88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1ea890: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1ea890u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea894: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ea894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ea898: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ea898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ea89c: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ea89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ea8a0: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1ea8a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1ea8a4: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1ea8a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1ea8a8: 0xc07616c  jal         func_1D85B0
    ctx->pc = 0x1EA8A8u;
    SET_GPR_U32(ctx, 31, 0x1EA8B0u);
    ctx->pc = 0x1EA8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA8A8u;
    // 0x1ea8ac: 0x34e90050  ori         $t1, $a3, 0x50 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D85B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D85B0u, 0x1EA8A8u, 0x1EA8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA8B0u;
label_1ea8b0:
    // 0x1ea8b0: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ea8b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ea8b4: 0x0  nop
    ctx->pc = 0x1ea8b4u;
    // NOP
label_1ea8b8:
    // 0x1ea8b8: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ea8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ea8bc: 0xc07864c  jal         func_1E1930
    ctx->pc = 0x1EA8BCu;
    SET_GPR_U32(ctx, 31, 0x1EA8C4u);
    ctx->pc = 0x1EA8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA8BCu;
    // 0x1ea8c0: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1930u, 0x1EA8BCu, 0x1EA8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA8C4u;
label_1ea8c4:
    // 0x1ea8c4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1EA8C4u;
    {
        const bool branch_taken_0x1ea8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8C4u;
        // 0x1ea8c8: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8c4) {
            ctx->pc = 0x1EA938u;
            goto label_1ea938;
        }
    }
    ctx->pc = 0x1EA8CCu;
    // 0x1ea8cc: 0x0  nop
    ctx->pc = 0x1ea8ccu;
    // NOP
label_1ea8d0:
    // 0x1ea8d0: 0x924b0035  lbu         $t3, 0x35($s2)
    ctx->pc = 0x1ea8d0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
    // 0x1ea8d4: 0x924a0033  lbu         $t2, 0x33($s2)
    ctx->pc = 0x1ea8d4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x1ea8d8: 0x154b000b  bne         $t2, $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x1EA8D8u;
    {
        const bool branch_taken_0x1ea8d8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 11));
        ctx->pc = 0x1EA8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8D8u;
        // 0x1ea8dc: 0x3c077000  lui         $a3, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8d8) {
            ctx->pc = 0x1EA908u;
            goto label_1ea908;
        }
    }
    ctx->pc = 0x1EA8E0u;
    // 0x1ea8e0: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ea8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ea8e4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ea8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ea8e8: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ea8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ea8ec: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1ea8ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1ea8f0: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1ea8f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1ea8f4: 0x34e90050  ori         $t1, $a3, 0x50
    ctx->pc = 0x1ea8f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    // 0x1ea8f8: 0xc076090  jal         func_1D8240
    ctx->pc = 0x1EA8F8u;
    SET_GPR_U32(ctx, 31, 0x1EA900u);
    ctx->pc = 0x1EA8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA8F8u;
    // 0x1ea8fc: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8240u, 0x1EA8F8u, 0x1EA900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA900u;
label_1ea900:
    // 0x1ea900: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1EA900u;
    {
        const bool branch_taken_0x1ea900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA900u;
        // 0x1ea904: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea900) {
            ctx->pc = 0x1EA938u;
            goto label_1ea938;
        }
    }
    ctx->pc = 0x1EA908u;
label_1ea908:
    // 0x1ea908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea90c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1ea90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1ea910: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1ea910u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea914: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ea914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ea918: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ea918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ea91c: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ea91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ea920: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1ea920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1ea924: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1ea924u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1ea928: 0xc07616c  jal         func_1D85B0
    ctx->pc = 0x1EA928u;
    SET_GPR_U32(ctx, 31, 0x1EA930u);
    ctx->pc = 0x1EA92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA928u;
    // 0x1ea92c: 0x34e90050  ori         $t1, $a3, 0x50 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D85B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D85B0u, 0x1EA928u, 0x1EA930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA930u;
label_1ea930:
    // 0x1ea930: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ea930u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ea934: 0x0  nop
    ctx->pc = 0x1ea934u;
    // NOP
label_1ea938:
    // 0x1ea938: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x1ea938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1ea93c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ea93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ea940: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA940u;
    {
        const bool branch_taken_0x1ea940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA940u;
        // 0x1ea944: 0x141100  sll         $v0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea940) {
            ctx->pc = 0x1EA958u;
            goto label_1ea958;
        }
    }
    ctx->pc = 0x1EA948u;
    // 0x1ea948: 0xc07866c  jal         func_1E19B0
    ctx->pc = 0x1EA948u;
    SET_GPR_U32(ctx, 31, 0x1EA950u);
    ctx->pc = 0x1EA94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA948u;
    // 0x1ea94c: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19B0u, 0x1EA948u, 0x1EA950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA950u;
label_1ea950:
    // 0x1ea950: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ea950u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ea954: 0x0  nop
    ctx->pc = 0x1ea954u;
    // NOP
label_1ea958:
    // 0x1ea958: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA958u;
    {
        const bool branch_taken_0x1ea958 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA958u;
        // 0x1ea95c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea958) {
            ctx->pc = 0x1EA968u;
            goto label_1ea968;
        }
    }
    ctx->pc = 0x1EA960u;
    // 0x1ea960: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1EA960u;
    {
        const bool branch_taken_0x1ea960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea960) {
            ctx->pc = 0x1EA9A8u;
            goto label_1ea9a8;
        }
    }
    ctx->pc = 0x1EA968u;
label_1ea968:
    // 0x1ea968: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1ea968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1ea96c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ea96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ea970: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1ea970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1ea974: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x1EA974u;
    SET_GPR_U32(ctx, 31, 0x1EA97Cu);
    ctx->pc = 0x1EA978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA974u;
    // 0x1ea978: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x1EA974u, 0x1EA97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA97Cu;
label_1ea97c:
    // 0x1ea97c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ea97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea980: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1EA980u;
    SET_GPR_U32(ctx, 31, 0x1EA988u);
    ctx->pc = 0x1EA984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA980u;
    // 0x1ea984: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1EA980u, 0x1EA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA988u;
label_1ea988:
    // 0x1ea988: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ea988u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ea98c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ea98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea990: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1ea990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ea994: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ea994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea998: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1EA998u;
    SET_GPR_U32(ctx, 31, 0x1EA9A0u);
    ctx->pc = 0x1EA99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA998u;
    // 0x1ea99c: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1EA998u, 0x1EA9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA9A0u;
label_1ea9a0:
    // 0x1ea9a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ea9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9a4: 0x0  nop
    ctx->pc = 0x1ea9a4u;
    // NOP
label_1ea9a8:
    // 0x1ea9a8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ea9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ea9ac: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1ea9acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea9b0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1ea9b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ea9b4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1ea9b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ea9b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ea9b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ea9bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ea9bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ea9c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ea9c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea9c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ea9c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9C8u;
        // 0x1ea9cc: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA9D0u;
}
