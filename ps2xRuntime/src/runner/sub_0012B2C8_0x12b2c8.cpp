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

// Function: sub_0012B2C8
// Address: 0x12b2c8 - 0x12bf58
void sub_0012B2C8_0x12b2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B2C8_0x12b2c8");
#endif

    switch (ctx->pc) {
        case 0x12b2c8u: goto label_12b2c8;
        case 0x12b2ccu: goto label_12b2cc;
        case 0x12b2d0u: goto label_12b2d0;
        case 0x12b2d4u: goto label_12b2d4;
        case 0x12b2d8u: goto label_12b2d8;
        case 0x12b2dcu: goto label_12b2dc;
        case 0x12b2e0u: goto label_12b2e0;
        case 0x12b2e4u: goto label_12b2e4;
        case 0x12b2e8u: goto label_12b2e8;
        case 0x12b2ecu: goto label_12b2ec;
        case 0x12b2f0u: goto label_12b2f0;
        case 0x12b2f4u: goto label_12b2f4;
        case 0x12b2f8u: goto label_12b2f8;
        case 0x12b2fcu: goto label_12b2fc;
        case 0x12b300u: goto label_12b300;
        case 0x12b304u: goto label_12b304;
        case 0x12b308u: goto label_12b308;
        case 0x12b30cu: goto label_12b30c;
        case 0x12b310u: goto label_12b310;
        case 0x12b314u: goto label_12b314;
        case 0x12b318u: goto label_12b318;
        case 0x12b31cu: goto label_12b31c;
        case 0x12b320u: goto label_12b320;
        case 0x12b324u: goto label_12b324;
        case 0x12b328u: goto label_12b328;
        case 0x12b32cu: goto label_12b32c;
        case 0x12b330u: goto label_12b330;
        case 0x12b334u: goto label_12b334;
        case 0x12b338u: goto label_12b338;
        case 0x12b33cu: goto label_12b33c;
        case 0x12b340u: goto label_12b340;
        case 0x12b344u: goto label_12b344;
        case 0x12b348u: goto label_12b348;
        case 0x12b34cu: goto label_12b34c;
        case 0x12b350u: goto label_12b350;
        case 0x12b354u: goto label_12b354;
        case 0x12b358u: goto label_12b358;
        case 0x12b35cu: goto label_12b35c;
        case 0x12b360u: goto label_12b360;
        case 0x12b364u: goto label_12b364;
        case 0x12b368u: goto label_12b368;
        case 0x12b36cu: goto label_12b36c;
        case 0x12b370u: goto label_12b370;
        case 0x12b374u: goto label_12b374;
        case 0x12b378u: goto label_12b378;
        case 0x12b37cu: goto label_12b37c;
        case 0x12b380u: goto label_12b380;
        case 0x12b384u: goto label_12b384;
        case 0x12b388u: goto label_12b388;
        case 0x12b38cu: goto label_12b38c;
        case 0x12b390u: goto label_12b390;
        case 0x12b394u: goto label_12b394;
        case 0x12b398u: goto label_12b398;
        case 0x12b39cu: goto label_12b39c;
        case 0x12b3a0u: goto label_12b3a0;
        case 0x12b3a4u: goto label_12b3a4;
        case 0x12b3a8u: goto label_12b3a8;
        case 0x12b3acu: goto label_12b3ac;
        case 0x12b3b0u: goto label_12b3b0;
        case 0x12b3b4u: goto label_12b3b4;
        case 0x12b3b8u: goto label_12b3b8;
        case 0x12b3bcu: goto label_12b3bc;
        case 0x12b3c0u: goto label_12b3c0;
        case 0x12b3c4u: goto label_12b3c4;
        case 0x12b3c8u: goto label_12b3c8;
        case 0x12b3ccu: goto label_12b3cc;
        case 0x12b3d0u: goto label_12b3d0;
        case 0x12b3d4u: goto label_12b3d4;
        case 0x12b3d8u: goto label_12b3d8;
        case 0x12b3dcu: goto label_12b3dc;
        case 0x12b3e0u: goto label_12b3e0;
        case 0x12b3e4u: goto label_12b3e4;
        case 0x12b3e8u: goto label_12b3e8;
        case 0x12b3ecu: goto label_12b3ec;
        case 0x12b3f0u: goto label_12b3f0;
        case 0x12b3f4u: goto label_12b3f4;
        case 0x12b3f8u: goto label_12b3f8;
        case 0x12b3fcu: goto label_12b3fc;
        case 0x12b400u: goto label_12b400;
        case 0x12b404u: goto label_12b404;
        case 0x12b408u: goto label_12b408;
        case 0x12b40cu: goto label_12b40c;
        case 0x12b410u: goto label_12b410;
        case 0x12b414u: goto label_12b414;
        case 0x12b418u: goto label_12b418;
        case 0x12b41cu: goto label_12b41c;
        case 0x12b420u: goto label_12b420;
        case 0x12b424u: goto label_12b424;
        case 0x12b428u: goto label_12b428;
        case 0x12b42cu: goto label_12b42c;
        case 0x12b430u: goto label_12b430;
        case 0x12b434u: goto label_12b434;
        case 0x12b438u: goto label_12b438;
        case 0x12b43cu: goto label_12b43c;
        case 0x12b440u: goto label_12b440;
        case 0x12b444u: goto label_12b444;
        case 0x12b448u: goto label_12b448;
        case 0x12b44cu: goto label_12b44c;
        case 0x12b450u: goto label_12b450;
        case 0x12b454u: goto label_12b454;
        case 0x12b458u: goto label_12b458;
        case 0x12b45cu: goto label_12b45c;
        case 0x12b460u: goto label_12b460;
        case 0x12b464u: goto label_12b464;
        case 0x12b468u: goto label_12b468;
        case 0x12b46cu: goto label_12b46c;
        case 0x12b470u: goto label_12b470;
        case 0x12b474u: goto label_12b474;
        case 0x12b478u: goto label_12b478;
        case 0x12b47cu: goto label_12b47c;
        case 0x12b480u: goto label_12b480;
        case 0x12b484u: goto label_12b484;
        case 0x12b488u: goto label_12b488;
        case 0x12b48cu: goto label_12b48c;
        case 0x12b490u: goto label_12b490;
        case 0x12b494u: goto label_12b494;
        case 0x12b498u: goto label_12b498;
        case 0x12b49cu: goto label_12b49c;
        case 0x12b4a0u: goto label_12b4a0;
        case 0x12b4a4u: goto label_12b4a4;
        case 0x12b4a8u: goto label_12b4a8;
        case 0x12b4acu: goto label_12b4ac;
        case 0x12b4b0u: goto label_12b4b0;
        case 0x12b4b4u: goto label_12b4b4;
        case 0x12b4b8u: goto label_12b4b8;
        case 0x12b4bcu: goto label_12b4bc;
        case 0x12b4c0u: goto label_12b4c0;
        case 0x12b4c4u: goto label_12b4c4;
        case 0x12b4c8u: goto label_12b4c8;
        case 0x12b4ccu: goto label_12b4cc;
        case 0x12b4d0u: goto label_12b4d0;
        case 0x12b4d4u: goto label_12b4d4;
        case 0x12b4d8u: goto label_12b4d8;
        case 0x12b4dcu: goto label_12b4dc;
        case 0x12b4e0u: goto label_12b4e0;
        case 0x12b4e4u: goto label_12b4e4;
        case 0x12b4e8u: goto label_12b4e8;
        case 0x12b4ecu: goto label_12b4ec;
        case 0x12b4f0u: goto label_12b4f0;
        case 0x12b4f4u: goto label_12b4f4;
        case 0x12b4f8u: goto label_12b4f8;
        case 0x12b4fcu: goto label_12b4fc;
        case 0x12b500u: goto label_12b500;
        case 0x12b504u: goto label_12b504;
        case 0x12b508u: goto label_12b508;
        case 0x12b50cu: goto label_12b50c;
        case 0x12b510u: goto label_12b510;
        case 0x12b514u: goto label_12b514;
        case 0x12b518u: goto label_12b518;
        case 0x12b51cu: goto label_12b51c;
        case 0x12b520u: goto label_12b520;
        case 0x12b524u: goto label_12b524;
        case 0x12b528u: goto label_12b528;
        case 0x12b52cu: goto label_12b52c;
        case 0x12b530u: goto label_12b530;
        case 0x12b534u: goto label_12b534;
        case 0x12b538u: goto label_12b538;
        case 0x12b53cu: goto label_12b53c;
        case 0x12b540u: goto label_12b540;
        case 0x12b544u: goto label_12b544;
        case 0x12b548u: goto label_12b548;
        case 0x12b54cu: goto label_12b54c;
        case 0x12b550u: goto label_12b550;
        case 0x12b554u: goto label_12b554;
        case 0x12b558u: goto label_12b558;
        case 0x12b55cu: goto label_12b55c;
        case 0x12b560u: goto label_12b560;
        case 0x12b564u: goto label_12b564;
        case 0x12b568u: goto label_12b568;
        case 0x12b56cu: goto label_12b56c;
        case 0x12b570u: goto label_12b570;
        case 0x12b574u: goto label_12b574;
        case 0x12b578u: goto label_12b578;
        case 0x12b57cu: goto label_12b57c;
        case 0x12b580u: goto label_12b580;
        case 0x12b584u: goto label_12b584;
        case 0x12b588u: goto label_12b588;
        case 0x12b58cu: goto label_12b58c;
        case 0x12b590u: goto label_12b590;
        case 0x12b594u: goto label_12b594;
        case 0x12b598u: goto label_12b598;
        case 0x12b59cu: goto label_12b59c;
        case 0x12b5a0u: goto label_12b5a0;
        case 0x12b5a4u: goto label_12b5a4;
        case 0x12b5a8u: goto label_12b5a8;
        case 0x12b5acu: goto label_12b5ac;
        case 0x12b5b0u: goto label_12b5b0;
        case 0x12b5b4u: goto label_12b5b4;
        case 0x12b5b8u: goto label_12b5b8;
        case 0x12b5bcu: goto label_12b5bc;
        case 0x12b5c0u: goto label_12b5c0;
        case 0x12b5c4u: goto label_12b5c4;
        case 0x12b5c8u: goto label_12b5c8;
        case 0x12b5ccu: goto label_12b5cc;
        case 0x12b5d0u: goto label_12b5d0;
        case 0x12b5d4u: goto label_12b5d4;
        case 0x12b5d8u: goto label_12b5d8;
        case 0x12b5dcu: goto label_12b5dc;
        case 0x12b5e0u: goto label_12b5e0;
        case 0x12b5e4u: goto label_12b5e4;
        case 0x12b5e8u: goto label_12b5e8;
        case 0x12b5ecu: goto label_12b5ec;
        case 0x12b5f0u: goto label_12b5f0;
        case 0x12b5f4u: goto label_12b5f4;
        case 0x12b5f8u: goto label_12b5f8;
        case 0x12b5fcu: goto label_12b5fc;
        case 0x12b600u: goto label_12b600;
        case 0x12b604u: goto label_12b604;
        case 0x12b608u: goto label_12b608;
        case 0x12b60cu: goto label_12b60c;
        case 0x12b610u: goto label_12b610;
        case 0x12b614u: goto label_12b614;
        case 0x12b618u: goto label_12b618;
        case 0x12b61cu: goto label_12b61c;
        case 0x12b620u: goto label_12b620;
        case 0x12b624u: goto label_12b624;
        case 0x12b628u: goto label_12b628;
        case 0x12b62cu: goto label_12b62c;
        case 0x12b630u: goto label_12b630;
        case 0x12b634u: goto label_12b634;
        case 0x12b638u: goto label_12b638;
        case 0x12b63cu: goto label_12b63c;
        case 0x12b640u: goto label_12b640;
        case 0x12b644u: goto label_12b644;
        case 0x12b648u: goto label_12b648;
        case 0x12b64cu: goto label_12b64c;
        case 0x12b650u: goto label_12b650;
        case 0x12b654u: goto label_12b654;
        case 0x12b658u: goto label_12b658;
        case 0x12b65cu: goto label_12b65c;
        case 0x12b660u: goto label_12b660;
        case 0x12b664u: goto label_12b664;
        case 0x12b668u: goto label_12b668;
        case 0x12b66cu: goto label_12b66c;
        case 0x12b670u: goto label_12b670;
        case 0x12b674u: goto label_12b674;
        case 0x12b678u: goto label_12b678;
        case 0x12b67cu: goto label_12b67c;
        case 0x12b680u: goto label_12b680;
        case 0x12b684u: goto label_12b684;
        case 0x12b688u: goto label_12b688;
        case 0x12b68cu: goto label_12b68c;
        case 0x12b690u: goto label_12b690;
        case 0x12b694u: goto label_12b694;
        case 0x12b698u: goto label_12b698;
        case 0x12b69cu: goto label_12b69c;
        case 0x12b6a0u: goto label_12b6a0;
        case 0x12b6a4u: goto label_12b6a4;
        case 0x12b6a8u: goto label_12b6a8;
        case 0x12b6acu: goto label_12b6ac;
        case 0x12b6b0u: goto label_12b6b0;
        case 0x12b6b4u: goto label_12b6b4;
        case 0x12b6b8u: goto label_12b6b8;
        case 0x12b6bcu: goto label_12b6bc;
        case 0x12b6c0u: goto label_12b6c0;
        case 0x12b6c4u: goto label_12b6c4;
        case 0x12b6c8u: goto label_12b6c8;
        case 0x12b6ccu: goto label_12b6cc;
        case 0x12b6d0u: goto label_12b6d0;
        case 0x12b6d4u: goto label_12b6d4;
        case 0x12b6d8u: goto label_12b6d8;
        case 0x12b6dcu: goto label_12b6dc;
        case 0x12b6e0u: goto label_12b6e0;
        case 0x12b6e4u: goto label_12b6e4;
        case 0x12b6e8u: goto label_12b6e8;
        case 0x12b6ecu: goto label_12b6ec;
        case 0x12b6f0u: goto label_12b6f0;
        case 0x12b6f4u: goto label_12b6f4;
        case 0x12b6f8u: goto label_12b6f8;
        case 0x12b6fcu: goto label_12b6fc;
        case 0x12b700u: goto label_12b700;
        case 0x12b704u: goto label_12b704;
        case 0x12b708u: goto label_12b708;
        case 0x12b70cu: goto label_12b70c;
        case 0x12b710u: goto label_12b710;
        case 0x12b714u: goto label_12b714;
        case 0x12b718u: goto label_12b718;
        case 0x12b71cu: goto label_12b71c;
        case 0x12b720u: goto label_12b720;
        case 0x12b724u: goto label_12b724;
        case 0x12b728u: goto label_12b728;
        case 0x12b72cu: goto label_12b72c;
        case 0x12b730u: goto label_12b730;
        case 0x12b734u: goto label_12b734;
        case 0x12b738u: goto label_12b738;
        case 0x12b73cu: goto label_12b73c;
        case 0x12b740u: goto label_12b740;
        case 0x12b744u: goto label_12b744;
        case 0x12b748u: goto label_12b748;
        case 0x12b74cu: goto label_12b74c;
        case 0x12b750u: goto label_12b750;
        case 0x12b754u: goto label_12b754;
        case 0x12b758u: goto label_12b758;
        case 0x12b75cu: goto label_12b75c;
        case 0x12b760u: goto label_12b760;
        case 0x12b764u: goto label_12b764;
        case 0x12b768u: goto label_12b768;
        case 0x12b76cu: goto label_12b76c;
        case 0x12b770u: goto label_12b770;
        case 0x12b774u: goto label_12b774;
        case 0x12b778u: goto label_12b778;
        case 0x12b77cu: goto label_12b77c;
        case 0x12b780u: goto label_12b780;
        case 0x12b784u: goto label_12b784;
        case 0x12b788u: goto label_12b788;
        case 0x12b78cu: goto label_12b78c;
        case 0x12b790u: goto label_12b790;
        case 0x12b794u: goto label_12b794;
        case 0x12b798u: goto label_12b798;
        case 0x12b79cu: goto label_12b79c;
        case 0x12b7a0u: goto label_12b7a0;
        case 0x12b7a4u: goto label_12b7a4;
        case 0x12b7a8u: goto label_12b7a8;
        case 0x12b7acu: goto label_12b7ac;
        case 0x12b7b0u: goto label_12b7b0;
        case 0x12b7b4u: goto label_12b7b4;
        case 0x12b7b8u: goto label_12b7b8;
        case 0x12b7bcu: goto label_12b7bc;
        case 0x12b7c0u: goto label_12b7c0;
        case 0x12b7c4u: goto label_12b7c4;
        case 0x12b7c8u: goto label_12b7c8;
        case 0x12b7ccu: goto label_12b7cc;
        case 0x12b7d0u: goto label_12b7d0;
        case 0x12b7d4u: goto label_12b7d4;
        case 0x12b7d8u: goto label_12b7d8;
        case 0x12b7dcu: goto label_12b7dc;
        case 0x12b7e0u: goto label_12b7e0;
        case 0x12b7e4u: goto label_12b7e4;
        case 0x12b7e8u: goto label_12b7e8;
        case 0x12b7ecu: goto label_12b7ec;
        case 0x12b7f0u: goto label_12b7f0;
        case 0x12b7f4u: goto label_12b7f4;
        case 0x12b7f8u: goto label_12b7f8;
        case 0x12b7fcu: goto label_12b7fc;
        case 0x12b800u: goto label_12b800;
        case 0x12b804u: goto label_12b804;
        case 0x12b808u: goto label_12b808;
        case 0x12b80cu: goto label_12b80c;
        case 0x12b810u: goto label_12b810;
        case 0x12b814u: goto label_12b814;
        case 0x12b818u: goto label_12b818;
        case 0x12b81cu: goto label_12b81c;
        case 0x12b820u: goto label_12b820;
        case 0x12b824u: goto label_12b824;
        case 0x12b828u: goto label_12b828;
        case 0x12b82cu: goto label_12b82c;
        case 0x12b830u: goto label_12b830;
        case 0x12b834u: goto label_12b834;
        case 0x12b838u: goto label_12b838;
        case 0x12b83cu: goto label_12b83c;
        case 0x12b840u: goto label_12b840;
        case 0x12b844u: goto label_12b844;
        case 0x12b848u: goto label_12b848;
        case 0x12b84cu: goto label_12b84c;
        case 0x12b850u: goto label_12b850;
        case 0x12b854u: goto label_12b854;
        case 0x12b858u: goto label_12b858;
        case 0x12b85cu: goto label_12b85c;
        case 0x12b860u: goto label_12b860;
        case 0x12b864u: goto label_12b864;
        case 0x12b868u: goto label_12b868;
        case 0x12b86cu: goto label_12b86c;
        case 0x12b870u: goto label_12b870;
        case 0x12b874u: goto label_12b874;
        case 0x12b878u: goto label_12b878;
        case 0x12b87cu: goto label_12b87c;
        case 0x12b880u: goto label_12b880;
        case 0x12b884u: goto label_12b884;
        case 0x12b888u: goto label_12b888;
        case 0x12b88cu: goto label_12b88c;
        case 0x12b890u: goto label_12b890;
        case 0x12b894u: goto label_12b894;
        case 0x12b898u: goto label_12b898;
        case 0x12b89cu: goto label_12b89c;
        case 0x12b8a0u: goto label_12b8a0;
        case 0x12b8a4u: goto label_12b8a4;
        case 0x12b8a8u: goto label_12b8a8;
        case 0x12b8acu: goto label_12b8ac;
        case 0x12b8b0u: goto label_12b8b0;
        case 0x12b8b4u: goto label_12b8b4;
        case 0x12b8b8u: goto label_12b8b8;
        case 0x12b8bcu: goto label_12b8bc;
        case 0x12b8c0u: goto label_12b8c0;
        case 0x12b8c4u: goto label_12b8c4;
        case 0x12b8c8u: goto label_12b8c8;
        case 0x12b8ccu: goto label_12b8cc;
        case 0x12b8d0u: goto label_12b8d0;
        case 0x12b8d4u: goto label_12b8d4;
        case 0x12b8d8u: goto label_12b8d8;
        case 0x12b8dcu: goto label_12b8dc;
        case 0x12b8e0u: goto label_12b8e0;
        case 0x12b8e4u: goto label_12b8e4;
        case 0x12b8e8u: goto label_12b8e8;
        case 0x12b8ecu: goto label_12b8ec;
        case 0x12b8f0u: goto label_12b8f0;
        case 0x12b8f4u: goto label_12b8f4;
        case 0x12b8f8u: goto label_12b8f8;
        case 0x12b8fcu: goto label_12b8fc;
        case 0x12b900u: goto label_12b900;
        case 0x12b904u: goto label_12b904;
        case 0x12b908u: goto label_12b908;
        case 0x12b90cu: goto label_12b90c;
        case 0x12b910u: goto label_12b910;
        case 0x12b914u: goto label_12b914;
        case 0x12b918u: goto label_12b918;
        case 0x12b91cu: goto label_12b91c;
        case 0x12b920u: goto label_12b920;
        case 0x12b924u: goto label_12b924;
        case 0x12b928u: goto label_12b928;
        case 0x12b92cu: goto label_12b92c;
        case 0x12b930u: goto label_12b930;
        case 0x12b934u: goto label_12b934;
        case 0x12b938u: goto label_12b938;
        case 0x12b93cu: goto label_12b93c;
        case 0x12b940u: goto label_12b940;
        case 0x12b944u: goto label_12b944;
        case 0x12b948u: goto label_12b948;
        case 0x12b94cu: goto label_12b94c;
        case 0x12b950u: goto label_12b950;
        case 0x12b954u: goto label_12b954;
        case 0x12b958u: goto label_12b958;
        case 0x12b95cu: goto label_12b95c;
        case 0x12b960u: goto label_12b960;
        case 0x12b964u: goto label_12b964;
        case 0x12b968u: goto label_12b968;
        case 0x12b96cu: goto label_12b96c;
        case 0x12b970u: goto label_12b970;
        case 0x12b974u: goto label_12b974;
        case 0x12b978u: goto label_12b978;
        case 0x12b97cu: goto label_12b97c;
        case 0x12b980u: goto label_12b980;
        case 0x12b984u: goto label_12b984;
        case 0x12b988u: goto label_12b988;
        case 0x12b98cu: goto label_12b98c;
        case 0x12b990u: goto label_12b990;
        case 0x12b994u: goto label_12b994;
        case 0x12b998u: goto label_12b998;
        case 0x12b99cu: goto label_12b99c;
        case 0x12b9a0u: goto label_12b9a0;
        case 0x12b9a4u: goto label_12b9a4;
        case 0x12b9a8u: goto label_12b9a8;
        case 0x12b9acu: goto label_12b9ac;
        case 0x12b9b0u: goto label_12b9b0;
        case 0x12b9b4u: goto label_12b9b4;
        case 0x12b9b8u: goto label_12b9b8;
        case 0x12b9bcu: goto label_12b9bc;
        case 0x12b9c0u: goto label_12b9c0;
        case 0x12b9c4u: goto label_12b9c4;
        case 0x12b9c8u: goto label_12b9c8;
        case 0x12b9ccu: goto label_12b9cc;
        case 0x12b9d0u: goto label_12b9d0;
        case 0x12b9d4u: goto label_12b9d4;
        case 0x12b9d8u: goto label_12b9d8;
        case 0x12b9dcu: goto label_12b9dc;
        case 0x12b9e0u: goto label_12b9e0;
        case 0x12b9e4u: goto label_12b9e4;
        case 0x12b9e8u: goto label_12b9e8;
        case 0x12b9ecu: goto label_12b9ec;
        case 0x12b9f0u: goto label_12b9f0;
        case 0x12b9f4u: goto label_12b9f4;
        case 0x12b9f8u: goto label_12b9f8;
        case 0x12b9fcu: goto label_12b9fc;
        case 0x12ba00u: goto label_12ba00;
        case 0x12ba04u: goto label_12ba04;
        case 0x12ba08u: goto label_12ba08;
        case 0x12ba0cu: goto label_12ba0c;
        case 0x12ba10u: goto label_12ba10;
        case 0x12ba14u: goto label_12ba14;
        case 0x12ba18u: goto label_12ba18;
        case 0x12ba1cu: goto label_12ba1c;
        case 0x12ba20u: goto label_12ba20;
        case 0x12ba24u: goto label_12ba24;
        case 0x12ba28u: goto label_12ba28;
        case 0x12ba2cu: goto label_12ba2c;
        case 0x12ba30u: goto label_12ba30;
        case 0x12ba34u: goto label_12ba34;
        case 0x12ba38u: goto label_12ba38;
        case 0x12ba3cu: goto label_12ba3c;
        case 0x12ba40u: goto label_12ba40;
        case 0x12ba44u: goto label_12ba44;
        case 0x12ba48u: goto label_12ba48;
        case 0x12ba4cu: goto label_12ba4c;
        case 0x12ba50u: goto label_12ba50;
        case 0x12ba54u: goto label_12ba54;
        case 0x12ba58u: goto label_12ba58;
        case 0x12ba5cu: goto label_12ba5c;
        case 0x12ba60u: goto label_12ba60;
        case 0x12ba64u: goto label_12ba64;
        case 0x12ba68u: goto label_12ba68;
        case 0x12ba6cu: goto label_12ba6c;
        case 0x12ba70u: goto label_12ba70;
        case 0x12ba74u: goto label_12ba74;
        case 0x12ba78u: goto label_12ba78;
        case 0x12ba7cu: goto label_12ba7c;
        case 0x12ba80u: goto label_12ba80;
        case 0x12ba84u: goto label_12ba84;
        case 0x12ba88u: goto label_12ba88;
        case 0x12ba8cu: goto label_12ba8c;
        case 0x12ba90u: goto label_12ba90;
        case 0x12ba94u: goto label_12ba94;
        case 0x12ba98u: goto label_12ba98;
        case 0x12ba9cu: goto label_12ba9c;
        case 0x12baa0u: goto label_12baa0;
        case 0x12baa4u: goto label_12baa4;
        case 0x12baa8u: goto label_12baa8;
        case 0x12baacu: goto label_12baac;
        case 0x12bab0u: goto label_12bab0;
        case 0x12bab4u: goto label_12bab4;
        case 0x12bab8u: goto label_12bab8;
        case 0x12babcu: goto label_12babc;
        case 0x12bac0u: goto label_12bac0;
        case 0x12bac4u: goto label_12bac4;
        case 0x12bac8u: goto label_12bac8;
        case 0x12baccu: goto label_12bacc;
        case 0x12bad0u: goto label_12bad0;
        case 0x12bad4u: goto label_12bad4;
        case 0x12bad8u: goto label_12bad8;
        case 0x12badcu: goto label_12badc;
        case 0x12bae0u: goto label_12bae0;
        case 0x12bae4u: goto label_12bae4;
        case 0x12bae8u: goto label_12bae8;
        case 0x12baecu: goto label_12baec;
        case 0x12baf0u: goto label_12baf0;
        case 0x12baf4u: goto label_12baf4;
        case 0x12baf8u: goto label_12baf8;
        case 0x12bafcu: goto label_12bafc;
        case 0x12bb00u: goto label_12bb00;
        case 0x12bb04u: goto label_12bb04;
        case 0x12bb08u: goto label_12bb08;
        case 0x12bb0cu: goto label_12bb0c;
        case 0x12bb10u: goto label_12bb10;
        case 0x12bb14u: goto label_12bb14;
        case 0x12bb18u: goto label_12bb18;
        case 0x12bb1cu: goto label_12bb1c;
        case 0x12bb20u: goto label_12bb20;
        case 0x12bb24u: goto label_12bb24;
        case 0x12bb28u: goto label_12bb28;
        case 0x12bb2cu: goto label_12bb2c;
        case 0x12bb30u: goto label_12bb30;
        case 0x12bb34u: goto label_12bb34;
        case 0x12bb38u: goto label_12bb38;
        case 0x12bb3cu: goto label_12bb3c;
        case 0x12bb40u: goto label_12bb40;
        case 0x12bb44u: goto label_12bb44;
        case 0x12bb48u: goto label_12bb48;
        case 0x12bb4cu: goto label_12bb4c;
        case 0x12bb50u: goto label_12bb50;
        case 0x12bb54u: goto label_12bb54;
        case 0x12bb58u: goto label_12bb58;
        case 0x12bb5cu: goto label_12bb5c;
        case 0x12bb60u: goto label_12bb60;
        case 0x12bb64u: goto label_12bb64;
        case 0x12bb68u: goto label_12bb68;
        case 0x12bb6cu: goto label_12bb6c;
        case 0x12bb70u: goto label_12bb70;
        case 0x12bb74u: goto label_12bb74;
        case 0x12bb78u: goto label_12bb78;
        case 0x12bb7cu: goto label_12bb7c;
        case 0x12bb80u: goto label_12bb80;
        case 0x12bb84u: goto label_12bb84;
        case 0x12bb88u: goto label_12bb88;
        case 0x12bb8cu: goto label_12bb8c;
        case 0x12bb90u: goto label_12bb90;
        case 0x12bb94u: goto label_12bb94;
        case 0x12bb98u: goto label_12bb98;
        case 0x12bb9cu: goto label_12bb9c;
        case 0x12bba0u: goto label_12bba0;
        case 0x12bba4u: goto label_12bba4;
        case 0x12bba8u: goto label_12bba8;
        case 0x12bbacu: goto label_12bbac;
        case 0x12bbb0u: goto label_12bbb0;
        case 0x12bbb4u: goto label_12bbb4;
        case 0x12bbb8u: goto label_12bbb8;
        case 0x12bbbcu: goto label_12bbbc;
        case 0x12bbc0u: goto label_12bbc0;
        case 0x12bbc4u: goto label_12bbc4;
        case 0x12bbc8u: goto label_12bbc8;
        case 0x12bbccu: goto label_12bbcc;
        case 0x12bbd0u: goto label_12bbd0;
        case 0x12bbd4u: goto label_12bbd4;
        case 0x12bbd8u: goto label_12bbd8;
        case 0x12bbdcu: goto label_12bbdc;
        case 0x12bbe0u: goto label_12bbe0;
        case 0x12bbe4u: goto label_12bbe4;
        case 0x12bbe8u: goto label_12bbe8;
        case 0x12bbecu: goto label_12bbec;
        case 0x12bbf0u: goto label_12bbf0;
        case 0x12bbf4u: goto label_12bbf4;
        case 0x12bbf8u: goto label_12bbf8;
        case 0x12bbfcu: goto label_12bbfc;
        case 0x12bc00u: goto label_12bc00;
        case 0x12bc04u: goto label_12bc04;
        case 0x12bc08u: goto label_12bc08;
        case 0x12bc0cu: goto label_12bc0c;
        case 0x12bc10u: goto label_12bc10;
        case 0x12bc14u: goto label_12bc14;
        case 0x12bc18u: goto label_12bc18;
        case 0x12bc1cu: goto label_12bc1c;
        case 0x12bc20u: goto label_12bc20;
        case 0x12bc24u: goto label_12bc24;
        case 0x12bc28u: goto label_12bc28;
        case 0x12bc2cu: goto label_12bc2c;
        case 0x12bc30u: goto label_12bc30;
        case 0x12bc34u: goto label_12bc34;
        case 0x12bc38u: goto label_12bc38;
        case 0x12bc3cu: goto label_12bc3c;
        case 0x12bc40u: goto label_12bc40;
        case 0x12bc44u: goto label_12bc44;
        case 0x12bc48u: goto label_12bc48;
        case 0x12bc4cu: goto label_12bc4c;
        case 0x12bc50u: goto label_12bc50;
        case 0x12bc54u: goto label_12bc54;
        case 0x12bc58u: goto label_12bc58;
        case 0x12bc5cu: goto label_12bc5c;
        case 0x12bc60u: goto label_12bc60;
        case 0x12bc64u: goto label_12bc64;
        case 0x12bc68u: goto label_12bc68;
        case 0x12bc6cu: goto label_12bc6c;
        case 0x12bc70u: goto label_12bc70;
        case 0x12bc74u: goto label_12bc74;
        case 0x12bc78u: goto label_12bc78;
        case 0x12bc7cu: goto label_12bc7c;
        case 0x12bc80u: goto label_12bc80;
        case 0x12bc84u: goto label_12bc84;
        case 0x12bc88u: goto label_12bc88;
        case 0x12bc8cu: goto label_12bc8c;
        case 0x12bc90u: goto label_12bc90;
        case 0x12bc94u: goto label_12bc94;
        case 0x12bc98u: goto label_12bc98;
        case 0x12bc9cu: goto label_12bc9c;
        case 0x12bca0u: goto label_12bca0;
        case 0x12bca4u: goto label_12bca4;
        case 0x12bca8u: goto label_12bca8;
        case 0x12bcacu: goto label_12bcac;
        case 0x12bcb0u: goto label_12bcb0;
        case 0x12bcb4u: goto label_12bcb4;
        case 0x12bcb8u: goto label_12bcb8;
        case 0x12bcbcu: goto label_12bcbc;
        case 0x12bcc0u: goto label_12bcc0;
        case 0x12bcc4u: goto label_12bcc4;
        case 0x12bcc8u: goto label_12bcc8;
        case 0x12bcccu: goto label_12bccc;
        case 0x12bcd0u: goto label_12bcd0;
        case 0x12bcd4u: goto label_12bcd4;
        case 0x12bcd8u: goto label_12bcd8;
        case 0x12bcdcu: goto label_12bcdc;
        case 0x12bce0u: goto label_12bce0;
        case 0x12bce4u: goto label_12bce4;
        case 0x12bce8u: goto label_12bce8;
        case 0x12bcecu: goto label_12bcec;
        case 0x12bcf0u: goto label_12bcf0;
        case 0x12bcf4u: goto label_12bcf4;
        case 0x12bcf8u: goto label_12bcf8;
        case 0x12bcfcu: goto label_12bcfc;
        case 0x12bd00u: goto label_12bd00;
        case 0x12bd04u: goto label_12bd04;
        case 0x12bd08u: goto label_12bd08;
        case 0x12bd0cu: goto label_12bd0c;
        case 0x12bd10u: goto label_12bd10;
        case 0x12bd14u: goto label_12bd14;
        case 0x12bd18u: goto label_12bd18;
        case 0x12bd1cu: goto label_12bd1c;
        case 0x12bd20u: goto label_12bd20;
        case 0x12bd24u: goto label_12bd24;
        case 0x12bd28u: goto label_12bd28;
        case 0x12bd2cu: goto label_12bd2c;
        case 0x12bd30u: goto label_12bd30;
        case 0x12bd34u: goto label_12bd34;
        case 0x12bd38u: goto label_12bd38;
        case 0x12bd3cu: goto label_12bd3c;
        case 0x12bd40u: goto label_12bd40;
        case 0x12bd44u: goto label_12bd44;
        case 0x12bd48u: goto label_12bd48;
        case 0x12bd4cu: goto label_12bd4c;
        case 0x12bd50u: goto label_12bd50;
        case 0x12bd54u: goto label_12bd54;
        case 0x12bd58u: goto label_12bd58;
        case 0x12bd5cu: goto label_12bd5c;
        case 0x12bd60u: goto label_12bd60;
        case 0x12bd64u: goto label_12bd64;
        case 0x12bd68u: goto label_12bd68;
        case 0x12bd6cu: goto label_12bd6c;
        case 0x12bd70u: goto label_12bd70;
        case 0x12bd74u: goto label_12bd74;
        case 0x12bd78u: goto label_12bd78;
        case 0x12bd7cu: goto label_12bd7c;
        case 0x12bd80u: goto label_12bd80;
        case 0x12bd84u: goto label_12bd84;
        case 0x12bd88u: goto label_12bd88;
        case 0x12bd8cu: goto label_12bd8c;
        case 0x12bd90u: goto label_12bd90;
        case 0x12bd94u: goto label_12bd94;
        case 0x12bd98u: goto label_12bd98;
        case 0x12bd9cu: goto label_12bd9c;
        case 0x12bda0u: goto label_12bda0;
        case 0x12bda4u: goto label_12bda4;
        case 0x12bda8u: goto label_12bda8;
        case 0x12bdacu: goto label_12bdac;
        case 0x12bdb0u: goto label_12bdb0;
        case 0x12bdb4u: goto label_12bdb4;
        case 0x12bdb8u: goto label_12bdb8;
        case 0x12bdbcu: goto label_12bdbc;
        case 0x12bdc0u: goto label_12bdc0;
        case 0x12bdc4u: goto label_12bdc4;
        case 0x12bdc8u: goto label_12bdc8;
        case 0x12bdccu: goto label_12bdcc;
        case 0x12bdd0u: goto label_12bdd0;
        case 0x12bdd4u: goto label_12bdd4;
        case 0x12bdd8u: goto label_12bdd8;
        case 0x12bddcu: goto label_12bddc;
        case 0x12bde0u: goto label_12bde0;
        case 0x12bde4u: goto label_12bde4;
        case 0x12bde8u: goto label_12bde8;
        case 0x12bdecu: goto label_12bdec;
        case 0x12bdf0u: goto label_12bdf0;
        case 0x12bdf4u: goto label_12bdf4;
        case 0x12bdf8u: goto label_12bdf8;
        case 0x12bdfcu: goto label_12bdfc;
        case 0x12be00u: goto label_12be00;
        case 0x12be04u: goto label_12be04;
        case 0x12be08u: goto label_12be08;
        case 0x12be0cu: goto label_12be0c;
        case 0x12be10u: goto label_12be10;
        case 0x12be14u: goto label_12be14;
        case 0x12be18u: goto label_12be18;
        case 0x12be1cu: goto label_12be1c;
        case 0x12be20u: goto label_12be20;
        case 0x12be24u: goto label_12be24;
        case 0x12be28u: goto label_12be28;
        case 0x12be2cu: goto label_12be2c;
        case 0x12be30u: goto label_12be30;
        case 0x12be34u: goto label_12be34;
        case 0x12be38u: goto label_12be38;
        case 0x12be3cu: goto label_12be3c;
        case 0x12be40u: goto label_12be40;
        case 0x12be44u: goto label_12be44;
        case 0x12be48u: goto label_12be48;
        case 0x12be4cu: goto label_12be4c;
        case 0x12be50u: goto label_12be50;
        case 0x12be54u: goto label_12be54;
        case 0x12be58u: goto label_12be58;
        case 0x12be5cu: goto label_12be5c;
        case 0x12be60u: goto label_12be60;
        case 0x12be64u: goto label_12be64;
        case 0x12be68u: goto label_12be68;
        case 0x12be6cu: goto label_12be6c;
        case 0x12be70u: goto label_12be70;
        case 0x12be74u: goto label_12be74;
        case 0x12be78u: goto label_12be78;
        case 0x12be7cu: goto label_12be7c;
        case 0x12be80u: goto label_12be80;
        case 0x12be84u: goto label_12be84;
        case 0x12be88u: goto label_12be88;
        case 0x12be8cu: goto label_12be8c;
        case 0x12be90u: goto label_12be90;
        case 0x12be94u: goto label_12be94;
        case 0x12be98u: goto label_12be98;
        case 0x12be9cu: goto label_12be9c;
        case 0x12bea0u: goto label_12bea0;
        case 0x12bea4u: goto label_12bea4;
        case 0x12bea8u: goto label_12bea8;
        case 0x12beacu: goto label_12beac;
        case 0x12beb0u: goto label_12beb0;
        case 0x12beb4u: goto label_12beb4;
        case 0x12beb8u: goto label_12beb8;
        case 0x12bebcu: goto label_12bebc;
        case 0x12bec0u: goto label_12bec0;
        case 0x12bec4u: goto label_12bec4;
        case 0x12bec8u: goto label_12bec8;
        case 0x12beccu: goto label_12becc;
        case 0x12bed0u: goto label_12bed0;
        case 0x12bed4u: goto label_12bed4;
        case 0x12bed8u: goto label_12bed8;
        case 0x12bedcu: goto label_12bedc;
        case 0x12bee0u: goto label_12bee0;
        case 0x12bee4u: goto label_12bee4;
        case 0x12bee8u: goto label_12bee8;
        case 0x12beecu: goto label_12beec;
        case 0x12bef0u: goto label_12bef0;
        case 0x12bef4u: goto label_12bef4;
        case 0x12bef8u: goto label_12bef8;
        case 0x12befcu: goto label_12befc;
        case 0x12bf00u: goto label_12bf00;
        case 0x12bf04u: goto label_12bf04;
        case 0x12bf08u: goto label_12bf08;
        case 0x12bf0cu: goto label_12bf0c;
        case 0x12bf10u: goto label_12bf10;
        case 0x12bf14u: goto label_12bf14;
        case 0x12bf18u: goto label_12bf18;
        case 0x12bf1cu: goto label_12bf1c;
        case 0x12bf20u: goto label_12bf20;
        case 0x12bf24u: goto label_12bf24;
        case 0x12bf28u: goto label_12bf28;
        case 0x12bf2cu: goto label_12bf2c;
        case 0x12bf30u: goto label_12bf30;
        case 0x12bf34u: goto label_12bf34;
        case 0x12bf38u: goto label_12bf38;
        case 0x12bf3cu: goto label_12bf3c;
        case 0x12bf40u: goto label_12bf40;
        case 0x12bf44u: goto label_12bf44;
        case 0x12bf48u: goto label_12bf48;
        case 0x12bf4cu: goto label_12bf4c;
        case 0x12bf50u: goto label_12bf50;
        case 0x12bf54u: goto label_12bf54;
        default: break;
    }

    ctx->pc = 0x12b2c8u;

