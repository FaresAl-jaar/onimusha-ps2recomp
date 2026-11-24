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

// Function: sub_00299800
// Address: 0x299800 - 0x2999cc
void sub_00299800_0x299800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299800_0x299800");
#endif

    switch (ctx->pc) {
        case 0x299800u: goto label_299800;
        case 0x299804u: goto label_299804;
        case 0x299808u: goto label_299808;
        case 0x29980cu: goto label_29980c;
        case 0x299810u: goto label_299810;
        case 0x299814u: goto label_299814;
        case 0x299818u: goto label_299818;
        case 0x29981cu: goto label_29981c;
        case 0x299820u: goto label_299820;
        case 0x299824u: goto label_299824;
        case 0x299828u: goto label_299828;
        case 0x29982cu: goto label_29982c;
        case 0x299830u: goto label_299830;
        case 0x299834u: goto label_299834;
        case 0x299838u: goto label_299838;
        case 0x29983cu: goto label_29983c;
        case 0x299840u: goto label_299840;
        case 0x299844u: goto label_299844;
        case 0x299848u: goto label_299848;
        case 0x29984cu: goto label_29984c;
        case 0x299850u: goto label_299850;
        case 0x299854u: goto label_299854;
        case 0x299858u: goto label_299858;
        case 0x29985cu: goto label_29985c;
        case 0x299860u: goto label_299860;
        case 0x299864u: goto label_299864;
        case 0x299868u: goto label_299868;
        case 0x29986cu: goto label_29986c;
        case 0x299870u: goto label_299870;
        case 0x299874u: goto label_299874;
        case 0x299878u: goto label_299878;
        case 0x29987cu: goto label_29987c;
        case 0x299880u: goto label_299880;
        case 0x299884u: goto label_299884;
        case 0x299888u: goto label_299888;
        case 0x29988cu: goto label_29988c;
        case 0x299890u: goto label_299890;
        case 0x299894u: goto label_299894;
        case 0x299898u: goto label_299898;
        case 0x29989cu: goto label_29989c;
        case 0x2998a0u: goto label_2998a0;
        case 0x2998a4u: goto label_2998a4;
        case 0x2998a8u: goto label_2998a8;
        case 0x2998acu: goto label_2998ac;
        case 0x2998b0u: goto label_2998b0;
        case 0x2998b4u: goto label_2998b4;
        case 0x2998b8u: goto label_2998b8;
        case 0x2998bcu: goto label_2998bc;
        case 0x2998c0u: goto label_2998c0;
        case 0x2998c4u: goto label_2998c4;
        case 0x2998c8u: goto label_2998c8;
        case 0x2998ccu: goto label_2998cc;
        case 0x2998d0u: goto label_2998d0;
        case 0x2998d4u: goto label_2998d4;
        case 0x2998d8u: goto label_2998d8;
        case 0x2998dcu: goto label_2998dc;
        case 0x2998e0u: goto label_2998e0;
        case 0x2998e4u: goto label_2998e4;
        case 0x2998e8u: goto label_2998e8;
        case 0x2998ecu: goto label_2998ec;
        case 0x2998f0u: goto label_2998f0;
        case 0x2998f4u: goto label_2998f4;
        case 0x2998f8u: goto label_2998f8;
        case 0x2998fcu: goto label_2998fc;
        case 0x299900u: goto label_299900;
        case 0x299904u: goto label_299904;
        case 0x299908u: goto label_299908;
        case 0x29990cu: goto label_29990c;
        case 0x299910u: goto label_299910;
        case 0x299914u: goto label_299914;
        case 0x299918u: goto label_299918;
        case 0x29991cu: goto label_29991c;
        case 0x299920u: goto label_299920;
        case 0x299924u: goto label_299924;
        case 0x299928u: goto label_299928;
        case 0x29992cu: goto label_29992c;
        case 0x299930u: goto label_299930;
        case 0x299934u: goto label_299934;
        case 0x299938u: goto label_299938;
        case 0x29993cu: goto label_29993c;
        case 0x299940u: goto label_299940;
        case 0x299944u: goto label_299944;
        case 0x299948u: goto label_299948;
        case 0x29994cu: goto label_29994c;
        case 0x299950u: goto label_299950;
        case 0x299954u: goto label_299954;
        case 0x299958u: goto label_299958;
        case 0x29995cu: goto label_29995c;
        case 0x299960u: goto label_299960;
        case 0x299964u: goto label_299964;
        case 0x299968u: goto label_299968;
        case 0x29996cu: goto label_29996c;
        case 0x299970u: goto label_299970;
        case 0x299974u: goto label_299974;
        case 0x299978u: goto label_299978;
        case 0x29997cu: goto label_29997c;
        case 0x299980u: goto label_299980;
        case 0x299984u: goto label_299984;
        case 0x299988u: goto label_299988;
        case 0x29998cu: goto label_29998c;
        case 0x299990u: goto label_299990;
        case 0x299994u: goto label_299994;
        case 0x299998u: goto label_299998;
        case 0x29999cu: goto label_29999c;
        case 0x2999a0u: goto label_2999a0;
        case 0x2999a4u: goto label_2999a4;
        case 0x2999a8u: goto label_2999a8;
        case 0x2999acu: goto label_2999ac;
        case 0x2999b0u: goto label_2999b0;
        case 0x2999b4u: goto label_2999b4;
        case 0x2999b8u: goto label_2999b8;
        case 0x2999bcu: goto label_2999bc;
        case 0x2999c0u: goto label_2999c0;
        case 0x2999c4u: goto label_2999c4;
        case 0x2999c8u: goto label_2999c8;
        default: break;
    }

    ctx->pc = 0x299800u;

