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

// Function: sub_001EB5D0
// Address: 0x1eb5d0 - 0x1eb9b8
void sub_001EB5D0_0x1eb5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB5D0_0x1eb5d0");
#endif

    switch (ctx->pc) {
        case 0x1eb630u: goto label_1eb630;
        case 0x1eb650u: goto label_1eb650;
        case 0x1eb658u: goto label_1eb658;
        case 0x1eb664u: goto label_1eb664;
        case 0x1eb67cu: goto label_1eb67c;
        case 0x1eb68cu: goto label_1eb68c;
        case 0x1eb6e0u: goto label_1eb6e0;
        case 0x1eb6f0u: goto label_1eb6f0;
        case 0x1eb704u: goto label_1eb704;
        case 0x1eb714u: goto label_1eb714;
        case 0x1eb7c0u: goto label_1eb7c0;
        case 0x1eb7d4u: goto label_1eb7d4;
        case 0x1eb7e8u: goto label_1eb7e8;
        case 0x1eb7fcu: goto label_1eb7fc;
        case 0x1eb810u: goto label_1eb810;
        case 0x1eb88cu: goto label_1eb88c;
        case 0x1eb8a0u: goto label_1eb8a0;
        case 0x1eb8b4u: goto label_1eb8b4;
        case 0x1eb8c8u: goto label_1eb8c8;
        case 0x1eb8dcu: goto label_1eb8dc;
        case 0x1eb900u: goto label_1eb900;
        case 0x1eb910u: goto label_1eb910;
        case 0x1eb938u: goto label_1eb938;
        case 0x1eb964u: goto label_1eb964;
        case 0x1eb970u: goto label_1eb970;
        case 0x1eb988u: goto label_1eb988;
        default: break;
    }

    ctx->pc = 0x1eb5d0u;

    // 0x1eb5d0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1eb5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1eb5d4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1eb5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1eb5d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1eb5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1eb5dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1eb5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1eb5e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1eb5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1eb5e4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1eb5e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb5e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1eb5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1eb5ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1eb5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1eb5f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eb5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1eb5f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eb5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eb5f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1eb5f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb5fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eb5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eb600: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1eb600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb604: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1eb604u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1eb608: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB608u;
    {
        const bool branch_taken_0x1eb608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB608u;
        // 0x1eb60c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb608) {
            ctx->pc = 0x1EB618u;
            goto label_1eb618;
        }
    }
    ctx->pc = 0x1EB610u;
    // 0x1eb610: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x1EB610u;
    {
        const bool branch_taken_0x1eb610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB610u;
        // 0x1eb614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb610) {
            ctx->pc = 0x1EB990u;
            goto label_1eb990;
        }
    }
    ctx->pc = 0x1EB618u;
label_1eb618:
    // 0x1eb618: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB618u;
    {
        const bool branch_taken_0x1eb618 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB618u;
        // 0x1eb61c: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb618) {
            ctx->pc = 0x1EB628u;
            goto label_1eb628;
        }
    }
    ctx->pc = 0x1EB620u;
    // 0x1eb620: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB620u;
    {
        const bool branch_taken_0x1eb620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB620u;
        // 0x1eb624: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb620) {
            ctx->pc = 0x1EB638u;
            goto label_1eb638;
        }
    }
    ctx->pc = 0x1EB628u;