label_12b2c8:
    // 0x12b2c8: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x12b2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
label_12b2cc:
    // 0x12b2cc: 0xffb10298  sd          $s1, 0x298($sp)
    ctx->pc = 0x12b2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 664), GPR_U64(ctx, 17));
label_12b2d0:
    // 0x12b2d0: 0xffb302a8  sd          $s3, 0x2A8($sp)
    ctx->pc = 0x12b2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 19));
label_12b2d4:
    // 0x12b2d4: 0xffb502b8  sd          $s5, 0x2B8($sp)
    ctx->pc = 0x12b2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 21));
label_12b2d8:
    // 0x12b2d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12b2d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12b2dc:
    // 0x12b2dc: 0xffbe02d0  sd          $fp, 0x2D0($sp)
    ctx->pc = 0x12b2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 30));
label_12b2e0:
    // 0x12b2e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12b2e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12b2e4:
    // 0x12b2e4: 0xffb00290  sd          $s0, 0x290($sp)
    ctx->pc = 0x12b2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 16));
label_12b2e8:
    // 0x12b2e8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12b2e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b2ec:
    // 0x12b2ec: 0xffb202a0  sd          $s2, 0x2A0($sp)
    ctx->pc = 0x12b2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 18));
label_12b2f0:
    // 0x12b2f0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x12b2f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b2f4:
    // 0x12b2f4: 0xffb402b0  sd          $s4, 0x2B0($sp)
    ctx->pc = 0x12b2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 20));
label_12b2f8:
    // 0x12b2f8: 0xffb602c0  sd          $s6, 0x2C0($sp)
    ctx->pc = 0x12b2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 22));
label_12b2fc:
    // 0x12b2fc: 0xffb702c8  sd          $s7, 0x2C8($sp)
    ctx->pc = 0x12b2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 712), GPR_U64(ctx, 23));
label_12b300:
    // 0x12b300: 0xffbf02d8  sd          $ra, 0x2D8($sp)
    ctx->pc = 0x12b300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 728), GPR_U64(ctx, 31));
label_12b304:
    // 0x12b304: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x12b304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
label_12b308:
    // 0x12b308: 0xafa70264  sw          $a3, 0x264($sp)
    ctx->pc = 0x12b308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 7));
label_12b30c:
    // 0x12b30c: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x12b30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_12b310:
    // 0x12b310: 0xafa00268  sw          $zero, 0x268($sp)
    ctx->pc = 0x12b310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 0));
label_12b314:
    // 0x12b314: 0x826d0000  lb          $t5, 0x0($s3)
    ctx->pc = 0x12b314u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_12b318:
    // 0x12b318: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x12b318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12b31c:
    // 0x12b31c: 0x11a00049  beqz        $t5, . + 4 + (0x49 << 2)
label_12b320:
    if (ctx->pc == 0x12B320u) {
        ctx->pc = 0x12B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B31Cu;
        // 0x12b320: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B324u;
        goto label_12b324;
    }
    ctx->pc = 0x12B31Cu;
    {
        const bool branch_taken_0x12b31c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B31Cu;
        // 0x12b320: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b31c) {
            ctx->pc = 0x12B444u;
            goto label_12b444;
        }
    }
    ctx->pc = 0x12B324u;
label_12b324:
    // 0x12b324: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12b324u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b328:
    // 0x12b328: 0x15ef001e  bne         $t7, $t7, . + 4 + (0x1E << 2)
label_12b32c:
    if (ctx->pc == 0x12B32Cu) {
        ctx->pc = 0x12B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B328u;
        // 0x12b32c: 0x240f0025  addiu       $t7, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B330u;
        goto label_12b330;
    }
    ctx->pc = 0x12B328u;
    {
        const bool branch_taken_0x12b328 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 15));
        ctx->pc = 0x12B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B328u;
        // 0x12b32c: 0x240f0025  addiu       $t7, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b328) {
            ctx->pc = 0x12B3A4u;
            goto label_12b3a4;
        }
    }
    ctx->pc = 0x12B330u;
label_12b330:
    // 0x12b330: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x12b330u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
label_12b334:
    // 0x12b334: 0x25ec3a90  addiu       $t4, $t7, 0x3A90
    ctx->pc = 0x12b334u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 14992));
label_12b338:
    // 0x12b338: 0x1ac7021  addu        $t6, $t5, $t4
    ctx->pc = 0x12b338u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
label_12b33c:
    // 0x12b33c: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x12b33cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12b340:
    // 0x12b340: 0x31ef0008  andi        $t7, $t7, 0x8
    ctx->pc = 0x12b340u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
label_12b344:
    // 0x12b344: 0x11e00016  beqz        $t7, . + 4 + (0x16 << 2)
label_12b348:
    if (ctx->pc == 0x12B348u) {
        ctx->pc = 0x12B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B344u;
        // 0x12b348: 0x180802d  daddu       $s0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B34Cu;
        goto label_12b34c;
    }
    ctx->pc = 0x12B344u;
    {
        const bool branch_taken_0x12b344 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B344u;
        // 0x12b348: 0x180802d  daddu       $s0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b344) {
            ctx->pc = 0x12B3A0u;
            goto label_12b3a0;
        }
    }
    ctx->pc = 0x12B34Cu;
label_12b34c:
    // 0x12b34c: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12b34cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12b350:
    // 0x12b350: 0x5de00006  bgtzl       $t7, . + 4 + (0x6 << 2)
label_12b354:
    if (ctx->pc == 0x12B354u) {
        ctx->pc = 0x12B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B350u;
        // 0x12b354: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B358u;
        goto label_12b358;
    }
    ctx->pc = 0x12B350u;
    {
        const bool branch_taken_0x12b350 = (GPR_S64(ctx, 15) > 0);
        if (branch_taken_0x12b350) {
            ctx->pc = 0x12B354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B350u;
            // 0x12b354: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B36Cu;
            goto label_12b36c;
        }
    }
    ctx->pc = 0x12B358u;
label_12b358:
    // 0x12b358: 0xc049b8a  jal         func_126E28
label_12b35c:
    if (ctx->pc == 0x12B35Cu) {
        ctx->pc = 0x12B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B358u;
        // 0x12b35c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B360u;
        goto label_12b360;
    }
    ctx->pc = 0x12B358u;
    SET_GPR_U32(ctx, 31, 0x12B360u);
    ctx->pc = 0x12B35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B358u;
    // 0x12b35c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E28u, 0x12B358u, 0x12B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B360u;
label_12b360:
    // 0x12b360: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_12b364:
    if (ctx->pc == 0x12B364u) {
        ctx->pc = 0x12B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B360u;
        // 0x12b364: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B368u;
        goto label_12b368;
    }
    ctx->pc = 0x12B360u;
    {
        const bool branch_taken_0x12b360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b360) {
            ctx->pc = 0x12B364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B360u;
            // 0x12b364: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b318;
        }
    }
    ctx->pc = 0x12B368u;
label_12b368:
    // 0x12b368: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x12b368u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12b36c:
    // 0x12b36c: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x12b36cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_12b370:
    // 0x12b370: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x12b370u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_12b374:
    // 0x12b374: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12b374u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12b378:
    // 0x12b378: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x12b378u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
label_12b37c:
    // 0x12b37c: 0x11c0ffe5  beqz        $t6, . + 4 + (-0x1B << 2)
label_12b380:
    if (ctx->pc == 0x12B380u) {
        ctx->pc = 0x12B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B37Cu;
        // 0x12b380: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B384u;
        goto label_12b384;
    }
    ctx->pc = 0x12B37Cu;
    {
        const bool branch_taken_0x12b37c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B37Cu;
        // 0x12b380: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b37c) {
            ctx->pc = 0x12B314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b314;
        }
    }
    ctx->pc = 0x12B384u;
