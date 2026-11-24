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

// Function: sub_00391790
// Address: 0x391790 - 0x3918e4
void sub_00391790_0x391790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391790_0x391790");
#endif

    switch (ctx->pc) {
        case 0x391790u: goto label_391790;
        case 0x391794u: goto label_391794;
        case 0x391798u: goto label_391798;
        case 0x39179cu: goto label_39179c;
        case 0x3917a0u: goto label_3917a0;
        case 0x3917a4u: goto label_3917a4;
        case 0x3917a8u: goto label_3917a8;
        case 0x3917acu: goto label_3917ac;
        case 0x3917b0u: goto label_3917b0;
        case 0x3917b4u: goto label_3917b4;
        case 0x3917b8u: goto label_3917b8;
        case 0x3917bcu: goto label_3917bc;
        case 0x3917c0u: goto label_3917c0;
        case 0x3917c4u: goto label_3917c4;
        case 0x3917c8u: goto label_3917c8;
        case 0x3917ccu: goto label_3917cc;
        case 0x3917d0u: goto label_3917d0;
        case 0x3917d4u: goto label_3917d4;
        case 0x3917d8u: goto label_3917d8;
        case 0x3917dcu: goto label_3917dc;
        case 0x3917e0u: goto label_3917e0;
        case 0x3917e4u: goto label_3917e4;
        case 0x3917e8u: goto label_3917e8;
        case 0x3917ecu: goto label_3917ec;
        case 0x3917f0u: goto label_3917f0;
        case 0x3917f4u: goto label_3917f4;
        case 0x3917f8u: goto label_3917f8;
        case 0x3917fcu: goto label_3917fc;
        case 0x391800u: goto label_391800;
        case 0x391804u: goto label_391804;
        case 0x391808u: goto label_391808;
        case 0x39180cu: goto label_39180c;
        case 0x391810u: goto label_391810;
        case 0x391814u: goto label_391814;
        case 0x391818u: goto label_391818;
        case 0x39181cu: goto label_39181c;
        case 0x391820u: goto label_391820;
        case 0x391824u: goto label_391824;
        case 0x391828u: goto label_391828;
        case 0x39182cu: goto label_39182c;
        case 0x391830u: goto label_391830;
        case 0x391834u: goto label_391834;
        case 0x391838u: goto label_391838;
        case 0x39183cu: goto label_39183c;
        case 0x391840u: goto label_391840;
        case 0x391844u: goto label_391844;
        case 0x391848u: goto label_391848;
        case 0x39184cu: goto label_39184c;
        case 0x391850u: goto label_391850;
        case 0x391854u: goto label_391854;
        case 0x391858u: goto label_391858;
        case 0x39185cu: goto label_39185c;
        case 0x391860u: goto label_391860;
        case 0x391864u: goto label_391864;
        case 0x391868u: goto label_391868;
        case 0x39186cu: goto label_39186c;
        case 0x391870u: goto label_391870;
        case 0x391874u: goto label_391874;
        case 0x391878u: goto label_391878;
        case 0x39187cu: goto label_39187c;
        case 0x391880u: goto label_391880;
        case 0x391884u: goto label_391884;
        case 0x391888u: goto label_391888;
        case 0x39188cu: goto label_39188c;
        case 0x391890u: goto label_391890;
        case 0x391894u: goto label_391894;
        case 0x391898u: goto label_391898;
        case 0x39189cu: goto label_39189c;
        case 0x3918a0u: goto label_3918a0;
        case 0x3918a4u: goto label_3918a4;
        case 0x3918a8u: goto label_3918a8;
        case 0x3918acu: goto label_3918ac;
        case 0x3918b0u: goto label_3918b0;
        case 0x3918b4u: goto label_3918b4;
        case 0x3918b8u: goto label_3918b8;
        case 0x3918bcu: goto label_3918bc;
        case 0x3918c0u: goto label_3918c0;
        case 0x3918c4u: goto label_3918c4;
        case 0x3918c8u: goto label_3918c8;
        case 0x3918ccu: goto label_3918cc;
        case 0x3918d0u: goto label_3918d0;
        case 0x3918d4u: goto label_3918d4;
        case 0x3918d8u: goto label_3918d8;
        case 0x3918dcu: goto label_3918dc;
        case 0x3918e0u: goto label_3918e0;
        default: break;
    }

    ctx->pc = 0x391790u;

