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

// Function: sub_001DF580
// Address: 0x1df580 - 0x1df7e4
void sub_001DF580_0x1df580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF580_0x1df580");
#endif

    switch (ctx->pc) {
        case 0x1df580u: goto label_1df580;
        case 0x1df584u: goto label_1df584;
        case 0x1df588u: goto label_1df588;
        case 0x1df58cu: goto label_1df58c;
        case 0x1df590u: goto label_1df590;
        case 0x1df594u: goto label_1df594;
        case 0x1df598u: goto label_1df598;
        case 0x1df59cu: goto label_1df59c;
        case 0x1df5a0u: goto label_1df5a0;
        case 0x1df5a4u: goto label_1df5a4;
        case 0x1df5a8u: goto label_1df5a8;
        case 0x1df5acu: goto label_1df5ac;
        case 0x1df5b0u: goto label_1df5b0;
        case 0x1df5b4u: goto label_1df5b4;
        case 0x1df5b8u: goto label_1df5b8;
        case 0x1df5bcu: goto label_1df5bc;
        case 0x1df5c0u: goto label_1df5c0;
        case 0x1df5c4u: goto label_1df5c4;
        case 0x1df5c8u: goto label_1df5c8;
        case 0x1df5ccu: goto label_1df5cc;
        case 0x1df5d0u: goto label_1df5d0;
        case 0x1df5d4u: goto label_1df5d4;
        case 0x1df5d8u: goto label_1df5d8;
        case 0x1df5dcu: goto label_1df5dc;
        case 0x1df5e0u: goto label_1df5e0;
        case 0x1df5e4u: goto label_1df5e4;
        case 0x1df5e8u: goto label_1df5e8;
        case 0x1df5ecu: goto label_1df5ec;
        case 0x1df5f0u: goto label_1df5f0;
        case 0x1df5f4u: goto label_1df5f4;
        case 0x1df5f8u: goto label_1df5f8;
        case 0x1df5fcu: goto label_1df5fc;
        case 0x1df600u: goto label_1df600;
        case 0x1df604u: goto label_1df604;
        case 0x1df608u: goto label_1df608;
        case 0x1df60cu: goto label_1df60c;
        case 0x1df610u: goto label_1df610;
        case 0x1df614u: goto label_1df614;
        case 0x1df618u: goto label_1df618;
        case 0x1df61cu: goto label_1df61c;
        case 0x1df620u: goto label_1df620;
        case 0x1df624u: goto label_1df624;
        case 0x1df628u: goto label_1df628;
        case 0x1df62cu: goto label_1df62c;
        case 0x1df630u: goto label_1df630;
        case 0x1df634u: goto label_1df634;
        case 0x1df638u: goto label_1df638;
        case 0x1df63cu: goto label_1df63c;
        case 0x1df640u: goto label_1df640;
        case 0x1df644u: goto label_1df644;
        case 0x1df648u: goto label_1df648;
        case 0x1df64cu: goto label_1df64c;
        case 0x1df650u: goto label_1df650;
        case 0x1df654u: goto label_1df654;
        case 0x1df658u: goto label_1df658;
        case 0x1df65cu: goto label_1df65c;
        case 0x1df660u: goto label_1df660;
        case 0x1df664u: goto label_1df664;
        case 0x1df668u: goto label_1df668;
        case 0x1df66cu: goto label_1df66c;
        case 0x1df670u: goto label_1df670;
        case 0x1df674u: goto label_1df674;
        case 0x1df678u: goto label_1df678;
        case 0x1df67cu: goto label_1df67c;
        case 0x1df680u: goto label_1df680;
        case 0x1df684u: goto label_1df684;
        case 0x1df688u: goto label_1df688;
        case 0x1df68cu: goto label_1df68c;
        case 0x1df690u: goto label_1df690;
        case 0x1df694u: goto label_1df694;
        case 0x1df698u: goto label_1df698;
        case 0x1df69cu: goto label_1df69c;
        case 0x1df6a0u: goto label_1df6a0;
        case 0x1df6a4u: goto label_1df6a4;
        case 0x1df6a8u: goto label_1df6a8;
        case 0x1df6acu: goto label_1df6ac;
        case 0x1df6b0u: goto label_1df6b0;
        case 0x1df6b4u: goto label_1df6b4;
        case 0x1df6b8u: goto label_1df6b8;
        case 0x1df6bcu: goto label_1df6bc;
        case 0x1df6c0u: goto label_1df6c0;
        case 0x1df6c4u: goto label_1df6c4;
        case 0x1df6c8u: goto label_1df6c8;
        case 0x1df6ccu: goto label_1df6cc;
        case 0x1df6d0u: goto label_1df6d0;
        case 0x1df6d4u: goto label_1df6d4;
        case 0x1df6d8u: goto label_1df6d8;
        case 0x1df6dcu: goto label_1df6dc;
        case 0x1df6e0u: goto label_1df6e0;
        case 0x1df6e4u: goto label_1df6e4;
        case 0x1df6e8u: goto label_1df6e8;
        case 0x1df6ecu: goto label_1df6ec;
        case 0x1df6f0u: goto label_1df6f0;
        case 0x1df6f4u: goto label_1df6f4;
        case 0x1df6f8u: goto label_1df6f8;
        case 0x1df6fcu: goto label_1df6fc;
        case 0x1df700u: goto label_1df700;
        case 0x1df704u: goto label_1df704;
        case 0x1df708u: goto label_1df708;
        case 0x1df70cu: goto label_1df70c;
        case 0x1df710u: goto label_1df710;
        case 0x1df714u: goto label_1df714;
        case 0x1df718u: goto label_1df718;
        case 0x1df71cu: goto label_1df71c;
        case 0x1df720u: goto label_1df720;
        case 0x1df724u: goto label_1df724;
        case 0x1df728u: goto label_1df728;
        case 0x1df72cu: goto label_1df72c;
        case 0x1df730u: goto label_1df730;
        case 0x1df734u: goto label_1df734;
        case 0x1df738u: goto label_1df738;
        case 0x1df73cu: goto label_1df73c;
        case 0x1df740u: goto label_1df740;
        case 0x1df744u: goto label_1df744;
        case 0x1df748u: goto label_1df748;
        case 0x1df74cu: goto label_1df74c;
        case 0x1df750u: goto label_1df750;
        case 0x1df754u: goto label_1df754;
        case 0x1df758u: goto label_1df758;
        case 0x1df75cu: goto label_1df75c;
        case 0x1df760u: goto label_1df760;
        case 0x1df764u: goto label_1df764;
        case 0x1df768u: goto label_1df768;
        case 0x1df76cu: goto label_1df76c;
        case 0x1df770u: goto label_1df770;
        case 0x1df774u: goto label_1df774;
        case 0x1df778u: goto label_1df778;
        case 0x1df77cu: goto label_1df77c;
        case 0x1df780u: goto label_1df780;
        case 0x1df784u: goto label_1df784;
        case 0x1df788u: goto label_1df788;
        case 0x1df78cu: goto label_1df78c;
        case 0x1df790u: goto label_1df790;
        case 0x1df794u: goto label_1df794;
        case 0x1df798u: goto label_1df798;
        case 0x1df79cu: goto label_1df79c;
        case 0x1df7a0u: goto label_1df7a0;
        case 0x1df7a4u: goto label_1df7a4;
        case 0x1df7a8u: goto label_1df7a8;
        case 0x1df7acu: goto label_1df7ac;
        case 0x1df7b0u: goto label_1df7b0;
        case 0x1df7b4u: goto label_1df7b4;
        case 0x1df7b8u: goto label_1df7b8;
        case 0x1df7bcu: goto label_1df7bc;
        case 0x1df7c0u: goto label_1df7c0;
        case 0x1df7c4u: goto label_1df7c4;
        case 0x1df7c8u: goto label_1df7c8;
        case 0x1df7ccu: goto label_1df7cc;
        case 0x1df7d0u: goto label_1df7d0;
        case 0x1df7d4u: goto label_1df7d4;
        case 0x1df7d8u: goto label_1df7d8;
        case 0x1df7dcu: goto label_1df7dc;
        case 0x1df7e0u: goto label_1df7e0;
        default: break;
    }

    ctx->pc = 0x1df580u;

