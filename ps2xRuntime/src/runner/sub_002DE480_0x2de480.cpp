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

// Function: sub_002DE480
// Address: 0x2de480 - 0x2de7e8
void sub_002DE480_0x2de480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE480_0x2de480");
#endif

    switch (ctx->pc) {
        case 0x2de480u: goto label_2de480;
        case 0x2de484u: goto label_2de484;
        case 0x2de488u: goto label_2de488;
        case 0x2de48cu: goto label_2de48c;
        case 0x2de490u: goto label_2de490;
        case 0x2de494u: goto label_2de494;
        case 0x2de498u: goto label_2de498;
        case 0x2de49cu: goto label_2de49c;
        case 0x2de4a0u: goto label_2de4a0;
        case 0x2de4a4u: goto label_2de4a4;
        case 0x2de4a8u: goto label_2de4a8;
        case 0x2de4acu: goto label_2de4ac;
        case 0x2de4b0u: goto label_2de4b0;
        case 0x2de4b4u: goto label_2de4b4;
        case 0x2de4b8u: goto label_2de4b8;
        case 0x2de4bcu: goto label_2de4bc;
        case 0x2de4c0u: goto label_2de4c0;
        case 0x2de4c4u: goto label_2de4c4;
        case 0x2de4c8u: goto label_2de4c8;
        case 0x2de4ccu: goto label_2de4cc;
        case 0x2de4d0u: goto label_2de4d0;
        case 0x2de4d4u: goto label_2de4d4;
        case 0x2de4d8u: goto label_2de4d8;
        case 0x2de4dcu: goto label_2de4dc;
        case 0x2de4e0u: goto label_2de4e0;
        case 0x2de4e4u: goto label_2de4e4;
        case 0x2de4e8u: goto label_2de4e8;
        case 0x2de4ecu: goto label_2de4ec;
        case 0x2de4f0u: goto label_2de4f0;
        case 0x2de4f4u: goto label_2de4f4;
        case 0x2de4f8u: goto label_2de4f8;
        case 0x2de4fcu: goto label_2de4fc;
        case 0x2de500u: goto label_2de500;
        case 0x2de504u: goto label_2de504;
        case 0x2de508u: goto label_2de508;
        case 0x2de50cu: goto label_2de50c;
        case 0x2de510u: goto label_2de510;
        case 0x2de514u: goto label_2de514;
        case 0x2de518u: goto label_2de518;
        case 0x2de51cu: goto label_2de51c;
        case 0x2de520u: goto label_2de520;
        case 0x2de524u: goto label_2de524;
        case 0x2de528u: goto label_2de528;
        case 0x2de52cu: goto label_2de52c;
        case 0x2de530u: goto label_2de530;
        case 0x2de534u: goto label_2de534;
        case 0x2de538u: goto label_2de538;
        case 0x2de53cu: goto label_2de53c;
        case 0x2de540u: goto label_2de540;
        case 0x2de544u: goto label_2de544;
        case 0x2de548u: goto label_2de548;
        case 0x2de54cu: goto label_2de54c;
        case 0x2de550u: goto label_2de550;
        case 0x2de554u: goto label_2de554;
        case 0x2de558u: goto label_2de558;
        case 0x2de55cu: goto label_2de55c;
        case 0x2de560u: goto label_2de560;
        case 0x2de564u: goto label_2de564;
        case 0x2de568u: goto label_2de568;
        case 0x2de56cu: goto label_2de56c;
        case 0x2de570u: goto label_2de570;
        case 0x2de574u: goto label_2de574;
        case 0x2de578u: goto label_2de578;
        case 0x2de57cu: goto label_2de57c;
        case 0x2de580u: goto label_2de580;
        case 0x2de584u: goto label_2de584;
        case 0x2de588u: goto label_2de588;
        case 0x2de58cu: goto label_2de58c;
        case 0x2de590u: goto label_2de590;
        case 0x2de594u: goto label_2de594;
        case 0x2de598u: goto label_2de598;
        case 0x2de59cu: goto label_2de59c;
        case 0x2de5a0u: goto label_2de5a0;
        case 0x2de5a4u: goto label_2de5a4;
        case 0x2de5a8u: goto label_2de5a8;
        case 0x2de5acu: goto label_2de5ac;
        case 0x2de5b0u: goto label_2de5b0;
        case 0x2de5b4u: goto label_2de5b4;
        case 0x2de5b8u: goto label_2de5b8;
        case 0x2de5bcu: goto label_2de5bc;
        case 0x2de5c0u: goto label_2de5c0;
        case 0x2de5c4u: goto label_2de5c4;
        case 0x2de5c8u: goto label_2de5c8;
        case 0x2de5ccu: goto label_2de5cc;
        case 0x2de5d0u: goto label_2de5d0;
        case 0x2de5d4u: goto label_2de5d4;
        case 0x2de5d8u: goto label_2de5d8;
        case 0x2de5dcu: goto label_2de5dc;
        case 0x2de5e0u: goto label_2de5e0;
        case 0x2de5e4u: goto label_2de5e4;
        case 0x2de5e8u: goto label_2de5e8;
        case 0x2de5ecu: goto label_2de5ec;
        case 0x2de5f0u: goto label_2de5f0;
        case 0x2de5f4u: goto label_2de5f4;
        case 0x2de5f8u: goto label_2de5f8;
        case 0x2de5fcu: goto label_2de5fc;
        case 0x2de600u: goto label_2de600;
        case 0x2de604u: goto label_2de604;
        case 0x2de608u: goto label_2de608;
        case 0x2de60cu: goto label_2de60c;
        case 0x2de610u: goto label_2de610;
        case 0x2de614u: goto label_2de614;
        case 0x2de618u: goto label_2de618;
        case 0x2de61cu: goto label_2de61c;
        case 0x2de620u: goto label_2de620;
        case 0x2de624u: goto label_2de624;
        case 0x2de628u: goto label_2de628;
        case 0x2de62cu: goto label_2de62c;
        case 0x2de630u: goto label_2de630;
        case 0x2de634u: goto label_2de634;
        case 0x2de638u: goto label_2de638;
        case 0x2de63cu: goto label_2de63c;
        case 0x2de640u: goto label_2de640;
        case 0x2de644u: goto label_2de644;
        case 0x2de648u: goto label_2de648;
        case 0x2de64cu: goto label_2de64c;
        case 0x2de650u: goto label_2de650;
        case 0x2de654u: goto label_2de654;
        case 0x2de658u: goto label_2de658;
        case 0x2de65cu: goto label_2de65c;
        case 0x2de660u: goto label_2de660;
        case 0x2de664u: goto label_2de664;
        case 0x2de668u: goto label_2de668;
        case 0x2de66cu: goto label_2de66c;
        case 0x2de670u: goto label_2de670;
        case 0x2de674u: goto label_2de674;
        case 0x2de678u: goto label_2de678;
        case 0x2de67cu: goto label_2de67c;
        case 0x2de680u: goto label_2de680;
        case 0x2de684u: goto label_2de684;
        case 0x2de688u: goto label_2de688;
        case 0x2de68cu: goto label_2de68c;
        case 0x2de690u: goto label_2de690;
        case 0x2de694u: goto label_2de694;
        case 0x2de698u: goto label_2de698;
        case 0x2de69cu: goto label_2de69c;
        case 0x2de6a0u: goto label_2de6a0;
        case 0x2de6a4u: goto label_2de6a4;
        case 0x2de6a8u: goto label_2de6a8;
        case 0x2de6acu: goto label_2de6ac;
        case 0x2de6b0u: goto label_2de6b0;
        case 0x2de6b4u: goto label_2de6b4;
        case 0x2de6b8u: goto label_2de6b8;
        case 0x2de6bcu: goto label_2de6bc;
        case 0x2de6c0u: goto label_2de6c0;
        case 0x2de6c4u: goto label_2de6c4;
        case 0x2de6c8u: goto label_2de6c8;
        case 0x2de6ccu: goto label_2de6cc;
        case 0x2de6d0u: goto label_2de6d0;
        case 0x2de6d4u: goto label_2de6d4;
        case 0x2de6d8u: goto label_2de6d8;
        case 0x2de6dcu: goto label_2de6dc;
        case 0x2de6e0u: goto label_2de6e0;
        case 0x2de6e4u: goto label_2de6e4;
        case 0x2de6e8u: goto label_2de6e8;
        case 0x2de6ecu: goto label_2de6ec;
        case 0x2de6f0u: goto label_2de6f0;
        case 0x2de6f4u: goto label_2de6f4;
        case 0x2de6f8u: goto label_2de6f8;
        case 0x2de6fcu: goto label_2de6fc;
        case 0x2de700u: goto label_2de700;
        case 0x2de704u: goto label_2de704;
        case 0x2de708u: goto label_2de708;
        case 0x2de70cu: goto label_2de70c;
        case 0x2de710u: goto label_2de710;
        case 0x2de714u: goto label_2de714;
        case 0x2de718u: goto label_2de718;
        case 0x2de71cu: goto label_2de71c;
        case 0x2de720u: goto label_2de720;
        case 0x2de724u: goto label_2de724;
        case 0x2de728u: goto label_2de728;
        case 0x2de72cu: goto label_2de72c;
        case 0x2de730u: goto label_2de730;
        case 0x2de734u: goto label_2de734;
        case 0x2de738u: goto label_2de738;
        case 0x2de73cu: goto label_2de73c;
        case 0x2de740u: goto label_2de740;
        case 0x2de744u: goto label_2de744;
        case 0x2de748u: goto label_2de748;
        case 0x2de74cu: goto label_2de74c;
        case 0x2de750u: goto label_2de750;
        case 0x2de754u: goto label_2de754;
        case 0x2de758u: goto label_2de758;
        case 0x2de75cu: goto label_2de75c;
        case 0x2de760u: goto label_2de760;
        case 0x2de764u: goto label_2de764;
        case 0x2de768u: goto label_2de768;
        case 0x2de76cu: goto label_2de76c;
        case 0x2de770u: goto label_2de770;
        case 0x2de774u: goto label_2de774;
        case 0x2de778u: goto label_2de778;
        case 0x2de77cu: goto label_2de77c;
        case 0x2de780u: goto label_2de780;
        case 0x2de784u: goto label_2de784;
        case 0x2de788u: goto label_2de788;
        case 0x2de78cu: goto label_2de78c;
        case 0x2de790u: goto label_2de790;
        case 0x2de794u: goto label_2de794;
        case 0x2de798u: goto label_2de798;
        case 0x2de79cu: goto label_2de79c;
        case 0x2de7a0u: goto label_2de7a0;
        case 0x2de7a4u: goto label_2de7a4;
        case 0x2de7a8u: goto label_2de7a8;
        case 0x2de7acu: goto label_2de7ac;
        case 0x2de7b0u: goto label_2de7b0;
        case 0x2de7b4u: goto label_2de7b4;
        case 0x2de7b8u: goto label_2de7b8;
        case 0x2de7bcu: goto label_2de7bc;
        case 0x2de7c0u: goto label_2de7c0;
        case 0x2de7c4u: goto label_2de7c4;
        case 0x2de7c8u: goto label_2de7c8;
        case 0x2de7ccu: goto label_2de7cc;
        case 0x2de7d0u: goto label_2de7d0;
        case 0x2de7d4u: goto label_2de7d4;
        case 0x2de7d8u: goto label_2de7d8;
        case 0x2de7dcu: goto label_2de7dc;
        case 0x2de7e0u: goto label_2de7e0;
        case 0x2de7e4u: goto label_2de7e4;
        default: break;
    }

    ctx->pc = 0x2de480u;