label_391790:
    // 0x391790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x391790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_391794:
    // 0x391794: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x391794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391798:
    // 0x391798: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x391798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39179c:
    // 0x39179c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39179cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3917a0:
    // 0x3917a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3917a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3917a4:
    // 0x3917a4: 0x90830118  lbu         $v1, 0x118($a0)
    ctx->pc = 0x3917a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 280)));
label_3917a8:
    // 0x3917a8: 0x1067003f  beq         $v1, $a3, . + 4 + (0x3F << 2)
label_3917ac:
    if (ctx->pc == 0x3917ACu) {
        ctx->pc = 0x3917ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917A8u;
        // 0x3917ac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3917B0u;
        goto label_3917b0;
    }
    ctx->pc = 0x3917A8u;
    {
        const bool branch_taken_0x3917a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x3917ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917A8u;
        // 0x3917ac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3917a8) {
            ctx->pc = 0x3918A8u;
            goto label_3918a8;
        }
    }
    ctx->pc = 0x3917B0u;
label_3917b0:
    // 0x3917b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3917b4:
    if (ctx->pc == 0x3917B4u) {
        ctx->pc = 0x3917B8u;
        goto label_3917b8;
    }
    ctx->pc = 0x3917B0u;
    {
        const bool branch_taken_0x3917b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3917b0) {
            ctx->pc = 0x3917C0u;
            goto label_3917c0;
        }
    }
    ctx->pc = 0x3917B8u;
label_3917b8:
    // 0x3917b8: 0x10000045  b           . + 4 + (0x45 << 2)
label_3917bc:
    if (ctx->pc == 0x3917BCu) {
        ctx->pc = 0x3917C0u;
        goto label_3917c0;
    }
    ctx->pc = 0x3917B8u;
    {
        const bool branch_taken_0x3917b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3917b8) {
            ctx->pc = 0x3918D0u;
            goto label_3918d0;
        }
    }
    ctx->pc = 0x3917C0u;
label_3917c0:
    // 0x3917c0: 0x96242acc  lhu         $a0, 0x2ACC($s1)
    ctx->pc = 0x3917c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10956)));
label_3917c4:
    // 0x3917c4: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x3917c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
label_3917c8:
    // 0x3917c8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3917c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_3917cc:
    // 0x3917cc: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x3917ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
label_3917d0:
    // 0x3917d0: 0x3086001f  andi        $a2, $a0, 0x1F
    ctx->pc = 0x3917d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_3917d4:
    // 0x3917d4: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x3917d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
label_3917d8:
    // 0x3917d8: 0xc52806  srlv        $a1, $a1, $a2
    ctx->pc = 0x3917d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_3917dc:
    // 0x3917dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3917dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3917e0:
    // 0x3917e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3917e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3917e4:
    // 0x3917e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3917e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3917e8:
    // 0x3917e8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3917e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3917ec:
    // 0x3917ec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_3917f0:
    if (ctx->pc == 0x3917F0u) {
        ctx->pc = 0x3917F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917ECu;
        // 0x3917f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3917F4u;
        goto label_3917f4;
    }
    ctx->pc = 0x3917ECu;
    {
        const bool branch_taken_0x3917ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3917F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917ECu;
        // 0x3917f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3917ec) {
            ctx->pc = 0x3917F8u;
            goto label_3917f8;
        }
    }
    ctx->pc = 0x3917F4u;
label_3917f4:
    // 0x3917f4: 0x30f0ffff  andi        $s0, $a3, 0xFFFF
    ctx->pc = 0x3917f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_3917f8:
    // 0x3917f8: 0x96242ad4  lhu         $a0, 0x2AD4($s1)
    ctx->pc = 0x3917f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10964)));
label_3917fc:
    // 0x3917fc: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x3917fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_391800:
    // 0x391800: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
label_391804:
    if (ctx->pc == 0x391804u) {
        ctx->pc = 0x391808u;
        goto label_391808;
    }
    ctx->pc = 0x391800u;
    {
        const bool branch_taken_0x391800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x391800) {
            ctx->pc = 0x3918A0u;
            goto label_3918a0;
        }
    }
    ctx->pc = 0x391808u;
label_391808:
    // 0x391808: 0x96222ad0  lhu         $v0, 0x2AD0($s1)
    ctx->pc = 0x391808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10960)));
label_39180c:
    // 0x39180c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39180cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391810:
    // 0x391810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x391810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_391814:
    // 0x391814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x391814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391818:
    // 0x391818: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x391818u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_39181c:
    // 0x39181c: 0xc0d0590  jal         func_341640
