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

// Function: sub_001DB380
// Address: 0x1db380 - 0x1db778
void sub_001DB380_0x1db380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB380_0x1db380");
#endif

    switch (ctx->pc) {
        case 0x1db380u: goto label_1db380;
        case 0x1db384u: goto label_1db384;
        case 0x1db388u: goto label_1db388;
        case 0x1db38cu: goto label_1db38c;
        case 0x1db390u: goto label_1db390;
        case 0x1db394u: goto label_1db394;
        case 0x1db398u: goto label_1db398;
        case 0x1db39cu: goto label_1db39c;
        case 0x1db3a0u: goto label_1db3a0;
        case 0x1db3a4u: goto label_1db3a4;
        case 0x1db3a8u: goto label_1db3a8;
        case 0x1db3acu: goto label_1db3ac;
        case 0x1db3b0u: goto label_1db3b0;
        case 0x1db3b4u: goto label_1db3b4;
        case 0x1db3b8u: goto label_1db3b8;
        case 0x1db3bcu: goto label_1db3bc;
        case 0x1db3c0u: goto label_1db3c0;
        case 0x1db3c4u: goto label_1db3c4;
        case 0x1db3c8u: goto label_1db3c8;
        case 0x1db3ccu: goto label_1db3cc;
        case 0x1db3d0u: goto label_1db3d0;
        case 0x1db3d4u: goto label_1db3d4;
        case 0x1db3d8u: goto label_1db3d8;
        case 0x1db3dcu: goto label_1db3dc;
        case 0x1db3e0u: goto label_1db3e0;
        case 0x1db3e4u: goto label_1db3e4;
        case 0x1db3e8u: goto label_1db3e8;
        case 0x1db3ecu: goto label_1db3ec;
        case 0x1db3f0u: goto label_1db3f0;
        case 0x1db3f4u: goto label_1db3f4;
        case 0x1db3f8u: goto label_1db3f8;
        case 0x1db3fcu: goto label_1db3fc;
        case 0x1db400u: goto label_1db400;
        case 0x1db404u: goto label_1db404;
        case 0x1db408u: goto label_1db408;
        case 0x1db40cu: goto label_1db40c;
        case 0x1db410u: goto label_1db410;
        case 0x1db414u: goto label_1db414;
        case 0x1db418u: goto label_1db418;
        case 0x1db41cu: goto label_1db41c;
        case 0x1db420u: goto label_1db420;
        case 0x1db424u: goto label_1db424;
        case 0x1db428u: goto label_1db428;
        case 0x1db42cu: goto label_1db42c;
        case 0x1db430u: goto label_1db430;
        case 0x1db434u: goto label_1db434;
        case 0x1db438u: goto label_1db438;
        case 0x1db43cu: goto label_1db43c;
        case 0x1db440u: goto label_1db440;
        case 0x1db444u: goto label_1db444;
        case 0x1db448u: goto label_1db448;
        case 0x1db44cu: goto label_1db44c;
        case 0x1db450u: goto label_1db450;
        case 0x1db454u: goto label_1db454;
        case 0x1db458u: goto label_1db458;
        case 0x1db45cu: goto label_1db45c;
        case 0x1db460u: goto label_1db460;
        case 0x1db464u: goto label_1db464;
        case 0x1db468u: goto label_1db468;
        case 0x1db46cu: goto label_1db46c;
        case 0x1db470u: goto label_1db470;
        case 0x1db474u: goto label_1db474;
        case 0x1db478u: goto label_1db478;
        case 0x1db47cu: goto label_1db47c;
        case 0x1db480u: goto label_1db480;
        case 0x1db484u: goto label_1db484;
        case 0x1db488u: goto label_1db488;
        case 0x1db48cu: goto label_1db48c;
        case 0x1db490u: goto label_1db490;
        case 0x1db494u: goto label_1db494;
        case 0x1db498u: goto label_1db498;
        case 0x1db49cu: goto label_1db49c;
        case 0x1db4a0u: goto label_1db4a0;
        case 0x1db4a4u: goto label_1db4a4;
        case 0x1db4a8u: goto label_1db4a8;
        case 0x1db4acu: goto label_1db4ac;
        case 0x1db4b0u: goto label_1db4b0;
        case 0x1db4b4u: goto label_1db4b4;
        case 0x1db4b8u: goto label_1db4b8;
        case 0x1db4bcu: goto label_1db4bc;
        case 0x1db4c0u: goto label_1db4c0;
        case 0x1db4c4u: goto label_1db4c4;
        case 0x1db4c8u: goto label_1db4c8;
        case 0x1db4ccu: goto label_1db4cc;
        case 0x1db4d0u: goto label_1db4d0;
        case 0x1db4d4u: goto label_1db4d4;
        case 0x1db4d8u: goto label_1db4d8;
        case 0x1db4dcu: goto label_1db4dc;
        case 0x1db4e0u: goto label_1db4e0;
        case 0x1db4e4u: goto label_1db4e4;
        case 0x1db4e8u: goto label_1db4e8;
        case 0x1db4ecu: goto label_1db4ec;
        case 0x1db4f0u: goto label_1db4f0;
        case 0x1db4f4u: goto label_1db4f4;
        case 0x1db4f8u: goto label_1db4f8;
        case 0x1db4fcu: goto label_1db4fc;
        case 0x1db500u: goto label_1db500;
        case 0x1db504u: goto label_1db504;
        case 0x1db508u: goto label_1db508;
        case 0x1db50cu: goto label_1db50c;
        case 0x1db510u: goto label_1db510;
        case 0x1db514u: goto label_1db514;
        case 0x1db518u: goto label_1db518;
        case 0x1db51cu: goto label_1db51c;
        case 0x1db520u: goto label_1db520;
        case 0x1db524u: goto label_1db524;
        case 0x1db528u: goto label_1db528;
        case 0x1db52cu: goto label_1db52c;
        case 0x1db530u: goto label_1db530;
        case 0x1db534u: goto label_1db534;
        case 0x1db538u: goto label_1db538;
        case 0x1db53cu: goto label_1db53c;
        case 0x1db540u: goto label_1db540;
        case 0x1db544u: goto label_1db544;
        case 0x1db548u: goto label_1db548;
        case 0x1db54cu: goto label_1db54c;
        case 0x1db550u: goto label_1db550;
        case 0x1db554u: goto label_1db554;
        case 0x1db558u: goto label_1db558;
        case 0x1db55cu: goto label_1db55c;
        case 0x1db560u: goto label_1db560;
        case 0x1db564u: goto label_1db564;
        case 0x1db568u: goto label_1db568;
        case 0x1db56cu: goto label_1db56c;
        case 0x1db570u: goto label_1db570;
        case 0x1db574u: goto label_1db574;
        case 0x1db578u: goto label_1db578;
        case 0x1db57cu: goto label_1db57c;
        case 0x1db580u: goto label_1db580;
        case 0x1db584u: goto label_1db584;
        case 0x1db588u: goto label_1db588;
        case 0x1db58cu: goto label_1db58c;
        case 0x1db590u: goto label_1db590;
        case 0x1db594u: goto label_1db594;
        case 0x1db598u: goto label_1db598;
        case 0x1db59cu: goto label_1db59c;
        case 0x1db5a0u: goto label_1db5a0;
        case 0x1db5a4u: goto label_1db5a4;
        case 0x1db5a8u: goto label_1db5a8;
        case 0x1db5acu: goto label_1db5ac;
        case 0x1db5b0u: goto label_1db5b0;
        case 0x1db5b4u: goto label_1db5b4;
        case 0x1db5b8u: goto label_1db5b8;
        case 0x1db5bcu: goto label_1db5bc;
        case 0x1db5c0u: goto label_1db5c0;
        case 0x1db5c4u: goto label_1db5c4;
        case 0x1db5c8u: goto label_1db5c8;
        case 0x1db5ccu: goto label_1db5cc;
        case 0x1db5d0u: goto label_1db5d0;
        case 0x1db5d4u: goto label_1db5d4;
        case 0x1db5d8u: goto label_1db5d8;
        case 0x1db5dcu: goto label_1db5dc;
        case 0x1db5e0u: goto label_1db5e0;
        case 0x1db5e4u: goto label_1db5e4;
        case 0x1db5e8u: goto label_1db5e8;
        case 0x1db5ecu: goto label_1db5ec;
        case 0x1db5f0u: goto label_1db5f0;
        case 0x1db5f4u: goto label_1db5f4;
        case 0x1db5f8u: goto label_1db5f8;
        case 0x1db5fcu: goto label_1db5fc;
        case 0x1db600u: goto label_1db600;
        case 0x1db604u: goto label_1db604;
        case 0x1db608u: goto label_1db608;
        case 0x1db60cu: goto label_1db60c;
        case 0x1db610u: goto label_1db610;
        case 0x1db614u: goto label_1db614;
        case 0x1db618u: goto label_1db618;
        case 0x1db61cu: goto label_1db61c;
        case 0x1db620u: goto label_1db620;
        case 0x1db624u: goto label_1db624;
        case 0x1db628u: goto label_1db628;
        case 0x1db62cu: goto label_1db62c;
        case 0x1db630u: goto label_1db630;
        case 0x1db634u: goto label_1db634;
        case 0x1db638u: goto label_1db638;
        case 0x1db63cu: goto label_1db63c;
        case 0x1db640u: goto label_1db640;
        case 0x1db644u: goto label_1db644;
        case 0x1db648u: goto label_1db648;
        case 0x1db64cu: goto label_1db64c;
        case 0x1db650u: goto label_1db650;
        case 0x1db654u: goto label_1db654;
        case 0x1db658u: goto label_1db658;
        case 0x1db65cu: goto label_1db65c;
        case 0x1db660u: goto label_1db660;
        case 0x1db664u: goto label_1db664;
        case 0x1db668u: goto label_1db668;
        case 0x1db66cu: goto label_1db66c;
        case 0x1db670u: goto label_1db670;
        case 0x1db674u: goto label_1db674;
        case 0x1db678u: goto label_1db678;
        case 0x1db67cu: goto label_1db67c;
        case 0x1db680u: goto label_1db680;
        case 0x1db684u: goto label_1db684;
        case 0x1db688u: goto label_1db688;
        case 0x1db68cu: goto label_1db68c;
        case 0x1db690u: goto label_1db690;
        case 0x1db694u: goto label_1db694;
        case 0x1db698u: goto label_1db698;
        case 0x1db69cu: goto label_1db69c;
        case 0x1db6a0u: goto label_1db6a0;
        case 0x1db6a4u: goto label_1db6a4;
        case 0x1db6a8u: goto label_1db6a8;
        case 0x1db6acu: goto label_1db6ac;
        case 0x1db6b0u: goto label_1db6b0;
        case 0x1db6b4u: goto label_1db6b4;
        case 0x1db6b8u: goto label_1db6b8;
        case 0x1db6bcu: goto label_1db6bc;
        case 0x1db6c0u: goto label_1db6c0;
        case 0x1db6c4u: goto label_1db6c4;
        case 0x1db6c8u: goto label_1db6c8;
        case 0x1db6ccu: goto label_1db6cc;
        case 0x1db6d0u: goto label_1db6d0;
        case 0x1db6d4u: goto label_1db6d4;
        case 0x1db6d8u: goto label_1db6d8;
        case 0x1db6dcu: goto label_1db6dc;
        case 0x1db6e0u: goto label_1db6e0;
        case 0x1db6e4u: goto label_1db6e4;
        case 0x1db6e8u: goto label_1db6e8;
        case 0x1db6ecu: goto label_1db6ec;
        case 0x1db6f0u: goto label_1db6f0;
        case 0x1db6f4u: goto label_1db6f4;
        case 0x1db6f8u: goto label_1db6f8;
        case 0x1db6fcu: goto label_1db6fc;
        case 0x1db700u: goto label_1db700;
        case 0x1db704u: goto label_1db704;
        case 0x1db708u: goto label_1db708;
        case 0x1db70cu: goto label_1db70c;
        case 0x1db710u: goto label_1db710;
        case 0x1db714u: goto label_1db714;
        case 0x1db718u: goto label_1db718;
        case 0x1db71cu: goto label_1db71c;
        case 0x1db720u: goto label_1db720;
        case 0x1db724u: goto label_1db724;
        case 0x1db728u: goto label_1db728;
        case 0x1db72cu: goto label_1db72c;
        case 0x1db730u: goto label_1db730;
        case 0x1db734u: goto label_1db734;
        case 0x1db738u: goto label_1db738;
        case 0x1db73cu: goto label_1db73c;
        case 0x1db740u: goto label_1db740;
        case 0x1db744u: goto label_1db744;
        case 0x1db748u: goto label_1db748;
        case 0x1db74cu: goto label_1db74c;
        case 0x1db750u: goto label_1db750;
        case 0x1db754u: goto label_1db754;
        case 0x1db758u: goto label_1db758;
        case 0x1db75cu: goto label_1db75c;
        case 0x1db760u: goto label_1db760;
        case 0x1db764u: goto label_1db764;
        case 0x1db768u: goto label_1db768;
        case 0x1db76cu: goto label_1db76c;
        case 0x1db770u: goto label_1db770;
        case 0x1db774u: goto label_1db774;
        default: break;
    }

    ctx->pc = 0x1db380u;