label_299800:
    // 0x299800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_299804:
    // 0x299804: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x299804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_299808:
    // 0x299808: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x299808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29980c:
    // 0x29980c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29980cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_299810:
    // 0x299810: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x299810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_299814:
    // 0x299814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x299814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_299818:
    // 0x299818: 0x8c8407ec  lw          $a0, 0x7EC($a0)
    ctx->pc = 0x299818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2028)));
label_29981c:
    // 0x29981c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29981cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_299820:
    // 0x299820: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
label_299824:
    if (ctx->pc == 0x299824u) {
        ctx->pc = 0x299828u;
        goto label_299828;
    }
    ctx->pc = 0x299820u;
    {
        const bool branch_taken_0x299820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x299820) {
            ctx->pc = 0x299960u;
            goto label_299960;
        }
    }
    ctx->pc = 0x299828u;
label_299828:
    // 0x299828: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x299828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_29982c:
    // 0x29982c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x29982cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_299830:
    // 0x299830: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x299830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_299834:
    // 0x299834: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_299838:
    if (ctx->pc == 0x299838u) {
        ctx->pc = 0x299838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299834u;
        // 0x299838: 0x838024  and         $s0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29983Cu;
        goto label_29983c;
    }
    ctx->pc = 0x299834u;
    {
        const bool branch_taken_0x299834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299834u;
        // 0x299838: 0x838024  and         $s0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299834) {
            ctx->pc = 0x299848u;
            goto label_299848;
        }
    }
    ctx->pc = 0x29983Cu;
label_29983c:
    // 0x29983c: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x29983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_299840:
    // 0x299840: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x299840u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_299844:
    // 0x299844: 0x0  nop
    ctx->pc = 0x299844u;
    // NOP
label_299848:
    // 0x299848: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x299848u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_29984c:
    // 0x29984c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x29984cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_299850:
    // 0x299850: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_299854:
    // 0x299854: 0x922307f5  lbu         $v1, 0x7F5($s1)
    ctx->pc = 0x299854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2037)));
label_299858:
    // 0x299858: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x299858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29985c:
    // 0x29985c: 0x922207f4  lbu         $v0, 0x7F4($s1)
    ctx->pc = 0x29985cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2036)));
label_299860:
    // 0x299860: 0x922607f2  lbu         $a2, 0x7F2($s1)
    ctx->pc = 0x299860u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2034)));
label_299864:
    // 0x299864: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x299864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_299868:
    // 0x299868: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x299868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_29986c:
    // 0x29986c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x29986cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_299870:
    // 0x299870: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x299870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_299874:
    // 0x299874: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x299874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_299878:
    // 0x299878: 0x320f809  jalr        $t9
label_29987c:
    if (ctx->pc == 0x29987Cu) {
        ctx->pc = 0x29987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299878u;
        // 0x29987c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299880u;
        goto label_299880;
    }
    ctx->pc = 0x299878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x299880u);
        ctx->pc = 0x29987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299878u;
        // 0x29987c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299878u, 0x299880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x299880u;
label_299880:
    // 0x299880: 0x962307f2  lhu         $v1, 0x7F2($s1)
    ctx->pc = 0x299880u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2034)));
label_299884:
    // 0x299884: 0x3062ff00  andi        $v0, $v1, 0xFF00
    ctx->pc = 0x299884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_299888:
    // 0x299888: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_29988c:
    if (ctx->pc == 0x29988Cu) {
        ctx->pc = 0x299890u;
        goto label_299890;
    }
    ctx->pc = 0x299888u;
    {
        const bool branch_taken_0x299888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299888) {
            ctx->pc = 0x299908u;
            goto label_299908;
        }
    }
    ctx->pc = 0x299890u;
label_299890:
    // 0x299890: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x299890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_299894:
    // 0x299894: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x299894u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