label_391820:
    if (ctx->pc == 0x391820u) {
        ctx->pc = 0x391820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39181Cu;
        // 0x391820: 0xa6222ad0  sh          $v0, 0x2AD0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10960), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391824u;
        goto label_391824;
    }
    ctx->pc = 0x39181Cu;
    SET_GPR_U32(ctx, 31, 0x391824u);
    ctx->pc = 0x391820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39181Cu;
    // 0x391820: 0xa6222ad0  sh          $v0, 0x2AD0($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 10960), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x39181Cu, 0x391824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391824u;
label_391824:
    // 0x391824: 0x96222ad0  lhu         $v0, 0x2AD0($s1)
    ctx->pc = 0x391824u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10960)));
label_391828:
    // 0x391828: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_39182c:
    if (ctx->pc == 0x39182Cu) {
        ctx->pc = 0x391830u;
        goto label_391830;
    }
    ctx->pc = 0x391828u;
    {
        const bool branch_taken_0x391828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x391828) {
            ctx->pc = 0x391868u;
            goto label_391868;
        }
    }
    ctx->pc = 0x391830u;
label_391830:
    // 0x391830: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x391830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_391834:
    // 0x391834: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x391834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_391838:
    // 0x391838: 0xc0d165c  jal         func_345970
label_39183c:
    if (ctx->pc == 0x39183Cu) {
        ctx->pc = 0x39183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391838u;
        // 0x39183c: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391840u;
        goto label_391840;
    }
    ctx->pc = 0x391838u;
    SET_GPR_U32(ctx, 31, 0x391840u);
    ctx->pc = 0x39183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391838u;
    // 0x39183c: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345970u, 0x391838u, 0x391840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391840u;
label_391840:
    // 0x391840: 0x8e2400ec  lw          $a0, 0xEC($s1)
    ctx->pc = 0x391840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_391844:
    // 0x391844: 0xc0e454c  jal         func_391530
label_391848:
    if (ctx->pc == 0x391848u) {
        ctx->pc = 0x391848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391844u;
        // 0x391848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39184Cu;
        goto label_39184c;
    }
    ctx->pc = 0x391844u;
    SET_GPR_U32(ctx, 31, 0x39184Cu);
    ctx->pc = 0x391848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391844u;
    // 0x391848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391530u, 0x391844u, 0x39184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39184Cu;
label_39184c:
    // 0x39184c: 0x8e2300ec  lw          $v1, 0xEC($s1)
    ctx->pc = 0x39184cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_391850:
    // 0x391850: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x391850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391854:
    // 0x391854: 0xc0e454c  jal         func_391530
label_391858:
    if (ctx->pc == 0x391858u) {
        ctx->pc = 0x391858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391854u;
        // 0x391858: 0x246400f0  addiu       $a0, $v1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39185Cu;
        goto label_39185c;
    }
    ctx->pc = 0x391854u;
    SET_GPR_U32(ctx, 31, 0x39185Cu);
    ctx->pc = 0x391858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391854u;
    // 0x391858: 0x246400f0  addiu       $a0, $v1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391530u, 0x391854u, 0x39185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39185Cu;
label_39185c:
    // 0x39185c: 0x1000000c  b           . + 4 + (0xC << 2)
label_391860:
    if (ctx->pc == 0x391860u) {
        ctx->pc = 0x391864u;
        goto label_391864;
    }
    ctx->pc = 0x39185Cu;
    {
        const bool branch_taken_0x39185c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39185c) {
            ctx->pc = 0x391890u;
            goto label_391890;
        }
    }
    ctx->pc = 0x391864u;
label_391864:
    // 0x391864: 0x0  nop
    ctx->pc = 0x391864u;
    // NOP
label_391868:
    // 0x391868: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x391868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_39186c:
    // 0x39186c: 0xc0d166c  jal         func_3459B0
label_391870:
    if (ctx->pc == 0x391870u) {
        ctx->pc = 0x391870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39186Cu;
        // 0x391870: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391874u;
        goto label_391874;
    }
    ctx->pc = 0x39186Cu;
    SET_GPR_U32(ctx, 31, 0x391874u);
    ctx->pc = 0x391870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39186Cu;
    // 0x391870: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3459B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3459B0u, 0x39186Cu, 0x391874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391874u;
label_391874:
    // 0x391874: 0x8e2400ec  lw          $a0, 0xEC($s1)
    ctx->pc = 0x391874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_391878:
    // 0x391878: 0xc0e454c  jal         func_391530
