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

// Function: sub_002DD510
// Address: 0x2dd510 - 0x2dd7ec
void sub_002DD510_0x2dd510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD510_0x2dd510");
#endif

    switch (ctx->pc) {
        case 0x2dd510u: goto label_2dd510;
        case 0x2dd514u: goto label_2dd514;
        case 0x2dd518u: goto label_2dd518;
        case 0x2dd51cu: goto label_2dd51c;
        case 0x2dd520u: goto label_2dd520;
        case 0x2dd524u: goto label_2dd524;
        case 0x2dd528u: goto label_2dd528;
        case 0x2dd52cu: goto label_2dd52c;
        case 0x2dd530u: goto label_2dd530;
        case 0x2dd534u: goto label_2dd534;
        case 0x2dd538u: goto label_2dd538;
        case 0x2dd53cu: goto label_2dd53c;
        case 0x2dd540u: goto label_2dd540;
        case 0x2dd544u: goto label_2dd544;
        case 0x2dd548u: goto label_2dd548;
        case 0x2dd54cu: goto label_2dd54c;
        case 0x2dd550u: goto label_2dd550;
        case 0x2dd554u: goto label_2dd554;
        case 0x2dd558u: goto label_2dd558;
        case 0x2dd55cu: goto label_2dd55c;
        case 0x2dd560u: goto label_2dd560;
        case 0x2dd564u: goto label_2dd564;
        case 0x2dd568u: goto label_2dd568;
        case 0x2dd56cu: goto label_2dd56c;
        case 0x2dd570u: goto label_2dd570;
        case 0x2dd574u: goto label_2dd574;
        case 0x2dd578u: goto label_2dd578;
        case 0x2dd57cu: goto label_2dd57c;
        case 0x2dd580u: goto label_2dd580;
        case 0x2dd584u: goto label_2dd584;
        case 0x2dd588u: goto label_2dd588;
        case 0x2dd58cu: goto label_2dd58c;
        case 0x2dd590u: goto label_2dd590;
        case 0x2dd594u: goto label_2dd594;
        case 0x2dd598u: goto label_2dd598;
        case 0x2dd59cu: goto label_2dd59c;
        case 0x2dd5a0u: goto label_2dd5a0;
        case 0x2dd5a4u: goto label_2dd5a4;
        case 0x2dd5a8u: goto label_2dd5a8;
        case 0x2dd5acu: goto label_2dd5ac;
        case 0x2dd5b0u: goto label_2dd5b0;
        case 0x2dd5b4u: goto label_2dd5b4;
        case 0x2dd5b8u: goto label_2dd5b8;
        case 0x2dd5bcu: goto label_2dd5bc;
        case 0x2dd5c0u: goto label_2dd5c0;
        case 0x2dd5c4u: goto label_2dd5c4;
        case 0x2dd5c8u: goto label_2dd5c8;
        case 0x2dd5ccu: goto label_2dd5cc;
        case 0x2dd5d0u: goto label_2dd5d0;
        case 0x2dd5d4u: goto label_2dd5d4;
        case 0x2dd5d8u: goto label_2dd5d8;
        case 0x2dd5dcu: goto label_2dd5dc;
        case 0x2dd5e0u: goto label_2dd5e0;
        case 0x2dd5e4u: goto label_2dd5e4;
        case 0x2dd5e8u: goto label_2dd5e8;
        case 0x2dd5ecu: goto label_2dd5ec;
        case 0x2dd5f0u: goto label_2dd5f0;
        case 0x2dd5f4u: goto label_2dd5f4;
        case 0x2dd5f8u: goto label_2dd5f8;
        case 0x2dd5fcu: goto label_2dd5fc;
        case 0x2dd600u: goto label_2dd600;
        case 0x2dd604u: goto label_2dd604;
        case 0x2dd608u: goto label_2dd608;
        case 0x2dd60cu: goto label_2dd60c;
        case 0x2dd610u: goto label_2dd610;
        case 0x2dd614u: goto label_2dd614;
        case 0x2dd618u: goto label_2dd618;
        case 0x2dd61cu: goto label_2dd61c;
        case 0x2dd620u: goto label_2dd620;
        case 0x2dd624u: goto label_2dd624;
        case 0x2dd628u: goto label_2dd628;
        case 0x2dd62cu: goto label_2dd62c;
        case 0x2dd630u: goto label_2dd630;
        case 0x2dd634u: goto label_2dd634;
        case 0x2dd638u: goto label_2dd638;
        case 0x2dd63cu: goto label_2dd63c;
        case 0x2dd640u: goto label_2dd640;
        case 0x2dd644u: goto label_2dd644;
        case 0x2dd648u: goto label_2dd648;
        case 0x2dd64cu: goto label_2dd64c;
        case 0x2dd650u: goto label_2dd650;
        case 0x2dd654u: goto label_2dd654;
        case 0x2dd658u: goto label_2dd658;
        case 0x2dd65cu: goto label_2dd65c;
        case 0x2dd660u: goto label_2dd660;
        case 0x2dd664u: goto label_2dd664;
        case 0x2dd668u: goto label_2dd668;
        case 0x2dd66cu: goto label_2dd66c;
        case 0x2dd670u: goto label_2dd670;
        case 0x2dd674u: goto label_2dd674;
        case 0x2dd678u: goto label_2dd678;
        case 0x2dd67cu: goto label_2dd67c;
        case 0x2dd680u: goto label_2dd680;
        case 0x2dd684u: goto label_2dd684;
        case 0x2dd688u: goto label_2dd688;
        case 0x2dd68cu: goto label_2dd68c;
        case 0x2dd690u: goto label_2dd690;
        case 0x2dd694u: goto label_2dd694;
        case 0x2dd698u: goto label_2dd698;
        case 0x2dd69cu: goto label_2dd69c;
        case 0x2dd6a0u: goto label_2dd6a0;
        case 0x2dd6a4u: goto label_2dd6a4;
        case 0x2dd6a8u: goto label_2dd6a8;
        case 0x2dd6acu: goto label_2dd6ac;
        case 0x2dd6b0u: goto label_2dd6b0;
        case 0x2dd6b4u: goto label_2dd6b4;
        case 0x2dd6b8u: goto label_2dd6b8;
        case 0x2dd6bcu: goto label_2dd6bc;
        case 0x2dd6c0u: goto label_2dd6c0;
        case 0x2dd6c4u: goto label_2dd6c4;
        case 0x2dd6c8u: goto label_2dd6c8;
        case 0x2dd6ccu: goto label_2dd6cc;
        case 0x2dd6d0u: goto label_2dd6d0;
        case 0x2dd6d4u: goto label_2dd6d4;
        case 0x2dd6d8u: goto label_2dd6d8;
        case 0x2dd6dcu: goto label_2dd6dc;
        case 0x2dd6e0u: goto label_2dd6e0;
        case 0x2dd6e4u: goto label_2dd6e4;
        case 0x2dd6e8u: goto label_2dd6e8;
        case 0x2dd6ecu: goto label_2dd6ec;
        case 0x2dd6f0u: goto label_2dd6f0;
        case 0x2dd6f4u: goto label_2dd6f4;
        case 0x2dd6f8u: goto label_2dd6f8;
        case 0x2dd6fcu: goto label_2dd6fc;
        case 0x2dd700u: goto label_2dd700;
        case 0x2dd704u: goto label_2dd704;
        case 0x2dd708u: goto label_2dd708;
        case 0x2dd70cu: goto label_2dd70c;
        case 0x2dd710u: goto label_2dd710;
        case 0x2dd714u: goto label_2dd714;
        case 0x2dd718u: goto label_2dd718;
        case 0x2dd71cu: goto label_2dd71c;
        case 0x2dd720u: goto label_2dd720;
        case 0x2dd724u: goto label_2dd724;
        case 0x2dd728u: goto label_2dd728;
        case 0x2dd72cu: goto label_2dd72c;
        case 0x2dd730u: goto label_2dd730;
        case 0x2dd734u: goto label_2dd734;
        case 0x2dd738u: goto label_2dd738;
        case 0x2dd73cu: goto label_2dd73c;
        case 0x2dd740u: goto label_2dd740;
        case 0x2dd744u: goto label_2dd744;
        case 0x2dd748u: goto label_2dd748;
        case 0x2dd74cu: goto label_2dd74c;
        case 0x2dd750u: goto label_2dd750;
        case 0x2dd754u: goto label_2dd754;
        case 0x2dd758u: goto label_2dd758;
        case 0x2dd75cu: goto label_2dd75c;
        case 0x2dd760u: goto label_2dd760;
        case 0x2dd764u: goto label_2dd764;
        case 0x2dd768u: goto label_2dd768;
        case 0x2dd76cu: goto label_2dd76c;
        case 0x2dd770u: goto label_2dd770;
        case 0x2dd774u: goto label_2dd774;
        case 0x2dd778u: goto label_2dd778;
        case 0x2dd77cu: goto label_2dd77c;
        case 0x2dd780u: goto label_2dd780;
        case 0x2dd784u: goto label_2dd784;
        case 0x2dd788u: goto label_2dd788;
        case 0x2dd78cu: goto label_2dd78c;
        case 0x2dd790u: goto label_2dd790;
        case 0x2dd794u: goto label_2dd794;
        case 0x2dd798u: goto label_2dd798;
        case 0x2dd79cu: goto label_2dd79c;
        case 0x2dd7a0u: goto label_2dd7a0;
        case 0x2dd7a4u: goto label_2dd7a4;
        case 0x2dd7a8u: goto label_2dd7a8;
        case 0x2dd7acu: goto label_2dd7ac;
        case 0x2dd7b0u: goto label_2dd7b0;
        case 0x2dd7b4u: goto label_2dd7b4;
        case 0x2dd7b8u: goto label_2dd7b8;
        case 0x2dd7bcu: goto label_2dd7bc;
        case 0x2dd7c0u: goto label_2dd7c0;
        case 0x2dd7c4u: goto label_2dd7c4;
        case 0x2dd7c8u: goto label_2dd7c8;
        case 0x2dd7ccu: goto label_2dd7cc;
        case 0x2dd7d0u: goto label_2dd7d0;
        case 0x2dd7d4u: goto label_2dd7d4;
        case 0x2dd7d8u: goto label_2dd7d8;
        case 0x2dd7dcu: goto label_2dd7dc;
        case 0x2dd7e0u: goto label_2dd7e0;
        case 0x2dd7e4u: goto label_2dd7e4;
        case 0x2dd7e8u: goto label_2dd7e8;
        default: break;
    }

    ctx->pc = 0x2dd510u;