label_12b384:
    // 0x12b384: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x12b384u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12b388:
    // 0x12b388: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12b388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12b38c:
    // 0x12b38c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12b38cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12b390:
    // 0x12b390: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x12b390u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_12b394:
    // 0x12b394: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_12b398:
    if (ctx->pc == 0x12B398u) {
        ctx->pc = 0x12B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B394u;
        // 0x12b398: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B39Cu;
        goto label_12b39c;
    }
    ctx->pc = 0x12B394u;
    {
        const bool branch_taken_0x12b394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B394u;
        // 0x12b398: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b394) {
            ctx->pc = 0x12B34Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b34c;
        }
    }
    ctx->pc = 0x12B39Cu;
label_12b39c:
    // 0x12b39c: 0x0  nop
    ctx->pc = 0x12b39cu;
    // NOP
label_12b3a0:
    // 0x12b3a0: 0x240f0025  addiu       $t7, $zero, 0x25
    ctx->pc = 0x12b3a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_12b3a4:
    // 0x12b3a4: 0x15af000f  bne         $t5, $t7, . + 4 + (0xF << 2)
label_12b3a8:
    if (ctx->pc == 0x12B3A8u) {
        ctx->pc = 0x12B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3A4u;
        // 0x12b3a8: 0x2670ffff  addiu       $s0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3ACu;
        goto label_12b3ac;
    }
    ctx->pc = 0x12B3A4u;
    {
        const bool branch_taken_0x12b3a4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x12B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3A4u;
        // 0x12b3a8: 0x2670ffff  addiu       $s0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3a4) {
            ctx->pc = 0x12B3E4u;
            goto label_12b3e4;
        }
    }
    ctx->pc = 0x12B3ACu;
label_12b3ac:
    // 0x12b3ac: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x12b3acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b3b0:
    // 0x12b3b0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12b3b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b3b4:
    // 0x12b3b4: 0x82700000  lb          $s0, 0x0($s3)
    ctx->pc = 0x12b3b4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_12b3b8:
    // 0x12b3b8: 0x2e0f0079  sltiu       $t7, $s0, 0x79
    ctx->pc = 0x12b3b8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
label_12b3bc:
    // 0x12b3bc: 0x11e002d8  beqz        $t7, . + 4 + (0x2D8 << 2)
label_12b3c0:
    if (ctx->pc == 0x12B3C0u) {
        ctx->pc = 0x12B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3BCu;
        // 0x12b3c0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3C4u;
        goto label_12b3c4;
    }
    ctx->pc = 0x12B3BCu;
    {
        const bool branch_taken_0x12b3bc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3BCu;
        // 0x12b3c0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3bc) {
            ctx->pc = 0x12BF20u;
            goto label_12bf20;
        }
    }
    ctx->pc = 0x12B3C4u;
label_12b3c4:
    // 0x12b3c4: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12b3c4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
label_12b3c8:
    // 0x12b3c8: 0x107880  sll         $t7, $s0, 2
    ctx->pc = 0x12b3c8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_12b3cc:
    // 0x12b3cc: 0x25ce4058  addiu       $t6, $t6, 0x4058
    ctx->pc = 0x12b3ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16472));
label_12b3d0:
    // 0x12b3d0: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12b3d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12b3d4:
    // 0x12b3d4: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x12b3d4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12b3d8:
    // 0x12b3d8: 0x1a00008  jr          $t5
label_12b3dc:
    if (ctx->pc == 0x12B3DCu) {
        ctx->pc = 0x12B3E0u;
        goto label_12b3e0;
    }
    ctx->pc = 0x12B3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B3E0u: goto label_12b3e0;
            case 0x12B484u: goto label_12b484;
            case 0x12B48Cu: goto label_12b48c;
            case 0x12B494u: goto label_12b494;
            case 0x12B4A8u: goto label_12b4a8;
            case 0x12B4ACu: goto label_12b4ac;
            case 0x12BE08u: goto label_12be08;
            case 0x12BE10u: goto label_12be10;
            case 0x12BE14u: goto label_12be14;
            case 0x12BE2Cu: goto label_12be2c;
            case 0x12BE48u: goto label_12be48;
            case 0x12BE54u: goto label_12be54;
            case 0x12BE5Cu: goto label_12be5c;
            case 0x12BE64u: goto label_12be64;
            case 0x12BE78u: goto label_12be78;
            case 0x12BE80u: goto label_12be80;
            case 0x12BEF0u: goto label_12bef0;
            case 0x12BF08u: goto label_12bf08;
            case 0x12BF10u: goto label_12bf10;
            case 0x12BF20u: goto label_12bf20;
            case 0x12BF50u: goto label_12bf50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B3D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12B3E0u;
label_12b3e0:
    // 0x12b3e0: 0x2670ffff  addiu       $s0, $s3, -0x1
    ctx->pc = 0x12b3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_12b3e4:
    // 0x12b3e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12b3e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b3e8:
    // 0x12b3e8: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12b3e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12b3ec:
    // 0x12b3ec: 0x5de00006  bgtzl       $t7, . + 4 + (0x6 << 2)
label_12b3f0:
    if (ctx->pc == 0x12B3F0u) {
        ctx->pc = 0x12B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3ECu;
        // 0x12b3f0: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3F4u;
        goto label_12b3f4;
    }
    ctx->pc = 0x12B3ECu;
    {
        const bool branch_taken_0x12b3ec = (GPR_S64(ctx, 15) > 0);
        if (branch_taken_0x12b3ec) {
            ctx->pc = 0x12B3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B3ECu;
            // 0x12b3f0: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B408u;
            goto label_12b408;
        }
    }
    ctx->pc = 0x12B3F4u;
label_12b3f4:
    // 0x12b3f4: 0xc049b8a  jal         func_126E28
label_12b3f8:
    if (ctx->pc == 0x12B3F8u) {
        ctx->pc = 0x12B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3F4u;
        // 0x12b3f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3FCu;
        goto label_12b3fc;
    }
    ctx->pc = 0x12B3F4u;
    SET_GPR_U32(ctx, 31, 0x12B3FCu);
    ctx->pc = 0x12B3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3F4u;
    // 0x12b3f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E28u, 0x12B3F4u, 0x12B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3FCu;
label_12b3fc:
    // 0x12b3fc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_12b400:
    if (ctx->pc == 0x12B400u) {
        ctx->pc = 0x12B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3FCu;
        // 0x12b400: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B404u;
        goto label_12b404;
    }
    ctx->pc = 0x12B3FCu;
    {
        const bool branch_taken_0x12b3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3FCu;
        // 0x12b400: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3fc) {
            ctx->pc = 0x12B478u;
            goto label_12b478;
        }
    }
    ctx->pc = 0x12B404u;
label_12b404:
    // 0x12b404: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x12b404u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12b408:
    // 0x12b408: 0x820e0000  lb          $t6, 0x0($s0)
    ctx->pc = 0x12b408u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_12b40c:
    // 0x12b40c: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x12b40cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_12b410:
    // 0x12b410: 0x15ee000b  bne         $t7, $t6, . + 4 + (0xB << 2)
label_12b414:
    if (ctx->pc == 0x12B414u) {
        ctx->pc = 0x12B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B410u;
        // 0x12b414: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B418u;
        goto label_12b418;
    }
    ctx->pc = 0x12B410u;
    {
        const bool branch_taken_0x12b410 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x12B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B410u;
        // 0x12b414: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b410) {
            ctx->pc = 0x12B440u;
            goto label_12b440;
        }
    }
    ctx->pc = 0x12B418u;
label_12b418:
    // 0x12b418: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x12b418u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12b41c:
    // 0x12b41c: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12b420:
    // 0x12b420: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12b420u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12b424:
    // 0x12b424: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x12b424u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_12b428:
    // 0x12b428: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12b428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_12b42c:
    // 0x12b42c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12b42cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12b430:
    // 0x12b430: 0x1a40ffed  blez        $s2, . + 4 + (-0x13 << 2)
label_12b434:
    if (ctx->pc == 0x12B434u) {
        ctx->pc = 0x12B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B430u;
        // 0x12b434: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B438u;
        goto label_12b438;
    }
    ctx->pc = 0x12B430u;
    {
        const bool branch_taken_0x12b430 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x12B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B430u;
        // 0x12b434: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b430) {
            ctx->pc = 0x12B3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b3e8;
        }
    }
    ctx->pc = 0x12B438u;
label_12b438:
    // 0x12b438: 0x1000ffb7  b           . + 4 + (-0x49 << 2)
label_12b43c:
    if (ctx->pc == 0x12B43Cu) {
        ctx->pc = 0x12B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B438u;
        // 0x12b43c: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B440u;
        goto label_12b440;
    }
    ctx->pc = 0x12B438u;
    {
        const bool branch_taken_0x12b438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B438u;
        // 0x12b43c: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b438) {
            ctx->pc = 0x12B318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b318;
        }
    }
    ctx->pc = 0x12B440u;
label_12b440:
    // 0x12b440: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x12b440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12b444:
    // 0x12b444: 0xdfb00290  ld          $s0, 0x290($sp)
    ctx->pc = 0x12b444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_12b448:
    // 0x12b448: 0xdfb10298  ld          $s1, 0x298($sp)
    ctx->pc = 0x12b448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 664)));
label_12b44c:
    // 0x12b44c: 0xdfb202a0  ld          $s2, 0x2A0($sp)
    ctx->pc = 0x12b44cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_12b450:
    // 0x12b450: 0xdfb302a8  ld          $s3, 0x2A8($sp)
    ctx->pc = 0x12b450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 680)));
label_12b454:
    // 0x12b454: 0xdfb402b0  ld          $s4, 0x2B0($sp)
    ctx->pc = 0x12b454u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_12b458:
    // 0x12b458: 0xdfb502b8  ld          $s5, 0x2B8($sp)
    ctx->pc = 0x12b458u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 696)));
label_12b45c:
    // 0x12b45c: 0xdfb602c0  ld          $s6, 0x2C0($sp)
    ctx->pc = 0x12b45cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_12b460:
    // 0x12b460: 0xdfb702c8  ld          $s7, 0x2C8($sp)
    ctx->pc = 0x12b460u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 712)));
label_12b464:
    // 0x12b464: 0xdfbe02d0  ld          $fp, 0x2D0($sp)
    ctx->pc = 0x12b464u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 720)));
label_12b468:
    // 0x12b468: 0xdfbf02d8  ld          $ra, 0x2D8($sp)
    ctx->pc = 0x12b468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 728)));
label_12b46c:
    // 0x12b46c: 0x3e00008  jr          $ra
label_12b470:
    if (ctx->pc == 0x12B470u) {
        ctx->pc = 0x12B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B46Cu;
        // 0x12b470: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B474u;
        goto label_12b474;
    }
    ctx->pc = 0x12B46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B46Cu;
        // 0x12b470: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B474u;
label_12b474:
    // 0x12b474: 0x8fad0268  lw          $t5, 0x268($sp)
    ctx->pc = 0x12b474u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12b478:
    // 0x12b478: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12b478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12b47c:
    // 0x12b47c: 0x1000fff1  b           . + 4 + (-0xF << 2)
label_12b480:
    if (ctx->pc == 0x12B480u) {
        ctx->pc = 0x12B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B47Cu;
        // 0x12b480: 0x1ad100b  movn        $v0, $t5, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B484u;
        goto label_12b484;
    }
    ctx->pc = 0x12B47Cu;
    {
        const bool branch_taken_0x12b47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B47Cu;
        // 0x12b480: 0x1ad100b  movn        $v0, $t5, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b47c) {
            ctx->pc = 0x12B444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b444;
        }
    }
    ctx->pc = 0x12B484u;
label_12b484:
    // 0x12b484: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_12b488:
    if (ctx->pc == 0x12B488u) {
        ctx->pc = 0x12B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B484u;
        // 0x12b488: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B48Cu;
        goto label_12b48c;
    }
    ctx->pc = 0x12B484u;
    {
        const bool branch_taken_0x12b484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B484u;
        // 0x12b488: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b484) {
            ctx->pc = 0x12B444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b444;
        }
    }
    ctx->pc = 0x12B48Cu;
label_12b48c:
    // 0x12b48c: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
label_12b490:
    if (ctx->pc == 0x12B490u) {
        ctx->pc = 0x12B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B48Cu;
        // 0x12b490: 0x36940008  ori         $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B494u;
        goto label_12b494;
    }
    ctx->pc = 0x12B48Cu;
    {
        const bool branch_taken_0x12b48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B48Cu;
        // 0x12b490: 0x36940008  ori         $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b48c) {
            ctx->pc = 0x12B3B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b3b4;
        }
    }
    ctx->pc = 0x12B494u;
label_12b494:
    // 0x12b494: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x12b494u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12b498:
    // 0x12b498: 0x2ef7818  mult        $t7, $s7, $t7
    ctx->pc = 0x12b498u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_12b49c:
    // 0x12b49c: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x12b49cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_12b4a0:
    // 0x12b4a0: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
label_12b4a4:
    if (ctx->pc == 0x12B4A4u) {
        ctx->pc = 0x12B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4A0u;
        // 0x12b4a4: 0x25f7ffd0  addiu       $s7, $t7, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B4A8u;
        goto label_12b4a8;
    }
    ctx->pc = 0x12B4A0u;
    {
        const bool branch_taken_0x12b4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4A0u;
        // 0x12b4a4: 0x25f7ffd0  addiu       $s7, $t7, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4a0) {
            ctx->pc = 0x12B3B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b3b4;
        }
    }
    ctx->pc = 0x12B4A8u;
label_12b4a8:
    // 0x12b4a8: 0x36940001  ori         $s4, $s4, 0x1
    ctx->pc = 0x12b4a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
label_12b4ac:
    // 0x12b4ac: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x12b4acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
label_12b4b0:
    // 0x12b4b0: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x12b4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12b4b4:
    // 0x12b4b4: 0x25ef91a0  addiu       $t7, $t7, -0x6E60
    ctx->pc = 0x12b4b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294939040));
label_12b4b8:
    // 0x12b4b8: 0xafaf026c  sw          $t7, 0x26C($sp)
    ctx->pc = 0x12b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 15));
label_12b4bc:
    // 0x12b4bc: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x12b4bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12b4c0:
    // 0x12b4c0: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12b4c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12b4c4:
    // 0x12b4c4: 0x1de00005  bgtz        $t7, . + 4 + (0x5 << 2)
label_12b4c8:
    if (ctx->pc == 0x12B4C8u) {
        ctx->pc = 0x12B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4C4u;
        // 0x12b4c8: 0x328f0020  andi        $t7, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B4CCu;
        goto label_12b4cc;
    }
    ctx->pc = 0x12B4C4u;
    {
        const bool branch_taken_0x12b4c4 = (GPR_S64(ctx, 15) > 0);
        ctx->pc = 0x12B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4C4u;
        // 0x12b4c8: 0x328f0020  andi        $t7, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4c4) {
            ctx->pc = 0x12B4DCu;
            goto label_12b4dc;
        }
    }
    ctx->pc = 0x12B4CCu;
label_12b4cc:
    // 0x12b4cc: 0xc049b8a  jal         func_126E28
label_12b4d0:
    if (ctx->pc == 0x12B4D0u) {
        ctx->pc = 0x12B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4CCu;
        // 0x12b4d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B4D4u;
        goto label_12b4d4;
    }
    ctx->pc = 0x12B4CCu;
    SET_GPR_U32(ctx, 31, 0x12B4D4u);
    ctx->pc = 0x12B4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B4CCu;
    // 0x12b4d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E28u, 0x12B4CCu, 0x12B4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B4D4u;
label_12b4d4:
    // 0x12b4d4: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_12b4d8:
    if (ctx->pc == 0x12B4D8u) {
        ctx->pc = 0x12B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4D4u;
        // 0x12b4d8: 0x328f0020  andi        $t7, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B4DCu;
        goto label_12b4dc;
    }
    ctx->pc = 0x12B4D4u;
    {
        const bool branch_taken_0x12b4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4D4u;
        // 0x12b4d8: 0x328f0020  andi        $t7, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4d4) {
            ctx->pc = 0x12B474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b474;
        }
    }
    ctx->pc = 0x12B4DCu;
label_12b4dc:
    // 0x12b4dc: 0x15e0001a  bnez        $t7, . + 4 + (0x1A << 2)
label_12b4e0:
    if (ctx->pc == 0x12B4E0u) {
        ctx->pc = 0x12B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4DCu;
        // 0x12b4e0: 0x2e0f0005  sltiu       $t7, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B4E4u;
        goto label_12b4e4;
    }
    ctx->pc = 0x12B4DCu;
    {
        const bool branch_taken_0x12b4dc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4DCu;
        // 0x12b4e0: 0x2e0f0005  sltiu       $t7, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4dc) {
            ctx->pc = 0x12B548u;
            goto label_12b548;
        }
    }
    ctx->pc = 0x12B4E4u;
label_12b4e4:
    // 0x12b4e4: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x12b4e4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12b4e8:
    // 0x12b4e8: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x12b4e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
label_12b4ec:
    // 0x12b4ec: 0x25ec3a90  addiu       $t4, $t7, 0x3A90
    ctx->pc = 0x12b4ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 14992));
label_12b4f0:
    // 0x12b4f0: 0x91ae0000  lbu         $t6, 0x0($t5)
    ctx->pc = 0x12b4f0u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_12b4f4:
    // 0x12b4f4: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x12b4f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_12b4f8:
    // 0x12b4f8: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x12b4f8u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12b4fc:
    // 0x12b4fc: 0x31ef0008  andi        $t7, $t7, 0x8
    ctx->pc = 0x12b4fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
label_12b500:
    // 0x12b500: 0x11e00011  beqz        $t7, . + 4 + (0x11 << 2)
label_12b504:
    if (ctx->pc == 0x12B504u) {
        ctx->pc = 0x12B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B500u;
        // 0x12b504: 0x2e0f0005  sltiu       $t7, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B508u;
        goto label_12b508;
    }
    ctx->pc = 0x12B500u;
    {
        const bool branch_taken_0x12b500 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B500u;
        // 0x12b504: 0x2e0f0005  sltiu       $t7, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b500) {
            ctx->pc = 0x12B548u;
            goto label_12b548;
        }
    }
    ctx->pc = 0x12B508u;
label_12b508:
    // 0x12b508: 0x180902d  daddu       $s2, $t4, $zero
    ctx->pc = 0x12b508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_12b50c:
    // 0x12b50c: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12b50cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12b510:
    // 0x12b510: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12b510u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12b514:
    // 0x12b514: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12b514u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_12b518:
    // 0x12b518: 0x19e00235  blez        $t7, . + 4 + (0x235 << 2)
label_12b51c:
    if (ctx->pc == 0x12B51Cu) {
        ctx->pc = 0x12B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B518u;
        // 0x12b51c: 0xae2f0004  sw          $t7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B520u;
        goto label_12b520;
    }
    ctx->pc = 0x12B518u;
    {
        const bool branch_taken_0x12b518 = (GPR_S64(ctx, 15) <= 0);
        ctx->pc = 0x12B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B518u;
        // 0x12b51c: 0xae2f0004  sw          $t7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b518) {
            ctx->pc = 0x12BDF0u;
            goto label_12bdf0;
        }
    }
    ctx->pc = 0x12B520u;
label_12b520:
    // 0x12b520: 0x25af0001  addiu       $t7, $t5, 0x1
    ctx->pc = 0x12b520u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_12b524:
    // 0x12b524: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12b524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12b528:
    // 0x12b528: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x12b528u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12b52c:
    // 0x12b52c: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x12b52cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_12b530:
    // 0x12b530: 0x1f27821  addu        $t7, $t7, $s2
    ctx->pc = 0x12b530u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
label_12b534:
    // 0x12b534: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12b534u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12b538:
    // 0x12b538: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x12b538u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
label_12b53c:
    // 0x12b53c: 0x55c0fff4  bnel        $t6, $zero, . + 4 + (-0xC << 2)
label_12b540:
    if (ctx->pc == 0x12B540u) {
        ctx->pc = 0x12B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B53Cu;
        // 0x12b540: 0x8e2f0004  lw          $t7, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B544u;
        goto label_12b544;
    }
    ctx->pc = 0x12B53Cu;
    {
        const bool branch_taken_0x12b53c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b53c) {
            ctx->pc = 0x12B540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B53Cu;
            // 0x12b540: 0x8e2f0004  lw          $t7, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b510;
        }
    }
    ctx->pc = 0x12B544u;
label_12b544:
    // 0x12b544: 0x2e0f0005  sltiu       $t7, $s0, 0x5
    ctx->pc = 0x12b544u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_12b548:
    // 0x12b548: 0x51e0ff73  beql        $t7, $zero, . + 4 + (-0x8D << 2)
label_12b54c:
    if (ctx->pc == 0x12B54Cu) {
        ctx->pc = 0x12B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B548u;
        // 0x12b54c: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B550u;
        goto label_12b550;
    }
    ctx->pc = 0x12B548u;
    {
        const bool branch_taken_0x12b548 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b548) {
            ctx->pc = 0x12B54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B548u;
            // 0x12b54c: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b318;
        }
    }
    ctx->pc = 0x12B550u;
label_12b550:
    // 0x12b550: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12b550u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
label_12b554:
    // 0x12b554: 0x107880  sll         $t7, $s0, 2
    ctx->pc = 0x12b554u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_12b558:
    // 0x12b558: 0x25ce423c  addiu       $t6, $t6, 0x423C
    ctx->pc = 0x12b558u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16956));
label_12b55c:
    // 0x12b55c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12b55cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12b560:
    // 0x12b560: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x12b560u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12b564:
    // 0x12b564: 0x1a00008  jr          $t5
label_12b568:
    if (ctx->pc == 0x12B568u) {
        ctx->pc = 0x12B56Cu;
        goto label_12b56c;
    }
    ctx->pc = 0x12B564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B56Cu: goto label_12b56c;
            case 0x12B618u: goto label_12b618;
            case 0x12B760u: goto label_12b760;
            case 0x12B8A4u: goto label_12b8a4;
            case 0x12BB1Cu: goto label_12bb1c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B564u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12B56Cu;
label_12b56c:
    // 0x12b56c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12b56cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b570:
    // 0x12b570: 0x328e0008  andi        $t6, $s4, 0x8
    ctx->pc = 0x12b570u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_12b574:
    // 0x12b574: 0x11c0001a  beqz        $t6, . + 4 + (0x1A << 2)
label_12b578:
    if (ctx->pc == 0x12B578u) {
        ctx->pc = 0x12B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B574u;
        // 0x12b578: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B57Cu;
        goto label_12b57c;
    }
    ctx->pc = 0x12B574u;
    {
        const bool branch_taken_0x12b574 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B574u;
        // 0x12b578: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b574) {
            ctx->pc = 0x12B5E0u;
            goto label_12b5e0;
        }
    }
    ctx->pc = 0x12B57Cu;
label_12b57c:
    // 0x12b57c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12b57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b580:
    // 0x12b580: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x12b580u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12b584:
    // 0x12b584: 0x257782a  slt         $t7, $s2, $s7
    ctx->pc = 0x12b584u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_12b588:
    // 0x12b588: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
label_12b58c:
    if (ctx->pc == 0x12B58Cu) {
        ctx->pc = 0x12B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B588u;
        // 0x12b58c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B590u;
        goto label_12b590;
    }
    ctx->pc = 0x12B588u;
    {
        const bool branch_taken_0x12b588 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B588u;
        // 0x12b58c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b588) {
            ctx->pc = 0x12B5C0u;
            goto label_12b5c0;
        }
    }
    ctx->pc = 0x12B590u;
label_12b590:
    // 0x12b590: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x12b590u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12b594:
    // 0x12b594: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x12b594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_12b598:
    // 0x12b598: 0x2f2b823  subu        $s7, $s7, $s2
    ctx->pc = 0x12b598u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_12b59c:
    // 0x12b59c: 0x1f27821  addu        $t7, $t7, $s2
    ctx->pc = 0x12b59cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
label_12b5a0:
    // 0x12b5a0: 0xc049b8a  jal         func_126E28
label_12b5a4:
    if (ctx->pc == 0x12B5A4u) {
        ctx->pc = 0x12B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5A0u;
        // 0x12b5a4: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B5A8u;
        goto label_12b5a8;
    }
    ctx->pc = 0x12B5A0u;
    SET_GPR_U32(ctx, 31, 0x12B5A8u);
    ctx->pc = 0x12B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B5A0u;
    // 0x12b5a4: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E28u, 0x12B5A0u, 0x12B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B5A8u;