label_1df580:
    // 0x1df580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1df580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1df584:
    // 0x1df584: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1df584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1df588:
    // 0x1df588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1df588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1df58c:
    // 0x1df58c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1df590:
    // 0x1df590: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1df590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1df594:
    // 0x1df594: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1df598:
    if (ctx->pc == 0x1DF598u) {
        ctx->pc = 0x1DF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF594u;
        // 0x1df598: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF59Cu;
        goto label_1df59c;
    }
    ctx->pc = 0x1DF594u;
    {
        const bool branch_taken_0x1df594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF594u;
        // 0x1df598: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df594) {
            ctx->pc = 0x1DF5A8u;
            goto label_1df5a8;
        }
    }
    ctx->pc = 0x1DF59Cu;
label_1df59c:
    // 0x1df59c: 0x1000008c  b           . + 4 + (0x8C << 2)
label_1df5a0:
    if (ctx->pc == 0x1DF5A0u) {
        ctx->pc = 0x1DF5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF59Cu;
        // 0x1df5a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF5A4u;
        goto label_1df5a4;
    }
    ctx->pc = 0x1DF59Cu;
    {
        const bool branch_taken_0x1df59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF59Cu;
        // 0x1df5a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df59c) {
            ctx->pc = 0x1DF7D0u;
            goto label_1df7d0;
        }
    }
    ctx->pc = 0x1DF5A4u;