label_2dd510:
    // 0x2dd510: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2dd510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2dd514:
    // 0x2dd514: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2dd514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2dd518:
    // 0x2dd518: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2dd518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2dd51c:
    // 0x2dd51c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2dd51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2dd520:
    // 0x2dd520: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2dd520u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2dd524:
    // 0x2dd524: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2dd524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2dd528:
    // 0x2dd528: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2dd528u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2dd52c:
    // 0x2dd52c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dd52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2dd530:
    // 0x2dd530: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2dd530u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dd534:
    // 0x2dd534: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dd534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2dd538:
    // 0x2dd538: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2dd538u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2dd53c:
    // 0x2dd53c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dd53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2dd540:
    // 0x2dd540: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dd540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dd544:
    // 0x2dd544: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dd548:
    // 0x2dd548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dd54c:
    // 0x2dd54c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2dd54cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2dd550:
    // 0x2dd550: 0xc09d4d4  jal         func_275350
label_2dd554:
    if (ctx->pc == 0x2DD554u) {
        ctx->pc = 0x2DD554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD550u;
        // 0x2dd554: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD558u;
        goto label_2dd558;
    }
    ctx->pc = 0x2DD550u;
    SET_GPR_U32(ctx, 31, 0x2DD558u);
    ctx->pc = 0x2DD554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD550u;
    // 0x2dd554: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x2DD550u, 0x2DD558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD558u;