label_2de480:
    // 0x2de480: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2de480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2de484:
    // 0x2de484: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2de484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2de488:
    // 0x2de488: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2de488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2de48c:
    // 0x2de48c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2de48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2de490:
    // 0x2de490: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2de490u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2de494:
    // 0x2de494: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2de494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2de498:
    // 0x2de498: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2de498u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2de49c:
    // 0x2de49c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2de49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2de4a0:
    // 0x2de4a0: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x2de4a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2de4a4:
    // 0x2de4a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2de4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2de4a8:
    // 0x2de4a8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2de4a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2de4ac:
    // 0x2de4ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2de4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2de4b0:
    // 0x2de4b0: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2de4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2de4b4:
    // 0x2de4b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2de4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2de4b8:
    // 0x2de4b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2de4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2de4bc:
    // 0x2de4bc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2de4bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2de4c0:
    // 0x2de4c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2de4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2de4c4:
    // 0x2de4c4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2de4c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2de4c8:
    // 0x2de4c8: 0xafa600a8  sw          $a2, 0xA8($sp)
    ctx->pc = 0x2de4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 6));
label_2de4cc:
    // 0x2de4cc: 0xc09d4d4  jal         func_275350
label_2de4d0:
    if (ctx->pc == 0x2DE4D0u) {
        ctx->pc = 0x2DE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4CCu;
        // 0x2de4d0: 0xafaa00a4  sw          $t2, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4D4u;
        goto label_2de4d4;
    }
    ctx->pc = 0x2DE4CCu;
    SET_GPR_U32(ctx, 31, 0x2DE4D4u);
    ctx->pc = 0x2DE4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE4CCu;
    // 0x2de4d0: 0xafaa00a4  sw          $t2, 0xA4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x2DE4CCu, 0x2DE4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE4D4u;