label_1db380:
    // 0x1db380: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1db380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1db384:
    // 0x1db384: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1db384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1db388:
    // 0x1db388: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1db388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1db38c:
    // 0x1db38c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1db38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1db390:
    // 0x1db390: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1db390u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db394:
    // 0x1db394: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1db394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1db398:
    // 0x1db398: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1db398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1db39c:
    // 0x1db39c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1db3a0:
    // 0x1db3a0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1db3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1db3a4:
    // 0x1db3a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1db3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1db3a8:
    // 0x1db3a8: 0xa4800028  sh          $zero, 0x28($a0)
    ctx->pc = 0x1db3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 0));
label_1db3ac:
    // 0x1db3ac: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1db3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1db3b0:
    // 0x1db3b0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1db3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_1db3b4:
    // 0x1db3b4: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1db3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_1db3b8:
    // 0x1db3b8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1db3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_1db3bc:
    // 0x1db3bc: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1db3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_1db3c0:
    // 0x1db3c0: 0xac90002c  sw          $s0, 0x2C($a0)
    ctx->pc = 0x1db3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 16));
label_1db3c4:
    // 0x1db3c4: 0xa488003e  sh          $t0, 0x3E($a0)
    ctx->pc = 0x1db3c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 62), (uint16_t)GPR_U32(ctx, 8));