label_12b5a8:
    // 0x12b5a8: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_12b5ac:
    if (ctx->pc == 0x12B5ACu) {
        ctx->pc = 0x12B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5A8u;
        // 0x12b5ac: 0x8e320004  lw          $s2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B5B0u;
        goto label_12b5b0;
    }
    ctx->pc = 0x12B5A8u;
    {
        const bool branch_taken_0x12b5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b5a8) {
            ctx->pc = 0x12B5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B5A8u;
            // 0x12b5ac: 0x8e320004  lw          $s2, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b584;
        }
    }
    ctx->pc = 0x12B5B0u;
label_12b5b0:
    // 0x12b5b0: 0x1200ffb1  beqz        $s0, . + 4 + (-0x4F << 2)
label_12b5b4:
    if (ctx->pc == 0x12B5B4u) {
        ctx->pc = 0x12B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5B0u;
        // 0x12b5b4: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B5B8u;
        goto label_12b5b8;
    }
    ctx->pc = 0x12B5B0u;
    {
        const bool branch_taken_0x12b5b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5B0u;
        // 0x12b5b4: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5b0) {
            ctx->pc = 0x12B478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b478;
        }
    }
    ctx->pc = 0x12B5B8u;
label_12b5b8:
    // 0x12b5b8: 0x1000ff56  b           . + 4 + (-0xAA << 2)
label_12b5bc:
    if (ctx->pc == 0x12B5BCu) {
        ctx->pc = 0x12B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5B8u;
        // 0x12b5bc: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B5C0u;
        goto label_12b5c0;
    }
    ctx->pc = 0x12B5B8u;
    {
        const bool branch_taken_0x12b5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5B8u;
        // 0x12b5bc: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5b8) {
            ctx->pc = 0x12B314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b314;
        }
    }
    ctx->pc = 0x12B5C0u;
label_12b5c0:
    // 0x12b5c0: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x12b5c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12b5c4:
    // 0x12b5c4: 0x2577823  subu        $t7, $s2, $s7
    ctx->pc = 0x12b5c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
label_12b5c8:
    // 0x12b5c8: 0xae2f0004  sw          $t7, 0x4($s1)
    ctx->pc = 0x12b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
label_12b5cc:
    // 0x12b5cc: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x12b5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_12b5d0:
    // 0x12b5d0: 0x1d77021  addu        $t6, $t6, $s7
    ctx->pc = 0x12b5d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 23)));
label_12b5d4:
    // 0x12b5d4: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_12b5d8:
    if (ctx->pc == 0x12B5D8u) {
        ctx->pc = 0x12B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5D4u;
        // 0x12b5d8: 0xae2e0000  sw          $t6, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B5DCu;
        goto label_12b5dc;
    }
    ctx->pc = 0x12B5D4u;
    {
        const bool branch_taken_0x12b5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5D4u;
        // 0x12b5d8: 0xae2e0000  sw          $t6, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5d4) {
            ctx->pc = 0x12B5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b5b8;
        }
    }
    ctx->pc = 0x12B5DCu;
label_12b5dc:
    // 0x12b5dc: 0x0  nop
    ctx->pc = 0x12b5dcu;
    // NOP
label_12b5e0:
    // 0x12b5e0: 0x8faf0264  lw          $t7, 0x264($sp)
    ctx->pc = 0x12b5e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12b5e4:
    // 0x12b5e4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x12b5e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12b5e8:
    // 0x12b5e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12b5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b5ec:
    // 0x12b5ec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x12b5ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b5f0:
    // 0x12b5f0: 0x8de40000  lw          $a0, 0x0($t7)
    ctx->pc = 0x12b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12b5f4:
    // 0x12b5f4: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12b5f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12b5f8:
    // 0x12b5f8: 0xc048f36  jal         func_123CD8
label_12b5fc:
    if (ctx->pc == 0x12B5FCu) {
        ctx->pc = 0x12B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5F8u;
        // 0x12b5fc: 0xafaf0264  sw          $t7, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B600u;
        goto label_12b600;
    }
    ctx->pc = 0x12B5F8u;
    SET_GPR_U32(ctx, 31, 0x12B600u);
    ctx->pc = 0x12B5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B5F8u;
    // 0x12b5fc: 0xafaf0264  sw          $t7, 0x264($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CD8u, 0x12B5F8u, 0x12B600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B600u;
label_12b600:
    // 0x12b600: 0x1040ff9c  beqz        $v0, . + 4 + (-0x64 << 2)
label_12b604:
    if (ctx->pc == 0x12B604u) {
        ctx->pc = 0x12B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B600u;
        // 0x12b604: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B608u;
        goto label_12b608;
    }
    ctx->pc = 0x12B600u;
    {
        const bool branch_taken_0x12b600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B600u;
        // 0x12b604: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b600) {
            ctx->pc = 0x12B474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b474;
        }
    }
    ctx->pc = 0x12B608u;
label_12b608:
    // 0x12b608: 0x8fad0268  lw          $t5, 0x268($sp)
    ctx->pc = 0x12b608u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12b60c:
    // 0x12b60c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x12b60cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_12b610:
    // 0x12b610: 0x1000ff40  b           . + 4 + (-0xC0 << 2)
label_12b614:
    if (ctx->pc == 0x12B614u) {
        ctx->pc = 0x12B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B610u;
        // 0x12b614: 0xafad0268  sw          $t5, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B618u;
        goto label_12b618;
    }
    ctx->pc = 0x12B610u;
    {
        const bool branch_taken_0x12b610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B610u;
        // 0x12b614: 0xafad0268  sw          $t5, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b610) {
            ctx->pc = 0x12B314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b314;
        }
    }
    ctx->pc = 0x12B618u;
label_12b618:
    // 0x12b618: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12b618u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12b61c:
    // 0x12b61c: 0x328e0008  andi        $t6, $s4, 0x8
    ctx->pc = 0x12b61cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_12b620:
    // 0x12b620: 0x11c00023  beqz        $t6, . + 4 + (0x23 << 2)
label_12b624:
    if (ctx->pc == 0x12B624u) {
        ctx->pc = 0x12B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B620u;
        // 0x12b624: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B628u;
        goto label_12b628;
    }
    ctx->pc = 0x12B620u;
    {
        const bool branch_taken_0x12b620 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B620u;
        // 0x12b624: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b620) {
            ctx->pc = 0x12B6B0u;
            goto label_12b6b0;
        }
    }
    ctx->pc = 0x12B628u;
label_12b628:
    // 0x12b628: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x12b628u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12b62c:
    // 0x12b62c: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x12b62cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12b630:
    // 0x12b630: 0x3af7021  addu        $t6, $sp, $t7
    ctx->pc = 0x12b630u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 15)));
label_12b634:
    // 0x12b634: 0x81cd0000  lb          $t5, 0x0($t6)
    ctx->pc = 0x12b634u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12b638:
    // 0x12b638: 0x11a00018  beqz        $t5, . + 4 + (0x18 << 2)
label_12b63c:
    if (ctx->pc == 0x12B63Cu) {
        ctx->pc = 0x12B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B638u;
        // 0x12b63c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B640u;
        goto label_12b640;
    }
    ctx->pc = 0x12B638u;
    {
        const bool branch_taken_0x12b638 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B638u;
        // 0x12b63c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b638) {
            ctx->pc = 0x12B69Cu;
            goto label_12b69c;
        }
    }
    ctx->pc = 0x12B640u;
label_12b640:
    // 0x12b640: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x12b640u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12b644:
    // 0x12b644: 0x258f0001  addiu       $t7, $t4, 0x1
    ctx->pc = 0x12b644u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_12b648:
    // 0x12b648: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12b648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12b64c:
    // 0x12b64c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12b64cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12b650:
    // 0x12b650: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x12b650u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_12b654:
    // 0x12b654: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12b654u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12b658:
    // 0x12b658: 0x12e00010  beqz        $s7, . + 4 + (0x10 << 2)
label_12b65c:
    if (ctx->pc == 0x12B65Cu) {
        ctx->pc = 0x12B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B658u;
        // 0x12b65c: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B660u;
        goto label_12b660;
    }
    ctx->pc = 0x12B658u;
    {
        const bool branch_taken_0x12b658 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B658u;
        // 0x12b65c: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b658) {
            ctx->pc = 0x12B69Cu;
            goto label_12b69c;
        }
    }
    ctx->pc = 0x12B660u;
label_12b660:
    // 0x12b660: 0x5dc00009  bgtzl       $t6, . + 4 + (0x9 << 2)
label_12b664:
    if (ctx->pc == 0x12B664u) {
        ctx->pc = 0x12B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B660u;
        // 0x12b664: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B668u;
        goto label_12b668;
    }
    ctx->pc = 0x12B660u;
    {
        const bool branch_taken_0x12b660 = (GPR_S64(ctx, 14) > 0);
        if (branch_taken_0x12b660) {
            ctx->pc = 0x12B664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B660u;
            // 0x12b664: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B688u;
            goto label_12b688;
        }
    }
    ctx->pc = 0x12B668u;
label_12b668:
    // 0x12b668: 0xc049b8a  jal         func_126E28
label_12b66c:
    if (ctx->pc == 0x12B66Cu) {
        ctx->pc = 0x12B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B668u;
        // 0x12b66c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B670u;
        goto label_12b670;
    }
    ctx->pc = 0x12B668u;
    SET_GPR_U32(ctx, 31, 0x12B670u);
    ctx->pc = 0x12B66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B668u;
    // 0x12b66c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E28u, 0x12B668u, 0x12B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B670u;
label_12b670:
    // 0x12b670: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_12b674:
    if (ctx->pc == 0x12B674u) {
        ctx->pc = 0x12B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B670u;
        // 0x12b674: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B678u;
        goto label_12b678;
    }
    ctx->pc = 0x12B670u;
    {
        const bool branch_taken_0x12b670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b670) {
            ctx->pc = 0x12B674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B670u;
            // 0x12b674: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B688u;
            goto label_12b688;
        }
    }
    ctx->pc = 0x12B678u;
label_12b678:
    // 0x12b678: 0x1240ff7f  beqz        $s2, . + 4 + (-0x81 << 2)
label_12b67c:
    if (ctx->pc == 0x12B67Cu) {
        ctx->pc = 0x12B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B678u;
        // 0x12b67c: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B680u;
        goto label_12b680;
    }
    ctx->pc = 0x12B678u;
    {
        const bool branch_taken_0x12b678 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B678u;
        // 0x12b67c: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b678) {
            ctx->pc = 0x12B478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b478;
        }
    }
    ctx->pc = 0x12B680u;
label_12b680:
    // 0x12b680: 0x1000ff24  b           . + 4 + (-0xDC << 2)
label_12b684:
    if (ctx->pc == 0x12B684u) {
        ctx->pc = 0x12B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B680u;
        // 0x12b684: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B688u;
        goto label_12b688;
    }
    ctx->pc = 0x12B680u;
    {
        const bool branch_taken_0x12b680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B680u;
        // 0x12b684: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b680) {
            ctx->pc = 0x12B314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b314;
        }
    }
    ctx->pc = 0x12B688u;
label_12b688:
    // 0x12b688: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x12b688u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12b68c:
    // 0x12b68c: 0x3af7021  addu        $t6, $sp, $t7
    ctx->pc = 0x12b68cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 15)));
label_12b690:
    // 0x12b690: 0x81cd0000  lb          $t5, 0x0($t6)
    ctx->pc = 0x12b690u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12b694:
    // 0x12b694: 0x55a0ffeb  bnel        $t5, $zero, . + 4 + (-0x15 << 2)
label_12b698:
    if (ctx->pc == 0x12B698u) {
        ctx->pc = 0x12B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B694u;
        // 0x12b698: 0x8e2e0004  lw          $t6, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B69Cu;
        goto label_12b69c;
    }
    ctx->pc = 0x12B694u;
    {
        const bool branch_taken_0x12b694 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b694) {
            ctx->pc = 0x12B698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B694u;
            // 0x12b698: 0x8e2e0004  lw          $t6, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B644u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b644;
        }
    }
    ctx->pc = 0x12B69Cu;
label_12b69c:
    // 0x12b69c: 0x1640ff1d  bnez        $s2, . + 4 + (-0xE3 << 2)
label_12b6a0:
    if (ctx->pc == 0x12B6A0u) {
        ctx->pc = 0x12B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B69Cu;
        // 0x12b6a0: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6A4u;
        goto label_12b6a4;
    }
    ctx->pc = 0x12B69Cu;
    {
        const bool branch_taken_0x12b69c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B69Cu;
        // 0x12b6a0: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b69c) {
            ctx->pc = 0x12B314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b314;
        }
    }
    ctx->pc = 0x12B6A4u;
label_12b6a4:
    // 0x12b6a4: 0x1000ff67  b           . + 4 + (-0x99 << 2)
label_12b6a8:
    if (ctx->pc == 0x12B6A8u) {
        ctx->pc = 0x12B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6A4u;
        // 0x12b6a8: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6ACu;
        goto label_12b6ac;
    }
    ctx->pc = 0x12B6A4u;
    {
        const bool branch_taken_0x12b6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6A4u;
        // 0x12b6a8: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6a4) {
            ctx->pc = 0x12B444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b444;
        }
    }
    ctx->pc = 0x12B6ACu;
label_12b6ac:
    // 0x12b6ac: 0x0  nop
    ctx->pc = 0x12b6acu;
    // NOP
label_12b6b0:
    // 0x12b6b0: 0x8faf0264  lw          $t7, 0x264($sp)
    ctx->pc = 0x12b6b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12b6b4:
    // 0x12b6b4: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x12b6b4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12b6b8:
    // 0x12b6b8: 0x25ee0008  addiu       $t6, $t7, 0x8
    ctx->pc = 0x12b6b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12b6bc:
    // 0x12b6bc: 0x8df60000  lw          $s6, 0x0($t7)
    ctx->pc = 0x12b6bcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12b6c0:
    // 0x12b6c0: 0xafae0264  sw          $t6, 0x264($sp)
    ctx->pc = 0x12b6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 14));
label_12b6c4:
    // 0x12b6c4: 0x918d0000  lbu         $t5, 0x0($t4)
    ctx->pc = 0x12b6c4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12b6c8:
    // 0x12b6c8: 0x3ad7821  addu        $t7, $sp, $t5
    ctx->pc = 0x12b6c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
label_12b6cc:
    // 0x12b6cc: 0x81ee0000  lb          $t6, 0x0($t7)
    ctx->pc = 0x12b6ccu;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12b6d0:
    // 0x12b6d0: 0x11c00014  beqz        $t6, . + 4 + (0x14 << 2)
label_12b6d4:
    if (ctx->pc == 0x12B6D4u) {
        ctx->pc = 0x12B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6D0u;
        // 0x12b6d4: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6D8u;
        goto label_12b6d8;
    }
    ctx->pc = 0x12B6D0u;
    {
        const bool branch_taken_0x12b6d0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6D0u;
        // 0x12b6d4: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6d0) {
            ctx->pc = 0x12B724u;
            goto label_12b724;
        }
    }
    ctx->pc = 0x12B6D8u;
label_12b6d8:
    // 0x12b6d8: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12b6d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12b6dc:
    // 0x12b6dc: 0x258d0001  addiu       $t5, $t4, 0x1
    ctx->pc = 0x12b6dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_12b6e0:
    // 0x12b6e0: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12b6e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12b6e4:
    // 0x12b6e4: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12b6e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_12b6e8:
    // 0x12b6e8: 0xae2f0004  sw          $t7, 0x4($s1)
    ctx->pc = 0x12b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
label_12b6ec:
    // 0x12b6ec: 0x918e0000  lbu         $t6, 0x0($t4)
    ctx->pc = 0x12b6ecu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12b6f0:
    // 0x12b6f0: 0xa2ce0000  sb          $t6, 0x0($s6)
    ctx->pc = 0x12b6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 14));
label_12b6f4:
    // 0x12b6f4: 0xae2d0000  sw          $t5, 0x0($s1)
    ctx->pc = 0x12b6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 13));
label_12b6f8:
    // 0x12b6f8: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
label_12b6fc:
    if (ctx->pc == 0x12B6FCu) {
        ctx->pc = 0x12B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6F8u;
        // 0x12b6fc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B700u;
        goto label_12b700;
    }
    ctx->pc = 0x12B6F8u;
    {
        const bool branch_taken_0x12b6f8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6F8u;
        // 0x12b6fc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6f8) {
            ctx->pc = 0x12B724u;
            goto label_12b724;
        }
    }
    ctx->pc = 0x12B700u;
label_12b700:
    // 0x12b700: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12b700u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12b704:
    // 0x12b704: 0x5de0000f  bgtzl       $t7, . + 4 + (0xF << 2)
label_12b708:
    if (ctx->pc == 0x12B708u) {
        ctx->pc = 0x12B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B704u;
        // 0x12b708: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B70Cu;
        goto label_12b70c;
    }
    ctx->pc = 0x12B704u;
    {
        const bool branch_taken_0x12b704 = (GPR_S64(ctx, 15) > 0);
        if (branch_taken_0x12b704) {
            ctx->pc = 0x12B708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B704u;
            // 0x12b708: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B744u;
            goto label_12b744;
        }
    }
    ctx->pc = 0x12B70Cu;
label_12b70c:
    // 0x12b70c: 0xc049b8a  jal         func_126E28
label_12b710:
    if (ctx->pc == 0x12B710u) {
        ctx->pc = 0x12B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B70Cu;
        // 0x12b710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B714u;
        goto label_12b714;
    }
    ctx->pc = 0x12B70Cu;
    SET_GPR_U32(ctx, 31, 0x12B714u);
    ctx->pc = 0x12B710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B70Cu;
    // 0x12b710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E28u, 0x12B70Cu, 0x12B714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B714u;
label_12b714:
    // 0x12b714: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_12b718:
    if (ctx->pc == 0x12B718u) {
        ctx->pc = 0x12B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B714u;
        // 0x12b718: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B71Cu;
        goto label_12b71c;
    }
    ctx->pc = 0x12B714u;
    {
        const bool branch_taken_0x12b714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b714) {
            ctx->pc = 0x12B718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B714u;
            // 0x12b718: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B744u;
            goto label_12b744;
        }
    }
    ctx->pc = 0x12B71Cu;
label_12b71c:
    // 0x12b71c: 0x12d2ff56  beq         $s6, $s2, . + 4 + (-0xAA << 2)
label_12b720:
    if (ctx->pc == 0x12B720u) {
        ctx->pc = 0x12B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B71Cu;
        // 0x12b720: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B724u;
        goto label_12b724;
    }
    ctx->pc = 0x12B71Cu;
    {
        const bool branch_taken_0x12b71c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 18));
        ctx->pc = 0x12B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B71Cu;
        // 0x12b720: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b71c) {
            ctx->pc = 0x12B478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b478;
        }
    }
    ctx->pc = 0x12B724u;
label_12b724:
    // 0x12b724: 0x2d29023  subu        $s2, $s6, $s2
    ctx->pc = 0x12b724u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_12b728:
    // 0x12b728: 0x1240ff46  beqz        $s2, . + 4 + (-0xBA << 2)
label_12b72c:
    if (ctx->pc == 0x12B72Cu) {
        ctx->pc = 0x12B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B728u;
        // 0x12b72c: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B730u;
        goto label_12b730;
    }
    ctx->pc = 0x12B728u;
    {
        const bool branch_taken_0x12b728 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B728u;
        // 0x12b72c: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b728) {
            ctx->pc = 0x12B444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b444;
        }
    }
    ctx->pc = 0x12B730u;
label_12b730:
    // 0x12b730: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x12b730u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
label_12b734:
    // 0x12b734: 0x8faf0268  lw          $t7, 0x268($sp)
    ctx->pc = 0x12b734u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12b738:
    // 0x12b738: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12b738u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_12b73c:
    // 0x12b73c: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
label_12b740:
    if (ctx->pc == 0x12B740u) {
        ctx->pc = 0x12B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B73Cu;
        // 0x12b740: 0xafaf0268  sw          $t7, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B744u;
        goto label_12b744;
    }
    ctx->pc = 0x12B73Cu;
    {
        const bool branch_taken_0x12b73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B73Cu;
        // 0x12b740: 0xafaf0268  sw          $t7, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b73c) {
            ctx->pc = 0x12B680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b680;
        }
    }
    ctx->pc = 0x12B744u;
label_12b744:
    // 0x12b744: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x12b744u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12b748:
    // 0x12b748: 0x3af7021  addu        $t6, $sp, $t7
    ctx->pc = 0x12b748u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 15)));
label_12b74c:
    // 0x12b74c: 0x81cd0000  lb          $t5, 0x0($t6)
    ctx->pc = 0x12b74cu;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12b750:
    // 0x12b750: 0x55a0ffe2  bnel        $t5, $zero, . + 4 + (-0x1E << 2)
label_12b754:
    if (ctx->pc == 0x12B754u) {
        ctx->pc = 0x12B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B750u;
        // 0x12b754: 0x8e2f0004  lw          $t7, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B758u;
        goto label_12b758;
    }
    ctx->pc = 0x12B750u;
    {
        const bool branch_taken_0x12b750 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b750) {
            ctx->pc = 0x12B754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B750u;
            // 0x12b754: 0x8e2f0004  lw          $t7, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B6DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b6dc;
        }
    }
    ctx->pc = 0x12B758u;
label_12b758:
    // 0x12b758: 0x1000fff3  b           . + 4 + (-0xD << 2)
label_12b75c:
    if (ctx->pc == 0x12B75Cu) {
        ctx->pc = 0x12B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B758u;
        // 0x12b75c: 0x2d29023  subu        $s2, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B760u;
        goto label_12b760;
    }
    ctx->pc = 0x12B758u;
    {
        const bool branch_taken_0x12b758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B758u;
        // 0x12b75c: 0x2d29023  subu        $s2, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b758) {
            ctx->pc = 0x12B728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b728;
        }
    }
    ctx->pc = 0x12B760u;
label_12b760:
    // 0x12b760: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12b760u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12b764:
    // 0x12b764: 0x328e0008  andi        $t6, $s4, 0x8
    ctx->pc = 0x12b764u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_12b768:
    // 0x12b768: 0x11c00023  beqz        $t6, . + 4 + (0x23 << 2)
label_12b76c:
    if (ctx->pc == 0x12B76Cu) {
        ctx->pc = 0x12B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B768u;
        // 0x12b76c: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B770u;
        goto label_12b770;
    }
    ctx->pc = 0x12B768u;
    {
        const bool branch_taken_0x12b768 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B768u;
        // 0x12b76c: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b768) {
            ctx->pc = 0x12B7F8u;
            goto label_12b7f8;
        }
    }
    ctx->pc = 0x12B770u;
label_12b770:
    // 0x12b770: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x12b770u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
label_12b774:
    // 0x12b774: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x12b774u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12b778:
    // 0x12b778: 0x25ec3a90  addiu       $t4, $t7, 0x3A90
    ctx->pc = 0x12b778u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 14992));
label_12b77c:
    // 0x12b77c: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x12b77cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_12b780:
    // 0x12b780: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x12b780u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
label_12b784:
    // 0x12b784: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12b784u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12b788:
    // 0x12b788: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x12b788u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
label_12b78c:
    // 0x12b78c: 0x15c0ffbc  bnez        $t6, . + 4 + (-0x44 << 2)
label_12b790:
    if (ctx->pc == 0x12B790u) {
        ctx->pc = 0x12B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B78Cu;
        // 0x12b790: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B794u;
        goto label_12b794;
    }
    ctx->pc = 0x12B78Cu;
    {
        const bool branch_taken_0x12b78c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B78Cu;
        // 0x12b790: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b78c) {
            ctx->pc = 0x12B680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b680;
        }
    }
    ctx->pc = 0x12B794u;
label_12b794:
    // 0x12b794: 0x180802d  daddu       $s0, $t4, $zero
    ctx->pc = 0x12b794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_12b798:
    // 0x12b798: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x12b798u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12b79c:
    // 0x12b79c: 0x25af0001  addiu       $t7, $t5, 0x1
    ctx->pc = 0x12b79cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_12b7a0:
    // 0x12b7a0: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12b7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12b7a4:
    // 0x12b7a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12b7a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12b7a8:
    // 0x12b7a8: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x12b7a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_12b7ac:
    // 0x12b7ac: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12b7acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12b7b0:
    // 0x12b7b0: 0x12e0ffb3  beqz        $s7, . + 4 + (-0x4D << 2)