label_2dd558:
    // 0x2dd558: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_2dd55c:
    if (ctx->pc == 0x2DD55Cu) {
        ctx->pc = 0x2DD55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD558u;
        // 0x2dd55c: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD560u;
        goto label_2dd560;
    }
    ctx->pc = 0x2DD558u;
    {
        const bool branch_taken_0x2dd558 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD558u;
        // 0x2dd55c: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd558) {
            ctx->pc = 0x2DD570u;
            goto label_2dd570;
        }
    }
    ctx->pc = 0x2DD560u;
label_2dd560:
    // 0x2dd560: 0xc09d4d8  jal         func_275360
label_2dd564:
    if (ctx->pc == 0x2DD564u) {
        ctx->pc = 0x2DD564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD560u;
        // 0x2dd564: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD568u;
        goto label_2dd568;
    }
    ctx->pc = 0x2DD560u;
    SET_GPR_U32(ctx, 31, 0x2DD568u);
    ctx->pc = 0x2DD564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD560u;
    // 0x2dd564: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DD560u, 0x2DD568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD568u;
label_2dd568:
    // 0x2dd568: 0x10000095  b           . + 4 + (0x95 << 2)
label_2dd56c:
    if (ctx->pc == 0x2DD56Cu) {
        ctx->pc = 0x2DD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD568u;
        // 0x2dd56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD570u;
        goto label_2dd570;
    }
    ctx->pc = 0x2DD568u;
    {
        const bool branch_taken_0x2dd568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD568u;
        // 0x2dd56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd568) {
            ctx->pc = 0x2DD7C0u;
            goto label_2dd7c0;
        }
    }
    ctx->pc = 0x2DD570u;
label_2dd570:
    // 0x2dd570: 0xc0741a4  jal         func_1D0690
label_2dd574:
    if (ctx->pc == 0x2DD574u) {
        ctx->pc = 0x2DD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD570u;
        // 0x2dd574: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD578u;
        goto label_2dd578;
    }
    ctx->pc = 0x2DD570u;
    SET_GPR_U32(ctx, 31, 0x2DD578u);
    ctx->pc = 0x2DD574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD570u;
    // 0x2dd574: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x2DD570u, 0x2DD578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD578u;
label_2dd578:
    // 0x2dd578: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2dd578u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd57c:
    // 0x2dd57c: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_2dd580:
    if (ctx->pc == 0x2DD580u) {
        ctx->pc = 0x2DD580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD57Cu;
        // 0x2dd580: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD584u;
        goto label_2dd584;
    }
    ctx->pc = 0x2DD57Cu;
    {
        const bool branch_taken_0x2dd57c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD57Cu;
        // 0x2dd580: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd57c) {
            ctx->pc = 0x2DD5A8u;
            goto label_2dd5a8;
        }
    }
    ctx->pc = 0x2DD584u;
label_2dd584:
    // 0x2dd584: 0xc096b00  jal         func_25AC00
label_2dd588:
    if (ctx->pc == 0x2DD588u) {
        ctx->pc = 0x2DD58Cu;
        goto label_2dd58c;
    }
    ctx->pc = 0x2DD584u;
    SET_GPR_U32(ctx, 31, 0x2DD58Cu);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x2DD584u, 0x2DD58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD58Cu;
label_2dd58c:
    // 0x2dd58c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2dd58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_2dd590:
    // 0x2dd590: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2dd590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_2dd594:
    // 0x2dd594: 0x24637570  addiu       $v1, $v1, 0x7570
    ctx->pc = 0x2dd594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30064));