label_1db3c8:
    // 0x1db3c8: 0xa489003c  sh          $t1, 0x3C($a0)
    ctx->pc = 0x1db3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 9));
label_1db3cc:
    // 0x1db3cc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1db3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1db3d0:
    // 0x1db3d0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1db3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1db3d4:
    // 0x1db3d4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1db3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_1db3d8:
    // 0x1db3d8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1db3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1db3dc:
    // 0x1db3dc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1db3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1db3e0:
    // 0x1db3e0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1db3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_1db3e4:
    // 0x1db3e4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1db3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1db3e8:
    // 0x1db3e8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1db3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_1db3ec:
    // 0x1db3ec: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x1db3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
label_1db3f0:
    // 0x1db3f0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1db3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1db3f4:
    // 0x1db3f4: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x1db3f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1db3f8:
    // 0x1db3f8: 0xc076ee4  jal         func_1DBB90
label_1db3fc:
    if (ctx->pc == 0x1DB3FCu) {
        ctx->pc = 0x1DB3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3F8u;
        // 0x1db3fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB400u;
        goto label_1db400;
    }
    ctx->pc = 0x1DB3F8u;
    SET_GPR_U32(ctx, 31, 0x1DB400u);
    ctx->pc = 0x1DB3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3F8u;
    // 0x1db3fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB90u, 0x1DB3F8u, 0x1DB400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB400u;
label_1db400:
    // 0x1db400: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x1db400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1db404:
    // 0x1db404: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1db404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1db408:
    // 0x1db408: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x1db408u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
label_1db40c:
    // 0x1db40c: 0xc0741a4  jal         func_1D0690
label_1db410:
    if (ctx->pc == 0x1DB410u) {
        ctx->pc = 0x1DB410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB40Cu;
        // 0x1db410: 0x8e840030  lw          $a0, 0x30($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB414u;
        goto label_1db414;
    }
    ctx->pc = 0x1DB40Cu;
    SET_GPR_U32(ctx, 31, 0x1DB414u);
    ctx->pc = 0x1DB410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB40Cu;
    // 0x1db410: 0x8e840030  lw          $a0, 0x30($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x1DB40Cu, 0x1DB414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB414u;
label_1db414:
    // 0x1db414: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x1db414u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
label_1db418:
    // 0x1db418: 0xae820038  sw          $v0, 0x38($s4)
    ctx->pc = 0x1db418u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
label_1db41c:
    // 0x1db41c: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x1db41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_1db420:
    // 0x1db420: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1db424:
    if (ctx->pc == 0x1DB424u) {
        ctx->pc = 0x1DB424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB420u;
        // 0x1db424: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB428u;
        goto label_1db428;
    }
    ctx->pc = 0x1DB420u;
    {
        const bool branch_taken_0x1db420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB420u;
        // 0x1db424: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db420) {
            ctx->pc = 0x1DB438u;
            goto label_1db438;
        }
    }
    ctx->pc = 0x1DB428u;
label_1db428:
    // 0x1db428: 0xc076e10  jal         func_1DB840
label_1db42c:
    if (ctx->pc == 0x1DB42Cu) {
        ctx->pc = 0x1DB430u;
        goto label_1db430;
    }
    ctx->pc = 0x1DB428u;
    SET_GPR_U32(ctx, 31, 0x1DB430u);
    ctx->pc = 0x1DB840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB840u, 0x1DB428u, 0x1DB430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB430u;
label_1db430:
    // 0x1db430: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_1db434:
    if (ctx->pc == 0x1DB434u) {
        ctx->pc = 0x1DB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB430u;
        // 0x1db434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB438u;
        goto label_1db438;
    }
    ctx->pc = 0x1DB430u;
    {
        const bool branch_taken_0x1db430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB430u;
        // 0x1db434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db430) {
            ctx->pc = 0x1DB758u;
            goto label_1db758;
        }
    }
    ctx->pc = 0x1DB438u;