label_12b7b4:
    if (ctx->pc == 0x12B7B4u) {
        ctx->pc = 0x12B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7B0u;
        // 0x12b7b4: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B7B8u;
        goto label_12b7b8;
    }
    ctx->pc = 0x12B7B0u;
    {
        const bool branch_taken_0x12b7b0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7B0u;
        // 0x12b7b4: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7b0) {
            ctx->pc = 0x12B680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b680;
        }
    }
    ctx->pc = 0x12B7B8u;
label_12b7b8:
    // 0x12b7b8: 0x5dc00006  bgtzl       $t6, . + 4 + (0x6 << 2)
label_12b7bc:
    if (ctx->pc == 0x12B7BCu) {
        ctx->pc = 0x12B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7B8u;
        // 0x12b7bc: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B7C0u;
        goto label_12b7c0;
    }
    ctx->pc = 0x12B7B8u;
    {
        const bool branch_taken_0x12b7b8 = (GPR_S64(ctx, 14) > 0);
        if (branch_taken_0x12b7b8) {
            ctx->pc = 0x12B7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B7B8u;
            // 0x12b7bc: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B7D4u;
            goto label_12b7d4;
        }
    }
    ctx->pc = 0x12B7C0u;
label_12b7c0:
    // 0x12b7c0: 0xc049b8a  jal         func_126E28
label_12b7c4:
    if (ctx->pc == 0x12B7C4u) {
        ctx->pc = 0x12B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7C0u;
        // 0x12b7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B7C8u;
        goto label_12b7c8;
    }
    ctx->pc = 0x12B7C0u;
    SET_GPR_U32(ctx, 31, 0x12B7C8u);
    ctx->pc = 0x12B7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B7C0u;
    // 0x12b7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E28u, 0x12B7C0u, 0x12B7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B7C8u;
label_12b7c8:
    // 0x12b7c8: 0x5440fed2  bnel        $v0, $zero, . + 4 + (-0x12E << 2)
label_12b7cc:
    if (ctx->pc == 0x12B7CCu) {
        ctx->pc = 0x12B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7C8u;
        // 0x12b7cc: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B7D0u;
        goto label_12b7d0;
    }
    ctx->pc = 0x12B7C8u;
    {
        const bool branch_taken_0x12b7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b7c8) {
            ctx->pc = 0x12B7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B7C8u;
            // 0x12b7cc: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b314;
        }
    }
    ctx->pc = 0x12B7D0u;
label_12b7d0:
    // 0x12b7d0: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x12b7d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12b7d4:
    // 0x12b7d4: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x12b7d4u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_12b7d8:
    // 0x12b7d8: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x12b7d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_12b7dc:
    // 0x12b7dc: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12b7dcu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12b7e0:
    // 0x12b7e0: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x12b7e0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
label_12b7e4:
    // 0x12b7e4: 0x51c0ffed  beql        $t6, $zero, . + 4 + (-0x13 << 2)
label_12b7e8:
    if (ctx->pc == 0x12B7E8u) {
        ctx->pc = 0x12B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7E4u;
        // 0x12b7e8: 0x8e2e0004  lw          $t6, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B7ECu;
        goto label_12b7ec;
    }
    ctx->pc = 0x12B7E4u;
    {
        const bool branch_taken_0x12b7e4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b7e4) {
            ctx->pc = 0x12B7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B7E4u;
            // 0x12b7e8: 0x8e2e0004  lw          $t6, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B79Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b79c;
        }
    }
    ctx->pc = 0x12B7ECu;
label_12b7ec:
    // 0x12b7ec: 0x1000fec9  b           . + 4 + (-0x137 << 2)
label_12b7f0:
    if (ctx->pc == 0x12B7F0u) {
        ctx->pc = 0x12B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7ECu;
        // 0x12b7f0: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B7F4u;
        goto label_12b7f4;
    }
    ctx->pc = 0x12B7ECu;
    {
        const bool branch_taken_0x12b7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7ECu;
        // 0x12b7f0: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7ec) {
            ctx->pc = 0x12B314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b314;
        }
    }
    ctx->pc = 0x12B7F4u;
label_12b7f4:
    // 0x12b7f4: 0x0  nop
    ctx->pc = 0x12b7f4u;
    // NOP
label_12b7f8:
    // 0x12b7f8: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x12b7f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
label_12b7fc:
    // 0x12b7fc: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x12b7fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12b800:
    // 0x12b800: 0x25eb3a90  addiu       $t3, $t7, 0x3A90
    ctx->pc = 0x12b800u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), 14992));
label_12b804:
    // 0x12b804: 0x8fad0264  lw          $t5, 0x264($sp)
    ctx->pc = 0x12b804u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12b808:
    // 0x12b808: 0x8faf0264  lw          $t7, 0x264($sp)
    ctx->pc = 0x12b808u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12b80c:
    // 0x12b80c: 0x918e0000  lbu         $t6, 0x0($t4)
    ctx->pc = 0x12b80cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12b810:
    // 0x12b810: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12b810u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12b814:
    // 0x12b814: 0x8db60000  lw          $s6, 0x0($t5)
    ctx->pc = 0x12b814u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_12b818:
    // 0x12b818: 0xafaf0264  sw          $t7, 0x264($sp)
    ctx->pc = 0x12b818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 15));
label_12b81c:
    // 0x12b81c: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x12b81cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_12b820:
    // 0x12b820: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x12b820u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12b824:
    // 0x12b824: 0x31ef0008  andi        $t7, $t7, 0x8
    ctx->pc = 0x12b824u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
label_12b828:
    // 0x12b828: 0x15e0001a  bnez        $t7, . + 4 + (0x1A << 2)
label_12b82c:
    if (ctx->pc == 0x12B82Cu) {
        ctx->pc = 0x12B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B828u;
        // 0x12b82c: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B830u;
        goto label_12b830;
    }
    ctx->pc = 0x12B828u;
    {
        const bool branch_taken_0x12b828 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B828u;
        // 0x12b82c: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b828) {
            ctx->pc = 0x12B894u;
            goto label_12b894;
        }
    }
    ctx->pc = 0x12B830u;
label_12b830:
    // 0x12b830: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x12b830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_12b834:
    // 0x12b834: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12b834u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12b838:
    // 0x12b838: 0x258d0001  addiu       $t5, $t4, 0x1
    ctx->pc = 0x12b838u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_12b83c:
    // 0x12b83c: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12b83cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12b840:
    // 0x12b840: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12b840u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_12b844:
    // 0x12b844: 0xae2f0004  sw          $t7, 0x4($s1)
    ctx->pc = 0x12b844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
label_12b848:
    // 0x12b848: 0x918e0000  lbu         $t6, 0x0($t4)
    ctx->pc = 0x12b848u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12b84c:
    // 0x12b84c: 0xa2ce0000  sb          $t6, 0x0($s6)
    ctx->pc = 0x12b84cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 14));
label_12b850:
    // 0x12b850: 0xae2d0000  sw          $t5, 0x0($s1)
    ctx->pc = 0x12b850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 13));
label_12b854:
    // 0x12b854: 0x12e0000f  beqz        $s7, . + 4 + (0xF << 2)
label_12b858:
    if (ctx->pc == 0x12B858u) {
        ctx->pc = 0x12B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B854u;
        // 0x12b858: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B85Cu;
        goto label_12b85c;
    }
    ctx->pc = 0x12B854u;
    {
        const bool branch_taken_0x12b854 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B854u;
        // 0x12b858: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b854) {
            ctx->pc = 0x12B894u;
            goto label_12b894;
        }
    }
    ctx->pc = 0x12B85Cu;
label_12b85c:
    // 0x12b85c: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12b85cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12b860:
    // 0x12b860: 0x5de00006  bgtzl       $t7, . + 4 + (0x6 << 2)
label_12b864:
    if (ctx->pc == 0x12B864u) {
        ctx->pc = 0x12B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B860u;
        // 0x12b864: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B868u;
        goto label_12b868;
    }
    ctx->pc = 0x12B860u;
    {
        const bool branch_taken_0x12b860 = (GPR_S64(ctx, 15) > 0);
        if (branch_taken_0x12b860) {
            ctx->pc = 0x12B864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B860u;
            // 0x12b864: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B87Cu;
            goto label_12b87c;
        }
    }
    ctx->pc = 0x12B868u;
label_12b868:
    // 0x12b868: 0xc049b8a  jal         func_126E28
label_12b86c:
    if (ctx->pc == 0x12B86Cu) {
        ctx->pc = 0x12B86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B868u;
        // 0x12b86c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B870u;
        goto label_12b870;
    }
    ctx->pc = 0x12B868u;
    SET_GPR_U32(ctx, 31, 0x12B870u);
    ctx->pc = 0x12B86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B868u;
    // 0x12b86c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E28u, 0x12B868u, 0x12B870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B870u;
label_12b870:
    // 0x12b870: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_12b874:
    if (ctx->pc == 0x12B874u) {
        ctx->pc = 0x12B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B870u;
        // 0x12b874: 0x2d27823  subu        $t7, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B878u;
        goto label_12b878;
    }
    ctx->pc = 0x12B870u;
    {
        const bool branch_taken_0x12b870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B870u;
        // 0x12b874: 0x2d27823  subu        $t7, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b870) {
            ctx->pc = 0x12B898u;
            goto label_12b898;
        }
    }
    ctx->pc = 0x12B878u;
label_12b878:
    // 0x12b878: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x12b878u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12b87c:
    // 0x12b87c: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x12b87cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12b880:
    // 0x12b880: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x12b880u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_12b884:
    // 0x12b884: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12b884u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12b888:
    // 0x12b888: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x12b888u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
label_12b88c:
    // 0x12b88c: 0x51c0ffea  beql        $t6, $zero, . + 4 + (-0x16 << 2)
label_12b890:
    if (ctx->pc == 0x12B890u) {
        ctx->pc = 0x12B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B88Cu;
        // 0x12b890: 0x8e2f0004  lw          $t7, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B894u;
        goto label_12b894;
    }
    ctx->pc = 0x12B88Cu;
    {
        const bool branch_taken_0x12b88c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b88c) {
            ctx->pc = 0x12B890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B88Cu;
            // 0x12b890: 0x8e2f0004  lw          $t7, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b838;
        }
    }
    ctx->pc = 0x12B894u;
label_12b894:
    // 0x12b894: 0x2d27823  subu        $t7, $s6, $s2
    ctx->pc = 0x12b894u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_12b898:
    // 0x12b898: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x12b898u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
label_12b89c:
    // 0x12b89c: 0x1000ff5a  b           . + 4 + (-0xA6 << 2)
label_12b8a0:
    if (ctx->pc == 0x12B8A0u) {
        ctx->pc = 0x12B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B89Cu;
        // 0x12b8a0: 0x2afa821  addu        $s5, $s5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B8A4u;
        goto label_12b8a4;
    }
    ctx->pc = 0x12B89Cu;
    {
        const bool branch_taken_0x12b89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B89Cu;
        // 0x12b8a0: 0x2afa821  addu        $s5, $s5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b89c) {
            ctx->pc = 0x12B608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b608;
        }
    }
    ctx->pc = 0x12B8A4u;
label_12b8a4:
    // 0x12b8a4: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12b8a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12b8a8:
    // 0x12b8a8: 0x240f015c  addiu       $t7, $zero, 0x15C
    ctx->pc = 0x12b8a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_12b8ac:
    // 0x12b8ac: 0x2eee015d  sltiu       $t6, $s7, 0x15D
    ctx->pc = 0x12b8acu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_12b8b0:
    // 0x12b8b0: 0x369402c0  ori         $s4, $s4, 0x2C0
    ctx->pc = 0x12b8b0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)704);
label_12b8b4:
    // 0x12b8b4: 0x1eeb80a  movz        $s7, $t7, $t6
    ctx->pc = 0x12b8b4u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
label_12b8b8:
    // 0x12b8b8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12b8b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_12b8bc:
    // 0x12b8bc: 0x12e00022  beqz        $s7, . + 4 + (0x22 << 2)
label_12b8c0:
    if (ctx->pc == 0x12B8C0u) {
        ctx->pc = 0x12B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8BCu;
        // 0x12b8c0: 0x27b60100  addiu       $s6, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B8C4u;
        goto label_12b8c4;
    }
    ctx->pc = 0x12B8BCu;
    {
        const bool branch_taken_0x12b8bc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8BCu;
        // 0x12b8c0: 0x27b60100  addiu       $s6, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8bc) {
            ctx->pc = 0x12B948u;
            goto label_12b948;
        }
    }
    ctx->pc = 0x12B8C4u;
label_12b8c4:
    // 0x12b8c4: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x12b8c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12b8c8:
    // 0x12b8c8: 0x91f00000  lbu         $s0, 0x0($t7)
    ctx->pc = 0x12b8c8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12b8cc:
    // 0x12b8cc: 0x260effd5  addiu       $t6, $s0, -0x2B
    ctx->pc = 0x12b8ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_12b8d0:
    // 0x12b8d0: 0x2dcf004e  sltiu       $t7, $t6, 0x4E
    ctx->pc = 0x12b8d0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)78) ? 1 : 0);
label_12b8d4:
    // 0x12b8d4: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
label_12b8d8:
    if (ctx->pc == 0x12B8D8u) {
        ctx->pc = 0x12B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8D4u;
        // 0x12b8d8: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B8DCu;
        goto label_12b8dc;
    }
    ctx->pc = 0x12B8D4u;
    {
        const bool branch_taken_0x12b8d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8D4u;
        // 0x12b8d8: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8d4) {
            ctx->pc = 0x12B948u;
            goto label_12b948;
        }
    }
    ctx->pc = 0x12B8DCu;
label_12b8dc:
    // 0x12b8dc: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12b8dcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
label_12b8e0:
    // 0x12b8e0: 0x25ce4250  addiu       $t6, $t6, 0x4250
    ctx->pc = 0x12b8e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16976));
label_12b8e4:
    // 0x12b8e4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12b8e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12b8e8:
    // 0x12b8e8: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x12b8e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12b8ec:
    // 0x12b8ec: 0x1a00008  jr          $t5
label_12b8f0:
    if (ctx->pc == 0x12B8F0u) {
        ctx->pc = 0x12B8F4u;
        goto label_12b8f4;
    }
    ctx->pc = 0x12B8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B8F4u: goto label_12b8f4;
            case 0x12B948u: goto label_12b948;
            case 0x12BA8Cu: goto label_12ba8c;
            case 0x12BAA0u: goto label_12baa0;
            case 0x12BAC0u: goto label_12bac0;
            case 0x12BAE8u: goto label_12bae8;
            case 0x12BB00u: goto label_12bb00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B8ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12B8F4u;
label_12b8f4:
    // 0x12b8f4: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
label_12b8f8:
    if (ctx->pc == 0x12B8F8u) {
        ctx->pc = 0x12B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8F4u;
        // 0x12b8f8: 0x328f0200  andi        $t7, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B8FCu;
        goto label_12b8fc;
    }
    ctx->pc = 0x12B8F4u;
    {
        const bool branch_taken_0x12b8f4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8F4u;
        // 0x12b8f8: 0x328f0200  andi        $t7, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8f4) {
            ctx->pc = 0x12B908u;
            goto label_12b908;
        }
    }
    ctx->pc = 0x12B8FCu;
label_12b8fc:
    // 0x12b8fc: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x12b8fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_12b900:
    // 0x12b900: 0x36940100  ori         $s4, $s4, 0x100
    ctx->pc = 0x12b900u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)256);
label_12b904:
    // 0x12b904: 0x328f0200  andi        $t7, $s4, 0x200
    ctx->pc = 0x12b904u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
label_12b908:
    // 0x12b908: 0x11e00002  beqz        $t7, . + 4 + (0x2 << 2)
label_12b90c:
    if (ctx->pc == 0x12B90Cu) {
        ctx->pc = 0x12B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B908u;
        // 0x12b90c: 0x240ffe3f  addiu       $t7, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B910u;
        goto label_12b910;
    }
    ctx->pc = 0x12B908u;
    {
        const bool branch_taken_0x12b908 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B908u;
        // 0x12b90c: 0x240ffe3f  addiu       $t7, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b908) {
            ctx->pc = 0x12B914u;
            goto label_12b914;
        }
    }
    ctx->pc = 0x12B910u;
label_12b910:
    // 0x12b910: 0x240ffd3f  addiu       $t7, $zero, -0x2C1
    ctx->pc = 0x12b910u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
label_12b914:
    // 0x12b914: 0x28fa024  and         $s4, $s4, $t7
    ctx->pc = 0x12b914u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
label_12b918:
    // 0x12b918: 0xa2d00000  sb          $s0, 0x0($s6)
    ctx->pc = 0x12b918u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 16));
label_12b91c:
    // 0x12b91c: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12b91cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12b920:
    // 0x12b920: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x12b920u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_12b924:
    // 0x12b924: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12b924u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_12b928:
    // 0x12b928: 0x19e00052  blez        $t7, . + 4 + (0x52 << 2)
label_12b92c:
    if (ctx->pc == 0x12B92Cu) {
        ctx->pc = 0x12B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B928u;
        // 0x12b92c: 0xae2f0004  sw          $t7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B930u;
        goto label_12b930;
    }
    ctx->pc = 0x12B928u;
    {
        const bool branch_taken_0x12b928 = (GPR_S64(ctx, 15) <= 0);
        ctx->pc = 0x12B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B928u;
        // 0x12b92c: 0xae2f0004  sw          $t7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b928) {
            ctx->pc = 0x12BA74u;
            goto label_12ba74;
        }
    }
    ctx->pc = 0x12B930u;
label_12b930:
    // 0x12b930: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x12b930u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12b934:
    // 0x12b934: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12b934u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_12b938:
    // 0x12b938: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12b938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12b93c:
    // 0x12b93c: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12b93cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12b940:
    // 0x12b940: 0x56e0ffe1  bnel        $s7, $zero, . + 4 + (-0x1F << 2)
label_12b944:
    if (ctx->pc == 0x12B944u) {
        ctx->pc = 0x12B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B940u;
        // 0x12b944: 0x8e2f0000  lw          $t7, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B948u;
        goto label_12b948;
    }
    ctx->pc = 0x12B940u;
    {
        const bool branch_taken_0x12b940 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b940) {
            ctx->pc = 0x12B944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B940u;
            // 0x12b944: 0x8e2f0000  lw          $t7, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b8c8;
        }
    }
    ctx->pc = 0x12B948u;
label_12b948:
    // 0x12b948: 0x328f0080  andi        $t7, $s4, 0x80
    ctx->pc = 0x12b948u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
label_12b94c:
    // 0x12b94c: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
label_12b950:
    if (ctx->pc == 0x12B950u) {
        ctx->pc = 0x12B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B94Cu;
        // 0x12b950: 0x27ae0100  addiu       $t6, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B954u;
        goto label_12b954;
    }
    ctx->pc = 0x12B94Cu;
    {
        const bool branch_taken_0x12b94c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B94Cu;
        // 0x12b950: 0x27ae0100  addiu       $t6, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b94c) {
            ctx->pc = 0x12B978u;
            goto label_12b978;
        }
    }
    ctx->pc = 0x12B954u;
label_12b954:
    // 0x12b954: 0x1d6782b  sltu        $t7, $t6, $s6
    ctx->pc = 0x12b954u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_12b958:
    // 0x12b958: 0x51e0feba  beql        $t7, $zero, . + 4 + (-0x146 << 2)
label_12b95c:
    if (ctx->pc == 0x12B95Cu) {
        ctx->pc = 0x12B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B958u;
        // 0x12b95c: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B960u;
        goto label_12b960;
    }
    ctx->pc = 0x12B958u;
    {
        const bool branch_taken_0x12b958 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b958) {
            ctx->pc = 0x12B95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B958u;
            // 0x12b95c: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b444;
        }
    }
    ctx->pc = 0x12B960u;
label_12b960:
    // 0x12b960: 0x82c4ffff  lb          $a0, -0x1($s6)
    ctx->pc = 0x12b960u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294967295)));
label_12b964:
    // 0x12b964: 0xc04a5d0  jal         func_129740
label_12b968:
    if (ctx->pc == 0x12B968u) {
        ctx->pc = 0x12B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B964u;
        // 0x12b968: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B96Cu;
        goto label_12b96c;
    }
    ctx->pc = 0x12B964u;
    SET_GPR_U32(ctx, 31, 0x12B96Cu);
    ctx->pc = 0x12B968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B964u;
    // 0x12b968: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129740u, 0x12B964u, 0x12B96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B96Cu;
label_12b96c:
    // 0x12b96c: 0x1000feb5  b           . + 4 + (-0x14B << 2)
label_12b970:
    if (ctx->pc == 0x12B970u) {
        ctx->pc = 0x12B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B96Cu;
        // 0x12b970: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B974u;
        goto label_12b974;
    }
    ctx->pc = 0x12B96Cu;
    {
        const bool branch_taken_0x12b96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B96Cu;
        // 0x12b970: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b96c) {
            ctx->pc = 0x12B444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b444;
        }
    }
    ctx->pc = 0x12B974u;
label_12b974:
    // 0x12b974: 0x0  nop
    ctx->pc = 0x12b974u;
    // NOP
label_12b978:
    // 0x12b978: 0x82d0ffff  lb          $s0, -0x1($s6)
    ctx->pc = 0x12b978u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294967295)));
label_12b97c:
    // 0x12b97c: 0x240f0078  addiu       $t7, $zero, 0x78
    ctx->pc = 0x12b97cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_12b980:
    // 0x12b980: 0x120f0003  beq         $s0, $t7, . + 4 + (0x3 << 2)
label_12b984:
    if (ctx->pc == 0x12B984u) {
        ctx->pc = 0x12B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B980u;
        // 0x12b984: 0x240f0058  addiu       $t7, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B988u;
        goto label_12b988;
    }
    ctx->pc = 0x12B980u;
    {
        const bool branch_taken_0x12b980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x12B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B980u;
        // 0x12b984: 0x240f0058  addiu       $t7, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b980) {
            ctx->pc = 0x12B990u;
            goto label_12b990;
        }
    }
    ctx->pc = 0x12B988u;
label_12b988:
    // 0x12b988: 0x160f0006  bne         $s0, $t7, . + 4 + (0x6 << 2)
label_12b98c:
    if (ctx->pc == 0x12B98Cu) {
        ctx->pc = 0x12B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B988u;
        // 0x12b98c: 0x328f0008  andi        $t7, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B990u;
        goto label_12b990;
    }
    ctx->pc = 0x12B988u;
    {
        const bool branch_taken_0x12b988 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x12B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B988u;
        // 0x12b98c: 0x328f0008  andi        $t7, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b988) {
            ctx->pc = 0x12B9A4u;
            goto label_12b9a4;
        }
    }
    ctx->pc = 0x12B990u;
label_12b990:
    // 0x12b990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12b994:
    // 0x12b994: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12b994u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_12b998:
    // 0x12b998: 0xc04a5d0  jal         func_129740
label_12b99c:
    if (ctx->pc == 0x12B99Cu) {
        ctx->pc = 0x12B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B998u;
        // 0x12b99c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B9A0u;
        goto label_12b9a0;
    }
    ctx->pc = 0x12B998u;
    SET_GPR_U32(ctx, 31, 0x12B9A0u);
    ctx->pc = 0x12B99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B998u;
    // 0x12b99c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129740u, 0x12B998u, 0x12B9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B9A0u;
label_12b9a0:
    // 0x12b9a0: 0x328f0008  andi        $t7, $s4, 0x8
    ctx->pc = 0x12b9a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_12b9a4:
    // 0x12b9a4: 0x15e00015  bnez        $t7, . + 4 + (0x15 << 2)
label_12b9a8:
    if (ctx->pc == 0x12B9A8u) {
        ctx->pc = 0x12B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9A4u;
        // 0x12b9a8: 0x27ad0100  addiu       $t5, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B9ACu;
        goto label_12b9ac;
    }
    ctx->pc = 0x12B9A4u;
    {
        const bool branch_taken_0x12b9a4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9A4u;
        // 0x12b9a8: 0x27ad0100  addiu       $t5, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9a4) {
            ctx->pc = 0x12B9FCu;
            goto label_12b9fc;
        }
    }
    ctx->pc = 0x12B9ACu;
label_12b9ac:
    // 0x12b9ac: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x12b9acu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