label_2de4d4:
    // 0x2de4d4: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
label_2de4d8:
    if (ctx->pc == 0x2DE4D8u) {
        ctx->pc = 0x2DE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4D4u;
        // 0x2de4d8: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4DCu;
        goto label_2de4dc;
    }
    ctx->pc = 0x2DE4D4u;
    {
        const bool branch_taken_0x2de4d4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4D4u;
        // 0x2de4d8: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4d4) {
            ctx->pc = 0x2DE4F0u;
            goto label_2de4f0;
        }
    }
    ctx->pc = 0x2DE4DCu;
label_2de4dc:
    // 0x2de4dc: 0xc09d4d8  jal         func_275360
label_2de4e0:
    if (ctx->pc == 0x2DE4E0u) {
        ctx->pc = 0x2DE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4DCu;
        // 0x2de4e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4E4u;
        goto label_2de4e4;
    }
    ctx->pc = 0x2DE4DCu;
    SET_GPR_U32(ctx, 31, 0x2DE4E4u);
    ctx->pc = 0x2DE4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE4DCu;
    // 0x2de4e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DE4DCu, 0x2DE4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE4E4u;
label_2de4e4:
    // 0x2de4e4: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_2de4e8:
    if (ctx->pc == 0x2DE4E8u) {
        ctx->pc = 0x2DE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4E4u;
        // 0x2de4e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4ECu;
        goto label_2de4ec;
    }
    ctx->pc = 0x2DE4E4u;
    {
        const bool branch_taken_0x2de4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4E4u;
        // 0x2de4e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4e4) {
            ctx->pc = 0x2DE7B8u;
            goto label_2de7b8;
        }
    }
    ctx->pc = 0x2DE4ECu;
label_2de4ec:
    // 0x2de4ec: 0x0  nop
    ctx->pc = 0x2de4ecu;
    // NOP
label_2de4f0:
    // 0x2de4f0: 0xc0741a4  jal         func_1D0690
label_2de4f4:
    if (ctx->pc == 0x2DE4F4u) {
        ctx->pc = 0x2DE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4F0u;
        // 0x2de4f4: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4F8u;
        goto label_2de4f8;
    }
    ctx->pc = 0x2DE4F0u;
    SET_GPR_U32(ctx, 31, 0x2DE4F8u);
    ctx->pc = 0x2DE4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE4F0u;
    // 0x2de4f4: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x2DE4F0u, 0x2DE4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE4F8u;
label_2de4f8:
    // 0x2de4f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de4f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de4fc:
    // 0x2de4fc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_2de500:
    if (ctx->pc == 0x2DE500u) {
        ctx->pc = 0x2DE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4FCu;
        // 0x2de500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE504u;
        goto label_2de504;
    }
    ctx->pc = 0x2DE4FCu;
    {
        const bool branch_taken_0x2de4fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4FCu;
        // 0x2de500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4fc) {
            ctx->pc = 0x2DE538u;
            goto label_2de538;
        }
    }
    ctx->pc = 0x2DE504u;
label_2de504:
    // 0x2de504: 0xc096b00  jal         func_25AC00
label_2de508:
    if (ctx->pc == 0x2DE508u) {
        ctx->pc = 0x2DE50Cu;
        goto label_2de50c;
    }
    ctx->pc = 0x2DE504u;
    SET_GPR_U32(ctx, 31, 0x2DE50Cu);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x2DE504u, 0x2DE50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE50Cu;
label_2de50c:
    // 0x2de50c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2de50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_2de510:
    // 0x2de510: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2de510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_2de514:
    // 0x2de514: 0x246375c0  addiu       $v1, $v1, 0x75C0
    ctx->pc = 0x2de514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30144));
label_2de518:
    // 0x2de518: 0x24427a10  addiu       $v0, $v0, 0x7A10
    ctx->pc = 0x2de518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31248));
label_2de51c:
    // 0x2de51c: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x2de51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_2de520:
    // 0x2de520: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2de520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_2de524:
    // 0x2de524: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2de524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_2de528:
    // 0x2de528: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x2de528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_2de52c:
    // 0x2de52c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x2de52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_2de530:
    // 0x2de530: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x2de530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_2de534:
    // 0x2de534: 0x0  nop
    ctx->pc = 0x2de534u;
    // NOP
label_2de538:
    // 0x2de538: 0x1200009b  beqz        $s0, . + 4 + (0x9B << 2)