label_1db438:
    // 0x1db438: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x1db438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1db43c:
    // 0x1db43c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1db43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1db440:
    // 0x1db440: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1db444:
    // 0x1db444: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1db444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1db448:
    // 0x1db448: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_1db44c:
    if (ctx->pc == 0x1DB44Cu) {
        ctx->pc = 0x1DB44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB448u;
        // 0x1db44c: 0x24510050  addiu       $s1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB450u;
        goto label_1db450;
    }
    ctx->pc = 0x1DB448u;
    {
        const bool branch_taken_0x1db448 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB448u;
        // 0x1db44c: 0x24510050  addiu       $s1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db448) {
            ctx->pc = 0x1DB460u;
            goto label_1db460;
        }
    }
    ctx->pc = 0x1DB450u;
label_1db450:
    // 0x1db450: 0xc07bc20  jal         func_1EF080
label_1db454:
    if (ctx->pc == 0x1DB454u) {
        ctx->pc = 0x1DB454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB450u;
        // 0x1db454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB458u;
        goto label_1db458;
    }
    ctx->pc = 0x1DB450u;
    SET_GPR_U32(ctx, 31, 0x1DB458u);
    ctx->pc = 0x1DB454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB450u;
    // 0x1db454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF080u, 0x1DB450u, 0x1DB458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB458u;
label_1db458:
    // 0x1db458: 0x10000002  b           . + 4 + (0x2 << 2)
label_1db45c:
    if (ctx->pc == 0x1DB45Cu) {
        ctx->pc = 0x1DB45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB458u;
        // 0x1db45c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB460u;
        goto label_1db460;
    }
    ctx->pc = 0x1DB458u;
    {
        const bool branch_taken_0x1db458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB458u;
        // 0x1db45c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db458) {
            ctx->pc = 0x1DB464u;
            goto label_1db464;
        }
    }
    ctx->pc = 0x1DB460u;
label_1db460:
    // 0x1db460: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1db460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1db464:
    // 0x1db464: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1db464u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1db468:
    // 0x1db468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db46c:
    // 0x1db46c: 0x26850034  addiu       $a1, $s4, 0x34
    ctx->pc = 0x1db46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
label_1db470:
    // 0x1db470: 0xc07868c  jal         func_1E1A30
label_1db474:
    if (ctx->pc == 0x1DB474u) {
        ctx->pc = 0x1DB474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB470u;
        // 0x1db474: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB478u;
        goto label_1db478;
    }
    ctx->pc = 0x1DB470u;
    SET_GPR_U32(ctx, 31, 0x1DB478u);
    ctx->pc = 0x1DB474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB470u;
    // 0x1db474: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A30u, 0x1DB470u, 0x1DB478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB478u;
label_1db478:
    // 0x1db478: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x1db478u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_1db47c:
    // 0x1db47c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1db47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1db480:
    // 0x1db480: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1db484:
    if (ctx->pc == 0x1DB484u) {
        ctx->pc = 0x1DB484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB480u;
        // 0x1db484: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB488u;
        goto label_1db488;
    }
    ctx->pc = 0x1DB480u;
    {
        const bool branch_taken_0x1db480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB480u;
        // 0x1db484: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db480) {
            ctx->pc = 0x1DB498u;
            goto label_1db498;
        }
    }
    ctx->pc = 0x1DB488u;
label_1db488:
    // 0x1db488: 0xc076e10  jal         func_1DB840
label_1db48c:
    if (ctx->pc == 0x1DB48Cu) {
        ctx->pc = 0x1DB490u;
        goto label_1db490;
    }
    ctx->pc = 0x1DB488u;
    SET_GPR_U32(ctx, 31, 0x1DB490u);
    ctx->pc = 0x1DB840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB840u, 0x1DB488u, 0x1DB490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB490u;
label_1db490:
    // 0x1db490: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_1db494:
    if (ctx->pc == 0x1DB494u) {
        ctx->pc = 0x1DB494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB490u;
        // 0x1db494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB498u;
        goto label_1db498;
    }
    ctx->pc = 0x1DB490u;
    {
        const bool branch_taken_0x1db490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB490u;
        // 0x1db494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db490) {
            ctx->pc = 0x1DB758u;
            goto label_1db758;
        }
    }
    ctx->pc = 0x1DB498u;
label_1db498:
    // 0x1db498: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x1db498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1db49c:
    // 0x1db49c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1db49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1db4a0:
    // 0x1db4a0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1db4a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1db4a4:
    // 0x1db4a4: 0x102000aa  beqz        $at, . + 4 + (0xAA << 2)
label_1db4a8:
    if (ctx->pc == 0x1DB4A8u) {
        ctx->pc = 0x1DB4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4A4u;
        // 0x1db4a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB4ACu;
        goto label_1db4ac;
    }
    ctx->pc = 0x1DB4A4u;
    {
        const bool branch_taken_0x1db4a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4A4u;
        // 0x1db4a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db4a4) {
            ctx->pc = 0x1DB750u;
            goto label_1db750;
        }
    }
    ctx->pc = 0x1DB4ACu;
label_1db4ac:
    // 0x1db4ac: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1db4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1db4b0:
    // 0x1db4b0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1db4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1db4b4:
    // 0x1db4b4: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x1db4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1db4b8:
    // 0x1db4b8: 0x26880034  addiu       $t0, $s4, 0x34
    ctx->pc = 0x1db4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
label_1db4bc:
    // 0x1db4bc: 0x8e86002c  lw          $a2, 0x2C($s4)
    ctx->pc = 0x1db4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_1db4c0:
    // 0x1db4c0: 0x26890030  addiu       $t1, $s4, 0x30
    ctx->pc = 0x1db4c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_1db4c4:
    // 0x1db4c4: 0x8687003c  lh          $a3, 0x3C($s4)
    ctx->pc = 0x1db4c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 60)));
label_1db4c8:
    // 0x1db4c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1db4cc:
    // 0x1db4cc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1db4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1db4d0:
    // 0x1db4d0: 0xc076f24  jal         func_1DBC90