label_1df5a4:
    // 0x1df5a4: 0x0  nop
    ctx->pc = 0x1df5a4u;
    // NOP
label_1df5a8:
    // 0x1df5a8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1df5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1df5ac:
    // 0x1df5ac: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1df5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1df5b0:
    // 0x1df5b0: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1df5b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1df5b4:
    // 0x1df5b4: 0x320f809  jalr        $t9
label_1df5b8:
    if (ctx->pc == 0x1DF5B8u) {
        ctx->pc = 0x1DF5BCu;
        goto label_1df5bc;
    }
    ctx->pc = 0x1DF5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF5BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF5B4u, 0x1DF5BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DF5BCu;
label_1df5bc:
    // 0x1df5bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1df5c0:
    if (ctx->pc == 0x1DF5C0u) {
        ctx->pc = 0x1DF5C4u;
        goto label_1df5c4;
    }
    ctx->pc = 0x1DF5BCu;
    {
        const bool branch_taken_0x1df5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df5bc) {
            ctx->pc = 0x1DF5E0u;
            goto label_1df5e0;
        }
    }
    ctx->pc = 0x1DF5C4u;
label_1df5c4:
    // 0x1df5c4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1df5c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1df5c8:
    // 0x1df5c8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1df5c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1df5cc:
    // 0x1df5cc: 0x320f809  jalr        $t9
label_1df5d0:
    if (ctx->pc == 0x1DF5D0u) {
        ctx->pc = 0x1DF5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5CCu;
        // 0x1df5d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF5D4u;
        goto label_1df5d4;
    }
    ctx->pc = 0x1DF5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF5D4u);
        ctx->pc = 0x1DF5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5CCu;
        // 0x1df5d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF5CCu, 0x1DF5D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DF5D4u;
label_1df5d4:
    // 0x1df5d4: 0x1000007e  b           . + 4 + (0x7E << 2)
label_1df5d8:
    if (ctx->pc == 0x1DF5D8u) {
        ctx->pc = 0x1DF5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5D4u;
        // 0x1df5d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF5DCu;
        goto label_1df5dc;
    }
    ctx->pc = 0x1DF5D4u;
    {
        const bool branch_taken_0x1df5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5D4u;
        // 0x1df5d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df5d4) {
            ctx->pc = 0x1DF7D0u;
            goto label_1df7d0;
        }
    }
    ctx->pc = 0x1DF5DCu;
label_1df5dc:
    // 0x1df5dc: 0x0  nop
    ctx->pc = 0x1df5dcu;
    // NOP