label_2de53c:
    if (ctx->pc == 0x2DE53Cu) {
        ctx->pc = 0x2DE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE538u;
        // 0x2de53c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE540u;
        goto label_2de540;
    }
    ctx->pc = 0x2DE538u;
    {
        const bool branch_taken_0x2de538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE538u;
        // 0x2de53c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de538) {
            ctx->pc = 0x2DE7A8u;
            goto label_2de7a8;
        }
    }
    ctx->pc = 0x2DE540u;
label_2de540:
    // 0x2de540: 0xc09d4fc  jal         func_2753F0
label_2de544:
    if (ctx->pc == 0x2DE544u) {
        ctx->pc = 0x2DE544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE540u;
        // 0x2de544: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE548u;
        goto label_2de548;
    }
    ctx->pc = 0x2DE540u;
    SET_GPR_U32(ctx, 31, 0x2DE548u);
    ctx->pc = 0x2DE544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE540u;
    // 0x2de544: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x2DE540u, 0x2DE548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE548u;
label_2de548:
    // 0x2de548: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x2de548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2de54c:
    // 0x2de54c: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2de54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2de550:
    // 0x2de550: 0xc09d524  jal         func_275490
label_2de554:
    if (ctx->pc == 0x2DE554u) {
        ctx->pc = 0x2DE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE550u;
        // 0x2de554: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE558u;
        goto label_2de558;
    }
    ctx->pc = 0x2DE550u;
    SET_GPR_U32(ctx, 31, 0x2DE558u);
    ctx->pc = 0x2DE554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE550u;
    // 0x2de554: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2DE550u, 0x2DE558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE558u;
label_2de558:
    // 0x2de558: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2de558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de55c:
    // 0x2de55c: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_2de560:
    if (ctx->pc == 0x2DE560u) {
        ctx->pc = 0x2DE564u;
        goto label_2de564;
    }
    ctx->pc = 0x2DE55Cu;
    {
        const bool branch_taken_0x2de55c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de55c) {
            ctx->pc = 0x2DE598u;
            goto label_2de598;
        }
    }
    ctx->pc = 0x2DE564u;
label_2de564:
    // 0x2de564: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2de568:
    if (ctx->pc == 0x2DE568u) {
        ctx->pc = 0x2DE56Cu;
        goto label_2de56c;
    }
    ctx->pc = 0x2DE564u;
    {
        const bool branch_taken_0x2de564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de564) {
            ctx->pc = 0x2DE580u;
            goto label_2de580;
        }
    }
    ctx->pc = 0x2DE56Cu;
label_2de56c:
    // 0x2de56c: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x2de56cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2de570:
    // 0x2de570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de574:
    // 0x2de574: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2de574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2de578:
    // 0x2de578: 0x320f809  jalr        $t9
label_2de57c:
    if (ctx->pc == 0x2DE57Cu) {
        ctx->pc = 0x2DE57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE578u;
        // 0x2de57c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE580u;
        goto label_2de580;
    }
    ctx->pc = 0x2DE578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DE580u);
        ctx->pc = 0x2DE57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE578u;
        // 0x2de57c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE578u, 0x2DE580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DE580u;
label_2de580:
    // 0x2de580: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2de580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2de584:
    // 0x2de584: 0xc09d4d8  jal         func_275360
label_2de588:
    if (ctx->pc == 0x2DE588u) {
        ctx->pc = 0x2DE588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE584u;
        // 0x2de588: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE58Cu;
        goto label_2de58c;
    }
    ctx->pc = 0x2DE584u;
    SET_GPR_U32(ctx, 31, 0x2DE58Cu);
    ctx->pc = 0x2DE588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE584u;
    // 0x2de588: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DE584u, 0x2DE58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE58Cu;
label_2de58c:
    // 0x2de58c: 0x1000008a  b           . + 4 + (0x8A << 2)
label_2de590:
    if (ctx->pc == 0x2DE590u) {
        ctx->pc = 0x2DE590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE58Cu;
        // 0x2de590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE594u;
        goto label_2de594;
    }
    ctx->pc = 0x2DE58Cu;
    {
        const bool branch_taken_0x2de58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE58Cu;
        // 0x2de590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de58c) {
            ctx->pc = 0x2DE7B8u;
            goto label_2de7b8;
        }
    }
    ctx->pc = 0x2DE594u;
label_2de594:
    // 0x2de594: 0x0  nop
    ctx->pc = 0x2de594u;
    // NOP
label_2de598:
    // 0x2de598: 0x92260004  lbu         $a2, 0x4($s1)
    ctx->pc = 0x2de598u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_2de59c:
    // 0x2de59c: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2de59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2de5a0:
    // 0x2de5a0: 0xc09d524  jal         func_275490
label_2de5a4:
    if (ctx->pc == 0x2DE5A4u) {
        ctx->pc = 0x2DE5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5A0u;
        // 0x2de5a4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE5A8u;
        goto label_2de5a8;
    }
    ctx->pc = 0x2DE5A0u;
    SET_GPR_U32(ctx, 31, 0x2DE5A8u);
    ctx->pc = 0x2DE5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE5A0u;
    // 0x2de5a4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2DE5A0u, 0x2DE5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE5A8u;
label_2de5a8:
    // 0x2de5a8: 0x92260006  lbu         $a2, 0x6($s1)
    ctx->pc = 0x2de5a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_2de5ac:
    // 0x2de5ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2de5acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de5b0:
    // 0x2de5b0: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2de5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2de5b4:
    // 0x2de5b4: 0xc09d524  jal         func_275490
label_2de5b8:
    if (ctx->pc == 0x2DE5B8u) {
        ctx->pc = 0x2DE5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5B4u;
        // 0x2de5b8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE5BCu;
        goto label_2de5bc;
    }
    ctx->pc = 0x2DE5B4u;
    SET_GPR_U32(ctx, 31, 0x2DE5BCu);
    ctx->pc = 0x2DE5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE5B4u;
    // 0x2de5b8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2DE5B4u, 0x2DE5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE5BCu;