label_1db4d4:
    if (ctx->pc == 0x1DB4D4u) {
        ctx->pc = 0x1DB4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4D0u;
        // 0x1db4d4: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB4D8u;
        goto label_1db4d8;
    }
    ctx->pc = 0x1DB4D0u;
    SET_GPR_U32(ctx, 31, 0x1DB4D8u);
    ctx->pc = 0x1DB4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB4D0u;
    // 0x1db4d4: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBC90u, 0x1DB4D0u, 0x1DB4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB4D8u;
label_1db4d8:
    // 0x1db4d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1db4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1db4dc:
    // 0x1db4dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1db4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db4e0:
    // 0x1db4e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1db4e4:
    if (ctx->pc == 0x1DB4E4u) {
        ctx->pc = 0x1DB4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4E0u;
        // 0x1db4e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB4E8u;
        goto label_1db4e8;
    }
    ctx->pc = 0x1DB4E0u;
    {
        const bool branch_taken_0x1db4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4E0u;
        // 0x1db4e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db4e0) {
            ctx->pc = 0x1DB4F8u;
            goto label_1db4f8;
        }
    }
    ctx->pc = 0x1DB4E8u;
label_1db4e8:
    // 0x1db4e8: 0xc076e10  jal         func_1DB840
label_1db4ec:
    if (ctx->pc == 0x1DB4ECu) {
        ctx->pc = 0x1DB4F0u;
        goto label_1db4f0;
    }
    ctx->pc = 0x1DB4E8u;
    SET_GPR_U32(ctx, 31, 0x1DB4F0u);
    ctx->pc = 0x1DB840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB840u, 0x1DB4E8u, 0x1DB4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB4F0u;
label_1db4f0:
    // 0x1db4f0: 0x10000099  b           . + 4 + (0x99 << 2)
label_1db4f4:
    if (ctx->pc == 0x1DB4F4u) {
        ctx->pc = 0x1DB4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4F0u;
        // 0x1db4f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB4F8u;
        goto label_1db4f8;
    }
    ctx->pc = 0x1DB4F0u;
    {
        const bool branch_taken_0x1db4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4F0u;
        // 0x1db4f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db4f0) {
            ctx->pc = 0x1DB758u;
            goto label_1db758;
        }
    }
    ctx->pc = 0x1DB4F8u;
label_1db4f8:
    // 0x1db4f8: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1db4f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1db4fc:
    // 0x1db4fc: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x1db4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
label_1db500:
    // 0x1db500: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x1db500u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1db504:
    // 0x1db504: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
label_1db508:
    if (ctx->pc == 0x1DB508u) {
        ctx->pc = 0x1DB508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB504u;
        // 0x1db508: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB50Cu;
        goto label_1db50c;
    }
    ctx->pc = 0x1DB504u;
    {
        const bool branch_taken_0x1db504 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB504u;
        // 0x1db508: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db504) {
            ctx->pc = 0x1DB730u;
            goto label_1db730;
        }
    }
    ctx->pc = 0x1DB50Cu;
label_1db50c:
    // 0x1db50c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1db510:
    // 0x1db510: 0x24635c90  addiu       $v1, $v1, 0x5C90
    ctx->pc = 0x1db510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23696));
label_1db514:
    // 0x1db514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db518:
    // 0x1db518: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1db518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db51c:
    // 0x1db51c: 0x400008  jr          $v0
label_1db520:
    if (ctx->pc == 0x1DB520u) {
        ctx->pc = 0x1DB524u;
        goto label_1db524;
    }
    ctx->pc = 0x1DB51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB528u: goto label_1db528;
            case 0x1DB598u: goto label_1db598;
            case 0x1DB608u: goto label_1db608;
            case 0x1DB678u: goto label_1db678;
            case 0x1DB6A8u: goto label_1db6a8;
            case 0x1DB6D8u: goto label_1db6d8;
            case 0x1DB708u: goto label_1db708;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB51Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DB524u;
label_1db524:
    // 0x1db524: 0x0  nop
    ctx->pc = 0x1db524u;
    // NOP
label_1db528:
    // 0x1db528: 0x82450001  lb          $a1, 0x1($s2)
    ctx->pc = 0x1db528u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_1db52c:
    // 0x1db52c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1db52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1db530:
    // 0x1db530: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
label_1db534:
    if (ctx->pc == 0x1DB534u) {
        ctx->pc = 0x1DB538u;
        goto label_1db538;
    }
    ctx->pc = 0x1DB530u;
    {
        const bool branch_taken_0x1db530 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db530) {
            ctx->pc = 0x1DB568u;
            goto label_1db568;
        }
    }
    ctx->pc = 0x1DB538u;
label_1db538:
    // 0x1db538: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1db538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1db53c:
    // 0x1db53c: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1db53cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1db540:
    // 0x1db540: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1db540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1db544:
    // 0x1db544: 0x320f809  jalr        $t9
label_1db548:
    if (ctx->pc == 0x1DB548u) {
        ctx->pc = 0x1DB54Cu;
        goto label_1db54c;
    }
    ctx->pc = 0x1DB544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB54Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB544u, 0x1DB54Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB54Cu;
label_1db54c:
    // 0x1db54c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1db54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db550:
    // 0x1db550: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1db550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db554:
    // 0x1db554: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1db554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1db558:
    // 0x1db558: 0x320f809  jalr        $t9
label_1db55c:
    if (ctx->pc == 0x1DB55Cu) {
        ctx->pc = 0x1DB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB558u;
        // 0x1db55c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB560u;
        goto label_1db560;
    }
    ctx->pc = 0x1DB558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB560u);
        ctx->pc = 0x1DB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB558u;
        // 0x1db55c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB558u, 0x1DB560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB560u;
label_1db560:
    // 0x1db560: 0x10000073  b           . + 4 + (0x73 << 2)
label_1db564:
    if (ctx->pc == 0x1DB564u) {
        ctx->pc = 0x1DB568u;
        goto label_1db568;
    }
    ctx->pc = 0x1DB560u;
    {
        const bool branch_taken_0x1db560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db560) {
            ctx->pc = 0x1DB730u;
            goto label_1db730;
        }
    }
    ctx->pc = 0x1DB568u;