label_39187c:
    if (ctx->pc == 0x39187Cu) {
        ctx->pc = 0x39187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391878u;
        // 0x39187c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391880u;
        goto label_391880;
    }
    ctx->pc = 0x391878u;
    SET_GPR_U32(ctx, 31, 0x391880u);
    ctx->pc = 0x39187Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391878u;
    // 0x39187c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391530u, 0x391878u, 0x391880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391880u;
label_391880:
    // 0x391880: 0x8e2300ec  lw          $v1, 0xEC($s1)
    ctx->pc = 0x391880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_391884:
    // 0x391884: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x391884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391888:
    // 0x391888: 0xc0e454c  jal         func_391530
label_39188c:
    if (ctx->pc == 0x39188Cu) {
        ctx->pc = 0x39188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391888u;
        // 0x39188c: 0x246400f0  addiu       $a0, $v1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391890u;
        goto label_391890;
    }
    ctx->pc = 0x391888u;
    SET_GPR_U32(ctx, 31, 0x391890u);
    ctx->pc = 0x39188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391888u;
    // 0x39188c: 0x246400f0  addiu       $a0, $v1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391530u, 0x391888u, 0x391890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391890u;
label_391890:
    // 0x391890: 0x92230118  lbu         $v1, 0x118($s1)
    ctx->pc = 0x391890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 280)));
label_391894:
    // 0x391894: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x391894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_391898:
    // 0x391898: 0xa2230118  sb          $v1, 0x118($s1)
    ctx->pc = 0x391898u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 280), (uint8_t)GPR_U32(ctx, 3));
label_39189c:
    // 0x39189c: 0x0  nop
    ctx->pc = 0x39189cu;
    // NOP
label_3918a0:
    // 0x3918a0: 0x1000000b  b           . + 4 + (0xB << 2)
label_3918a4:
    if (ctx->pc == 0x3918A4u) {
        ctx->pc = 0x3918A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918A0u;
        // 0x3918a4: 0xa6302ad4  sh          $s0, 0x2AD4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10964), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3918A8u;
        goto label_3918a8;
    }
    ctx->pc = 0x3918A0u;
    {
        const bool branch_taken_0x3918a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3918A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918A0u;
        // 0x3918a4: 0xa6302ad4  sh          $s0, 0x2AD4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10964), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3918a0) {
            ctx->pc = 0x3918D0u;
            goto label_3918d0;
        }
    }
    ctx->pc = 0x3918A8u;
label_3918a8:
    // 0x3918a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3918a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3918ac:
    // 0x3918ac: 0xa2222ac1  sb          $v0, 0x2AC1($s1)
    ctx->pc = 0x3918acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10945), (uint8_t)GPR_U32(ctx, 2));
label_3918b0:
    // 0x3918b0: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x3918b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3918b4:
    // 0x3918b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3918b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3918b8:
    // 0x3918b8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3918b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3918bc:
    // 0x3918bc: 0x320f809  jalr        $t9
label_3918c0:
    if (ctx->pc == 0x3918C0u) {
        ctx->pc = 0x3918C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918BCu;
        // 0x3918c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3918C4u;
        goto label_3918c4;
    }
    ctx->pc = 0x3918BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3918C4u);
        ctx->pc = 0x3918C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918BCu;
        // 0x3918c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3918BCu, 0x3918C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3918C4u;
label_3918c4:
    // 0x3918c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3918c8:
    if (ctx->pc == 0x3918C8u) {
        ctx->pc = 0x3918CCu;
        goto label_3918cc;
    }
    ctx->pc = 0x3918C4u;
    {
        const bool branch_taken_0x3918c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3918c4) {
            ctx->pc = 0x3918D0u;
            goto label_3918d0;
        }
    }
    ctx->pc = 0x3918CCu;
label_3918cc:
    // 0x3918cc: 0xa2200118  sb          $zero, 0x118($s1)
    ctx->pc = 0x3918ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 280), (uint8_t)GPR_U32(ctx, 0));
label_3918d0:
    // 0x3918d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3918d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3918d4:
    // 0x3918d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3918d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3918d8:
    // 0x3918d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3918d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3918dc:
    // 0x3918dc: 0x3e00008  jr          $ra
label_3918e0:
    if (ctx->pc == 0x3918E0u) {
        ctx->pc = 0x3918E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918DCu;
        // 0x3918e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3918E4u;
        goto label_fallthrough_0x3918dc;
    }
    ctx->pc = 0x3918DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3918E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918DCu;
        // 0x3918e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3918DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3918dc:
    ctx->pc = 0x3918E4u;
}