label_1df5e0:
    // 0x1df5e0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1df5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1df5e4:
    // 0x1df5e4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1df5e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1df5e8:
    // 0x1df5e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1df5ec:
    if (ctx->pc == 0x1DF5ECu) {
        ctx->pc = 0x1DF5F0u;
        goto label_1df5f0;
    }
    ctx->pc = 0x1DF5E8u;
    {
        const bool branch_taken_0x1df5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df5e8) {
            ctx->pc = 0x1DF5F8u;
            goto label_1df5f8;
        }
    }
    ctx->pc = 0x1DF5F0u;
label_1df5f0:
    // 0x1df5f0: 0x10000077  b           . + 4 + (0x77 << 2)
label_1df5f4:
    if (ctx->pc == 0x1DF5F4u) {
        ctx->pc = 0x1DF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5F0u;
        // 0x1df5f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF5F8u;
        goto label_1df5f8;
    }
    ctx->pc = 0x1DF5F0u;
    {
        const bool branch_taken_0x1df5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5F0u;
        // 0x1df5f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df5f0) {
            ctx->pc = 0x1DF7D0u;
            goto label_1df7d0;
        }
    }
    ctx->pc = 0x1DF5F8u;
label_1df5f8:
    // 0x1df5f8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1df5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1df5fc:
    // 0x1df5fc: 0x84680000  lh          $t0, 0x0($v1)
    ctx->pc = 0x1df5fcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1df600:
    // 0x1df600: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1df600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1df604:
    // 0x1df604: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1df604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1df608:
    // 0x1df608: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1df608u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1df60c:
    // 0x1df60c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1df60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1df610:
    // 0x1df610: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1df610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1df614:
    // 0x1df614: 0x84a70008  lh          $a3, 0x8($a1)
    ctx->pc = 0x1df614u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_1df618:
    // 0x1df618: 0x84a3000a  lh          $v1, 0xA($a1)
    ctx->pc = 0x1df618u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_1df61c:
    // 0x1df61c: 0x107302a  slt         $a2, $t0, $a3
    ctx->pc = 0x1df61cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1df620:
    // 0x1df620: 0x68282a  slt         $a1, $v1, $t0
    ctx->pc = 0x1df620u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1df624:
    // 0x1df624: 0x38637ffd  xori        $v1, $v1, 0x7FFD
    ctx->pc = 0x1df624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)32765);
label_1df628:
    // 0x1df628: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1df628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1df62c:
    // 0x1df62c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1df62cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1df630:
    // 0x1df630: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1df630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1df634:
    // 0x1df634: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1df634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1df638:
    // 0x1df638: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1df638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1df63c:
    // 0x1df63c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1df640:
    if (ctx->pc == 0x1DF640u) {
        ctx->pc = 0x1DF644u;
        goto label_1df644;
    }
    ctx->pc = 0x1DF63Cu;
    {
        const bool branch_taken_0x1df63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df63c) {
            ctx->pc = 0x1DF650u;
            goto label_1df650;
        }
    }
    ctx->pc = 0x1DF644u;
label_1df644:
    // 0x1df644: 0x10000062  b           . + 4 + (0x62 << 2)
label_1df648:
    if (ctx->pc == 0x1DF648u) {
        ctx->pc = 0x1DF648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF644u;
        // 0x1df648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF64Cu;
        goto label_1df64c;
    }
    ctx->pc = 0x1DF644u;
    {
        const bool branch_taken_0x1df644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF644u;
        // 0x1df648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df644) {
            ctx->pc = 0x1DF7D0u;
            goto label_1df7d0;
        }
    }
    ctx->pc = 0x1DF64Cu;
label_1df64c:
    // 0x1df64c: 0x0  nop
    ctx->pc = 0x1df64cu;
    // NOP
label_1df650:
    // 0x1df650: 0xe81026  xor         $v0, $a3, $t0
    ctx->pc = 0x1df650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 8));
label_1df654:
    // 0x1df654: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1df654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1df658:
    // 0x1df658: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1df658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1df65c:
    // 0x1df65c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1df660:
    if (ctx->pc == 0x1DF660u) {
        ctx->pc = 0x1DF664u;
        goto label_1df664;
    }
    ctx->pc = 0x1DF65Cu;
    {
        const bool branch_taken_0x1df65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df65c) {
            ctx->pc = 0x1DF688u;
            goto label_1df688;
        }
    }
    ctx->pc = 0x1DF664u;
