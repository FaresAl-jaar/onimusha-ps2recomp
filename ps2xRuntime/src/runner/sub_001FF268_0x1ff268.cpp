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

// Function: sub_001FF268
// Address: 0x1ff268 - 0x1ff928
void sub_001FF268_0x1ff268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF268_0x1ff268");
#endif

    switch (ctx->pc) {
        case 0x1ff268u: goto label_1ff268;
        case 0x1ff26cu: goto label_1ff26c;
        case 0x1ff270u: goto label_1ff270;
        case 0x1ff274u: goto label_1ff274;
        case 0x1ff278u: goto label_1ff278;
        case 0x1ff27cu: goto label_1ff27c;
        case 0x1ff280u: goto label_1ff280;
        case 0x1ff284u: goto label_1ff284;
        case 0x1ff288u: goto label_1ff288;
        case 0x1ff28cu: goto label_1ff28c;
        case 0x1ff290u: goto label_1ff290;
        case 0x1ff294u: goto label_1ff294;
        case 0x1ff298u: goto label_1ff298;
        case 0x1ff29cu: goto label_1ff29c;
        case 0x1ff2a0u: goto label_1ff2a0;
        case 0x1ff2a4u: goto label_1ff2a4;
        case 0x1ff2a8u: goto label_1ff2a8;
        case 0x1ff2acu: goto label_1ff2ac;
        case 0x1ff2b0u: goto label_1ff2b0;
        case 0x1ff2b4u: goto label_1ff2b4;
        case 0x1ff2b8u: goto label_1ff2b8;
        case 0x1ff2bcu: goto label_1ff2bc;
        case 0x1ff2c0u: goto label_1ff2c0;
        case 0x1ff2c4u: goto label_1ff2c4;
        case 0x1ff2c8u: goto label_1ff2c8;
        case 0x1ff2ccu: goto label_1ff2cc;
        case 0x1ff2d0u: goto label_1ff2d0;
        case 0x1ff2d4u: goto label_1ff2d4;
        case 0x1ff2d8u: goto label_1ff2d8;
        case 0x1ff2dcu: goto label_1ff2dc;
        case 0x1ff2e0u: goto label_1ff2e0;
        case 0x1ff2e4u: goto label_1ff2e4;
        case 0x1ff2e8u: goto label_1ff2e8;
        case 0x1ff2ecu: goto label_1ff2ec;
        case 0x1ff2f0u: goto label_1ff2f0;
        case 0x1ff2f4u: goto label_1ff2f4;
        case 0x1ff2f8u: goto label_1ff2f8;
        case 0x1ff2fcu: goto label_1ff2fc;
        case 0x1ff300u: goto label_1ff300;
        case 0x1ff304u: goto label_1ff304;
        case 0x1ff308u: goto label_1ff308;
        case 0x1ff30cu: goto label_1ff30c;
        case 0x1ff310u: goto label_1ff310;
        case 0x1ff314u: goto label_1ff314;
        case 0x1ff318u: goto label_1ff318;
        case 0x1ff31cu: goto label_1ff31c;
        case 0x1ff320u: goto label_1ff320;
        case 0x1ff324u: goto label_1ff324;
        case 0x1ff328u: goto label_1ff328;
        case 0x1ff32cu: goto label_1ff32c;
        case 0x1ff330u: goto label_1ff330;
        case 0x1ff334u: goto label_1ff334;
        case 0x1ff338u: goto label_1ff338;
        case 0x1ff33cu: goto label_1ff33c;
        case 0x1ff340u: goto label_1ff340;
        case 0x1ff344u: goto label_1ff344;
        case 0x1ff348u: goto label_1ff348;
        case 0x1ff34cu: goto label_1ff34c;
        case 0x1ff350u: goto label_1ff350;
        case 0x1ff354u: goto label_1ff354;
        case 0x1ff358u: goto label_1ff358;
        case 0x1ff35cu: goto label_1ff35c;
        case 0x1ff360u: goto label_1ff360;
        case 0x1ff364u: goto label_1ff364;
        case 0x1ff368u: goto label_1ff368;
        case 0x1ff36cu: goto label_1ff36c;
        case 0x1ff370u: goto label_1ff370;
        case 0x1ff374u: goto label_1ff374;
        case 0x1ff378u: goto label_1ff378;
        case 0x1ff37cu: goto label_1ff37c;
        case 0x1ff380u: goto label_1ff380;
        case 0x1ff384u: goto label_1ff384;
        case 0x1ff388u: goto label_1ff388;
        case 0x1ff38cu: goto label_1ff38c;
        case 0x1ff390u: goto label_1ff390;
        case 0x1ff394u: goto label_1ff394;
        case 0x1ff398u: goto label_1ff398;
        case 0x1ff39cu: goto label_1ff39c;
        case 0x1ff3a0u: goto label_1ff3a0;
        case 0x1ff3a4u: goto label_1ff3a4;
        case 0x1ff3a8u: goto label_1ff3a8;
        case 0x1ff3acu: goto label_1ff3ac;
        case 0x1ff3b0u: goto label_1ff3b0;
        case 0x1ff3b4u: goto label_1ff3b4;
        case 0x1ff3b8u: goto label_1ff3b8;
        case 0x1ff3bcu: goto label_1ff3bc;
        case 0x1ff3c0u: goto label_1ff3c0;
        case 0x1ff3c4u: goto label_1ff3c4;
        case 0x1ff3c8u: goto label_1ff3c8;
        case 0x1ff3ccu: goto label_1ff3cc;
        case 0x1ff3d0u: goto label_1ff3d0;
        case 0x1ff3d4u: goto label_1ff3d4;
        case 0x1ff3d8u: goto label_1ff3d8;
        case 0x1ff3dcu: goto label_1ff3dc;
        case 0x1ff3e0u: goto label_1ff3e0;
        case 0x1ff3e4u: goto label_1ff3e4;
        case 0x1ff3e8u: goto label_1ff3e8;
        case 0x1ff3ecu: goto label_1ff3ec;
        case 0x1ff3f0u: goto label_1ff3f0;
        case 0x1ff3f4u: goto label_1ff3f4;
        case 0x1ff3f8u: goto label_1ff3f8;
        case 0x1ff3fcu: goto label_1ff3fc;
        case 0x1ff400u: goto label_1ff400;
        case 0x1ff404u: goto label_1ff404;
        case 0x1ff408u: goto label_1ff408;
        case 0x1ff40cu: goto label_1ff40c;
        case 0x1ff410u: goto label_1ff410;
        case 0x1ff414u: goto label_1ff414;
        case 0x1ff418u: goto label_1ff418;
        case 0x1ff41cu: goto label_1ff41c;
        case 0x1ff420u: goto label_1ff420;
        case 0x1ff424u: goto label_1ff424;
        case 0x1ff428u: goto label_1ff428;
        case 0x1ff42cu: goto label_1ff42c;
        case 0x1ff430u: goto label_1ff430;
        case 0x1ff434u: goto label_1ff434;
        case 0x1ff438u: goto label_1ff438;
        case 0x1ff43cu: goto label_1ff43c;
        case 0x1ff440u: goto label_1ff440;
        case 0x1ff444u: goto label_1ff444;
        case 0x1ff448u: goto label_1ff448;
        case 0x1ff44cu: goto label_1ff44c;
        case 0x1ff450u: goto label_1ff450;
        case 0x1ff454u: goto label_1ff454;
        case 0x1ff458u: goto label_1ff458;
        case 0x1ff45cu: goto label_1ff45c;
        case 0x1ff460u: goto label_1ff460;
        case 0x1ff464u: goto label_1ff464;
        case 0x1ff468u: goto label_1ff468;
        case 0x1ff46cu: goto label_1ff46c;
        case 0x1ff470u: goto label_1ff470;
        case 0x1ff474u: goto label_1ff474;
        case 0x1ff478u: goto label_1ff478;
        case 0x1ff47cu: goto label_1ff47c;
        case 0x1ff480u: goto label_1ff480;
        case 0x1ff484u: goto label_1ff484;
        case 0x1ff488u: goto label_1ff488;
        case 0x1ff48cu: goto label_1ff48c;
        case 0x1ff490u: goto label_1ff490;
        case 0x1ff494u: goto label_1ff494;
        case 0x1ff498u: goto label_1ff498;
        case 0x1ff49cu: goto label_1ff49c;
        case 0x1ff4a0u: goto label_1ff4a0;
        case 0x1ff4a4u: goto label_1ff4a4;
        case 0x1ff4a8u: goto label_1ff4a8;
        case 0x1ff4acu: goto label_1ff4ac;
        case 0x1ff4b0u: goto label_1ff4b0;
        case 0x1ff4b4u: goto label_1ff4b4;
        case 0x1ff4b8u: goto label_1ff4b8;
        case 0x1ff4bcu: goto label_1ff4bc;
        case 0x1ff4c0u: goto label_1ff4c0;
        case 0x1ff4c4u: goto label_1ff4c4;
        case 0x1ff4c8u: goto label_1ff4c8;
        case 0x1ff4ccu: goto label_1ff4cc;
        case 0x1ff4d0u: goto label_1ff4d0;
        case 0x1ff4d4u: goto label_1ff4d4;
        case 0x1ff4d8u: goto label_1ff4d8;
        case 0x1ff4dcu: goto label_1ff4dc;
        case 0x1ff4e0u: goto label_1ff4e0;
        case 0x1ff4e4u: goto label_1ff4e4;
        case 0x1ff4e8u: goto label_1ff4e8;
        case 0x1ff4ecu: goto label_1ff4ec;
        case 0x1ff4f0u: goto label_1ff4f0;
        case 0x1ff4f4u: goto label_1ff4f4;
        case 0x1ff4f8u: goto label_1ff4f8;
        case 0x1ff4fcu: goto label_1ff4fc;
        case 0x1ff500u: goto label_1ff500;
        case 0x1ff504u: goto label_1ff504;
        case 0x1ff508u: goto label_1ff508;
        case 0x1ff50cu: goto label_1ff50c;
        case 0x1ff510u: goto label_1ff510;
        case 0x1ff514u: goto label_1ff514;
        case 0x1ff518u: goto label_1ff518;
        case 0x1ff51cu: goto label_1ff51c;
        case 0x1ff520u: goto label_1ff520;
        case 0x1ff524u: goto label_1ff524;
        case 0x1ff528u: goto label_1ff528;
        case 0x1ff52cu: goto label_1ff52c;
        case 0x1ff530u: goto label_1ff530;
        case 0x1ff534u: goto label_1ff534;
        case 0x1ff538u: goto label_1ff538;
        case 0x1ff53cu: goto label_1ff53c;
        case 0x1ff540u: goto label_1ff540;
        case 0x1ff544u: goto label_1ff544;
        case 0x1ff548u: goto label_1ff548;
        case 0x1ff54cu: goto label_1ff54c;
        case 0x1ff550u: goto label_1ff550;
        case 0x1ff554u: goto label_1ff554;
        case 0x1ff558u: goto label_1ff558;
        case 0x1ff55cu: goto label_1ff55c;
        case 0x1ff560u: goto label_1ff560;
        case 0x1ff564u: goto label_1ff564;
        case 0x1ff568u: goto label_1ff568;
        case 0x1ff56cu: goto label_1ff56c;
        case 0x1ff570u: goto label_1ff570;
        case 0x1ff574u: goto label_1ff574;
        case 0x1ff578u: goto label_1ff578;
        case 0x1ff57cu: goto label_1ff57c;
        case 0x1ff580u: goto label_1ff580;
        case 0x1ff584u: goto label_1ff584;
        case 0x1ff588u: goto label_1ff588;
        case 0x1ff58cu: goto label_1ff58c;
        case 0x1ff590u: goto label_1ff590;
        case 0x1ff594u: goto label_1ff594;
        case 0x1ff598u: goto label_1ff598;
        case 0x1ff59cu: goto label_1ff59c;
        case 0x1ff5a0u: goto label_1ff5a0;
        case 0x1ff5a4u: goto label_1ff5a4;
        case 0x1ff5a8u: goto label_1ff5a8;
        case 0x1ff5acu: goto label_1ff5ac;
        case 0x1ff5b0u: goto label_1ff5b0;
        case 0x1ff5b4u: goto label_1ff5b4;
        case 0x1ff5b8u: goto label_1ff5b8;
        case 0x1ff5bcu: goto label_1ff5bc;
        case 0x1ff5c0u: goto label_1ff5c0;
        case 0x1ff5c4u: goto label_1ff5c4;
        case 0x1ff5c8u: goto label_1ff5c8;
        case 0x1ff5ccu: goto label_1ff5cc;
        case 0x1ff5d0u: goto label_1ff5d0;
        case 0x1ff5d4u: goto label_1ff5d4;
        case 0x1ff5d8u: goto label_1ff5d8;
        case 0x1ff5dcu: goto label_1ff5dc;
        case 0x1ff5e0u: goto label_1ff5e0;
        case 0x1ff5e4u: goto label_1ff5e4;
        case 0x1ff5e8u: goto label_1ff5e8;
        case 0x1ff5ecu: goto label_1ff5ec;
        case 0x1ff5f0u: goto label_1ff5f0;
        case 0x1ff5f4u: goto label_1ff5f4;
        case 0x1ff5f8u: goto label_1ff5f8;
        case 0x1ff5fcu: goto label_1ff5fc;
        case 0x1ff600u: goto label_1ff600;
        case 0x1ff604u: goto label_1ff604;
        case 0x1ff608u: goto label_1ff608;
        case 0x1ff60cu: goto label_1ff60c;
        case 0x1ff610u: goto label_1ff610;
        case 0x1ff614u: goto label_1ff614;
        case 0x1ff618u: goto label_1ff618;
        case 0x1ff61cu: goto label_1ff61c;
        case 0x1ff620u: goto label_1ff620;
        case 0x1ff624u: goto label_1ff624;
        case 0x1ff628u: goto label_1ff628;
        case 0x1ff62cu: goto label_1ff62c;
        case 0x1ff630u: goto label_1ff630;
        case 0x1ff634u: goto label_1ff634;
        case 0x1ff638u: goto label_1ff638;
        case 0x1ff63cu: goto label_1ff63c;
        case 0x1ff640u: goto label_1ff640;
        case 0x1ff644u: goto label_1ff644;
        case 0x1ff648u: goto label_1ff648;
        case 0x1ff64cu: goto label_1ff64c;
        case 0x1ff650u: goto label_1ff650;
        case 0x1ff654u: goto label_1ff654;
        case 0x1ff658u: goto label_1ff658;
        case 0x1ff65cu: goto label_1ff65c;
        case 0x1ff660u: goto label_1ff660;
        case 0x1ff664u: goto label_1ff664;
        case 0x1ff668u: goto label_1ff668;
        case 0x1ff66cu: goto label_1ff66c;
        case 0x1ff670u: goto label_1ff670;
        case 0x1ff674u: goto label_1ff674;
        case 0x1ff678u: goto label_1ff678;
        case 0x1ff67cu: goto label_1ff67c;
        case 0x1ff680u: goto label_1ff680;
        case 0x1ff684u: goto label_1ff684;
        case 0x1ff688u: goto label_1ff688;
        case 0x1ff68cu: goto label_1ff68c;
        case 0x1ff690u: goto label_1ff690;
        case 0x1ff694u: goto label_1ff694;
        case 0x1ff698u: goto label_1ff698;
        case 0x1ff69cu: goto label_1ff69c;
        case 0x1ff6a0u: goto label_1ff6a0;
        case 0x1ff6a4u: goto label_1ff6a4;
        case 0x1ff6a8u: goto label_1ff6a8;
        case 0x1ff6acu: goto label_1ff6ac;
        case 0x1ff6b0u: goto label_1ff6b0;
        case 0x1ff6b4u: goto label_1ff6b4;
        case 0x1ff6b8u: goto label_1ff6b8;
        case 0x1ff6bcu: goto label_1ff6bc;
        case 0x1ff6c0u: goto label_1ff6c0;
        case 0x1ff6c4u: goto label_1ff6c4;
        case 0x1ff6c8u: goto label_1ff6c8;
        case 0x1ff6ccu: goto label_1ff6cc;
        case 0x1ff6d0u: goto label_1ff6d0;
        case 0x1ff6d4u: goto label_1ff6d4;
        case 0x1ff6d8u: goto label_1ff6d8;
        case 0x1ff6dcu: goto label_1ff6dc;
        case 0x1ff6e0u: goto label_1ff6e0;
        case 0x1ff6e4u: goto label_1ff6e4;
        case 0x1ff6e8u: goto label_1ff6e8;
        case 0x1ff6ecu: goto label_1ff6ec;
        case 0x1ff6f0u: goto label_1ff6f0;
        case 0x1ff6f4u: goto label_1ff6f4;
        case 0x1ff6f8u: goto label_1ff6f8;
        case 0x1ff6fcu: goto label_1ff6fc;
        case 0x1ff700u: goto label_1ff700;
        case 0x1ff704u: goto label_1ff704;
        case 0x1ff708u: goto label_1ff708;
        case 0x1ff70cu: goto label_1ff70c;
        case 0x1ff710u: goto label_1ff710;
        case 0x1ff714u: goto label_1ff714;
        case 0x1ff718u: goto label_1ff718;
        case 0x1ff71cu: goto label_1ff71c;
        case 0x1ff720u: goto label_1ff720;
        case 0x1ff724u: goto label_1ff724;
        case 0x1ff728u: goto label_1ff728;
        case 0x1ff72cu: goto label_1ff72c;
        case 0x1ff730u: goto label_1ff730;
        case 0x1ff734u: goto label_1ff734;
        case 0x1ff738u: goto label_1ff738;
        case 0x1ff73cu: goto label_1ff73c;
        case 0x1ff740u: goto label_1ff740;
        case 0x1ff744u: goto label_1ff744;
        case 0x1ff748u: goto label_1ff748;
        case 0x1ff74cu: goto label_1ff74c;
        case 0x1ff750u: goto label_1ff750;
        case 0x1ff754u: goto label_1ff754;
        case 0x1ff758u: goto label_1ff758;
        case 0x1ff75cu: goto label_1ff75c;
        case 0x1ff760u: goto label_1ff760;
        case 0x1ff764u: goto label_1ff764;
        case 0x1ff768u: goto label_1ff768;
        case 0x1ff76cu: goto label_1ff76c;
        case 0x1ff770u: goto label_1ff770;
        case 0x1ff774u: goto label_1ff774;
        case 0x1ff778u: goto label_1ff778;
        case 0x1ff77cu: goto label_1ff77c;
        case 0x1ff780u: goto label_1ff780;
        case 0x1ff784u: goto label_1ff784;
        case 0x1ff788u: goto label_1ff788;
        case 0x1ff78cu: goto label_1ff78c;
        case 0x1ff790u: goto label_1ff790;
        case 0x1ff794u: goto label_1ff794;
        case 0x1ff798u: goto label_1ff798;
        case 0x1ff79cu: goto label_1ff79c;
        case 0x1ff7a0u: goto label_1ff7a0;
        case 0x1ff7a4u: goto label_1ff7a4;
        case 0x1ff7a8u: goto label_1ff7a8;
        case 0x1ff7acu: goto label_1ff7ac;
        case 0x1ff7b0u: goto label_1ff7b0;
        case 0x1ff7b4u: goto label_1ff7b4;
        case 0x1ff7b8u: goto label_1ff7b8;
        case 0x1ff7bcu: goto label_1ff7bc;
        case 0x1ff7c0u: goto label_1ff7c0;
        case 0x1ff7c4u: goto label_1ff7c4;
        case 0x1ff7c8u: goto label_1ff7c8;
        case 0x1ff7ccu: goto label_1ff7cc;
        case 0x1ff7d0u: goto label_1ff7d0;
        case 0x1ff7d4u: goto label_1ff7d4;
        case 0x1ff7d8u: goto label_1ff7d8;
        case 0x1ff7dcu: goto label_1ff7dc;
        case 0x1ff7e0u: goto label_1ff7e0;
        case 0x1ff7e4u: goto label_1ff7e4;
        case 0x1ff7e8u: goto label_1ff7e8;
        case 0x1ff7ecu: goto label_1ff7ec;
        case 0x1ff7f0u: goto label_1ff7f0;
        case 0x1ff7f4u: goto label_1ff7f4;
        case 0x1ff7f8u: goto label_1ff7f8;
        case 0x1ff7fcu: goto label_1ff7fc;
        case 0x1ff800u: goto label_1ff800;
        case 0x1ff804u: goto label_1ff804;
        case 0x1ff808u: goto label_1ff808;
        case 0x1ff80cu: goto label_1ff80c;
        case 0x1ff810u: goto label_1ff810;
        case 0x1ff814u: goto label_1ff814;
        case 0x1ff818u: goto label_1ff818;
        case 0x1ff81cu: goto label_1ff81c;
        case 0x1ff820u: goto label_1ff820;
        case 0x1ff824u: goto label_1ff824;
        case 0x1ff828u: goto label_1ff828;
        case 0x1ff82cu: goto label_1ff82c;
        case 0x1ff830u: goto label_1ff830;
        case 0x1ff834u: goto label_1ff834;
        case 0x1ff838u: goto label_1ff838;
        case 0x1ff83cu: goto label_1ff83c;
        case 0x1ff840u: goto label_1ff840;
        case 0x1ff844u: goto label_1ff844;
        case 0x1ff848u: goto label_1ff848;
        case 0x1ff84cu: goto label_1ff84c;
        case 0x1ff850u: goto label_1ff850;
        case 0x1ff854u: goto label_1ff854;
        case 0x1ff858u: goto label_1ff858;
        case 0x1ff85cu: goto label_1ff85c;
        case 0x1ff860u: goto label_1ff860;
        case 0x1ff864u: goto label_1ff864;
        case 0x1ff868u: goto label_1ff868;
        case 0x1ff86cu: goto label_1ff86c;
        case 0x1ff870u: goto label_1ff870;
        case 0x1ff874u: goto label_1ff874;
        case 0x1ff878u: goto label_1ff878;
        case 0x1ff87cu: goto label_1ff87c;
        case 0x1ff880u: goto label_1ff880;
        case 0x1ff884u: goto label_1ff884;
        case 0x1ff888u: goto label_1ff888;
        case 0x1ff88cu: goto label_1ff88c;
        case 0x1ff890u: goto label_1ff890;
        case 0x1ff894u: goto label_1ff894;
        case 0x1ff898u: goto label_1ff898;
        case 0x1ff89cu: goto label_1ff89c;
        case 0x1ff8a0u: goto label_1ff8a0;
        case 0x1ff8a4u: goto label_1ff8a4;
        case 0x1ff8a8u: goto label_1ff8a8;
        case 0x1ff8acu: goto label_1ff8ac;
        case 0x1ff8b0u: goto label_1ff8b0;
        case 0x1ff8b4u: goto label_1ff8b4;
        case 0x1ff8b8u: goto label_1ff8b8;
        case 0x1ff8bcu: goto label_1ff8bc;
        case 0x1ff8c0u: goto label_1ff8c0;
        case 0x1ff8c4u: goto label_1ff8c4;
        case 0x1ff8c8u: goto label_1ff8c8;
        case 0x1ff8ccu: goto label_1ff8cc;
        case 0x1ff8d0u: goto label_1ff8d0;
        case 0x1ff8d4u: goto label_1ff8d4;
        case 0x1ff8d8u: goto label_1ff8d8;
        case 0x1ff8dcu: goto label_1ff8dc;
        case 0x1ff8e0u: goto label_1ff8e0;
        case 0x1ff8e4u: goto label_1ff8e4;
        case 0x1ff8e8u: goto label_1ff8e8;
        case 0x1ff8ecu: goto label_1ff8ec;
        case 0x1ff8f0u: goto label_1ff8f0;
        case 0x1ff8f4u: goto label_1ff8f4;
        case 0x1ff8f8u: goto label_1ff8f8;
        case 0x1ff8fcu: goto label_1ff8fc;
        case 0x1ff900u: goto label_1ff900;
        case 0x1ff904u: goto label_1ff904;
        case 0x1ff908u: goto label_1ff908;
        case 0x1ff90cu: goto label_1ff90c;
        case 0x1ff910u: goto label_1ff910;
        case 0x1ff914u: goto label_1ff914;
        case 0x1ff918u: goto label_1ff918;
        case 0x1ff91cu: goto label_1ff91c;
        case 0x1ff920u: goto label_1ff920;
        case 0x1ff924u: goto label_1ff924;
        default: break;
    }

    ctx->pc = 0x1ff268u;