label_12b9b0:
    // 0x12b9b0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x12b9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12b9b4:
    // 0x12b9b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12b9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b9b8:
    // 0x12b9b8: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x12b9b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12b9bc:
    // 0x12b9bc: 0x8faf026c  lw          $t7, 0x26C($sp)
    ctx->pc = 0x12b9bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_12b9c0:
    // 0x12b9c0: 0x1e0f809  jalr        $t7
label_12b9c4:
    if (ctx->pc == 0x12B9C4u) {
        ctx->pc = 0x12B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9C0u;
        // 0x12b9c4: 0x8fa40260  lw          $a0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B9C8u;
        goto label_12b9c8;
    }
    ctx->pc = 0x12B9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x12B9C8u);
        ctx->pc = 0x12B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9C0u;
        // 0x12b9c4: 0x8fa40260  lw          $a0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B9C0u, 0x12B9C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B9C8u;
label_12b9c8:
    // 0x12b9c8: 0x328f0010  andi        $t7, $s4, 0x10
    ctx->pc = 0x12b9c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16);
label_12b9cc:
    // 0x12b9cc: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
label_12b9d0:
    if (ctx->pc == 0x12B9D0u) {
        ctx->pc = 0x12B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9CCu;
        // 0x12b9d0: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B9D4u;
        goto label_12b9d4;
    }
    ctx->pc = 0x12B9CCu;
    {
        const bool branch_taken_0x12b9cc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9CCu;
        // 0x12b9d0: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9cc) {
            ctx->pc = 0x12BA08u;
            goto label_12ba08;
        }
    }
    ctx->pc = 0x12B9D4u;
label_12b9d4:
    // 0x12b9d4: 0x2683c  dsll32      $t5, $v0, 0
    ctx->pc = 0x12b9d4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) << (32 + 0));
label_12b9d8:
    // 0x12b9d8: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x12b9d8u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
label_12b9dc:
    // 0x12b9dc: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x12b9dcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12b9e0:
    // 0x12b9e0: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12b9e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12b9e4:
    // 0x12b9e4: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x12b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
label_12b9e8:
    // 0x12b9e8: 0xafaf0264  sw          $t7, 0x264($sp)
    ctx->pc = 0x12b9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 15));
label_12b9ec:
    // 0x12b9ec: 0x8fae0268  lw          $t6, 0x268($sp)
    ctx->pc = 0x12b9ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12b9f0:
    // 0x12b9f0: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12b9f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_12b9f4:
    // 0x12b9f4: 0xafae0268  sw          $t6, 0x268($sp)
    ctx->pc = 0x12b9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 14));
label_12b9f8:
    // 0x12b9f8: 0x27ad0100  addiu       $t5, $sp, 0x100
    ctx->pc = 0x12b9f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12b9fc:
    // 0x12b9fc: 0x2cd7823  subu        $t7, $s6, $t5
    ctx->pc = 0x12b9fcu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
label_12ba00:
    // 0x12ba00: 0x1000fe44  b           . + 4 + (-0x1BC << 2)
label_12ba04:
    if (ctx->pc == 0x12BA04u) {
        ctx->pc = 0x12BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA00u;
        // 0x12ba04: 0x2afa821  addu        $s5, $s5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA08u;
        goto label_12ba08;
    }
    ctx->pc = 0x12BA00u;
    {
        const bool branch_taken_0x12ba00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA00u;
        // 0x12ba04: 0x2afa821  addu        $s5, $s5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba00) {
            ctx->pc = 0x12B314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b314;
        }
    }
    ctx->pc = 0x12BA08u;
label_12ba08:
    // 0x12ba08: 0x328f0004  andi        $t7, $s4, 0x4
    ctx->pc = 0x12ba08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
label_12ba0c:
    // 0x12ba0c: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
label_12ba10:
    if (ctx->pc == 0x12BA10u) {
        ctx->pc = 0x12BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA0Cu;
        // 0x12ba10: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA14u;
        goto label_12ba14;
    }
    ctx->pc = 0x12BA0Cu;
    {
        const bool branch_taken_0x12ba0c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA0Cu;
        // 0x12ba10: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba0c) {
            ctx->pc = 0x12BA30u;
            goto label_12ba30;
        }
    }
    ctx->pc = 0x12BA14u;
label_12ba14:
    // 0x12ba14: 0x304effff  andi        $t6, $v0, 0xFFFF
    ctx->pc = 0x12ba14u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_12ba18:
    // 0x12ba18: 0x8fad0264  lw          $t5, 0x264($sp)
    ctx->pc = 0x12ba18u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12ba1c:
    // 0x12ba1c: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x12ba1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12ba20:
    // 0x12ba20: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x12ba20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_12ba24:
    // 0x12ba24: 0xafad0264  sw          $t5, 0x264($sp)
    ctx->pc = 0x12ba24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 13));
label_12ba28:
    // 0x12ba28: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_12ba2c:
    if (ctx->pc == 0x12BA2Cu) {
        ctx->pc = 0x12BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA28u;
        // 0x12ba2c: 0xa5ee0000  sh          $t6, 0x0($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA30u;
        goto label_12ba30;
    }
    ctx->pc = 0x12BA28u;
    {
        const bool branch_taken_0x12ba28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA28u;
        // 0x12ba2c: 0xa5ee0000  sh          $t6, 0x0($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba28) {
            ctx->pc = 0x12B9ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b9ec;
        }
    }
    ctx->pc = 0x12BA30u;
label_12ba30:
    // 0x12ba30: 0x328f0001  andi        $t7, $s4, 0x1
    ctx->pc = 0x12ba30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_12ba34:
    // 0x12ba34: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
label_12ba38:
    if (ctx->pc == 0x12BA38u) {
        ctx->pc = 0x12BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA34u;
        // 0x12ba38: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA3Cu;
        goto label_12ba3c;
    }
    ctx->pc = 0x12BA34u;
    {
        const bool branch_taken_0x12ba34 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA34u;
        // 0x12ba38: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba34) {
            ctx->pc = 0x12BA54u;
            goto label_12ba54;
        }
    }
    ctx->pc = 0x12BA3Cu;
label_12ba3c:
    // 0x12ba3c: 0x8fae0264  lw          $t6, 0x264($sp)
    ctx->pc = 0x12ba3cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12ba40:
    // 0x12ba40: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x12ba40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12ba44:
    // 0x12ba44: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x12ba44u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
label_12ba48:
    // 0x12ba48: 0xafae0264  sw          $t6, 0x264($sp)
    ctx->pc = 0x12ba48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 14));
label_12ba4c:
    // 0x12ba4c: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_12ba50:
    if (ctx->pc == 0x12BA50u) {
        ctx->pc = 0x12BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA4Cu;
        // 0x12ba50: 0xfde20000  sd          $v0, 0x0($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA54u;
        goto label_12ba54;
    }
    ctx->pc = 0x12BA4Cu;
    {
        const bool branch_taken_0x12ba4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA4Cu;
        // 0x12ba50: 0xfde20000  sd          $v0, 0x0($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba4c) {
            ctx->pc = 0x12B9ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b9ec;
        }
    }
    ctx->pc = 0x12BA54u;
label_12ba54:
    // 0x12ba54: 0x2703c  dsll32      $t6, $v0, 0
    ctx->pc = 0x12ba54u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << (32 + 0));
label_12ba58:
    // 0x12ba58: 0x8fad0264  lw          $t5, 0x264($sp)
    ctx->pc = 0x12ba58u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12ba5c:
    // 0x12ba5c: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x12ba5cu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
label_12ba60:
    // 0x12ba60: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x12ba60u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12ba64:
    // 0x12ba64: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x12ba64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_12ba68:
    // 0x12ba68: 0xafad0264  sw          $t5, 0x264($sp)
    ctx->pc = 0x12ba68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 13));
label_12ba6c:
    // 0x12ba6c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
label_12ba70:
    if (ctx->pc == 0x12BA70u) {
        ctx->pc = 0x12BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA6Cu;
        // 0x12ba70: 0xadee0000  sw          $t6, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA74u;
        goto label_12ba74;
    }
    ctx->pc = 0x12BA6Cu;
    {
        const bool branch_taken_0x12ba6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA6Cu;
        // 0x12ba70: 0xadee0000  sw          $t6, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba6c) {
            ctx->pc = 0x12B9ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b9ec;
        }
    }
    ctx->pc = 0x12BA74u;
label_12ba74:
    // 0x12ba74: 0xc049b8a  jal         func_126E28
label_12ba78:
    if (ctx->pc == 0x12BA78u) {
        ctx->pc = 0x12BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA74u;
        // 0x12ba78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA7Cu;
        goto label_12ba7c;
    }
    ctx->pc = 0x12BA74u;
    SET_GPR_U32(ctx, 31, 0x12BA7Cu);
    ctx->pc = 0x12BA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BA74u;
    // 0x12ba78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E28u, 0x12BA74u, 0x12BA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA7Cu;
label_12ba7c:
    // 0x12ba7c: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_12ba80:
    if (ctx->pc == 0x12BA80u) {
        ctx->pc = 0x12BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA7Cu;
        // 0x12ba80: 0x328f0080  andi        $t7, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA84u;
        goto label_12ba84;
    }
    ctx->pc = 0x12BA7Cu;
    {
        const bool branch_taken_0x12ba7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA7Cu;
        // 0x12ba80: 0x328f0080  andi        $t7, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba7c) {
            ctx->pc = 0x12B94Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b94c;
        }
    }
    ctx->pc = 0x12BA84u;
label_12ba84:
    // 0x12ba84: 0x1000ffae  b           . + 4 + (-0x52 << 2)
label_12ba88:
    if (ctx->pc == 0x12BA88u) {
        ctx->pc = 0x12BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA84u;
        // 0x12ba88: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA8Cu;
        goto label_12ba8c;
    }
    ctx->pc = 0x12BA84u;
    {
        const bool branch_taken_0x12ba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA84u;
        // 0x12ba88: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba84) {
            ctx->pc = 0x12B940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b940;
        }
    }
    ctx->pc = 0x12BA8Cu;
label_12ba8c:
    // 0x12ba8c: 0x328f0040  andi        $t7, $s4, 0x40
    ctx->pc = 0x12ba8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
label_12ba90:
    // 0x12ba90: 0x11e0ffad  beqz        $t7, . + 4 + (-0x53 << 2)
label_12ba94:
    if (ctx->pc == 0x12BA94u) {
        ctx->pc = 0x12BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA90u;
        // 0x12ba94: 0x240fffbf  addiu       $t7, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA98u;
        goto label_12ba98;
    }
    ctx->pc = 0x12BA90u;
    {
        const bool branch_taken_0x12ba90 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA90u;
        // 0x12ba94: 0x240fffbf  addiu       $t7, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba90) {
            ctx->pc = 0x12B948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b948;
        }
    }
    ctx->pc = 0x12BA98u;
label_12ba98:
    // 0x12ba98: 0x1000ff9f  b           . + 4 + (-0x61 << 2)
label_12ba9c:
    if (ctx->pc == 0x12BA9Cu) {
        ctx->pc = 0x12BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA98u;
        // 0x12ba9c: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BAA0u;
        goto label_12baa0;
    }
    ctx->pc = 0x12BA98u;
    {
        const bool branch_taken_0x12ba98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA98u;
        // 0x12ba9c: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba98) {
            ctx->pc = 0x12B918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b918;
        }
    }
    ctx->pc = 0x12BAA0u;
label_12baa0:
    // 0x12baa0: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12baa0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
label_12baa4:
    // 0x12baa4: 0x1e7840  sll         $t7, $fp, 1
    ctx->pc = 0x12baa4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_12baa8:
    // 0x12baa8: 0x25ce4028  addiu       $t6, $t6, 0x4028
    ctx->pc = 0x12baa8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16424));
label_12baac:
    // 0x12baac: 0x240dfe3f  addiu       $t5, $zero, -0x1C1
    ctx->pc = 0x12baacu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
label_12bab0:
    // 0x12bab0: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12bab0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12bab4:
    // 0x12bab4: 0x28da024  and         $s4, $s4, $t5
    ctx->pc = 0x12bab4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 13));
label_12bab8:
    // 0x12bab8: 0x1000ff97  b           . + 4 + (-0x69 << 2)
label_12babc:
    if (ctx->pc == 0x12BABCu) {
        ctx->pc = 0x12BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAB8u;
        // 0x12babc: 0x85fe0000  lh          $fp, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BAC0u;
        goto label_12bac0;
    }
    ctx->pc = 0x12BAB8u;
    {
        const bool branch_taken_0x12bab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAB8u;
        // 0x12babc: 0x85fe0000  lh          $fp, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bab8) {
            ctx->pc = 0x12B918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b918;
        }
    }
    ctx->pc = 0x12BAC0u;
label_12bac0:
    // 0x12bac0: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12bac0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
label_12bac4:
    // 0x12bac4: 0x1e7840  sll         $t7, $fp, 1
    ctx->pc = 0x12bac4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_12bac8:
    // 0x12bac8: 0x25ce4028  addiu       $t6, $t6, 0x4028
    ctx->pc = 0x12bac8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16424));
label_12bacc:
    // 0x12bacc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12baccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12bad0:
    // 0x12bad0: 0x85fe0000  lh          $fp, 0x0($t7)
    ctx->pc = 0x12bad0u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
label_12bad4:
    // 0x12bad4: 0x2bce0009  slti        $t6, $fp, 0x9
    ctx->pc = 0x12bad4u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)9) ? 1 : 0);
label_12bad8:
    // 0x12bad8: 0x15c0ff9b  bnez        $t6, . + 4 + (-0x65 << 2)
label_12badc:
    if (ctx->pc == 0x12BADCu) {
        ctx->pc = 0x12BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAD8u;
        // 0x12badc: 0x240ffe3f  addiu       $t7, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BAE0u;
        goto label_12bae0;
    }
    ctx->pc = 0x12BAD8u;
    {
        const bool branch_taken_0x12bad8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAD8u;
        // 0x12badc: 0x240ffe3f  addiu       $t7, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bad8) {
            ctx->pc = 0x12B948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b948;
        }
    }
    ctx->pc = 0x12BAE0u;
label_12bae0:
    // 0x12bae0: 0x1000ff8d  b           . + 4 + (-0x73 << 2)
label_12bae4:
    if (ctx->pc == 0x12BAE4u) {
        ctx->pc = 0x12BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAE0u;
        // 0x12bae4: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BAE8u;
        goto label_12bae8;
    }
    ctx->pc = 0x12BAE0u;
    {
        const bool branch_taken_0x12bae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAE0u;
        // 0x12bae4: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bae0) {
            ctx->pc = 0x12B918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b918;
        }
    }
    ctx->pc = 0x12BAE8u;
label_12bae8:
    // 0x12bae8: 0x2bcf000b  slti        $t7, $fp, 0xB
    ctx->pc = 0x12bae8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)11) ? 1 : 0);
label_12baec:
    // 0x12baec: 0x15e0ff96  bnez        $t7, . + 4 + (-0x6A << 2)
label_12baf0:
    if (ctx->pc == 0x12BAF0u) {
        ctx->pc = 0x12BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAECu;
        // 0x12baf0: 0x240ffe3f  addiu       $t7, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BAF4u;
        goto label_12baf4;
    }
    ctx->pc = 0x12BAECu;
    {
        const bool branch_taken_0x12baec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAECu;
        // 0x12baf0: 0x240ffe3f  addiu       $t7, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12baec) {
            ctx->pc = 0x12B948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b948;
        }
    }
    ctx->pc = 0x12BAF4u;
label_12baf4:
    // 0x12baf4: 0x1000ff88  b           . + 4 + (-0x78 << 2)
label_12baf8:
    if (ctx->pc == 0x12BAF8u) {
        ctx->pc = 0x12BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAF4u;
        // 0x12baf8: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BAFCu;
        goto label_12bafc;
    }
    ctx->pc = 0x12BAF4u;
    {
        const bool branch_taken_0x12baf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAF4u;
        // 0x12baf8: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12baf4) {
            ctx->pc = 0x12B918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b918;
        }
    }
    ctx->pc = 0x12BAFCu;
label_12bafc:
    // 0x12bafc: 0x0  nop
    ctx->pc = 0x12bafcu;
    // NOP
label_12bb00:
    // 0x12bb00: 0x328f0100  andi        $t7, $s4, 0x100
    ctx->pc = 0x12bb00u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)256);
label_12bb04:
    // 0x12bb04: 0x11e0ff90  beqz        $t7, . + 4 + (-0x70 << 2)
label_12bb08:
    if (ctx->pc == 0x12BB08u) {
        ctx->pc = 0x12BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB04u;
        // 0x12bb08: 0x27af0101  addiu       $t7, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BB0Cu;
        goto label_12bb0c;
    }
    ctx->pc = 0x12BB04u;
    {
        const bool branch_taken_0x12bb04 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB04u;
        // 0x12bb08: 0x27af0101  addiu       $t7, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb04) {
            ctx->pc = 0x12B948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b948;
        }
    }
    ctx->pc = 0x12BB0Cu;
label_12bb0c:
    // 0x12bb0c: 0x16cfff8e  bne         $s6, $t7, . + 4 + (-0x72 << 2)
label_12bb10:
    if (ctx->pc == 0x12BB10u) {
        ctx->pc = 0x12BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB0Cu;
        // 0x12bb10: 0x240ffeff  addiu       $t7, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BB14u;
        goto label_12bb14;
    }
    ctx->pc = 0x12BB0Cu;
    {
        const bool branch_taken_0x12bb0c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 15));
        ctx->pc = 0x12BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB0Cu;
        // 0x12bb10: 0x240ffeff  addiu       $t7, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb0c) {
            ctx->pc = 0x12B948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b948;
        }
    }
    ctx->pc = 0x12BB14u;
label_12bb14:
    // 0x12bb14: 0x1000ff7f  b           . + 4 + (-0x81 << 2)
label_12bb18:
    if (ctx->pc == 0x12BB18u) {
        ctx->pc = 0x12BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB14u;
        // 0x12bb18: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BB1Cu;
        goto label_12bb1c;
    }
    ctx->pc = 0x12BB14u;
    {
        const bool branch_taken_0x12bb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB14u;
        // 0x12bb18: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb14) {
            ctx->pc = 0x12B914u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b914;
        }
    }
    ctx->pc = 0x12BB1Cu;
label_12bb1c:
    // 0x12bb1c: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12bb1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12bb20:
    // 0x12bb20: 0xffa00270  sd          $zero, 0x270($sp)
    ctx->pc = 0x12bb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 0));
label_12bb24:
    // 0x12bb24: 0x2eee015d  sltiu       $t6, $s7, 0x15D
    ctx->pc = 0x12bb24u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_12bb28:
    // 0x12bb28: 0xafa00280  sw          $zero, 0x280($sp)
    ctx->pc = 0x12bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
label_12bb2c:
    // 0x12bb2c: 0x240f015c  addiu       $t7, $zero, 0x15C
    ctx->pc = 0x12bb2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_12bb30:
    // 0x12bb30: 0xffa00278  sd          $zero, 0x278($sp)
    ctx->pc = 0x12bb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 0));
label_12bb34:
    // 0x12bb34: 0x1eeb80a  movz        $s7, $t7, $t6
    ctx->pc = 0x12bb34u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
label_12bb38:
    // 0x12bb38: 0x369403c0  ori         $s4, $s4, 0x3C0
    ctx->pc = 0x12bb38u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)960);
label_12bb3c:
    // 0x12bb3c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12bb3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_12bb40:
    // 0x12bb40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12bb40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12bb44:
    // 0x12bb44: 0x12e0001c  beqz        $s7, . + 4 + (0x1C << 2)
label_12bb48:
    if (ctx->pc == 0x12BB48u) {
        ctx->pc = 0x12BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB44u;
        // 0x12bb48: 0x27b60100  addiu       $s6, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BB4Cu;
        goto label_12bb4c;
    }
    ctx->pc = 0x12BB44u;
    {
        const bool branch_taken_0x12bb44 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB44u;
        // 0x12bb48: 0x27b60100  addiu       $s6, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb44) {
            ctx->pc = 0x12BBB8u;
            goto label_12bbb8;
        }
    }
    ctx->pc = 0x12BB4Cu;
label_12bb4c:
    // 0x12bb4c: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x12bb4cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12bb50:
    // 0x12bb50: 0x91f00000  lbu         $s0, 0x0($t7)
    ctx->pc = 0x12bb50u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12bb54:
    // 0x12bb54: 0x260effd5  addiu       $t6, $s0, -0x2B
    ctx->pc = 0x12bb54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_12bb58:
    // 0x12bb58: 0x2dcf003b  sltiu       $t7, $t6, 0x3B
    ctx->pc = 0x12bb58u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_12bb5c:
    // 0x12bb5c: 0x11e00016  beqz        $t7, . + 4 + (0x16 << 2)
label_12bb60:
    if (ctx->pc == 0x12BB60u) {
        ctx->pc = 0x12BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB5Cu;
        // 0x12bb60: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BB64u;
        goto label_12bb64;
    }
    ctx->pc = 0x12BB5Cu;
    {
        const bool branch_taken_0x12bb5c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB5Cu;
        // 0x12bb60: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb5c) {
            ctx->pc = 0x12BBB8u;
            goto label_12bbb8;
        }
    }
    ctx->pc = 0x12BB64u;
label_12bb64:
    // 0x12bb64: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12bb64u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
label_12bb68:
    // 0x12bb68: 0x25ce4388  addiu       $t6, $t6, 0x4388
    ctx->pc = 0x12bb68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17288));
label_12bb6c:
    // 0x12bb6c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12bb6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12bb70:
    // 0x12bb70: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x12bb70u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12bb74:
    // 0x12bb74: 0x1a00008  jr          $t5
label_12bb78:
    if (ctx->pc == 0x12BB78u) {
        ctx->pc = 0x12BB7Cu;
        goto label_12bb7c;
    }
    ctx->pc = 0x12BB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12BB7Cu: goto label_12bb7c;
            case 0x12BBB8u: goto label_12bbb8;
            case 0x12BD60u: goto label_12bd60;
            case 0x12BD78u: goto label_12bd78;
            case 0x12BD8Cu: goto label_12bd8c;
            case 0x12BDA0u: goto label_12bda0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BB74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12BB7Cu;
label_12bb7c:
    // 0x12bb7c: 0x328f0080  andi        $t7, $s4, 0x80
    ctx->pc = 0x12bb7cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
label_12bb80:
    // 0x12bb80: 0x11e00077  beqz        $t7, . + 4 + (0x77 << 2)
label_12bb84:
    if (ctx->pc == 0x12BB84u) {
        ctx->pc = 0x12BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB80u;
        // 0x12bb84: 0x240fffbf  addiu       $t7, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BB88u;
        goto label_12bb88;
    }
    ctx->pc = 0x12BB80u;
    {
        const bool branch_taken_0x12bb80 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB80u;
        // 0x12bb84: 0x240fffbf  addiu       $t7, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb80) {
            ctx->pc = 0x12BD60u;
            goto label_12bd60;
        }
    }
    ctx->pc = 0x12BB88u;
label_12bb88:
    // 0x12bb88: 0x66520001  daddiu      $s2, $s2, 0x1
    ctx->pc = 0x12bb88u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)1);
label_12bb8c:
    // 0x12bb8c: 0x28fa024  and         $s4, $s4, $t7
    ctx->pc = 0x12bb8cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
label_12bb90:
    // 0x12bb90: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12bb90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12bb94:
    // 0x12bb94: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12bb94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12bb98:
    // 0x12bb98: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12bb98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_12bb9c:
    // 0x12bb9c: 0x19e00069  blez        $t7, . + 4 + (0x69 << 2)
label_12bba0:
    if (ctx->pc == 0x12BBA0u) {
        ctx->pc = 0x12BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB9Cu;
        // 0x12bba0: 0xae2f0004  sw          $t7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BBA4u;
        goto label_12bba4;
    }
    ctx->pc = 0x12BB9Cu;
    {
        const bool branch_taken_0x12bb9c = (GPR_S64(ctx, 15) <= 0);
        ctx->pc = 0x12BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB9Cu;
        // 0x12bba0: 0xae2f0004  sw          $t7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb9c) {
            ctx->pc = 0x12BD44u;
            goto label_12bd44;
        }
    }
    ctx->pc = 0x12BBA4u;
label_12bba4:
    // 0x12bba4: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x12bba4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12bba8:
    // 0x12bba8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12bba8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_12bbac:
    // 0x12bbac: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12bbacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12bbb0:
    // 0x12bbb0: 0x56e0ffe7  bnel        $s7, $zero, . + 4 + (-0x19 << 2)