label_1eb628:
    // 0x1eb628: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1EB628u;
    SET_GPR_U32(ctx, 31, 0x1EB630u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1EB628u, 0x1EB630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB630u;
label_1eb630:
    // 0x1eb630: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1eb630u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb634: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1eb634u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb638:
    // 0x1eb638: 0x92450034  lbu         $a1, 0x34($s2)
    ctx->pc = 0x1eb638u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1eb63c: 0x92460035  lbu         $a2, 0x35($s2)
    ctx->pc = 0x1eb63cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
    // 0x1eb640: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1eb640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1eb644: 0x92480042  lbu         $t0, 0x42($s2)
    ctx->pc = 0x1eb644u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x1eb648: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x1EB648u;
    SET_GPR_U32(ctx, 31, 0x1EB650u);
    ctx->pc = 0x1EB64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB648u;
    // 0x1eb64c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x1EB648u, 0x1EB650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB650u;
label_1eb650:
    // 0x1eb650: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x1EB650u;
    SET_GPR_U32(ctx, 31, 0x1EB658u);
    ctx->pc = 0x1EB654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB650u;
    // 0x1eb654: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x1EB650u, 0x1EB658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB658u;
label_1eb658:
    // 0x1eb658: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1eb658u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb65c: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x1EB65Cu;
    SET_GPR_U32(ctx, 31, 0x1EB664u);
    ctx->pc = 0x1EB660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB65Cu;
    // 0x1eb660: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x1EB65Cu, 0x1EB664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB664u;
label_1eb664:
    // 0x1eb664: 0x92480032  lbu         $t0, 0x32($s2)
    ctx->pc = 0x1eb664u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
    // 0x1eb668: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1eb668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb66c: 0x264400f0  addiu       $a0, $s2, 0xF0
    ctx->pc = 0x1eb66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
    // 0x1eb670: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1eb670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb674: 0xc074458  jal         func_1D1160
    ctx->pc = 0x1EB674u;
    SET_GPR_U32(ctx, 31, 0x1EB67Cu);
    ctx->pc = 0x1EB678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB674u;
    // 0x1eb678: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x1EB674u, 0x1EB67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB67Cu;
label_1eb67c:
    // 0x1eb67c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1eb67cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb680: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1eb680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1eb684: 0xc076538  jal         func_1D94E0
    ctx->pc = 0x1EB684u;
    SET_GPR_U32(ctx, 31, 0x1EB68Cu);
    ctx->pc = 0x1EB688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB684u;
    // 0x1eb688: 0x26450044  addiu       $a1, $s2, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D94E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D94E0u, 0x1EB684u, 0x1EB68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB68Cu;
label_1eb68c:
    // 0x1eb68c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1eb68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1eb690: 0x27aa0160  addiu       $t2, $sp, 0x160
    ctx->pc = 0x1eb690u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1eb694: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x1eb694u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x1eb698: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1eb698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1eb69c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1eb69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1eb6a0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1eb6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1eb6a4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1eb6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1eb6a8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1eb6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1eb6ac: 0x7fa90130  sq          $t1, 0x130($sp)
    ctx->pc = 0x1eb6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 9));
    // 0x1eb6b0: 0x78285c30  lq          $t0, 0x5C30($at)
    ctx->pc = 0x1eb6b0u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C30u));
    // 0x1eb6b4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1eb6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1eb6b8: 0x7fa80140  sq          $t0, 0x140($sp)
    ctx->pc = 0x1eb6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 8));
    // 0x1eb6bc: 0x78275c40  lq          $a3, 0x5C40($at)
    ctx->pc = 0x1eb6bcu;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C40u));
    // 0x1eb6c0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1eb6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1eb6c4: 0x7fa70150  sq          $a3, 0x150($sp)
    ctx->pc = 0x1eb6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 7));
    // 0x1eb6c8: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x1eb6c8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x1eb6cc: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1eb6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1eb6d0: 0x7a4300a0  lq          $v1, 0xA0($s2)
    ctx->pc = 0x1eb6d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1eb6d4: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1eb6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1eb6d8: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1EB6D8u;
    SET_GPR_U32(ctx, 31, 0x1EB6E0u);
    ctx->pc = 0x1EB6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB6D8u;
    // 0x1eb6dc: 0xafa2016c  sw          $v0, 0x16C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1EB6D8u, 0x1EB6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB6E0u;
label_1eb6e0:
    // 0x1eb6e0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1eb6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1eb6e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eb6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb6e8: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1EB6E8u;
    SET_GPR_U32(ctx, 31, 0x1EB6F0u);
    ctx->pc = 0x1EB6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB6E8u;
    // 0x1eb6ec: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1EB6E8u, 0x1EB6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB6F0u;
label_1eb6f0:
    // 0x1eb6f0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1eb6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1eb6f4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1eb6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1eb6f8: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1eb6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1eb6fc: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1EB6FCu;
    SET_GPR_U32(ctx, 31, 0x1EB704u);
    ctx->pc = 0x1EB700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB6FCu;
    // 0x1eb700: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1EB6FCu, 0x1EB704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB704u;
label_1eb704:
    // 0x1eb704: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eb704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb708: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1eb708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1eb70c: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1EB70Cu;
    SET_GPR_U32(ctx, 31, 0x1EB714u);
    ctx->pc = 0x1EB710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB70Cu;
    // 0x1eb710: 0x264600a0  addiu       $a2, $s2, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1EB70Cu, 0x1EB714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB714u;