label_1ff268:
    // 0x1ff268: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ff268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ff26c:
    // 0x1ff26c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff270:
    // 0x1ff270: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ff270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ff274:
    // 0x1ff274: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ff278:
    // 0x1ff278: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ff278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1ff27c:
    // 0x1ff27c: 0x261101d0  addiu       $s1, $s0, 0x1D0
    ctx->pc = 0x1ff27cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
label_1ff280:
    // 0x1ff280: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ff280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1ff284:
    // 0x1ff284: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ff284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff288:
    // 0x1ff288: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ff288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1ff28c:
    // 0x1ff28c: 0x2613038c  addiu       $s3, $s0, 0x38C
    ctx->pc = 0x1ff28cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 908));
label_1ff290:
    // 0x1ff290: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ff290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ff294:
    // 0x1ff294: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1ff294u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1ff298:
    // 0x1ff298: 0xae0203b8  sw          $v0, 0x3B8($s0)
    ctx->pc = 0x1ff298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 2));
label_1ff29c:
    // 0x1ff29c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff2a0:
    // 0x1ff2a0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1ff2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1ff2a4:
    // 0x1ff2a4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1ff2a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1ff2a8:
    // 0x1ff2a8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1ff2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ff2ac:
    // 0x1ff2ac: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ff2acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ff2b0:
    // 0x1ff2b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ff2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ff2b4:
    // 0x1ff2b4: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x1ff2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_1ff2b8:
    // 0x1ff2b8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1ff2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1ff2bc:
    // 0x1ff2bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ff2c0:
    // 0x1ff2c0: 0xae0003fc  sw          $zero, 0x3FC($s0)
    ctx->pc = 0x1ff2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1020), GPR_U32(ctx, 0));