label_1df664:
    // 0x1df664: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1df664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1df668:
    // 0x1df668: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1df668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1df66c:
    // 0x1df66c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1df66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1df670:
    // 0x1df670: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1df670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1df674:
    // 0x1df674: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1df674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1df678:
    // 0x1df678: 0xe6230030  swc1        $f3, 0x30($s1)
    ctx->pc = 0x1df678u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_1df67c:
    // 0x1df67c: 0xe6220034  swc1        $f2, 0x34($s1)
    ctx->pc = 0x1df67cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_1df680:
    // 0x1df680: 0xe6210038  swc1        $f1, 0x38($s1)
    ctx->pc = 0x1df680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_1df684:
    // 0x1df684: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x1df684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_1df688:
    // 0x1df688: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1df688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1df68c:
    // 0x1df68c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1df68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1df690:
    // 0x1df690: 0x84500000  lh          $s0, 0x0($v0)
    ctx->pc = 0x1df690u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1df694:
    // 0x1df694: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x1df694u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1df698:
    // 0x1df698: 0xd0082a  slt         $at, $a2, $s0
    ctx->pc = 0x1df698u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1df69c:
    // 0x1df69c: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
label_1df6a0:
    if (ctx->pc == 0x1DF6A0u) {
        ctx->pc = 0x1DF6A4u;
        goto label_1df6a4;
    }
    ctx->pc = 0x1DF69Cu;
    {
        const bool branch_taken_0x1df69c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df69c) {
            ctx->pc = 0x1DF710u;
            goto label_1df710;
        }
    }
    ctx->pc = 0x1DF6A4u;
label_1df6a4:
    // 0x1df6a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1df6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1df6a8:
    // 0x1df6a8: 0x84450008  lh          $a1, 0x8($v0)
    ctx->pc = 0x1df6a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1df6ac:
    // 0x1df6ac: 0x14a60005  bne         $a1, $a2, . + 4 + (0x5 << 2)
label_1df6b0:
    if (ctx->pc == 0x1DF6B0u) {
        ctx->pc = 0x1DF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6ACu;
        // 0x1df6b0: 0x10243c  dsll32      $a0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF6B4u;
        goto label_1df6b4;
    }
    ctx->pc = 0x1DF6ACu;
    {
        const bool branch_taken_0x1df6ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1DF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6ACu;
        // 0x1df6b0: 0x10243c  dsll32      $a0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df6ac) {
            ctx->pc = 0x1DF6C4u;
            goto label_1df6c4;
        }
    }
    ctx->pc = 0x1DF6B4u;
label_1df6b4:
    // 0x1df6b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1df6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1df6b8:
    // 0x1df6b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1df6bc:
    // 0x1df6bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1df6c0:
    if (ctx->pc == 0x1DF6C0u) {
        ctx->pc = 0x1DF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6BCu;
        // 0x1df6c0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF6C4u;
        goto label_1df6c4;
    }
    ctx->pc = 0x1DF6BCu;
    {
        const bool branch_taken_0x1df6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6BCu;
        // 0x1df6c0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df6bc) {
            ctx->pc = 0x1DF6D0u;
            goto label_1df6d0;
        }
    }
    ctx->pc = 0x1DF6C4u;
label_1df6c4:
    // 0x1df6c4: 0xc0767d4  jal         func_1D9F50
label_1df6c8:
    if (ctx->pc == 0x1DF6C8u) {
        ctx->pc = 0x1DF6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6C4u;
        // 0x1df6c8: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF6CCu;
        goto label_1df6cc;
    }
    ctx->pc = 0x1DF6C4u;
    SET_GPR_U32(ctx, 31, 0x1DF6CCu);
    ctx->pc = 0x1DF6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF6C4u;
    // 0x1df6c8: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1DF6C4u, 0x1DF6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF6CCu;