label_1db568:
    // 0x1db568: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1db568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1db56c:
    // 0x1db56c: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1db56cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1db570:
    // 0x1db570: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1db570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1db574:
    // 0x1db574: 0x320f809  jalr        $t9
label_1db578:
    if (ctx->pc == 0x1DB578u) {
        ctx->pc = 0x1DB57Cu;
        goto label_1db57c;
    }
    ctx->pc = 0x1DB574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB57Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB574u, 0x1DB57Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB57Cu;
label_1db57c:
    // 0x1db57c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1db57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db580:
    // 0x1db580: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1db580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db584:
    // 0x1db584: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1db584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1db588:
    // 0x1db588: 0x320f809  jalr        $t9
label_1db58c:
    if (ctx->pc == 0x1DB58Cu) {
        ctx->pc = 0x1DB58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB588u;
        // 0x1db58c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB590u;
        goto label_1db590;
    }
    ctx->pc = 0x1DB588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB590u);
        ctx->pc = 0x1DB58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB588u;
        // 0x1db58c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB588u, 0x1DB590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB590u;
label_1db590:
    // 0x1db590: 0x10000067  b           . + 4 + (0x67 << 2)
label_1db594:
    if (ctx->pc == 0x1DB594u) {
        ctx->pc = 0x1DB598u;
        goto label_1db598;
    }
    ctx->pc = 0x1DB590u;
    {
        const bool branch_taken_0x1db590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db590) {
            ctx->pc = 0x1DB730u;
            goto label_1db730;
        }
    }
    ctx->pc = 0x1DB598u;
label_1db598:
    // 0x1db598: 0x82450001  lb          $a1, 0x1($s2)
    ctx->pc = 0x1db598u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_1db59c:
    // 0x1db59c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1db59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1db5a0:
    // 0x1db5a0: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
label_1db5a4:
    if (ctx->pc == 0x1DB5A4u) {
        ctx->pc = 0x1DB5A8u;
        goto label_1db5a8;
    }
    ctx->pc = 0x1DB5A0u;
    {
        const bool branch_taken_0x1db5a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db5a0) {
            ctx->pc = 0x1DB5D8u;
            goto label_1db5d8;
        }
    }
    ctx->pc = 0x1DB5A8u;
label_1db5a8:
    // 0x1db5a8: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1db5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1db5ac:
    // 0x1db5ac: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1db5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1db5b0:
    // 0x1db5b0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1db5b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1db5b4:
    // 0x1db5b4: 0x320f809  jalr        $t9
label_1db5b8:
    if (ctx->pc == 0x1DB5B8u) {
        ctx->pc = 0x1DB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5B4u;
        // 0x1db5b8: 0x96450002  lhu         $a1, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB5BCu;
        goto label_1db5bc;
    }
    ctx->pc = 0x1DB5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB5BCu);
        ctx->pc = 0x1DB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5B4u;
        // 0x1db5b8: 0x96450002  lhu         $a1, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB5B4u, 0x1DB5BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB5BCu;
label_1db5bc:
    // 0x1db5bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1db5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db5c0:
    // 0x1db5c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1db5c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db5c4:
    // 0x1db5c4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1db5c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1db5c8:
    // 0x1db5c8: 0x320f809  jalr        $t9
label_1db5cc:
    if (ctx->pc == 0x1DB5CCu) {
        ctx->pc = 0x1DB5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5C8u;
        // 0x1db5cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB5D0u;
        goto label_1db5d0;
    }
    ctx->pc = 0x1DB5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB5D0u);
        ctx->pc = 0x1DB5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5C8u;
        // 0x1db5cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB5C8u, 0x1DB5D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB5D0u;
label_1db5d0:
    // 0x1db5d0: 0x10000057  b           . + 4 + (0x57 << 2)
label_1db5d4:
    if (ctx->pc == 0x1DB5D4u) {
        ctx->pc = 0x1DB5D8u;
        goto label_1db5d8;
    }
    ctx->pc = 0x1DB5D0u;
    {
        const bool branch_taken_0x1db5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db5d0) {
            ctx->pc = 0x1DB730u;
            goto label_1db730;
        }
    }
    ctx->pc = 0x1DB5D8u;
label_1db5d8:
    // 0x1db5d8: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1db5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1db5dc:
    // 0x1db5dc: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1db5dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1db5e0:
    // 0x1db5e0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1db5e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1db5e4:
    // 0x1db5e4: 0x320f809  jalr        $t9
label_1db5e8:
    if (ctx->pc == 0x1DB5E8u) {
        ctx->pc = 0x1DB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5E4u;
        // 0x1db5e8: 0x96460002  lhu         $a2, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB5ECu;
        goto label_1db5ec;
    }
    ctx->pc = 0x1DB5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB5ECu);
        ctx->pc = 0x1DB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5E4u;
        // 0x1db5e8: 0x96460002  lhu         $a2, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB5E4u, 0x1DB5ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB5ECu;
label_1db5ec:
    // 0x1db5ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1db5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db5f0:
    // 0x1db5f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1db5f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db5f4:
    // 0x1db5f4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1db5f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1db5f8:
    // 0x1db5f8: 0x320f809  jalr        $t9
label_1db5fc:
    if (ctx->pc == 0x1DB5FCu) {
        ctx->pc = 0x1DB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5F8u;
        // 0x1db5fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB600u;
        goto label_1db600;
    }
    ctx->pc = 0x1DB5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB600u);
        ctx->pc = 0x1DB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5F8u;
        // 0x1db5fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB5F8u, 0x1DB600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB600u;
label_1db600:
    // 0x1db600: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1db604:
    if (ctx->pc == 0x1DB604u) {
        ctx->pc = 0x1DB608u;
        goto label_1db608;
    }
    ctx->pc = 0x1DB600u;
    {
        const bool branch_taken_0x1db600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db600) {
            ctx->pc = 0x1DB730u;
            goto label_1db730;
        }
    }
    ctx->pc = 0x1DB608u;
label_1db608:
    // 0x1db608: 0x82450001  lb          $a1, 0x1($s2)
    ctx->pc = 0x1db608u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_1db60c:
    // 0x1db60c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1db60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1db610:
    // 0x1db610: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