label_1ff2c4:
    // 0x1ff2c4: 0xae000400  sw          $zero, 0x400($s0)
    ctx->pc = 0x1ff2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 0));
label_1ff2c8:
    // 0x1ff2c8: 0x40f809  jalr        $v0
label_1ff2cc:
    if (ctx->pc == 0x1FF2CCu) {
        ctx->pc = 0x1FF2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2C8u;
        // 0x1ff2cc: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF2D0u;
        goto label_1ff2d0;
    }
    ctx->pc = 0x1FF2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF2D0u);
        ctx->pc = 0x1FF2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2C8u;
        // 0x1ff2cc: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF2C8u, 0x1FF2D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF2D0u;
label_1ff2d0:
    // 0x1ff2d0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ff2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ff2d4:
    // 0x1ff2d4: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1ff2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1ff2d8:
    // 0x1ff2d8: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x1ff2d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ff2dc:
    // 0x1ff2dc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1ff2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1ff2e0:
    // 0x1ff2e0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1ff2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1ff2e4:
    // 0x1ff2e4: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1ff2e4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff2e8:
    // 0x1ff2e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff2ec:
    // 0x1ff2ec: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff2ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff2f0:
    // 0x1ff2f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff2f4:
    // 0x1ff2f4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff2f8:
    // 0x1ff2f8: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x1ff2f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff2fc:
    // 0x1ff2fc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ff2fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1ff300:
    // 0x1ff300: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff304:
    // 0x1ff304: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff304u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff308:
    // 0x1ff308: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff30c:
    // 0x1ff30c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1ff30cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1ff310:
    // 0x1ff310: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x1ff310u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1ff314:
    // 0x1ff314: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff314u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff318:
    // 0x1ff318: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff31c:
    // 0x1ff31c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ff31cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1ff320:
    // 0x1ff320: 0x39030000  xori        $v1, $t0, 0x0
    ctx->pc = 0x1ff320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)0);