label_1eb714:
    // 0x1eb714: 0x7a430060  lq          $v1, 0x60($s2)
    ctx->pc = 0x1eb714u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1eb718: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eb718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb71c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eb71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb720: 0x16343c  dsll32      $a2, $s6, 16
    ctx->pc = 0x1eb720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) << (32 + 16));
    // 0x1eb724: 0x34440080  ori         $a0, $v0, 0x80
    ctx->pc = 0x1eb724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1eb728: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1eb728u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1eb72c: 0x7c230040  sq          $v1, 0x40($at)
    ctx->pc = 0x1eb72cu;
    WRITE128(ADD32(GPR_U32(ctx, 1), 64), GPR_VEC(ctx, 3));
    // 0x1eb730: 0x7a420070  lq          $v0, 0x70($s2)
    ctx->pc = 0x1eb730u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1eb734: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eb734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb738: 0x7c220050  sq          $v0, 0x50($at)
    ctx->pc = 0x1eb738u;
    runtime->Store128(rdram, ctx, 0x70000050u, GPR_VEC(ctx, 2));
    // 0x1eb73c: 0x7a420080  lq          $v0, 0x80($s2)
    ctx->pc = 0x1eb73cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1eb740: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eb740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb744: 0x7c220060  sq          $v0, 0x60($at)
    ctx->pc = 0x1eb744u;
    runtime->Store128(rdram, ctx, 0x70000060u, GPR_VEC(ctx, 2));
    // 0x1eb748: 0x7a420090  lq          $v0, 0x90($s2)
    ctx->pc = 0x1eb748u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1eb74c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eb74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb750: 0x7c220070  sq          $v0, 0x70($at)
    ctx->pc = 0x1eb750u;
    runtime->Store128(rdram, ctx, 0x70000070u, GPR_VEC(ctx, 2));
    // 0x1eb754: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eb754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb758: 0x8c22004c  lw          $v0, 0x4C($at)
    ctx->pc = 0x1eb758u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x1eb75c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1eb75cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1eb760: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eb760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb764: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1eb764u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1eb768: 0xac22004c  sw          $v0, 0x4C($at)
    ctx->pc = 0x1eb768u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    // 0x1eb76c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eb76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb770: 0x8c22005c  lw          $v0, 0x5C($at)
    ctx->pc = 0x1eb770u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000005Cu)); // MMIO: 0x7000005c
    // 0x1eb774: 0x70461018  mult1       $v0, $v0, $a2
    ctx->pc = 0x1eb774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1eb778: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eb778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb77c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1eb77cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1eb780: 0xac22005c  sw          $v0, 0x5C($at)
    ctx->pc = 0x1eb780u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 92), GPR_U32(ctx, 2));
    // 0x1eb784: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eb784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb788: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x1eb788u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000006Cu)); // MMIO: 0x7000006c
    // 0x1eb78c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1eb78cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1eb790: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eb790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb794: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1eb794u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1eb798: 0xac22006c  sw          $v0, 0x6C($at)
    ctx->pc = 0x1eb798u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 108), GPR_U32(ctx, 2));
    // 0x1eb79c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eb79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb7a0: 0x8c22007c  lw          $v0, 0x7C($at)
    ctx->pc = 0x1eb7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000007Cu)); // MMIO: 0x7000007c
    // 0x1eb7a4: 0x70461018  mult1       $v0, $v0, $a2
    ctx->pc = 0x1eb7a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1eb7a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eb7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb7ac: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1eb7acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1eb7b0: 0xac22007c  sw          $v0, 0x7C($at)
    ctx->pc = 0x1eb7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 124), GPR_U32(ctx, 2));
    // 0x1eb7b4: 0xc64c0050  lwc1        $f12, 0x50($s2)
    ctx->pc = 0x1eb7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eb7b8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1EB7B8u;
    SET_GPR_U32(ctx, 31, 0x1EB7C0u);
    ctx->pc = 0x1EB7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB7B8u;
    // 0x1eb7bc: 0x264500b0  addiu       $a1, $s2, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1EB7B8u, 0x1EB7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB7C0u;
label_1eb7c0:
    // 0x1eb7c0: 0xc64c0050  lwc1        $f12, 0x50($s2)
    ctx->pc = 0x1eb7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eb7c4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eb7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb7c8: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x1eb7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1eb7cc: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1EB7CCu;
    SET_GPR_U32(ctx, 31, 0x1EB7D4u);
    ctx->pc = 0x1EB7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB7CCu;
    // 0x1eb7d0: 0x34440090  ori         $a0, $v0, 0x90 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1EB7CCu, 0x1EB7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB7D4u;