label_2de5bc:
    // 0x2de5bc: 0x92260005  lbu         $a2, 0x5($s1)
    ctx->pc = 0x2de5bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_2de5c0:
    // 0x2de5c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2de5c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de5c4:
    // 0x2de5c4: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2de5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2de5c8:
    // 0x2de5c8: 0xc09d524  jal         func_275490
label_2de5cc:
    if (ctx->pc == 0x2DE5CCu) {
        ctx->pc = 0x2DE5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5C8u;
        // 0x2de5cc: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE5D0u;
        goto label_2de5d0;
    }
    ctx->pc = 0x2DE5C8u;
    SET_GPR_U32(ctx, 31, 0x2DE5D0u);
    ctx->pc = 0x2DE5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE5C8u;
    // 0x2de5cc: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2DE5C8u, 0x2DE5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE5D0u;
label_2de5d0:
    // 0x2de5d0: 0x92260007  lbu         $a2, 0x7($s1)
    ctx->pc = 0x2de5d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_2de5d4:
    // 0x2de5d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2de5d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de5d8:
    // 0x2de5d8: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2de5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2de5dc:
    // 0x2de5dc: 0xc09d524  jal         func_275490
label_2de5e0:
    if (ctx->pc == 0x2DE5E0u) {
        ctx->pc = 0x2DE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5DCu;
        // 0x2de5e0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE5E4u;
        goto label_2de5e4;
    }
    ctx->pc = 0x2DE5DCu;
    SET_GPR_U32(ctx, 31, 0x2DE5E4u);
    ctx->pc = 0x2DE5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE5DCu;
    // 0x2de5e0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2DE5DCu, 0x2DE5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE5E4u;
label_2de5e4:
    // 0x2de5e4: 0x8eab004c  lw          $t3, 0x4C($s5)
    ctx->pc = 0x2de5e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_2de5e8:
    // 0x2de5e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2de5e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de5ec:
    // 0x2de5ec: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x2de5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_2de5f0:
    // 0x2de5f0: 0x8fa900a8  lw          $t1, 0xA8($sp)
    ctx->pc = 0x2de5f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2de5f4:
    // 0x2de5f4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2de5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2de5f8:
    // 0x2de5f8: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2de5f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2de5fc:
    // 0x2de5fc: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2de5fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2de600:
    // 0x2de600: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2de600u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2de604:
    // 0x2de604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de608:
    // 0x2de608: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2de608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2de60c:
    // 0x2de60c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2de60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2de610:
    // 0x2de610: 0x8d620094  lw          $v0, 0x94($t3)
    ctx->pc = 0x2de610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 148)));
label_2de614:
    // 0x2de614: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2de614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2de618:
    // 0x2de618: 0xc096b38  jal         func_25ACE0
label_2de61c:
    if (ctx->pc == 0x2DE61Cu) {
        ctx->pc = 0x2DE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE618u;
        // 0x2de61c: 0x244b0030  addiu       $t3, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE620u;
        goto label_2de620;
    }
    ctx->pc = 0x2DE618u;
    SET_GPR_U32(ctx, 31, 0x2DE620u);
    ctx->pc = 0x2DE61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE618u;
    // 0x2de61c: 0x244b0030  addiu       $t3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x2DE618u, 0x2DE620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE620u;
label_2de620:
    // 0x2de620: 0x92030050  lbu         $v1, 0x50($s0)
    ctx->pc = 0x2de620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_2de624:
    // 0x2de624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de628:
    // 0x2de628: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x2de628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2de62c:
    // 0x2de62c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x2de62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_2de630:
    // 0x2de630: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2de630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_2de634:
    // 0x2de634: 0xa2030050  sb          $v1, 0x50($s0)
    ctx->pc = 0x2de634u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 3));
label_2de638:
    // 0x2de638: 0x87a300b8  lh          $v1, 0xB8($sp)
    ctx->pc = 0x2de638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 184)));
label_2de63c:
    // 0x2de63c: 0xa6030056  sh          $v1, 0x56($s0)
    ctx->pc = 0x2de63cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 3));
label_2de640:
    // 0x2de640: 0xa2000051  sb          $zero, 0x51($s0)
    ctx->pc = 0x2de640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 0));
label_2de644:
    // 0x2de644: 0xa21600c6  sb          $s6, 0xC6($s0)
    ctx->pc = 0x2de644u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 198), (uint8_t)GPR_U32(ctx, 22));
label_2de648:
    // 0x2de648: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2de648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2de64c:
    // 0x2de64c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2de64cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2de650:
    // 0x2de650: 0x7e030070  sq          $v1, 0x70($s0)
    ctx->pc = 0x2de650u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 3));
label_2de654:
    // 0x2de654: 0xa20200c7  sb          $v0, 0xC7($s0)
    ctx->pc = 0x2de654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 199), (uint8_t)GPR_U32(ctx, 2));
label_2de658:
    // 0x2de658: 0xa20000c8  sb          $zero, 0xC8($s0)
    ctx->pc = 0x2de658u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 200), (uint8_t)GPR_U32(ctx, 0));
label_2de65c:
    // 0x2de65c: 0xc076464  jal         func_1D9190
label_2de660:
    if (ctx->pc == 0x2DE660u) {
        ctx->pc = 0x2DE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE65Cu;
        // 0x2de660: 0xa20000c9  sb          $zero, 0xC9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 201), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE664u;
        goto label_2de664;
    }
    ctx->pc = 0x2DE65Cu;
    SET_GPR_U32(ctx, 31, 0x2DE664u);
    ctx->pc = 0x2DE660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE65Cu;
    // 0x2de660: 0xa20000c9  sb          $zero, 0xC9($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 201), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9190u, 0x2DE65Cu, 0x2DE664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE664u;
label_2de664:
    // 0x2de664: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2de664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_2de668:
    // 0x2de668: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x2de668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_2de66c:
    // 0x2de66c: 0xc096cb8  jal         func_25B2E0