label_1ff324:
    // 0x1ff324: 0x1051004  sllv        $v0, $a1, $t0
    ctx->pc = 0x1ff324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_1ff328:
    // 0x1ff328: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff32c:
    // 0x1ff32c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1ff32cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff330:
    // 0x1ff330: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff334:
    // 0x1ff334: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x1ff334u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_1ff338:
    // 0x1ff338: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff33c:
    // 0x1ff33c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff33cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff340:
    // 0x1ff340: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff344:
    // 0x1ff344: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1ff344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff348:
    // 0x1ff348: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff34c:
    // 0x1ff34c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ff34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1ff350:
    // 0x1ff350: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff354:
    // 0x1ff354: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff354u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff358:
    // 0x1ff358: 0x29040014  slti        $a0, $t0, 0x14
    ctx->pc = 0x1ff358u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
label_1ff35c:
    // 0x1ff35c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1ff35cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1ff360:
    // 0x1ff360: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff364:
    // 0x1ff364: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff364u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff368:
    // 0x1ff368: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
label_1ff36c:
    if (ctx->pc == 0x1FF36Cu) {
        ctx->pc = 0x1FF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF368u;
        // 0x1ff36c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF370u;
        goto label_1ff370;
    }
    ctx->pc = 0x1FF368u;
    {
        const bool branch_taken_0x1ff368 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF368u;
        // 0x1ff36c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff368) {
            ctx->pc = 0x1FF3E0u;
            goto label_1ff3e0;
        }
    }
    ctx->pc = 0x1FF370u;
label_1ff370:
    // 0x1ff370: 0x2508ffec  addiu       $t0, $t0, -0x14
    ctx->pc = 0x1ff370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967276));
label_1ff374:
    // 0x1ff374: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
label_1ff378:
    if (ctx->pc == 0x1FF378u) {
        ctx->pc = 0x1FF378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF374u;
        // 0x1ff378: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF37Cu;
        goto label_1ff37c;
    }
    ctx->pc = 0x1FF374u;
    {
        const bool branch_taken_0x1ff374 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF374u;
        // 0x1ff378: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff374) {
            ctx->pc = 0x1FF398u;
            goto label_1ff398;
        }
    }
    ctx->pc = 0x1FF37Cu;
label_1ff37c:
    // 0x1ff37c: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1ff37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1ff380:
    // 0x1ff380: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x1ff380u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_1ff384:
    // 0x1ff384: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1ff384u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1ff388:
    // 0x1ff388: 0x71d02  srl         $v1, $a3, 20
    ctx->pc = 0x1ff388u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_1ff38c:
    // 0x1ff38c: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x1ff38cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_1ff390:
    // 0x1ff390: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ff394:
    if (ctx->pc == 0x1FF394u) {
        ctx->pc = 0x1FF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF390u;
        // 0x1ff394: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF398u;
        goto label_1ff398;
    }
    ctx->pc = 0x1FF390u;
    {
        const bool branch_taken_0x1ff390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF390u;
        // 0x1ff394: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff390) {
            ctx->pc = 0x1FF3A4u;
            goto label_1ff3a4;
        }
    }
    ctx->pc = 0x1FF398u;
label_1ff398:
    // 0x1ff398: 0x71502  srl         $v0, $a3, 20
    ctx->pc = 0x1ff398u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_1ff39c:
    // 0x1ff39c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff39cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff3a0:
    // 0x1ff3a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ff3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ff3a4:
    // 0x1ff3a4: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1ff3a4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff3a8:
    // 0x1ff3a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff3ac:
    // 0x1ff3ac: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff3acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff3b0:
    // 0x1ff3b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff3b4:
    // 0x1ff3b4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff3b8:
    // 0x1ff3b8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1ff3b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff3bc:
    // 0x1ff3bc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ff3bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1ff3c0:
    // 0x1ff3c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff3c4:
    // 0x1ff3c4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff3c8:
    // 0x1ff3c8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff3c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff3cc:
    // 0x1ff3cc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1ff3ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1ff3d0:
    // 0x1ff3d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff3d4:
    // 0x1ff3d4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff3d8:
    // 0x1ff3d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ff3dc:
    if (ctx->pc == 0x1FF3DCu) {
        ctx->pc = 0x1FF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3D8u;
        // 0x1ff3dc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF3E0u;
        goto label_1ff3e0;
    }
    ctx->pc = 0x1FF3D8u;
    {
        const bool branch_taken_0x1ff3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3D8u;
        // 0x1ff3dc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff3d8) {
            ctx->pc = 0x1FF3F0u;
            goto label_1ff3f0;
        }
    }
    ctx->pc = 0x1FF3E0u;
label_1ff3e0:
    // 0x1ff3e0: 0x71502  srl         $v0, $a3, 20
    ctx->pc = 0x1ff3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_1ff3e4:
    // 0x1ff3e4: 0x73b00  sll         $a3, $a3, 12
    ctx->pc = 0x1ff3e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 12));
label_1ff3e8:
    // 0x1ff3e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ff3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ff3ec:
    // 0x1ff3ec: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x1ff3ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_1ff3f0:
    // 0x1ff3f0: 0x29020014  slti        $v0, $t0, 0x14
    ctx->pc = 0x1ff3f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
label_1ff3f4:
    // 0x1ff3f4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1ff3f8:
    if (ctx->pc == 0x1FF3F8u) {
        ctx->pc = 0x1FF3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3F4u;
        // 0x1ff3f8: 0x71502  srl         $v0, $a3, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF3FCu;
        goto label_1ff3fc;
    }
    ctx->pc = 0x1FF3F4u;
    {
        const bool branch_taken_0x1ff3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3F4u;
        // 0x1ff3f8: 0x71502  srl         $v0, $a3, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff3f4) {
            ctx->pc = 0x1FF470u;
            goto label_1ff470;
        }
    }
    ctx->pc = 0x1FF3FCu;
label_1ff3fc:
    // 0x1ff3fc: 0x2508ffec  addiu       $t0, $t0, -0x14
    ctx->pc = 0x1ff3fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967276));
label_1ff400:
    // 0x1ff400: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
label_1ff404:
    if (ctx->pc == 0x1FF404u) {
        ctx->pc = 0x1FF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF400u;
        // 0x1ff404: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF408u;
        goto label_1ff408;
    }
    ctx->pc = 0x1FF400u;
    {
        const bool branch_taken_0x1ff400 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF400u;
        // 0x1ff404: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff400) {
            ctx->pc = 0x1FF428u;
            goto label_1ff428;
        }
    }
    ctx->pc = 0x1FF408u;
label_1ff408:
    // 0x1ff408: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1ff408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1ff40c:
    // 0x1ff40c: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x1ff40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_1ff410:
    // 0x1ff410: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1ff410u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1ff414:
    // 0x1ff414: 0x71d02  srl         $v1, $a3, 20
    ctx->pc = 0x1ff414u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_1ff418:
    // 0x1ff418: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x1ff418u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_1ff41c:
    // 0x1ff41c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ff420:
    if (ctx->pc == 0x1FF420u) {
        ctx->pc = 0x1FF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF41Cu;
        // 0x1ff420: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF424u;
        goto label_1ff424;
    }
    ctx->pc = 0x1FF41Cu;
    {
        const bool branch_taken_0x1ff41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF41Cu;
        // 0x1ff420: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff41c) {
            ctx->pc = 0x1FF434u;
            goto label_1ff434;
        }
    }
    ctx->pc = 0x1FF424u;
label_1ff424:
    // 0x1ff424: 0x0  nop
    ctx->pc = 0x1ff424u;
    // NOP
label_1ff428:
    // 0x1ff428: 0x71502  srl         $v0, $a3, 20
    ctx->pc = 0x1ff428u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_1ff42c:
    // 0x1ff42c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff42cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff430:
    // 0x1ff430: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ff430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1ff434:
    // 0x1ff434: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1ff434u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff438:
    // 0x1ff438: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff43c:
    // 0x1ff43c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff43cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff440:
    // 0x1ff440: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff444:
    // 0x1ff444: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff444u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff448:
    // 0x1ff448: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1ff448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff44c:
    // 0x1ff44c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ff44cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1ff450:
    // 0x1ff450: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff454:
    // 0x1ff454: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff454u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff458:
    // 0x1ff458: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff45c:
    // 0x1ff45c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1ff45cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1ff460:
    // 0x1ff460: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff464:
    // 0x1ff464: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff464u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff468:
    // 0x1ff468: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ff46c:
    if (ctx->pc == 0x1FF46Cu) {
        ctx->pc = 0x1FF46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF468u;
        // 0x1ff46c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF470u;
        goto label_1ff470;
    }
    ctx->pc = 0x1FF468u;
    {
        const bool branch_taken_0x1ff468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF468u;
        // 0x1ff46c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff468) {
            ctx->pc = 0x1FF47Cu;
            goto label_1ff47c;
        }
    }
    ctx->pc = 0x1FF470u;