label_2dd598:
    // 0x2dd598: 0x244279e0  addiu       $v0, $v0, 0x79E0
    ctx->pc = 0x2dd598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31200));
label_2dd59c:
    // 0x2dd59c: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x2dd59cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
label_2dd5a0:
    // 0x2dd5a0: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x2dd5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
label_2dd5a4:
    // 0x2dd5a4: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2dd5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_2dd5a8:
    // 0x2dd5a8: 0x12600081  beqz        $s3, . + 4 + (0x81 << 2)
label_2dd5ac:
    if (ctx->pc == 0x2DD5ACu) {
        ctx->pc = 0x2DD5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5A8u;
        // 0x2dd5ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD5B0u;
        goto label_2dd5b0;
    }
    ctx->pc = 0x2DD5A8u;
    {
        const bool branch_taken_0x2dd5a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5A8u;
        // 0x2dd5ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd5a8) {
            ctx->pc = 0x2DD7B0u;
            goto label_2dd7b0;
        }
    }
    ctx->pc = 0x2DD5B0u;
label_2dd5b0:
    // 0x2dd5b0: 0xc09d4fc  jal         func_2753F0
label_2dd5b4:
    if (ctx->pc == 0x2DD5B4u) {
        ctx->pc = 0x2DD5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5B0u;
        // 0x2dd5b4: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD5B8u;
        goto label_2dd5b8;
    }
    ctx->pc = 0x2DD5B0u;
    SET_GPR_U32(ctx, 31, 0x2DD5B8u);
    ctx->pc = 0x2DD5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD5B0u;
    // 0x2dd5b4: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x2DD5B0u, 0x2DD5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD5B8u;
label_2dd5b8:
    // 0x2dd5b8: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x2dd5b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_2dd5bc:
    // 0x2dd5bc: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dd5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dd5c0:
    // 0x2dd5c0: 0xc09d524  jal         func_275490
label_2dd5c4:
    if (ctx->pc == 0x2DD5C4u) {
        ctx->pc = 0x2DD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5C0u;
        // 0x2dd5c4: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD5C8u;
        goto label_2dd5c8;
    }
    ctx->pc = 0x2DD5C0u;
    SET_GPR_U32(ctx, 31, 0x2DD5C8u);
    ctx->pc = 0x2DD5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD5C0u;
    // 0x2dd5c4: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2DD5C0u, 0x2DD5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD5C8u;
label_2dd5c8:
    // 0x2dd5c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dd5c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd5cc:
    // 0x2dd5cc: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
label_2dd5d0:
    if (ctx->pc == 0x2DD5D0u) {
        ctx->pc = 0x2DD5D4u;
        goto label_2dd5d4;
    }
    ctx->pc = 0x2DD5CCu;
    {
        const bool branch_taken_0x2dd5cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd5cc) {
            ctx->pc = 0x2DD608u;
            goto label_2dd608;
        }
    }
    ctx->pc = 0x2DD5D4u;
label_2dd5d4:
    // 0x2dd5d4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_2dd5d8:
    if (ctx->pc == 0x2DD5D8u) {
        ctx->pc = 0x2DD5DCu;
        goto label_2dd5dc;
    }
    ctx->pc = 0x2DD5D4u;
    {
        const bool branch_taken_0x2dd5d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd5d4) {
            ctx->pc = 0x2DD5F0u;
            goto label_2dd5f0;
        }
    }
    ctx->pc = 0x2DD5DCu;
label_2dd5dc:
    // 0x2dd5dc: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x2dd5dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_2dd5e0:
    // 0x2dd5e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dd5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dd5e4:
    // 0x2dd5e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2dd5e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2dd5e8:
    // 0x2dd5e8: 0x320f809  jalr        $t9
label_2dd5ec:
    if (ctx->pc == 0x2DD5ECu) {
        ctx->pc = 0x2DD5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5E8u;
        // 0x2dd5ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD5F0u;
        goto label_2dd5f0;
    }
    ctx->pc = 0x2DD5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DD5F0u);
        ctx->pc = 0x2DD5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5E8u;
        // 0x2dd5ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD5E8u, 0x2DD5F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DD5F0u;
label_2dd5f0:
    // 0x2dd5f0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dd5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dd5f4:
    // 0x2dd5f4: 0xc09d4d8  jal         func_275360
label_2dd5f8:
    if (ctx->pc == 0x2DD5F8u) {
        ctx->pc = 0x2DD5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5F4u;
        // 0x2dd5f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD5FCu;
        goto label_2dd5fc;
    }
    ctx->pc = 0x2DD5F4u;
    SET_GPR_U32(ctx, 31, 0x2DD5FCu);
    ctx->pc = 0x2DD5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD5F4u;
    // 0x2dd5f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DD5F4u, 0x2DD5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD5FCu;
label_2dd5fc:
    // 0x2dd5fc: 0x10000070  b           . + 4 + (0x70 << 2)