label_2de670:
    if (ctx->pc == 0x2DE670u) {
        ctx->pc = 0x2DE670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE66Cu;
        // 0x2de670: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE674u;
        goto label_2de674;
    }
    ctx->pc = 0x2DE66Cu;
    SET_GPR_U32(ctx, 31, 0x2DE674u);
    ctx->pc = 0x2DE670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE66Cu;
    // 0x2de670: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x2DE66Cu, 0x2DE674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE674u;
label_2de674:
    // 0x2de674: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2de678:
    if (ctx->pc == 0x2DE678u) {
        ctx->pc = 0x2DE67Cu;
        goto label_2de67c;
    }
    ctx->pc = 0x2DE674u;
    {
        const bool branch_taken_0x2de674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de674) {
            ctx->pc = 0x2DE680u;
            goto label_2de680;
        }
    }
    ctx->pc = 0x2DE67Cu;
label_2de67c:
    // 0x2de67c: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x2de67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_2de680:
    // 0x2de680: 0xae1400cc  sw          $s4, 0xCC($s0)
    ctx->pc = 0x2de680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 20));
label_2de684:
    // 0x2de684: 0xae1300d4  sw          $s3, 0xD4($s0)
    ctx->pc = 0x2de684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 19));
label_2de688:
    // 0x2de688: 0xae1200dc  sw          $s2, 0xDC($s0)
    ctx->pc = 0x2de688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 18));
label_2de68c:
    // 0x2de68c: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_2de690:
    if (ctx->pc == 0x2DE690u) {
        ctx->pc = 0x2DE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE68Cu;
        // 0x2de690: 0xae1100e4  sw          $s1, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE694u;
        goto label_2de694;
    }
    ctx->pc = 0x2DE68Cu;
    {
        const bool branch_taken_0x2de68c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE68Cu;
        // 0x2de690: 0xae1100e4  sw          $s1, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de68c) {
            ctx->pc = 0x2DE6D0u;
            goto label_2de6d0;
        }
    }
    ctx->pc = 0x2DE694u;
label_2de694:
    // 0x2de694: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2de694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2de698:
    // 0x2de698: 0xc0a1238  jal         func_2848E0
label_2de69c:
    if (ctx->pc == 0x2DE69Cu) {
        ctx->pc = 0x2DE69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE698u;
        // 0x2de69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE6A0u;
        goto label_2de6a0;
    }
    ctx->pc = 0x2DE698u;
    SET_GPR_U32(ctx, 31, 0x2DE6A0u);
    ctx->pc = 0x2DE69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE698u;
    // 0x2de69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2848E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2848E0u, 0x2DE698u, 0x2DE6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE6A0u;
label_2de6a0:
    // 0x2de6a0: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x2de6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
label_2de6a4:
    // 0x2de6a4: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x2de6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_2de6a8:
    // 0x2de6a8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2de6ac:
    if (ctx->pc == 0x2DE6ACu) {
        ctx->pc = 0x2DE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6A8u;
        // 0x2de6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE6B0u;
        goto label_2de6b0;
    }
    ctx->pc = 0x2DE6A8u;
    {
        const bool branch_taken_0x2de6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6A8u;
        // 0x2de6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de6a8) {
            ctx->pc = 0x2DE6D0u;
            goto label_2de6d0;
        }
    }
    ctx->pc = 0x2DE6B0u;
label_2de6b0:
    // 0x2de6b0: 0xc074268  jal         func_1D09A0
label_2de6b4:
    if (ctx->pc == 0x2DE6B4u) {
        ctx->pc = 0x2DE6B8u;
        goto label_2de6b8;
    }
    ctx->pc = 0x2DE6B0u;
    SET_GPR_U32(ctx, 31, 0x2DE6B8u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x2DE6B0u, 0x2DE6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE6B8u;
label_2de6b8:
    // 0x2de6b8: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2de6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2de6bc:
    // 0x2de6bc: 0xc09d4d8  jal         func_275360
label_2de6c0:
    if (ctx->pc == 0x2DE6C0u) {
        ctx->pc = 0x2DE6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6BCu;
        // 0x2de6c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE6C4u;
        goto label_2de6c4;
    }
    ctx->pc = 0x2DE6BCu;
    SET_GPR_U32(ctx, 31, 0x2DE6C4u);
    ctx->pc = 0x2DE6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE6BCu;
    // 0x2de6c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DE6BCu, 0x2DE6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE6C4u;
label_2de6c4:
    // 0x2de6c4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2de6c8:
    if (ctx->pc == 0x2DE6C8u) {
        ctx->pc = 0x2DE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6C4u;
        // 0x2de6c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE6CCu;
        goto label_2de6cc;
    }
    ctx->pc = 0x2DE6C4u;
    {
        const bool branch_taken_0x2de6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6C4u;
        // 0x2de6c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de6c4) {
            ctx->pc = 0x2DE7B8u;
            goto label_2de7b8;
        }
    }
    ctx->pc = 0x2DE6CCu;
label_2de6cc:
    // 0x2de6cc: 0x0  nop
    ctx->pc = 0x2de6ccu;
    // NOP
label_2de6d0:
    // 0x2de6d0: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_2de6d4:
    if (ctx->pc == 0x2DE6D4u) {
        ctx->pc = 0x2DE6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6D0u;
        // 0x2de6d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE6D8u;
        goto label_2de6d8;
    }
    ctx->pc = 0x2DE6D0u;
    {
        const bool branch_taken_0x2de6d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6D0u;
        // 0x2de6d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de6d0) {
            ctx->pc = 0x2DE710u;
            goto label_2de710;
        }
    }
    ctx->pc = 0x2DE6D8u;
label_2de6d8:
    // 0x2de6d8: 0xc0a1c94  jal         func_287250
label_2de6dc:
    if (ctx->pc == 0x2DE6DCu) {
        ctx->pc = 0x2DE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6D8u;
        // 0x2de6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE6E0u;
        goto label_2de6e0;
    }
    ctx->pc = 0x2DE6D8u;
    SET_GPR_U32(ctx, 31, 0x2DE6E0u);
    ctx->pc = 0x2DE6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE6D8u;
    // 0x2de6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287250u, 0x2DE6D8u, 0x2DE6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE6E0u;