label_1ff470:
    // 0x1ff470: 0x73b00  sll         $a3, $a3, 12
    ctx->pc = 0x1ff470u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 12));
label_1ff474:
    // 0x1ff474: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ff474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1ff478:
    // 0x1ff478: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x1ff478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_1ff47c:
    // 0x1ff47c: 0x2902001c  slti        $v0, $t0, 0x1C
    ctx->pc = 0x1ff47cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)28) ? 1 : 0);
label_1ff480:
    // 0x1ff480: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1ff484:
    if (ctx->pc == 0x1FF484u) {
        ctx->pc = 0x1FF484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF480u;
        // 0x1ff484: 0x71702  srl         $v0, $a3, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF488u;
        goto label_1ff488;
    }
    ctx->pc = 0x1FF480u;
    {
        const bool branch_taken_0x1ff480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF480u;
        // 0x1ff484: 0x71702  srl         $v0, $a3, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff480) {
            ctx->pc = 0x1FF4F8u;
            goto label_1ff4f8;
        }
    }
    ctx->pc = 0x1FF488u;
label_1ff488:
    // 0x1ff488: 0x2508ffe4  addiu       $t0, $t0, -0x1C
    ctx->pc = 0x1ff488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967268));
label_1ff48c:
    // 0x1ff48c: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
label_1ff490:
    if (ctx->pc == 0x1FF490u) {
        ctx->pc = 0x1FF490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF48Cu;
        // 0x1ff490: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF494u;
        goto label_1ff494;
    }
    ctx->pc = 0x1FF48Cu;
    {
        const bool branch_taken_0x1ff48c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF48Cu;
        // 0x1ff490: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff48c) {
            ctx->pc = 0x1FF4B0u;
            goto label_1ff4b0;
        }
    }
    ctx->pc = 0x1FF494u;
label_1ff494:
    // 0x1ff494: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1ff494u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1ff498:
    // 0x1ff498: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x1ff498u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_1ff49c:
    // 0x1ff49c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1ff49cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1ff4a0:
    // 0x1ff4a0: 0x71f02  srl         $v1, $a3, 28
    ctx->pc = 0x1ff4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
label_1ff4a4:
    // 0x1ff4a4: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x1ff4a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_1ff4a8:
    // 0x1ff4a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ff4ac:
    if (ctx->pc == 0x1FF4ACu) {
        ctx->pc = 0x1FF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4A8u;
        // 0x1ff4ac: 0xae0302a4  sw          $v1, 0x2A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4B0u;
        goto label_1ff4b0;
    }
    ctx->pc = 0x1FF4A8u;
    {
        const bool branch_taken_0x1ff4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4A8u;
        // 0x1ff4ac: 0xae0302a4  sw          $v1, 0x2A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4a8) {
            ctx->pc = 0x1FF4BCu;
            goto label_1ff4bc;
        }
    }
    ctx->pc = 0x1FF4B0u;
label_1ff4b0:
    // 0x1ff4b0: 0x71702  srl         $v0, $a3, 28
    ctx->pc = 0x1ff4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
label_1ff4b4:
    // 0x1ff4b4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff4b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff4b8:
    // 0x1ff4b8: 0xae0202a4  sw          $v0, 0x2A4($s0)
    ctx->pc = 0x1ff4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 2));
label_1ff4bc:
    // 0x1ff4bc: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1ff4bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff4c0:
    // 0x1ff4c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff4c4:
    // 0x1ff4c4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff4c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff4c8:
    // 0x1ff4c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff4cc:
    // 0x1ff4cc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff4d0:
    // 0x1ff4d0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1ff4d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff4d4:
    // 0x1ff4d4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ff4d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1ff4d8:
    // 0x1ff4d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff4dc:
    // 0x1ff4dc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff4e0:
    // 0x1ff4e0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff4e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff4e4:
    // 0x1ff4e4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1ff4e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1ff4e8:
    // 0x1ff4e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff4ec:
    // 0x1ff4ec: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff4f0:
    // 0x1ff4f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ff4f4:
    if (ctx->pc == 0x1FF4F4u) {
        ctx->pc = 0x1FF4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4F0u;
        // 0x1ff4f4: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4F8u;
        goto label_1ff4f8;
    }
    ctx->pc = 0x1FF4F0u;
    {
        const bool branch_taken_0x1ff4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4F0u;
        // 0x1ff4f4: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4f0) {
            ctx->pc = 0x1FF504u;
            goto label_1ff504;
        }
    }
    ctx->pc = 0x1FF4F8u;
label_1ff4f8:
    // 0x1ff4f8: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1ff4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1ff4fc:
    // 0x1ff4fc: 0xae0202a4  sw          $v0, 0x2A4($s0)
    ctx->pc = 0x1ff4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 2));
label_1ff500:
    // 0x1ff500: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1ff500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1ff504:
    // 0x1ff504: 0x2902001c  slti        $v0, $t0, 0x1C
    ctx->pc = 0x1ff504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)28) ? 1 : 0);
label_1ff508:
    // 0x1ff508: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_1ff50c:
    if (ctx->pc == 0x1FF50Cu) {
        ctx->pc = 0x1FF50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF508u;
        // 0x1ff50c: 0x72702  srl         $a0, $a3, 28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF510u;
        goto label_1ff510;
    }
    ctx->pc = 0x1FF508u;
    {
        const bool branch_taken_0x1ff508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF508u;
        // 0x1ff50c: 0x72702  srl         $a0, $a3, 28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff508) {
            ctx->pc = 0x1FF578u;
            goto label_1ff578;
        }
    }
    ctx->pc = 0x1FF510u;
label_1ff510:
    // 0x1ff510: 0x2508ffe4  addiu       $t0, $t0, -0x1C
    ctx->pc = 0x1ff510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967268));
label_1ff514:
    // 0x1ff514: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
label_1ff518:
    if (ctx->pc == 0x1FF518u) {
        ctx->pc = 0x1FF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF514u;
        // 0x1ff518: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF51Cu;
        goto label_1ff51c;
    }
    ctx->pc = 0x1FF514u;
    {
        const bool branch_taken_0x1ff514 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF514u;
        // 0x1ff518: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff514) {
            ctx->pc = 0x1FF538u;
            goto label_1ff538;
        }
    }
    ctx->pc = 0x1FF51Cu;
label_1ff51c:
    // 0x1ff51c: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1ff51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1ff520:
    // 0x1ff520: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x1ff520u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_1ff524:
    // 0x1ff524: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1ff524u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1ff528:
    // 0x1ff528: 0x72702  srl         $a0, $a3, 28
    ctx->pc = 0x1ff528u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
label_1ff52c:
    // 0x1ff52c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ff530:
    if (ctx->pc == 0x1FF530u) {
        ctx->pc = 0x1FF530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF52Cu;
        // 0x1ff530: 0x1053804  sllv        $a3, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF534u;
        goto label_1ff534;
    }
    ctx->pc = 0x1FF52Cu;
    {
        const bool branch_taken_0x1ff52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF52Cu;
        // 0x1ff530: 0x1053804  sllv        $a3, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff52c) {
            ctx->pc = 0x1FF53Cu;
            goto label_1ff53c;
        }
    }
    ctx->pc = 0x1FF534u;
label_1ff534:
    // 0x1ff534: 0x0  nop
    ctx->pc = 0x1ff534u;
    // NOP
label_1ff538:
    // 0x1ff538: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff53c:
    // 0x1ff53c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1ff53cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff540:
    // 0x1ff540: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff544:
    // 0x1ff544: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff548:
    // 0x1ff548: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff54c:
    // 0x1ff54c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff54cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff550:
    // 0x1ff550: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1ff550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff554:
    // 0x1ff554: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ff554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1ff558:
    // 0x1ff558: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff55c:
    // 0x1ff55c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff55cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff560:
    // 0x1ff560: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff564:
    // 0x1ff564: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1ff564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1ff568:
    // 0x1ff568: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff56c:
    // 0x1ff56c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff56cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff570:
    // 0x1ff570: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ff574:
    if (ctx->pc == 0x1FF574u) {
        ctx->pc = 0x1FF574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF570u;
        // 0x1ff574: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF578u;
        goto label_1ff578;
    }
    ctx->pc = 0x1FF570u;
    {
        const bool branch_taken_0x1ff570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF570u;
        // 0x1ff574: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff570) {
            ctx->pc = 0x1FF580u;
            goto label_1ff580;
        }
    }
    ctx->pc = 0x1FF578u;
label_1ff578:
    // 0x1ff578: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1ff578u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1ff57c:
    // 0x1ff57c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1ff57cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1ff580:
    // 0x1ff580: 0x2902000e  slti        $v0, $t0, 0xE
    ctx->pc = 0x1ff580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)14) ? 1 : 0);
label_1ff584:
    // 0x1ff584: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1ff588:
    if (ctx->pc == 0x1FF588u) {
        ctx->pc = 0x1FF588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF584u;
        // 0x1ff588: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF58Cu;
        goto label_1ff58c;
    }
    ctx->pc = 0x1FF584u;
    {
        const bool branch_taken_0x1ff584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF584u;
        // 0x1ff588: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff584) {
            ctx->pc = 0x1FF600u;
            goto label_1ff600;
        }
    }
    ctx->pc = 0x1FF58Cu;