label_299898:
    // 0x299898: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x299898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29989c:
    // 0x29989c: 0x922307f5  lbu         $v1, 0x7F5($s1)
    ctx->pc = 0x29989cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2037)));
label_2998a0:
    // 0x2998a0: 0x922207f4  lbu         $v0, 0x7F4($s1)
    ctx->pc = 0x2998a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2036)));
label_2998a4:
    // 0x2998a4: 0x36070002  ori         $a3, $s0, 0x2
    ctx->pc = 0x2998a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
label_2998a8:
    // 0x2998a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2998a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2998ac:
    // 0x2998ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2998acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2998b0:
    // 0x2998b0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2998b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2998b4:
    // 0x2998b4: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x2998b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_2998b8:
    // 0x2998b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2998b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2998bc:
    // 0x2998bc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2998bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2998c0:
    // 0x2998c0: 0x320f809  jalr        $t9
label_2998c4:
    if (ctx->pc == 0x2998C4u) {
        ctx->pc = 0x2998C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998C0u;
        // 0x2998c4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2998C8u;
        goto label_2998c8;
    }
    ctx->pc = 0x2998C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2998C8u);
        ctx->pc = 0x2998C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998C0u;
        // 0x2998c4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2998C0u, 0x2998C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2998C8u;
label_2998c8:
    // 0x2998c8: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x2998c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_2998cc:
    // 0x2998cc: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2998ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_2998d0:
    // 0x2998d0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2998d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2998d4:
    // 0x2998d4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2998d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2998d8:
    // 0x2998d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2998d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2998dc:
    // 0x2998dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2998e0:
    if (ctx->pc == 0x2998E0u) {
        ctx->pc = 0x2998E4u;
        goto label_2998e4;
    }
    ctx->pc = 0x2998DCu;
    {
        const bool branch_taken_0x2998dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2998dc) {
            ctx->pc = 0x2998F8u;
            goto label_2998f8;
        }
    }
    ctx->pc = 0x2998E4u;
label_2998e4:
    // 0x2998e4: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2998e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2998e8:
    // 0x2998e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2998e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2998ec:
    // 0x2998ec: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2998ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2998f0:
    // 0x2998f0: 0x320f809  jalr        $t9
label_2998f4:
    if (ctx->pc == 0x2998F4u) {
        ctx->pc = 0x2998F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998F0u;
        // 0x2998f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2998F8u;
        goto label_2998f8;
    }
    ctx->pc = 0x2998F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2998F8u);
        ctx->pc = 0x2998F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998F0u;
        // 0x2998f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2998F0u, 0x2998F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2998F8u;
label_2998f8:
    // 0x2998f8: 0x8e2307ec  lw          $v1, 0x7EC($s1)
    ctx->pc = 0x2998f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2028)));
label_2998fc:
    // 0x2998fc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2998fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_299900:
    // 0x299900: 0x10000007  b           . + 4 + (0x7 << 2)
label_299904:
    if (ctx->pc == 0x299904u) {
        ctx->pc = 0x299904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299900u;
        // 0x299904: 0xae2307ec  sw          $v1, 0x7EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299908u;
        goto label_299908;
    }
    ctx->pc = 0x299900u;
    {
        const bool branch_taken_0x299900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299900u;
        // 0x299904: 0xae2307ec  sw          $v1, 0x7EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299900) {
            ctx->pc = 0x299920u;
            goto label_299920;
        }
    }
    ctx->pc = 0x299908u;
label_299908:
    // 0x299908: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x299908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_29990c:
    // 0x29990c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29990cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_299910:
    // 0x299910: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x299910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_299914:
    // 0x299914: 0xc061b84  jal         func_186E10
label_299918:
    if (ctx->pc == 0x299918u) {
        ctx->pc = 0x299918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299914u;
        // 0x299918: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29991Cu;
        goto label_29991c;
    }
    ctx->pc = 0x299914u;
    SET_GPR_U32(ctx, 31, 0x29991Cu);
    ctx->pc = 0x299918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299914u;
    // 0x299918: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186E10u, 0x299914u, 0x29991Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29991Cu;
label_29991c:
    // 0x29991c: 0x0  nop
    ctx->pc = 0x29991cu;
    // NOP
label_299920:
    // 0x299920: 0x8e2307ec  lw          $v1, 0x7EC($s1)
    ctx->pc = 0x299920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2028)));
label_299924:
    // 0x299924: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x299924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
label_299928:
    // 0x299928: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x299928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
label_29992c:
    // 0x29992c: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x29992cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