label_1db614:
    if (ctx->pc == 0x1DB614u) {
        ctx->pc = 0x1DB618u;
        goto label_1db618;
    }
    ctx->pc = 0x1DB610u;
    {
        const bool branch_taken_0x1db610 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db610) {
            ctx->pc = 0x1DB648u;
            goto label_1db648;
        }
    }
    ctx->pc = 0x1DB618u;
label_1db618:
    // 0x1db618: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1db618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1db61c:
    // 0x1db61c: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1db61cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1db620:
    // 0x1db620: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1db620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1db624:
    // 0x1db624: 0x320f809  jalr        $t9
label_1db628:
    if (ctx->pc == 0x1DB628u) {
        ctx->pc = 0x1DB628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB624u;
        // 0x1db628: 0x96450002  lhu         $a1, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB62Cu;
        goto label_1db62c;
    }
    ctx->pc = 0x1DB624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB62Cu);
        ctx->pc = 0x1DB628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB624u;
        // 0x1db628: 0x96450002  lhu         $a1, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB624u, 0x1DB62Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB62Cu;
label_1db62c:
    // 0x1db62c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1db62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db630:
    // 0x1db630: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1db630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db634:
    // 0x1db634: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1db634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1db638:
    // 0x1db638: 0x320f809  jalr        $t9
label_1db63c:
    if (ctx->pc == 0x1DB63Cu) {
        ctx->pc = 0x1DB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB638u;
        // 0x1db63c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB640u;
        goto label_1db640;
    }
    ctx->pc = 0x1DB638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB640u);
        ctx->pc = 0x1DB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB638u;
        // 0x1db63c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB638u, 0x1DB640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB640u;
label_1db640:
    // 0x1db640: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1db644:
    if (ctx->pc == 0x1DB644u) {
        ctx->pc = 0x1DB648u;
        goto label_1db648;
    }
    ctx->pc = 0x1DB640u;
    {
        const bool branch_taken_0x1db640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db640) {
            ctx->pc = 0x1DB730u;
            goto label_1db730;
        }
    }
    ctx->pc = 0x1DB648u;
label_1db648:
    // 0x1db648: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1db648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1db64c:
    // 0x1db64c: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1db64cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1db650:
    // 0x1db650: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1db650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1db654:
    // 0x1db654: 0x320f809  jalr        $t9
label_1db658:
    if (ctx->pc == 0x1DB658u) {
        ctx->pc = 0x1DB658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB654u;
        // 0x1db658: 0x96460002  lhu         $a2, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB65Cu;
        goto label_1db65c;
    }
    ctx->pc = 0x1DB654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB65Cu);
        ctx->pc = 0x1DB658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB654u;
        // 0x1db658: 0x96460002  lhu         $a2, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB654u, 0x1DB65Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB65Cu;
label_1db65c:
    // 0x1db65c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1db65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db660:
    // 0x1db660: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1db660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db664:
    // 0x1db664: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1db664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1db668:
    // 0x1db668: 0x320f809  jalr        $t9
label_1db66c:
    if (ctx->pc == 0x1DB66Cu) {
        ctx->pc = 0x1DB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB668u;
        // 0x1db66c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB670u;
        goto label_1db670;
    }
    ctx->pc = 0x1DB668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB670u);
        ctx->pc = 0x1DB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB668u;
        // 0x1db66c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB668u, 0x1DB670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB670u;
label_1db670:
    // 0x1db670: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1db674:
    if (ctx->pc == 0x1DB674u) {
        ctx->pc = 0x1DB678u;
        goto label_1db678;
    }
    ctx->pc = 0x1DB670u;
    {
        const bool branch_taken_0x1db670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db670) {
            ctx->pc = 0x1DB730u;
            goto label_1db730;
        }
    }
    ctx->pc = 0x1DB678u;
label_1db678:
    // 0x1db678: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1db678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1db67c:
    // 0x1db67c: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1db67cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1db680:
    // 0x1db680: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1db680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1db684:
    // 0x1db684: 0x320f809  jalr        $t9
label_1db688:
    if (ctx->pc == 0x1DB688u) {
        ctx->pc = 0x1DB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB684u;
        // 0x1db688: 0x96450002  lhu         $a1, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB68Cu;
        goto label_1db68c;
    }
    ctx->pc = 0x1DB684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB68Cu);
        ctx->pc = 0x1DB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB684u;
        // 0x1db688: 0x96450002  lhu         $a1, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB684u, 0x1DB68Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB68Cu;
label_1db68c:
    // 0x1db68c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1db68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db690:
    // 0x1db690: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1db690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db694:
    // 0x1db694: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1db694u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1db698:
    // 0x1db698: 0x320f809  jalr        $t9
label_1db69c:
    if (ctx->pc == 0x1DB69Cu) {
        ctx->pc = 0x1DB69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB698u;
        // 0x1db69c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB6A0u;
        goto label_1db6a0;
    }
    ctx->pc = 0x1DB698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB6A0u);
        ctx->pc = 0x1DB69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB698u;
        // 0x1db69c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB698u, 0x1DB6A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB6A0u;
label_1db6a0:
    // 0x1db6a0: 0x10000023  b           . + 4 + (0x23 << 2)
label_1db6a4:
    if (ctx->pc == 0x1DB6A4u) {
        ctx->pc = 0x1DB6A8u;
        goto label_1db6a8;
    }
    ctx->pc = 0x1DB6A0u;
    {
        const bool branch_taken_0x1db6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db6a0) {
            ctx->pc = 0x1DB730u;
            goto label_1db730;
        }
    }
    ctx->pc = 0x1DB6A8u;
label_1db6a8:
    // 0x1db6a8: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1db6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1db6ac:
    // 0x1db6ac: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1db6acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1db6b0:
    // 0x1db6b0: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x1db6b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_1db6b4:
    // 0x1db6b4: 0x320f809  jalr        $t9
label_1db6b8:
    if (ctx->pc == 0x1DB6B8u) {
        ctx->pc = 0x1DB6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6B4u;
        // 0x1db6b8: 0x96450002  lhu         $a1, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB6BCu;
        goto label_1db6bc;
    }
    ctx->pc = 0x1DB6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB6BCu);
        ctx->pc = 0x1DB6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6B4u;
        // 0x1db6b8: 0x96450002  lhu         $a1, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB6B4u, 0x1DB6BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB6BCu;