label_1df6cc:
    // 0x1df6cc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1df6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1df6d0:
    // 0x1df6d0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1df6d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1df6d4:
    // 0x1df6d4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1df6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1df6d8:
    // 0x1df6d8: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1df6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1df6dc:
    // 0x1df6dc: 0xc0767e8  jal         func_1D9FA0
label_1df6e0:
    if (ctx->pc == 0x1DF6E0u) {
        ctx->pc = 0x1DF6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6DCu;
        // 0x1df6e0: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF6E4u;
        goto label_1df6e4;
    }
    ctx->pc = 0x1DF6DCu;
    SET_GPR_U32(ctx, 31, 0x1DF6E4u);
    ctx->pc = 0x1DF6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF6DCu;
    // 0x1df6e0: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x1DF6DCu, 0x1DF6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF6E4u;
label_1df6e4:
    // 0x1df6e4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1df6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1df6e8:
    // 0x1df6e8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1df6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
label_1df6ec:
    // 0x1df6ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1df6ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1df6f0:
    // 0x1df6f0: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1df6f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1df6f4:
    // 0x1df6f4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1df6f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1df6f8:
    // 0x1df6f8: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_1df6fc:
    if (ctx->pc == 0x1DF6FCu) {
        ctx->pc = 0x1DF700u;
        goto label_1df700;
    }
    ctx->pc = 0x1DF6F8u;
    {
        const bool branch_taken_0x1df6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df6f8) {
            ctx->pc = 0x1DF7C8u;
            goto label_1df7c8;
        }
    }
    ctx->pc = 0x1DF700u;
label_1df700:
    // 0x1df700: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1df700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1df704:
    // 0x1df704: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1df704u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1df708:
    // 0x1df708: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1df70c:
    if (ctx->pc == 0x1DF70Cu) {
        ctx->pc = 0x1DF70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF708u;
        // 0x1df70c: 0x7e220030  sq          $v0, 0x30($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF710u;
        goto label_1df710;
    }
    ctx->pc = 0x1DF708u;
    {
        const bool branch_taken_0x1df708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF708u;
        // 0x1df70c: 0x7e220030  sq          $v0, 0x30($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df708) {
            ctx->pc = 0x1DF7C8u;
            goto label_1df7c8;
        }
    }
    ctx->pc = 0x1DF710u;
label_1df710:
    // 0x1df710: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1df710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1df714:
    // 0x1df714: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1df714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1df718:
    // 0x1df718: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1df718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1df71c:
    // 0x1df71c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1df71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1df720:
    // 0x1df720: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1df720u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1df724:
    // 0x1df724: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_1df728:
    if (ctx->pc == 0x1DF728u) {
        ctx->pc = 0x1DF728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF724u;
        // 0x1df728: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF72Cu;
        goto label_1df72c;
    }
    ctx->pc = 0x1DF724u;
    {
        const bool branch_taken_0x1df724 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF724u;
        // 0x1df728: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df724) {
            ctx->pc = 0x1DF7C8u;
            goto label_1df7c8;
        }
    }
    ctx->pc = 0x1DF72Cu;
label_1df72c:
    // 0x1df72c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1df72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1df730:
    // 0x1df730: 0x84460020  lh          $a2, 0x20($v0)
    ctx->pc = 0x1df730u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1df734:
    // 0x1df734: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x1df734u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1df738:
    // 0x1df738: 0x14a60005  bne         $a1, $a2, . + 4 + (0x5 << 2)
label_1df73c:
    if (ctx->pc == 0x1DF73Cu) {
        ctx->pc = 0x1DF740u;
        goto label_1df740;
    }
    ctx->pc = 0x1DF738u;
    {
        const bool branch_taken_0x1df738 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1df738) {
            ctx->pc = 0x1DF750u;
            goto label_1df750;
        }
    }
    ctx->pc = 0x1DF740u;
label_1df740:
    // 0x1df740: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1df740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1df744:
    // 0x1df744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1df748:
    // 0x1df748: 0x10000005  b           . + 4 + (0x5 << 2)