label_2de6e0:
    // 0x2de6e0: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x2de6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
label_2de6e4:
    // 0x2de6e4: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x2de6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_2de6e8:
    // 0x2de6e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2de6ec:
    if (ctx->pc == 0x2DE6ECu) {
        ctx->pc = 0x2DE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6E8u;
        // 0x2de6ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE6F0u;
        goto label_2de6f0;
    }
    ctx->pc = 0x2DE6E8u;
    {
        const bool branch_taken_0x2de6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6E8u;
        // 0x2de6ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de6e8) {
            ctx->pc = 0x2DE710u;
            goto label_2de710;
        }
    }
    ctx->pc = 0x2DE6F0u;
label_2de6f0:
    // 0x2de6f0: 0xc074268  jal         func_1D09A0
label_2de6f4:
    if (ctx->pc == 0x2DE6F4u) {
        ctx->pc = 0x2DE6F8u;
        goto label_2de6f8;
    }
    ctx->pc = 0x2DE6F0u;
    SET_GPR_U32(ctx, 31, 0x2DE6F8u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x2DE6F0u, 0x2DE6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE6F8u;
label_2de6f8:
    // 0x2de6f8: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2de6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2de6fc:
    // 0x2de6fc: 0xc09d4d8  jal         func_275360
label_2de700:
    if (ctx->pc == 0x2DE700u) {
        ctx->pc = 0x2DE700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6FCu;
        // 0x2de700: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE704u;
        goto label_2de704;
    }
    ctx->pc = 0x2DE6FCu;
    SET_GPR_U32(ctx, 31, 0x2DE704u);
    ctx->pc = 0x2DE700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE6FCu;
    // 0x2de700: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DE6FCu, 0x2DE704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE704u;
label_2de704:
    // 0x2de704: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2de708:
    if (ctx->pc == 0x2DE708u) {
        ctx->pc = 0x2DE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE704u;
        // 0x2de708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE70Cu;
        goto label_2de70c;
    }
    ctx->pc = 0x2DE704u;
    {
        const bool branch_taken_0x2de704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE704u;
        // 0x2de708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de704) {
            ctx->pc = 0x2DE7B8u;
            goto label_2de7b8;
        }
    }
    ctx->pc = 0x2DE70Cu;
label_2de70c:
    // 0x2de70c: 0x0  nop
    ctx->pc = 0x2de70cu;
    // NOP
label_2de710:
    // 0x2de710: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_2de714:
    if (ctx->pc == 0x2DE714u) {
        ctx->pc = 0x2DE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE710u;
        // 0x2de714: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE718u;
        goto label_2de718;
    }
    ctx->pc = 0x2DE710u;
    {
        const bool branch_taken_0x2de710 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE710u;
        // 0x2de714: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de710) {
            ctx->pc = 0x2DE750u;
            goto label_2de750;
        }
    }
    ctx->pc = 0x2DE718u;
label_2de718:
    // 0x2de718: 0xc0a1238  jal         func_2848E0
label_2de71c:
    if (ctx->pc == 0x2DE71Cu) {
        ctx->pc = 0x2DE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE718u;
        // 0x2de71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE720u;
        goto label_2de720;
    }
    ctx->pc = 0x2DE718u;
    SET_GPR_U32(ctx, 31, 0x2DE720u);
    ctx->pc = 0x2DE71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE718u;
    // 0x2de71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2848E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2848E0u, 0x2DE718u, 0x2DE720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE720u;
label_2de720:
    // 0x2de720: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x2de720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
label_2de724:
    // 0x2de724: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x2de724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_2de728:
    // 0x2de728: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2de72c:
    if (ctx->pc == 0x2DE72Cu) {
        ctx->pc = 0x2DE72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE728u;
        // 0x2de72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE730u;
        goto label_2de730;
    }
    ctx->pc = 0x2DE728u;
    {
        const bool branch_taken_0x2de728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE728u;
        // 0x2de72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de728) {
            ctx->pc = 0x2DE750u;
            goto label_2de750;
        }
    }
    ctx->pc = 0x2DE730u;
label_2de730:
    // 0x2de730: 0xc074268  jal         func_1D09A0
label_2de734:
    if (ctx->pc == 0x2DE734u) {
        ctx->pc = 0x2DE738u;
        goto label_2de738;
    }
    ctx->pc = 0x2DE730u;
    SET_GPR_U32(ctx, 31, 0x2DE738u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x2DE730u, 0x2DE738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE738u;
label_2de738:
    // 0x2de738: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2de738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2de73c:
    // 0x2de73c: 0xc09d4d8  jal         func_275360
label_2de740:
    if (ctx->pc == 0x2DE740u) {
        ctx->pc = 0x2DE740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE73Cu;
        // 0x2de740: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE744u;
        goto label_2de744;
    }
    ctx->pc = 0x2DE73Cu;
    SET_GPR_U32(ctx, 31, 0x2DE744u);
    ctx->pc = 0x2DE740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE73Cu;
    // 0x2de740: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DE73Cu, 0x2DE744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE744u;
label_2de744:
    // 0x2de744: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2de748:
    if (ctx->pc == 0x2DE748u) {
        ctx->pc = 0x2DE748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE744u;
        // 0x2de748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE74Cu;
        goto label_2de74c;
    }
    ctx->pc = 0x2DE744u;
    {
        const bool branch_taken_0x2de744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE744u;
        // 0x2de748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de744) {
            ctx->pc = 0x2DE7B8u;
            goto label_2de7b8;
        }
    }
    ctx->pc = 0x2DE74Cu;
label_2de74c:
    // 0x2de74c: 0x0  nop
    ctx->pc = 0x2de74cu;
    // NOP