label_1ff58c:
    // 0x1ff58c: 0x2508fff2  addiu       $t0, $t0, -0xE
    ctx->pc = 0x1ff58cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967282));
label_1ff590:
    // 0x1ff590: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
label_1ff594:
    if (ctx->pc == 0x1FF594u) {
        ctx->pc = 0x1FF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF590u;
        // 0x1ff594: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF598u;
        goto label_1ff598;
    }
    ctx->pc = 0x1FF590u;
    {
        const bool branch_taken_0x1ff590 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF590u;
        // 0x1ff594: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff590) {
            ctx->pc = 0x1FF5B8u;
            goto label_1ff5b8;
        }
    }
    ctx->pc = 0x1FF598u;
label_1ff598:
    // 0x1ff598: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1ff598u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1ff59c:
    // 0x1ff59c: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x1ff59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_1ff5a0:
    // 0x1ff5a0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1ff5a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1ff5a4:
    // 0x1ff5a4: 0x71b82  srl         $v1, $a3, 14
    ctx->pc = 0x1ff5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 14));
label_1ff5a8:
    // 0x1ff5a8: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x1ff5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_1ff5ac:
    // 0x1ff5ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ff5b0:
    if (ctx->pc == 0x1FF5B0u) {
        ctx->pc = 0x1FF5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5ACu;
        // 0x1ff5b0: 0xae0302a8  sw          $v1, 0x2A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF5B4u;
        goto label_1ff5b4;
    }
    ctx->pc = 0x1FF5ACu;
    {
        const bool branch_taken_0x1ff5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5ACu;
        // 0x1ff5b0: 0xae0302a8  sw          $v1, 0x2A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff5ac) {
            ctx->pc = 0x1FF5C4u;
            goto label_1ff5c4;
        }
    }
    ctx->pc = 0x1FF5B4u;
label_1ff5b4:
    // 0x1ff5b4: 0x0  nop
    ctx->pc = 0x1ff5b4u;
    // NOP
label_1ff5b8:
    // 0x1ff5b8: 0x71382  srl         $v0, $a3, 14
    ctx->pc = 0x1ff5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 14));
label_1ff5bc:
    // 0x1ff5bc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff5bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff5c0:
    // 0x1ff5c0: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x1ff5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
label_1ff5c4:
    // 0x1ff5c4: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1ff5c4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff5c8:
    // 0x1ff5c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff5cc:
    // 0x1ff5cc: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff5ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff5d0:
    // 0x1ff5d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff5d4:
    // 0x1ff5d4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff5d8:
    // 0x1ff5d8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1ff5d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff5dc:
    // 0x1ff5dc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ff5dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1ff5e0:
    // 0x1ff5e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff5e4:
    // 0x1ff5e4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff5e8:
    // 0x1ff5e8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff5e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff5ec:
    // 0x1ff5ec: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1ff5ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1ff5f0:
    // 0x1ff5f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff5f4:
    // 0x1ff5f4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff5f8:
    // 0x1ff5f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ff5fc:
    if (ctx->pc == 0x1FF5FCu) {
        ctx->pc = 0x1FF5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5F8u;
        // 0x1ff5fc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF600u;
        goto label_1ff600;
    }
    ctx->pc = 0x1FF5F8u;
    {
        const bool branch_taken_0x1ff5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5F8u;
        // 0x1ff5fc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff5f8) {
            ctx->pc = 0x1FF610u;
            goto label_1ff610;
        }
    }
    ctx->pc = 0x1FF600u;
label_1ff600:
    // 0x1ff600: 0x71382  srl         $v0, $a3, 14
    ctx->pc = 0x1ff600u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 14));
label_1ff604:
    // 0x1ff604: 0x73c80  sll         $a3, $a3, 18
    ctx->pc = 0x1ff604u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 18));
label_1ff608:
    // 0x1ff608: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x1ff608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
label_1ff60c:
    // 0x1ff60c: 0x25080012  addiu       $t0, $t0, 0x12
    ctx->pc = 0x1ff60cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 18));
label_1ff610:
    // 0x1ff610: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ff610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ff614:
    // 0x1ff614: 0x29020020  slti        $v0, $t0, 0x20
    ctx->pc = 0x1ff614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)32) ? 1 : 0);
label_1ff618:
    // 0x1ff618: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1ff61c:
    if (ctx->pc == 0x1FF61Cu) {
        ctx->pc = 0x1FF61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF618u;
        // 0x1ff61c: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF620u;
        goto label_1ff620;
    }
    ctx->pc = 0x1FF618u;
    {
        const bool branch_taken_0x1ff618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff618) {
            ctx->pc = 0x1FF61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF618u;
            // 0x1ff61c: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF660u;
            goto label_1ff660;
        }
    }
    ctx->pc = 0x1FF620u;
label_1ff620:
    // 0x1ff620: 0x2508ffe0  addiu       $t0, $t0, -0x20
    ctx->pc = 0x1ff620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
label_1ff624:
    // 0x1ff624: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x1ff624u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_1ff628:
    // 0x1ff628: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1ff628u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff62c:
    // 0x1ff62c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff630:
    // 0x1ff630: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff634:
    // 0x1ff634: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff638:
    // 0x1ff638: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff63c:
    // 0x1ff63c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1ff63cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff640:
    // 0x1ff640: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ff640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1ff644:
    // 0x1ff644: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff648:
    // 0x1ff648: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff648u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff64c:
    // 0x1ff64c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff64cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff650:
    // 0x1ff650: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1ff650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1ff654:
    // 0x1ff654: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff658:
    // 0x1ff658: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff658u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff65c:
    // 0x1ff65c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ff65cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1ff660:
    // 0x1ff660: 0x29020016  slti        $v0, $t0, 0x16
    ctx->pc = 0x1ff660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)22) ? 1 : 0);
label_1ff664:
    // 0x1ff664: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1ff668:
    if (ctx->pc == 0x1FF668u) {
        ctx->pc = 0x1FF668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF664u;
        // 0x1ff668: 0x71582  srl         $v0, $a3, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF66Cu;
        goto label_1ff66c;
    }
    ctx->pc = 0x1FF664u;
    {
        const bool branch_taken_0x1ff664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF664u;
        // 0x1ff668: 0x71582  srl         $v0, $a3, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff664) {
            ctx->pc = 0x1FF6E0u;
            goto label_1ff6e0;
        }
    }
    ctx->pc = 0x1FF66Cu;
label_1ff66c:
    // 0x1ff66c: 0x2508ffea  addiu       $t0, $t0, -0x16
    ctx->pc = 0x1ff66cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967274));
label_1ff670:
    // 0x1ff670: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
label_1ff674:
    if (ctx->pc == 0x1FF674u) {
        ctx->pc = 0x1FF674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF670u;
        // 0x1ff674: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF678u;
        goto label_1ff678;
    }
    ctx->pc = 0x1FF670u;
    {
        const bool branch_taken_0x1ff670 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF670u;
        // 0x1ff674: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff670) {
            ctx->pc = 0x1FF698u;
            goto label_1ff698;
        }
    }
    ctx->pc = 0x1FF678u;
label_1ff678:
    // 0x1ff678: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1ff678u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1ff67c:
    // 0x1ff67c: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x1ff67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_1ff680:
    // 0x1ff680: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1ff680u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1ff684:
    // 0x1ff684: 0x71d82  srl         $v1, $a3, 22
    ctx->pc = 0x1ff684u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_1ff688:
    // 0x1ff688: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x1ff688u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_1ff68c:
    // 0x1ff68c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ff690:
    if (ctx->pc == 0x1FF690u) {
        ctx->pc = 0x1FF690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF68Cu;
        // 0x1ff690: 0xae0302ac  sw          $v1, 0x2AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF694u;
        goto label_1ff694;
    }
    ctx->pc = 0x1FF68Cu;
    {
        const bool branch_taken_0x1ff68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF68Cu;
        // 0x1ff690: 0xae0302ac  sw          $v1, 0x2AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff68c) {
            ctx->pc = 0x1FF6A4u;
            goto label_1ff6a4;
        }
    }
    ctx->pc = 0x1FF694u;
label_1ff694:
    // 0x1ff694: 0x0  nop
    ctx->pc = 0x1ff694u;
    // NOP
label_1ff698:
    // 0x1ff698: 0x71582  srl         $v0, $a3, 22
    ctx->pc = 0x1ff698u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_1ff69c:
    // 0x1ff69c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff69cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff6a0:
    // 0x1ff6a0: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x1ff6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