label_12bbb4:
    if (ctx->pc == 0x12BBB4u) {
        ctx->pc = 0x12BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBB0u;
        // 0x12bbb4: 0x8e2f0000  lw          $t7, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BBB8u;
        goto label_12bbb8;
    }
    ctx->pc = 0x12BBB0u;
    {
        const bool branch_taken_0x12bbb0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bbb0) {
            ctx->pc = 0x12BBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BBB0u;
            // 0x12bbb4: 0x8e2f0000  lw          $t7, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bb50;
        }
    }
    ctx->pc = 0x12BBB8u;
label_12bbb8:
    // 0x12bbb8: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_12bbbc:
    if (ctx->pc == 0x12BBBCu) {
        ctx->pc = 0x12BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBB8u;
        // 0x12bbbc: 0x240fff7f  addiu       $t7, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BBC0u;
        goto label_12bbc0;
    }
    ctx->pc = 0x12BBB8u;
    {
        const bool branch_taken_0x12bbb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBB8u;
        // 0x12bbbc: 0x240fff7f  addiu       $t7, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbb8) {
            ctx->pc = 0x12BBC4u;
            goto label_12bbc4;
        }
    }
    ctx->pc = 0x12BBC0u;
label_12bbc0:
    // 0x12bbc0: 0x28fa024  and         $s4, $s4, $t7
    ctx->pc = 0x12bbc0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
label_12bbc4:
    // 0x12bbc4: 0x328f0080  andi        $t7, $s4, 0x80
    ctx->pc = 0x12bbc4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
label_12bbc8:
    // 0x12bbc8: 0x11e0001d  beqz        $t7, . + 4 + (0x1D << 2)
label_12bbcc:
    if (ctx->pc == 0x12BBCCu) {
        ctx->pc = 0x12BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBC8u;
        // 0x12bbcc: 0x328f0200  andi        $t7, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BBD0u;
        goto label_12bbd0;
    }
    ctx->pc = 0x12BBC8u;
    {
        const bool branch_taken_0x12bbc8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBC8u;
        // 0x12bbcc: 0x328f0200  andi        $t7, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbc8) {
            ctx->pc = 0x12BC40u;
            goto label_12bc40;
        }
    }
    ctx->pc = 0x12BBD0u;
label_12bbd0:
    // 0x12bbd0: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
label_12bbd4:
    if (ctx->pc == 0x12BBD4u) {
        ctx->pc = 0x12BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBD0u;
        // 0x12bbd4: 0x27ad0100  addiu       $t5, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BBD8u;
        goto label_12bbd8;
    }
    ctx->pc = 0x12BBD0u;
    {
        const bool branch_taken_0x12bbd0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBD0u;
        // 0x12bbd4: 0x27ad0100  addiu       $t5, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbd0) {
            ctx->pc = 0x12BC00u;
            goto label_12bc00;
        }
    }
    ctx->pc = 0x12BBD8u;
label_12bbd8:
    // 0x12bbd8: 0x1b6782b  sltu        $t7, $t5, $s6
    ctx->pc = 0x12bbd8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_12bbdc:
    // 0x12bbdc: 0x11e0fe18  beqz        $t7, . + 4 + (-0x1E8 << 2)
label_12bbe0:
    if (ctx->pc == 0x12BBE0u) {
        ctx->pc = 0x12BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBDCu;
        // 0x12bbe0: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BBE4u;
        goto label_12bbe4;
    }
    ctx->pc = 0x12BBDCu;
    {
        const bool branch_taken_0x12bbdc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBDCu;
        // 0x12bbe0: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbdc) {
            ctx->pc = 0x12B440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b440;
        }
    }
    ctx->pc = 0x12BBE4u;
label_12bbe4:
    // 0x12bbe4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12bbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12bbe8:
    // 0x12bbe8: 0xc04a5d0  jal         func_129740
label_12bbec:
    if (ctx->pc == 0x12BBECu) {
        ctx->pc = 0x12BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBE8u;
        // 0x12bbec: 0x82c40000  lb          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BBF0u;
        goto label_12bbf0;
    }
    ctx->pc = 0x12BBE8u;
    SET_GPR_U32(ctx, 31, 0x12BBF0u);
    ctx->pc = 0x12BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BBE8u;
    // 0x12bbec: 0x82c40000  lb          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129740u, 0x12BBE8u, 0x12BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BBF0u;
label_12bbf0:
    // 0x12bbf0: 0x27ae0100  addiu       $t6, $sp, 0x100
    ctx->pc = 0x12bbf0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12bbf4:
    // 0x12bbf4: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_12bbf8:
    if (ctx->pc == 0x12BBF8u) {
        ctx->pc = 0x12BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBF4u;
        // 0x12bbf8: 0x1d6782b  sltu        $t7, $t6, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BBFCu;
        goto label_12bbfc;
    }
    ctx->pc = 0x12BBF4u;
    {
        const bool branch_taken_0x12bbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBF4u;
        // 0x12bbf8: 0x1d6782b  sltu        $t7, $t6, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbf4) {
            ctx->pc = 0x12BBDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bbdc;
        }
    }
    ctx->pc = 0x12BBFCu;
label_12bbfc:
    // 0x12bbfc: 0x0  nop
    ctx->pc = 0x12bbfcu;
    // NOP
label_12bc00:
    // 0x12bc00: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12bc00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_12bc04:
    // 0x12bc04: 0x82d00000  lb          $s0, 0x0($s6)
    ctx->pc = 0x12bc04u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_12bc08:
    // 0x12bc08: 0x240f0065  addiu       $t7, $zero, 0x65
    ctx->pc = 0x12bc08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_12bc0c:
    // 0x12bc0c: 0x120f0009  beq         $s0, $t7, . + 4 + (0x9 << 2)
label_12bc10:
    if (ctx->pc == 0x12BC10u) {
        ctx->pc = 0x12BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC0Cu;
        // 0x12bc10: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BC14u;
        goto label_12bc14;
    }
    ctx->pc = 0x12BC0Cu;
    {
        const bool branch_taken_0x12bc0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x12BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC0Cu;
        // 0x12bc10: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc0c) {
            ctx->pc = 0x12BC34u;
            goto label_12bc34;
        }
    }
    ctx->pc = 0x12BC14u;
label_12bc14:
    // 0x12bc14: 0x240f0045  addiu       $t7, $zero, 0x45
    ctx->pc = 0x12bc14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_12bc18:
    // 0x12bc18: 0x120f0006  beq         $s0, $t7, . + 4 + (0x6 << 2)
label_12bc1c:
    if (ctx->pc == 0x12BC1Cu) {
        ctx->pc = 0x12BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC18u;
        // 0x12bc1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BC20u;
        goto label_12bc20;
    }
    ctx->pc = 0x12BC18u;
    {
        const bool branch_taken_0x12bc18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x12BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC18u;
        // 0x12bc1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc18) {
            ctx->pc = 0x12BC34u;
            goto label_12bc34;
        }
    }
    ctx->pc = 0x12BC20u;
label_12bc20:
    // 0x12bc20: 0xc04a5d0  jal         func_129740
label_12bc24:
    if (ctx->pc == 0x12BC24u) {
        ctx->pc = 0x12BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC20u;
        // 0x12bc24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BC28u;
        goto label_12bc28;
    }
    ctx->pc = 0x12BC20u;
    SET_GPR_U32(ctx, 31, 0x12BC28u);
    ctx->pc = 0x12BC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BC20u;
    // 0x12bc24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129740u, 0x12BC20u, 0x12BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC28u;
label_12bc28:
    // 0x12bc28: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12bc28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_12bc2c:
    // 0x12bc2c: 0x82d00000  lb          $s0, 0x0($s6)
    ctx->pc = 0x12bc2cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_12bc30:
    // 0x12bc30: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x12bc30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_12bc34:
    // 0x12bc34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12bc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12bc38:
    // 0x12bc38: 0xc04a5d0  jal         func_129740
label_12bc3c:
    if (ctx->pc == 0x12BC3Cu) {
        ctx->pc = 0x12BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC38u;
        // 0x12bc3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BC40u;
        goto label_12bc40;
    }
    ctx->pc = 0x12BC38u;
    SET_GPR_U32(ctx, 31, 0x12BC40u);
    ctx->pc = 0x12BC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BC38u;
    // 0x12bc3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129740u, 0x12BC38u, 0x12BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC40u;
label_12bc40:
    // 0x12bc40: 0x328f0008  andi        $t7, $s4, 0x8
    ctx->pc = 0x12bc40u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_12bc44:
    // 0x12bc44: 0x55e0fdb4  bnel        $t7, $zero, . + 4 + (-0x24C << 2)
label_12bc48:
    if (ctx->pc == 0x12BC48u) {
        ctx->pc = 0x12BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC44u;
        // 0x12bc48: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BC4Cu;
        goto label_12bc4c;
    }
    ctx->pc = 0x12BC44u;
    {
        const bool branch_taken_0x12bc44 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bc44) {
            ctx->pc = 0x12BC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BC44u;
            // 0x12bc48: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b318;
        }
    }
    ctx->pc = 0x12BC4Cu;
label_12bc4c:
    // 0x12bc4c: 0x328e0300  andi        $t6, $s4, 0x300
    ctx->pc = 0x12bc4cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)768);
label_12bc50:
    // 0x12bc50: 0x240f0200  addiu       $t7, $zero, 0x200
    ctx->pc = 0x12bc50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_12bc54:
    // 0x12bc54: 0x15cf0030  bne         $t6, $t7, . + 4 + (0x30 << 2)
label_12bc58:
    if (ctx->pc == 0x12BC58u) {
        ctx->pc = 0x12BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC54u;
        // 0x12bc58: 0xa2c00000  sb          $zero, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BC5Cu;
        goto label_12bc5c;
    }
    ctx->pc = 0x12BC54u;
    {
        const bool branch_taken_0x12bc54 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x12BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC54u;
        // 0x12bc58: 0xa2c00000  sb          $zero, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc54) {
            ctx->pc = 0x12BD18u;
            goto label_12bd18;
        }
    }
    ctx->pc = 0x12BC5Cu;
label_12bc5c:
    // 0x12bc5c: 0xdfaf0270  ld          $t7, 0x270($sp)
    ctx->pc = 0x12bc5cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_12bc60:
    // 0x12bc60: 0xafb60280  sw          $s6, 0x280($sp)
    ctx->pc = 0x12bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 22));
label_12bc64:
    // 0x12bc64: 0x24f902f  dsubu       $s2, $s2, $t7
    ctx->pc = 0x12bc64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 15));
label_12bc68:
    // 0x12bc68: 0xffb20278  sd          $s2, 0x278($sp)
    ctx->pc = 0x12bc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 18));
label_12bc6c:
    // 0x12bc6c: 0x12302f  dsubu       $a2, $zero, $s2
    ctx->pc = 0x12bc6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 18));
label_12bc70:
    // 0x12bc70: 0xdfad0278  ld          $t5, 0x278($sp)
    ctx->pc = 0x12bc70u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_12bc74:
    // 0x12bc74: 0x11a0000b  beqz        $t5, . + 4 + (0xB << 2)
label_12bc78:
    if (ctx->pc == 0x12BC78u) {
        ctx->pc = 0x12BC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC74u;
        // 0x12bc78: 0x8fae0280  lw          $t6, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BC7Cu;
        goto label_12bc7c;
    }
    ctx->pc = 0x12BC74u;
    {
        const bool branch_taken_0x12bc74 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC74u;
        // 0x12bc78: 0x8fae0280  lw          $t6, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc74) {
            ctx->pc = 0x12BCA4u;
            goto label_12bca4;
        }
    }
    ctx->pc = 0x12BC7Cu;
label_12bc7c:
    // 0x12bc7c: 0x27af0249  addiu       $t7, $sp, 0x249
    ctx->pc = 0x12bc7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 585));
label_12bc80:
    // 0x12bc80: 0x8fad0280  lw          $t5, 0x280($sp)
    ctx->pc = 0x12bc80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_12bc84:
    // 0x12bc84: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x12bc84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_12bc88:
    // 0x12bc88: 0x1cf782b  sltu        $t7, $t6, $t7
    ctx->pc = 0x12bc88u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
label_12bc8c:
    // 0x12bc8c: 0x24a54050  addiu       $a1, $a1, 0x4050
    ctx->pc = 0x12bc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16464));
label_12bc90:
    // 0x12bc90: 0x27ae0248  addiu       $t6, $sp, 0x248
    ctx->pc = 0x12bc90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
label_12bc94:
    // 0x12bc94: 0x1cf680a  movz        $t5, $t6, $t7
    ctx->pc = 0x12bc94u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 14));
label_12bc98:
    // 0x12bc98: 0xafad0280  sw          $t5, 0x280($sp)
    ctx->pc = 0x12bc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 13));
label_12bc9c:
    // 0x12bc9c: 0xc049ce8  jal         func_1273A0
label_12bca0:
    if (ctx->pc == 0x12BCA0u) {
        ctx->pc = 0x12BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC9Cu;
        // 0x12bca0: 0x8fa40280  lw          $a0, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BCA4u;
        goto label_12bca4;
    }
    ctx->pc = 0x12BC9Cu;
    SET_GPR_U32(ctx, 31, 0x12BCA4u);
    ctx->pc = 0x12BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BC9Cu;
    // 0x12bca0: 0x8fa40280  lw          $a0, 0x280($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x12BC9Cu, 0x12BCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCA4u;
label_12bca4:
    // 0x12bca4: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x12bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_12bca8:
    // 0x12bca8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x12bca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12bcac:
    // 0x12bcac: 0xc04a0c6  jal         func_128318
label_12bcb0:
    if (ctx->pc == 0x12BCB0u) {
        ctx->pc = 0x12BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCACu;
        // 0x12bcb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BCB4u;
        goto label_12bcb4;
    }
    ctx->pc = 0x12BCACu;
    SET_GPR_U32(ctx, 31, 0x12BCB4u);
    ctx->pc = 0x12BCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BCACu;
    // 0x12bcb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128318u, 0x12BCACu, 0x12BCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCB4u;
label_12bcb4:
    // 0x12bcb4: 0x328f0001  andi        $t7, $s4, 0x1
    ctx->pc = 0x12bcb4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_12bcb8:
    // 0x12bcb8: 0x11e00009  beqz        $t7, . + 4 + (0x9 << 2)
label_12bcbc:
    if (ctx->pc == 0x12BCBCu) {
        ctx->pc = 0x12BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCB8u;
        // 0x12bcbc: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BCC0u;
        goto label_12bcc0;
    }
    ctx->pc = 0x12BCB8u;
    {
        const bool branch_taken_0x12bcb8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCB8u;
        // 0x12bcbc: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bcb8) {
            ctx->pc = 0x12BCE0u;
            goto label_12bce0;
        }
    }
    ctx->pc = 0x12BCC0u;
label_12bcc0:
    // 0x12bcc0: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x12bcc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12bcc4:
    // 0x12bcc4: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12bcc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12bcc8:
    // 0x12bcc8: 0xafaf0264  sw          $t7, 0x264($sp)
    ctx->pc = 0x12bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 15));
label_12bccc:
    // 0x12bccc: 0xfdc20000  sd          $v0, 0x0($t6)
    ctx->pc = 0x12bcccu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 2));
label_12bcd0:
    // 0x12bcd0: 0x8faf0268  lw          $t7, 0x268($sp)
    ctx->pc = 0x12bcd0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12bcd4:
    // 0x12bcd4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12bcd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_12bcd8:
    // 0x12bcd8: 0x1000fd8e  b           . + 4 + (-0x272 << 2)
label_12bcdc:
    if (ctx->pc == 0x12BCDCu) {
        ctx->pc = 0x12BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCD8u;
        // 0x12bcdc: 0xafaf0268  sw          $t7, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BCE0u;
        goto label_12bce0;
    }
    ctx->pc = 0x12BCD8u;
    {
        const bool branch_taken_0x12bcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCD8u;
        // 0x12bcdc: 0xafaf0268  sw          $t7, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bcd8) {
            ctx->pc = 0x12B314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b314;
        }
    }
    ctx->pc = 0x12BCE0u;
label_12bce0:
    // 0x12bce0: 0x328f0002  andi        $t7, $s4, 0x2
    ctx->pc = 0x12bce0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_12bce4:
    // 0x12bce4: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
label_12bce8:
    if (ctx->pc == 0x12BCE8u) {
        ctx->pc = 0x12BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCE4u;
        // 0x12bce8: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BCECu;
        goto label_12bcec;
    }
    ctx->pc = 0x12BCE4u;
    {
        const bool branch_taken_0x12bce4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCE4u;
        // 0x12bce8: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bce4) {
            ctx->pc = 0x12BCFCu;
            goto label_12bcfc;
        }
    }
    ctx->pc = 0x12BCECu;
label_12bcec:
    // 0x12bcec: 0x25ed0008  addiu       $t5, $t7, 0x8
    ctx->pc = 0x12bcecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12bcf0:
    // 0x12bcf0: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x12bcf0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12bcf4:
    // 0x12bcf4: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_12bcf8:
    if (ctx->pc == 0x12BCF8u) {
        ctx->pc = 0x12BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCF4u;
        // 0x12bcf8: 0xafad0264  sw          $t5, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BCFCu;
        goto label_12bcfc;
    }
    ctx->pc = 0x12BCF4u;
    {
        const bool branch_taken_0x12bcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCF4u;
        // 0x12bcf8: 0xafad0264  sw          $t5, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bcf4) {
            ctx->pc = 0x12BCCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bccc;
        }
    }
    ctx->pc = 0x12BCFCu;
label_12bcfc:
    // 0x12bcfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12bcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12bd00:
    // 0x12bd00: 0x25ee0008  addiu       $t6, $t7, 0x8
    ctx->pc = 0x12bd00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12bd04:
    // 0x12bd04: 0x8df00000  lw          $s0, 0x0($t7)
    ctx->pc = 0x12bd04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12bd08:
    // 0x12bd08: 0xc04bc02  jal         func_12F008
label_12bd0c:
    if (ctx->pc == 0x12BD0Cu) {
        ctx->pc = 0x12BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD08u;
        // 0x12bd0c: 0xafae0264  sw          $t6, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD10u;
        goto label_12bd10;
    }
    ctx->pc = 0x12BD08u;
    SET_GPR_U32(ctx, 31, 0x12BD10u);
    ctx->pc = 0x12BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD08u;
    // 0x12bd0c: 0xafae0264  sw          $t6, 0x264($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F008u, 0x12BD08u, 0x12BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD10u;
label_12bd10:
    // 0x12bd10: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_12bd14:
    if (ctx->pc == 0x12BD14u) {
        ctx->pc = 0x12BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD10u;
        // 0x12bd14: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD18u;
        goto label_12bd18;
    }
    ctx->pc = 0x12BD10u;
    {
        const bool branch_taken_0x12bd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD10u;
        // 0x12bd14: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd10) {
            ctx->pc = 0x12BCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bcd0;
        }
    }
    ctx->pc = 0x12BD18u;
label_12bd18:
    // 0x12bd18: 0xdfad0278  ld          $t5, 0x278($sp)
    ctx->pc = 0x12bd18u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_12bd1c:
    // 0x12bd1c: 0x11a0ffe1  beqz        $t5, . + 4 + (-0x1F << 2)
label_12bd20:
    if (ctx->pc == 0x12BD20u) {
        ctx->pc = 0x12BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD1Cu;
        // 0x12bd20: 0x8fae0280  lw          $t6, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD24u;
        goto label_12bd24;
    }
    ctx->pc = 0x12BD1Cu;
    {
        const bool branch_taken_0x12bd1c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD1Cu;
        // 0x12bd20: 0x8fae0280  lw          $t6, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd1c) {
            ctx->pc = 0x12BCA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bca4;
        }
    }
    ctx->pc = 0x12BD24u;
label_12bd24:
    // 0x12bd24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12bd24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12bd28:
    // 0x12bd28: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x12bd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_12bd2c:
    // 0x12bd2c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x12bd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12bd30:
    // 0x12bd30: 0xc04a468  jal         func_1291A0
label_12bd34:
    if (ctx->pc == 0x12BD34u) {
        ctx->pc = 0x12BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD30u;
        // 0x12bd34: 0x25c50001  addiu       $a1, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD38u;
        goto label_12bd38;
    }
    ctx->pc = 0x12BD30u;
    SET_GPR_U32(ctx, 31, 0x12BD38u);
    ctx->pc = 0x12BD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD30u;
    // 0x12bd34: 0x25c50001  addiu       $a1, $t6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1291A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1291A0u, 0x12BD30u, 0x12BD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD38u;
label_12bd38:
    // 0x12bd38: 0xdfaf0278  ld          $t7, 0x278($sp)
    ctx->pc = 0x12bd38u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_12bd3c:
    // 0x12bd3c: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
label_12bd40:
    if (ctx->pc == 0x12BD40u) {
        ctx->pc = 0x12BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD3Cu;
        // 0x12bd40: 0x4f302f  dsubu       $a2, $v0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) - GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD44u;
        goto label_12bd44;
    }
    ctx->pc = 0x12BD3Cu;
    {
        const bool branch_taken_0x12bd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD3Cu;
        // 0x12bd40: 0x4f302f  dsubu       $a2, $v0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) - GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd3c) {
            ctx->pc = 0x12BC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bc70;
        }
    }
    ctx->pc = 0x12BD44u;
label_12bd44:
    // 0x12bd44: 0xc049b8a  jal         func_126E28
label_12bd48:
    if (ctx->pc == 0x12BD48u) {
        ctx->pc = 0x12BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD44u;
        // 0x12bd48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD4Cu;
        goto label_12bd4c;
    }
    ctx->pc = 0x12BD44u;
    SET_GPR_U32(ctx, 31, 0x12BD4Cu);
    ctx->pc = 0x12BD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD44u;
    // 0x12bd48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E28u, 0x12BD44u, 0x12BD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD4Cu;
label_12bd4c:
    // 0x12bd4c: 0x1040ff98  beqz        $v0, . + 4 + (-0x68 << 2)
label_12bd50:
    if (ctx->pc == 0x12BD50u) {
        ctx->pc = 0x12BD54u;
        goto label_12bd54;
    }
    ctx->pc = 0x12BD4Cu;
    {
        const bool branch_taken_0x12bd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bd4c) {
            ctx->pc = 0x12BBB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bbb0;
        }
    }
    ctx->pc = 0x12BD54u;
label_12bd54:
    // 0x12bd54: 0x1000ff98  b           . + 4 + (-0x68 << 2)
label_12bd58:
    if (ctx->pc == 0x12BD58u) {
        ctx->pc = 0x12BD5Cu;
        goto label_12bd5c;
    }
    ctx->pc = 0x12BD54u;
    {
        const bool branch_taken_0x12bd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bd54) {
            ctx->pc = 0x12BBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bbb8;
        }
    }
    ctx->pc = 0x12BD5Cu;
label_12bd5c:
    // 0x12bd5c: 0x0  nop
    ctx->pc = 0x12bd5cu;
    // NOP
label_12bd60:
    // 0x12bd60: 0x240fff3f  addiu       $t7, $zero, -0xC1
    ctx->pc = 0x12bd60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_12bd64:
    // 0x12bd64: 0x28fa024  and         $s4, $s4, $t7
    ctx->pc = 0x12bd64u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
label_12bd68:
    // 0x12bd68: 0xa2d00000  sb          $s0, 0x0($s6)
    ctx->pc = 0x12bd68u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 16));
label_12bd6c:
    // 0x12bd6c: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12bd6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12bd70:
    // 0x12bd70: 0x1000ff87  b           . + 4 + (-0x79 << 2)
label_12bd74:
    if (ctx->pc == 0x12BD74u) {
        ctx->pc = 0x12BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD70u;
        // 0x12bd74: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD78u;
        goto label_12bd78;
    }
    ctx->pc = 0x12BD70u;
    {
        const bool branch_taken_0x12bd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD70u;
        // 0x12bd74: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd70) {
            ctx->pc = 0x12BB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bb90;
        }
    }
    ctx->pc = 0x12BD78u;
label_12bd78:
    // 0x12bd78: 0x328f0040  andi        $t7, $s4, 0x40
    ctx->pc = 0x12bd78u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
label_12bd7c:
    // 0x12bd7c: 0x11e0ff8e  beqz        $t7, . + 4 + (-0x72 << 2)
label_12bd80:
    if (ctx->pc == 0x12BD80u) {
        ctx->pc = 0x12BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD7Cu;
        // 0x12bd80: 0x240fffbf  addiu       $t7, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD84u;
        goto label_12bd84;
    }
    ctx->pc = 0x12BD7Cu;
    {
        const bool branch_taken_0x12bd7c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD7Cu;
        // 0x12bd80: 0x240fffbf  addiu       $t7, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd7c) {
            ctx->pc = 0x12BBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bbb8;
        }
    }
    ctx->pc = 0x12BD84u;