label_1db6bc:
    // 0x1db6bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1db6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db6c0:
    // 0x1db6c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1db6c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db6c4:
    // 0x1db6c4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1db6c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1db6c8:
    // 0x1db6c8: 0x320f809  jalr        $t9
label_1db6cc:
    if (ctx->pc == 0x1DB6CCu) {
        ctx->pc = 0x1DB6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6C8u;
        // 0x1db6cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB6D0u;
        goto label_1db6d0;
    }
    ctx->pc = 0x1DB6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB6D0u);
        ctx->pc = 0x1DB6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6C8u;
        // 0x1db6cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB6C8u, 0x1DB6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB6D0u;
label_1db6d0:
    // 0x1db6d0: 0x10000017  b           . + 4 + (0x17 << 2)
label_1db6d4:
    if (ctx->pc == 0x1DB6D4u) {
        ctx->pc = 0x1DB6D8u;
        goto label_1db6d8;
    }
    ctx->pc = 0x1DB6D0u;
    {
        const bool branch_taken_0x1db6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db6d0) {
            ctx->pc = 0x1DB730u;
            goto label_1db730;
        }
    }
    ctx->pc = 0x1DB6D8u;
label_1db6d8:
    // 0x1db6d8: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1db6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1db6dc:
    // 0x1db6dc: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1db6dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1db6e0:
    // 0x1db6e0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1db6e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1db6e4:
    // 0x1db6e4: 0x320f809  jalr        $t9
label_1db6e8:
    if (ctx->pc == 0x1DB6E8u) {
        ctx->pc = 0x1DB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6E4u;
        // 0x1db6e8: 0x96450002  lhu         $a1, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB6ECu;
        goto label_1db6ec;
    }
    ctx->pc = 0x1DB6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB6ECu);
        ctx->pc = 0x1DB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6E4u;
        // 0x1db6e8: 0x96450002  lhu         $a1, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB6E4u, 0x1DB6ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB6ECu;
label_1db6ec:
    // 0x1db6ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1db6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db6f0:
    // 0x1db6f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1db6f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db6f4:
    // 0x1db6f4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1db6f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1db6f8:
    // 0x1db6f8: 0x320f809  jalr        $t9
label_1db6fc:
    if (ctx->pc == 0x1DB6FCu) {
        ctx->pc = 0x1DB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6F8u;
        // 0x1db6fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB700u;
        goto label_1db700;
    }
    ctx->pc = 0x1DB6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB700u);
        ctx->pc = 0x1DB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6F8u;
        // 0x1db6fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB6F8u, 0x1DB700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB700u;
label_1db700:
    // 0x1db700: 0x1000000b  b           . + 4 + (0xB << 2)
label_1db704:
    if (ctx->pc == 0x1DB704u) {
        ctx->pc = 0x1DB708u;
        goto label_1db708;
    }
    ctx->pc = 0x1DB700u;
    {
        const bool branch_taken_0x1db700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db700) {
            ctx->pc = 0x1DB730u;
            goto label_1db730;
        }
    }
    ctx->pc = 0x1DB708u;
label_1db708:
    // 0x1db708: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1db708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1db70c:
    // 0x1db70c: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1db70cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1db710:
    // 0x1db710: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x1db710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_1db714:
    // 0x1db714: 0x320f809  jalr        $t9
label_1db718:
    if (ctx->pc == 0x1DB718u) {
        ctx->pc = 0x1DB718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB714u;
        // 0x1db718: 0x96450002  lhu         $a1, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB71Cu;
        goto label_1db71c;
    }
    ctx->pc = 0x1DB714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB71Cu);
        ctx->pc = 0x1DB718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB714u;
        // 0x1db718: 0x96450002  lhu         $a1, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB714u, 0x1DB71Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB71Cu;
label_1db71c:
    // 0x1db71c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1db71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db720:
    // 0x1db720: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1db720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db724:
    // 0x1db724: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1db724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1db728:
    // 0x1db728: 0x320f809  jalr        $t9
label_1db72c:
    if (ctx->pc == 0x1DB72Cu) {
        ctx->pc = 0x1DB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB728u;
        // 0x1db72c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB730u;
        goto label_1db730;
    }
    ctx->pc = 0x1DB728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB730u);
        ctx->pc = 0x1DB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB728u;
        // 0x1db72c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB728u, 0x1DB730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB730u;
label_1db730:
    // 0x1db730: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x1db730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1db734:
    // 0x1db734: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1db734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1db738:
    // 0x1db738: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1db738u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1db73c:
    // 0x1db73c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1db73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1db740:
    // 0x1db740: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1db740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1db744:
    // 0x1db744: 0x1440ff5a  bnez        $v0, . + 4 + (-0xA6 << 2)
label_1db748:
    if (ctx->pc == 0x1DB748u) {
        ctx->pc = 0x1DB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB744u;
        // 0x1db748: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB74Cu;
        goto label_1db74c;
    }
    ctx->pc = 0x1DB744u;
    {
        const bool branch_taken_0x1db744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB744u;
        // 0x1db748: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db744) {
            ctx->pc = 0x1DB4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db4b0;
        }
    }
    ctx->pc = 0x1DB74Cu;
label_1db74c:
    // 0x1db74c: 0x0  nop
    ctx->pc = 0x1db74cu;
    // NOP
label_1db750:
    // 0x1db750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db754:
    // 0x1db754: 0x0  nop
    ctx->pc = 0x1db754u;
    // NOP
label_1db758:
    // 0x1db758: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1db758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1db75c:
    // 0x1db75c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1db75cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1db760:
    // 0x1db760: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1db760u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1db764:
    // 0x1db764: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1db764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1db768:
    // 0x1db768: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1db76c:
    // 0x1db76c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1db770:
    // 0x1db770: 0x3e00008  jr          $ra
label_1db774:
    if (ctx->pc == 0x1DB774u) {
        ctx->pc = 0x1DB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB770u;
        // 0x1db774: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB778u;
        goto label_fallthrough_0x1db770;
    }
    ctx->pc = 0x1DB770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB770u;
        // 0x1db774: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1db770:
    ctx->pc = 0x1DB778u;
}