label_1ff6a4:
    // 0x1ff6a4: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1ff6a4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff6a8:
    // 0x1ff6a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff6ac:
    // 0x1ff6ac: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff6acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff6b0:
    // 0x1ff6b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff6b4:
    // 0x1ff6b4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff6b8:
    // 0x1ff6b8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1ff6b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff6bc:
    // 0x1ff6bc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ff6bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1ff6c0:
    // 0x1ff6c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff6c4:
    // 0x1ff6c4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff6c8:
    // 0x1ff6c8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff6c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff6cc:
    // 0x1ff6cc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1ff6ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1ff6d0:
    // 0x1ff6d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff6d4:
    // 0x1ff6d4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff6d8:
    // 0x1ff6d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ff6dc:
    if (ctx->pc == 0x1FF6DCu) {
        ctx->pc = 0x1FF6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6D8u;
        // 0x1ff6dc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF6E0u;
        goto label_1ff6e0;
    }
    ctx->pc = 0x1FF6D8u;
    {
        const bool branch_taken_0x1ff6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6D8u;
        // 0x1ff6dc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff6d8) {
            ctx->pc = 0x1FF6ECu;
            goto label_1ff6ec;
        }
    }
    ctx->pc = 0x1FF6E0u;
label_1ff6e0:
    // 0x1ff6e0: 0x73a80  sll         $a3, $a3, 10
    ctx->pc = 0x1ff6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
label_1ff6e4:
    // 0x1ff6e4: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x1ff6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
label_1ff6e8:
    // 0x1ff6e8: 0x2508000a  addiu       $t0, $t0, 0xA
    ctx->pc = 0x1ff6e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10));
label_1ff6ec:
    // 0x1ff6ec: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x1ff6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_1ff6f0:
    // 0x1ff6f0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1ff6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1ff6f4:
    // 0x1ff6f4: 0x15030012  bne         $t0, $v1, . + 4 + (0x12 << 2)
label_1ff6f8:
    if (ctx->pc == 0x1FF6F8u) {
        ctx->pc = 0x1FF6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6F4u;
        // 0x1ff6f8: 0xae0202b0  sw          $v0, 0x2B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF6FCu;
        goto label_1ff6fc;
    }
    ctx->pc = 0x1FF6F4u;
    {
        const bool branch_taken_0x1ff6f4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FF6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6F4u;
        // 0x1ff6f8: 0xae0202b0  sw          $v0, 0x2B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff6f4) {
            ctx->pc = 0x1FF740u;
            goto label_1ff740;
        }
    }
    ctx->pc = 0x1FF6FCu;
label_1ff6fc:
    // 0x1ff6fc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff6fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff700:
    // 0x1ff700: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1ff700u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff704:
    // 0x1ff704: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff708:
    // 0x1ff708: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ff708u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff70c:
    // 0x1ff70c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff70cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff710:
    // 0x1ff710: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff714:
    // 0x1ff714: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff714u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff718:
    // 0x1ff718: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1ff718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff71c:
    // 0x1ff71c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ff71cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1ff720:
    // 0x1ff720: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff724:
    // 0x1ff724: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff724u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff728:
    // 0x1ff728: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff72c:
    // 0x1ff72c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1ff72cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1ff730:
    // 0x1ff730: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff734:
    // 0x1ff734: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff734u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff738:
    // 0x1ff738: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ff73c:
    if (ctx->pc == 0x1FF73Cu) {
        ctx->pc = 0x1FF73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF738u;
        // 0x1ff73c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF740u;
        goto label_1ff740;
    }
    ctx->pc = 0x1FF738u;
    {
        const bool branch_taken_0x1ff738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF738u;
        // 0x1ff73c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff738) {
            ctx->pc = 0x1FF748u;
            goto label_1ff748;
        }
    }
    ctx->pc = 0x1FF740u;
label_1ff740:
    // 0x1ff740: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ff740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ff744:
    // 0x1ff744: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1ff744u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1ff748:
    // 0x1ff748: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1ff748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1ff74c:
    // 0x1ff74c: 0x15020012  bne         $t0, $v0, . + 4 + (0x12 << 2)
label_1ff750:
    if (ctx->pc == 0x1FF750u) {
        ctx->pc = 0x1FF750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF74Cu;
        // 0x1ff750: 0x727c2  srl         $a0, $a3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF754u;
        goto label_1ff754;
    }
    ctx->pc = 0x1FF74Cu;
    {
        const bool branch_taken_0x1ff74c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FF750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF74Cu;
        // 0x1ff750: 0x727c2  srl         $a0, $a3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff74c) {
            ctx->pc = 0x1FF798u;
            goto label_1ff798;
        }
    }
    ctx->pc = 0x1FF754u;
label_1ff754:
    // 0x1ff754: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff758:
    // 0x1ff758: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1ff758u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff75c:
    // 0x1ff75c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff760:
    // 0x1ff760: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ff760u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff764:
    // 0x1ff764: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff768:
    // 0x1ff768: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff76c:
    // 0x1ff76c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff76cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff770:
    // 0x1ff770: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1ff770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff774:
    // 0x1ff774: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ff774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1ff778:
    // 0x1ff778: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff77c:
    // 0x1ff77c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff77cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff780:
    // 0x1ff780: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff784:
    // 0x1ff784: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1ff784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1ff788:
    // 0x1ff788: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff78c:
    // 0x1ff78c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff78cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff790:
    // 0x1ff790: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ff794:
    if (ctx->pc == 0x1FF794u) {
        ctx->pc = 0x1FF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF790u;
        // 0x1ff794: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF798u;
        goto label_1ff798;
    }
    ctx->pc = 0x1FF790u;
    {
        const bool branch_taken_0x1ff790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF790u;
        // 0x1ff794: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff790) {
            ctx->pc = 0x1FF7A0u;
            goto label_1ff7a0;
        }
    }
    ctx->pc = 0x1FF798u;
label_1ff798:
    // 0x1ff798: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ff798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ff79c:
    // 0x1ff79c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1ff79cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1ff7a0:
    // 0x1ff7a0: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_1ff7a4:
    if (ctx->pc == 0x1FF7A4u) {
        ctx->pc = 0x1FF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7A0u;
        // 0x1ff7a4: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF7A8u;
        goto label_1ff7a8;
    }
    ctx->pc = 0x1FF7A0u;
    {
        const bool branch_taken_0x1ff7a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7A0u;
        // 0x1ff7a4: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff7a0) {
            ctx->pc = 0x1FF818u;
            goto label_1ff818;
        }
    }
    ctx->pc = 0x1FF7A8u;
label_1ff7a8:
    // 0x1ff7a8: 0x29020018  slti        $v0, $t0, 0x18
    ctx->pc = 0x1ff7a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
label_1ff7ac:
    // 0x1ff7ac: 0x0  nop
    ctx->pc = 0x1ff7acu;
    // NOP
label_1ff7b0:
    // 0x1ff7b0: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_1ff7b4:
    if (ctx->pc == 0x1FF7B4u) {
        ctx->pc = 0x1FF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7B0u;
        // 0x1ff7b4: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF7B8u;
        goto label_1ff7b8;
    }
    ctx->pc = 0x1FF7B0u;
    {
        const bool branch_taken_0x1ff7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff7b0) {
            ctx->pc = 0x1FF7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF7B0u;
            // 0x1ff7b4: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF808u;
            goto label_1ff808;
        }
    }
    ctx->pc = 0x1FF7B8u;
label_1ff7b8:
    // 0x1ff7b8: 0x2508ffe8  addiu       $t0, $t0, -0x18
    ctx->pc = 0x1ff7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967272));
label_1ff7bc:
    // 0x1ff7bc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff7bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff7c0:
    // 0x1ff7c0: 0x1051804  sllv        $v1, $a1, $t0
    ctx->pc = 0x1ff7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_1ff7c4:
    // 0x1ff7c4: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1ff7c4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff7c8:
    // 0x1ff7c8: 0x39020000  xori        $v0, $t0, 0x0
    ctx->pc = 0x1ff7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)0);
label_1ff7cc:
    // 0x1ff7cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff7d0:
    // 0x1ff7d0: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x1ff7d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_1ff7d4:
    // 0x1ff7d4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff7d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff7d8:
    // 0x1ff7d8: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff7dc:
    // 0x1ff7dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff7e0:
    // 0x1ff7e0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1ff7e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff7e4:
    // 0x1ff7e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff7e8:
    // 0x1ff7e8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ff7e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1ff7ec:
    // 0x1ff7ec: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff7ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff7f0:
    // 0x1ff7f0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff7f4:
    // 0x1ff7f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ff7f8:
    // 0x1ff7f8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1ff7f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1ff7fc:
    // 0x1ff7fc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ff7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ff800:
    // 0x1ff800: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ff804:
    if (ctx->pc == 0x1FF804u) {
        ctx->pc = 0x1FF804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF800u;
        // 0x1ff804: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF808u;
        goto label_1ff808;
    }
    ctx->pc = 0x1FF800u;
    {
        const bool branch_taken_0x1ff800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF800u;
        // 0x1ff804: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff800) {
            ctx->pc = 0x1FF80Cu;
            goto label_1ff80c;
        }
    }
    ctx->pc = 0x1FF808u;
label_1ff808:
    // 0x1ff808: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1ff808u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1ff80c:
    // 0x1ff80c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ff80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1ff810:
    // 0x1ff810: 0x481ffe7  bgez        $a0, . + 4 + (-0x19 << 2)
label_1ff814:
    if (ctx->pc == 0x1FF814u) {
        ctx->pc = 0x1FF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF810u;
        // 0x1ff814: 0x29020018  slti        $v0, $t0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF818u;
        goto label_1ff818;
    }
    ctx->pc = 0x1FF810u;
    {
        const bool branch_taken_0x1ff810 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1FF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF810u;
        // 0x1ff814: 0x29020018  slti        $v0, $t0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff810) {
            ctx->pc = 0x1FF7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff7b0;
        }
    }
    ctx->pc = 0x1FF818u;