label_2de750:
    // 0x2de750: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_2de754:
    if (ctx->pc == 0x2DE754u) {
        ctx->pc = 0x2DE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE750u;
        // 0x2de754: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE758u;
        goto label_2de758;
    }
    ctx->pc = 0x2DE750u;
    {
        const bool branch_taken_0x2de750 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE750u;
        // 0x2de754: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de750) {
            ctx->pc = 0x2DE790u;
            goto label_2de790;
        }
    }
    ctx->pc = 0x2DE758u;
label_2de758:
    // 0x2de758: 0xc0a1c94  jal         func_287250
label_2de75c:
    if (ctx->pc == 0x2DE75Cu) {
        ctx->pc = 0x2DE75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE758u;
        // 0x2de75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE760u;
        goto label_2de760;
    }
    ctx->pc = 0x2DE758u;
    SET_GPR_U32(ctx, 31, 0x2DE760u);
    ctx->pc = 0x2DE75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE758u;
    // 0x2de75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287250u, 0x2DE758u, 0x2DE760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE760u;
label_2de760:
    // 0x2de760: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x2de760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_2de764:
    // 0x2de764: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x2de764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_2de768:
    // 0x2de768: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2de76c:
    if (ctx->pc == 0x2DE76Cu) {
        ctx->pc = 0x2DE76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE768u;
        // 0x2de76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE770u;
        goto label_2de770;
    }
    ctx->pc = 0x2DE768u;
    {
        const bool branch_taken_0x2de768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE768u;
        // 0x2de76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de768) {
            ctx->pc = 0x2DE790u;
            goto label_2de790;
        }
    }
    ctx->pc = 0x2DE770u;
label_2de770:
    // 0x2de770: 0xc074268  jal         func_1D09A0
label_2de774:
    if (ctx->pc == 0x2DE774u) {
        ctx->pc = 0x2DE778u;
        goto label_2de778;
    }
    ctx->pc = 0x2DE770u;
    SET_GPR_U32(ctx, 31, 0x2DE778u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x2DE770u, 0x2DE778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE778u;
label_2de778:
    // 0x2de778: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2de778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2de77c:
    // 0x2de77c: 0xc09d4d8  jal         func_275360
label_2de780:
    if (ctx->pc == 0x2DE780u) {
        ctx->pc = 0x2DE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE77Cu;
        // 0x2de780: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE784u;
        goto label_2de784;
    }
    ctx->pc = 0x2DE77Cu;
    SET_GPR_U32(ctx, 31, 0x2DE784u);
    ctx->pc = 0x2DE780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE77Cu;
    // 0x2de780: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DE77Cu, 0x2DE784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE784u;
label_2de784:
    // 0x2de784: 0x1000000c  b           . + 4 + (0xC << 2)
label_2de788:
    if (ctx->pc == 0x2DE788u) {
        ctx->pc = 0x2DE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE784u;
        // 0x2de788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE78Cu;
        goto label_2de78c;
    }
    ctx->pc = 0x2DE784u;
    {
        const bool branch_taken_0x2de784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE784u;
        // 0x2de788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de784) {
            ctx->pc = 0x2DE7B8u;
            goto label_2de7b8;
        }
    }
    ctx->pc = 0x2DE78Cu;
label_2de78c:
    // 0x2de78c: 0x0  nop
    ctx->pc = 0x2de78cu;
    // NOP
label_2de790:
    // 0x2de790: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2de790u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2de794:
    // 0x2de794: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2de794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2de798:
    // 0x2de798: 0xc09d4d8  jal         func_275360
label_2de79c:
    if (ctx->pc == 0x2DE79Cu) {
        ctx->pc = 0x2DE79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE798u;
        // 0x2de79c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE7A0u;
        goto label_2de7a0;
    }
    ctx->pc = 0x2DE798u;
    SET_GPR_U32(ctx, 31, 0x2DE7A0u);
    ctx->pc = 0x2DE79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE798u;
    // 0x2de79c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DE798u, 0x2DE7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE7A0u;
label_2de7a0:
    // 0x2de7a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2de7a4:
    if (ctx->pc == 0x2DE7A4u) {
        ctx->pc = 0x2DE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7A0u;
        // 0x2de7a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE7A8u;
        goto label_2de7a8;
    }
    ctx->pc = 0x2DE7A0u;
    {
        const bool branch_taken_0x2de7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7A0u;
        // 0x2de7a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de7a0) {
            ctx->pc = 0x2DE7B8u;
            goto label_2de7b8;
        }
    }
    ctx->pc = 0x2DE7A8u;
label_2de7a8:
    // 0x2de7a8: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2de7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2de7ac:
    // 0x2de7ac: 0xc09d4d8  jal         func_275360
label_2de7b0:
    if (ctx->pc == 0x2DE7B0u) {
        ctx->pc = 0x2DE7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7ACu;
        // 0x2de7b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE7B4u;
        goto label_2de7b4;
    }
    ctx->pc = 0x2DE7ACu;
    SET_GPR_U32(ctx, 31, 0x2DE7B4u);
    ctx->pc = 0x2DE7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE7ACu;
    // 0x2de7b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DE7ACu, 0x2DE7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE7B4u;
label_2de7b4:
    // 0x2de7b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2de7b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de7b8:
    // 0x2de7b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2de7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2de7bc:
    // 0x2de7bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2de7bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2de7c0:
    // 0x2de7c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2de7c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2de7c4:
    // 0x2de7c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2de7c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2de7c8:
    // 0x2de7c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2de7c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2de7cc:
    // 0x2de7cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2de7ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2de7d0:
    // 0x2de7d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2de7d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2de7d4:
    // 0x2de7d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2de7d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2de7d8:
    // 0x2de7d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2de7d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2de7dc:
    // 0x2de7dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2de7dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2de7e0:
    // 0x2de7e0: 0x3e00008  jr          $ra
label_2de7e4:
    if (ctx->pc == 0x2DE7E4u) {
        ctx->pc = 0x2DE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7E0u;
        // 0x2de7e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE7E8u;
        goto label_fallthrough_0x2de7e0;
    }
    ctx->pc = 0x2DE7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7E0u;
        // 0x2de7e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2de7e0:
    ctx->pc = 0x2DE7E8u;
}