label_12bd84:
    // 0x12bd84: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_12bd88:
    if (ctx->pc == 0x12BD88u) {
        ctx->pc = 0x12BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD84u;
        // 0x12bd88: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD8Cu;
        goto label_12bd8c;
    }
    ctx->pc = 0x12BD84u;
    {
        const bool branch_taken_0x12bd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD84u;
        // 0x12bd88: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd84) {
            ctx->pc = 0x12BD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bd68;
        }
    }
    ctx->pc = 0x12BD8Cu;
label_12bd8c:
    // 0x12bd8c: 0x328f0100  andi        $t7, $s4, 0x100
    ctx->pc = 0x12bd8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)256);
label_12bd90:
    // 0x12bd90: 0x11e0ff89  beqz        $t7, . + 4 + (-0x77 << 2)
label_12bd94:
    if (ctx->pc == 0x12BD94u) {
        ctx->pc = 0x12BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD90u;
        // 0x12bd94: 0x240ffebf  addiu       $t7, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD98u;
        goto label_12bd98;
    }
    ctx->pc = 0x12BD90u;
    {
        const bool branch_taken_0x12bd90 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD90u;
        // 0x12bd94: 0x240ffebf  addiu       $t7, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd90) {
            ctx->pc = 0x12BBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bbb8;
        }
    }
    ctx->pc = 0x12BD98u;
label_12bd98:
    // 0x12bd98: 0x1000fff2  b           . + 4 + (-0xE << 2)
label_12bd9c:
    if (ctx->pc == 0x12BD9Cu) {
        ctx->pc = 0x12BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD98u;
        // 0x12bd9c: 0xffb20270  sd          $s2, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BDA0u;
        goto label_12bda0;
    }
    ctx->pc = 0x12BD98u;
    {
        const bool branch_taken_0x12bd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD98u;
        // 0x12bd9c: 0xffb20270  sd          $s2, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd98) {
            ctx->pc = 0x12BD64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bd64;
        }
    }
    ctx->pc = 0x12BDA0u;
label_12bda0:
    // 0x12bda0: 0x328e0280  andi        $t6, $s4, 0x280
    ctx->pc = 0x12bda0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)640);
label_12bda4:
    // 0x12bda4: 0x240f0200  addiu       $t7, $zero, 0x200
    ctx->pc = 0x12bda4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_12bda8:
    // 0x12bda8: 0x11cf0005  beq         $t6, $t7, . + 4 + (0x5 << 2)
label_12bdac:
    if (ctx->pc == 0x12BDACu) {
        ctx->pc = 0x12BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDA8u;
        // 0x12bdac: 0x328f0200  andi        $t7, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BDB0u;
        goto label_12bdb0;
    }
    ctx->pc = 0x12BDA8u;
    {
        const bool branch_taken_0x12bda8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x12BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDA8u;
        // 0x12bdac: 0x328f0200  andi        $t7, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bda8) {
            ctx->pc = 0x12BDC0u;
            goto label_12bdc0;
        }
    }
    ctx->pc = 0x12BDB0u;
label_12bdb0:
    // 0x12bdb0: 0x11e0ff81  beqz        $t7, . + 4 + (-0x7F << 2)
label_12bdb4:
    if (ctx->pc == 0x12BDB4u) {
        ctx->pc = 0x12BDB8u;
        goto label_12bdb8;
    }
    ctx->pc = 0x12BDB0u;
    {
        const bool branch_taken_0x12bdb0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bdb0) {
            ctx->pc = 0x12BBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bbb8;
        }
    }
    ctx->pc = 0x12BDB8u;
label_12bdb8:
    // 0x12bdb8: 0x1240ff83  beqz        $s2, . + 4 + (-0x7D << 2)
label_12bdbc:
    if (ctx->pc == 0x12BDBCu) {
        ctx->pc = 0x12BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDB8u;
        // 0x12bdbc: 0x328f0080  andi        $t7, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BDC0u;
        goto label_12bdc0;
    }
    ctx->pc = 0x12BDB8u;
    {
        const bool branch_taken_0x12bdb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDB8u;
        // 0x12bdbc: 0x328f0080  andi        $t7, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdb8) {
            ctx->pc = 0x12BBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bbc8;
        }
    }
    ctx->pc = 0x12BDC0u;
label_12bdc0:
    // 0x12bdc0: 0x328f0100  andi        $t7, $s4, 0x100
    ctx->pc = 0x12bdc0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)256);
label_12bdc4:
    // 0x12bdc4: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
label_12bdc8:
    if (ctx->pc == 0x12BDC8u) {
        ctx->pc = 0x12BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDC4u;
        // 0x12bdc8: 0x240ffcff  addiu       $t7, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BDCCu;
        goto label_12bdcc;
    }
    ctx->pc = 0x12BDC4u;
    {
        const bool branch_taken_0x12bdc4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDC4u;
        // 0x12bdc8: 0x240ffcff  addiu       $t7, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdc4) {
            ctx->pc = 0x12BDDCu;
            goto label_12bddc;
        }
    }
    ctx->pc = 0x12BDCCu;
label_12bdcc:
    // 0x12bdcc: 0xdfae0270  ld          $t6, 0x270($sp)
    ctx->pc = 0x12bdccu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_12bdd0:
    // 0x12bdd0: 0xafb60280  sw          $s6, 0x280($sp)
    ctx->pc = 0x12bdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 22));
label_12bdd4:
    // 0x12bdd4: 0x24e902f  dsubu       $s2, $s2, $t6
    ctx->pc = 0x12bdd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 14));
label_12bdd8:
    // 0x12bdd8: 0xffb20278  sd          $s2, 0x278($sp)
    ctx->pc = 0x12bdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 18));
label_12bddc:
    // 0x12bddc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12bddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12bde0:
    // 0x12bde0: 0x28f7824  and         $t7, $s4, $t7
    ctx->pc = 0x12bde0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
label_12bde4:
    // 0x12bde4: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
label_12bde8:
    if (ctx->pc == 0x12BDE8u) {
        ctx->pc = 0x12BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDE4u;
        // 0x12bde8: 0x35f400c0  ori         $s4, $t7, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BDECu;
        goto label_12bdec;
    }
    ctx->pc = 0x12BDE4u;
    {
        const bool branch_taken_0x12bde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDE4u;
        // 0x12bde8: 0x35f400c0  ori         $s4, $t7, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bde4) {
            ctx->pc = 0x12BD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bd68;
        }
    }
    ctx->pc = 0x12BDECu;
label_12bdec:
    // 0x12bdec: 0x0  nop
    ctx->pc = 0x12bdecu;
    // NOP
label_12bdf0:
    // 0x12bdf0: 0xc049b8a  jal         func_126E28
label_12bdf4:
    if (ctx->pc == 0x12BDF4u) {
        ctx->pc = 0x12BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDF0u;
        // 0x12bdf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BDF8u;
        goto label_12bdf8;
    }
    ctx->pc = 0x12BDF0u;
    SET_GPR_U32(ctx, 31, 0x12BDF8u);
    ctx->pc = 0x12BDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BDF0u;
    // 0x12bdf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E28u, 0x12BDF0u, 0x12BDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BDF8u;
label_12bdf8:
    // 0x12bdf8: 0x5440fd9f  bnel        $v0, $zero, . + 4 + (-0x261 << 2)
label_12bdfc:
    if (ctx->pc == 0x12BDFCu) {
        ctx->pc = 0x12BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDF8u;
        // 0x12bdfc: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE00u;
        goto label_12be00;
    }
    ctx->pc = 0x12BDF8u;
    {
        const bool branch_taken_0x12bdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bdf8) {
            ctx->pc = 0x12BDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BDF8u;
            // 0x12bdfc: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b478;
        }
    }
    ctx->pc = 0x12BE00u;
label_12be00:
    // 0x12be00: 0x1000fdca  b           . + 4 + (-0x236 << 2)
label_12be04:
    if (ctx->pc == 0x12BE04u) {
        ctx->pc = 0x12BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE00u;
        // 0x12be04: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE08u;
        goto label_12be08;
    }
    ctx->pc = 0x12BE00u;
    {
        const bool branch_taken_0x12be00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE00u;
        // 0x12be04: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be00) {
            ctx->pc = 0x12B52Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b52c;
        }
    }
    ctx->pc = 0x12BE08u;
label_12be08:
    // 0x12be08: 0x1000fd6a  b           . + 4 + (-0x296 << 2)
label_12be0c:
    if (ctx->pc == 0x12BE0Cu) {
        ctx->pc = 0x12BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE08u;
        // 0x12be0c: 0x36940002  ori         $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE10u;
        goto label_12be10;
    }
    ctx->pc = 0x12BE08u;
    {
        const bool branch_taken_0x12be08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE08u;
        // 0x12be0c: 0x36940002  ori         $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be08) {
            ctx->pc = 0x12B3B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b3b4;
        }
    }
    ctx->pc = 0x12BE10u;
label_12be10:
    // 0x12be10: 0x36940001  ori         $s4, $s4, 0x1
    ctx->pc = 0x12be10u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
label_12be14:
    // 0x12be14: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x12be14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
label_12be18:
    // 0x12be18: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x12be18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12be1c:
    // 0x12be1c: 0x25ef9410  addiu       $t7, $t7, -0x6BF0
    ctx->pc = 0x12be1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294939664));
label_12be20:
    // 0x12be20: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x12be20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_12be24:
    // 0x12be24: 0x1000fda6  b           . + 4 + (-0x25A << 2)
label_12be28:
    if (ctx->pc == 0x12BE28u) {
        ctx->pc = 0x12BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE24u;
        // 0x12be28: 0xafaf026c  sw          $t7, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE2Cu;
        goto label_12be2c;
    }
    ctx->pc = 0x12BE24u;
    {
        const bool branch_taken_0x12be24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE24u;
        // 0x12be28: 0xafaf026c  sw          $t7, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be24) {
            ctx->pc = 0x12B4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b4c0;
        }
    }
    ctx->pc = 0x12BE2Cu;
label_12be2c:
    // 0x12be2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12be2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12be30:
    // 0x12be30: 0xc04afd6  jal         func_12BF58
label_12be34:
    if (ctx->pc == 0x12BE34u) {
        ctx->pc = 0x12BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE30u;
        // 0x12be34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE38u;
        goto label_12be38;
    }
    ctx->pc = 0x12BE30u;
    SET_GPR_U32(ctx, 31, 0x12BE38u);
    ctx->pc = 0x12BE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE30u;
    // 0x12be34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BF58u, 0x12BE30u, 0x12BE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE38u;
label_12be38:
    // 0x12be38: 0x36940020  ori         $s4, $s4, 0x20
    ctx->pc = 0x12be38u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32);
label_12be3c:
    // 0x12be3c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12be3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12be40:
    // 0x12be40: 0x1000fd9f  b           . + 4 + (-0x261 << 2)
label_12be44:
    if (ctx->pc == 0x12BE44u) {
        ctx->pc = 0x12BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE40u;
        // 0x12be44: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE48u;
        goto label_12be48;
    }
    ctx->pc = 0x12BE40u;
    {
        const bool branch_taken_0x12be40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE40u;
        // 0x12be44: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be40) {
            ctx->pc = 0x12B4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b4c0;
        }
    }
    ctx->pc = 0x12BE48u;
label_12be48:
    // 0x12be48: 0x36940020  ori         $s4, $s4, 0x20
    ctx->pc = 0x12be48u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32);
label_12be4c:
    // 0x12be4c: 0x1000fd9c  b           . + 4 + (-0x264 << 2)
label_12be50:
    if (ctx->pc == 0x12BE50u) {
        ctx->pc = 0x12BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE4Cu;
        // 0x12be50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE54u;
        goto label_12be54;
    }
    ctx->pc = 0x12BE4Cu;
    {
        const bool branch_taken_0x12be4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE4Cu;
        // 0x12be50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be4c) {
            ctx->pc = 0x12B4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b4c0;
        }
    }
    ctx->pc = 0x12BE54u;
label_12be54:
    // 0x12be54: 0x1000fd9a  b           . + 4 + (-0x266 << 2)
label_12be58:
    if (ctx->pc == 0x12BE58u) {
        ctx->pc = 0x12BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE54u;
        // 0x12be58: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE5Cu;
        goto label_12be5c;
    }
    ctx->pc = 0x12BE54u;
    {
        const bool branch_taken_0x12be54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE54u;
        // 0x12be58: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be54) {
            ctx->pc = 0x12B4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b4c0;
        }
    }
    ctx->pc = 0x12BE5Cu;
label_12be5c:
    // 0x12be5c: 0x1000fd55  b           . + 4 + (-0x2AB << 2)
label_12be60:
    if (ctx->pc == 0x12BE60u) {
        ctx->pc = 0x12BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE5Cu;
        // 0x12be60: 0x36940004  ori         $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE64u;
        goto label_12be64;
    }
    ctx->pc = 0x12BE5Cu;
    {
        const bool branch_taken_0x12be5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE5Cu;
        // 0x12be60: 0x36940004  ori         $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be5c) {
            ctx->pc = 0x12B3B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b3b4;
        }
    }
    ctx->pc = 0x12BE64u;
label_12be64:
    // 0x12be64: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x12be64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
label_12be68:
    // 0x12be68: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x12be68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12be6c:
    // 0x12be6c: 0x25ef91a0  addiu       $t7, $t7, -0x6E60
    ctx->pc = 0x12be6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294939040));
label_12be70:
    // 0x12be70: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_12be74:
    if (ctx->pc == 0x12BE74u) {
        ctx->pc = 0x12BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE70u;
        // 0x12be74: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE78u;
        goto label_12be78;
    }
    ctx->pc = 0x12BE70u;
    {
        const bool branch_taken_0x12be70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE70u;
        // 0x12be74: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be70) {
            ctx->pc = 0x12BE24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12be24;
        }
    }
    ctx->pc = 0x12BE78u;
label_12be78:
    // 0x12be78: 0x1000fd4e  b           . + 4 + (-0x2B2 << 2)
label_12be7c:
    if (ctx->pc == 0x12BE7Cu) {
        ctx->pc = 0x12BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE78u;
        // 0x12be7c: 0x36940001  ori         $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE80u;
        goto label_12be80;
    }
    ctx->pc = 0x12BE78u;
    {
        const bool branch_taken_0x12be78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE78u;
        // 0x12be7c: 0x36940001  ori         $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be78) {
            ctx->pc = 0x12B3B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b3b4;
        }
    }
    ctx->pc = 0x12BE80u;
label_12be80:
    // 0x12be80: 0x328f0008  andi        $t7, $s4, 0x8
    ctx->pc = 0x12be80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_12be84:
    // 0x12be84: 0x55e0fd24  bnel        $t7, $zero, . + 4 + (-0x2DC << 2)
label_12be88:
    if (ctx->pc == 0x12BE88u) {
        ctx->pc = 0x12BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE84u;
        // 0x12be88: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE8Cu;
        goto label_12be8c;
    }
    ctx->pc = 0x12BE84u;
    {
        const bool branch_taken_0x12be84 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12be84) {
            ctx->pc = 0x12BE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BE84u;
            // 0x12be88: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b318;
        }
    }
    ctx->pc = 0x12BE8Cu;
label_12be8c:
    // 0x12be8c: 0x328f0004  andi        $t7, $s4, 0x4
    ctx->pc = 0x12be8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
label_12be90:
    // 0x12be90: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
label_12be94:
    if (ctx->pc == 0x12BE94u) {
        ctx->pc = 0x12BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE90u;
        // 0x12be94: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE98u;
        goto label_12be98;
    }
    ctx->pc = 0x12BE90u;
    {
        const bool branch_taken_0x12be90 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE90u;
        // 0x12be94: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be90) {
            ctx->pc = 0x12BEB0u;
            goto label_12beb0;
        }
    }
    ctx->pc = 0x12BE98u;
label_12be98:
    // 0x12be98: 0x8fad0264  lw          $t5, 0x264($sp)
    ctx->pc = 0x12be98u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12be9c:
    // 0x12be9c: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x12be9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12bea0:
    // 0x12bea0: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x12bea0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_12bea4:
    // 0x12bea4: 0xafad0264  sw          $t5, 0x264($sp)
    ctx->pc = 0x12bea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 13));
label_12bea8:
    // 0x12bea8: 0x1000fd1a  b           . + 4 + (-0x2E6 << 2)
label_12beac:
    if (ctx->pc == 0x12BEACu) {
        ctx->pc = 0x12BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEA8u;
        // 0x12beac: 0xa5f50000  sh          $s5, 0x0($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BEB0u;
        goto label_12beb0;
    }
    ctx->pc = 0x12BEA8u;
    {
        const bool branch_taken_0x12bea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEA8u;
        // 0x12beac: 0xa5f50000  sh          $s5, 0x0($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bea8) {
            ctx->pc = 0x12B314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b314;
        }
    }
    ctx->pc = 0x12BEB0u;
label_12beb0:
    // 0x12beb0: 0x328f0001  andi        $t7, $s4, 0x1
    ctx->pc = 0x12beb0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_12beb4:
    // 0x12beb4: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
label_12beb8:
    if (ctx->pc == 0x12BEB8u) {
        ctx->pc = 0x12BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEB4u;
        // 0x12beb8: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BEBCu;
        goto label_12bebc;
    }
    ctx->pc = 0x12BEB4u;
    {
        const bool branch_taken_0x12beb4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEB4u;
        // 0x12beb8: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12beb4) {
            ctx->pc = 0x12BED8u;
            goto label_12bed8;
        }
    }
    ctx->pc = 0x12BEBCu;
label_12bebc:
    // 0x12bebc: 0x2a0702d  daddu       $t6, $s5, $zero
    ctx->pc = 0x12bebcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12bec0:
    // 0x12bec0: 0x8fad0264  lw          $t5, 0x264($sp)
    ctx->pc = 0x12bec0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12bec4:
    // 0x12bec4: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x12bec4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12bec8:
    // 0x12bec8: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x12bec8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_12becc:
    // 0x12becc: 0xafad0264  sw          $t5, 0x264($sp)
    ctx->pc = 0x12beccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 13));
label_12bed0:
    // 0x12bed0: 0x1000fd10  b           . + 4 + (-0x2F0 << 2)
label_12bed4:
    if (ctx->pc == 0x12BED4u) {
        ctx->pc = 0x12BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BED0u;
        // 0x12bed4: 0xfdee0000  sd          $t6, 0x0($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BED8u;
        goto label_12bed8;
    }
    ctx->pc = 0x12BED0u;
    {
        const bool branch_taken_0x12bed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BED0u;
        // 0x12bed4: 0xfdee0000  sd          $t6, 0x0($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bed0) {
            ctx->pc = 0x12B314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b314;
        }
    }
    ctx->pc = 0x12BED8u;
label_12bed8:
    // 0x12bed8: 0x8fae0264  lw          $t6, 0x264($sp)
    ctx->pc = 0x12bed8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12bedc:
    // 0x12bedc: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x12bedcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12bee0:
    // 0x12bee0: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x12bee0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
label_12bee4:
    // 0x12bee4: 0xafae0264  sw          $t6, 0x264($sp)
    ctx->pc = 0x12bee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 14));
label_12bee8:
    // 0x12bee8: 0x1000fd0a  b           . + 4 + (-0x2F6 << 2)
label_12beec:
    if (ctx->pc == 0x12BEECu) {
        ctx->pc = 0x12BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEE8u;
        // 0x12beec: 0xadf50000  sw          $s5, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BEF0u;
        goto label_12bef0;
    }
    ctx->pc = 0x12BEE8u;
    {
        const bool branch_taken_0x12bee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEE8u;
        // 0x12beec: 0xadf50000  sw          $s5, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bee8) {
            ctx->pc = 0x12B314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b314;
        }
    }
    ctx->pc = 0x12BEF0u;
label_12bef0:
    // 0x12bef0: 0x36940110  ori         $s4, $s4, 0x110
    ctx->pc = 0x12bef0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)272);
label_12bef4:
    // 0x12bef4: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x12bef4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
label_12bef8:
    // 0x12bef8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x12bef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12befc:
    // 0x12befc: 0x25ef9410  addiu       $t7, $t7, -0x6BF0
    ctx->pc = 0x12befcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294939664));
label_12bf00:
    // 0x12bf00: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
label_12bf04:
    if (ctx->pc == 0x12BF04u) {
        ctx->pc = 0x12BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF00u;
        // 0x12bf04: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BF08u;
        goto label_12bf08;
    }
    ctx->pc = 0x12BF00u;
    {
        const bool branch_taken_0x12bf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF00u;
        // 0x12bf04: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf00) {
            ctx->pc = 0x12BE24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12be24;
        }
    }
    ctx->pc = 0x12BF08u;
label_12bf08:
    // 0x12bf08: 0x1000fd6d  b           . + 4 + (-0x293 << 2)
label_12bf0c:
    if (ctx->pc == 0x12BF0Cu) {
        ctx->pc = 0x12BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF08u;
        // 0x12bf0c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BF10u;
        goto label_12bf10;
    }
    ctx->pc = 0x12BF08u;
    {
        const bool branch_taken_0x12bf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF08u;
        // 0x12bf0c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf08) {
            ctx->pc = 0x12B4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b4c0;
        }
    }
    ctx->pc = 0x12BF10u;
label_12bf10:
    // 0x12bf10: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x12bf10u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
label_12bf14:
    // 0x12bf14: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x12bf14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12bf18:
    // 0x12bf18: 0x1000fd67  b           . + 4 + (-0x299 << 2)
label_12bf1c:
    if (ctx->pc == 0x12BF1Cu) {
        ctx->pc = 0x12BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF18u;
        // 0x12bf1c: 0x25ef9410  addiu       $t7, $t7, -0x6BF0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294939664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BF20u;
        goto label_12bf20;
    }
    ctx->pc = 0x12BF18u;
    {
        const bool branch_taken_0x12bf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF18u;
        // 0x12bf1c: 0x25ef9410  addiu       $t7, $t7, -0x6BF0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294939664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf18) {
            ctx->pc = 0x12B4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b4b8;
        }
    }
    ctx->pc = 0x12BF20u;
label_12bf20:
    // 0x12bf20: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x12bf20u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
label_12bf24:
    // 0x12bf24: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12bf24u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
label_12bf28:
    // 0x12bf28: 0x25ef91a0  addiu       $t7, $t7, -0x6E60
    ctx->pc = 0x12bf28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294939040));
label_12bf2c:
    // 0x12bf2c: 0x25ce3a90  addiu       $t6, $t6, 0x3A90
    ctx->pc = 0x12bf2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 14992));
label_12bf30:
    // 0x12bf30: 0xafaf026c  sw          $t7, 0x26C($sp)
    ctx->pc = 0x12bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 15));
label_12bf34:
    // 0x12bf34: 0x20e7021  addu        $t6, $s0, $t6
    ctx->pc = 0x12bf34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 14)));
label_12bf38:
    // 0x12bf38: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x12bf38u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12bf3c:
    // 0x12bf3c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x12bf3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12bf40:
    // 0x12bf40: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x12bf40u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12bf44:
    // 0x12bf44: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x12bf44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
label_12bf48:
    // 0x12bf48: 0x1000fd5d  b           . + 4 + (-0x2A3 << 2)
label_12bf4c:
    if (ctx->pc == 0x12BF4Cu) {
        ctx->pc = 0x12BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF48u;
        // 0x12bf4c: 0x28fa025  or          $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BF50u;
        goto label_12bf50;
    }
    ctx->pc = 0x12BF48u;
    {
        const bool branch_taken_0x12bf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF48u;
        // 0x12bf4c: 0x28fa025  or          $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf48) {
            ctx->pc = 0x12B4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b4c0;
        }
    }
    ctx->pc = 0x12BF50u;
label_12bf50:
    // 0x12bf50: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_12bf54:
    if (ctx->pc == 0x12BF54u) {
        ctx->pc = 0x12BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF50u;
        // 0x12bf54: 0x36940100  ori         $s4, $s4, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BF58u;
        goto label_fallthrough_0x12bf50;
    }
    ctx->pc = 0x12BF50u;
    {
        const bool branch_taken_0x12bf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF50u;
        // 0x12bf54: 0x36940100  ori         $s4, $s4, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf50) {
            ctx->pc = 0x12BEF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bef4;
        }
    }
label_fallthrough_0x12bf50:
    ctx->pc = 0x12BF58u;
}