label_1ff818:
    // 0x1ff818: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1ff818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1ff81c:
    // 0x1ff81c: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
label_1ff820:
    if (ctx->pc == 0x1FF820u) {
        ctx->pc = 0x1FF820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF81Cu;
        // 0x1ff820: 0x727c2  srl         $a0, $a3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF824u;
        goto label_1ff824;
    }
    ctx->pc = 0x1FF81Cu;
    {
        const bool branch_taken_0x1ff81c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FF820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF81Cu;
        // 0x1ff820: 0x727c2  srl         $a0, $a3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff81c) {
            ctx->pc = 0x1FF830u;
            goto label_1ff830;
        }
    }
    ctx->pc = 0x1FF824u;
label_1ff824:
    // 0x1ff824: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ff824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff828:
    // 0x1ff828: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ff82c:
    if (ctx->pc == 0x1FF82Cu) {
        ctx->pc = 0x1FF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF828u;
        // 0x1ff82c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF830u;
        goto label_1ff830;
    }
    ctx->pc = 0x1FF828u;
    {
        const bool branch_taken_0x1ff828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF828u;
        // 0x1ff82c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff828) {
            ctx->pc = 0x1FF834u;
            goto label_1ff834;
        }
    }
    ctx->pc = 0x1FF830u;
label_1ff830:
    // 0x1ff830: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ff830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ff834:
    // 0x1ff834: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_1ff838:
    if (ctx->pc == 0x1FF838u) {
        ctx->pc = 0x1FF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF834u;
        // 0x1ff838: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF83Cu;
        goto label_1ff83c;
    }
    ctx->pc = 0x1FF834u;
    {
        const bool branch_taken_0x1ff834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF834u;
        // 0x1ff838: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff834) {
            ctx->pc = 0x1FF864u;
            goto label_1ff864;
        }
    }
    ctx->pc = 0x1FF83Cu;
label_1ff83c:
    // 0x1ff83c: 0x29020018  slti        $v0, $t0, 0x18
    ctx->pc = 0x1ff83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
label_1ff840:
    // 0x1ff840: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1ff844:
    if (ctx->pc == 0x1FF844u) {
        ctx->pc = 0x1FF844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF840u;
        // 0x1ff844: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF848u;
        goto label_1ff848;
    }
    ctx->pc = 0x1FF840u;
    {
        const bool branch_taken_0x1ff840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff840) {
            ctx->pc = 0x1FF844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF840u;
            // 0x1ff844: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF850u;
            goto label_1ff850;
        }
    }
    ctx->pc = 0x1FF848u;
label_1ff848:
    // 0x1ff848: 0x2508ffe8  addiu       $t0, $t0, -0x18
    ctx->pc = 0x1ff848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967272));
label_1ff84c:
    // 0x1ff84c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1ff84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1ff850:
    // 0x1ff850: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ff850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1ff854:
    // 0x1ff854: 0x0  nop
    ctx->pc = 0x1ff854u;
    // NOP
label_1ff858:
    // 0x1ff858: 0x0  nop
    ctx->pc = 0x1ff858u;
    // NOP
label_1ff85c:
    // 0x1ff85c: 0x481fff8  bgez        $a0, . + 4 + (-0x8 << 2)
label_1ff860:
    if (ctx->pc == 0x1FF860u) {
        ctx->pc = 0x1FF860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF85Cu;
        // 0x1ff860: 0x29020018  slti        $v0, $t0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF864u;
        goto label_1ff864;
    }
    ctx->pc = 0x1FF85Cu;
    {
        const bool branch_taken_0x1ff85c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1FF860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF85Cu;
        // 0x1ff860: 0x29020018  slti        $v0, $t0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff85c) {
            ctx->pc = 0x1FF840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff840;
        }
    }
    ctx->pc = 0x1FF864u;
label_1ff864:
    // 0x1ff864: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ff864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ff868:
    // 0x1ff868: 0x25080007  addiu       $t0, $t0, 0x7
    ctx->pc = 0x1ff868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
label_1ff86c:
    // 0x1ff86c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1ff86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ff870:
    // 0x1ff870: 0x840c3  sra         $t0, $t0, 3
    ctx->pc = 0x1ff870u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 3));
label_1ff874:
    // 0x1ff874: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1ff874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1ff878:
    // 0x1ff878: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x1ff878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1ff87c:
    // 0x1ff87c: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1ff87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1ff880:
    // 0x1ff880: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ff880u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ff884:
    // 0x1ff884: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1ff884u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1ff888:
    // 0x1ff888: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1ff888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1ff88c:
    // 0x1ff88c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1ff88cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1ff890:
    // 0x1ff890: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1ff890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_1ff894:
    // 0x1ff894: 0x2508fff8  addiu       $t0, $t0, -0x8
    ctx->pc = 0x1ff894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
label_1ff898:
    // 0x1ff898: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1ff898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ff89c:
    // 0x1ff89c: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x1ff89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
label_1ff8a0:
    // 0x1ff8a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ff8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ff8a4:
    // 0x1ff8a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ff8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ff8a8:
    // 0x1ff8a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ff8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ff8ac:
    // 0x1ff8ac: 0xae020344  sw          $v0, 0x344($s0)
    ctx->pc = 0x1ff8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 2));
label_1ff8b0:
    // 0x1ff8b0: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x1ff8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
label_1ff8b4:
    // 0x1ff8b4: 0x8e0202ac  lw          $v0, 0x2AC($s0)
    ctx->pc = 0x1ff8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
label_1ff8b8:
    // 0x1ff8b8: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x1ff8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_1ff8bc:
    // 0x1ff8bc: 0x920302a4  lbu         $v1, 0x2A4($s0)
    ctx->pc = 0x1ff8bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 676)));
label_1ff8c0:
    // 0x1ff8c0: 0xa2230059  sb          $v1, 0x59($s1)
    ctx->pc = 0x1ff8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 3));
label_1ff8c4:
    // 0x1ff8c4: 0x920202b0  lbu         $v0, 0x2B0($s0)
    ctx->pc = 0x1ff8c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 688)));
label_1ff8c8:
    // 0x1ff8c8: 0xa222005a  sb          $v0, 0x5A($s1)
    ctx->pc = 0x1ff8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 2));
label_1ff8cc:
    // 0x1ff8cc: 0x8e05038c  lw          $a1, 0x38C($s0)
    ctx->pc = 0x1ff8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
label_1ff8d0:
    // 0x1ff8d0: 0xc094854  jal         func_252150
label_1ff8d4:
    if (ctx->pc == 0x1FF8D4u) {
        ctx->pc = 0x1FF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8D0u;
        // 0x1ff8d4: 0x1052823  subu        $a1, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF8D8u;
        goto label_1ff8d8;
    }
    ctx->pc = 0x1FF8D0u;
    SET_GPR_U32(ctx, 31, 0x1FF8D8u);
    ctx->pc = 0x1FF8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF8D0u;
    // 0x1ff8d4: 0x1052823  subu        $a1, $t0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x1FF8D0u, 0x1FF8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF8D8u;
label_1ff8d8:
    // 0x1ff8d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ff8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ff8dc:
    // 0x1ff8dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ff8dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ff8e0:
    // 0x1ff8e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ff8e4:
    // 0x1ff8e4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ff8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1ff8e8:
    // 0x1ff8e8: 0x40f809  jalr        $v0
label_1ff8ec:
    if (ctx->pc == 0x1FF8ECu) {
        ctx->pc = 0x1FF8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8E8u;
        // 0x1ff8ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF8F0u;
        goto label_1ff8f0;
    }
    ctx->pc = 0x1FF8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF8F0u);
        ctx->pc = 0x1FF8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8E8u;
        // 0x1ff8ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF8E8u, 0x1FF8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF8F0u;
label_1ff8f0:
    // 0x1ff8f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ff8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ff8f4:
    // 0x1ff8f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ff8f8:
    // 0x1ff8f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff8fc:
    // 0x1ff8fc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1ff8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1ff900:
    // 0x1ff900: 0x40f809  jalr        $v0
label_1ff904:
    if (ctx->pc == 0x1FF904u) {
        ctx->pc = 0x1FF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF900u;
        // 0x1ff904: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF908u;
        goto label_1ff908;
    }
    ctx->pc = 0x1FF900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF908u);
        ctx->pc = 0x1FF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF900u;
        // 0x1ff904: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF900u, 0x1FF908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF908u;
label_1ff908:
    // 0x1ff908: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ff908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff90c:
    // 0x1ff90c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ff90cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff910:
    // 0x1ff910: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ff910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ff914:
    // 0x1ff914: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ff914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ff918:
    // 0x1ff918: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ff918u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1ff91c:
    // 0x1ff91c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ff91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ff920:
    // 0x1ff920: 0x3e00008  jr          $ra
label_1ff924:
    if (ctx->pc == 0x1FF924u) {
        ctx->pc = 0x1FF924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF920u;
        // 0x1ff924: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF928u;
        goto label_fallthrough_0x1ff920;
    }
    ctx->pc = 0x1FF920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF920u;
        // 0x1ff924: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ff920:
    ctx->pc = 0x1FF928u;
}