label_2dd600:
    if (ctx->pc == 0x2DD600u) {
        ctx->pc = 0x2DD600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5FCu;
        // 0x2dd600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD604u;
        goto label_2dd604;
    }
    ctx->pc = 0x2DD5FCu;
    {
        const bool branch_taken_0x2dd5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5FCu;
        // 0x2dd600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd5fc) {
            ctx->pc = 0x2DD7C0u;
            goto label_2dd7c0;
        }
    }
    ctx->pc = 0x2DD604u;
label_2dd604:
    // 0x2dd604: 0x0  nop
    ctx->pc = 0x2dd604u;
    // NOP
label_2dd608:
    // 0x2dd608: 0x92460013  lbu         $a2, 0x13($s2)
    ctx->pc = 0x2dd608u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
label_2dd60c:
    // 0x2dd60c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dd60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dd610:
    // 0x2dd610: 0xc09d524  jal         func_275490
label_2dd614:
    if (ctx->pc == 0x2DD614u) {
        ctx->pc = 0x2DD614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD610u;
        // 0x2dd614: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD618u;
        goto label_2dd618;
    }
    ctx->pc = 0x2DD610u;
    SET_GPR_U32(ctx, 31, 0x2DD618u);
    ctx->pc = 0x2DD614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD610u;
    // 0x2dd614: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2DD610u, 0x2DD618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD618u;
label_2dd618:
    // 0x2dd618: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dd618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd61c:
    // 0x2dd61c: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_2dd620:
    if (ctx->pc == 0x2DD620u) {
        ctx->pc = 0x2DD624u;
        goto label_2dd624;
    }
    ctx->pc = 0x2DD61Cu;
    {
        const bool branch_taken_0x2dd61c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd61c) {
            ctx->pc = 0x2DD658u;
            goto label_2dd658;
        }
    }
    ctx->pc = 0x2DD624u;
label_2dd624:
    // 0x2dd624: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_2dd628:
    if (ctx->pc == 0x2DD628u) {
        ctx->pc = 0x2DD62Cu;
        goto label_2dd62c;
    }
    ctx->pc = 0x2DD624u;
    {
        const bool branch_taken_0x2dd624 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd624) {
            ctx->pc = 0x2DD640u;
            goto label_2dd640;
        }
    }
    ctx->pc = 0x2DD62Cu;
label_2dd62c:
    // 0x2dd62c: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x2dd62cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_2dd630:
    // 0x2dd630: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dd630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dd634:
    // 0x2dd634: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2dd634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2dd638:
    // 0x2dd638: 0x320f809  jalr        $t9
label_2dd63c:
    if (ctx->pc == 0x2DD63Cu) {
        ctx->pc = 0x2DD63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD638u;
        // 0x2dd63c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD640u;
        goto label_2dd640;
    }
    ctx->pc = 0x2DD638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DD640u);
        ctx->pc = 0x2DD63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD638u;
        // 0x2dd63c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD638u, 0x2DD640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DD640u;
label_2dd640:
    // 0x2dd640: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dd640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dd644:
    // 0x2dd644: 0xc09d4d8  jal         func_275360
label_2dd648:
    if (ctx->pc == 0x2DD648u) {
        ctx->pc = 0x2DD648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD644u;
        // 0x2dd648: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD64Cu;
        goto label_2dd64c;
    }
    ctx->pc = 0x2DD644u;
    SET_GPR_U32(ctx, 31, 0x2DD64Cu);
    ctx->pc = 0x2DD648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD644u;
    // 0x2dd648: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DD644u, 0x2DD64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD64Cu;
label_2dd64c:
    // 0x2dd64c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_2dd650:
    if (ctx->pc == 0x2DD650u) {
        ctx->pc = 0x2DD650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD64Cu;
        // 0x2dd650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD654u;
        goto label_2dd654;
    }
    ctx->pc = 0x2DD64Cu;
    {
        const bool branch_taken_0x2dd64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD64Cu;
        // 0x2dd650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd64c) {
            ctx->pc = 0x2DD7C0u;
            goto label_2dd7c0;
        }
    }
    ctx->pc = 0x2DD654u;
label_2dd654:
    // 0x2dd654: 0x0  nop
    ctx->pc = 0x2dd654u;
    // NOP
label_2dd658:
    // 0x2dd658: 0x9626000e  lhu         $a2, 0xE($s1)
    ctx->pc = 0x2dd658u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_2dd65c:
    // 0x2dd65c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dd65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dd660:
    // 0x2dd660: 0xc09d524  jal         func_275490
label_2dd664:
    if (ctx->pc == 0x2DD664u) {
        ctx->pc = 0x2DD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD660u;
        // 0x2dd664: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD668u;
        goto label_2dd668;
    }
    ctx->pc = 0x2DD660u;
    SET_GPR_U32(ctx, 31, 0x2DD668u);
    ctx->pc = 0x2DD664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD660u;
    // 0x2dd664: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2DD660u, 0x2DD668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD668u;
label_2dd668:
    // 0x2dd668: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dd668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd66c:
    // 0x2dd66c: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_2dd670:
    if (ctx->pc == 0x2DD670u) {
        ctx->pc = 0x2DD674u;
        goto label_2dd674;
    }
    ctx->pc = 0x2DD66Cu;
    {
        const bool branch_taken_0x2dd66c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd66c) {
            ctx->pc = 0x2DD6A8u;
            goto label_2dd6a8;
        }
    }
    ctx->pc = 0x2DD674u;