label_1eb7d4:
    // 0x1eb7d4: 0xc64c0050  lwc1        $f12, 0x50($s2)
    ctx->pc = 0x1eb7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eb7d8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eb7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb7dc: 0x264500d0  addiu       $a1, $s2, 0xD0
    ctx->pc = 0x1eb7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1eb7e0: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1EB7E0u;
    SET_GPR_U32(ctx, 31, 0x1EB7E8u);
    ctx->pc = 0x1EB7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB7E0u;
    // 0x1eb7e4: 0x344400a0  ori         $a0, $v0, 0xA0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1EB7E0u, 0x1EB7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB7E8u;
label_1eb7e8:
    // 0x1eb7e8: 0xc64c0050  lwc1        $f12, 0x50($s2)
    ctx->pc = 0x1eb7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eb7ec: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eb7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb7f0: 0x264500e0  addiu       $a1, $s2, 0xE0
    ctx->pc = 0x1eb7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x1eb7f4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1EB7F4u;
    SET_GPR_U32(ctx, 31, 0x1EB7FCu);
    ctx->pc = 0x1EB7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB7F4u;
    // 0x1eb7f8: 0x344400b0  ori         $a0, $v0, 0xB0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)176);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1EB7F4u, 0x1EB7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB7FCu;
label_1eb7fc:
    // 0x1eb7fc: 0x92450031  lbu         $a1, 0x31($s2)
    ctx->pc = 0x1eb7fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x1eb800: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1eb800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1eb804: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1eb804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1eb808: 0xc078604  jal         func_1E1810
    ctx->pc = 0x1EB808u;
    SET_GPR_U32(ctx, 31, 0x1EB810u);
    ctx->pc = 0x1EB80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB808u;
    // 0x1eb80c: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x1EB808u, 0x1EB810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB810u;
label_1eb810:
    // 0x1eb810: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1eb810u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1eb814: 0x92420033  lbu         $v0, 0x33($s2)
    ctx->pc = 0x1eb814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x1eb818: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eb818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eb81c: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1EB81Cu;
    {
        const bool branch_taken_0x1eb81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb81c) {
            ctx->pc = 0x1EB918u;
            goto label_1eb918;
        }
    }
    ctx->pc = 0x1EB824u;
    // 0x1eb824: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1eb824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb828: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1eb828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1eb82c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eb82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eb830: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1eb830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb834: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1eb834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1eb838: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1eb838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb83c: 0x86620008  lh          $v0, 0x8($s3)
    ctx->pc = 0x1eb83cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1eb840: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eb840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eb844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb848: 0x0  nop
    ctx->pc = 0x1eb848u;
    // NOP
    // 0x1eb84c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eb84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eb850: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1eb850u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1eb854: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1eb854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1eb858: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1eb858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1eb85c: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x1eb85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb860: 0x8662000a  lh          $v0, 0xA($s3)
    ctx->pc = 0x1eb860u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x1eb864: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eb864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eb868: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1eb868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1eb86c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb870: 0x0  nop
    ctx->pc = 0x1eb870u;
    // NOP
    // 0x1eb874: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eb874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eb878: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1eb878u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1eb87c: 0x0  nop
    ctx->pc = 0x1eb87cu;
    // NOP
    // 0x1eb880: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1eb880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1eb884: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EB884u;
    SET_GPR_U32(ctx, 31, 0x1EB88Cu);
    ctx->pc = 0x1EB888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB884u;
    // 0x1eb888: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EB884u, 0x1EB88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB88Cu;
label_1eb88c:
    // 0x1eb88c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eb88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb890: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1eb890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1eb894: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x1eb894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1eb898: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EB898u;
    SET_GPR_U32(ctx, 31, 0x1EB8A0u);
    ctx->pc = 0x1EB89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB898u;
    // 0x1eb89c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EB898u, 0x1EB8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB8A0u;
label_1eb8a0:
    // 0x1eb8a0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eb8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb8a4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1eb8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1eb8a8: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x1eb8a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1eb8ac: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EB8ACu;
    SET_GPR_U32(ctx, 31, 0x1EB8B4u);
    ctx->pc = 0x1EB8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB8ACu;
    // 0x1eb8b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EB8ACu, 0x1EB8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB8B4u;
label_1eb8b4:
    // 0x1eb8b4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1eb8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb8b8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1eb8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1eb8bc: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x1eb8bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x1eb8c0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EB8C0u;
    SET_GPR_U32(ctx, 31, 0x1EB8C8u);
    ctx->pc = 0x1EB8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB8C0u;
    // 0x1eb8c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EB8C0u, 0x1EB8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB8C8u;