label_1df74c:
    if (ctx->pc == 0x1DF74Cu) {
        ctx->pc = 0x1DF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF748u;
        // 0x1df74c: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF750u;
        goto label_1df750;
    }
    ctx->pc = 0x1DF748u;
    {
        const bool branch_taken_0x1df748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF748u;
        // 0x1df74c: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df748) {
            ctx->pc = 0x1DF760u;
            goto label_1df760;
        }
    }
    ctx->pc = 0x1DF750u;
label_1df750:
    // 0x1df750: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1df750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
label_1df754:
    // 0x1df754: 0xc0767d4  jal         func_1D9F50
label_1df758:
    if (ctx->pc == 0x1DF758u) {
        ctx->pc = 0x1DF758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF754u;
        // 0x1df758: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF75Cu;
        goto label_1df75c;
    }
    ctx->pc = 0x1DF754u;
    SET_GPR_U32(ctx, 31, 0x1DF75Cu);
    ctx->pc = 0x1DF758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF754u;
    // 0x1df758: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1DF754u, 0x1DF75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF75Cu;
label_1df75c:
    // 0x1df75c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1df75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1df760:
    // 0x1df760: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1df760u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1df764:
    // 0x1df764: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1df764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1df768:
    // 0x1df768: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1df768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1df76c:
    // 0x1df76c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1df76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1df770:
    // 0x1df770: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1df770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1df774:
    // 0x1df774: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1df774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1df778:
    // 0x1df778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1df778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1df77c:
    // 0x1df77c: 0xc0767e8  jal         func_1D9FA0
label_1df780:
    if (ctx->pc == 0x1DF780u) {
        ctx->pc = 0x1DF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF77Cu;
        // 0x1df780: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF784u;
        goto label_1df784;
    }
    ctx->pc = 0x1DF77Cu;
    SET_GPR_U32(ctx, 31, 0x1DF784u);
    ctx->pc = 0x1DF780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF77Cu;
    // 0x1df780: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x1DF77Cu, 0x1DF784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF784u;
label_1df784:
    // 0x1df784: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1df784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1df788:
    // 0x1df788: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1df788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
label_1df78c:
    // 0x1df78c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1df78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1df790:
    // 0x1df790: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1df790u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1df794:
    // 0x1df794: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1df794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1df798:
    // 0x1df798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1df798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1df79c:
    // 0x1df79c: 0x84420020  lh          $v0, 0x20($v0)
    ctx->pc = 0x1df79cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1df7a0:
    // 0x1df7a0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1df7a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1df7a4:
    // 0x1df7a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1df7a8:
    if (ctx->pc == 0x1DF7A8u) {
        ctx->pc = 0x1DF7ACu;
        goto label_1df7ac;
    }
    ctx->pc = 0x1DF7A4u;
    {
        const bool branch_taken_0x1df7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df7a4) {
            ctx->pc = 0x1DF7C8u;
            goto label_1df7c8;
        }
    }
    ctx->pc = 0x1DF7ACu;
label_1df7ac:
    // 0x1df7ac: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1df7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1df7b0:
    // 0x1df7b0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1df7b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1df7b4:
    // 0x1df7b4: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x1df7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
label_1df7b8:
    // 0x1df7b8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1df7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1df7bc:
    // 0x1df7bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1df7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1df7c0:
    // 0x1df7c0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1df7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_1df7c4:
    // 0x1df7c4: 0x0  nop
    ctx->pc = 0x1df7c4u;
    // NOP
label_1df7c8:
    // 0x1df7c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df7cc:
    // 0x1df7cc: 0x0  nop
    ctx->pc = 0x1df7ccu;
    // NOP
label_1df7d0:
    // 0x1df7d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1df7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1df7d4:
    // 0x1df7d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1df7d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1df7d8:
    // 0x1df7d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df7d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1df7dc:
    // 0x1df7dc: 0x3e00008  jr          $ra
label_1df7e0:
    if (ctx->pc == 0x1DF7E0u) {
        ctx->pc = 0x1DF7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7DCu;
        // 0x1df7e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF7E4u;
        goto label_fallthrough_0x1df7dc;
    }
    ctx->pc = 0x1DF7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7DCu;
        // 0x1df7e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1df7dc:
    ctx->pc = 0x1DF7E4u;
}