label_2dd674:
    // 0x2dd674: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_2dd678:
    if (ctx->pc == 0x2DD678u) {
        ctx->pc = 0x2DD67Cu;
        goto label_2dd67c;
    }
    ctx->pc = 0x2DD674u;
    {
        const bool branch_taken_0x2dd674 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd674) {
            ctx->pc = 0x2DD690u;
            goto label_2dd690;
        }
    }
    ctx->pc = 0x2DD67Cu;
label_2dd67c:
    // 0x2dd67c: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x2dd67cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_2dd680:
    // 0x2dd680: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dd680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dd684:
    // 0x2dd684: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2dd684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2dd688:
    // 0x2dd688: 0x320f809  jalr        $t9
label_2dd68c:
    if (ctx->pc == 0x2DD68Cu) {
        ctx->pc = 0x2DD68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD688u;
        // 0x2dd68c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD690u;
        goto label_2dd690;
    }
    ctx->pc = 0x2DD688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DD690u);
        ctx->pc = 0x2DD68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD688u;
        // 0x2dd68c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD688u, 0x2DD690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DD690u;
label_2dd690:
    // 0x2dd690: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dd690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dd694:
    // 0x2dd694: 0xc09d4d8  jal         func_275360
label_2dd698:
    if (ctx->pc == 0x2DD698u) {
        ctx->pc = 0x2DD698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD694u;
        // 0x2dd698: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD69Cu;
        goto label_2dd69c;
    }
    ctx->pc = 0x2DD694u;
    SET_GPR_U32(ctx, 31, 0x2DD69Cu);
    ctx->pc = 0x2DD698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD694u;
    // 0x2dd698: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DD694u, 0x2DD69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD69Cu;
label_2dd69c:
    // 0x2dd69c: 0x10000048  b           . + 4 + (0x48 << 2)
label_2dd6a0:
    if (ctx->pc == 0x2DD6A0u) {
        ctx->pc = 0x2DD6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD69Cu;
        // 0x2dd6a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD6A4u;
        goto label_2dd6a4;
    }
    ctx->pc = 0x2DD69Cu;
    {
        const bool branch_taken_0x2dd69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD69Cu;
        // 0x2dd6a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd69c) {
            ctx->pc = 0x2DD7C0u;
            goto label_2dd7c0;
        }
    }
    ctx->pc = 0x2DD6A4u;
label_2dd6a4:
    // 0x2dd6a4: 0x0  nop
    ctx->pc = 0x2dd6a4u;
    // NOP
label_2dd6a8:
    // 0x2dd6a8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2dd6a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2dd6ac:
    // 0x2dd6ac: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2dd6acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2dd6b0:
    // 0x2dd6b0: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x2dd6b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2dd6b4:
    // 0x2dd6b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dd6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dd6b8:
    // 0x2dd6b8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2dd6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2dd6bc:
    // 0x2dd6bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2dd6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dd6c0:
    // 0x2dd6c0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2dd6c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dd6c4:
    // 0x2dd6c4: 0xc096b38  jal         func_25ACE0
label_2dd6c8:
    if (ctx->pc == 0x2DD6C8u) {
        ctx->pc = 0x2DD6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD6C4u;
        // 0x2dd6c8: 0x268b0020  addiu       $t3, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD6CCu;
        goto label_2dd6cc;
    }
    ctx->pc = 0x2DD6C4u;
    SET_GPR_U32(ctx, 31, 0x2DD6CCu);
    ctx->pc = 0x2DD6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD6C4u;
    // 0x2dd6c8: 0x268b0020  addiu       $t3, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x2DD6C4u, 0x2DD6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD6CCu;
label_2dd6cc:
    // 0x2dd6cc: 0x92620050  lbu         $v0, 0x50($s3)
    ctx->pc = 0x2dd6ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 80)));
label_2dd6d0:
    // 0x2dd6d0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2dd6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2dd6d4:
    // 0x2dd6d4: 0xa2620050  sb          $v0, 0x50($s3)
    ctx->pc = 0x2dd6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 2));
label_2dd6d8:
    // 0x2dd6d8: 0xa660005a  sh          $zero, 0x5A($s3)
    ctx->pc = 0x2dd6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 90), (uint16_t)GPR_U32(ctx, 0));
label_2dd6dc:
    // 0x2dd6dc: 0xa6600058  sh          $zero, 0x58($s3)
    ctx->pc = 0x2dd6dcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 88), (uint16_t)GPR_U32(ctx, 0));
label_2dd6e0:
    // 0x2dd6e0: 0xa6600056  sh          $zero, 0x56($s3)
    ctx->pc = 0x2dd6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 0));
label_2dd6e4:
    // 0x2dd6e4: 0xa2600051  sb          $zero, 0x51($s3)
    ctx->pc = 0x2dd6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 81), (uint8_t)GPR_U32(ctx, 0));
label_2dd6e8:
    // 0x2dd6e8: 0xae720070  sw          $s2, 0x70($s3)
    ctx->pc = 0x2dd6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 18));