label_299930:
    // 0x299930: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x299930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_299934:
    // 0x299934: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x299934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_299938:
    // 0x299938: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x299938u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29993c:
    // 0x29993c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29993cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_299940:
    // 0x299940: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x299940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_299944:
    // 0x299944: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_299948:
    if (ctx->pc == 0x299948u) {
        ctx->pc = 0x29994Cu;
        goto label_29994c;
    }
    ctx->pc = 0x299944u;
    {
        const bool branch_taken_0x299944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x299944) {
            ctx->pc = 0x299960u;
            goto label_299960;
        }
    }
    ctx->pc = 0x29994Cu;
label_29994c:
    // 0x29994c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x29994cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_299950:
    // 0x299950: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x299950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_299954:
    // 0x299954: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x299954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_299958:
    // 0x299958: 0x320f809  jalr        $t9
label_29995c:
    if (ctx->pc == 0x29995Cu) {
        ctx->pc = 0x29995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299958u;
        // 0x29995c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299960u;
        goto label_299960;
    }
    ctx->pc = 0x299958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x299960u);
        ctx->pc = 0x29995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299958u;
        // 0x29995c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299958u, 0x299960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x299960u;
label_299960:
    // 0x299960: 0x8e2407ec  lw          $a0, 0x7EC($s1)
    ctx->pc = 0x299960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2028)));
label_299964:
    // 0x299964: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x299964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_299968:
    // 0x299968: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x299968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_29996c:
    // 0x29996c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_299970:
    if (ctx->pc == 0x299970u) {
        ctx->pc = 0x299974u;
        goto label_299974;
    }
    ctx->pc = 0x29996Cu;
    {
        const bool branch_taken_0x29996c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29996c) {
            ctx->pc = 0x299998u;
            goto label_299998;
        }
    }
    ctx->pc = 0x299974u;
label_299974:
    // 0x299974: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x299974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_299978:
    // 0x299978: 0xc62c07e8  lwc1        $f12, 0x7E8($s1)
    ctx->pc = 0x299978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_29997c:
    // 0x29997c: 0xc061b84  jal         func_186E10
label_299980:
    if (ctx->pc == 0x299980u) {
        ctx->pc = 0x299980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29997Cu;
        // 0x299980: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299984u;
        goto label_299984;
    }
    ctx->pc = 0x29997Cu;
    SET_GPR_U32(ctx, 31, 0x299984u);
    ctx->pc = 0x299980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29997Cu;
    // 0x299980: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186E10u, 0x29997Cu, 0x299984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299984u;
label_299984:
    // 0x299984: 0x8e2407ec  lw          $a0, 0x7EC($s1)
    ctx->pc = 0x299984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2028)));
label_299988:
    // 0x299988: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x299988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
label_29998c:
    // 0x29998c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x29998cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_299990:
    // 0x299990: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x299990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_299994:
    // 0x299994: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x299994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
label_299998:
    // 0x299998: 0x962307f0  lhu         $v1, 0x7F0($s1)
    ctx->pc = 0x299998u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2032)));
label_29999c:
    // 0x29999c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2999a0:
    if (ctx->pc == 0x2999A0u) {
        ctx->pc = 0x2999A4u;
        goto label_2999a4;
    }
    ctx->pc = 0x29999Cu;
    {
        const bool branch_taken_0x29999c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29999c) {
            ctx->pc = 0x2999B8u;
            goto label_2999b8;
        }
    }
    ctx->pc = 0x2999A4u;
label_2999a4:
    // 0x2999a4: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2999a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2999a8:
    // 0x2999a8: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2999a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2999ac:
    // 0x2999ac: 0xc061bd8  jal         func_186F60
label_2999b0:
    if (ctx->pc == 0x2999B0u) {
        ctx->pc = 0x2999B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2999ACu;
        // 0x2999b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2999B4u;
        goto label_2999b4;
    }
    ctx->pc = 0x2999ACu;
    SET_GPR_U32(ctx, 31, 0x2999B4u);
    ctx->pc = 0x2999B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2999ACu;
    // 0x2999b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F60u, 0x2999ACu, 0x2999B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2999B4u;
label_2999b4:
    // 0x2999b4: 0xa62007f0  sh          $zero, 0x7F0($s1)
    ctx->pc = 0x2999b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 0));
label_2999b8:
    // 0x2999b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2999b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2999bc:
    // 0x2999bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2999bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2999c0:
    // 0x2999c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2999c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2999c4:
    // 0x2999c4: 0x3e00008  jr          $ra
label_2999c8:
    if (ctx->pc == 0x2999C8u) {
        ctx->pc = 0x2999C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2999C4u;
        // 0x2999c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2999CCu;
        goto label_fallthrough_0x2999c4;
    }
    ctx->pc = 0x2999C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2999C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2999C4u;
        // 0x2999c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2999C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2999c4:
    ctx->pc = 0x2999CCu;
}