label_1eb8c8:
    // 0x1eb8c8: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1eb8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1eb8cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1eb8ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb8d0: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1eb8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1eb8d4: 0xc078624  jal         func_1E1890
    ctx->pc = 0x1EB8D4u;
    SET_GPR_U32(ctx, 31, 0x1EB8DCu);
    ctx->pc = 0x1EB8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB8D4u;
    // 0x1eb8d8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1890u, 0x1EB8D4u, 0x1EB8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB8DCu;
label_1eb8dc:
    // 0x1eb8dc: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1eb8dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1eb8e0: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1eb8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb8e4: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1eb8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1eb8e8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1eb8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1eb8ec: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1eb8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1eb8f0: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1eb8f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1eb8f4: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1eb8f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1eb8f8: 0xc075714  jal         func_1D5C50
    ctx->pc = 0x1EB8F8u;
    SET_GPR_U32(ctx, 31, 0x1EB900u);
    ctx->pc = 0x1EB8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB8F8u;
    // 0x1eb8fc: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C50u, 0x1EB8F8u, 0x1EB900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB900u;
label_1eb900:
    // 0x1eb900: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1eb900u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1eb904: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1eb904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1eb908: 0xc07864c  jal         func_1E1930
    ctx->pc = 0x1EB908u;
    SET_GPR_U32(ctx, 31, 0x1EB910u);
    ctx->pc = 0x1EB90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB908u;
    // 0x1eb90c: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1930u, 0x1EB908u, 0x1EB910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB910u;
label_1eb910:
    // 0x1eb910: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EB910u;
    {
        const bool branch_taken_0x1eb910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB910u;
        // 0x1eb914: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb910) {
            ctx->pc = 0x1EB940u;
            goto label_1eb940;
        }
    }
    ctx->pc = 0x1EB918u;
label_1eb918:
    // 0x1eb918: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1eb918u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1eb91c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1eb91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1eb920: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1eb920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1eb924: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1eb924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1eb928: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x1eb928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eb92c: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1eb92cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1eb930: 0xc075714  jal         func_1D5C50
    ctx->pc = 0x1EB930u;
    SET_GPR_U32(ctx, 31, 0x1EB938u);
    ctx->pc = 0x1EB934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB930u;
    // 0x1eb934: 0x34e80040  ori         $t0, $a3, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C50u, 0x1EB930u, 0x1EB938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB938u;
label_1eb938:
    // 0x1eb938: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1eb938u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1eb93c: 0x0  nop
    ctx->pc = 0x1eb93cu;
    // NOP
label_1eb940:
    // 0x1eb940: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB940u;
    {
        const bool branch_taken_0x1eb940 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB940u;
        // 0x1eb944: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb940) {
            ctx->pc = 0x1EB950u;
            goto label_1eb950;
        }
    }
    ctx->pc = 0x1EB948u;
    // 0x1eb948: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1EB948u;
    {
        const bool branch_taken_0x1eb948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb948) {
            ctx->pc = 0x1EB990u;
            goto label_1eb990;
        }
    }
    ctx->pc = 0x1EB950u;
label_1eb950:
    // 0x1eb950: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1eb950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1eb954: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1eb954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1eb958: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1eb958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1eb95c: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x1EB95Cu;
    SET_GPR_U32(ctx, 31, 0x1EB964u);
    ctx->pc = 0x1EB960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB95Cu;
    // 0x1eb960: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x1EB95Cu, 0x1EB964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB964u;
label_1eb964:
    // 0x1eb964: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1eb964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb968: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1EB968u;
    SET_GPR_U32(ctx, 31, 0x1EB970u);
    ctx->pc = 0x1EB96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB968u;
    // 0x1eb96c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1EB968u, 0x1EB970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB970u;
label_1eb970:
    // 0x1eb970: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1eb970u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1eb974: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1eb974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb978: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1eb978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1eb97c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1eb97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb980: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1EB980u;
    SET_GPR_U32(ctx, 31, 0x1EB988u);
    ctx->pc = 0x1EB984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB980u;
    // 0x1eb984: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1EB980u, 0x1EB988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB988u;
label_1eb988:
    // 0x1eb988: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eb988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb98c: 0x0  nop
    ctx->pc = 0x1eb98cu;
    // NOP
label_1eb990:
    // 0x1eb990: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1eb990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1eb994: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1eb994u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1eb998: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1eb998u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eb99c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1eb99cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eb9a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eb9a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb9a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eb9a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb9a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eb9a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb9ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eb9acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB9B0u;
        // 0x1eb9b4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB9B8u;
}