label_2dd6ec:
    // 0x2dd6ec: 0xae710074  sw          $s1, 0x74($s3)
    ctx->pc = 0x2dd6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 17));
label_2dd6f0:
    // 0x2dd6f0: 0xae700078  sw          $s0, 0x78($s3)
    ctx->pc = 0x2dd6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 16));
label_2dd6f4:
    // 0x2dd6f4: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x2dd6f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
label_2dd6f8:
    // 0x2dd6f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2dd6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2dd6fc:
    // 0x2dd6fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2dd700:
    if (ctx->pc == 0x2DD700u) {
        ctx->pc = 0x2DD700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD6FCu;
        // 0x2dd700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD704u;
        goto label_2dd704;
    }
    ctx->pc = 0x2DD6FCu;
    {
        const bool branch_taken_0x2dd6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD6FCu;
        // 0x2dd700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd6fc) {
            ctx->pc = 0x2DD70Cu;
            goto label_2dd70c;
        }
    }
    ctx->pc = 0x2DD704u;
label_2dd704:
    // 0x2dd704: 0x10000003  b           . + 4 + (0x3 << 2)
label_2dd708:
    if (ctx->pc == 0x2DD708u) {
        ctx->pc = 0x2DD708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD704u;
        // 0x2dd708: 0xa6620084  sh          $v0, 0x84($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 132), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD70Cu;
        goto label_2dd70c;
    }
    ctx->pc = 0x2DD704u;
    {
        const bool branch_taken_0x2dd704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD704u;
        // 0x2dd708: 0xa6620084  sh          $v0, 0x84($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 132), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd704) {
            ctx->pc = 0x2DD714u;
            goto label_2dd714;
        }
    }
    ctx->pc = 0x2DD70Cu;
label_2dd70c:
    // 0x2dd70c: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x2dd70cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
label_2dd710:
    // 0x2dd710: 0xa6620084  sh          $v0, 0x84($s3)
    ctx->pc = 0x2dd710u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 132), (uint16_t)GPR_U32(ctx, 2));
label_2dd714:
    // 0x2dd714: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2dd714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2dd718:
    // 0x2dd718: 0xa6620080  sh          $v0, 0x80($s3)
    ctx->pc = 0x2dd718u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 128), (uint16_t)GPR_U32(ctx, 2));
label_2dd71c:
    // 0x2dd71c: 0xa6620082  sh          $v0, 0x82($s3)
    ctx->pc = 0x2dd71cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 130), (uint16_t)GPR_U32(ctx, 2));
label_2dd720:
    // 0x2dd720: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x2dd720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_2dd724:
    // 0x2dd724: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2dd724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2dd728:
    // 0x2dd728: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dd728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dd72c:
    // 0x2dd72c: 0xc0741a4  jal         func_1D0690
label_2dd730:
    if (ctx->pc == 0x2DD730u) {
        ctx->pc = 0x2DD730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD72Cu;
        // 0x2dd730: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD734u;
        goto label_2dd734;
    }
    ctx->pc = 0x2DD72Cu;
    SET_GPR_U32(ctx, 31, 0x2DD734u);
    ctx->pc = 0x2DD730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD72Cu;
    // 0x2dd730: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x2DD72Cu, 0x2DD734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD734u;
label_2dd734:
    // 0x2dd734: 0xae62007c  sw          $v0, 0x7C($s3)
    ctx->pc = 0x2dd734u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 2));
label_2dd738:
    // 0x2dd738: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x2dd738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_2dd73c:
    // 0x2dd73c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2dd740:
    if (ctx->pc == 0x2DD740u) {
        ctx->pc = 0x2DD740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD73Cu;
        // 0x2dd740: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD744u;
        goto label_2dd744;
    }
    ctx->pc = 0x2DD73Cu;
    {
        const bool branch_taken_0x2dd73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD73Cu;
        // 0x2dd740: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd73c) {
            ctx->pc = 0x2DD760u;
            goto label_2dd760;
        }
    }
    ctx->pc = 0x2DD744u;
label_2dd744:
    // 0x2dd744: 0xc074268  jal         func_1D09A0
label_2dd748:
    if (ctx->pc == 0x2DD748u) {
        ctx->pc = 0x2DD74Cu;
        goto label_2dd74c;
    }
    ctx->pc = 0x2DD744u;
    SET_GPR_U32(ctx, 31, 0x2DD74Cu);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x2DD744u, 0x2DD74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD74Cu;
label_2dd74c:
    // 0x2dd74c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dd74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dd750:
    // 0x2dd750: 0xc09d4d8  jal         func_275360
label_2dd754:
    if (ctx->pc == 0x2DD754u) {
        ctx->pc = 0x2DD754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD750u;
        // 0x2dd754: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD758u;
        goto label_2dd758;
    }
    ctx->pc = 0x2DD750u;
    SET_GPR_U32(ctx, 31, 0x2DD758u);
    ctx->pc = 0x2DD754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD750u;
    // 0x2dd754: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DD750u, 0x2DD758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD758u;
label_2dd758:
    // 0x2dd758: 0x10000019  b           . + 4 + (0x19 << 2)
label_2dd75c:
    if (ctx->pc == 0x2DD75Cu) {
        ctx->pc = 0x2DD75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD758u;
        // 0x2dd75c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD760u;
        goto label_2dd760;
    }
    ctx->pc = 0x2DD758u;
    {
        const bool branch_taken_0x2dd758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD758u;
        // 0x2dd75c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd758) {
            ctx->pc = 0x2DD7C0u;
            goto label_2dd7c0;
        }
    }
    ctx->pc = 0x2DD760u;
label_2dd760:
    // 0x2dd760: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x2dd760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_2dd764:
    // 0x2dd764: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2dd764u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2dd768:
    // 0x2dd768: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_2dd76c:
    if (ctx->pc == 0x2DD76Cu) {
        ctx->pc = 0x2DD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD768u;
        // 0x2dd76c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD770u;
        goto label_2dd770;
    }
    ctx->pc = 0x2DD768u;
    {
        const bool branch_taken_0x2dd768 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD768u;
        // 0x2dd76c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd768) {
            ctx->pc = 0x2DD798u;
            goto label_2dd798;
        }
    }
    ctx->pc = 0x2DD770u;
label_2dd770:
    // 0x2dd770: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2dd770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd774:
    // 0x2dd774: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x2dd774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_2dd778:
    // 0x2dd778: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x2dd778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_2dd77c:
    // 0x2dd77c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2dd77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2dd780:
    // 0x2dd780: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2dd780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2dd784:
    // 0x2dd784: 0xa4430020  sh          $v1, 0x20($v0)
    ctx->pc = 0x2dd784u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 3));
label_2dd788:
    // 0x2dd788: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x2dd788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_2dd78c:
    // 0x2dd78c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2dd78cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2dd790:
    // 0x2dd790: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2dd794:
    if (ctx->pc == 0x2DD794u) {
        ctx->pc = 0x2DD794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD790u;
        // 0x2dd794: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD798u;
        goto label_2dd798;
    }
    ctx->pc = 0x2DD790u;
    {
        const bool branch_taken_0x2dd790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD790u;
        // 0x2dd794: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd790) {
            ctx->pc = 0x2DD778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dd778;
        }
    }
    ctx->pc = 0x2DD798u;
label_2dd798:
    // 0x2dd798: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x2dd798u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2dd79c:
    // 0x2dd79c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dd79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dd7a0:
    // 0x2dd7a0: 0xc09d4d8  jal         func_275360
label_2dd7a4:
    if (ctx->pc == 0x2DD7A4u) {
        ctx->pc = 0x2DD7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7A0u;
        // 0x2dd7a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD7A8u;
        goto label_2dd7a8;
    }
    ctx->pc = 0x2DD7A0u;
    SET_GPR_U32(ctx, 31, 0x2DD7A8u);
    ctx->pc = 0x2DD7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD7A0u;
    // 0x2dd7a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DD7A0u, 0x2DD7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD7A8u;
label_2dd7a8:
    // 0x2dd7a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2dd7ac:
    if (ctx->pc == 0x2DD7ACu) {
        ctx->pc = 0x2DD7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7A8u;
        // 0x2dd7ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD7B0u;
        goto label_2dd7b0;
    }
    ctx->pc = 0x2DD7A8u;
    {
        const bool branch_taken_0x2dd7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7A8u;
        // 0x2dd7ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd7a8) {
            ctx->pc = 0x2DD7C0u;
            goto label_2dd7c0;
        }
    }
    ctx->pc = 0x2DD7B0u;
label_2dd7b0:
    // 0x2dd7b0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dd7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dd7b4:
    // 0x2dd7b4: 0xc09d4d8  jal         func_275360
label_2dd7b8:
    if (ctx->pc == 0x2DD7B8u) {
        ctx->pc = 0x2DD7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7B4u;
        // 0x2dd7b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD7BCu;
        goto label_2dd7bc;
    }
    ctx->pc = 0x2DD7B4u;
    SET_GPR_U32(ctx, 31, 0x2DD7BCu);
    ctx->pc = 0x2DD7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD7B4u;
    // 0x2dd7b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DD7B4u, 0x2DD7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD7BCu;
label_2dd7bc:
    // 0x2dd7bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dd7bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd7c0:
    // 0x2dd7c0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2dd7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2dd7c4:
    // 0x2dd7c4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2dd7c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2dd7c8:
    // 0x2dd7c8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2dd7c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2dd7cc:
    // 0x2dd7cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2dd7ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2dd7d0:
    // 0x2dd7d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dd7d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2dd7d4:
    // 0x2dd7d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dd7d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2dd7d8:
    // 0x2dd7d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dd7d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dd7dc:
    // 0x2dd7dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd7dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dd7e0:
    // 0x2dd7e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd7e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dd7e4:
    // 0x2dd7e4: 0x3e00008  jr          $ra
label_2dd7e8:
    if (ctx->pc == 0x2DD7E8u) {
        ctx->pc = 0x2DD7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7E4u;
        // 0x2dd7e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD7ECu;
        goto label_fallthrough_0x2dd7e4;
    }
    ctx->pc = 0x2DD7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7E4u;
        // 0x2dd7e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dd7e4:
    ctx->pc = 0x2DD7ECu;
}
