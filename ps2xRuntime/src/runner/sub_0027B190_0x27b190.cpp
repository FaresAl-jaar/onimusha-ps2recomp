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

// Function: sub_0027B190
// Address: 0x27b190 - 0x27ccb4
void sub_0027B190_0x27b190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B190_0x27b190");
#endif

    switch (ctx->pc) {
        case 0x27b190u: goto label_27b190;
        case 0x27b194u: goto label_27b194;
        case 0x27b198u: goto label_27b198;
        case 0x27b19cu: goto label_27b19c;
        case 0x27b1a0u: goto label_27b1a0;
        case 0x27b1a4u: goto label_27b1a4;
        case 0x27b1a8u: goto label_27b1a8;
        case 0x27b1acu: goto label_27b1ac;
        case 0x27b1b0u: goto label_27b1b0;
        case 0x27b1b4u: goto label_27b1b4;
        case 0x27b1b8u: goto label_27b1b8;
        case 0x27b1bcu: goto label_27b1bc;
        case 0x27b1c0u: goto label_27b1c0;
        case 0x27b1c4u: goto label_27b1c4;
        case 0x27b1c8u: goto label_27b1c8;
        case 0x27b1ccu: goto label_27b1cc;
        case 0x27b1d0u: goto label_27b1d0;
        case 0x27b1d4u: goto label_27b1d4;
        case 0x27b1d8u: goto label_27b1d8;
        case 0x27b1dcu: goto label_27b1dc;
        case 0x27b1e0u: goto label_27b1e0;
        case 0x27b1e4u: goto label_27b1e4;
        case 0x27b1e8u: goto label_27b1e8;
        case 0x27b1ecu: goto label_27b1ec;
        case 0x27b1f0u: goto label_27b1f0;
        case 0x27b1f4u: goto label_27b1f4;
        case 0x27b1f8u: goto label_27b1f8;
        case 0x27b1fcu: goto label_27b1fc;
        case 0x27b200u: goto label_27b200;
        case 0x27b204u: goto label_27b204;
        case 0x27b208u: goto label_27b208;
        case 0x27b20cu: goto label_27b20c;
        case 0x27b210u: goto label_27b210;
        case 0x27b214u: goto label_27b214;
        case 0x27b218u: goto label_27b218;
        case 0x27b21cu: goto label_27b21c;
        case 0x27b220u: goto label_27b220;
        case 0x27b224u: goto label_27b224;
        case 0x27b228u: goto label_27b228;
        case 0x27b22cu: goto label_27b22c;
        case 0x27b230u: goto label_27b230;
        case 0x27b234u: goto label_27b234;
        case 0x27b238u: goto label_27b238;
        case 0x27b23cu: goto label_27b23c;
        case 0x27b240u: goto label_27b240;
        case 0x27b244u: goto label_27b244;
        case 0x27b248u: goto label_27b248;
        case 0x27b24cu: goto label_27b24c;
        case 0x27b250u: goto label_27b250;
        case 0x27b254u: goto label_27b254;
        case 0x27b258u: goto label_27b258;
        case 0x27b25cu: goto label_27b25c;
        case 0x27b260u: goto label_27b260;
        case 0x27b264u: goto label_27b264;
        case 0x27b268u: goto label_27b268;
        case 0x27b26cu: goto label_27b26c;
        case 0x27b270u: goto label_27b270;
        case 0x27b274u: goto label_27b274;
        case 0x27b278u: goto label_27b278;
        case 0x27b27cu: goto label_27b27c;
        case 0x27b280u: goto label_27b280;
        case 0x27b284u: goto label_27b284;
        case 0x27b288u: goto label_27b288;
        case 0x27b28cu: goto label_27b28c;
        case 0x27b290u: goto label_27b290;
        case 0x27b294u: goto label_27b294;
        case 0x27b298u: goto label_27b298;
        case 0x27b29cu: goto label_27b29c;
        case 0x27b2a0u: goto label_27b2a0;
        case 0x27b2a4u: goto label_27b2a4;
        case 0x27b2a8u: goto label_27b2a8;
        case 0x27b2acu: goto label_27b2ac;
        case 0x27b2b0u: goto label_27b2b0;
        case 0x27b2b4u: goto label_27b2b4;
        case 0x27b2b8u: goto label_27b2b8;
        case 0x27b2bcu: goto label_27b2bc;
        case 0x27b2c0u: goto label_27b2c0;
        case 0x27b2c4u: goto label_27b2c4;
        case 0x27b2c8u: goto label_27b2c8;
        case 0x27b2ccu: goto label_27b2cc;
        case 0x27b2d0u: goto label_27b2d0;
        case 0x27b2d4u: goto label_27b2d4;
        case 0x27b2d8u: goto label_27b2d8;
        case 0x27b2dcu: goto label_27b2dc;
        case 0x27b2e0u: goto label_27b2e0;
        case 0x27b2e4u: goto label_27b2e4;
        case 0x27b2e8u: goto label_27b2e8;
        case 0x27b2ecu: goto label_27b2ec;
        case 0x27b2f0u: goto label_27b2f0;
        case 0x27b2f4u: goto label_27b2f4;
        case 0x27b2f8u: goto label_27b2f8;
        case 0x27b2fcu: goto label_27b2fc;
        case 0x27b300u: goto label_27b300;
        case 0x27b304u: goto label_27b304;
        case 0x27b308u: goto label_27b308;
        case 0x27b30cu: goto label_27b30c;
        case 0x27b310u: goto label_27b310;
        case 0x27b314u: goto label_27b314;
        case 0x27b318u: goto label_27b318;
        case 0x27b31cu: goto label_27b31c;
        case 0x27b320u: goto label_27b320;
        case 0x27b324u: goto label_27b324;
        case 0x27b328u: goto label_27b328;
        case 0x27b32cu: goto label_27b32c;
        case 0x27b330u: goto label_27b330;
        case 0x27b334u: goto label_27b334;
        case 0x27b338u: goto label_27b338;
        case 0x27b33cu: goto label_27b33c;
        case 0x27b340u: goto label_27b340;
        case 0x27b344u: goto label_27b344;
        case 0x27b348u: goto label_27b348;
        case 0x27b34cu: goto label_27b34c;
        case 0x27b350u: goto label_27b350;
        case 0x27b354u: goto label_27b354;
        case 0x27b358u: goto label_27b358;
        case 0x27b35cu: goto label_27b35c;
        case 0x27b360u: goto label_27b360;
        case 0x27b364u: goto label_27b364;
        case 0x27b368u: goto label_27b368;
        case 0x27b36cu: goto label_27b36c;
        case 0x27b370u: goto label_27b370;
        case 0x27b374u: goto label_27b374;
        case 0x27b378u: goto label_27b378;
        case 0x27b37cu: goto label_27b37c;
        case 0x27b380u: goto label_27b380;
        case 0x27b384u: goto label_27b384;
        case 0x27b388u: goto label_27b388;
        case 0x27b38cu: goto label_27b38c;
        case 0x27b390u: goto label_27b390;
        case 0x27b394u: goto label_27b394;
        case 0x27b398u: goto label_27b398;
        case 0x27b39cu: goto label_27b39c;
        case 0x27b3a0u: goto label_27b3a0;
        case 0x27b3a4u: goto label_27b3a4;
        case 0x27b3a8u: goto label_27b3a8;
        case 0x27b3acu: goto label_27b3ac;
        case 0x27b3b0u: goto label_27b3b0;
        case 0x27b3b4u: goto label_27b3b4;
        case 0x27b3b8u: goto label_27b3b8;
        case 0x27b3bcu: goto label_27b3bc;
        case 0x27b3c0u: goto label_27b3c0;
        case 0x27b3c4u: goto label_27b3c4;
        case 0x27b3c8u: goto label_27b3c8;
        case 0x27b3ccu: goto label_27b3cc;
        case 0x27b3d0u: goto label_27b3d0;
        case 0x27b3d4u: goto label_27b3d4;
        case 0x27b3d8u: goto label_27b3d8;
        case 0x27b3dcu: goto label_27b3dc;
        case 0x27b3e0u: goto label_27b3e0;
        case 0x27b3e4u: goto label_27b3e4;
        case 0x27b3e8u: goto label_27b3e8;
        case 0x27b3ecu: goto label_27b3ec;
        case 0x27b3f0u: goto label_27b3f0;
        case 0x27b3f4u: goto label_27b3f4;
        case 0x27b3f8u: goto label_27b3f8;
        case 0x27b3fcu: goto label_27b3fc;
        case 0x27b400u: goto label_27b400;
        case 0x27b404u: goto label_27b404;
        case 0x27b408u: goto label_27b408;
        case 0x27b40cu: goto label_27b40c;
        case 0x27b410u: goto label_27b410;
        case 0x27b414u: goto label_27b414;
        case 0x27b418u: goto label_27b418;
        case 0x27b41cu: goto label_27b41c;
        case 0x27b420u: goto label_27b420;
        case 0x27b424u: goto label_27b424;
        case 0x27b428u: goto label_27b428;
        case 0x27b42cu: goto label_27b42c;
        case 0x27b430u: goto label_27b430;
        case 0x27b434u: goto label_27b434;
        case 0x27b438u: goto label_27b438;
        case 0x27b43cu: goto label_27b43c;
        case 0x27b440u: goto label_27b440;
        case 0x27b444u: goto label_27b444;
        case 0x27b448u: goto label_27b448;
        case 0x27b44cu: goto label_27b44c;
        case 0x27b450u: goto label_27b450;
        case 0x27b454u: goto label_27b454;
        case 0x27b458u: goto label_27b458;
        case 0x27b45cu: goto label_27b45c;
        case 0x27b460u: goto label_27b460;
        case 0x27b464u: goto label_27b464;
        case 0x27b468u: goto label_27b468;
        case 0x27b46cu: goto label_27b46c;
        case 0x27b470u: goto label_27b470;
        case 0x27b474u: goto label_27b474;
        case 0x27b478u: goto label_27b478;
        case 0x27b47cu: goto label_27b47c;
        case 0x27b480u: goto label_27b480;
        case 0x27b484u: goto label_27b484;
        case 0x27b488u: goto label_27b488;
        case 0x27b48cu: goto label_27b48c;
        case 0x27b490u: goto label_27b490;
        case 0x27b494u: goto label_27b494;
        case 0x27b498u: goto label_27b498;
        case 0x27b49cu: goto label_27b49c;
        case 0x27b4a0u: goto label_27b4a0;
        case 0x27b4a4u: goto label_27b4a4;
        case 0x27b4a8u: goto label_27b4a8;
        case 0x27b4acu: goto label_27b4ac;
        case 0x27b4b0u: goto label_27b4b0;
        case 0x27b4b4u: goto label_27b4b4;
        case 0x27b4b8u: goto label_27b4b8;
        case 0x27b4bcu: goto label_27b4bc;
        case 0x27b4c0u: goto label_27b4c0;
        case 0x27b4c4u: goto label_27b4c4;
        case 0x27b4c8u: goto label_27b4c8;
        case 0x27b4ccu: goto label_27b4cc;
        case 0x27b4d0u: goto label_27b4d0;
        case 0x27b4d4u: goto label_27b4d4;
        case 0x27b4d8u: goto label_27b4d8;
        case 0x27b4dcu: goto label_27b4dc;
        case 0x27b4e0u: goto label_27b4e0;
        case 0x27b4e4u: goto label_27b4e4;
        case 0x27b4e8u: goto label_27b4e8;
        case 0x27b4ecu: goto label_27b4ec;
        case 0x27b4f0u: goto label_27b4f0;
        case 0x27b4f4u: goto label_27b4f4;
        case 0x27b4f8u: goto label_27b4f8;
        case 0x27b4fcu: goto label_27b4fc;
        case 0x27b500u: goto label_27b500;
        case 0x27b504u: goto label_27b504;
        case 0x27b508u: goto label_27b508;
        case 0x27b50cu: goto label_27b50c;
        case 0x27b510u: goto label_27b510;
        case 0x27b514u: goto label_27b514;
        case 0x27b518u: goto label_27b518;
        case 0x27b51cu: goto label_27b51c;
        case 0x27b520u: goto label_27b520;
        case 0x27b524u: goto label_27b524;
        case 0x27b528u: goto label_27b528;
        case 0x27b52cu: goto label_27b52c;
        case 0x27b530u: goto label_27b530;
        case 0x27b534u: goto label_27b534;
        case 0x27b538u: goto label_27b538;
        case 0x27b53cu: goto label_27b53c;
        case 0x27b540u: goto label_27b540;
        case 0x27b544u: goto label_27b544;
        case 0x27b548u: goto label_27b548;
        case 0x27b54cu: goto label_27b54c;
        case 0x27b550u: goto label_27b550;
        case 0x27b554u: goto label_27b554;
        case 0x27b558u: goto label_27b558;
        case 0x27b55cu: goto label_27b55c;
        case 0x27b560u: goto label_27b560;
        case 0x27b564u: goto label_27b564;
        case 0x27b568u: goto label_27b568;
        case 0x27b56cu: goto label_27b56c;
        case 0x27b570u: goto label_27b570;
        case 0x27b574u: goto label_27b574;
        case 0x27b578u: goto label_27b578;
        case 0x27b57cu: goto label_27b57c;
        case 0x27b580u: goto label_27b580;
        case 0x27b584u: goto label_27b584;
        case 0x27b588u: goto label_27b588;
        case 0x27b58cu: goto label_27b58c;
        case 0x27b590u: goto label_27b590;
        case 0x27b594u: goto label_27b594;
        case 0x27b598u: goto label_27b598;
        case 0x27b59cu: goto label_27b59c;
        case 0x27b5a0u: goto label_27b5a0;
        case 0x27b5a4u: goto label_27b5a4;
        case 0x27b5a8u: goto label_27b5a8;
        case 0x27b5acu: goto label_27b5ac;
        case 0x27b5b0u: goto label_27b5b0;
        case 0x27b5b4u: goto label_27b5b4;
        case 0x27b5b8u: goto label_27b5b8;
        case 0x27b5bcu: goto label_27b5bc;
        case 0x27b5c0u: goto label_27b5c0;
        case 0x27b5c4u: goto label_27b5c4;
        case 0x27b5c8u: goto label_27b5c8;
        case 0x27b5ccu: goto label_27b5cc;
        case 0x27b5d0u: goto label_27b5d0;
        case 0x27b5d4u: goto label_27b5d4;
        case 0x27b5d8u: goto label_27b5d8;
        case 0x27b5dcu: goto label_27b5dc;
        case 0x27b5e0u: goto label_27b5e0;
        case 0x27b5e4u: goto label_27b5e4;
        case 0x27b5e8u: goto label_27b5e8;
        case 0x27b5ecu: goto label_27b5ec;
        case 0x27b5f0u: goto label_27b5f0;
        case 0x27b5f4u: goto label_27b5f4;
        case 0x27b5f8u: goto label_27b5f8;
        case 0x27b5fcu: goto label_27b5fc;
        case 0x27b600u: goto label_27b600;
        case 0x27b604u: goto label_27b604;
        case 0x27b608u: goto label_27b608;
        case 0x27b60cu: goto label_27b60c;
        case 0x27b610u: goto label_27b610;
        case 0x27b614u: goto label_27b614;
        case 0x27b618u: goto label_27b618;
        case 0x27b61cu: goto label_27b61c;
        case 0x27b620u: goto label_27b620;
        case 0x27b624u: goto label_27b624;
        case 0x27b628u: goto label_27b628;
        case 0x27b62cu: goto label_27b62c;
        case 0x27b630u: goto label_27b630;
        case 0x27b634u: goto label_27b634;
        case 0x27b638u: goto label_27b638;
        case 0x27b63cu: goto label_27b63c;
        case 0x27b640u: goto label_27b640;
        case 0x27b644u: goto label_27b644;
        case 0x27b648u: goto label_27b648;
        case 0x27b64cu: goto label_27b64c;
        case 0x27b650u: goto label_27b650;
        case 0x27b654u: goto label_27b654;
        case 0x27b658u: goto label_27b658;
        case 0x27b65cu: goto label_27b65c;
        case 0x27b660u: goto label_27b660;
        case 0x27b664u: goto label_27b664;
        case 0x27b668u: goto label_27b668;
        case 0x27b66cu: goto label_27b66c;
        case 0x27b670u: goto label_27b670;
        case 0x27b674u: goto label_27b674;
        case 0x27b678u: goto label_27b678;
        case 0x27b67cu: goto label_27b67c;
        case 0x27b680u: goto label_27b680;
        case 0x27b684u: goto label_27b684;
        case 0x27b688u: goto label_27b688;
        case 0x27b68cu: goto label_27b68c;
        case 0x27b690u: goto label_27b690;
        case 0x27b694u: goto label_27b694;
        case 0x27b698u: goto label_27b698;
        case 0x27b69cu: goto label_27b69c;
        case 0x27b6a0u: goto label_27b6a0;
        case 0x27b6a4u: goto label_27b6a4;
        case 0x27b6a8u: goto label_27b6a8;
        case 0x27b6acu: goto label_27b6ac;
        case 0x27b6b0u: goto label_27b6b0;
        case 0x27b6b4u: goto label_27b6b4;
        case 0x27b6b8u: goto label_27b6b8;
        case 0x27b6bcu: goto label_27b6bc;
        case 0x27b6c0u: goto label_27b6c0;
        case 0x27b6c4u: goto label_27b6c4;
        case 0x27b6c8u: goto label_27b6c8;
        case 0x27b6ccu: goto label_27b6cc;
        case 0x27b6d0u: goto label_27b6d0;
        case 0x27b6d4u: goto label_27b6d4;
        case 0x27b6d8u: goto label_27b6d8;
        case 0x27b6dcu: goto label_27b6dc;
        case 0x27b6e0u: goto label_27b6e0;
        case 0x27b6e4u: goto label_27b6e4;
        case 0x27b6e8u: goto label_27b6e8;
        case 0x27b6ecu: goto label_27b6ec;
        case 0x27b6f0u: goto label_27b6f0;
        case 0x27b6f4u: goto label_27b6f4;
        case 0x27b6f8u: goto label_27b6f8;
        case 0x27b6fcu: goto label_27b6fc;
        case 0x27b700u: goto label_27b700;
        case 0x27b704u: goto label_27b704;
        case 0x27b708u: goto label_27b708;
        case 0x27b70cu: goto label_27b70c;
        case 0x27b710u: goto label_27b710;
        case 0x27b714u: goto label_27b714;
        case 0x27b718u: goto label_27b718;
        case 0x27b71cu: goto label_27b71c;
        case 0x27b720u: goto label_27b720;
        case 0x27b724u: goto label_27b724;
        case 0x27b728u: goto label_27b728;
        case 0x27b72cu: goto label_27b72c;
        case 0x27b730u: goto label_27b730;
        case 0x27b734u: goto label_27b734;
        case 0x27b738u: goto label_27b738;
        case 0x27b73cu: goto label_27b73c;
        case 0x27b740u: goto label_27b740;
        case 0x27b744u: goto label_27b744;
        case 0x27b748u: goto label_27b748;
        case 0x27b74cu: goto label_27b74c;
        case 0x27b750u: goto label_27b750;
        case 0x27b754u: goto label_27b754;
        case 0x27b758u: goto label_27b758;
        case 0x27b75cu: goto label_27b75c;
        case 0x27b760u: goto label_27b760;
        case 0x27b764u: goto label_27b764;
        case 0x27b768u: goto label_27b768;
        case 0x27b76cu: goto label_27b76c;
        case 0x27b770u: goto label_27b770;
        case 0x27b774u: goto label_27b774;
        case 0x27b778u: goto label_27b778;
        case 0x27b77cu: goto label_27b77c;
        case 0x27b780u: goto label_27b780;
        case 0x27b784u: goto label_27b784;
        case 0x27b788u: goto label_27b788;
        case 0x27b78cu: goto label_27b78c;
        case 0x27b790u: goto label_27b790;
        case 0x27b794u: goto label_27b794;
        case 0x27b798u: goto label_27b798;
        case 0x27b79cu: goto label_27b79c;
        case 0x27b7a0u: goto label_27b7a0;
        case 0x27b7a4u: goto label_27b7a4;
        case 0x27b7a8u: goto label_27b7a8;
        case 0x27b7acu: goto label_27b7ac;
        case 0x27b7b0u: goto label_27b7b0;
        case 0x27b7b4u: goto label_27b7b4;
        case 0x27b7b8u: goto label_27b7b8;
        case 0x27b7bcu: goto label_27b7bc;
        case 0x27b7c0u: goto label_27b7c0;
        case 0x27b7c4u: goto label_27b7c4;
        case 0x27b7c8u: goto label_27b7c8;
        case 0x27b7ccu: goto label_27b7cc;
        case 0x27b7d0u: goto label_27b7d0;
        case 0x27b7d4u: goto label_27b7d4;
        case 0x27b7d8u: goto label_27b7d8;
        case 0x27b7dcu: goto label_27b7dc;
        case 0x27b7e0u: goto label_27b7e0;
        case 0x27b7e4u: goto label_27b7e4;
        case 0x27b7e8u: goto label_27b7e8;
        case 0x27b7ecu: goto label_27b7ec;
        case 0x27b7f0u: goto label_27b7f0;
        case 0x27b7f4u: goto label_27b7f4;
        case 0x27b7f8u: goto label_27b7f8;
        case 0x27b7fcu: goto label_27b7fc;
        case 0x27b800u: goto label_27b800;
        case 0x27b804u: goto label_27b804;
        case 0x27b808u: goto label_27b808;
        case 0x27b80cu: goto label_27b80c;
        case 0x27b810u: goto label_27b810;
        case 0x27b814u: goto label_27b814;
        case 0x27b818u: goto label_27b818;
        case 0x27b81cu: goto label_27b81c;
        case 0x27b820u: goto label_27b820;
        case 0x27b824u: goto label_27b824;
        case 0x27b828u: goto label_27b828;
        case 0x27b82cu: goto label_27b82c;
        case 0x27b830u: goto label_27b830;
        case 0x27b834u: goto label_27b834;
        case 0x27b838u: goto label_27b838;
        case 0x27b83cu: goto label_27b83c;
        case 0x27b840u: goto label_27b840;
        case 0x27b844u: goto label_27b844;
        case 0x27b848u: goto label_27b848;
        case 0x27b84cu: goto label_27b84c;
        case 0x27b850u: goto label_27b850;
        case 0x27b854u: goto label_27b854;
        case 0x27b858u: goto label_27b858;
        case 0x27b85cu: goto label_27b85c;
        case 0x27b860u: goto label_27b860;
        case 0x27b864u: goto label_27b864;
        case 0x27b868u: goto label_27b868;
        case 0x27b86cu: goto label_27b86c;
        case 0x27b870u: goto label_27b870;
        case 0x27b874u: goto label_27b874;
        case 0x27b878u: goto label_27b878;
        case 0x27b87cu: goto label_27b87c;
        case 0x27b880u: goto label_27b880;
        case 0x27b884u: goto label_27b884;
        case 0x27b888u: goto label_27b888;
        case 0x27b88cu: goto label_27b88c;
        case 0x27b890u: goto label_27b890;
        case 0x27b894u: goto label_27b894;
        case 0x27b898u: goto label_27b898;
        case 0x27b89cu: goto label_27b89c;
        case 0x27b8a0u: goto label_27b8a0;
        case 0x27b8a4u: goto label_27b8a4;
        case 0x27b8a8u: goto label_27b8a8;
        case 0x27b8acu: goto label_27b8ac;
        case 0x27b8b0u: goto label_27b8b0;
        case 0x27b8b4u: goto label_27b8b4;
        case 0x27b8b8u: goto label_27b8b8;
        case 0x27b8bcu: goto label_27b8bc;
        case 0x27b8c0u: goto label_27b8c0;
        case 0x27b8c4u: goto label_27b8c4;
        case 0x27b8c8u: goto label_27b8c8;
        case 0x27b8ccu: goto label_27b8cc;
        case 0x27b8d0u: goto label_27b8d0;
        case 0x27b8d4u: goto label_27b8d4;
        case 0x27b8d8u: goto label_27b8d8;
        case 0x27b8dcu: goto label_27b8dc;
        case 0x27b8e0u: goto label_27b8e0;
        case 0x27b8e4u: goto label_27b8e4;
        case 0x27b8e8u: goto label_27b8e8;
        case 0x27b8ecu: goto label_27b8ec;
        case 0x27b8f0u: goto label_27b8f0;
        case 0x27b8f4u: goto label_27b8f4;
        case 0x27b8f8u: goto label_27b8f8;
        case 0x27b8fcu: goto label_27b8fc;
        case 0x27b900u: goto label_27b900;
        case 0x27b904u: goto label_27b904;
        case 0x27b908u: goto label_27b908;
        case 0x27b90cu: goto label_27b90c;
        case 0x27b910u: goto label_27b910;
        case 0x27b914u: goto label_27b914;
        case 0x27b918u: goto label_27b918;
        case 0x27b91cu: goto label_27b91c;
        case 0x27b920u: goto label_27b920;
        case 0x27b924u: goto label_27b924;
        case 0x27b928u: goto label_27b928;
        case 0x27b92cu: goto label_27b92c;
        case 0x27b930u: goto label_27b930;
        case 0x27b934u: goto label_27b934;
        case 0x27b938u: goto label_27b938;
        case 0x27b93cu: goto label_27b93c;
        case 0x27b940u: goto label_27b940;
        case 0x27b944u: goto label_27b944;
        case 0x27b948u: goto label_27b948;
        case 0x27b94cu: goto label_27b94c;
        case 0x27b950u: goto label_27b950;
        case 0x27b954u: goto label_27b954;
        case 0x27b958u: goto label_27b958;
        case 0x27b95cu: goto label_27b95c;
        case 0x27b960u: goto label_27b960;
        case 0x27b964u: goto label_27b964;
        case 0x27b968u: goto label_27b968;
        case 0x27b96cu: goto label_27b96c;
        case 0x27b970u: goto label_27b970;
        case 0x27b974u: goto label_27b974;
        case 0x27b978u: goto label_27b978;
        case 0x27b97cu: goto label_27b97c;
        case 0x27b980u: goto label_27b980;
        case 0x27b984u: goto label_27b984;
        case 0x27b988u: goto label_27b988;
        case 0x27b98cu: goto label_27b98c;
        case 0x27b990u: goto label_27b990;
        case 0x27b994u: goto label_27b994;
        case 0x27b998u: goto label_27b998;
        case 0x27b99cu: goto label_27b99c;
        case 0x27b9a0u: goto label_27b9a0;
        case 0x27b9a4u: goto label_27b9a4;
        case 0x27b9a8u: goto label_27b9a8;
        case 0x27b9acu: goto label_27b9ac;
        case 0x27b9b0u: goto label_27b9b0;
        case 0x27b9b4u: goto label_27b9b4;
        case 0x27b9b8u: goto label_27b9b8;
        case 0x27b9bcu: goto label_27b9bc;
        case 0x27b9c0u: goto label_27b9c0;
        case 0x27b9c4u: goto label_27b9c4;
        case 0x27b9c8u: goto label_27b9c8;
        case 0x27b9ccu: goto label_27b9cc;
        case 0x27b9d0u: goto label_27b9d0;
        case 0x27b9d4u: goto label_27b9d4;
        case 0x27b9d8u: goto label_27b9d8;
        case 0x27b9dcu: goto label_27b9dc;
        case 0x27b9e0u: goto label_27b9e0;
        case 0x27b9e4u: goto label_27b9e4;
        case 0x27b9e8u: goto label_27b9e8;
        case 0x27b9ecu: goto label_27b9ec;
        case 0x27b9f0u: goto label_27b9f0;
        case 0x27b9f4u: goto label_27b9f4;
        case 0x27b9f8u: goto label_27b9f8;
        case 0x27b9fcu: goto label_27b9fc;
        case 0x27ba00u: goto label_27ba00;
        case 0x27ba04u: goto label_27ba04;
        case 0x27ba08u: goto label_27ba08;
        case 0x27ba0cu: goto label_27ba0c;
        case 0x27ba10u: goto label_27ba10;
        case 0x27ba14u: goto label_27ba14;
        case 0x27ba18u: goto label_27ba18;
        case 0x27ba1cu: goto label_27ba1c;
        case 0x27ba20u: goto label_27ba20;
        case 0x27ba24u: goto label_27ba24;
        case 0x27ba28u: goto label_27ba28;
        case 0x27ba2cu: goto label_27ba2c;
        case 0x27ba30u: goto label_27ba30;
        case 0x27ba34u: goto label_27ba34;
        case 0x27ba38u: goto label_27ba38;
        case 0x27ba3cu: goto label_27ba3c;
        case 0x27ba40u: goto label_27ba40;
        case 0x27ba44u: goto label_27ba44;
        case 0x27ba48u: goto label_27ba48;
        case 0x27ba4cu: goto label_27ba4c;
        case 0x27ba50u: goto label_27ba50;
        case 0x27ba54u: goto label_27ba54;
        case 0x27ba58u: goto label_27ba58;
        case 0x27ba5cu: goto label_27ba5c;
        case 0x27ba60u: goto label_27ba60;
        case 0x27ba64u: goto label_27ba64;
        case 0x27ba68u: goto label_27ba68;
        case 0x27ba6cu: goto label_27ba6c;
        case 0x27ba70u: goto label_27ba70;
        case 0x27ba74u: goto label_27ba74;
        case 0x27ba78u: goto label_27ba78;
        case 0x27ba7cu: goto label_27ba7c;
        case 0x27ba80u: goto label_27ba80;
        case 0x27ba84u: goto label_27ba84;
        case 0x27ba88u: goto label_27ba88;
        case 0x27ba8cu: goto label_27ba8c;
        case 0x27ba90u: goto label_27ba90;
        case 0x27ba94u: goto label_27ba94;
        case 0x27ba98u: goto label_27ba98;
        case 0x27ba9cu: goto label_27ba9c;
        case 0x27baa0u: goto label_27baa0;
        case 0x27baa4u: goto label_27baa4;
        case 0x27baa8u: goto label_27baa8;
        case 0x27baacu: goto label_27baac;
        case 0x27bab0u: goto label_27bab0;
        case 0x27bab4u: goto label_27bab4;
        case 0x27bab8u: goto label_27bab8;
        case 0x27babcu: goto label_27babc;
        case 0x27bac0u: goto label_27bac0;
        case 0x27bac4u: goto label_27bac4;
        case 0x27bac8u: goto label_27bac8;
        case 0x27baccu: goto label_27bacc;
        case 0x27bad0u: goto label_27bad0;
        case 0x27bad4u: goto label_27bad4;
        case 0x27bad8u: goto label_27bad8;
        case 0x27badcu: goto label_27badc;
        case 0x27bae0u: goto label_27bae0;
        case 0x27bae4u: goto label_27bae4;
        case 0x27bae8u: goto label_27bae8;
        case 0x27baecu: goto label_27baec;
        case 0x27baf0u: goto label_27baf0;
        case 0x27baf4u: goto label_27baf4;
        case 0x27baf8u: goto label_27baf8;
        case 0x27bafcu: goto label_27bafc;
        case 0x27bb00u: goto label_27bb00;
        case 0x27bb04u: goto label_27bb04;
        case 0x27bb08u: goto label_27bb08;
        case 0x27bb0cu: goto label_27bb0c;
        case 0x27bb10u: goto label_27bb10;
        case 0x27bb14u: goto label_27bb14;
        case 0x27bb18u: goto label_27bb18;
        case 0x27bb1cu: goto label_27bb1c;
        case 0x27bb20u: goto label_27bb20;
        case 0x27bb24u: goto label_27bb24;
        case 0x27bb28u: goto label_27bb28;
        case 0x27bb2cu: goto label_27bb2c;
        case 0x27bb30u: goto label_27bb30;
        case 0x27bb34u: goto label_27bb34;
        case 0x27bb38u: goto label_27bb38;
        case 0x27bb3cu: goto label_27bb3c;
        case 0x27bb40u: goto label_27bb40;
        case 0x27bb44u: goto label_27bb44;
        case 0x27bb48u: goto label_27bb48;
        case 0x27bb4cu: goto label_27bb4c;
        case 0x27bb50u: goto label_27bb50;
        case 0x27bb54u: goto label_27bb54;
        case 0x27bb58u: goto label_27bb58;
        case 0x27bb5cu: goto label_27bb5c;
        case 0x27bb60u: goto label_27bb60;
        case 0x27bb64u: goto label_27bb64;
        case 0x27bb68u: goto label_27bb68;
        case 0x27bb6cu: goto label_27bb6c;
        case 0x27bb70u: goto label_27bb70;
        case 0x27bb74u: goto label_27bb74;
        case 0x27bb78u: goto label_27bb78;
        case 0x27bb7cu: goto label_27bb7c;
        case 0x27bb80u: goto label_27bb80;
        case 0x27bb84u: goto label_27bb84;
        case 0x27bb88u: goto label_27bb88;
        case 0x27bb8cu: goto label_27bb8c;
        case 0x27bb90u: goto label_27bb90;
        case 0x27bb94u: goto label_27bb94;
        case 0x27bb98u: goto label_27bb98;
        case 0x27bb9cu: goto label_27bb9c;
        case 0x27bba0u: goto label_27bba0;
        case 0x27bba4u: goto label_27bba4;
        case 0x27bba8u: goto label_27bba8;
        case 0x27bbacu: goto label_27bbac;
        case 0x27bbb0u: goto label_27bbb0;
        case 0x27bbb4u: goto label_27bbb4;
        case 0x27bbb8u: goto label_27bbb8;
        case 0x27bbbcu: goto label_27bbbc;
        case 0x27bbc0u: goto label_27bbc0;
        case 0x27bbc4u: goto label_27bbc4;
        case 0x27bbc8u: goto label_27bbc8;
        case 0x27bbccu: goto label_27bbcc;
        case 0x27bbd0u: goto label_27bbd0;
        case 0x27bbd4u: goto label_27bbd4;
        case 0x27bbd8u: goto label_27bbd8;
        case 0x27bbdcu: goto label_27bbdc;
        case 0x27bbe0u: goto label_27bbe0;
        case 0x27bbe4u: goto label_27bbe4;
        case 0x27bbe8u: goto label_27bbe8;
        case 0x27bbecu: goto label_27bbec;
        case 0x27bbf0u: goto label_27bbf0;
        case 0x27bbf4u: goto label_27bbf4;
        case 0x27bbf8u: goto label_27bbf8;
        case 0x27bbfcu: goto label_27bbfc;
        case 0x27bc00u: goto label_27bc00;
        case 0x27bc04u: goto label_27bc04;
        case 0x27bc08u: goto label_27bc08;
        case 0x27bc0cu: goto label_27bc0c;
        case 0x27bc10u: goto label_27bc10;
        case 0x27bc14u: goto label_27bc14;
        case 0x27bc18u: goto label_27bc18;
        case 0x27bc1cu: goto label_27bc1c;
        case 0x27bc20u: goto label_27bc20;
        case 0x27bc24u: goto label_27bc24;
        case 0x27bc28u: goto label_27bc28;
        case 0x27bc2cu: goto label_27bc2c;
        case 0x27bc30u: goto label_27bc30;
        case 0x27bc34u: goto label_27bc34;
        case 0x27bc38u: goto label_27bc38;
        case 0x27bc3cu: goto label_27bc3c;
        case 0x27bc40u: goto label_27bc40;
        case 0x27bc44u: goto label_27bc44;
        case 0x27bc48u: goto label_27bc48;
        case 0x27bc4cu: goto label_27bc4c;
        case 0x27bc50u: goto label_27bc50;
        case 0x27bc54u: goto label_27bc54;
        case 0x27bc58u: goto label_27bc58;
        case 0x27bc5cu: goto label_27bc5c;
        case 0x27bc60u: goto label_27bc60;
        case 0x27bc64u: goto label_27bc64;
        case 0x27bc68u: goto label_27bc68;
        case 0x27bc6cu: goto label_27bc6c;
        case 0x27bc70u: goto label_27bc70;
        case 0x27bc74u: goto label_27bc74;
        case 0x27bc78u: goto label_27bc78;
        case 0x27bc7cu: goto label_27bc7c;
        case 0x27bc80u: goto label_27bc80;
        case 0x27bc84u: goto label_27bc84;
        case 0x27bc88u: goto label_27bc88;
        case 0x27bc8cu: goto label_27bc8c;
        case 0x27bc90u: goto label_27bc90;
        case 0x27bc94u: goto label_27bc94;
        case 0x27bc98u: goto label_27bc98;
        case 0x27bc9cu: goto label_27bc9c;
        case 0x27bca0u: goto label_27bca0;
        case 0x27bca4u: goto label_27bca4;
        case 0x27bca8u: goto label_27bca8;
        case 0x27bcacu: goto label_27bcac;
        case 0x27bcb0u: goto label_27bcb0;
        case 0x27bcb4u: goto label_27bcb4;
        case 0x27bcb8u: goto label_27bcb8;
        case 0x27bcbcu: goto label_27bcbc;
        case 0x27bcc0u: goto label_27bcc0;
        case 0x27bcc4u: goto label_27bcc4;
        case 0x27bcc8u: goto label_27bcc8;
        case 0x27bcccu: goto label_27bccc;
        case 0x27bcd0u: goto label_27bcd0;
        case 0x27bcd4u: goto label_27bcd4;
        case 0x27bcd8u: goto label_27bcd8;
        case 0x27bcdcu: goto label_27bcdc;
        case 0x27bce0u: goto label_27bce0;
        case 0x27bce4u: goto label_27bce4;
        case 0x27bce8u: goto label_27bce8;
        case 0x27bcecu: goto label_27bcec;
        case 0x27bcf0u: goto label_27bcf0;
        case 0x27bcf4u: goto label_27bcf4;
        case 0x27bcf8u: goto label_27bcf8;
        case 0x27bcfcu: goto label_27bcfc;
        case 0x27bd00u: goto label_27bd00;
        case 0x27bd04u: goto label_27bd04;
        case 0x27bd08u: goto label_27bd08;
        case 0x27bd0cu: goto label_27bd0c;
        case 0x27bd10u: goto label_27bd10;
        case 0x27bd14u: goto label_27bd14;
        case 0x27bd18u: goto label_27bd18;
        case 0x27bd1cu: goto label_27bd1c;
        case 0x27bd20u: goto label_27bd20;
        case 0x27bd24u: goto label_27bd24;
        case 0x27bd28u: goto label_27bd28;
        case 0x27bd2cu: goto label_27bd2c;
        case 0x27bd30u: goto label_27bd30;
        case 0x27bd34u: goto label_27bd34;
        case 0x27bd38u: goto label_27bd38;
        case 0x27bd3cu: goto label_27bd3c;
        case 0x27bd40u: goto label_27bd40;
        case 0x27bd44u: goto label_27bd44;
        case 0x27bd48u: goto label_27bd48;
        case 0x27bd4cu: goto label_27bd4c;
        case 0x27bd50u: goto label_27bd50;
        case 0x27bd54u: goto label_27bd54;
        case 0x27bd58u: goto label_27bd58;
        case 0x27bd5cu: goto label_27bd5c;
        case 0x27bd60u: goto label_27bd60;
        case 0x27bd64u: goto label_27bd64;
        case 0x27bd68u: goto label_27bd68;
        case 0x27bd6cu: goto label_27bd6c;
        case 0x27bd70u: goto label_27bd70;
        case 0x27bd74u: goto label_27bd74;
        case 0x27bd78u: goto label_27bd78;
        case 0x27bd7cu: goto label_27bd7c;
        case 0x27bd80u: goto label_27bd80;
        case 0x27bd84u: goto label_27bd84;
        case 0x27bd88u: goto label_27bd88;
        case 0x27bd8cu: goto label_27bd8c;
        case 0x27bd90u: goto label_27bd90;
        case 0x27bd94u: goto label_27bd94;
        case 0x27bd98u: goto label_27bd98;
        case 0x27bd9cu: goto label_27bd9c;
        case 0x27bda0u: goto label_27bda0;
        case 0x27bda4u: goto label_27bda4;
        case 0x27bda8u: goto label_27bda8;
        case 0x27bdacu: goto label_27bdac;
        case 0x27bdb0u: goto label_27bdb0;
        case 0x27bdb4u: goto label_27bdb4;
        case 0x27bdb8u: goto label_27bdb8;
        case 0x27bdbcu: goto label_27bdbc;
        case 0x27bdc0u: goto label_27bdc0;
        case 0x27bdc4u: goto label_27bdc4;
        case 0x27bdc8u: goto label_27bdc8;
        case 0x27bdccu: goto label_27bdcc;
        case 0x27bdd0u: goto label_27bdd0;
        case 0x27bdd4u: goto label_27bdd4;
        case 0x27bdd8u: goto label_27bdd8;
        case 0x27bddcu: goto label_27bddc;
        case 0x27bde0u: goto label_27bde0;
        case 0x27bde4u: goto label_27bde4;
        case 0x27bde8u: goto label_27bde8;
        case 0x27bdecu: goto label_27bdec;
        case 0x27bdf0u: goto label_27bdf0;
        case 0x27bdf4u: goto label_27bdf4;
        case 0x27bdf8u: goto label_27bdf8;
        case 0x27bdfcu: goto label_27bdfc;
        case 0x27be00u: goto label_27be00;
        case 0x27be04u: goto label_27be04;
        case 0x27be08u: goto label_27be08;
        case 0x27be0cu: goto label_27be0c;
        case 0x27be10u: goto label_27be10;
        case 0x27be14u: goto label_27be14;
        case 0x27be18u: goto label_27be18;
        case 0x27be1cu: goto label_27be1c;
        case 0x27be20u: goto label_27be20;
        case 0x27be24u: goto label_27be24;
        case 0x27be28u: goto label_27be28;
        case 0x27be2cu: goto label_27be2c;
        case 0x27be30u: goto label_27be30;
        case 0x27be34u: goto label_27be34;
        case 0x27be38u: goto label_27be38;
        case 0x27be3cu: goto label_27be3c;
        case 0x27be40u: goto label_27be40;
        case 0x27be44u: goto label_27be44;
        case 0x27be48u: goto label_27be48;
        case 0x27be4cu: goto label_27be4c;
        case 0x27be50u: goto label_27be50;
        case 0x27be54u: goto label_27be54;
        case 0x27be58u: goto label_27be58;
        case 0x27be5cu: goto label_27be5c;
        case 0x27be60u: goto label_27be60;
        case 0x27be64u: goto label_27be64;
        case 0x27be68u: goto label_27be68;
        case 0x27be6cu: goto label_27be6c;
        case 0x27be70u: goto label_27be70;
        case 0x27be74u: goto label_27be74;
        case 0x27be78u: goto label_27be78;
        case 0x27be7cu: goto label_27be7c;
        case 0x27be80u: goto label_27be80;
        case 0x27be84u: goto label_27be84;
        case 0x27be88u: goto label_27be88;
        case 0x27be8cu: goto label_27be8c;
        case 0x27be90u: goto label_27be90;
        case 0x27be94u: goto label_27be94;
        case 0x27be98u: goto label_27be98;
        case 0x27be9cu: goto label_27be9c;
        case 0x27bea0u: goto label_27bea0;
        case 0x27bea4u: goto label_27bea4;
        case 0x27bea8u: goto label_27bea8;
        case 0x27beacu: goto label_27beac;
        case 0x27beb0u: goto label_27beb0;
        case 0x27beb4u: goto label_27beb4;
        case 0x27beb8u: goto label_27beb8;
        case 0x27bebcu: goto label_27bebc;
        case 0x27bec0u: goto label_27bec0;
        case 0x27bec4u: goto label_27bec4;
        case 0x27bec8u: goto label_27bec8;
        case 0x27beccu: goto label_27becc;
        case 0x27bed0u: goto label_27bed0;
        case 0x27bed4u: goto label_27bed4;
        case 0x27bed8u: goto label_27bed8;
        case 0x27bedcu: goto label_27bedc;
        case 0x27bee0u: goto label_27bee0;
        case 0x27bee4u: goto label_27bee4;
        case 0x27bee8u: goto label_27bee8;
        case 0x27beecu: goto label_27beec;
        case 0x27bef0u: goto label_27bef0;
        case 0x27bef4u: goto label_27bef4;
        case 0x27bef8u: goto label_27bef8;
        case 0x27befcu: goto label_27befc;
        case 0x27bf00u: goto label_27bf00;
        case 0x27bf04u: goto label_27bf04;
        case 0x27bf08u: goto label_27bf08;
        case 0x27bf0cu: goto label_27bf0c;
        case 0x27bf10u: goto label_27bf10;
        case 0x27bf14u: goto label_27bf14;
        case 0x27bf18u: goto label_27bf18;
        case 0x27bf1cu: goto label_27bf1c;
        case 0x27bf20u: goto label_27bf20;
        case 0x27bf24u: goto label_27bf24;
        case 0x27bf28u: goto label_27bf28;
        case 0x27bf2cu: goto label_27bf2c;
        case 0x27bf30u: goto label_27bf30;
        case 0x27bf34u: goto label_27bf34;
        case 0x27bf38u: goto label_27bf38;
        case 0x27bf3cu: goto label_27bf3c;
        case 0x27bf40u: goto label_27bf40;
        case 0x27bf44u: goto label_27bf44;
        case 0x27bf48u: goto label_27bf48;
        case 0x27bf4cu: goto label_27bf4c;
        case 0x27bf50u: goto label_27bf50;
        case 0x27bf54u: goto label_27bf54;
        case 0x27bf58u: goto label_27bf58;
        case 0x27bf5cu: goto label_27bf5c;
        case 0x27bf60u: goto label_27bf60;
        case 0x27bf64u: goto label_27bf64;
        case 0x27bf68u: goto label_27bf68;
        case 0x27bf6cu: goto label_27bf6c;
        case 0x27bf70u: goto label_27bf70;
        case 0x27bf74u: goto label_27bf74;
        case 0x27bf78u: goto label_27bf78;
        case 0x27bf7cu: goto label_27bf7c;
        case 0x27bf80u: goto label_27bf80;
        case 0x27bf84u: goto label_27bf84;
        case 0x27bf88u: goto label_27bf88;
        case 0x27bf8cu: goto label_27bf8c;
        case 0x27bf90u: goto label_27bf90;
        case 0x27bf94u: goto label_27bf94;
        case 0x27bf98u: goto label_27bf98;
        case 0x27bf9cu: goto label_27bf9c;
        case 0x27bfa0u: goto label_27bfa0;
        case 0x27bfa4u: goto label_27bfa4;
        case 0x27bfa8u: goto label_27bfa8;
        case 0x27bfacu: goto label_27bfac;
        case 0x27bfb0u: goto label_27bfb0;
        case 0x27bfb4u: goto label_27bfb4;
        case 0x27bfb8u: goto label_27bfb8;
        case 0x27bfbcu: goto label_27bfbc;
        case 0x27bfc0u: goto label_27bfc0;
        case 0x27bfc4u: goto label_27bfc4;
        case 0x27bfc8u: goto label_27bfc8;
        case 0x27bfccu: goto label_27bfcc;
        case 0x27bfd0u: goto label_27bfd0;
        case 0x27bfd4u: goto label_27bfd4;
        case 0x27bfd8u: goto label_27bfd8;
        case 0x27bfdcu: goto label_27bfdc;
        case 0x27bfe0u: goto label_27bfe0;
        case 0x27bfe4u: goto label_27bfe4;
        case 0x27bfe8u: goto label_27bfe8;
        case 0x27bfecu: goto label_27bfec;
        case 0x27bff0u: goto label_27bff0;
        case 0x27bff4u: goto label_27bff4;
        case 0x27bff8u: goto label_27bff8;
        case 0x27bffcu: goto label_27bffc;
        case 0x27c000u: goto label_27c000;
        case 0x27c004u: goto label_27c004;
        case 0x27c008u: goto label_27c008;
        case 0x27c00cu: goto label_27c00c;
        case 0x27c010u: goto label_27c010;
        case 0x27c014u: goto label_27c014;
        case 0x27c018u: goto label_27c018;
        case 0x27c01cu: goto label_27c01c;
        case 0x27c020u: goto label_27c020;
        case 0x27c024u: goto label_27c024;
        case 0x27c028u: goto label_27c028;
        case 0x27c02cu: goto label_27c02c;
        case 0x27c030u: goto label_27c030;
        case 0x27c034u: goto label_27c034;
        case 0x27c038u: goto label_27c038;
        case 0x27c03cu: goto label_27c03c;
        case 0x27c040u: goto label_27c040;
        case 0x27c044u: goto label_27c044;
        case 0x27c048u: goto label_27c048;
        case 0x27c04cu: goto label_27c04c;
        case 0x27c050u: goto label_27c050;
        case 0x27c054u: goto label_27c054;
        case 0x27c058u: goto label_27c058;
        case 0x27c05cu: goto label_27c05c;
        case 0x27c060u: goto label_27c060;
        case 0x27c064u: goto label_27c064;
        case 0x27c068u: goto label_27c068;
        case 0x27c06cu: goto label_27c06c;
        case 0x27c070u: goto label_27c070;
        case 0x27c074u: goto label_27c074;
        case 0x27c078u: goto label_27c078;
        case 0x27c07cu: goto label_27c07c;
        case 0x27c080u: goto label_27c080;
        case 0x27c084u: goto label_27c084;
        case 0x27c088u: goto label_27c088;
        case 0x27c08cu: goto label_27c08c;
        case 0x27c090u: goto label_27c090;
        case 0x27c094u: goto label_27c094;
        case 0x27c098u: goto label_27c098;
        case 0x27c09cu: goto label_27c09c;
        case 0x27c0a0u: goto label_27c0a0;
        case 0x27c0a4u: goto label_27c0a4;
        case 0x27c0a8u: goto label_27c0a8;
        case 0x27c0acu: goto label_27c0ac;
        case 0x27c0b0u: goto label_27c0b0;
        case 0x27c0b4u: goto label_27c0b4;
        case 0x27c0b8u: goto label_27c0b8;
        case 0x27c0bcu: goto label_27c0bc;
        case 0x27c0c0u: goto label_27c0c0;
        case 0x27c0c4u: goto label_27c0c4;
        case 0x27c0c8u: goto label_27c0c8;
        case 0x27c0ccu: goto label_27c0cc;
        case 0x27c0d0u: goto label_27c0d0;
        case 0x27c0d4u: goto label_27c0d4;
        case 0x27c0d8u: goto label_27c0d8;
        case 0x27c0dcu: goto label_27c0dc;
        case 0x27c0e0u: goto label_27c0e0;
        case 0x27c0e4u: goto label_27c0e4;
        case 0x27c0e8u: goto label_27c0e8;
        case 0x27c0ecu: goto label_27c0ec;
        case 0x27c0f0u: goto label_27c0f0;
        case 0x27c0f4u: goto label_27c0f4;
        case 0x27c0f8u: goto label_27c0f8;
        case 0x27c0fcu: goto label_27c0fc;
        case 0x27c100u: goto label_27c100;
        case 0x27c104u: goto label_27c104;
        case 0x27c108u: goto label_27c108;
        case 0x27c10cu: goto label_27c10c;
        case 0x27c110u: goto label_27c110;
        case 0x27c114u: goto label_27c114;
        case 0x27c118u: goto label_27c118;
        case 0x27c11cu: goto label_27c11c;
        case 0x27c120u: goto label_27c120;
        case 0x27c124u: goto label_27c124;
        case 0x27c128u: goto label_27c128;
        case 0x27c12cu: goto label_27c12c;
        case 0x27c130u: goto label_27c130;
        case 0x27c134u: goto label_27c134;
        case 0x27c138u: goto label_27c138;
        case 0x27c13cu: goto label_27c13c;
        case 0x27c140u: goto label_27c140;
        case 0x27c144u: goto label_27c144;
        case 0x27c148u: goto label_27c148;
        case 0x27c14cu: goto label_27c14c;
        case 0x27c150u: goto label_27c150;
        case 0x27c154u: goto label_27c154;
        case 0x27c158u: goto label_27c158;
        case 0x27c15cu: goto label_27c15c;
        case 0x27c160u: goto label_27c160;
        case 0x27c164u: goto label_27c164;
        case 0x27c168u: goto label_27c168;
        case 0x27c16cu: goto label_27c16c;
        case 0x27c170u: goto label_27c170;
        case 0x27c174u: goto label_27c174;
        case 0x27c178u: goto label_27c178;
        case 0x27c17cu: goto label_27c17c;
        case 0x27c180u: goto label_27c180;
        case 0x27c184u: goto label_27c184;
        case 0x27c188u: goto label_27c188;
        case 0x27c18cu: goto label_27c18c;
        case 0x27c190u: goto label_27c190;
        case 0x27c194u: goto label_27c194;
        case 0x27c198u: goto label_27c198;
        case 0x27c19cu: goto label_27c19c;
        case 0x27c1a0u: goto label_27c1a0;
        case 0x27c1a4u: goto label_27c1a4;
        case 0x27c1a8u: goto label_27c1a8;
        case 0x27c1acu: goto label_27c1ac;
        case 0x27c1b0u: goto label_27c1b0;
        case 0x27c1b4u: goto label_27c1b4;
        case 0x27c1b8u: goto label_27c1b8;
        case 0x27c1bcu: goto label_27c1bc;
        case 0x27c1c0u: goto label_27c1c0;
        case 0x27c1c4u: goto label_27c1c4;
        case 0x27c1c8u: goto label_27c1c8;
        case 0x27c1ccu: goto label_27c1cc;
        case 0x27c1d0u: goto label_27c1d0;
        case 0x27c1d4u: goto label_27c1d4;
        case 0x27c1d8u: goto label_27c1d8;
        case 0x27c1dcu: goto label_27c1dc;
        case 0x27c1e0u: goto label_27c1e0;
        case 0x27c1e4u: goto label_27c1e4;
        case 0x27c1e8u: goto label_27c1e8;
        case 0x27c1ecu: goto label_27c1ec;
        case 0x27c1f0u: goto label_27c1f0;
        case 0x27c1f4u: goto label_27c1f4;
        case 0x27c1f8u: goto label_27c1f8;
        case 0x27c1fcu: goto label_27c1fc;
        case 0x27c200u: goto label_27c200;
        case 0x27c204u: goto label_27c204;
        case 0x27c208u: goto label_27c208;
        case 0x27c20cu: goto label_27c20c;
        case 0x27c210u: goto label_27c210;
        case 0x27c214u: goto label_27c214;
        case 0x27c218u: goto label_27c218;
        case 0x27c21cu: goto label_27c21c;
        case 0x27c220u: goto label_27c220;
        case 0x27c224u: goto label_27c224;
        case 0x27c228u: goto label_27c228;
        case 0x27c22cu: goto label_27c22c;
        case 0x27c230u: goto label_27c230;
        case 0x27c234u: goto label_27c234;
        case 0x27c238u: goto label_27c238;
        case 0x27c23cu: goto label_27c23c;
        case 0x27c240u: goto label_27c240;
        case 0x27c244u: goto label_27c244;
        case 0x27c248u: goto label_27c248;
        case 0x27c24cu: goto label_27c24c;
        case 0x27c250u: goto label_27c250;
        case 0x27c254u: goto label_27c254;
        case 0x27c258u: goto label_27c258;
        case 0x27c25cu: goto label_27c25c;
        case 0x27c260u: goto label_27c260;
        case 0x27c264u: goto label_27c264;
        case 0x27c268u: goto label_27c268;
        case 0x27c26cu: goto label_27c26c;
        case 0x27c270u: goto label_27c270;
        case 0x27c274u: goto label_27c274;
        case 0x27c278u: goto label_27c278;
        case 0x27c27cu: goto label_27c27c;
        case 0x27c280u: goto label_27c280;
        case 0x27c284u: goto label_27c284;
        case 0x27c288u: goto label_27c288;
        case 0x27c28cu: goto label_27c28c;
        case 0x27c290u: goto label_27c290;
        case 0x27c294u: goto label_27c294;
        case 0x27c298u: goto label_27c298;
        case 0x27c29cu: goto label_27c29c;
        case 0x27c2a0u: goto label_27c2a0;
        case 0x27c2a4u: goto label_27c2a4;
        case 0x27c2a8u: goto label_27c2a8;
        case 0x27c2acu: goto label_27c2ac;
        case 0x27c2b0u: goto label_27c2b0;
        case 0x27c2b4u: goto label_27c2b4;
        case 0x27c2b8u: goto label_27c2b8;
        case 0x27c2bcu: goto label_27c2bc;
        case 0x27c2c0u: goto label_27c2c0;
        case 0x27c2c4u: goto label_27c2c4;
        case 0x27c2c8u: goto label_27c2c8;
        case 0x27c2ccu: goto label_27c2cc;
        case 0x27c2d0u: goto label_27c2d0;
        case 0x27c2d4u: goto label_27c2d4;
        case 0x27c2d8u: goto label_27c2d8;
        case 0x27c2dcu: goto label_27c2dc;
        case 0x27c2e0u: goto label_27c2e0;
        case 0x27c2e4u: goto label_27c2e4;
        case 0x27c2e8u: goto label_27c2e8;
        case 0x27c2ecu: goto label_27c2ec;
        case 0x27c2f0u: goto label_27c2f0;
        case 0x27c2f4u: goto label_27c2f4;
        case 0x27c2f8u: goto label_27c2f8;
        case 0x27c2fcu: goto label_27c2fc;
        case 0x27c300u: goto label_27c300;
        case 0x27c304u: goto label_27c304;
        case 0x27c308u: goto label_27c308;
        case 0x27c30cu: goto label_27c30c;
        case 0x27c310u: goto label_27c310;
        case 0x27c314u: goto label_27c314;
        case 0x27c318u: goto label_27c318;
        case 0x27c31cu: goto label_27c31c;
        case 0x27c320u: goto label_27c320;
        case 0x27c324u: goto label_27c324;
        case 0x27c328u: goto label_27c328;
        case 0x27c32cu: goto label_27c32c;
        case 0x27c330u: goto label_27c330;
        case 0x27c334u: goto label_27c334;
        case 0x27c338u: goto label_27c338;
        case 0x27c33cu: goto label_27c33c;
        case 0x27c340u: goto label_27c340;
        case 0x27c344u: goto label_27c344;
        case 0x27c348u: goto label_27c348;
        case 0x27c34cu: goto label_27c34c;
        case 0x27c350u: goto label_27c350;
        case 0x27c354u: goto label_27c354;
        case 0x27c358u: goto label_27c358;
        case 0x27c35cu: goto label_27c35c;
        case 0x27c360u: goto label_27c360;
        case 0x27c364u: goto label_27c364;
        case 0x27c368u: goto label_27c368;
        case 0x27c36cu: goto label_27c36c;
        case 0x27c370u: goto label_27c370;
        case 0x27c374u: goto label_27c374;
        case 0x27c378u: goto label_27c378;
        case 0x27c37cu: goto label_27c37c;
        case 0x27c380u: goto label_27c380;
        case 0x27c384u: goto label_27c384;
        case 0x27c388u: goto label_27c388;
        case 0x27c38cu: goto label_27c38c;
        case 0x27c390u: goto label_27c390;
        case 0x27c394u: goto label_27c394;
        case 0x27c398u: goto label_27c398;
        case 0x27c39cu: goto label_27c39c;
        case 0x27c3a0u: goto label_27c3a0;
        case 0x27c3a4u: goto label_27c3a4;
        case 0x27c3a8u: goto label_27c3a8;
        case 0x27c3acu: goto label_27c3ac;
        case 0x27c3b0u: goto label_27c3b0;
        case 0x27c3b4u: goto label_27c3b4;
        case 0x27c3b8u: goto label_27c3b8;
        case 0x27c3bcu: goto label_27c3bc;
        case 0x27c3c0u: goto label_27c3c0;
        case 0x27c3c4u: goto label_27c3c4;
        case 0x27c3c8u: goto label_27c3c8;
        case 0x27c3ccu: goto label_27c3cc;
        case 0x27c3d0u: goto label_27c3d0;
        case 0x27c3d4u: goto label_27c3d4;
        case 0x27c3d8u: goto label_27c3d8;
        case 0x27c3dcu: goto label_27c3dc;
        case 0x27c3e0u: goto label_27c3e0;
        case 0x27c3e4u: goto label_27c3e4;
        case 0x27c3e8u: goto label_27c3e8;
        case 0x27c3ecu: goto label_27c3ec;
        case 0x27c3f0u: goto label_27c3f0;
        case 0x27c3f4u: goto label_27c3f4;
        case 0x27c3f8u: goto label_27c3f8;
        case 0x27c3fcu: goto label_27c3fc;
        case 0x27c400u: goto label_27c400;
        case 0x27c404u: goto label_27c404;
        case 0x27c408u: goto label_27c408;
        case 0x27c40cu: goto label_27c40c;
        case 0x27c410u: goto label_27c410;
        case 0x27c414u: goto label_27c414;
        case 0x27c418u: goto label_27c418;
        case 0x27c41cu: goto label_27c41c;
        case 0x27c420u: goto label_27c420;
        case 0x27c424u: goto label_27c424;
        case 0x27c428u: goto label_27c428;
        case 0x27c42cu: goto label_27c42c;
        case 0x27c430u: goto label_27c430;
        case 0x27c434u: goto label_27c434;
        case 0x27c438u: goto label_27c438;
        case 0x27c43cu: goto label_27c43c;
        case 0x27c440u: goto label_27c440;
        case 0x27c444u: goto label_27c444;
        case 0x27c448u: goto label_27c448;
        case 0x27c44cu: goto label_27c44c;
        case 0x27c450u: goto label_27c450;
        case 0x27c454u: goto label_27c454;
        case 0x27c458u: goto label_27c458;
        case 0x27c45cu: goto label_27c45c;
        case 0x27c460u: goto label_27c460;
        case 0x27c464u: goto label_27c464;
        case 0x27c468u: goto label_27c468;
        case 0x27c46cu: goto label_27c46c;
        case 0x27c470u: goto label_27c470;
        case 0x27c474u: goto label_27c474;
        case 0x27c478u: goto label_27c478;
        case 0x27c47cu: goto label_27c47c;
        case 0x27c480u: goto label_27c480;
        case 0x27c484u: goto label_27c484;
        case 0x27c488u: goto label_27c488;
        case 0x27c48cu: goto label_27c48c;
        case 0x27c490u: goto label_27c490;
        case 0x27c494u: goto label_27c494;
        case 0x27c498u: goto label_27c498;
        case 0x27c49cu: goto label_27c49c;
        case 0x27c4a0u: goto label_27c4a0;
        case 0x27c4a4u: goto label_27c4a4;
        case 0x27c4a8u: goto label_27c4a8;
        case 0x27c4acu: goto label_27c4ac;
        case 0x27c4b0u: goto label_27c4b0;
        case 0x27c4b4u: goto label_27c4b4;
        case 0x27c4b8u: goto label_27c4b8;
        case 0x27c4bcu: goto label_27c4bc;
        case 0x27c4c0u: goto label_27c4c0;
        case 0x27c4c4u: goto label_27c4c4;
        case 0x27c4c8u: goto label_27c4c8;
        case 0x27c4ccu: goto label_27c4cc;
        case 0x27c4d0u: goto label_27c4d0;
        case 0x27c4d4u: goto label_27c4d4;
        case 0x27c4d8u: goto label_27c4d8;
        case 0x27c4dcu: goto label_27c4dc;
        case 0x27c4e0u: goto label_27c4e0;
        case 0x27c4e4u: goto label_27c4e4;
        case 0x27c4e8u: goto label_27c4e8;
        case 0x27c4ecu: goto label_27c4ec;
        case 0x27c4f0u: goto label_27c4f0;
        case 0x27c4f4u: goto label_27c4f4;
        case 0x27c4f8u: goto label_27c4f8;
        case 0x27c4fcu: goto label_27c4fc;
        case 0x27c500u: goto label_27c500;
        case 0x27c504u: goto label_27c504;
        case 0x27c508u: goto label_27c508;
        case 0x27c50cu: goto label_27c50c;
        case 0x27c510u: goto label_27c510;
        case 0x27c514u: goto label_27c514;
        case 0x27c518u: goto label_27c518;
        case 0x27c51cu: goto label_27c51c;
        case 0x27c520u: goto label_27c520;
        case 0x27c524u: goto label_27c524;
        case 0x27c528u: goto label_27c528;
        case 0x27c52cu: goto label_27c52c;
        case 0x27c530u: goto label_27c530;
        case 0x27c534u: goto label_27c534;
        case 0x27c538u: goto label_27c538;
        case 0x27c53cu: goto label_27c53c;
        case 0x27c540u: goto label_27c540;
        case 0x27c544u: goto label_27c544;
        case 0x27c548u: goto label_27c548;
        case 0x27c54cu: goto label_27c54c;
        case 0x27c550u: goto label_27c550;
        case 0x27c554u: goto label_27c554;
        case 0x27c558u: goto label_27c558;
        case 0x27c55cu: goto label_27c55c;
        case 0x27c560u: goto label_27c560;
        case 0x27c564u: goto label_27c564;
        case 0x27c568u: goto label_27c568;
        case 0x27c56cu: goto label_27c56c;
        case 0x27c570u: goto label_27c570;
        case 0x27c574u: goto label_27c574;
        case 0x27c578u: goto label_27c578;
        case 0x27c57cu: goto label_27c57c;
        case 0x27c580u: goto label_27c580;
        case 0x27c584u: goto label_27c584;
        case 0x27c588u: goto label_27c588;
        case 0x27c58cu: goto label_27c58c;
        case 0x27c590u: goto label_27c590;
        case 0x27c594u: goto label_27c594;
        case 0x27c598u: goto label_27c598;
        case 0x27c59cu: goto label_27c59c;
        case 0x27c5a0u: goto label_27c5a0;
        case 0x27c5a4u: goto label_27c5a4;
        case 0x27c5a8u: goto label_27c5a8;
        case 0x27c5acu: goto label_27c5ac;
        case 0x27c5b0u: goto label_27c5b0;
        case 0x27c5b4u: goto label_27c5b4;
        case 0x27c5b8u: goto label_27c5b8;
        case 0x27c5bcu: goto label_27c5bc;
        case 0x27c5c0u: goto label_27c5c0;
        case 0x27c5c4u: goto label_27c5c4;
        case 0x27c5c8u: goto label_27c5c8;
        case 0x27c5ccu: goto label_27c5cc;
        case 0x27c5d0u: goto label_27c5d0;
        case 0x27c5d4u: goto label_27c5d4;
        case 0x27c5d8u: goto label_27c5d8;
        case 0x27c5dcu: goto label_27c5dc;
        case 0x27c5e0u: goto label_27c5e0;
        case 0x27c5e4u: goto label_27c5e4;
        case 0x27c5e8u: goto label_27c5e8;
        case 0x27c5ecu: goto label_27c5ec;
        case 0x27c5f0u: goto label_27c5f0;
        case 0x27c5f4u: goto label_27c5f4;
        case 0x27c5f8u: goto label_27c5f8;
        case 0x27c5fcu: goto label_27c5fc;
        case 0x27c600u: goto label_27c600;
        case 0x27c604u: goto label_27c604;
        case 0x27c608u: goto label_27c608;
        case 0x27c60cu: goto label_27c60c;
        case 0x27c610u: goto label_27c610;
        case 0x27c614u: goto label_27c614;
        case 0x27c618u: goto label_27c618;
        case 0x27c61cu: goto label_27c61c;
        case 0x27c620u: goto label_27c620;
        case 0x27c624u: goto label_27c624;
        case 0x27c628u: goto label_27c628;
        case 0x27c62cu: goto label_27c62c;
        case 0x27c630u: goto label_27c630;
        case 0x27c634u: goto label_27c634;
        case 0x27c638u: goto label_27c638;
        case 0x27c63cu: goto label_27c63c;
        case 0x27c640u: goto label_27c640;
        case 0x27c644u: goto label_27c644;
        case 0x27c648u: goto label_27c648;
        case 0x27c64cu: goto label_27c64c;
        case 0x27c650u: goto label_27c650;
        case 0x27c654u: goto label_27c654;
        case 0x27c658u: goto label_27c658;
        case 0x27c65cu: goto label_27c65c;
        case 0x27c660u: goto label_27c660;
        case 0x27c664u: goto label_27c664;
        case 0x27c668u: goto label_27c668;
        case 0x27c66cu: goto label_27c66c;
        case 0x27c670u: goto label_27c670;
        case 0x27c674u: goto label_27c674;
        case 0x27c678u: goto label_27c678;
        case 0x27c67cu: goto label_27c67c;
        case 0x27c680u: goto label_27c680;
        case 0x27c684u: goto label_27c684;
        case 0x27c688u: goto label_27c688;
        case 0x27c68cu: goto label_27c68c;
        case 0x27c690u: goto label_27c690;
        case 0x27c694u: goto label_27c694;
        case 0x27c698u: goto label_27c698;
        case 0x27c69cu: goto label_27c69c;
        case 0x27c6a0u: goto label_27c6a0;
        case 0x27c6a4u: goto label_27c6a4;
        case 0x27c6a8u: goto label_27c6a8;
        case 0x27c6acu: goto label_27c6ac;
        case 0x27c6b0u: goto label_27c6b0;
        case 0x27c6b4u: goto label_27c6b4;
        case 0x27c6b8u: goto label_27c6b8;
        case 0x27c6bcu: goto label_27c6bc;
        case 0x27c6c0u: goto label_27c6c0;
        case 0x27c6c4u: goto label_27c6c4;
        case 0x27c6c8u: goto label_27c6c8;
        case 0x27c6ccu: goto label_27c6cc;
        case 0x27c6d0u: goto label_27c6d0;
        case 0x27c6d4u: goto label_27c6d4;
        case 0x27c6d8u: goto label_27c6d8;
        case 0x27c6dcu: goto label_27c6dc;
        case 0x27c6e0u: goto label_27c6e0;
        case 0x27c6e4u: goto label_27c6e4;
        case 0x27c6e8u: goto label_27c6e8;
        case 0x27c6ecu: goto label_27c6ec;
        case 0x27c6f0u: goto label_27c6f0;
        case 0x27c6f4u: goto label_27c6f4;
        case 0x27c6f8u: goto label_27c6f8;
        case 0x27c6fcu: goto label_27c6fc;
        case 0x27c700u: goto label_27c700;
        case 0x27c704u: goto label_27c704;
        case 0x27c708u: goto label_27c708;
        case 0x27c70cu: goto label_27c70c;
        case 0x27c710u: goto label_27c710;
        case 0x27c714u: goto label_27c714;
        case 0x27c718u: goto label_27c718;
        case 0x27c71cu: goto label_27c71c;
        case 0x27c720u: goto label_27c720;
        case 0x27c724u: goto label_27c724;
        case 0x27c728u: goto label_27c728;
        case 0x27c72cu: goto label_27c72c;
        case 0x27c730u: goto label_27c730;
        case 0x27c734u: goto label_27c734;
        case 0x27c738u: goto label_27c738;
        case 0x27c73cu: goto label_27c73c;
        case 0x27c740u: goto label_27c740;
        case 0x27c744u: goto label_27c744;
        case 0x27c748u: goto label_27c748;
        case 0x27c74cu: goto label_27c74c;
        case 0x27c750u: goto label_27c750;
        case 0x27c754u: goto label_27c754;
        case 0x27c758u: goto label_27c758;
        case 0x27c75cu: goto label_27c75c;
        case 0x27c760u: goto label_27c760;
        case 0x27c764u: goto label_27c764;
        case 0x27c768u: goto label_27c768;
        case 0x27c76cu: goto label_27c76c;
        case 0x27c770u: goto label_27c770;
        case 0x27c774u: goto label_27c774;
        case 0x27c778u: goto label_27c778;
        case 0x27c77cu: goto label_27c77c;
        case 0x27c780u: goto label_27c780;
        case 0x27c784u: goto label_27c784;
        case 0x27c788u: goto label_27c788;
        case 0x27c78cu: goto label_27c78c;
        case 0x27c790u: goto label_27c790;
        case 0x27c794u: goto label_27c794;
        case 0x27c798u: goto label_27c798;
        case 0x27c79cu: goto label_27c79c;
        case 0x27c7a0u: goto label_27c7a0;
        case 0x27c7a4u: goto label_27c7a4;
        case 0x27c7a8u: goto label_27c7a8;
        case 0x27c7acu: goto label_27c7ac;
        case 0x27c7b0u: goto label_27c7b0;
        case 0x27c7b4u: goto label_27c7b4;
        case 0x27c7b8u: goto label_27c7b8;
        case 0x27c7bcu: goto label_27c7bc;
        case 0x27c7c0u: goto label_27c7c0;
        case 0x27c7c4u: goto label_27c7c4;
        case 0x27c7c8u: goto label_27c7c8;
        case 0x27c7ccu: goto label_27c7cc;
        case 0x27c7d0u: goto label_27c7d0;
        case 0x27c7d4u: goto label_27c7d4;
        case 0x27c7d8u: goto label_27c7d8;
        case 0x27c7dcu: goto label_27c7dc;
        case 0x27c7e0u: goto label_27c7e0;
        case 0x27c7e4u: goto label_27c7e4;
        case 0x27c7e8u: goto label_27c7e8;
        case 0x27c7ecu: goto label_27c7ec;
        case 0x27c7f0u: goto label_27c7f0;
        case 0x27c7f4u: goto label_27c7f4;
        case 0x27c7f8u: goto label_27c7f8;
        case 0x27c7fcu: goto label_27c7fc;
        case 0x27c800u: goto label_27c800;
        case 0x27c804u: goto label_27c804;
        case 0x27c808u: goto label_27c808;
        case 0x27c80cu: goto label_27c80c;
        case 0x27c810u: goto label_27c810;
        case 0x27c814u: goto label_27c814;
        case 0x27c818u: goto label_27c818;
        case 0x27c81cu: goto label_27c81c;
        case 0x27c820u: goto label_27c820;
        case 0x27c824u: goto label_27c824;
        case 0x27c828u: goto label_27c828;
        case 0x27c82cu: goto label_27c82c;
        case 0x27c830u: goto label_27c830;
        case 0x27c834u: goto label_27c834;
        case 0x27c838u: goto label_27c838;
        case 0x27c83cu: goto label_27c83c;
        case 0x27c840u: goto label_27c840;
        case 0x27c844u: goto label_27c844;
        case 0x27c848u: goto label_27c848;
        case 0x27c84cu: goto label_27c84c;
        case 0x27c850u: goto label_27c850;
        case 0x27c854u: goto label_27c854;
        case 0x27c858u: goto label_27c858;
        case 0x27c85cu: goto label_27c85c;
        case 0x27c860u: goto label_27c860;
        case 0x27c864u: goto label_27c864;
        case 0x27c868u: goto label_27c868;
        case 0x27c86cu: goto label_27c86c;
        case 0x27c870u: goto label_27c870;
        case 0x27c874u: goto label_27c874;
        case 0x27c878u: goto label_27c878;
        case 0x27c87cu: goto label_27c87c;
        case 0x27c880u: goto label_27c880;
        case 0x27c884u: goto label_27c884;
        case 0x27c888u: goto label_27c888;
        case 0x27c88cu: goto label_27c88c;
        case 0x27c890u: goto label_27c890;
        case 0x27c894u: goto label_27c894;
        case 0x27c898u: goto label_27c898;
        case 0x27c89cu: goto label_27c89c;
        case 0x27c8a0u: goto label_27c8a0;
        case 0x27c8a4u: goto label_27c8a4;
        case 0x27c8a8u: goto label_27c8a8;
        case 0x27c8acu: goto label_27c8ac;
        case 0x27c8b0u: goto label_27c8b0;
        case 0x27c8b4u: goto label_27c8b4;
        case 0x27c8b8u: goto label_27c8b8;
        case 0x27c8bcu: goto label_27c8bc;
        case 0x27c8c0u: goto label_27c8c0;
        case 0x27c8c4u: goto label_27c8c4;
        case 0x27c8c8u: goto label_27c8c8;
        case 0x27c8ccu: goto label_27c8cc;
        case 0x27c8d0u: goto label_27c8d0;
        case 0x27c8d4u: goto label_27c8d4;
        case 0x27c8d8u: goto label_27c8d8;
        case 0x27c8dcu: goto label_27c8dc;
        case 0x27c8e0u: goto label_27c8e0;
        case 0x27c8e4u: goto label_27c8e4;
        case 0x27c8e8u: goto label_27c8e8;
        case 0x27c8ecu: goto label_27c8ec;
        case 0x27c8f0u: goto label_27c8f0;
        case 0x27c8f4u: goto label_27c8f4;
        case 0x27c8f8u: goto label_27c8f8;
        case 0x27c8fcu: goto label_27c8fc;
        case 0x27c900u: goto label_27c900;
        case 0x27c904u: goto label_27c904;
        case 0x27c908u: goto label_27c908;
        case 0x27c90cu: goto label_27c90c;
        case 0x27c910u: goto label_27c910;
        case 0x27c914u: goto label_27c914;
        case 0x27c918u: goto label_27c918;
        case 0x27c91cu: goto label_27c91c;
        case 0x27c920u: goto label_27c920;
        case 0x27c924u: goto label_27c924;
        case 0x27c928u: goto label_27c928;
        case 0x27c92cu: goto label_27c92c;
        case 0x27c930u: goto label_27c930;
        case 0x27c934u: goto label_27c934;
        case 0x27c938u: goto label_27c938;
        case 0x27c93cu: goto label_27c93c;
        case 0x27c940u: goto label_27c940;
        case 0x27c944u: goto label_27c944;
        case 0x27c948u: goto label_27c948;
        case 0x27c94cu: goto label_27c94c;
        case 0x27c950u: goto label_27c950;
        case 0x27c954u: goto label_27c954;
        case 0x27c958u: goto label_27c958;
        case 0x27c95cu: goto label_27c95c;
        case 0x27c960u: goto label_27c960;
        case 0x27c964u: goto label_27c964;
        case 0x27c968u: goto label_27c968;
        case 0x27c96cu: goto label_27c96c;
        case 0x27c970u: goto label_27c970;
        case 0x27c974u: goto label_27c974;
        case 0x27c978u: goto label_27c978;
        case 0x27c97cu: goto label_27c97c;
        case 0x27c980u: goto label_27c980;
        case 0x27c984u: goto label_27c984;
        case 0x27c988u: goto label_27c988;
        case 0x27c98cu: goto label_27c98c;
        case 0x27c990u: goto label_27c990;
        case 0x27c994u: goto label_27c994;
        case 0x27c998u: goto label_27c998;
        case 0x27c99cu: goto label_27c99c;
        case 0x27c9a0u: goto label_27c9a0;
        case 0x27c9a4u: goto label_27c9a4;
        case 0x27c9a8u: goto label_27c9a8;
        case 0x27c9acu: goto label_27c9ac;
        case 0x27c9b0u: goto label_27c9b0;
        case 0x27c9b4u: goto label_27c9b4;
        case 0x27c9b8u: goto label_27c9b8;
        case 0x27c9bcu: goto label_27c9bc;
        case 0x27c9c0u: goto label_27c9c0;
        case 0x27c9c4u: goto label_27c9c4;
        case 0x27c9c8u: goto label_27c9c8;
        case 0x27c9ccu: goto label_27c9cc;
        case 0x27c9d0u: goto label_27c9d0;
        case 0x27c9d4u: goto label_27c9d4;
        case 0x27c9d8u: goto label_27c9d8;
        case 0x27c9dcu: goto label_27c9dc;
        case 0x27c9e0u: goto label_27c9e0;
        case 0x27c9e4u: goto label_27c9e4;
        case 0x27c9e8u: goto label_27c9e8;
        case 0x27c9ecu: goto label_27c9ec;
        case 0x27c9f0u: goto label_27c9f0;
        case 0x27c9f4u: goto label_27c9f4;
        case 0x27c9f8u: goto label_27c9f8;
        case 0x27c9fcu: goto label_27c9fc;
        case 0x27ca00u: goto label_27ca00;
        case 0x27ca04u: goto label_27ca04;
        case 0x27ca08u: goto label_27ca08;
        case 0x27ca0cu: goto label_27ca0c;
        case 0x27ca10u: goto label_27ca10;
        case 0x27ca14u: goto label_27ca14;
        case 0x27ca18u: goto label_27ca18;
        case 0x27ca1cu: goto label_27ca1c;
        case 0x27ca20u: goto label_27ca20;
        case 0x27ca24u: goto label_27ca24;
        case 0x27ca28u: goto label_27ca28;
        case 0x27ca2cu: goto label_27ca2c;
        case 0x27ca30u: goto label_27ca30;
        case 0x27ca34u: goto label_27ca34;
        case 0x27ca38u: goto label_27ca38;
        case 0x27ca3cu: goto label_27ca3c;
        case 0x27ca40u: goto label_27ca40;
        case 0x27ca44u: goto label_27ca44;
        case 0x27ca48u: goto label_27ca48;
        case 0x27ca4cu: goto label_27ca4c;
        case 0x27ca50u: goto label_27ca50;
        case 0x27ca54u: goto label_27ca54;
        case 0x27ca58u: goto label_27ca58;
        case 0x27ca5cu: goto label_27ca5c;
        case 0x27ca60u: goto label_27ca60;
        case 0x27ca64u: goto label_27ca64;
        case 0x27ca68u: goto label_27ca68;
        case 0x27ca6cu: goto label_27ca6c;
        case 0x27ca70u: goto label_27ca70;
        case 0x27ca74u: goto label_27ca74;
        case 0x27ca78u: goto label_27ca78;
        case 0x27ca7cu: goto label_27ca7c;
        case 0x27ca80u: goto label_27ca80;
        case 0x27ca84u: goto label_27ca84;
        case 0x27ca88u: goto label_27ca88;
        case 0x27ca8cu: goto label_27ca8c;
        case 0x27ca90u: goto label_27ca90;
        case 0x27ca94u: goto label_27ca94;
        case 0x27ca98u: goto label_27ca98;
        case 0x27ca9cu: goto label_27ca9c;
        case 0x27caa0u: goto label_27caa0;
        case 0x27caa4u: goto label_27caa4;
        case 0x27caa8u: goto label_27caa8;
        case 0x27caacu: goto label_27caac;
        case 0x27cab0u: goto label_27cab0;
        case 0x27cab4u: goto label_27cab4;
        case 0x27cab8u: goto label_27cab8;
        case 0x27cabcu: goto label_27cabc;
        case 0x27cac0u: goto label_27cac0;
        case 0x27cac4u: goto label_27cac4;
        case 0x27cac8u: goto label_27cac8;
        case 0x27caccu: goto label_27cacc;
        case 0x27cad0u: goto label_27cad0;
        case 0x27cad4u: goto label_27cad4;
        case 0x27cad8u: goto label_27cad8;
        case 0x27cadcu: goto label_27cadc;
        case 0x27cae0u: goto label_27cae0;
        case 0x27cae4u: goto label_27cae4;
        case 0x27cae8u: goto label_27cae8;
        case 0x27caecu: goto label_27caec;
        case 0x27caf0u: goto label_27caf0;
        case 0x27caf4u: goto label_27caf4;
        case 0x27caf8u: goto label_27caf8;
        case 0x27cafcu: goto label_27cafc;
        case 0x27cb00u: goto label_27cb00;
        case 0x27cb04u: goto label_27cb04;
        case 0x27cb08u: goto label_27cb08;
        case 0x27cb0cu: goto label_27cb0c;
        case 0x27cb10u: goto label_27cb10;
        case 0x27cb14u: goto label_27cb14;
        case 0x27cb18u: goto label_27cb18;
        case 0x27cb1cu: goto label_27cb1c;
        case 0x27cb20u: goto label_27cb20;
        case 0x27cb24u: goto label_27cb24;
        case 0x27cb28u: goto label_27cb28;
        case 0x27cb2cu: goto label_27cb2c;
        case 0x27cb30u: goto label_27cb30;
        case 0x27cb34u: goto label_27cb34;
        case 0x27cb38u: goto label_27cb38;
        case 0x27cb3cu: goto label_27cb3c;
        case 0x27cb40u: goto label_27cb40;
        case 0x27cb44u: goto label_27cb44;
        case 0x27cb48u: goto label_27cb48;
        case 0x27cb4cu: goto label_27cb4c;
        case 0x27cb50u: goto label_27cb50;
        case 0x27cb54u: goto label_27cb54;
        case 0x27cb58u: goto label_27cb58;
        case 0x27cb5cu: goto label_27cb5c;
        case 0x27cb60u: goto label_27cb60;
        case 0x27cb64u: goto label_27cb64;
        case 0x27cb68u: goto label_27cb68;
        case 0x27cb6cu: goto label_27cb6c;
        case 0x27cb70u: goto label_27cb70;
        case 0x27cb74u: goto label_27cb74;
        case 0x27cb78u: goto label_27cb78;
        case 0x27cb7cu: goto label_27cb7c;
        case 0x27cb80u: goto label_27cb80;
        case 0x27cb84u: goto label_27cb84;
        case 0x27cb88u: goto label_27cb88;
        case 0x27cb8cu: goto label_27cb8c;
        case 0x27cb90u: goto label_27cb90;
        case 0x27cb94u: goto label_27cb94;
        case 0x27cb98u: goto label_27cb98;
        case 0x27cb9cu: goto label_27cb9c;
        case 0x27cba0u: goto label_27cba0;
        case 0x27cba4u: goto label_27cba4;
        case 0x27cba8u: goto label_27cba8;
        case 0x27cbacu: goto label_27cbac;
        case 0x27cbb0u: goto label_27cbb0;
        case 0x27cbb4u: goto label_27cbb4;
        case 0x27cbb8u: goto label_27cbb8;
        case 0x27cbbcu: goto label_27cbbc;
        case 0x27cbc0u: goto label_27cbc0;
        case 0x27cbc4u: goto label_27cbc4;
        case 0x27cbc8u: goto label_27cbc8;
        case 0x27cbccu: goto label_27cbcc;
        case 0x27cbd0u: goto label_27cbd0;
        case 0x27cbd4u: goto label_27cbd4;
        case 0x27cbd8u: goto label_27cbd8;
        case 0x27cbdcu: goto label_27cbdc;
        case 0x27cbe0u: goto label_27cbe0;
        case 0x27cbe4u: goto label_27cbe4;
        case 0x27cbe8u: goto label_27cbe8;
        case 0x27cbecu: goto label_27cbec;
        case 0x27cbf0u: goto label_27cbf0;
        case 0x27cbf4u: goto label_27cbf4;
        case 0x27cbf8u: goto label_27cbf8;
        case 0x27cbfcu: goto label_27cbfc;
        case 0x27cc00u: goto label_27cc00;
        case 0x27cc04u: goto label_27cc04;
        case 0x27cc08u: goto label_27cc08;
        case 0x27cc0cu: goto label_27cc0c;
        case 0x27cc10u: goto label_27cc10;
        case 0x27cc14u: goto label_27cc14;
        case 0x27cc18u: goto label_27cc18;
        case 0x27cc1cu: goto label_27cc1c;
        case 0x27cc20u: goto label_27cc20;
        case 0x27cc24u: goto label_27cc24;
        case 0x27cc28u: goto label_27cc28;
        case 0x27cc2cu: goto label_27cc2c;
        case 0x27cc30u: goto label_27cc30;
        case 0x27cc34u: goto label_27cc34;
        case 0x27cc38u: goto label_27cc38;
        case 0x27cc3cu: goto label_27cc3c;
        case 0x27cc40u: goto label_27cc40;
        case 0x27cc44u: goto label_27cc44;
        case 0x27cc48u: goto label_27cc48;
        case 0x27cc4cu: goto label_27cc4c;
        case 0x27cc50u: goto label_27cc50;
        case 0x27cc54u: goto label_27cc54;
        case 0x27cc58u: goto label_27cc58;
        case 0x27cc5cu: goto label_27cc5c;
        case 0x27cc60u: goto label_27cc60;
        case 0x27cc64u: goto label_27cc64;
        case 0x27cc68u: goto label_27cc68;
        case 0x27cc6cu: goto label_27cc6c;
        case 0x27cc70u: goto label_27cc70;
        case 0x27cc74u: goto label_27cc74;
        case 0x27cc78u: goto label_27cc78;
        case 0x27cc7cu: goto label_27cc7c;
        case 0x27cc80u: goto label_27cc80;
        case 0x27cc84u: goto label_27cc84;
        case 0x27cc88u: goto label_27cc88;
        case 0x27cc8cu: goto label_27cc8c;
        case 0x27cc90u: goto label_27cc90;
        case 0x27cc94u: goto label_27cc94;
        case 0x27cc98u: goto label_27cc98;
        case 0x27cc9cu: goto label_27cc9c;
        case 0x27cca0u: goto label_27cca0;
        case 0x27cca4u: goto label_27cca4;
        case 0x27cca8u: goto label_27cca8;
        case 0x27ccacu: goto label_27ccac;
        case 0x27ccb0u: goto label_27ccb0;
        default: break;
    }

    ctx->pc = 0x27b190u;

label_27b190:
    // 0x27b190: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x27b190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_27b194:
    // 0x27b194: 0x3c03abab  lui         $v1, 0xABAB
    ctx->pc = 0x27b194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43947 << 16));
label_27b198:
    // 0x27b198: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27b198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_27b19c:
    // 0x27b19c: 0x3463abab  ori         $v1, $v1, 0xABAB
    ctx->pc = 0x27b19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43947);
label_27b1a0:
    // 0x27b1a0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x27b1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_27b1a4:
    // 0x27b1a4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x27b1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_27b1a8:
    // 0x27b1a8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x27b1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_27b1ac:
    // 0x27b1ac: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x27b1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_27b1b0:
    // 0x27b1b0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27b1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_27b1b4:
    // 0x27b1b4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27b1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_27b1b8:
    // 0x27b1b8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27b1b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27b1bc:
    // 0x27b1bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27b1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_27b1c0:
    // 0x27b1c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27b1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_27b1c4:
    // 0x27b1c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27b1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_27b1c8:
    // 0x27b1c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x27b1c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_27b1cc:
    // 0x27b1cc: 0xafa00220  sw          $zero, 0x220($sp)
    ctx->pc = 0x27b1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 0));
label_27b1d0:
    // 0x27b1d0: 0xa3a00210  sb          $zero, 0x210($sp)
    ctx->pc = 0x27b1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 528), (uint8_t)GPR_U32(ctx, 0));
label_27b1d4:
    // 0x27b1d4: 0xafa0020c  sw          $zero, 0x20C($sp)
    ctx->pc = 0x27b1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
label_27b1d8:
    // 0x27b1d8: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x27b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
label_27b1dc:
    // 0x27b1dc: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x27b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
label_27b1e0:
    // 0x27b1e0: 0xafa001d8  sw          $zero, 0x1D8($sp)
    ctx->pc = 0x27b1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
label_27b1e4:
    // 0x27b1e4: 0xafa001c0  sw          $zero, 0x1C0($sp)
    ctx->pc = 0x27b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 0));
label_27b1e8:
    // 0x27b1e8: 0x8c91002c  lw          $s1, 0x2C($a0)
    ctx->pc = 0x27b1e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_27b1ec:
    // 0x27b1ec: 0xa3a00190  sb          $zero, 0x190($sp)
    ctx->pc = 0x27b1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 400), (uint8_t)GPR_U32(ctx, 0));
label_27b1f0:
    // 0x27b1f0: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x27b1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
label_27b1f4:
    // 0x27b1f4: 0xaf80892c  sw          $zero, -0x76D4($gp)
    ctx->pc = 0x27b1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 0));
label_27b1f8:
    // 0x27b1f8: 0x9483006c  lhu         $v1, 0x6C($a0)
    ctx->pc = 0x27b1f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
label_27b1fc:
    // 0x27b1fc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_27b200:
    if (ctx->pc == 0x27B200u) {
        ctx->pc = 0x27B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1FCu;
        // 0x27b200: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B204u;
        goto label_27b204;
    }
    ctx->pc = 0x27B1FCu;
    {
        const bool branch_taken_0x27b1fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1FCu;
        // 0x27b200: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b1fc) {
            ctx->pc = 0x27B220u;
            goto label_27b220;
        }
    }
    ctx->pc = 0x27B204u;
label_27b204:
    // 0x27b204: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27b204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_27b208:
    // 0x27b208: 0xa683006c  sh          $v1, 0x6C($s4)
    ctx->pc = 0x27b208u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 108), (uint16_t)GPR_U32(ctx, 3));
label_27b20c:
    // 0x27b20c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x27b20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_27b210:
    // 0x27b210: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_27b214:
    if (ctx->pc == 0x27B214u) {
        ctx->pc = 0x27B218u;
        goto label_27b218;
    }
    ctx->pc = 0x27B210u;
    {
        const bool branch_taken_0x27b210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b210) {
            ctx->pc = 0x27B220u;
            goto label_27b220;
        }
    }
    ctx->pc = 0x27B218u;
label_27b218:
    // 0x27b218: 0xa6800068  sh          $zero, 0x68($s4)
    ctx->pc = 0x27b218u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 104), (uint16_t)GPR_U32(ctx, 0));
label_27b21c:
    // 0x27b21c: 0x0  nop
    ctx->pc = 0x27b21cu;
    // NOP
label_27b220:
    // 0x27b220: 0x9683006e  lhu         $v1, 0x6E($s4)
    ctx->pc = 0x27b220u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 110)));
label_27b224:
    // 0x27b224: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_27b228:
    if (ctx->pc == 0x27B228u) {
        ctx->pc = 0x27B22Cu;
        goto label_27b22c;
    }
    ctx->pc = 0x27B224u;
    {
        const bool branch_taken_0x27b224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b224) {
            ctx->pc = 0x27B248u;
            goto label_27b248;
        }
    }
    ctx->pc = 0x27B22Cu;
label_27b22c:
    // 0x27b22c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_27b230:
    // 0x27b230: 0xa683006e  sh          $v1, 0x6E($s4)
    ctx->pc = 0x27b230u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 110), (uint16_t)GPR_U32(ctx, 3));
label_27b234:
    // 0x27b234: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x27b234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_27b238:
    // 0x27b238: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_27b23c:
    if (ctx->pc == 0x27B23Cu) {
        ctx->pc = 0x27B240u;
        goto label_27b240;
    }
    ctx->pc = 0x27B238u;
    {
        const bool branch_taken_0x27b238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b238) {
            ctx->pc = 0x27B248u;
            goto label_27b248;
        }
    }
    ctx->pc = 0x27B240u;
label_27b240:
    // 0x27b240: 0xa680006a  sh          $zero, 0x6A($s4)
    ctx->pc = 0x27b240u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 106), (uint16_t)GPR_U32(ctx, 0));
label_27b244:
    // 0x27b244: 0x0  nop
    ctx->pc = 0x27b244u;
    // NOP
label_27b248:
    // 0x27b248: 0x92830070  lbu         $v1, 0x70($s4)
    ctx->pc = 0x27b248u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 112)));
label_27b24c:
    // 0x27b24c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_27b250:
    if (ctx->pc == 0x27B250u) {
        ctx->pc = 0x27B254u;
        goto label_27b254;
    }
    ctx->pc = 0x27B24Cu;
    {
        const bool branch_taken_0x27b24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b24c) {
            ctx->pc = 0x27B270u;
            goto label_27b270;
        }
    }
    ctx->pc = 0x27B254u;
label_27b254:
    // 0x27b254: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27b254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_27b258:
    // 0x27b258: 0xa2830070  sb          $v1, 0x70($s4)
    ctx->pc = 0x27b258u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 112), (uint8_t)GPR_U32(ctx, 3));
label_27b25c:
    // 0x27b25c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x27b25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_27b260:
    // 0x27b260: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_27b264:
    if (ctx->pc == 0x27B264u) {
        ctx->pc = 0x27B268u;
        goto label_27b268;
    }
    ctx->pc = 0x27B260u;
    {
        const bool branch_taken_0x27b260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b260) {
            ctx->pc = 0x27B270u;
            goto label_27b270;
        }
    }
    ctx->pc = 0x27B268u;
label_27b268:
    // 0x27b268: 0xa680006a  sh          $zero, 0x6A($s4)
    ctx->pc = 0x27b268u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 106), (uint16_t)GPR_U32(ctx, 0));
label_27b26c:
    // 0x27b26c: 0x0  nop
    ctx->pc = 0x27b26cu;
    // NOP
label_27b270:
    // 0x27b270: 0xae80004c  sw          $zero, 0x4C($s4)
    ctx->pc = 0x27b270u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
label_27b274:
    // 0x27b274: 0xae800054  sw          $zero, 0x54($s4)
    ctx->pc = 0x27b274u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 0));
label_27b278:
    // 0x27b278: 0xa2800058  sb          $zero, 0x58($s4)
    ctx->pc = 0x27b278u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 88), (uint8_t)GPR_U32(ctx, 0));
label_27b27c:
    // 0x27b27c: 0xa68000c2  sh          $zero, 0xC2($s4)
    ctx->pc = 0x27b27cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 194), (uint16_t)GPR_U32(ctx, 0));
label_27b280:
    // 0x27b280: 0x1220067f  beqz        $s1, . + 4 + (0x67F << 2)
label_27b284:
    if (ctx->pc == 0x27B284u) {
        ctx->pc = 0x27B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B280u;
        // 0x27b284: 0xa68000c4  sh          $zero, 0xC4($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 196), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B288u;
        goto label_27b288;
    }
    ctx->pc = 0x27B280u;
    {
        const bool branch_taken_0x27b280 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B280u;
        // 0x27b284: 0xa68000c4  sh          $zero, 0xC4($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 196), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b280) {
            ctx->pc = 0x27CC80u;
            goto label_27cc80;
        }
    }
    ctx->pc = 0x27B288u;
label_27b288:
    // 0x27b288: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x27b288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27b28c:
    // 0x27b28c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x27b28cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_27b290:
    // 0x27b290: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_27b294:
    if (ctx->pc == 0x27B294u) {
        ctx->pc = 0x27B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B290u;
        // 0x27b294: 0x64030003  daddiu      $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B298u;
        goto label_27b298;
    }
    ctx->pc = 0x27B290u;
    {
        const bool branch_taken_0x27b290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B290u;
        // 0x27b294: 0x64030003  daddiu      $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b290) {
            ctx->pc = 0x27B2A0u;
            goto label_27b2a0;
        }
    }
    ctx->pc = 0x27B298u;
label_27b298:
    // 0x27b298: 0x10000675  b           . + 4 + (0x675 << 2)
label_27b29c:
    if (ctx->pc == 0x27B29Cu) {
        ctx->pc = 0x27B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B298u;
        // 0x27b29c: 0xa3a301a0  sb          $v1, 0x1A0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 416), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B2A0u;
        goto label_27b2a0;
    }
    ctx->pc = 0x27B298u;
    {
        const bool branch_taken_0x27b298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B298u;
        // 0x27b29c: 0xa3a301a0  sb          $v1, 0x1A0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 416), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b298) {
            ctx->pc = 0x27CC70u;
            goto label_27cc70;
        }
    }
    ctx->pc = 0x27B2A0u;
label_27b2a0:
    // 0x27b2a0: 0x10000673  b           . + 4 + (0x673 << 2)
label_27b2a4:
    if (ctx->pc == 0x27B2A4u) {
        ctx->pc = 0x27B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2A0u;
        // 0x27b2a4: 0xa3a001a0  sb          $zero, 0x1A0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 416), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B2A8u;
        goto label_27b2a8;
    }
    ctx->pc = 0x27B2A0u;
    {
        const bool branch_taken_0x27b2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2A0u;
        // 0x27b2a4: 0xa3a001a0  sb          $zero, 0x1A0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 416), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b2a0) {
            ctx->pc = 0x27CC70u;
            goto label_27cc70;
        }
    }
    ctx->pc = 0x27B2A8u;
label_27b2a8:
    // 0x27b2a8: 0x92270002  lbu         $a3, 0x2($s1)
    ctx->pc = 0x27b2a8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_27b2ac:
    // 0x27b2ac: 0x3c06008c  lui         $a2, 0x8C
    ctx->pc = 0x27b2acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)140 << 16));
label_27b2b0:
    // 0x27b2b0: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x27b2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
label_27b2b4:
    // 0x27b2b4: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x27b2b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_27b2b8:
    // 0x27b2b8: 0x24c60950  addiu       $a2, $a2, 0x950
    ctx->pc = 0x27b2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2384));
label_27b2bc:
    // 0x27b2bc: 0x246331a0  addiu       $v1, $v1, 0x31A0
    ctx->pc = 0x27b2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12704));
label_27b2c0:
    // 0x27b2c0: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x27b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_27b2c4:
    // 0x27b2c4: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x27b2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_27b2c8:
    // 0x27b2c8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x27b2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_27b2cc:
    // 0x27b2cc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27b2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_27b2d0:
    // 0x27b2d0: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x27b2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_27b2d4:
    // 0x27b2d4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x27b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_27b2d8:
    // 0x27b2d8: 0xc54021  addu        $t0, $a2, $a1
    ctx->pc = 0x27b2d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_27b2dc:
    // 0x27b2dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27b2e0:
    // 0x27b2e0: 0x8d120008  lw          $s2, 0x8($t0)
    ctx->pc = 0x27b2e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_27b2e4:
    // 0x27b2e4: 0x8d170000  lw          $s7, 0x0($t0)
    ctx->pc = 0x27b2e4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_27b2e8:
    // 0x27b2e8: 0x90670005  lbu         $a3, 0x5($v1)
    ctx->pc = 0x27b2e8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_27b2ec:
    // 0x27b2ec: 0x90660004  lbu         $a2, 0x4($v1)
    ctx->pc = 0x27b2ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_27b2f0:
    // 0x27b2f0: 0x91040004  lbu         $a0, 0x4($t0)
    ctx->pc = 0x27b2f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_27b2f4:
    // 0x27b2f4: 0x91050005  lbu         $a1, 0x5($t0)
    ctx->pc = 0x27b2f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
label_27b2f8:
    // 0x27b2f8: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x27b2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
label_27b2fc:
    // 0x27b2fc: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x27b2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_27b300:
    // 0x27b300: 0x8d09000c  lw          $t1, 0xC($t0)
    ctx->pc = 0x27b300u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_27b304:
    // 0x27b304: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x27b304u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_27b308:
    // 0x27b308: 0x2654021  addu        $t0, $s3, $a1
    ctx->pc = 0x27b308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_27b30c:
    // 0x27b30c: 0x25050194  addiu       $a1, $t0, 0x194
    ctx->pc = 0x27b30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 404));
label_27b310:
    // 0x27b310: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x27b310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
label_27b314:
    // 0x27b314: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x27b314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_27b318:
    // 0x27b318: 0x8d060194  lw          $a2, 0x194($t0)
    ctx->pc = 0x27b318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 404)));
label_27b31c:
    // 0x27b31c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x27b31cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_27b320:
    // 0x27b320: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x27b320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_27b324:
    // 0x27b324: 0x24a50194  addiu       $a1, $a1, 0x194
    ctx->pc = 0x27b324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 404));
label_27b328:
    // 0x27b328: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x27b328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
label_27b32c:
    // 0x27b32c: 0x8cc5003c  lw          $a1, 0x3C($a2)
    ctx->pc = 0x27b32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
label_27b330:
    // 0x27b330: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
label_27b334:
    if (ctx->pc == 0x27B334u) {
        ctx->pc = 0x27B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B330u;
        // 0x27b334: 0xa7a821  addu        $s5, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B338u;
        goto label_27b338;
    }
    ctx->pc = 0x27B330u;
    {
        const bool branch_taken_0x27b330 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B330u;
        // 0x27b334: 0xa7a821  addu        $s5, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b330) {
            ctx->pc = 0x27B340u;
            goto label_27b340;
        }
    }
    ctx->pc = 0x27B338u;
label_27b338:
    // 0x27b338: 0xafa90130  sw          $t1, 0x130($sp)
    ctx->pc = 0x27b338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 9));
label_27b33c:
    // 0x27b33c: 0x0  nop
    ctx->pc = 0x27b33cu;
    // NOP
label_27b340:
    // 0x27b340: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x27b340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_27b344:
    // 0x27b344: 0x43900  sll         $a3, $a0, 4
    ctx->pc = 0x27b344u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_27b348:
    // 0x27b348: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x27b348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_27b34c:
    // 0x27b34c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x27b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27b350:
    // 0x27b350: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x27b350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_27b354:
    // 0x27b354: 0x1665064a  bne         $s3, $a1, . + 4 + (0x64A << 2)
label_27b358:
    if (ctx->pc == 0x27B358u) {
        ctx->pc = 0x27B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B354u;
        // 0x27b358: 0xc78021  addu        $s0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B35Cu;
        goto label_27b35c;
    }
    ctx->pc = 0x27B354u;
    {
        const bool branch_taken_0x27b354 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 5));
        ctx->pc = 0x27B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B354u;
        // 0x27b358: 0xc78021  addu        $s0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b354) {
            ctx->pc = 0x27CC80u;
            goto label_27cc80;
        }
    }
    ctx->pc = 0x27B35Cu;
label_27b35c:
    // 0x27b35c: 0x12000648  beqz        $s0, . + 4 + (0x648 << 2)
label_27b360:
    if (ctx->pc == 0x27B360u) {
        ctx->pc = 0x27B364u;
        goto label_27b364;
    }
    ctx->pc = 0x27B35Cu;
    {
        const bool branch_taken_0x27b35c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b35c) {
            ctx->pc = 0x27CC80u;
            goto label_27cc80;
        }
    }
    ctx->pc = 0x27B364u;
label_27b364:
    // 0x27b364: 0x12a00646  beqz        $s5, . + 4 + (0x646 << 2)
label_27b368:
    if (ctx->pc == 0x27B368u) {
        ctx->pc = 0x27B36Cu;
        goto label_27b36c;
    }
    ctx->pc = 0x27B364u;
    {
        const bool branch_taken_0x27b364 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b364) {
            ctx->pc = 0x27CC80u;
            goto label_27cc80;
        }
    }
    ctx->pc = 0x27B36Cu;
label_27b36c:
    // 0x27b36c: 0x92850078  lbu         $a1, 0x78($s4)
    ctx->pc = 0x27b36cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 120)));
label_27b370:
    // 0x27b370: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_27b374:
    if (ctx->pc == 0x27B374u) {
        ctx->pc = 0x27B378u;
        goto label_27b378;
    }
    ctx->pc = 0x27B370u;
    {
        const bool branch_taken_0x27b370 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b370) {
            ctx->pc = 0x27B388u;
            goto label_27b388;
        }
    }
    ctx->pc = 0x27B378u;
label_27b378:
    // 0x27b378: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x27b378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_27b37c:
    // 0x27b37c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x27b37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_27b380:
    // 0x27b380: 0x10000003  b           . + 4 + (0x3 << 2)
label_27b384:
    if (ctx->pc == 0x27B384u) {
        ctx->pc = 0x27B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B380u;
        // 0x27b384: 0x30be00ff  andi        $fp, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B388u;
        goto label_27b388;
    }
    ctx->pc = 0x27B380u;
    {
        const bool branch_taken_0x27b380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B380u;
        // 0x27b384: 0x30be00ff  andi        $fp, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b380) {
            ctx->pc = 0x27B390u;
            goto label_27b390;
        }
    }
    ctx->pc = 0x27B388u;
label_27b388:
    // 0x27b388: 0x92be0000  lbu         $fp, 0x0($s5)
    ctx->pc = 0x27b388u;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_27b38c:
    // 0x27b38c: 0x0  nop
    ctx->pc = 0x27b38cu;
    // NOP
label_27b390:
    // 0x27b390: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x27b390u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_27b394:
    // 0x27b394: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x27b394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27b398:
    // 0x27b398: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x27b398u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_27b39c:
    // 0x27b39c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_27b3a0:
    if (ctx->pc == 0x27B3A0u) {
        ctx->pc = 0x27B3A4u;
        goto label_27b3a4;
    }
    ctx->pc = 0x27B39Cu;
    {
        const bool branch_taken_0x27b39c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b39c) {
            ctx->pc = 0x27B3B0u;
            goto label_27b3b0;
        }
    }
    ctx->pc = 0x27B3A4u;
label_27b3a4:
    // 0x27b3a4: 0x93a501a0  lbu         $a1, 0x1A0($sp)
    ctx->pc = 0x27b3a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 416)));
label_27b3a8:
    // 0x27b3a8: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x27b3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_27b3ac:
    // 0x27b3ac: 0x30be00ff  andi        $fp, $a1, 0xFF
    ctx->pc = 0x27b3acu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_27b3b0:
    // 0x27b3b0: 0x33c500ff  andi        $a1, $fp, 0xFF
    ctx->pc = 0x27b3b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_27b3b4:
    // 0x27b3b4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x27b3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_27b3b8:
    // 0x27b3b8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x27b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_27b3bc:
    // 0x27b3bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_27b3c0:
    // 0x27b3c0: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x27b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_27b3c4:
    // 0x27b3c4: 0x64b021  addu        $s6, $v1, $a0
    ctx->pc = 0x27b3c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27b3c8:
    // 0x27b3c8: 0x12c0062d  beqz        $s6, . + 4 + (0x62D << 2)
label_27b3cc:
    if (ctx->pc == 0x27B3CCu) {
        ctx->pc = 0x27B3D0u;
        goto label_27b3d0;
    }
    ctx->pc = 0x27B3C8u;
    {
        const bool branch_taken_0x27b3c8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b3c8) {
            ctx->pc = 0x27CC80u;
            goto label_27cc80;
        }
    }
    ctx->pc = 0x27B3D0u;
label_27b3d0:
    // 0x27b3d0: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x27b3d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_27b3d4:
    // 0x27b3d4: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_27b3d8:
    if (ctx->pc == 0x27B3D8u) {
        ctx->pc = 0x27B3DCu;
        goto label_27b3dc;
    }
    ctx->pc = 0x27B3D4u;
    {
        const bool branch_taken_0x27b3d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b3d4) {
            ctx->pc = 0x27B3F0u;
            goto label_27b3f0;
        }
    }
    ctx->pc = 0x27B3DCu;
label_27b3dc:
    // 0x27b3dc: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x27b3dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_27b3e0:
    // 0x27b3e0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x27b3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_27b3e4:
    // 0x27b3e4: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x27b3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_27b3e8:
    // 0x27b3e8: 0x1000042f  b           . + 4 + (0x42F << 2)
label_27b3ec:
    if (ctx->pc == 0x27B3ECu) {
        ctx->pc = 0x27B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B3E8u;
        // 0x27b3ec: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B3F0u;
        goto label_27b3f0;
    }
    ctx->pc = 0x27B3E8u;
    {
        const bool branch_taken_0x27b3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B3E8u;
        // 0x27b3ec: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b3e8) {
            ctx->pc = 0x27C4A8u;
            goto label_27c4a8;
        }
    }
    ctx->pc = 0x27B3F0u;
label_27b3f0:
    // 0x27b3f0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x27b3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_27b3f4:
    // 0x27b3f4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_27b3f8:
    if (ctx->pc == 0x27B3F8u) {
        ctx->pc = 0x27B3FCu;
        goto label_27b3fc;
    }
    ctx->pc = 0x27B3F4u;
    {
        const bool branch_taken_0x27b3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b3f4) {
            ctx->pc = 0x27B410u;
            goto label_27b410;
        }
    }
    ctx->pc = 0x27B3FCu;
label_27b3fc:
    // 0x27b3fc: 0x9244000a  lbu         $a0, 0xA($s2)
    ctx->pc = 0x27b3fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
label_27b400:
    // 0x27b400: 0x9263000a  lbu         $v1, 0xA($s3)
    ctx->pc = 0x27b400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
label_27b404:
    // 0x27b404: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_27b408:
    if (ctx->pc == 0x27B408u) {
        ctx->pc = 0x27B40Cu;
        goto label_27b40c;
    }
    ctx->pc = 0x27B404u;
    {
        const bool branch_taken_0x27b404 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27b404) {
            ctx->pc = 0x27B430u;
            goto label_27b430;
        }
    }
    ctx->pc = 0x27B40Cu;
label_27b40c:
    // 0x27b40c: 0x0  nop
    ctx->pc = 0x27b40cu;
    // NOP
label_27b410:
    // 0x27b410: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x27b410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_27b414:
    // 0x27b414: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_27b418:
    if (ctx->pc == 0x27B418u) {
        ctx->pc = 0x27B41Cu;
        goto label_27b41c;
    }
    ctx->pc = 0x27B414u;
    {
        const bool branch_taken_0x27b414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b414) {
            ctx->pc = 0x27B450u;
            goto label_27b450;
        }
    }
    ctx->pc = 0x27B41Cu;
label_27b41c:
    // 0x27b41c: 0x9244000a  lbu         $a0, 0xA($s2)
    ctx->pc = 0x27b41cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
label_27b420:
    // 0x27b420: 0x9263000a  lbu         $v1, 0xA($s3)
    ctx->pc = 0x27b420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
label_27b424:
    // 0x27b424: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_27b428:
    if (ctx->pc == 0x27B428u) {
        ctx->pc = 0x27B42Cu;
        goto label_27b42c;
    }
    ctx->pc = 0x27B424u;
    {
        const bool branch_taken_0x27b424 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27b424) {
            ctx->pc = 0x27B450u;
            goto label_27b450;
        }
    }
    ctx->pc = 0x27B42Cu;
label_27b42c:
    // 0x27b42c: 0x0  nop
    ctx->pc = 0x27b42cu;
    // NOP
label_27b430:
    // 0x27b430: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x27b430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_27b434:
    // 0x27b434: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_27b438:
    if (ctx->pc == 0x27B438u) {
        ctx->pc = 0x27B43Cu;
        goto label_27b43c;
    }
    ctx->pc = 0x27B434u;
    {
        const bool branch_taken_0x27b434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b434) {
            ctx->pc = 0x27B468u;
            goto label_27b468;
        }
    }
    ctx->pc = 0x27B43Cu;
label_27b43c:
    // 0x27b43c: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x27b43cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_27b440:
    // 0x27b440: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x27b440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_27b444:
    // 0x27b444: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_27b448:
    if (ctx->pc == 0x27B448u) {
        ctx->pc = 0x27B44Cu;
        goto label_27b44c;
    }
    ctx->pc = 0x27B444u;
    {
        const bool branch_taken_0x27b444 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27b444) {
            ctx->pc = 0x27B468u;
            goto label_27b468;
        }
    }
    ctx->pc = 0x27B44Cu;
label_27b44c:
    // 0x27b44c: 0x0  nop
    ctx->pc = 0x27b44cu;
    // NOP
label_27b450:
    // 0x27b450: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x27b450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_27b454:
    // 0x27b454: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x27b454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_27b458:
    // 0x27b458: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x27b458u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_27b45c:
    // 0x27b45c: 0x10000412  b           . + 4 + (0x412 << 2)
label_27b460:
    if (ctx->pc == 0x27B460u) {
        ctx->pc = 0x27B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B45Cu;
        // 0x27b460: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B464u;
        goto label_27b464;
    }
    ctx->pc = 0x27B45Cu;
    {
        const bool branch_taken_0x27b45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B45Cu;
        // 0x27b460: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b45c) {
            ctx->pc = 0x27C4A8u;
            goto label_27c4a8;
        }
    }
    ctx->pc = 0x27B464u;
label_27b464:
    // 0x27b464: 0x0  nop
    ctx->pc = 0x27b464u;
    // NOP
label_27b468:
    // 0x27b468: 0x92820076  lbu         $v0, 0x76($s4)
    ctx->pc = 0x27b468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 118)));
label_27b46c:
    // 0x27b46c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_27b470:
    if (ctx->pc == 0x27B470u) {
        ctx->pc = 0x27B474u;
        goto label_27b474;
    }
    ctx->pc = 0x27B46Cu;
    {
        const bool branch_taken_0x27b46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b46c) {
            ctx->pc = 0x27B484u;
            goto label_27b484;
        }
    }
    ctx->pc = 0x27B474u;
label_27b474:
    // 0x27b474: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27b474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27b478:
    // 0x27b478: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27b478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_27b47c:
    // 0x27b47c: 0x10000003  b           . + 4 + (0x3 << 2)
label_27b480:
    if (ctx->pc == 0x27B480u) {
        ctx->pc = 0x27B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B47Cu;
        // 0x27b480: 0xafa20170  sw          $v0, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B484u;
        goto label_27b484;
    }
    ctx->pc = 0x27B47Cu;
    {
        const bool branch_taken_0x27b47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B47Cu;
        // 0x27b480: 0xafa20170  sw          $v0, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b47c) {
            ctx->pc = 0x27B48Cu;
            goto label_27b48c;
        }
    }
    ctx->pc = 0x27B484u;
label_27b484:
    // 0x27b484: 0x92a20001  lbu         $v0, 0x1($s5)
    ctx->pc = 0x27b484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_27b488:
    // 0x27b488: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x27b488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_27b48c:
    // 0x27b48c: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x27b48cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_27b490:
    // 0x27b490: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27b490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27b494:
    // 0x27b494: 0x9642078e  lhu         $v0, 0x78E($s2)
    ctx->pc = 0x27b494u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1934)));
label_27b498:
    // 0x27b498: 0xc096970  jal         func_25A5C0
label_27b49c:
    if (ctx->pc == 0x27B49Cu) {
        ctx->pc = 0x27B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B498u;
        // 0x27b49c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B4A0u;
        goto label_27b4a0;
    }
    ctx->pc = 0x27B498u;
    SET_GPR_U32(ctx, 31, 0x27B4A0u);
    ctx->pc = 0x27B49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B498u;
    // 0x27b49c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x27B498u, 0x27B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4A0u;
label_27b4a0:
    // 0x27b4a0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x27b4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_27b4a4:
    // 0x27b4a4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27b4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27b4a8:
    // 0x27b4a8: 0x9663078c  lhu         $v1, 0x78C($s3)
    ctx->pc = 0x27b4a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1932)));
label_27b4ac:
    // 0x27b4ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_27b4b0:
    // 0x27b4b0: 0x34420fff  ori         $v0, $v0, 0xFFF
    ctx->pc = 0x27b4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4095);
label_27b4b4:
    // 0x27b4b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27b4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27b4b8:
    // 0x27b4b8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x27b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_27b4bc:
    // 0x27b4bc: 0xc096970  jal         func_25A5C0
label_27b4c0:
    if (ctx->pc == 0x27B4C0u) {
        ctx->pc = 0x27B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B4BCu;
        // 0x27b4c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B4C4u;
        goto label_27b4c4;
    }
    ctx->pc = 0x27B4BCu;
    SET_GPR_U32(ctx, 31, 0x27B4C4u);
    ctx->pc = 0x27B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B4BCu;
    // 0x27b4c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x27B4BCu, 0x27B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4C4u;
label_27b4c4:
    // 0x27b4c4: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x27b4c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_27b4c8:
    // 0x27b4c8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x27b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27b4cc:
    // 0x27b4cc: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x27b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_27b4d0:
    // 0x27b4d0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x27b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_27b4d4:
    // 0x27b4d4: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x27b4d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
label_27b4d8:
    // 0x27b4d8: 0x102000f7  beqz        $at, . + 4 + (0xF7 << 2)
label_27b4dc:
    if (ctx->pc == 0x27B4DCu) {
        ctx->pc = 0x27B4E0u;
        goto label_27b4e0;
    }
    ctx->pc = 0x27B4D8u;
    {
        const bool branch_taken_0x27b4d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b4d8) {
            ctx->pc = 0x27B8B8u;
            goto label_27b8b8;
        }
    }
    ctx->pc = 0x27B4E0u;
label_27b4e0:
    // 0x27b4e0: 0x966229de  lhu         $v0, 0x29DE($s3)
    ctx->pc = 0x27b4e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10718)));
label_27b4e4:
    // 0x27b4e4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x27b4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_27b4e8:
    // 0x27b4e8: 0x144000f3  bnez        $v0, . + 4 + (0xF3 << 2)
label_27b4ec:
    if (ctx->pc == 0x27B4ECu) {
        ctx->pc = 0x27B4F0u;
        goto label_27b4f0;
    }
    ctx->pc = 0x27B4E8u;
    {
        const bool branch_taken_0x27b4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b4e8) {
            ctx->pc = 0x27B8B8u;
            goto label_27b8b8;
        }
    }
    ctx->pc = 0x27B4F0u;
label_27b4f0:
    // 0x27b4f0: 0x8e6229c0  lw          $v0, 0x29C0($s3)
    ctx->pc = 0x27b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27b4f4:
    // 0x27b4f4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x27b4f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_27b4f8:
    // 0x27b4f8: 0x104000ef  beqz        $v0, . + 4 + (0xEF << 2)
label_27b4fc:
    if (ctx->pc == 0x27B4FCu) {
        ctx->pc = 0x27B500u;
        goto label_27b500;
    }
    ctx->pc = 0x27B4F8u;
    {
        const bool branch_taken_0x27b4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b4f8) {
            ctx->pc = 0x27B8B8u;
            goto label_27b8b8;
        }
    }
    ctx->pc = 0x27B500u;
label_27b500:
    // 0x27b500: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x27b500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_27b504:
    // 0x27b504: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x27b504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_27b508:
    // 0x27b508: 0x92c50001  lbu         $a1, 0x1($s6)
    ctx->pc = 0x27b508u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
label_27b50c:
    // 0x27b50c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27b50cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b510:
    // 0x27b510: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27b510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27b514:
    // 0x27b514: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x27b514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_27b518:
    // 0x27b518: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27b518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_27b51c:
    // 0x27b51c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_27b520:
    // 0x27b520: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x27b520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_27b524:
    // 0x27b524: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27b524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27b528:
    // 0x27b528: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x27b528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_27b52c:
    // 0x27b52c: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x27b52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_27b530:
    // 0x27b530: 0xc09ec2c  jal         func_27B0B0
label_27b534:
    if (ctx->pc == 0x27B534u) {
        ctx->pc = 0x27B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B530u;
        // 0x27b534: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B538u;
        goto label_27b538;
    }
    ctx->pc = 0x27B530u;
    SET_GPR_U32(ctx, 31, 0x27B538u);
    ctx->pc = 0x27B534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B530u;
    // 0x27b534: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27B530u, 0x27B538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B538u;
label_27b538:
    // 0x27b538: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x27b538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_27b53c:
    // 0x27b53c: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x27b53cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_27b540:
    // 0x27b540: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
label_27b544:
    if (ctx->pc == 0x27B544u) {
        ctx->pc = 0x27B548u;
        goto label_27b548;
    }
    ctx->pc = 0x27B540u;
    {
        const bool branch_taken_0x27b540 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b540) {
            ctx->pc = 0x27B6B0u;
            goto label_27b6b0;
        }
    }
    ctx->pc = 0x27B548u;
label_27b548:
    // 0x27b548: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x27b548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_27b54c:
    // 0x27b54c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x27b54cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_27b550:
    // 0x27b550: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
label_27b554:
    if (ctx->pc == 0x27B554u) {
        ctx->pc = 0x27B558u;
        goto label_27b558;
    }
    ctx->pc = 0x27B550u;
    {
        const bool branch_taken_0x27b550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b550) {
            ctx->pc = 0x27B688u;
            goto label_27b688;
        }
    }
    ctx->pc = 0x27B558u;
label_27b558:
    // 0x27b558: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x27b558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_27b55c:
    // 0x27b55c: 0xafb2020c  sw          $s2, 0x20C($sp)
    ctx->pc = 0x27b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 18));
label_27b560:
    // 0x27b560: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x27b560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
label_27b564:
    // 0x27b564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b568:
    // 0x27b568: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x27b568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
label_27b56c:
    // 0x27b56c: 0x92620790  lbu         $v0, 0x790($s3)
    ctx->pc = 0x27b56cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1936)));
label_27b570:
    // 0x27b570: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_27b574:
    if (ctx->pc == 0x27B574u) {
        ctx->pc = 0x27B578u;
        goto label_27b578;
    }
    ctx->pc = 0x27B570u;
    {
        const bool branch_taken_0x27b570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b570) {
            ctx->pc = 0x27B658u;
            goto label_27b658;
        }
    }
    ctx->pc = 0x27B578u;
label_27b578:
    // 0x27b578: 0x16570037  bne         $s2, $s7, . + 4 + (0x37 << 2)
label_27b57c:
    if (ctx->pc == 0x27B57Cu) {
        ctx->pc = 0x27B580u;
        goto label_27b580;
    }
    ctx->pc = 0x27B578u;
    {
        const bool branch_taken_0x27b578 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 23));
        if (branch_taken_0x27b578) {
            ctx->pc = 0x27B658u;
            goto label_27b658;
        }
    }
    ctx->pc = 0x27B580u;
label_27b580:
    // 0x27b580: 0x92420491  lbu         $v0, 0x491($s2)
    ctx->pc = 0x27b580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1169)));
label_27b584:
    // 0x27b584: 0x1c400034  bgtz        $v0, . + 4 + (0x34 << 2)
label_27b588:
    if (ctx->pc == 0x27B588u) {
        ctx->pc = 0x27B58Cu;
        goto label_27b58c;
    }
    ctx->pc = 0x27B584u;
    {
        const bool branch_taken_0x27b584 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x27b584) {
            ctx->pc = 0x27B658u;
            goto label_27b658;
        }
    }
    ctx->pc = 0x27B58Cu;
label_27b58c:
    // 0x27b58c: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x27b58cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_27b590:
    // 0x27b590: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27b590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_27b594:
    // 0x27b594: 0x24420b80  addiu       $v0, $v0, 0xB80
    ctx->pc = 0x27b594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2944));
label_27b598:
    // 0x27b598: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x27b598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_27b59c:
    // 0x27b59c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27b59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27b5a0:
    // 0x27b5a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27b5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27b5a4:
    // 0x27b5a4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x27b5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27b5a8:
    // 0x27b5a8: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x27b5a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_27b5ac:
    // 0x27b5ac: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x27b5acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_27b5b0:
    // 0x27b5b0: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_27b5b4:
    if (ctx->pc == 0x27B5B4u) {
        ctx->pc = 0x27B5B8u;
        goto label_27b5b8;
    }
    ctx->pc = 0x27B5B0u;
    {
        const bool branch_taken_0x27b5b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b5b0) {
            ctx->pc = 0x27B658u;
            goto label_27b658;
        }
    }
    ctx->pc = 0x27B5B8u;
label_27b5b8:
    // 0x27b5b8: 0x9062001b  lbu         $v0, 0x1B($v1)
    ctx->pc = 0x27b5b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27)));
label_27b5bc:
    // 0x27b5bc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x27b5bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_27b5c0:
    // 0x27b5c0: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
label_27b5c4:
    if (ctx->pc == 0x27B5C4u) {
        ctx->pc = 0x27B5C8u;
        goto label_27b5c8;
    }
    ctx->pc = 0x27B5C0u;
    {
        const bool branch_taken_0x27b5c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b5c0) {
            ctx->pc = 0x27B658u;
            goto label_27b658;
        }
    }
    ctx->pc = 0x27B5C8u;
label_27b5c8:
    // 0x27b5c8: 0xafa00240  sw          $zero, 0x240($sp)
    ctx->pc = 0x27b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 0));
label_27b5cc:
    // 0x27b5cc: 0x27a20244  addiu       $v0, $sp, 0x244
    ctx->pc = 0x27b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
label_27b5d0:
    // 0x27b5d0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x27b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_27b5d4:
    // 0x27b5d4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x27b5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_27b5d8:
    // 0x27b5d8: 0x27a20248  addiu       $v0, $sp, 0x248
    ctx->pc = 0x27b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
label_27b5dc:
    // 0x27b5dc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x27b5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_27b5e0:
    // 0x27b5e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x27b5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_27b5e4:
    // 0x27b5e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27b5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b5e8:
    // 0x27b5e8: 0x27a2024c  addiu       $v0, $sp, 0x24C
    ctx->pc = 0x27b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
label_27b5ec:
    // 0x27b5ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x27b5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27b5f0:
    // 0x27b5f0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x27b5f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_27b5f4:
    // 0x27b5f4: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x27b5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_27b5f8:
    // 0x27b5f8: 0x27a2024e  addiu       $v0, $sp, 0x24E
    ctx->pc = 0x27b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 590));
label_27b5fc:
    // 0x27b5fc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27b5fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27b600:
    // 0x27b600: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x27b600u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
label_27b604:
    // 0x27b604: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27b604u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b608:
    // 0x27b608: 0x27a2024f  addiu       $v0, $sp, 0x24F
    ctx->pc = 0x27b608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 591));
label_27b60c:
    // 0x27b60c: 0xc09fcf4  jal         func_27F3D0
label_27b610:
    if (ctx->pc == 0x27B610u) {
        ctx->pc = 0x27B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B60Cu;
        // 0x27b610: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B614u;
        goto label_27b614;
    }
    ctx->pc = 0x27B60Cu;
    SET_GPR_U32(ctx, 31, 0x27B614u);
    ctx->pc = 0x27B610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B60Cu;
    // 0x27b610: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3D0u, 0x27B60Cu, 0x27B614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B614u;
label_27b614:
    // 0x27b614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b618:
    // 0x27b618: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27b618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27b61c:
    // 0x27b61c: 0xa2420491  sb          $v0, 0x491($s2)
    ctx->pc = 0x27b61cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1169), (uint8_t)GPR_U32(ctx, 2));
label_27b620:
    // 0x27b620: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x27b620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_27b624:
    // 0x27b624: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x27b624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_27b628:
    // 0x27b628: 0xc09f6f8  jal         func_27DBE0
label_27b62c:
    if (ctx->pc == 0x27B62Cu) {
        ctx->pc = 0x27B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B628u;
        // 0x27b62c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B630u;
        goto label_27b630;
    }
    ctx->pc = 0x27B628u;
    SET_GPR_U32(ctx, 31, 0x27B630u);
    ctx->pc = 0x27B62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B628u;
    // 0x27b62c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DBE0u, 0x27B628u, 0x27B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B630u;
label_27b630:
    // 0x27b630: 0x92630640  lbu         $v1, 0x640($s3)
    ctx->pc = 0x27b630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1600)));
label_27b634:
    // 0x27b634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b638:
    // 0x27b638: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_27b63c:
    if (ctx->pc == 0x27B63Cu) {
        ctx->pc = 0x27B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B638u;
        // 0x27b63c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B640u;
        goto label_27b640;
    }
    ctx->pc = 0x27B638u;
    {
        const bool branch_taken_0x27b638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B638u;
        // 0x27b63c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b638) {
            ctx->pc = 0x27B648u;
            goto label_27b648;
        }
    }
    ctx->pc = 0x27B640u;
label_27b640:
    // 0x27b640: 0xc0e2698  jal         func_389A60
label_27b644:
    if (ctx->pc == 0x27B644u) {
        ctx->pc = 0x27B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B640u;
        // 0x27b644: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B648u;
        goto label_27b648;
    }
    ctx->pc = 0x27B640u;
    SET_GPR_U32(ctx, 31, 0x27B648u);
    ctx->pc = 0x27B644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B640u;
    // 0x27b644: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A60u, 0x27B640u, 0x27B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B648u;
label_27b648:
    // 0x27b648: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x27b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_27b64c:
    // 0x27b64c: 0x1000000e  b           . + 4 + (0xE << 2)
label_27b650:
    if (ctx->pc == 0x27B650u) {
        ctx->pc = 0x27B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B64Cu;
        // 0x27b650: 0xa2820058  sb          $v0, 0x58($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 88), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B654u;
        goto label_27b654;
    }
    ctx->pc = 0x27B64Cu;
    {
        const bool branch_taken_0x27b64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B64Cu;
        // 0x27b650: 0xa2820058  sb          $v0, 0x58($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 88), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b64c) {
            ctx->pc = 0x27B688u;
            goto label_27b688;
        }
    }
    ctx->pc = 0x27B654u;
label_27b654:
    // 0x27b654: 0x0  nop
    ctx->pc = 0x27b654u;
    // NOP
label_27b658:
    // 0x27b658: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27b658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27b65c:
    // 0x27b65c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x27b65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_27b660:
    // 0x27b660: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x27b660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_27b664:
    // 0x27b664: 0xc09f6e4  jal         func_27DB90
label_27b668:
    if (ctx->pc == 0x27B668u) {
        ctx->pc = 0x27B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B664u;
        // 0x27b668: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B66Cu;
        goto label_27b66c;
    }
    ctx->pc = 0x27B664u;
    SET_GPR_U32(ctx, 31, 0x27B66Cu);
    ctx->pc = 0x27B668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B664u;
    // 0x27b668: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB90u, 0x27B664u, 0x27B66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B66Cu;
label_27b66c:
    // 0x27b66c: 0x92630640  lbu         $v1, 0x640($s3)
    ctx->pc = 0x27b66cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1600)));
label_27b670:
    // 0x27b670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b674:
    // 0x27b674: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_27b678:
    if (ctx->pc == 0x27B678u) {
        ctx->pc = 0x27B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B674u;
        // 0x27b678: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B67Cu;
        goto label_27b67c;
    }
    ctx->pc = 0x27B674u;
    {
        const bool branch_taken_0x27b674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B674u;
        // 0x27b678: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b674) {
            ctx->pc = 0x27B688u;
            goto label_27b688;
        }
    }
    ctx->pc = 0x27B67Cu;
label_27b67c:
    // 0x27b67c: 0xc0e2698  jal         func_389A60
label_27b680:
    if (ctx->pc == 0x27B680u) {
        ctx->pc = 0x27B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B67Cu;
        // 0x27b680: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B684u;
        goto label_27b684;
    }
    ctx->pc = 0x27B67Cu;
    SET_GPR_U32(ctx, 31, 0x27B684u);
    ctx->pc = 0x27B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B67Cu;
    // 0x27b680: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A60u, 0x27B67Cu, 0x27B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B684u;
label_27b684:
    // 0x27b684: 0x0  nop
    ctx->pc = 0x27b684u;
    // NOP
label_27b688:
    // 0x27b688: 0x12400021  beqz        $s2, . + 4 + (0x21 << 2)
label_27b68c:
    if (ctx->pc == 0x27B68Cu) {
        ctx->pc = 0x27B690u;
        goto label_27b690;
    }
    ctx->pc = 0x27B688u;
    {
        const bool branch_taken_0x27b688 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b688) {
            ctx->pc = 0x27B710u;
            goto label_27b710;
        }
    }
    ctx->pc = 0x27B690u;
label_27b690:
    // 0x27b690: 0x8e5904d4  lw          $t9, 0x4D4($s2)
    ctx->pc = 0x27b690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1236)));
label_27b694:
    // 0x27b694: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27b694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b698:
    // 0x27b698: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x27b698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_27b69c:
    // 0x27b69c: 0x320f809  jalr        $t9
label_27b6a0:
    if (ctx->pc == 0x27B6A0u) {
        ctx->pc = 0x27B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B69Cu;
        // 0x27b6a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B6A4u;
        goto label_27b6a4;
    }
    ctx->pc = 0x27B69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27B6A4u);
        ctx->pc = 0x27B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B69Cu;
        // 0x27b6a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B69Cu, 0x27B6A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27B6A4u;
label_27b6a4:
    // 0x27b6a4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_27b6a8:
    if (ctx->pc == 0x27B6A8u) {
        ctx->pc = 0x27B6ACu;
        goto label_27b6ac;
    }
    ctx->pc = 0x27B6A4u;
    {
        const bool branch_taken_0x27b6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b6a4) {
            ctx->pc = 0x27B710u;
            goto label_27b710;
        }
    }
    ctx->pc = 0x27B6ACu;
label_27b6ac:
    // 0x27b6ac: 0x0  nop
    ctx->pc = 0x27b6acu;
    // NOP
label_27b6b0:
    // 0x27b6b0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x27b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_27b6b4:
    // 0x27b6b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27b6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27b6b8:
    // 0x27b6b8: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x27b6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_27b6bc:
    // 0x27b6bc: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x27b6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_27b6c0:
    // 0x27b6c0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27b6c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27b6c4:
    // 0x27b6c4: 0xafb2020c  sw          $s2, 0x20C($sp)
    ctx->pc = 0x27b6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 18));
label_27b6c8:
    // 0x27b6c8: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x27b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
label_27b6cc:
    // 0x27b6cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27b6d0:
    // 0x27b6d0: 0xc09f70c  jal         func_27DC30
label_27b6d4:
    if (ctx->pc == 0x27B6D4u) {
        ctx->pc = 0x27B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B6D0u;
        // 0x27b6d4: 0xafa20220  sw          $v0, 0x220($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B6D8u;
        goto label_27b6d8;
    }
    ctx->pc = 0x27B6D0u;
    SET_GPR_U32(ctx, 31, 0x27B6D8u);
    ctx->pc = 0x27B6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B6D0u;
    // 0x27b6d4: 0xafa20220  sw          $v0, 0x220($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DC30u, 0x27B6D0u, 0x27B6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B6D8u;
label_27b6d8:
    // 0x27b6d8: 0x92630640  lbu         $v1, 0x640($s3)
    ctx->pc = 0x27b6d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1600)));
label_27b6dc:
    // 0x27b6dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b6e0:
    // 0x27b6e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_27b6e4:
    if (ctx->pc == 0x27B6E4u) {
        ctx->pc = 0x27B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B6E0u;
        // 0x27b6e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B6E8u;
        goto label_27b6e8;
    }
    ctx->pc = 0x27B6E0u;
    {
        const bool branch_taken_0x27b6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B6E0u;
        // 0x27b6e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b6e0) {
            ctx->pc = 0x27B6F0u;
            goto label_27b6f0;
        }
    }
    ctx->pc = 0x27B6E8u;
label_27b6e8:
    // 0x27b6e8: 0xc0e2698  jal         func_389A60
label_27b6ec:
    if (ctx->pc == 0x27B6ECu) {
        ctx->pc = 0x27B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B6E8u;
        // 0x27b6ec: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B6F0u;
        goto label_27b6f0;
    }
    ctx->pc = 0x27B6E8u;
    SET_GPR_U32(ctx, 31, 0x27B6F0u);
    ctx->pc = 0x27B6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B6E8u;
    // 0x27b6ec: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A60u, 0x27B6E8u, 0x27B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B6F0u;
label_27b6f0:
    // 0x27b6f0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_27b6f4:
    if (ctx->pc == 0x27B6F4u) {
        ctx->pc = 0x27B6F8u;
        goto label_27b6f8;
    }
    ctx->pc = 0x27B6F0u;
    {
        const bool branch_taken_0x27b6f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b6f0) {
            ctx->pc = 0x27B710u;
            goto label_27b710;
        }
    }
    ctx->pc = 0x27B6F8u;
label_27b6f8:
    // 0x27b6f8: 0x8e5904d4  lw          $t9, 0x4D4($s2)
    ctx->pc = 0x27b6f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1236)));
label_27b6fc:
    // 0x27b6fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27b6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b700:
    // 0x27b700: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x27b700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_27b704:
    // 0x27b704: 0x320f809  jalr        $t9
label_27b708:
    if (ctx->pc == 0x27B708u) {
        ctx->pc = 0x27B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B704u;
        // 0x27b708: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B70Cu;
        goto label_27b70c;
    }
    ctx->pc = 0x27B704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27B70Cu);
        ctx->pc = 0x27B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B704u;
        // 0x27b708: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B704u, 0x27B70Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27B70Cu;
label_27b70c:
    // 0x27b70c: 0x0  nop
    ctx->pc = 0x27b70cu;
    // NOP
label_27b710:
    // 0x27b710: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x27b710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_27b714:
    // 0x27b714: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x27b714u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_27b718:
    // 0x27b718: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27b718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27b71c:
    // 0x27b71c: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x27b71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
label_27b720:
    // 0x27b720: 0x92a30002  lbu         $v1, 0x2($s5)
    ctx->pc = 0x27b720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_27b724:
    // 0x27b724: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x27b724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_27b728:
    // 0x27b728: 0x8c840044  lw          $a0, 0x44($a0)
    ctx->pc = 0x27b728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_27b72c:
    // 0x27b72c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x27b72cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_27b730:
    // 0x27b730: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x27b730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_27b734:
    // 0x27b734: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x27b734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_27b738:
    // 0x27b738: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x27b738u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_27b73c:
    // 0x27b73c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_27b740:
    if (ctx->pc == 0x27B740u) {
        ctx->pc = 0x27B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B73Cu;
        // 0x27b740: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B744u;
        goto label_27b744;
    }
    ctx->pc = 0x27B73Cu;
    {
        const bool branch_taken_0x27b73c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B73Cu;
        // 0x27b740: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b73c) {
            ctx->pc = 0x27B748u;
            goto label_27b748;
        }
    }
    ctx->pc = 0x27B744u;
label_27b744:
    // 0x27b744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27b744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b748:
    // 0x27b748: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
label_27b74c:
    if (ctx->pc == 0x27B74Cu) {
        ctx->pc = 0x27B750u;
        goto label_27b750;
    }
    ctx->pc = 0x27B748u;
    {
        const bool branch_taken_0x27b748 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b748) {
            ctx->pc = 0x27B7A8u;
            goto label_27b7a8;
        }
    }
    ctx->pc = 0x27B750u;
label_27b750:
    // 0x27b750: 0x924308e8  lbu         $v1, 0x8E8($s2)
    ctx->pc = 0x27b750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
label_27b754:
    // 0x27b754: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27b754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27b758:
    // 0x27b758: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_27b75c:
    if (ctx->pc == 0x27B75Cu) {
        ctx->pc = 0x27B760u;
        goto label_27b760;
    }
    ctx->pc = 0x27B758u;
    {
        const bool branch_taken_0x27b758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b758) {
            ctx->pc = 0x27B788u;
            goto label_27b788;
        }
    }
    ctx->pc = 0x27B760u;
label_27b760:
    // 0x27b760: 0x93a20140  lbu         $v0, 0x140($sp)
    ctx->pc = 0x27b760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 320)));
label_27b764:
    // 0x27b764: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27b764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b768:
    // 0x27b768: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27b768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27b76c:
    // 0x27b76c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27b76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b770:
    // 0x27b770: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x27b770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b774:
    // 0x27b774: 0xc09e92c  jal         func_27A4B0
label_27b778:
    if (ctx->pc == 0x27B778u) {
        ctx->pc = 0x27B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B774u;
        // 0x27b778: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B77Cu;
        goto label_27b77c;
    }
    ctx->pc = 0x27B774u;
    SET_GPR_U32(ctx, 31, 0x27B77Cu);
    ctx->pc = 0x27B778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B774u;
    // 0x27b778: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A4B0u, 0x27B774u, 0x27B77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B77Cu;
label_27b77c:
    // 0x27b77c: 0x10000010  b           . + 4 + (0x10 << 2)
label_27b780:
    if (ctx->pc == 0x27B780u) {
        ctx->pc = 0x27B784u;
        goto label_27b784;
    }
    ctx->pc = 0x27B77Cu;
    {
        const bool branch_taken_0x27b77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b77c) {
            ctx->pc = 0x27B7C0u;
            goto label_27b7c0;
        }
    }
    ctx->pc = 0x27B784u;
label_27b784:
    // 0x27b784: 0x0  nop
    ctx->pc = 0x27b784u;
    // NOP
label_27b788:
    // 0x27b788: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27b788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b78c:
    // 0x27b78c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27b78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27b790:
    // 0x27b790: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27b790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b794:
    // 0x27b794: 0xc09eac0  jal         func_27AB00
label_27b798:
    if (ctx->pc == 0x27B798u) {
        ctx->pc = 0x27B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B794u;
        // 0x27b798: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B79Cu;
        goto label_27b79c;
    }
    ctx->pc = 0x27B794u;
    SET_GPR_U32(ctx, 31, 0x27B79Cu);
    ctx->pc = 0x27B798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B794u;
    // 0x27b798: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AB00u, 0x27B794u, 0x27B79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B79Cu;
label_27b79c:
    // 0x27b79c: 0x10000008  b           . + 4 + (0x8 << 2)
label_27b7a0:
    if (ctx->pc == 0x27B7A0u) {
        ctx->pc = 0x27B7A4u;
        goto label_27b7a4;
    }
    ctx->pc = 0x27B79Cu;
    {
        const bool branch_taken_0x27b79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b79c) {
            ctx->pc = 0x27B7C0u;
            goto label_27b7c0;
        }
    }
    ctx->pc = 0x27B7A4u;
label_27b7a4:
    // 0x27b7a4: 0x0  nop
    ctx->pc = 0x27b7a4u;
    // NOP
label_27b7a8:
    // 0x27b7a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27b7a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b7ac:
    // 0x27b7ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27b7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27b7b0:
    // 0x27b7b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27b7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b7b4:
    // 0x27b7b4: 0xc09eb8c  jal         func_27AE30
label_27b7b8:
    if (ctx->pc == 0x27B7B8u) {
        ctx->pc = 0x27B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7B4u;
        // 0x27b7b8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B7BCu;
        goto label_27b7bc;
    }
    ctx->pc = 0x27B7B4u;
    SET_GPR_U32(ctx, 31, 0x27B7BCu);
    ctx->pc = 0x27B7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B7B4u;
    // 0x27b7b8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AE30u, 0x27B7B4u, 0x27B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B7BCu;
label_27b7bc:
    // 0x27b7bc: 0x0  nop
    ctx->pc = 0x27b7bcu;
    // NOP
label_27b7c0:
    // 0x27b7c0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_27b7c4:
    if (ctx->pc == 0x27B7C4u) {
        ctx->pc = 0x27B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7C0u;
        // 0x27b7c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B7C8u;
        goto label_27b7c8;
    }
    ctx->pc = 0x27B7C0u;
    {
        const bool branch_taken_0x27b7c0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7C0u;
        // 0x27b7c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b7c0) {
            ctx->pc = 0x27B7D4u;
            goto label_27b7d4;
        }
    }
    ctx->pc = 0x27B7C8u;
label_27b7c8:
    // 0x27b7c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27b7c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b7cc:
    // 0x27b7cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_27b7d0:
    if (ctx->pc == 0x27B7D0u) {
        ctx->pc = 0x27B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7CCu;
        // 0x27b7d0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B7D4u;
        goto label_27b7d4;
    }
    ctx->pc = 0x27B7CCu;
    {
        const bool branch_taken_0x27b7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7CCu;
        // 0x27b7d0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b7cc) {
            ctx->pc = 0x27B7ECu;
            goto label_27b7ec;
        }
    }
    ctx->pc = 0x27B7D4u;
label_27b7d4:
    // 0x27b7d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27b7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_27b7d8:
    // 0x27b7d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27b7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27b7dc:
    // 0x27b7dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27b7dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b7e0:
    // 0x27b7e0: 0x0  nop
    ctx->pc = 0x27b7e0u;
    // NOP
label_27b7e4:
    // 0x27b7e4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x27b7e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_27b7e8:
    // 0x27b7e8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x27b7e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_27b7ec:
    // 0x27b7ec: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x27b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_27b7f0:
    // 0x27b7f0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x27b7f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_27b7f4:
    // 0x27b7f4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_27b7f8:
    if (ctx->pc == 0x27B7F8u) {
        ctx->pc = 0x27B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7F4u;
        // 0x27b7f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B7FCu;
        goto label_27b7fc;
    }
    ctx->pc = 0x27B7F4u;
    {
        const bool branch_taken_0x27b7f4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7F4u;
        // 0x27b7f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b7f4) {
            ctx->pc = 0x27B808u;
            goto label_27b808;
        }
    }
    ctx->pc = 0x27B7FCu;
label_27b7fc:
    // 0x27b7fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27b7fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b800:
    // 0x27b800: 0x10000007  b           . + 4 + (0x7 << 2)
label_27b804:
    if (ctx->pc == 0x27B804u) {
        ctx->pc = 0x27B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B800u;
        // 0x27b804: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B808u;
        goto label_27b808;
    }
    ctx->pc = 0x27B800u;
    {
        const bool branch_taken_0x27b800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B800u;
        // 0x27b804: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b800) {
            ctx->pc = 0x27B820u;
            goto label_27b820;
        }
    }
    ctx->pc = 0x27B808u;
label_27b808:
    // 0x27b808: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27b808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_27b80c:
    // 0x27b80c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27b80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27b810:
    // 0x27b810: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27b810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b814:
    // 0x27b814: 0x0  nop
    ctx->pc = 0x27b814u;
    // NOP
label_27b818:
    // 0x27b818: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27b818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_27b81c:
    // 0x27b81c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27b81cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_27b820:
    // 0x27b820: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x27b820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_27b824:
    // 0x27b824: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x27b824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_27b828:
    // 0x27b828: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x27b828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_27b82c:
    // 0x27b82c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27b82cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b830:
    // 0x27b830: 0x0  nop
    ctx->pc = 0x27b830u;
    // NOP
label_27b834:
    // 0x27b834: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27b834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_27b838:
    // 0x27b838: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_27b83c:
    if (ctx->pc == 0x27B83Cu) {
        ctx->pc = 0x27B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B838u;
        // 0x27b83c: 0x46001042  mul.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B840u;
        goto label_27b840;
    }
    ctx->pc = 0x27B838u;
    {
        const bool branch_taken_0x27b838 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B838u;
        // 0x27b83c: 0x46001042  mul.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b838) {
            ctx->pc = 0x27B84Cu;
            goto label_27b84c;
        }
    }
    ctx->pc = 0x27B840u;
label_27b840:
    // 0x27b840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27b840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b844:
    // 0x27b844: 0x10000008  b           . + 4 + (0x8 << 2)
label_27b848:
    if (ctx->pc == 0x27B848u) {
        ctx->pc = 0x27B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B844u;
        // 0x27b848: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B84Cu;
        goto label_27b84c;
    }
    ctx->pc = 0x27B844u;
    {
        const bool branch_taken_0x27b844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B844u;
        // 0x27b848: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b844) {
            ctx->pc = 0x27B868u;
            goto label_27b868;
        }
    }
    ctx->pc = 0x27B84Cu;
label_27b84c:
    // 0x27b84c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x27b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_27b850:
    // 0x27b850: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27b850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_27b854:
    // 0x27b854: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27b854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27b858:
    // 0x27b858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27b858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b85c:
    // 0x27b85c: 0x0  nop
    ctx->pc = 0x27b85cu;
    // NOP
label_27b860:
    // 0x27b860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27b860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_27b864:
    // 0x27b864: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27b864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_27b868:
    // 0x27b868: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x27b868u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27b86c:
    // 0x27b86c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x27b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_27b870:
    // 0x27b870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27b870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b874:
    // 0x27b874: 0x0  nop
    ctx->pc = 0x27b874u;
    // NOP
label_27b878:
    // 0x27b878: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27b878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b87c:
    // 0x27b87c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_27b880:
    if (ctx->pc == 0x27B880u) {
        ctx->pc = 0x27B884u;
        goto label_27b884;
    }
    ctx->pc = 0x27B87Cu;
    {
        const bool branch_taken_0x27b87c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b87c) {
            ctx->pc = 0x27B894u;
            goto label_27b894;
        }
    }
    ctx->pc = 0x27B884u;
label_27b884:
    // 0x27b884: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27b884u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27b888:
    // 0x27b888: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27b888u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27b88c:
    // 0x27b88c: 0x10000008  b           . + 4 + (0x8 << 2)
label_27b890:
    if (ctx->pc == 0x27B890u) {
        ctx->pc = 0x27B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B88Cu;
        // 0x27b890: 0xae830054  sw          $v1, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B894u;
        goto label_27b894;
    }
    ctx->pc = 0x27B88Cu;
    {
        const bool branch_taken_0x27b88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B88Cu;
        // 0x27b890: 0xae830054  sw          $v1, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b88c) {
            ctx->pc = 0x27B8B0u;
            goto label_27b8b0;
        }
    }
    ctx->pc = 0x27B894u;
label_27b894:
    // 0x27b894: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27b894u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27b898:
    // 0x27b898: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27b898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27b89c:
    // 0x27b89c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27b89cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27b8a0:
    // 0x27b8a0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27b8a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27b8a4:
    // 0x27b8a4: 0x0  nop
    ctx->pc = 0x27b8a4u;
    // NOP
label_27b8a8:
    // 0x27b8a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27b8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27b8ac:
    // 0x27b8ac: 0xae830054  sw          $v1, 0x54($s4)
    ctx->pc = 0x27b8acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
label_27b8b0:
    // 0x27b8b0: 0x10000187  b           . + 4 + (0x187 << 2)
label_27b8b4:
    if (ctx->pc == 0x27B8B4u) {
        ctx->pc = 0x27B8B8u;
        goto label_27b8b8;
    }
    ctx->pc = 0x27B8B0u;
    {
        const bool branch_taken_0x27b8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b8b0) {
            ctx->pc = 0x27BED0u;
            goto label_27bed0;
        }
    }
    ctx->pc = 0x27B8B8u;
label_27b8b8:
    // 0x27b8b8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x27b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_27b8bc:
    // 0x27b8bc: 0x8f87892c  lw          $a3, -0x76D4($gp)
    ctx->pc = 0x27b8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936876)));
label_27b8c0:
    // 0x27b8c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27b8c4:
    // 0x27b8c4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x27b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_27b8c8:
    // 0x27b8c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27b8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27b8cc:
    // 0x27b8cc: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x27b8ccu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_27b8d0:
    // 0x27b8d0: 0xa3a20210  sb          $v0, 0x210($sp)
    ctx->pc = 0x27b8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 528), (uint8_t)GPR_U32(ctx, 2));
label_27b8d4:
    // 0x27b8d4: 0x92c60001  lbu         $a2, 0x1($s6)
    ctx->pc = 0x27b8d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
label_27b8d8:
    // 0x27b8d8: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x27b8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_27b8dc:
    // 0x27b8dc: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x27b8dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_27b8e0:
    // 0x27b8e0: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x27b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_27b8e4:
    // 0x27b8e4: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x27b8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_27b8e8:
    // 0x27b8e8: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x27b8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_27b8ec:
    // 0x27b8ec: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x27b8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_27b8f0:
    // 0x27b8f0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x27b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_27b8f4:
    // 0x27b8f4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x27b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27b8f8:
    // 0x27b8f8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x27b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_27b8fc:
    // 0x27b8fc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x27b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27b900:
    // 0x27b900: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_27b904:
    if (ctx->pc == 0x27B904u) {
        ctx->pc = 0x27B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B900u;
        // 0x27b904: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B908u;
        goto label_27b908;
    }
    ctx->pc = 0x27B900u;
    {
        const bool branch_taken_0x27b900 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B900u;
        // 0x27b904: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b900) {
            ctx->pc = 0x27B910u;
            goto label_27b910;
        }
    }
    ctx->pc = 0x27B908u;
label_27b908:
    // 0x27b908: 0x10000007  b           . + 4 + (0x7 << 2)
label_27b90c:
    if (ctx->pc == 0x27B90Cu) {
        ctx->pc = 0x27B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B908u;
        // 0x27b90c: 0xaf92892c  sw          $s2, -0x76D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B910u;
        goto label_27b910;
    }
    ctx->pc = 0x27B908u;
    {
        const bool branch_taken_0x27b908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B908u;
        // 0x27b90c: 0xaf92892c  sw          $s2, -0x76D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b908) {
            ctx->pc = 0x27B928u;
            goto label_27b928;
        }
    }
    ctx->pc = 0x27B910u;
label_27b910:
    // 0x27b910: 0x90e329d0  lbu         $v1, 0x29D0($a3)
    ctx->pc = 0x27b910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10704)));
label_27b914:
    // 0x27b914: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x27b914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_27b918:
    // 0x27b918: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_27b91c:
    if (ctx->pc == 0x27B91Cu) {
        ctx->pc = 0x27B920u;
        goto label_27b920;
    }
    ctx->pc = 0x27B918u;
    {
        const bool branch_taken_0x27b918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27b918) {
            ctx->pc = 0x27B928u;
            goto label_27b928;
        }
    }
    ctx->pc = 0x27B920u;
label_27b920:
    // 0x27b920: 0xaf92892c  sw          $s2, -0x76D4($gp)
    ctx->pc = 0x27b920u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 18));
label_27b924:
    // 0x27b924: 0x0  nop
    ctx->pc = 0x27b924u;
    // NOP
label_27b928:
    // 0x27b928: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x27b928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_27b92c:
    // 0x27b92c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x27b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_27b930:
    // 0x27b930: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x27b930u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_27b934:
    // 0x27b934: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_27b938:
    if (ctx->pc == 0x27B938u) {
        ctx->pc = 0x27B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B934u;
        // 0x27b938: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B93Cu;
        goto label_27b93c;
    }
    ctx->pc = 0x27B934u;
    {
        const bool branch_taken_0x27b934 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B934u;
        // 0x27b938: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b934) {
            ctx->pc = 0x27B940u;
            goto label_27b940;
        }
    }
    ctx->pc = 0x27B93Cu;
label_27b93c:
    // 0x27b93c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x27b93cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b940:
    // 0x27b940: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_27b944:
    if (ctx->pc == 0x27B944u) {
        ctx->pc = 0x27B948u;
        goto label_27b948;
    }
    ctx->pc = 0x27B940u;
    {
        const bool branch_taken_0x27b940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b940) {
            ctx->pc = 0x27B9A0u;
            goto label_27b9a0;
        }
    }
    ctx->pc = 0x27B948u;
label_27b948:
    // 0x27b948: 0x924329d0  lbu         $v1, 0x29D0($s2)
    ctx->pc = 0x27b948u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10704)));
label_27b94c:
    // 0x27b94c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x27b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_27b950:
    // 0x27b950: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_27b954:
    if (ctx->pc == 0x27B954u) {
        ctx->pc = 0x27B958u;
        goto label_27b958;
    }
    ctx->pc = 0x27B950u;
    {
        const bool branch_taken_0x27b950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b950) {
            ctx->pc = 0x27B980u;
            goto label_27b980;
        }
    }
    ctx->pc = 0x27B958u;
label_27b958:
    // 0x27b958: 0x93a20140  lbu         $v0, 0x140($sp)
    ctx->pc = 0x27b958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 320)));
label_27b95c:
    // 0x27b95c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27b95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27b960:
    // 0x27b960: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27b960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b964:
    // 0x27b964: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x27b964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b968:
    // 0x27b968: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27b968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b96c:
    // 0x27b96c: 0xc09e92c  jal         func_27A4B0
label_27b970:
    if (ctx->pc == 0x27B970u) {
        ctx->pc = 0x27B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B96Cu;
        // 0x27b970: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B974u;
        goto label_27b974;
    }
    ctx->pc = 0x27B96Cu;
    SET_GPR_U32(ctx, 31, 0x27B974u);
    ctx->pc = 0x27B970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B96Cu;
    // 0x27b970: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A4B0u, 0x27B96Cu, 0x27B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B974u;
label_27b974:
    // 0x27b974: 0x10000010  b           . + 4 + (0x10 << 2)
label_27b978:
    if (ctx->pc == 0x27B978u) {
        ctx->pc = 0x27B97Cu;
        goto label_27b97c;
    }
    ctx->pc = 0x27B974u;
    {
        const bool branch_taken_0x27b974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b974) {
            ctx->pc = 0x27B9B8u;
            goto label_27b9b8;
        }
    }
    ctx->pc = 0x27B97Cu;
label_27b97c:
    // 0x27b97c: 0x0  nop
    ctx->pc = 0x27b97cu;
    // NOP
label_27b980:
    // 0x27b980: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27b980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27b984:
    // 0x27b984: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27b984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b988:
    // 0x27b988: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x27b988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b98c:
    // 0x27b98c: 0xc09eac0  jal         func_27AB00
label_27b990:
    if (ctx->pc == 0x27B990u) {
        ctx->pc = 0x27B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B98Cu;
        // 0x27b990: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B994u;
        goto label_27b994;
    }
    ctx->pc = 0x27B98Cu;
    SET_GPR_U32(ctx, 31, 0x27B994u);
    ctx->pc = 0x27B990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B98Cu;
    // 0x27b990: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AB00u, 0x27B98Cu, 0x27B994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B994u;
label_27b994:
    // 0x27b994: 0x10000008  b           . + 4 + (0x8 << 2)
label_27b998:
    if (ctx->pc == 0x27B998u) {
        ctx->pc = 0x27B99Cu;
        goto label_27b99c;
    }
    ctx->pc = 0x27B994u;
    {
        const bool branch_taken_0x27b994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b994) {
            ctx->pc = 0x27B9B8u;
            goto label_27b9b8;
        }
    }
    ctx->pc = 0x27B99Cu;
label_27b99c:
    // 0x27b99c: 0x0  nop
    ctx->pc = 0x27b99cu;
    // NOP
label_27b9a0:
    // 0x27b9a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27b9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27b9a4:
    // 0x27b9a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27b9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b9a8:
    // 0x27b9a8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x27b9a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b9ac:
    // 0x27b9ac: 0xc09eb8c  jal         func_27AE30
label_27b9b0:
    if (ctx->pc == 0x27B9B0u) {
        ctx->pc = 0x27B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9ACu;
        // 0x27b9b0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B9B4u;
        goto label_27b9b4;
    }
    ctx->pc = 0x27B9ACu;
    SET_GPR_U32(ctx, 31, 0x27B9B4u);
    ctx->pc = 0x27B9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B9ACu;
    // 0x27b9b0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AE30u, 0x27B9ACu, 0x27B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B9B4u;
label_27b9b4:
    // 0x27b9b4: 0x0  nop
    ctx->pc = 0x27b9b4u;
    // NOP
label_27b9b8:
    // 0x27b9b8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x27b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_27b9bc:
    // 0x27b9bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27b9bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b9c0:
    // 0x27b9c0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x27b9c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27b9c4:
    // 0x27b9c4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_27b9c8:
    if (ctx->pc == 0x27B9C8u) {
        ctx->pc = 0x27B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9C4u;
        // 0x27b9c8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B9CCu;
        goto label_27b9cc;
    }
    ctx->pc = 0x27B9C4u;
    {
        const bool branch_taken_0x27b9c4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9C4u;
        // 0x27b9c8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b9c4) {
            ctx->pc = 0x27B9D8u;
            goto label_27b9d8;
        }
    }
    ctx->pc = 0x27B9CCu;
label_27b9cc:
    // 0x27b9cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27b9ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b9d0:
    // 0x27b9d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_27b9d4:
    if (ctx->pc == 0x27B9D4u) {
        ctx->pc = 0x27B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9D0u;
        // 0x27b9d4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B9D8u;
        goto label_27b9d8;
    }
    ctx->pc = 0x27B9D0u;
    {
        const bool branch_taken_0x27b9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9D0u;
        // 0x27b9d4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b9d0) {
            ctx->pc = 0x27B9F4u;
            goto label_27b9f4;
        }
    }
    ctx->pc = 0x27B9D8u;
label_27b9d8:
    // 0x27b9d8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x27b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_27b9dc:
    // 0x27b9dc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x27b9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_27b9e0:
    // 0x27b9e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27b9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27b9e4:
    // 0x27b9e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27b9e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b9e8:
    // 0x27b9e8: 0x0  nop
    ctx->pc = 0x27b9e8u;
    // NOP
label_27b9ec:
    // 0x27b9ec: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x27b9ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_27b9f0:
    // 0x27b9f0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x27b9f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_27b9f4:
    // 0x27b9f4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x27b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_27b9f8:
    // 0x27b9f8: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x27b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_27b9fc:
    // 0x27b9fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27b9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27ba00:
    // 0x27ba00: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x27ba00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_27ba04:
    // 0x27ba04: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x27ba04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_27ba08:
    // 0x27ba08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27ba08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27ba0c:
    // 0x27ba0c: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x27ba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_27ba10:
    // 0x27ba10: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27ba10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_27ba14:
    // 0x27ba14: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x27ba14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_27ba18:
    // 0x27ba18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27ba18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27ba1c:
    // 0x27ba1c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27ba1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_27ba20:
    // 0x27ba20: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x27ba20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_27ba24:
    // 0x27ba24: 0x0  nop
    ctx->pc = 0x27ba24u;
    // NOP
label_27ba28:
    // 0x27ba28: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x27ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_27ba2c:
    // 0x27ba2c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x27ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_27ba30:
    // 0x27ba30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x27ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27ba34:
    // 0x27ba34: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x27ba34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
label_27ba38:
    // 0x27ba38: 0x96830068  lhu         $v1, 0x68($s4)
    ctx->pc = 0x27ba38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 104)));
label_27ba3c:
    // 0x27ba3c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x27ba3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_27ba40:
    // 0x27ba40: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x27ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27ba44:
    // 0x27ba44: 0xc096970  jal         func_25A5C0
label_27ba48:
    if (ctx->pc == 0x27BA48u) {
        ctx->pc = 0x27BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA44u;
        // 0x27ba48: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA4Cu;
        goto label_27ba4c;
    }
    ctx->pc = 0x27BA44u;
    SET_GPR_U32(ctx, 31, 0x27BA4Cu);
    ctx->pc = 0x27BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA44u;
    // 0x27ba48: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x27BA44u, 0x27BA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA4Cu;
label_27ba4c:
    // 0x27ba4c: 0xa6820068  sh          $v0, 0x68($s4)
    ctx->pc = 0x27ba4cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 104), (uint16_t)GPR_U32(ctx, 2));
label_27ba50:
    // 0x27ba50: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x27ba50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_27ba54:
    // 0x27ba54: 0x92430235  lbu         $v1, 0x235($s2)
    ctx->pc = 0x27ba54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 565)));
label_27ba58:
    // 0x27ba58: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x27ba58u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_27ba5c:
    // 0x27ba5c: 0x9682006a  lhu         $v0, 0x6A($s4)
    ctx->pc = 0x27ba5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 106)));
label_27ba60:
    // 0x27ba60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27ba64:
    // 0x27ba64: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x27ba64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27ba68:
    // 0x27ba68: 0xc096970  jal         func_25A5C0
label_27ba6c:
    if (ctx->pc == 0x27BA6Cu) {
        ctx->pc = 0x27BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA68u;
        // 0x27ba6c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA70u;
        goto label_27ba70;
    }
    ctx->pc = 0x27BA68u;
    SET_GPR_U32(ctx, 31, 0x27BA70u);
    ctx->pc = 0x27BA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA68u;
    // 0x27ba6c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x27BA68u, 0x27BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA70u;
label_27ba70:
    // 0x27ba70: 0xa682006a  sh          $v0, 0x6A($s4)
    ctx->pc = 0x27ba70u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 106), (uint16_t)GPR_U32(ctx, 2));
label_27ba74:
    // 0x27ba74: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x27ba74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_27ba78:
    // 0x27ba78: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x27ba78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27ba7c:
    // 0x27ba7c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x27ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_27ba80:
    // 0x27ba80: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x27ba80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_27ba84:
    // 0x27ba84: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x27ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_27ba88:
    // 0x27ba88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ba88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27ba8c:
    // 0x27ba8c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x27ba8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_27ba90:
    // 0x27ba90: 0x34628889  ori         $v0, $v1, 0x8889
    ctx->pc = 0x27ba90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_27ba94:
    // 0x27ba94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27ba94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27ba98:
    // 0x27ba98: 0x0  nop
    ctx->pc = 0x27ba98u;
    // NOP
label_27ba9c:
    // 0x27ba9c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27ba9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_27baa0:
    // 0x27baa0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27baa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27baa4:
    // 0x27baa4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_27baa8:
    if (ctx->pc == 0x27BAA8u) {
        ctx->pc = 0x27BAACu;
        goto label_27baac;
    }
    ctx->pc = 0x27BAA4u;
    {
        const bool branch_taken_0x27baa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27baa4) {
            ctx->pc = 0x27BABCu;
            goto label_27babc;
        }
    }
    ctx->pc = 0x27BAACu;
label_27baac:
    // 0x27baac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27baacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27bab0:
    // 0x27bab0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27bab0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27bab4:
    // 0x27bab4: 0x10000008  b           . + 4 + (0x8 << 2)
label_27bab8:
    if (ctx->pc == 0x27BAB8u) {
        ctx->pc = 0x27BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAB4u;
        // 0x27bab8: 0xa683006c  sh          $v1, 0x6C($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 108), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BABCu;
        goto label_27babc;
    }
    ctx->pc = 0x27BAB4u;
    {
        const bool branch_taken_0x27bab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAB4u;
        // 0x27bab8: 0xa683006c  sh          $v1, 0x6C($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 108), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bab4) {
            ctx->pc = 0x27BAD8u;
            goto label_27bad8;
        }
    }
    ctx->pc = 0x27BABCu;
label_27babc:
    // 0x27babc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27babcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27bac0:
    // 0x27bac0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27bac4:
    // 0x27bac4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27bac4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27bac8:
    // 0x27bac8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27bac8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27bacc:
    // 0x27bacc: 0x0  nop
    ctx->pc = 0x27baccu;
    // NOP
label_27bad0:
    // 0x27bad0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27bad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27bad4:
    // 0x27bad4: 0xa683006c  sh          $v1, 0x6C($s4)
    ctx->pc = 0x27bad4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 108), (uint16_t)GPR_U32(ctx, 3));
label_27bad8:
    // 0x27bad8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x27bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_27badc:
    // 0x27badc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x27badcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27bae0:
    // 0x27bae0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x27bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_27bae4:
    // 0x27bae4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x27bae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_27bae8:
    // 0x27bae8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x27bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_27baec:
    // 0x27baec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27baecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27baf0:
    // 0x27baf0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x27baf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_27baf4:
    // 0x27baf4: 0x34628889  ori         $v0, $v1, 0x8889
    ctx->pc = 0x27baf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_27baf8:
    // 0x27baf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27baf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27bafc:
    // 0x27bafc: 0x0  nop
    ctx->pc = 0x27bafcu;
    // NOP
label_27bb00:
    // 0x27bb00: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27bb00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_27bb04:
    // 0x27bb04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27bb04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27bb08:
    // 0x27bb08: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_27bb0c:
    if (ctx->pc == 0x27BB0Cu) {
        ctx->pc = 0x27BB10u;
        goto label_27bb10;
    }
    ctx->pc = 0x27BB08u;
    {
        const bool branch_taken_0x27bb08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bb08) {
            ctx->pc = 0x27BB20u;
            goto label_27bb20;
        }
    }
    ctx->pc = 0x27BB10u;
label_27bb10:
    // 0x27bb10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27bb10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27bb14:
    // 0x27bb14: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27bb14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27bb18:
    // 0x27bb18: 0x10000008  b           . + 4 + (0x8 << 2)
label_27bb1c:
    if (ctx->pc == 0x27BB1Cu) {
        ctx->pc = 0x27BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB18u;
        // 0x27bb1c: 0xa683006e  sh          $v1, 0x6E($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 110), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BB20u;
        goto label_27bb20;
    }
    ctx->pc = 0x27BB18u;
    {
        const bool branch_taken_0x27bb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB18u;
        // 0x27bb1c: 0xa683006e  sh          $v1, 0x6E($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 110), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb18) {
            ctx->pc = 0x27BB3Cu;
            goto label_27bb3c;
        }
    }
    ctx->pc = 0x27BB20u;
label_27bb20:
    // 0x27bb20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27bb20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27bb24:
    // 0x27bb24: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27bb28:
    // 0x27bb28: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27bb28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27bb2c:
    // 0x27bb2c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27bb2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27bb30:
    // 0x27bb30: 0x0  nop
    ctx->pc = 0x27bb30u;
    // NOP
label_27bb34:
    // 0x27bb34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27bb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27bb38:
    // 0x27bb38: 0xa683006e  sh          $v1, 0x6E($s4)
    ctx->pc = 0x27bb38u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 110), (uint16_t)GPR_U32(ctx, 3));
label_27bb3c:
    // 0x27bb3c: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x27bb3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_27bb40:
    // 0x27bb40: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x27bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_27bb44:
    // 0x27bb44: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x27bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_27bb48:
    // 0x27bb48: 0x24635120  addiu       $v1, $v1, 0x5120
    ctx->pc = 0x27bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20768));
label_27bb4c:
    // 0x27bb4c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x27bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_27bb50:
    // 0x27bb50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27bb54:
    // 0x27bb54: 0x9045000e  lbu         $a1, 0xE($v0)
    ctx->pc = 0x27bb54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
label_27bb58:
    // 0x27bb58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x27bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27bb5c:
    // 0x27bb5c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_27bb60:
    if (ctx->pc == 0x27BB60u) {
        ctx->pc = 0x27BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB5Cu;
        // 0x27bb60: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BB64u;
        goto label_27bb64;
    }
    ctx->pc = 0x27BB5Cu;
    {
        const bool branch_taken_0x27bb5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB5Cu;
        // 0x27bb60: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb5c) {
            ctx->pc = 0x27BB78u;
            goto label_27bb78;
        }
    }
    ctx->pc = 0x27BB64u;
label_27bb64:
    // 0x27bb64: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x27bb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_27bb68:
    // 0x27bb68: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x27bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_27bb6c:
    // 0x27bb6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x27bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27bb70:
    // 0x27bb70: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x27bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_27bb74:
    // 0x27bb74: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x27bb74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_27bb78:
    // 0x27bb78: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x27bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_27bb7c:
    // 0x27bb7c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x27bb7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_27bb80:
    // 0x27bb80: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x27bb80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_27bb84:
    // 0x27bb84: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
label_27bb88:
    if (ctx->pc == 0x27BB88u) {
        ctx->pc = 0x27BB8Cu;
        goto label_27bb8c;
    }
    ctx->pc = 0x27BB84u;
    {
        const bool branch_taken_0x27bb84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bb84) {
            ctx->pc = 0x27BC60u;
            goto label_27bc60;
        }
    }
    ctx->pc = 0x27BB8Cu;
label_27bb8c:
    // 0x27bb8c: 0x96a50006  lhu         $a1, 0x6($s5)
    ctx->pc = 0x27bb8cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
label_27bb90:
    // 0x27bb90: 0x3401c350  ori         $at, $zero, 0xC350
    ctx->pc = 0x27bb90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
label_27bb94:
    // 0x27bb94: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x27bb94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27bb98:
    // 0x27bb98: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_27bb9c:
    if (ctx->pc == 0x27BB9Cu) {
        ctx->pc = 0x27BBA0u;
        goto label_27bba0;
    }
    ctx->pc = 0x27BB98u;
    {
        const bool branch_taken_0x27bb98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bb98) {
            ctx->pc = 0x27BC60u;
            goto label_27bc60;
        }
    }
    ctx->pc = 0x27BBA0u;
label_27bba0:
    // 0x27bba0: 0x96a40008  lhu         $a0, 0x8($s5)
    ctx->pc = 0x27bba0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
label_27bba4:
    // 0x27bba4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x27bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_27bba8:
    // 0x27bba8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x27bba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_27bbac:
    // 0x27bbac: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_27bbb0:
    if (ctx->pc == 0x27BBB0u) {
        ctx->pc = 0x27BBB4u;
        goto label_27bbb4;
    }
    ctx->pc = 0x27BBACu;
    {
        const bool branch_taken_0x27bbac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bbac) {
            ctx->pc = 0x27BBC8u;
            goto label_27bbc8;
        }
    }
    ctx->pc = 0x27BBB4u;
label_27bbb4:
    // 0x27bbb4: 0x9683006a  lhu         $v1, 0x6A($s4)
    ctx->pc = 0x27bbb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 106)));
label_27bbb8:
    // 0x27bbb8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x27bbb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_27bbbc:
    // 0x27bbbc: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_27bbc0:
    if (ctx->pc == 0x27BBC0u) {
        ctx->pc = 0x27BBC4u;
        goto label_27bbc4;
    }
    ctx->pc = 0x27BBBCu;
    {
        const bool branch_taken_0x27bbbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bbbc) {
            ctx->pc = 0x27BC60u;
            goto label_27bc60;
        }
    }
    ctx->pc = 0x27BBC4u;
label_27bbc4:
    // 0x27bbc4: 0x0  nop
    ctx->pc = 0x27bbc4u;
    // NOP
label_27bbc8:
    // 0x27bbc8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27bbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_27bbcc:
    // 0x27bbcc: 0xafa301f0  sw          $v1, 0x1F0($sp)
    ctx->pc = 0x27bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
label_27bbd0:
    // 0x27bbd0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x27bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_27bbd4:
    // 0x27bbd4: 0xafb2020c  sw          $s2, 0x20C($sp)
    ctx->pc = 0x27bbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 18));
label_27bbd8:
    // 0x27bbd8: 0xafb101dc  sw          $s1, 0x1DC($sp)
    ctx->pc = 0x27bbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 17));
label_27bbdc:
    // 0x27bbdc: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x27bbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
label_27bbe0:
    // 0x27bbe0: 0x92c30004  lbu         $v1, 0x4($s6)
    ctx->pc = 0x27bbe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
label_27bbe4:
    // 0x27bbe4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_27bbe8:
    if (ctx->pc == 0x27BBE8u) {
        ctx->pc = 0x27BBECu;
        goto label_27bbec;
    }
    ctx->pc = 0x27BBE4u;
    {
        const bool branch_taken_0x27bbe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bbe4) {
            ctx->pc = 0x27BBF0u;
            goto label_27bbf0;
        }
    }
    ctx->pc = 0x27BBECu;
label_27bbec:
    // 0x27bbec: 0xa3a30190  sb          $v1, 0x190($sp)
    ctx->pc = 0x27bbecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 400), (uint8_t)GPR_U32(ctx, 3));
label_27bbf0:
    // 0x27bbf0: 0x9683006a  lhu         $v1, 0x6A($s4)
    ctx->pc = 0x27bbf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 106)));
label_27bbf4:
    // 0x27bbf4: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x27bbf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_27bbf8:
    // 0x27bbf8: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_27bbfc:
    if (ctx->pc == 0x27BBFCu) {
        ctx->pc = 0x27BC00u;
        goto label_27bc00;
    }
    ctx->pc = 0x27BBF8u;
    {
        const bool branch_taken_0x27bbf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bbf8) {
            ctx->pc = 0x27BC60u;
            goto label_27bc60;
        }
    }
    ctx->pc = 0x27BC00u;
label_27bc00:
    // 0x27bc00: 0x92830070  lbu         $v1, 0x70($s4)
    ctx->pc = 0x27bc00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 112)));
label_27bc04:
    // 0x27bc04: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_27bc08:
    if (ctx->pc == 0x27BC08u) {
        ctx->pc = 0x27BC0Cu;
        goto label_27bc0c;
    }
    ctx->pc = 0x27BC04u;
    {
        const bool branch_taken_0x27bc04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bc04) {
            ctx->pc = 0x27BC60u;
            goto label_27bc60;
        }
    }
    ctx->pc = 0x27BC0Cu;
label_27bc0c:
    // 0x27bc0c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x27bc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bc10:
    // 0x27bc10: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x27bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_27bc14:
    // 0x27bc14: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x27bc14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27bc18:
    // 0x27bc18: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x27bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_27bc1c:
    // 0x27bc1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27bc1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bc20:
    // 0x27bc20: 0x0  nop
    ctx->pc = 0x27bc20u;
    // NOP
label_27bc24:
    // 0x27bc24: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27bc24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_27bc28:
    // 0x27bc28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27bc28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27bc2c:
    // 0x27bc2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_27bc30:
    if (ctx->pc == 0x27BC30u) {
        ctx->pc = 0x27BC34u;
        goto label_27bc34;
    }
    ctx->pc = 0x27BC2Cu;
    {
        const bool branch_taken_0x27bc2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bc2c) {
            ctx->pc = 0x27BC44u;
            goto label_27bc44;
        }
    }
    ctx->pc = 0x27BC34u;
label_27bc34:
    // 0x27bc34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27bc34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27bc38:
    // 0x27bc38: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x27bc38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_27bc3c:
    // 0x27bc3c: 0x10000008  b           . + 4 + (0x8 << 2)
label_27bc40:
    if (ctx->pc == 0x27BC40u) {
        ctx->pc = 0x27BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC3Cu;
        // 0x27bc40: 0xa2840070  sb          $a0, 0x70($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 112), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BC44u;
        goto label_27bc44;
    }
    ctx->pc = 0x27BC3Cu;
    {
        const bool branch_taken_0x27bc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC3Cu;
        // 0x27bc40: 0xa2840070  sb          $a0, 0x70($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 112), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc3c) {
            ctx->pc = 0x27BC60u;
            goto label_27bc60;
        }
    }
    ctx->pc = 0x27BC44u;
label_27bc44:
    // 0x27bc44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27bc44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27bc48:
    // 0x27bc48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x27bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_27bc4c:
    // 0x27bc4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27bc4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27bc50:
    // 0x27bc50: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x27bc50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_27bc54:
    // 0x27bc54: 0x0  nop
    ctx->pc = 0x27bc54u;
    // NOP
label_27bc58:
    // 0x27bc58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x27bc58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_27bc5c:
    // 0x27bc5c: 0xa2840070  sb          $a0, 0x70($s4)
    ctx->pc = 0x27bc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 112), (uint8_t)GPR_U32(ctx, 4));
label_27bc60:
    // 0x27bc60: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x27bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_27bc64:
    // 0x27bc64: 0x9064000e  lbu         $a0, 0xE($v1)
    ctx->pc = 0x27bc64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
label_27bc68:
    // 0x27bc68: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x27bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_27bc6c:
    // 0x27bc6c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x27bc6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_27bc70:
    // 0x27bc70: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_27bc74:
    if (ctx->pc == 0x27BC74u) {
        ctx->pc = 0x27BC78u;
        goto label_27bc78;
    }
    ctx->pc = 0x27BC70u;
    {
        const bool branch_taken_0x27bc70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bc70) {
            ctx->pc = 0x27BCA0u;
            goto label_27bca0;
        }
    }
    ctx->pc = 0x27BC78u;
label_27bc78:
    // 0x27bc78: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x27bc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_27bc7c:
    // 0x27bc7c: 0xafb201d8  sw          $s2, 0x1D8($sp)
    ctx->pc = 0x27bc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 18));
label_27bc80:
    // 0x27bc80: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x27bc80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
label_27bc84:
    // 0x27bc84: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x27bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_27bc88:
    // 0x27bc88: 0xafb101b8  sw          $s1, 0x1B8($sp)
    ctx->pc = 0x27bc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 17));
label_27bc8c:
    // 0x27bc8c: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x27bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
label_27bc90:
    // 0x27bc90: 0x92c20004  lbu         $v0, 0x4($s6)
    ctx->pc = 0x27bc90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
label_27bc94:
    // 0x27bc94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_27bc98:
    if (ctx->pc == 0x27BC98u) {
        ctx->pc = 0x27BC9Cu;
        goto label_27bc9c;
    }
    ctx->pc = 0x27BC94u;
    {
        const bool branch_taken_0x27bc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bc94) {
            ctx->pc = 0x27BCA0u;
            goto label_27bca0;
        }
    }
    ctx->pc = 0x27BC9Cu;
label_27bc9c:
    // 0x27bc9c: 0xa3a20180  sb          $v0, 0x180($sp)
    ctx->pc = 0x27bc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 2));
label_27bca0:
    // 0x27bca0: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x27bca0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_27bca4:
    // 0x27bca4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_27bca8:
    if (ctx->pc == 0x27BCA8u) {
        ctx->pc = 0x27BCACu;
        goto label_27bcac;
    }
    ctx->pc = 0x27BCA4u;
    {
        const bool branch_taken_0x27bca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bca4) {
            ctx->pc = 0x27BD10u;
            goto label_27bd10;
        }
    }
    ctx->pc = 0x27BCACu;
label_27bcac:
    // 0x27bcac: 0x96830068  lhu         $v1, 0x68($s4)
    ctx->pc = 0x27bcacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 104)));
label_27bcb0:
    // 0x27bcb0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x27bcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_27bcb4:
    // 0x27bcb4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x27bcb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27bcb8:
    // 0x27bcb8: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_27bcbc:
    if (ctx->pc == 0x27BCBCu) {
        ctx->pc = 0x27BCC0u;
        goto label_27bcc0;
    }
    ctx->pc = 0x27BCB8u;
    {
        const bool branch_taken_0x27bcb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bcb8) {
            ctx->pc = 0x27BD10u;
            goto label_27bd10;
        }
    }
    ctx->pc = 0x27BCC0u;
label_27bcc0:
    // 0x27bcc0: 0x92820071  lbu         $v0, 0x71($s4)
    ctx->pc = 0x27bcc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 113)));
label_27bcc4:
    // 0x27bcc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27bcc8:
    if (ctx->pc == 0x27BCC8u) {
        ctx->pc = 0x27BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCC4u;
        // 0x27bcc8: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BCCCu;
        goto label_27bccc;
    }
    ctx->pc = 0x27BCC4u;
    {
        const bool branch_taken_0x27bcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCC4u;
        // 0x27bcc8: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bcc4) {
            ctx->pc = 0x27BCE0u;
            goto label_27bce0;
        }
    }
    ctx->pc = 0x27BCCCu;
label_27bccc:
    // 0x27bccc: 0xc0969c8  jal         func_25A720
label_27bcd0:
    if (ctx->pc == 0x27BCD0u) {
        ctx->pc = 0x27BCD4u;
        goto label_27bcd4;
    }
    ctx->pc = 0x27BCCCu;
    SET_GPR_U32(ctx, 31, 0x27BCD4u);
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x27BCCCu, 0x27BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BCD4u;
label_27bcd4:
    // 0x27bcd4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_27bcd8:
    if (ctx->pc == 0x27BCD8u) {
        ctx->pc = 0x27BCDCu;
        goto label_27bcdc;
    }
    ctx->pc = 0x27BCD4u;
    {
        const bool branch_taken_0x27bcd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bcd4) {
            ctx->pc = 0x27BD08u;
            goto label_27bd08;
        }
    }
    ctx->pc = 0x27BCDCu;
label_27bcdc:
    // 0x27bcdc: 0x0  nop
    ctx->pc = 0x27bcdcu;
    // NOP
label_27bce0:
    // 0x27bce0: 0x26640530  addiu       $a0, $s3, 0x530
    ctx->pc = 0x27bce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1328));
label_27bce4:
    // 0x27bce4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27bce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27bce8:
    // 0x27bce8: 0xc0b2b4c  jal         func_2CAD30
label_27bcec:
    if (ctx->pc == 0x27BCECu) {
        ctx->pc = 0x27BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCE8u;
        // 0x27bcec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BCF0u;
        goto label_27bcf0;
    }
    ctx->pc = 0x27BCE8u;
    SET_GPR_U32(ctx, 31, 0x27BCF0u);
    ctx->pc = 0x27BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BCE8u;
    // 0x27bcec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAD30u, 0x27BCE8u, 0x27BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BCF0u;
label_27bcf0:
    // 0x27bcf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_27bcf4:
    if (ctx->pc == 0x27BCF4u) {
        ctx->pc = 0x27BCF8u;
        goto label_27bcf8;
    }
    ctx->pc = 0x27BCF0u;
    {
        const bool branch_taken_0x27bcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bcf0) {
            ctx->pc = 0x27BD08u;
            goto label_27bd08;
        }
    }
    ctx->pc = 0x27BCF8u;
label_27bcf8:
    // 0x27bcf8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x27bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27bcfc:
    // 0x27bcfc: 0xafb2020c  sw          $s2, 0x20C($sp)
    ctx->pc = 0x27bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 18));
label_27bd00:
    // 0x27bd00: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x27bd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_27bd04:
    // 0x27bd04: 0x0  nop
    ctx->pc = 0x27bd04u;
    // NOP
label_27bd08:
    // 0x27bd08: 0xa6800068  sh          $zero, 0x68($s4)
    ctx->pc = 0x27bd08u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 104), (uint16_t)GPR_U32(ctx, 0));
label_27bd0c:
    // 0x27bd0c: 0x0  nop
    ctx->pc = 0x27bd0cu;
    // NOP
label_27bd10:
    // 0x27bd10: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x27bd10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_27bd14:
    // 0x27bd14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27bd18:
    // 0x27bd18: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x27bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_27bd1c:
    // 0x27bd1c: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x27bd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_27bd20:
    // 0x27bd20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27bd20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27bd24:
    // 0x27bd24: 0xc09ec2c  jal         func_27B0B0
label_27bd28:
    if (ctx->pc == 0x27BD28u) {
        ctx->pc = 0x27BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD24u;
        // 0x27bd28: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD2Cu;
        goto label_27bd2c;
    }
    ctx->pc = 0x27BD24u;
    SET_GPR_U32(ctx, 31, 0x27BD2Cu);
    ctx->pc = 0x27BD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD24u;
    // 0x27bd28: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27BD24u, 0x27BD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD2Cu;
label_27bd2c:
    // 0x27bd2c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x27bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_27bd30:
    // 0x27bd30: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_27bd34:
    if (ctx->pc == 0x27BD34u) {
        ctx->pc = 0x27BD38u;
        goto label_27bd38;
    }
    ctx->pc = 0x27BD30u;
    {
        const bool branch_taken_0x27bd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bd30) {
            ctx->pc = 0x27BD60u;
            goto label_27bd60;
        }
    }
    ctx->pc = 0x27BD38u;
label_27bd38:
    // 0x27bd38: 0xc66107b8  lwc1        $f1, 0x7B8($s3)
    ctx->pc = 0x27bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bd3c:
    // 0x27bd3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27bd3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bd40:
    // 0x27bd40: 0x0  nop
    ctx->pc = 0x27bd40u;
    // NOP
label_27bd44:
    // 0x27bd44: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x27bd44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27bd48:
    // 0x27bd48: 0x45010027  bc1t        . + 4 + (0x27 << 2)
label_27bd4c:
    if (ctx->pc == 0x27BD4Cu) {
        ctx->pc = 0x27BD50u;
        goto label_27bd50;
    }
    ctx->pc = 0x27BD48u;
    {
        const bool branch_taken_0x27bd48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bd48) {
            ctx->pc = 0x27BDE8u;
            goto label_27bde8;
        }
    }
    ctx->pc = 0x27BD50u;
label_27bd50:
    // 0x27bd50: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x27bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_27bd54:
    // 0x27bd54: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x27bd54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_27bd58:
    // 0x27bd58: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_27bd5c:
    if (ctx->pc == 0x27BD5Cu) {
        ctx->pc = 0x27BD60u;
        goto label_27bd60;
    }
    ctx->pc = 0x27BD58u;
    {
        const bool branch_taken_0x27bd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bd58) {
            ctx->pc = 0x27BDE8u;
            goto label_27bde8;
        }
    }
    ctx->pc = 0x27BD60u;
label_27bd60:
    // 0x27bd60: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x27bd60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_27bd64:
    // 0x27bd64: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x27bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_27bd68:
    // 0x27bd68: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x27bd68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_27bd6c:
    // 0x27bd6c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_27bd70:
    if (ctx->pc == 0x27BD70u) {
        ctx->pc = 0x27BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD6Cu;
        // 0x27bd70: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BD74u;
        goto label_27bd74;
    }
    ctx->pc = 0x27BD6Cu;
    {
        const bool branch_taken_0x27bd6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD6Cu;
        // 0x27bd70: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd6c) {
            ctx->pc = 0x27BD78u;
            goto label_27bd78;
        }
    }
    ctx->pc = 0x27BD74u;
label_27bd74:
    // 0x27bd74: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x27bd74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27bd78:
    // 0x27bd78: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_27bd7c:
    if (ctx->pc == 0x27BD7Cu) {
        ctx->pc = 0x27BD80u;
        goto label_27bd80;
    }
    ctx->pc = 0x27BD78u;
    {
        const bool branch_taken_0x27bd78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bd78) {
            ctx->pc = 0x27BDA8u;
            goto label_27bda8;
        }
    }
    ctx->pc = 0x27BD80u;
label_27bd80:
    // 0x27bd80: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x27bd80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_27bd84:
    // 0x27bd84: 0x240200ea  addiu       $v0, $zero, 0xEA
    ctx->pc = 0x27bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
label_27bd88:
    // 0x27bd88: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_27bd8c:
    if (ctx->pc == 0x27BD8Cu) {
        ctx->pc = 0x27BD90u;
        goto label_27bd90;
    }
    ctx->pc = 0x27BD88u;
    {
        const bool branch_taken_0x27bd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27bd88) {
            ctx->pc = 0x27BDA8u;
            goto label_27bda8;
        }
    }
    ctx->pc = 0x27BD90u;
label_27bd90:
    // 0x27bd90: 0x92c40003  lbu         $a0, 0x3($s6)
    ctx->pc = 0x27bd90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
label_27bd94:
    // 0x27bd94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27bd94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27bd98:
    // 0x27bd98: 0x924708e8  lbu         $a3, 0x8E8($s2)
    ctx->pc = 0x27bd98u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
label_27bd9c:
    // 0x27bd9c: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x27bd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_27bda0:
    // 0x27bda0: 0xc0c9a74  jal         func_3269D0
label_27bda4:
    if (ctx->pc == 0x27BDA4u) {
        ctx->pc = 0x27BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BDA0u;
        // 0x27bda4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BDA8u;
        goto label_27bda8;
    }
    ctx->pc = 0x27BDA0u;
    SET_GPR_U32(ctx, 31, 0x27BDA8u);
    ctx->pc = 0x27BDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BDA0u;
    // 0x27bda4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3269D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3269D0u, 0x27BDA0u, 0x27BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BDA8u;
label_27bda8:
    // 0x27bda8: 0x92820079  lbu         $v0, 0x79($s4)
    ctx->pc = 0x27bda8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 121)));
label_27bdac:
    // 0x27bdac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_27bdb0:
    if (ctx->pc == 0x27BDB0u) {
        ctx->pc = 0x27BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BDACu;
        // 0x27bdb0: 0x92a3000a  lbu         $v1, 0xA($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BDB4u;
        goto label_27bdb4;
    }
    ctx->pc = 0x27BDACu;
    {
        const bool branch_taken_0x27bdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BDACu;
        // 0x27bdb0: 0x92a3000a  lbu         $v1, 0xA($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bdac) {
            ctx->pc = 0x27BDB8u;
            goto label_27bdb8;
        }
    }
    ctx->pc = 0x27BDB4u;
label_27bdb4:
    // 0x27bdb4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27bdb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27bdb8:
    // 0x27bdb8: 0x92c50003  lbu         $a1, 0x3($s6)
    ctx->pc = 0x27bdb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
label_27bdbc:
    // 0x27bdbc: 0x9208000d  lbu         $t0, 0xD($s0)
    ctx->pc = 0x27bdbcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
label_27bdc0:
    // 0x27bdc0: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x27bdc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_27bdc4:
    // 0x27bdc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27bdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27bdc8:
    // 0x27bdc8: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x27bdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_27bdcc:
    // 0x27bdcc: 0x27a70230  addiu       $a3, $sp, 0x230
    ctx->pc = 0x27bdccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_27bdd0:
    // 0x27bdd0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x27bdd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27bdd4:
    // 0x27bdd4: 0xc09f4a4  jal         func_27D290
label_27bdd8:
    if (ctx->pc == 0x27BDD8u) {
        ctx->pc = 0x27BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BDD4u;
        // 0x27bdd8: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BDDCu;
        goto label_27bddc;
    }
    ctx->pc = 0x27BDD4u;
    SET_GPR_U32(ctx, 31, 0x27BDDCu);
    ctx->pc = 0x27BDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BDD4u;
    // 0x27bdd8: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D290u, 0x27BDD4u, 0x27BDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BDDCu;
label_27bddc:
    // 0x27bddc: 0x10000008  b           . + 4 + (0x8 << 2)
label_27bde0:
    if (ctx->pc == 0x27BDE0u) {
        ctx->pc = 0x27BDE4u;
        goto label_27bde4;
    }
    ctx->pc = 0x27BDDCu;
    {
        const bool branch_taken_0x27bddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bddc) {
            ctx->pc = 0x27BE00u;
            goto label_27be00;
        }
    }
    ctx->pc = 0x27BDE4u;
label_27bde4:
    // 0x27bde4: 0x0  nop
    ctx->pc = 0x27bde4u;
    // NOP
label_27bde8:
    // 0x27bde8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27bde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27bdec:
    // 0x27bdec: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x27bdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_27bdf0:
    // 0x27bdf0: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x27bdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_27bdf4:
    // 0x27bdf4: 0xc09f720  jal         func_27DC80
label_27bdf8:
    if (ctx->pc == 0x27BDF8u) {
        ctx->pc = 0x27BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BDF4u;
        // 0x27bdf8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BDFCu;
        goto label_27bdfc;
    }
    ctx->pc = 0x27BDF4u;
    SET_GPR_U32(ctx, 31, 0x27BDFCu);
    ctx->pc = 0x27BDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BDF4u;
    // 0x27bdf8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DC80u, 0x27BDF4u, 0x27BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BDFCu;
label_27bdfc:
    // 0x27bdfc: 0x0  nop
    ctx->pc = 0x27bdfcu;
    // NOP
label_27be00:
    // 0x27be00: 0x9205000e  lbu         $a1, 0xE($s0)
    ctx->pc = 0x27be00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_27be04:
    // 0x27be04: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_27be08:
    if (ctx->pc == 0x27BE08u) {
        ctx->pc = 0x27BE0Cu;
        goto label_27be0c;
    }
    ctx->pc = 0x27BE04u;
    {
        const bool branch_taken_0x27be04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x27be04) {
            ctx->pc = 0x27BE30u;
            goto label_27be30;
        }
    }
    ctx->pc = 0x27BE0Cu;
label_27be0c:
    // 0x27be0c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_27be10:
    if (ctx->pc == 0x27BE10u) {
        ctx->pc = 0x27BE14u;
        goto label_27be14;
    }
    ctx->pc = 0x27BE0Cu;
    {
        const bool branch_taken_0x27be0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27be0c) {
            ctx->pc = 0x27BE30u;
            goto label_27be30;
        }
    }
    ctx->pc = 0x27BE14u;
label_27be14:
    // 0x27be14: 0x92430640  lbu         $v1, 0x640($s2)
    ctx->pc = 0x27be14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1600)));
label_27be18:
    // 0x27be18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27be18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27be1c:
    // 0x27be1c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_27be20:
    if (ctx->pc == 0x27BE20u) {
        ctx->pc = 0x27BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE1Cu;
        // 0x27be20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BE24u;
        goto label_27be24;
    }
    ctx->pc = 0x27BE1Cu;
    {
        const bool branch_taken_0x27be1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE1Cu;
        // 0x27be20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be1c) {
            ctx->pc = 0x27BE30u;
            goto label_27be30;
        }
    }
    ctx->pc = 0x27BE24u;
label_27be24:
    // 0x27be24: 0xc0e2698  jal         func_389A60
label_27be28:
    if (ctx->pc == 0x27BE28u) {
        ctx->pc = 0x27BE2Cu;
        goto label_27be2c;
    }
    ctx->pc = 0x27BE24u;
    SET_GPR_U32(ctx, 31, 0x27BE2Cu);
    ctx->pc = 0x389A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A60u, 0x27BE24u, 0x27BE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BE2Cu;
label_27be2c:
    // 0x27be2c: 0x0  nop
    ctx->pc = 0x27be2cu;
    // NOP
label_27be30:
    // 0x27be30: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x27be30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_27be34:
    // 0x27be34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27be34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27be38:
    // 0x27be38: 0x968200c2  lhu         $v0, 0xC2($s4)
    ctx->pc = 0x27be38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
label_27be3c:
    // 0x27be3c: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x27be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_27be40:
    // 0x27be40: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x27be40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_27be44:
    // 0x27be44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27be44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_27be48:
    // 0x27be48: 0xa68200c2  sh          $v0, 0xC2($s4)
    ctx->pc = 0x27be48u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 194), (uint16_t)GPR_U32(ctx, 2));
label_27be4c:
    // 0x27be4c: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x27be4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_27be50:
    // 0x27be50: 0x968200c4  lhu         $v0, 0xC4($s4)
    ctx->pc = 0x27be50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 196)));
label_27be54:
    // 0x27be54: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x27be54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_27be58:
    // 0x27be58: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x27be58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_27be5c:
    // 0x27be5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27be5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_27be60:
    // 0x27be60: 0xa68200c4  sh          $v0, 0xC4($s4)
    ctx->pc = 0x27be60u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 196), (uint16_t)GPR_U32(ctx, 2));
label_27be64:
    // 0x27be64: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x27be64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_27be68:
    // 0x27be68: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x27be68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_27be6c:
    // 0x27be6c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_27be70:
    // 0x27be70: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x27be70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_27be74:
    // 0x27be74: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27be74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27be78:
    // 0x27be78: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_27be7c:
    if (ctx->pc == 0x27BE7Cu) {
        ctx->pc = 0x27BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE78u;
        // 0x27be7c: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BE80u;
        goto label_27be80;
    }
    ctx->pc = 0x27BE78u;
    {
        const bool branch_taken_0x27be78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE78u;
        // 0x27be7c: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be78) {
            ctx->pc = 0x27BEA0u;
            goto label_27bea0;
        }
    }
    ctx->pc = 0x27BE80u;
label_27be80:
    // 0x27be80: 0x8e5904d4  lw          $t9, 0x4D4($s2)
    ctx->pc = 0x27be80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1236)));
label_27be84:
    // 0x27be84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27be84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27be88:
    // 0x27be88: 0x92060007  lbu         $a2, 0x7($s0)
    ctx->pc = 0x27be88u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_27be8c:
    // 0x27be8c: 0x9207000c  lbu         $a3, 0xC($s0)
    ctx->pc = 0x27be8cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_27be90:
    // 0x27be90: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x27be90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_27be94:
    // 0x27be94: 0x320f809  jalr        $t9
label_27be98:
    if (ctx->pc == 0x27BE98u) {
        ctx->pc = 0x27BE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE94u;
        // 0x27be98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BE9Cu;
        goto label_27be9c;
    }
    ctx->pc = 0x27BE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27BE9Cu);
        ctx->pc = 0x27BE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE94u;
        // 0x27be98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BE94u, 0x27BE9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27BE9Cu;
label_27be9c:
    // 0x27be9c: 0x0  nop
    ctx->pc = 0x27be9cu;
    // NOP
label_27bea0:
    // 0x27bea0: 0x1257000b  beq         $s2, $s7, . + 4 + (0xB << 2)
label_27bea4:
    if (ctx->pc == 0x27BEA4u) {
        ctx->pc = 0x27BEA8u;
        goto label_27bea8;
    }
    ctx->pc = 0x27BEA0u;
    {
        const bool branch_taken_0x27bea0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 23));
        if (branch_taken_0x27bea0) {
            ctx->pc = 0x27BED0u;
            goto label_27bed0;
        }
    }
    ctx->pc = 0x27BEA8u;
label_27bea8:
    // 0x27bea8: 0x92e30000  lbu         $v1, 0x0($s7)
    ctx->pc = 0x27bea8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_27beac:
    // 0x27beac: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x27beacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_27beb0:
    // 0x27beb0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_27beb4:
    if (ctx->pc == 0x27BEB4u) {
        ctx->pc = 0x27BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEB0u;
        // 0x27beb4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BEB8u;
        goto label_27beb8;
    }
    ctx->pc = 0x27BEB0u;
    {
        const bool branch_taken_0x27beb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEB0u;
        // 0x27beb4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27beb0) {
            ctx->pc = 0x27BEC0u;
            goto label_27bec0;
        }
    }
    ctx->pc = 0x27BEB8u;
label_27beb8:
    // 0x27beb8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_27bebc:
    if (ctx->pc == 0x27BEBCu) {
        ctx->pc = 0x27BEC0u;
        goto label_27bec0;
    }
    ctx->pc = 0x27BEB8u;
    {
        const bool branch_taken_0x27beb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27beb8) {
            ctx->pc = 0x27BED0u;
            goto label_27bed0;
        }
    }
    ctx->pc = 0x27BEC0u;
label_27bec0:
    // 0x27bec0: 0x96e2050c  lhu         $v0, 0x50C($s7)
    ctx->pc = 0x27bec0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 1292)));
label_27bec4:
    // 0x27bec4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x27bec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_27bec8:
    // 0x27bec8: 0xa6e2050c  sh          $v0, 0x50C($s7)
    ctx->pc = 0x27bec8u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 1292), (uint16_t)GPR_U32(ctx, 2));
label_27becc:
    // 0x27becc: 0x0  nop
    ctx->pc = 0x27beccu;
    // NOP
label_27bed0:
    // 0x27bed0: 0x92c40006  lbu         $a0, 0x6($s6)
    ctx->pc = 0x27bed0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
label_27bed4:
    // 0x27bed4: 0x82a30003  lb          $v1, 0x3($s5)
    ctx->pc = 0x27bed4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
label_27bed8:
    // 0x27bed8: 0x92820077  lbu         $v0, 0x77($s4)
    ctx->pc = 0x27bed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 119)));
label_27bedc:
    // 0x27bedc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_27bee0:
    // 0x27bee0: 0x1240009f  beqz        $s2, . + 4 + (0x9F << 2)
label_27bee4:
    if (ctx->pc == 0x27BEE4u) {
        ctx->pc = 0x27BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEE0u;
        // 0x27bee4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BEE8u;
        goto label_27bee8;
    }
    ctx->pc = 0x27BEE0u;
    {
        const bool branch_taken_0x27bee0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEE0u;
        // 0x27bee4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bee0) {
            ctx->pc = 0x27C160u;
            goto label_27c160;
        }
    }
    ctx->pc = 0x27BEE8u;
label_27bee8:
    // 0x27bee8: 0x1257000d  beq         $s2, $s7, . + 4 + (0xD << 2)
label_27beec:
    if (ctx->pc == 0x27BEECu) {
        ctx->pc = 0x27BEF0u;
        goto label_27bef0;
    }
    ctx->pc = 0x27BEE8u;
    {
        const bool branch_taken_0x27bee8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 23));
        if (branch_taken_0x27bee8) {
            ctx->pc = 0x27BF20u;
            goto label_27bf20;
        }
    }
    ctx->pc = 0x27BEF0u;
label_27bef0:
    // 0x27bef0: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x27bef0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_27bef4:
    // 0x27bef4: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x27bef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
label_27bef8:
    // 0x27bef8: 0x24630950  addiu       $v1, $v1, 0x950
    ctx->pc = 0x27bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2384));
label_27befc:
    // 0x27befc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x27befcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_27bf00:
    // 0x27bf00: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27bf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_27bf04:
    // 0x27bf04: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x27bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_27bf08:
    // 0x27bf08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27bf0c:
    // 0x27bf0c: 0x90630042  lbu         $v1, 0x42($v1)
    ctx->pc = 0x27bf0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 66)));
label_27bf10:
    // 0x27bf10: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x27bf10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_27bf14:
    // 0x27bf14: 0x10600092  beqz        $v1, . + 4 + (0x92 << 2)
label_27bf18:
    if (ctx->pc == 0x27BF18u) {
        ctx->pc = 0x27BF1Cu;
        goto label_27bf1c;
    }
    ctx->pc = 0x27BF14u;
    {
        const bool branch_taken_0x27bf14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bf14) {
            ctx->pc = 0x27C160u;
            goto label_27c160;
        }
    }
    ctx->pc = 0x27BF1Cu;
label_27bf1c:
    // 0x27bf1c: 0x0  nop
    ctx->pc = 0x27bf1cu;
    // NOP
label_27bf20:
    // 0x27bf20: 0x92450781  lbu         $a1, 0x781($s2)
    ctx->pc = 0x27bf20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1921)));
label_27bf24:
    // 0x27bf24: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x27bf24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27bf28:
    // 0x27bf28: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_27bf2c:
    if (ctx->pc == 0x27BF2Cu) {
        ctx->pc = 0x27BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF28u;
        // 0x27bf2c: 0x3c033c88  lui         $v1, 0x3C88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BF30u;
        goto label_27bf30;
    }
    ctx->pc = 0x27BF28u;
    {
        const bool branch_taken_0x27bf28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF28u;
        // 0x27bf2c: 0x3c033c88  lui         $v1, 0x3C88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf28) {
            ctx->pc = 0x27BFC8u;
            goto label_27bfc8;
        }
    }
    ctx->pc = 0x27BF30u;
label_27bf30:
    // 0x27bf30: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x27bf30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_27bf34:
    // 0x27bf34: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x27bf34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_27bf38:
    // 0x27bf38: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_27bf3c:
    if (ctx->pc == 0x27BF3Cu) {
        ctx->pc = 0x27BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF38u;
        // 0x27bf3c: 0x22042  srl         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BF40u;
        goto label_27bf40;
    }
    ctx->pc = 0x27BF38u;
    {
        const bool branch_taken_0x27bf38 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF38u;
        // 0x27bf3c: 0x22042  srl         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf38) {
            ctx->pc = 0x27BF4Cu;
            goto label_27bf4c;
        }
    }
    ctx->pc = 0x27BF40u;
label_27bf40:
    // 0x27bf40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bf40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bf44:
    // 0x27bf44: 0x10000007  b           . + 4 + (0x7 << 2)
label_27bf48:
    if (ctx->pc == 0x27BF48u) {
        ctx->pc = 0x27BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF44u;
        // 0x27bf48: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BF4Cu;
        goto label_27bf4c;
    }
    ctx->pc = 0x27BF44u;
    {
        const bool branch_taken_0x27bf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF44u;
        // 0x27bf48: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf44) {
            ctx->pc = 0x27BF64u;
            goto label_27bf64;
        }
    }
    ctx->pc = 0x27BF4Cu;
label_27bf4c:
    // 0x27bf4c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x27bf4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_27bf50:
    // 0x27bf50: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x27bf50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_27bf54:
    // 0x27bf54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27bf54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bf58:
    // 0x27bf58: 0x0  nop
    ctx->pc = 0x27bf58u;
    // NOP
label_27bf5c:
    // 0x27bf5c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x27bf5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_27bf60:
    // 0x27bf60: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x27bf60u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_27bf64:
    // 0x27bf64: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x27bf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27bf68:
    // 0x27bf68: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x27bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_27bf6c:
    // 0x27bf6c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x27bf6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_27bf70:
    // 0x27bf70: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x27bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_27bf74:
    // 0x27bf74: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x27bf74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27bf78:
    // 0x27bf78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27bf78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bf7c:
    // 0x27bf7c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x27bf7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_27bf80:
    // 0x27bf80: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27bf80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_27bf84:
    // 0x27bf84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27bf84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27bf88:
    // 0x27bf88: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_27bf8c:
    if (ctx->pc == 0x27BF8Cu) {
        ctx->pc = 0x27BF90u;
        goto label_27bf90;
    }
    ctx->pc = 0x27BF88u;
    {
        const bool branch_taken_0x27bf88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bf88) {
            ctx->pc = 0x27BFA0u;
            goto label_27bfa0;
        }
    }
    ctx->pc = 0x27BF90u;
label_27bf90:
    // 0x27bf90: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27bf90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27bf94:
    // 0x27bf94: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x27bf94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_27bf98:
    // 0x27bf98: 0x10000008  b           . + 4 + (0x8 << 2)
label_27bf9c:
    if (ctx->pc == 0x27BF9Cu) {
        ctx->pc = 0x27BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF98u;
        // 0x27bf9c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BFA0u;
        goto label_27bfa0;
    }
    ctx->pc = 0x27BF98u;
    {
        const bool branch_taken_0x27bf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF98u;
        // 0x27bf9c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf98) {
            ctx->pc = 0x27BFBCu;
            goto label_27bfbc;
        }
    }
    ctx->pc = 0x27BFA0u;
label_27bfa0:
    // 0x27bfa0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27bfa0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27bfa4:
    // 0x27bfa4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x27bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_27bfa8:
    // 0x27bfa8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27bfa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27bfac:
    // 0x27bfac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x27bfacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_27bfb0:
    // 0x27bfb0: 0x0  nop
    ctx->pc = 0x27bfb0u;
    // NOP
label_27bfb4:
    // 0x27bfb4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x27bfb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_27bfb8:
    // 0x27bfb8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x27bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_27bfbc:
    // 0x27bfbc: 0x10000026  b           . + 4 + (0x26 << 2)
label_27bfc0:
    if (ctx->pc == 0x27BFC0u) {
        ctx->pc = 0x27BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFBCu;
        // 0x27bfc0: 0xa2430782  sb          $v1, 0x782($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1922), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BFC4u;
        goto label_27bfc4;
    }
    ctx->pc = 0x27BFBCu;
    {
        const bool branch_taken_0x27bfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFBCu;
        // 0x27bfc0: 0xa2430782  sb          $v1, 0x782($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1922), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bfbc) {
            ctx->pc = 0x27C058u;
            goto label_27c058;
        }
    }
    ctx->pc = 0x27BFC4u;
label_27bfc4:
    // 0x27bfc4: 0x0  nop
    ctx->pc = 0x27bfc4u;
    // NOP
label_27bfc8:
    // 0x27bfc8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x27bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_27bfcc:
    // 0x27bfcc: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x27bfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_27bfd0:
    // 0x27bfd0: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x27bfd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_27bfd4:
    // 0x27bfd4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_27bfd8:
    if (ctx->pc == 0x27BFD8u) {
        ctx->pc = 0x27BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFD4u;
        // 0x27bfd8: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BFDCu;
        goto label_27bfdc;
    }
    ctx->pc = 0x27BFD4u;
    {
        const bool branch_taken_0x27bfd4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFD4u;
        // 0x27bfd8: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bfd4) {
            ctx->pc = 0x27BFE8u;
            goto label_27bfe8;
        }
    }
    ctx->pc = 0x27BFDCu;
label_27bfdc:
    // 0x27bfdc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x27bfdcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bfe0:
    // 0x27bfe0: 0x10000007  b           . + 4 + (0x7 << 2)
label_27bfe4:
    if (ctx->pc == 0x27BFE4u) {
        ctx->pc = 0x27BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFE0u;
        // 0x27bfe4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BFE8u;
        goto label_27bfe8;
    }
    ctx->pc = 0x27BFE0u;
    {
        const bool branch_taken_0x27bfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFE0u;
        // 0x27bfe4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bfe0) {
            ctx->pc = 0x27C000u;
            goto label_27c000;
        }
    }
    ctx->pc = 0x27BFE8u;
label_27bfe8:
    // 0x27bfe8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x27bfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_27bfec:
    // 0x27bfec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x27bfecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_27bff0:
    // 0x27bff0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27bff0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bff4:
    // 0x27bff4: 0x0  nop
    ctx->pc = 0x27bff4u;
    // NOP
label_27bff8:
    // 0x27bff8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x27bff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_27bffc:
    // 0x27bffc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x27bffcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_27c000:
    // 0x27c000: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x27c000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c004:
    // 0x27c004: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x27c004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_27c008:
    // 0x27c008: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x27c008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_27c00c:
    // 0x27c00c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x27c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_27c010:
    // 0x27c010: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x27c010u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27c014:
    // 0x27c014: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27c014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c018:
    // 0x27c018: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x27c018u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_27c01c:
    // 0x27c01c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27c01cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_27c020:
    // 0x27c020: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27c020u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c024:
    // 0x27c024: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_27c028:
    if (ctx->pc == 0x27C028u) {
        ctx->pc = 0x27C02Cu;
        goto label_27c02c;
    }
    ctx->pc = 0x27C024u;
    {
        const bool branch_taken_0x27c024 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c024) {
            ctx->pc = 0x27C03Cu;
            goto label_27c03c;
        }
    }
    ctx->pc = 0x27C02Cu;
label_27c02c:
    // 0x27c02c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c02cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c030:
    // 0x27c030: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x27c030u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_27c034:
    // 0x27c034: 0x10000008  b           . + 4 + (0x8 << 2)
label_27c038:
    if (ctx->pc == 0x27C038u) {
        ctx->pc = 0x27C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C034u;
        // 0x27c038: 0xa2440782  sb          $a0, 0x782($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1922), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C03Cu;
        goto label_27c03c;
    }
    ctx->pc = 0x27C034u;
    {
        const bool branch_taken_0x27c034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C034u;
        // 0x27c038: 0xa2440782  sb          $a0, 0x782($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1922), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c034) {
            ctx->pc = 0x27C058u;
            goto label_27c058;
        }
    }
    ctx->pc = 0x27C03Cu;
label_27c03c:
    // 0x27c03c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27c03cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c040:
    // 0x27c040: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x27c040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_27c044:
    // 0x27c044: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c044u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c048:
    // 0x27c048: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x27c048u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_27c04c:
    // 0x27c04c: 0x0  nop
    ctx->pc = 0x27c04cu;
    // NOP
label_27c050:
    // 0x27c050: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x27c050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_27c054:
    // 0x27c054: 0xa2440782  sb          $a0, 0x782($s2)
    ctx->pc = 0x27c054u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1922), (uint8_t)GPR_U32(ctx, 4));
label_27c058:
    // 0x27c058: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x27c058u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_27c05c:
    // 0x27c05c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27c060:
    // 0x27c060: 0x1483003f  bne         $a0, $v1, . + 4 + (0x3F << 2)
label_27c064:
    if (ctx->pc == 0x27C064u) {
        ctx->pc = 0x27C068u;
        goto label_27c068;
    }
    ctx->pc = 0x27C060u;
    {
        const bool branch_taken_0x27c060 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27c060) {
            ctx->pc = 0x27C160u;
            goto label_27c160;
        }
    }
    ctx->pc = 0x27C068u;
label_27c068:
    // 0x27c068: 0x82c50002  lb          $a1, 0x2($s6)
    ctx->pc = 0x27c068u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
label_27c06c:
    // 0x27c06c: 0x92430782  lbu         $v1, 0x782($s2)
    ctx->pc = 0x27c06cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1922)));
label_27c070:
    // 0x27c070: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x27c070u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27c074:
    // 0x27c074: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_27c078:
    if (ctx->pc == 0x27C078u) {
        ctx->pc = 0x27C07Cu;
        goto label_27c07c;
    }
    ctx->pc = 0x27C074u;
    {
        const bool branch_taken_0x27c074 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c074) {
            ctx->pc = 0x27C108u;
            goto label_27c108;
        }
    }
    ctx->pc = 0x27C07Cu;
label_27c07c:
    // 0x27c07c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_27c080:
    if (ctx->pc == 0x27C080u) {
        ctx->pc = 0x27C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C07Cu;
        // 0x27c080: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C084u;
        goto label_27c084;
    }
    ctx->pc = 0x27C07Cu;
    {
        const bool branch_taken_0x27c07c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C07Cu;
        // 0x27c080: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c07c) {
            ctx->pc = 0x27C090u;
            goto label_27c090;
        }
    }
    ctx->pc = 0x27C084u;
label_27c084:
    // 0x27c084: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x27c084u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c088:
    // 0x27c088: 0x10000007  b           . + 4 + (0x7 << 2)
label_27c08c:
    if (ctx->pc == 0x27C08Cu) {
        ctx->pc = 0x27C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C088u;
        // 0x27c08c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C090u;
        goto label_27c090;
    }
    ctx->pc = 0x27C088u;
    {
        const bool branch_taken_0x27c088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C088u;
        // 0x27c08c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c088) {
            ctx->pc = 0x27C0A8u;
            goto label_27c0a8;
        }
    }
    ctx->pc = 0x27C090u;
label_27c090:
    // 0x27c090: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x27c090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_27c094:
    // 0x27c094: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x27c094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_27c098:
    // 0x27c098: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27c098u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c09c:
    // 0x27c09c: 0x0  nop
    ctx->pc = 0x27c09cu;
    // NOP
label_27c0a0:
    // 0x27c0a0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x27c0a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_27c0a4:
    // 0x27c0a4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x27c0a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_27c0a8:
    // 0x27c0a8: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x27c0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c0ac:
    // 0x27c0ac: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x27c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_27c0b0:
    // 0x27c0b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27c0b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c0b4:
    // 0x27c0b4: 0x0  nop
    ctx->pc = 0x27c0b4u;
    // NOP
label_27c0b8:
    // 0x27c0b8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27c0b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_27c0bc:
    // 0x27c0bc: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x27c0bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_27c0c0:
    // 0x27c0c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27c0c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c0c4:
    // 0x27c0c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_27c0c8:
    if (ctx->pc == 0x27C0C8u) {
        ctx->pc = 0x27C0CCu;
        goto label_27c0cc;
    }
    ctx->pc = 0x27C0C4u;
    {
        const bool branch_taken_0x27c0c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c0c4) {
            ctx->pc = 0x27C0DCu;
            goto label_27c0dc;
        }
    }
    ctx->pc = 0x27C0CCu;
label_27c0cc:
    // 0x27c0cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c0ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c0d0:
    // 0x27c0d0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x27c0d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_27c0d4:
    // 0x27c0d4: 0x10000008  b           . + 4 + (0x8 << 2)
label_27c0d8:
    if (ctx->pc == 0x27C0D8u) {
        ctx->pc = 0x27C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C0D4u;
        // 0x27c0d8: 0x92430782  lbu         $v1, 0x782($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1922)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C0DCu;
        goto label_27c0dc;
    }
    ctx->pc = 0x27C0D4u;
    {
        const bool branch_taken_0x27c0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C0D4u;
        // 0x27c0d8: 0x92430782  lbu         $v1, 0x782($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1922)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c0d4) {
            ctx->pc = 0x27C0F8u;
            goto label_27c0f8;
        }
    }
    ctx->pc = 0x27C0DCu;
label_27c0dc:
    // 0x27c0dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27c0dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c0e0:
    // 0x27c0e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x27c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_27c0e4:
    // 0x27c0e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c0e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c0e8:
    // 0x27c0e8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x27c0e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_27c0ec:
    // 0x27c0ec: 0x0  nop
    ctx->pc = 0x27c0ecu;
    // NOP
label_27c0f0:
    // 0x27c0f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x27c0f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_27c0f4:
    // 0x27c0f4: 0x92430782  lbu         $v1, 0x782($s2)
    ctx->pc = 0x27c0f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1922)));
label_27c0f8:
    // 0x27c0f8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x27c0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_27c0fc:
    // 0x27c0fc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27c100:
    // 0x27c100: 0x10000017  b           . + 4 + (0x17 << 2)
label_27c104:
    if (ctx->pc == 0x27C104u) {
        ctx->pc = 0x27C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C100u;
        // 0x27c104: 0xa2430782  sb          $v1, 0x782($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1922), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C108u;
        goto label_27c108;
    }
    ctx->pc = 0x27C100u;
    {
        const bool branch_taken_0x27c100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C100u;
        // 0x27c104: 0xa2430782  sb          $v1, 0x782($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1922), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c100) {
            ctx->pc = 0x27C160u;
            goto label_27c160;
        }
    }
    ctx->pc = 0x27C108u;
label_27c108:
    // 0x27c108: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x27c108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_27c10c:
    // 0x27c10c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x27c10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c110:
    // 0x27c110: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27c110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27c114:
    // 0x27c114: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27c114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c118:
    // 0x27c118: 0x0  nop
    ctx->pc = 0x27c118u;
    // NOP
label_27c11c:
    // 0x27c11c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27c11cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_27c120:
    // 0x27c120: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x27c120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_27c124:
    // 0x27c124: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27c124u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c128:
    // 0x27c128: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_27c12c:
    if (ctx->pc == 0x27C12Cu) {
        ctx->pc = 0x27C130u;
        goto label_27c130;
    }
    ctx->pc = 0x27C128u;
    {
        const bool branch_taken_0x27c128 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c128) {
            ctx->pc = 0x27C140u;
            goto label_27c140;
        }
    }
    ctx->pc = 0x27C130u;
label_27c130:
    // 0x27c130: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c130u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c134:
    // 0x27c134: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x27c134u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_27c138:
    // 0x27c138: 0x10000008  b           . + 4 + (0x8 << 2)
label_27c13c:
    if (ctx->pc == 0x27C13Cu) {
        ctx->pc = 0x27C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C138u;
        // 0x27c13c: 0xa2440782  sb          $a0, 0x782($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1922), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C140u;
        goto label_27c140;
    }
    ctx->pc = 0x27C138u;
    {
        const bool branch_taken_0x27c138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C138u;
        // 0x27c13c: 0xa2440782  sb          $a0, 0x782($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1922), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c138) {
            ctx->pc = 0x27C15Cu;
            goto label_27c15c;
        }
    }
    ctx->pc = 0x27C140u;
label_27c140:
    // 0x27c140: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27c140u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c144:
    // 0x27c144: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x27c144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_27c148:
    // 0x27c148: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c148u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c14c:
    // 0x27c14c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x27c14cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_27c150:
    // 0x27c150: 0x0  nop
    ctx->pc = 0x27c150u;
    // NOP
label_27c154:
    // 0x27c154: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x27c154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_27c158:
    // 0x27c158: 0xa2440782  sb          $a0, 0x782($s2)
    ctx->pc = 0x27c158u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1922), (uint8_t)GPR_U32(ctx, 4));
label_27c15c:
    // 0x27c15c: 0x0  nop
    ctx->pc = 0x27c15cu;
    // NOP
label_27c160:
    // 0x27c160: 0x92640781  lbu         $a0, 0x781($s3)
    ctx->pc = 0x27c160u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1921)));
label_27c164:
    // 0x27c164: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x27c164u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27c168:
    // 0x27c168: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_27c16c:
    if (ctx->pc == 0x27C16Cu) {
        ctx->pc = 0x27C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C168u;
        // 0x27c16c: 0x3c033c88  lui         $v1, 0x3C88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C170u;
        goto label_27c170;
    }
    ctx->pc = 0x27C168u;
    {
        const bool branch_taken_0x27c168 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C168u;
        // 0x27c16c: 0x3c033c88  lui         $v1, 0x3C88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c168) {
            ctx->pc = 0x27C208u;
            goto label_27c208;
        }
    }
    ctx->pc = 0x27C170u;
label_27c170:
    // 0x27c170: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x27c170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_27c174:
    // 0x27c174: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x27c174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_27c178:
    // 0x27c178: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_27c17c:
    if (ctx->pc == 0x27C17Cu) {
        ctx->pc = 0x27C180u;
        goto label_27c180;
    }
    ctx->pc = 0x27C178u;
    {
        const bool branch_taken_0x27c178 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x27c178) {
            ctx->pc = 0x27C18Cu;
            goto label_27c18c;
        }
    }
    ctx->pc = 0x27C180u;
label_27c180:
    // 0x27c180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c184:
    // 0x27c184: 0x10000008  b           . + 4 + (0x8 << 2)
label_27c188:
    if (ctx->pc == 0x27C188u) {
        ctx->pc = 0x27C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C184u;
        // 0x27c188: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C18Cu;
        goto label_27c18c;
    }
    ctx->pc = 0x27C184u;
    {
        const bool branch_taken_0x27c184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C184u;
        // 0x27c188: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c184) {
            ctx->pc = 0x27C1A8u;
            goto label_27c1a8;
        }
    }
    ctx->pc = 0x27C18Cu;
label_27c18c:
    // 0x27c18c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x27c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_27c190:
    // 0x27c190: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27c190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_27c194:
    // 0x27c194: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27c194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27c198:
    // 0x27c198: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27c198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c19c:
    // 0x27c19c: 0x0  nop
    ctx->pc = 0x27c19cu;
    // NOP
label_27c1a0:
    // 0x27c1a0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x27c1a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_27c1a4:
    // 0x27c1a4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x27c1a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_27c1a8:
    // 0x27c1a8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x27c1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c1ac:
    // 0x27c1ac: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x27c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_27c1b0:
    // 0x27c1b0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x27c1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_27c1b4:
    // 0x27c1b4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x27c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_27c1b8:
    // 0x27c1b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27c1b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27c1bc:
    // 0x27c1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c1c0:
    // 0x27c1c0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x27c1c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_27c1c4:
    // 0x27c1c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27c1c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_27c1c8:
    // 0x27c1c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27c1c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c1cc:
    // 0x27c1cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_27c1d0:
    if (ctx->pc == 0x27C1D0u) {
        ctx->pc = 0x27C1D4u;
        goto label_27c1d4;
    }
    ctx->pc = 0x27C1CCu;
    {
        const bool branch_taken_0x27c1cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c1cc) {
            ctx->pc = 0x27C1E4u;
            goto label_27c1e4;
        }
    }
    ctx->pc = 0x27C1D4u;
label_27c1d4:
    // 0x27c1d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c1d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c1d8:
    // 0x27c1d8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27c1d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27c1dc:
    // 0x27c1dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_27c1e0:
    if (ctx->pc == 0x27C1E0u) {
        ctx->pc = 0x27C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C1DCu;
        // 0x27c1e0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C1E4u;
        goto label_27c1e4;
    }
    ctx->pc = 0x27C1DCu;
    {
        const bool branch_taken_0x27c1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C1DCu;
        // 0x27c1e0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c1dc) {
            ctx->pc = 0x27C200u;
            goto label_27c200;
        }
    }
    ctx->pc = 0x27C1E4u;
label_27c1e4:
    // 0x27c1e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27c1e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c1e8:
    // 0x27c1e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27c1ec:
    // 0x27c1ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c1ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c1f0:
    // 0x27c1f0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27c1f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27c1f4:
    // 0x27c1f4: 0x0  nop
    ctx->pc = 0x27c1f4u;
    // NOP
label_27c1f8:
    // 0x27c1f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27c1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27c1fc:
    // 0x27c1fc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x27c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27c200:
    // 0x27c200: 0x10000025  b           . + 4 + (0x25 << 2)
label_27c204:
    if (ctx->pc == 0x27C204u) {
        ctx->pc = 0x27C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C200u;
        // 0x27c204: 0xa2620782  sb          $v0, 0x782($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1922), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C208u;
        goto label_27c208;
    }
    ctx->pc = 0x27C200u;
    {
        const bool branch_taken_0x27c200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C200u;
        // 0x27c204: 0xa2620782  sb          $v0, 0x782($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1922), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c200) {
            ctx->pc = 0x27C298u;
            goto label_27c298;
        }
    }
    ctx->pc = 0x27C208u;
label_27c208:
    // 0x27c208: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x27c208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_27c20c:
    // 0x27c20c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x27c20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_27c210:
    // 0x27c210: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x27c210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_27c214:
    // 0x27c214: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_27c218:
    if (ctx->pc == 0x27C218u) {
        ctx->pc = 0x27C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C214u;
        // 0x27c218: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C21Cu;
        goto label_27c21c;
    }
    ctx->pc = 0x27C214u;
    {
        const bool branch_taken_0x27c214 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C214u;
        // 0x27c218: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c214) {
            ctx->pc = 0x27C228u;
            goto label_27c228;
        }
    }
    ctx->pc = 0x27C21Cu;
label_27c21c:
    // 0x27c21c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27c21cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c220:
    // 0x27c220: 0x10000007  b           . + 4 + (0x7 << 2)
label_27c224:
    if (ctx->pc == 0x27C224u) {
        ctx->pc = 0x27C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C220u;
        // 0x27c224: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C228u;
        goto label_27c228;
    }
    ctx->pc = 0x27C220u;
    {
        const bool branch_taken_0x27c220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C220u;
        // 0x27c224: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c220) {
            ctx->pc = 0x27C240u;
            goto label_27c240;
        }
    }
    ctx->pc = 0x27C228u;
label_27c228:
    // 0x27c228: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x27c228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_27c22c:
    // 0x27c22c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27c22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27c230:
    // 0x27c230: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27c230u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c234:
    // 0x27c234: 0x0  nop
    ctx->pc = 0x27c234u;
    // NOP
label_27c238:
    // 0x27c238: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x27c238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_27c23c:
    // 0x27c23c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x27c23cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_27c240:
    // 0x27c240: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x27c240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c244:
    // 0x27c244: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x27c244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_27c248:
    // 0x27c248: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x27c248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_27c24c:
    // 0x27c24c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x27c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_27c250:
    // 0x27c250: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27c250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27c254:
    // 0x27c254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c258:
    // 0x27c258: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x27c258u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_27c25c:
    // 0x27c25c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27c25cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_27c260:
    // 0x27c260: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27c260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c264:
    // 0x27c264: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_27c268:
    if (ctx->pc == 0x27C268u) {
        ctx->pc = 0x27C26Cu;
        goto label_27c26c;
    }
    ctx->pc = 0x27C264u;
    {
        const bool branch_taken_0x27c264 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c264) {
            ctx->pc = 0x27C27Cu;
            goto label_27c27c;
        }
    }
    ctx->pc = 0x27C26Cu;
label_27c26c:
    // 0x27c26c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c26cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c270:
    // 0x27c270: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27c270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27c274:
    // 0x27c274: 0x10000008  b           . + 4 + (0x8 << 2)
label_27c278:
    if (ctx->pc == 0x27C278u) {
        ctx->pc = 0x27C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C274u;
        // 0x27c278: 0xa2630782  sb          $v1, 0x782($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1922), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C27Cu;
        goto label_27c27c;
    }
    ctx->pc = 0x27C274u;
    {
        const bool branch_taken_0x27c274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C274u;
        // 0x27c278: 0xa2630782  sb          $v1, 0x782($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1922), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c274) {
            ctx->pc = 0x27C298u;
            goto label_27c298;
        }
    }
    ctx->pc = 0x27C27Cu;
label_27c27c:
    // 0x27c27c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27c27cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c280:
    // 0x27c280: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27c280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27c284:
    // 0x27c284: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c284u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c288:
    // 0x27c288: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27c288u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27c28c:
    // 0x27c28c: 0x0  nop
    ctx->pc = 0x27c28cu;
    // NOP
label_27c290:
    // 0x27c290: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27c290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27c294:
    // 0x27c294: 0xa2630782  sb          $v1, 0x782($s3)
    ctx->pc = 0x27c294u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1922), (uint8_t)GPR_U32(ctx, 3));
label_27c298:
    // 0x27c298: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x27c298u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_27c29c:
    // 0x27c29c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27c2a0:
    // 0x27c2a0: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
label_27c2a4:
    if (ctx->pc == 0x27C2A4u) {
        ctx->pc = 0x27C2A8u;
        goto label_27c2a8;
    }
    ctx->pc = 0x27C2A0u;
    {
        const bool branch_taken_0x27c2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27c2a0) {
            ctx->pc = 0x27C3A0u;
            goto label_27c3a0;
        }
    }
    ctx->pc = 0x27C2A8u;
label_27c2a8:
    // 0x27c2a8: 0x82a4000b  lb          $a0, 0xB($s5)
    ctx->pc = 0x27c2a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 11)));
label_27c2ac:
    // 0x27c2ac: 0x92620782  lbu         $v0, 0x782($s3)
    ctx->pc = 0x27c2acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1922)));
label_27c2b0:
    // 0x27c2b0: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x27c2b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27c2b4:
    // 0x27c2b4: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_27c2b8:
    if (ctx->pc == 0x27C2B8u) {
        ctx->pc = 0x27C2BCu;
        goto label_27c2bc;
    }
    ctx->pc = 0x27C2B4u;
    {
        const bool branch_taken_0x27c2b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c2b4) {
            ctx->pc = 0x27C348u;
            goto label_27c348;
        }
    }
    ctx->pc = 0x27C2BCu;
label_27c2bc:
    // 0x27c2bc: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_27c2c0:
    if (ctx->pc == 0x27C2C0u) {
        ctx->pc = 0x27C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2BCu;
        // 0x27c2c0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C2C4u;
        goto label_27c2c4;
    }
    ctx->pc = 0x27C2BCu;
    {
        const bool branch_taken_0x27c2bc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2BCu;
        // 0x27c2c0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2bc) {
            ctx->pc = 0x27C2D0u;
            goto label_27c2d0;
        }
    }
    ctx->pc = 0x27C2C4u;
label_27c2c4:
    // 0x27c2c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27c2c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c2c8:
    // 0x27c2c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_27c2cc:
    if (ctx->pc == 0x27C2CCu) {
        ctx->pc = 0x27C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2C8u;
        // 0x27c2cc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C2D0u;
        goto label_27c2d0;
    }
    ctx->pc = 0x27C2C8u;
    {
        const bool branch_taken_0x27c2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2C8u;
        // 0x27c2cc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2c8) {
            ctx->pc = 0x27C2E8u;
            goto label_27c2e8;
        }
    }
    ctx->pc = 0x27C2D0u;
label_27c2d0:
    // 0x27c2d0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x27c2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_27c2d4:
    // 0x27c2d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27c2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27c2d8:
    // 0x27c2d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27c2d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c2dc:
    // 0x27c2dc: 0x0  nop
    ctx->pc = 0x27c2dcu;
    // NOP
label_27c2e0:
    // 0x27c2e0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x27c2e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_27c2e4:
    // 0x27c2e4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x27c2e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_27c2e8:
    // 0x27c2e8: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x27c2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c2ec:
    // 0x27c2ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x27c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_27c2f0:
    // 0x27c2f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c2f4:
    // 0x27c2f4: 0x0  nop
    ctx->pc = 0x27c2f4u;
    // NOP
label_27c2f8:
    // 0x27c2f8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27c2f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_27c2fc:
    // 0x27c2fc: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x27c2fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_27c300:
    // 0x27c300: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27c300u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c304:
    // 0x27c304: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_27c308:
    if (ctx->pc == 0x27C308u) {
        ctx->pc = 0x27C30Cu;
        goto label_27c30c;
    }
    ctx->pc = 0x27C304u;
    {
        const bool branch_taken_0x27c304 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c304) {
            ctx->pc = 0x27C31Cu;
            goto label_27c31c;
        }
    }
    ctx->pc = 0x27C30Cu;
label_27c30c:
    // 0x27c30c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c30cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c310:
    // 0x27c310: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27c310u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27c314:
    // 0x27c314: 0x10000008  b           . + 4 + (0x8 << 2)
label_27c318:
    if (ctx->pc == 0x27C318u) {
        ctx->pc = 0x27C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C314u;
        // 0x27c318: 0x92620782  lbu         $v0, 0x782($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1922)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C31Cu;
        goto label_27c31c;
    }
    ctx->pc = 0x27C314u;
    {
        const bool branch_taken_0x27c314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C314u;
        // 0x27c318: 0x92620782  lbu         $v0, 0x782($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1922)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c314) {
            ctx->pc = 0x27C338u;
            goto label_27c338;
        }
    }
    ctx->pc = 0x27C31Cu;
label_27c31c:
    // 0x27c31c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27c31cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c320:
    // 0x27c320: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27c320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27c324:
    // 0x27c324: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c324u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c328:
    // 0x27c328: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27c328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27c32c:
    // 0x27c32c: 0x0  nop
    ctx->pc = 0x27c32cu;
    // NOP
label_27c330:
    // 0x27c330: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27c330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27c334:
    // 0x27c334: 0x92620782  lbu         $v0, 0x782($s3)
    ctx->pc = 0x27c334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1922)));
label_27c338:
    // 0x27c338: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x27c338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_27c33c:
    // 0x27c33c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x27c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27c340:
    // 0x27c340: 0x10000017  b           . + 4 + (0x17 << 2)
label_27c344:
    if (ctx->pc == 0x27C344u) {
        ctx->pc = 0x27C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C340u;
        // 0x27c344: 0xa2620782  sb          $v0, 0x782($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1922), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C348u;
        goto label_27c348;
    }
    ctx->pc = 0x27C340u;
    {
        const bool branch_taken_0x27c340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C340u;
        // 0x27c344: 0xa2620782  sb          $v0, 0x782($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1922), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c340) {
            ctx->pc = 0x27C3A0u;
            goto label_27c3a0;
        }
    }
    ctx->pc = 0x27C348u;
label_27c348:
    // 0x27c348: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x27c348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_27c34c:
    // 0x27c34c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x27c34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c350:
    // 0x27c350: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27c350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27c354:
    // 0x27c354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c358:
    // 0x27c358: 0x0  nop
    ctx->pc = 0x27c358u;
    // NOP
label_27c35c:
    // 0x27c35c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27c35cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_27c360:
    // 0x27c360: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x27c360u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_27c364:
    // 0x27c364: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27c364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c368:
    // 0x27c368: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_27c36c:
    if (ctx->pc == 0x27C36Cu) {
        ctx->pc = 0x27C370u;
        goto label_27c370;
    }
    ctx->pc = 0x27C368u;
    {
        const bool branch_taken_0x27c368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c368) {
            ctx->pc = 0x27C380u;
            goto label_27c380;
        }
    }
    ctx->pc = 0x27C370u;
label_27c370:
    // 0x27c370: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c370u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c374:
    // 0x27c374: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27c374u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27c378:
    // 0x27c378: 0x10000008  b           . + 4 + (0x8 << 2)
label_27c37c:
    if (ctx->pc == 0x27C37Cu) {
        ctx->pc = 0x27C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C378u;
        // 0x27c37c: 0xa2630782  sb          $v1, 0x782($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1922), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C380u;
        goto label_27c380;
    }
    ctx->pc = 0x27C378u;
    {
        const bool branch_taken_0x27c378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C378u;
        // 0x27c37c: 0xa2630782  sb          $v1, 0x782($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1922), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c378) {
            ctx->pc = 0x27C39Cu;
            goto label_27c39c;
        }
    }
    ctx->pc = 0x27C380u;
label_27c380:
    // 0x27c380: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27c380u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c384:
    // 0x27c384: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27c384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27c388:
    // 0x27c388: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c388u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c38c:
    // 0x27c38c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27c38cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27c390:
    // 0x27c390: 0x0  nop
    ctx->pc = 0x27c390u;
    // NOP
label_27c394:
    // 0x27c394: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27c394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27c398:
    // 0x27c398: 0xa2630782  sb          $v1, 0x782($s3)
    ctx->pc = 0x27c398u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1922), (uint8_t)GPR_U32(ctx, 3));
label_27c39c:
    // 0x27c39c: 0x0  nop
    ctx->pc = 0x27c39cu;
    // NOP
label_27c3a0:
    // 0x27c3a0: 0x92d00005  lbu         $s0, 0x5($s6)
    ctx->pc = 0x27c3a0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 5)));
label_27c3a4:
    // 0x27c3a4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_27c3a8:
    if (ctx->pc == 0x27C3A8u) {
        ctx->pc = 0x27C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3A4u;
        // 0x27c3a8: 0x102083  sra         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C3ACu;
        goto label_27c3ac;
    }
    ctx->pc = 0x27C3A4u;
    {
        const bool branch_taken_0x27c3a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3A4u;
        // 0x27c3a8: 0x102083  sra         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c3a4) {
            ctx->pc = 0x27C438u;
            goto label_27c438;
        }
    }
    ctx->pc = 0x27C3ACu;
label_27c3ac:
    // 0x27c3ac: 0xc0969c8  jal         func_25A720
label_27c3b0:
    if (ctx->pc == 0x27C3B0u) {
        ctx->pc = 0x27C3B4u;
        goto label_27c3b4;
    }
    ctx->pc = 0x27C3ACu;
    SET_GPR_U32(ctx, 31, 0x27C3B4u);
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x27C3ACu, 0x27C3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3B4u;
label_27c3b4:
    // 0x27c3b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x27c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_27c3b8:
    // 0x27c3b8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_27c3bc:
    if (ctx->pc == 0x27C3BCu) {
        ctx->pc = 0x27C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3B8u;
        // 0x27c3bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C3C0u;
        goto label_27c3c0;
    }
    ctx->pc = 0x27C3B8u;
    {
        const bool branch_taken_0x27c3b8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3B8u;
        // 0x27c3bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c3b8) {
            ctx->pc = 0x27C3CCu;
            goto label_27c3cc;
        }
    }
    ctx->pc = 0x27C3C0u;
label_27c3c0:
    // 0x27c3c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c3c4:
    // 0x27c3c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_27c3c8:
    if (ctx->pc == 0x27C3C8u) {
        ctx->pc = 0x27C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3C4u;
        // 0x27c3c8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C3CCu;
        goto label_27c3cc;
    }
    ctx->pc = 0x27C3C4u;
    {
        const bool branch_taken_0x27c3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3C4u;
        // 0x27c3c8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c3c4) {
            ctx->pc = 0x27C3E4u;
            goto label_27c3e4;
        }
    }
    ctx->pc = 0x27C3CCu;
label_27c3cc:
    // 0x27c3cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27c3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_27c3d0:
    // 0x27c3d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27c3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27c3d4:
    // 0x27c3d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27c3d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c3d8:
    // 0x27c3d8: 0x0  nop
    ctx->pc = 0x27c3d8u;
    // NOP
label_27c3dc:
    // 0x27c3dc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x27c3dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_27c3e0:
    // 0x27c3e0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x27c3e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_27c3e4:
    // 0x27c3e4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x27c3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c3e8:
    // 0x27c3e8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x27c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_27c3ec:
    // 0x27c3ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c3f0:
    // 0x27c3f0: 0x0  nop
    ctx->pc = 0x27c3f0u;
    // NOP
label_27c3f4:
    // 0x27c3f4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27c3f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_27c3f8:
    // 0x27c3f8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x27c3f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_27c3fc:
    // 0x27c3fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27c3fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c400:
    // 0x27c400: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_27c404:
    if (ctx->pc == 0x27C404u) {
        ctx->pc = 0x27C408u;
        goto label_27c408;
    }
    ctx->pc = 0x27C400u;
    {
        const bool branch_taken_0x27c400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c400) {
            ctx->pc = 0x27C418u;
            goto label_27c418;
        }
    }
    ctx->pc = 0x27C408u;
label_27c408:
    // 0x27c408: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c40c:
    // 0x27c40c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27c40cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27c410:
    // 0x27c410: 0x10000008  b           . + 4 + (0x8 << 2)
label_27c414:
    if (ctx->pc == 0x27C414u) {
        ctx->pc = 0x27C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C410u;
        // 0x27c414: 0xa6630784  sh          $v1, 0x784($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1924), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C418u;
        goto label_27c418;
    }
    ctx->pc = 0x27C410u;
    {
        const bool branch_taken_0x27c410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C410u;
        // 0x27c414: 0xa6630784  sh          $v1, 0x784($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1924), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c410) {
            ctx->pc = 0x27C434u;
            goto label_27c434;
        }
    }
    ctx->pc = 0x27C418u;
label_27c418:
    // 0x27c418: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27c418u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c41c:
    // 0x27c41c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27c420:
    // 0x27c420: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c424:
    // 0x27c424: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27c424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27c428:
    // 0x27c428: 0x0  nop
    ctx->pc = 0x27c428u;
    // NOP
label_27c42c:
    // 0x27c42c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27c42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27c430:
    // 0x27c430: 0xa6630784  sh          $v1, 0x784($s3)
    ctx->pc = 0x27c430u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1924), (uint16_t)GPR_U32(ctx, 3));
label_27c434:
    // 0x27c434: 0x0  nop
    ctx->pc = 0x27c434u;
    // NOP
label_27c438:
    // 0x27c438: 0x922a0002  lbu         $t2, 0x2($s1)
    ctx->pc = 0x27c438u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_27c43c:
    // 0x27c43c: 0x3c09008c  lui         $t1, 0x8C
    ctx->pc = 0x27c43cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)140 << 16));
label_27c440:
    // 0x27c440: 0x3c05008c  lui         $a1, 0x8C
    ctx->pc = 0x27c440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
label_27c444:
    // 0x27c444: 0x92270003  lbu         $a3, 0x3($s1)
    ctx->pc = 0x27c444u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_27c448:
    // 0x27c448: 0x25290950  addiu       $t1, $t1, 0x950
    ctx->pc = 0x27c448u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2384));
label_27c44c:
    // 0x27c44c: 0x92c30007  lbu         $v1, 0x7($s6)
    ctx->pc = 0x27c44cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 7)));
label_27c450:
    // 0x27c450: 0x24a531a0  addiu       $a1, $a1, 0x31A0
    ctx->pc = 0x27c450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12704));
label_27c454:
    // 0x27c454: 0x92620782  lbu         $v0, 0x782($s3)
    ctx->pc = 0x27c454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1922)));
label_27c458:
    // 0x27c458: 0x8fa80160  lw          $t0, 0x160($sp)
    ctx->pc = 0x27c458u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_27c45c:
    // 0x27c45c: 0xa3080  sll         $a2, $t2, 2
    ctx->pc = 0x27c45cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_27c460:
    // 0x27c460: 0xca5021  addu        $t2, $a2, $t2
    ctx->pc = 0x27c460u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_27c464:
    // 0x27c464: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x27c464u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_27c468:
    // 0x27c468: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x27c468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_27c46c:
    // 0x27c46c: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x27c46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27c470:
    // 0x27c470: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x27c470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_27c474:
    // 0x27c474: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x27c474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_27c478:
    // 0x27c478: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x27c478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27c47c:
    // 0x27c47c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x27c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_27c480:
    // 0x27c480: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x27c480u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_27c484:
    // 0x27c484: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x27c484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27c488:
    // 0x27c488: 0xc09f950  jal         func_27E540
label_27c48c:
    if (ctx->pc == 0x27C48Cu) {
        ctx->pc = 0x27C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C488u;
        // 0x27c48c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C490u;
        goto label_27c490;
    }
    ctx->pc = 0x27C488u;
    SET_GPR_U32(ctx, 31, 0x27C490u);
    ctx->pc = 0x27C48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C488u;
    // 0x27c48c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E540u, 0x27C488u, 0x27C490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C490u;
label_27c490:
    // 0x27c490: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_27c494:
    if (ctx->pc == 0x27C494u) {
        ctx->pc = 0x27C498u;
        goto label_27c498;
    }
    ctx->pc = 0x27C490u;
    {
        const bool branch_taken_0x27c490 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c490) {
            ctx->pc = 0x27C4A0u;
            goto label_27c4a0;
        }
    }
    ctx->pc = 0x27C498u;
label_27c498:
    // 0x27c498: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x27c498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27c49c:
    // 0x27c49c: 0xae4307cc  sw          $v1, 0x7CC($s2)
    ctx->pc = 0x27c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1996), GPR_U32(ctx, 3));
label_27c4a0:
    // 0x27c4a0: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x27c4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_27c4a4:
    // 0x27c4a4: 0x0  nop
    ctx->pc = 0x27c4a4u;
    // NOP
label_27c4a8:
    // 0x27c4a8: 0x1620fb7f  bnez        $s1, . + 4 + (-0x481 << 2)
label_27c4ac:
    if (ctx->pc == 0x27C4ACu) {
        ctx->pc = 0x27C4B0u;
        goto label_27c4b0;
    }
    ctx->pc = 0x27C4A8u;
    {
        const bool branch_taken_0x27c4a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c4a8) {
            ctx->pc = 0x27B2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b2a8;
        }
    }
    ctx->pc = 0x27C4B0u;
label_27c4b0:
    // 0x27c4b0: 0x93a30210  lbu         $v1, 0x210($sp)
    ctx->pc = 0x27c4b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 528)));
label_27c4b4:
    // 0x27c4b4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_27c4b8:
    if (ctx->pc == 0x27C4B8u) {
        ctx->pc = 0x27C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4B4u;
        // 0x27c4b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C4BCu;
        goto label_27c4bc;
    }
    ctx->pc = 0x27C4B4u;
    {
        const bool branch_taken_0x27c4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4B4u;
        // 0x27c4b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c4b4) {
            ctx->pc = 0x27C4F8u;
            goto label_27c4f8;
        }
    }
    ctx->pc = 0x27C4BCu;
label_27c4bc:
    // 0x27c4bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27c4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27c4c0:
    // 0x27c4c0: 0x908300d8  lbu         $v1, 0xD8($a0)
    ctx->pc = 0x27c4c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 216)));
label_27c4c4:
    // 0x27c4c4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_27c4c8:
    if (ctx->pc == 0x27C4C8u) {
        ctx->pc = 0x27C4CCu;
        goto label_27c4cc;
    }
    ctx->pc = 0x27C4C4u;
    {
        const bool branch_taken_0x27c4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c4c4) {
            ctx->pc = 0x27C4E0u;
            goto label_27c4e0;
        }
    }
    ctx->pc = 0x27C4CCu;
label_27c4cc:
    // 0x27c4cc: 0x908300d9  lbu         $v1, 0xD9($a0)
    ctx->pc = 0x27c4ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 217)));
label_27c4d0:
    // 0x27c4d0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_27c4d4:
    if (ctx->pc == 0x27C4D4u) {
        ctx->pc = 0x27C4D8u;
        goto label_27c4d8;
    }
    ctx->pc = 0x27C4D0u;
    {
        const bool branch_taken_0x27c4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c4d0) {
            ctx->pc = 0x27C4E0u;
            goto label_27c4e0;
        }
    }
    ctx->pc = 0x27C4D8u;
label_27c4d8:
    // 0x27c4d8: 0xfc8000d0  sd          $zero, 0xD0($a0)
    ctx->pc = 0x27c4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 208), GPR_U64(ctx, 0));
label_27c4dc:
    // 0x27c4dc: 0xa08000d8  sb          $zero, 0xD8($a0)
    ctx->pc = 0x27c4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 216), (uint8_t)GPR_U32(ctx, 0));
label_27c4e0:
    // 0x27c4e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27c4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_27c4e4:
    // 0x27c4e4: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x27c4e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_27c4e8:
    // 0x27c4e8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_27c4ec:
    if (ctx->pc == 0x27C4ECu) {
        ctx->pc = 0x27C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4E8u;
        // 0x27c4ec: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C4F0u;
        goto label_27c4f0;
    }
    ctx->pc = 0x27C4E8u;
    {
        const bool branch_taken_0x27c4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4E8u;
        // 0x27c4ec: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c4e8) {
            ctx->pc = 0x27C4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c4c0;
        }
    }
    ctx->pc = 0x27C4F0u;
label_27c4f0:
    // 0x27c4f0: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x27c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_27c4f4:
    // 0x27c4f4: 0xae830050  sw          $v1, 0x50($s4)
    ctx->pc = 0x27c4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 3));
label_27c4f8:
    // 0x27c4f8: 0x93a30210  lbu         $v1, 0x210($sp)
    ctx->pc = 0x27c4f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 528)));
label_27c4fc:
    // 0x27c4fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_27c500:
    if (ctx->pc == 0x27C500u) {
        ctx->pc = 0x27C504u;
        goto label_27c504;
    }
    ctx->pc = 0x27C4FCu;
    {
        const bool branch_taken_0x27c4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c4fc) {
            ctx->pc = 0x27C510u;
            goto label_27c510;
        }
    }
    ctx->pc = 0x27C504u;
label_27c504:
    // 0x27c504: 0x8e6306b4  lw          $v1, 0x6B4($s3)
    ctx->pc = 0x27c504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1716)));
label_27c508:
    // 0x27c508: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x27c508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_27c50c:
    // 0x27c50c: 0xae6306b4  sw          $v1, 0x6B4($s3)
    ctx->pc = 0x27c50cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1716), GPR_U32(ctx, 3));
label_27c510:
    // 0x27c510: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x27c510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_27c514:
    // 0x27c514: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27c514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27c518:
    // 0x27c518: 0x14640013  bne         $v1, $a0, . + 4 + (0x13 << 2)
label_27c51c:
    if (ctx->pc == 0x27C51Cu) {
        ctx->pc = 0x27C520u;
        goto label_27c520;
    }
    ctx->pc = 0x27C518u;
    {
        const bool branch_taken_0x27c518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x27c518) {
            ctx->pc = 0x27C568u;
            goto label_27c568;
        }
    }
    ctx->pc = 0x27C520u;
label_27c520:
    // 0x27c520: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x27c520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c524:
    // 0x27c524: 0x8e84004c  lw          $a0, 0x4C($s4)
    ctx->pc = 0x27c524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_27c528:
    // 0x27c528: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x27c528u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_27c52c:
    // 0x27c52c: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x27c52cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_27c530:
    // 0x27c530: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_27c534:
    if (ctx->pc == 0x27C534u) {
        ctx->pc = 0x27C538u;
        goto label_27c538;
    }
    ctx->pc = 0x27C530u;
    {
        const bool branch_taken_0x27c530 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c530) {
            ctx->pc = 0x27C560u;
            goto label_27c560;
        }
    }
    ctx->pc = 0x27C538u;
label_27c538:
    // 0x27c538: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x27c538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_27c53c:
    // 0x27c53c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27c53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c540:
    // 0x27c540: 0xc096974  jal         func_25A5D0
label_27c544:
    if (ctx->pc == 0x27C544u) {
        ctx->pc = 0x27C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C540u;
        // 0x27c544: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C548u;
        goto label_27c548;
    }
    ctx->pc = 0x27C540u;
    SET_GPR_U32(ctx, 31, 0x27C548u);
    ctx->pc = 0x27C544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C540u;
    // 0x27c544: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x27C540u, 0x27C548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C548u;
label_27c548:
    // 0x27c548: 0x8e6429c0  lw          $a0, 0x29C0($s3)
    ctx->pc = 0x27c548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c54c:
    // 0x27c54c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c550:
    // 0x27c550: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x27c550u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_27c554:
    // 0x27c554: 0x100001ca  b           . + 4 + (0x1CA << 2)
label_27c558:
    if (ctx->pc == 0x27C558u) {
        ctx->pc = 0x27C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C554u;
        // 0x27c558: 0xa2630780  sb          $v1, 0x780($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C55Cu;
        goto label_27c55c;
    }
    ctx->pc = 0x27C554u;
    {
        const bool branch_taken_0x27c554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C554u;
        // 0x27c558: 0xa2630780  sb          $v1, 0x780($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c554) {
            ctx->pc = 0x27CC80u;
            goto label_27cc80;
        }
    }
    ctx->pc = 0x27C55Cu;
label_27c55c:
    // 0x27c55c: 0x0  nop
    ctx->pc = 0x27c55cu;
    // NOP
label_27c560:
    // 0x27c560: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x27c560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
label_27c564:
    // 0x27c564: 0x0  nop
    ctx->pc = 0x27c564u;
    // NOP
label_27c568:
    // 0x27c568: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x27c568u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_27c56c:
    // 0x27c56c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_27c570:
    // 0x27c570: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
label_27c574:
    if (ctx->pc == 0x27C574u) {
        ctx->pc = 0x27C578u;
        goto label_27c578;
    }
    ctx->pc = 0x27C570u;
    {
        const bool branch_taken_0x27c570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27c570) {
            ctx->pc = 0x27C5A0u;
            goto label_27c5a0;
        }
    }
    ctx->pc = 0x27C578u;
label_27c578:
    // 0x27c578: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x27c578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c57c:
    // 0x27c57c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27c57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c580:
    // 0x27c580: 0x9682004c  lhu         $v0, 0x4C($s4)
    ctx->pc = 0x27c580u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 76)));
label_27c584:
    // 0x27c584: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x27c584u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_27c588:
    // 0x27c588: 0xc096974  jal         func_25A5D0
label_27c58c:
    if (ctx->pc == 0x27C58Cu) {
        ctx->pc = 0x27C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C588u;
        // 0x27c58c: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C590u;
        goto label_27c590;
    }
    ctx->pc = 0x27C588u;
    SET_GPR_U32(ctx, 31, 0x27C590u);
    ctx->pc = 0x27C58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C588u;
    // 0x27c58c: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x27C588u, 0x27C590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C590u;
label_27c590:
    // 0x27c590: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x27c590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c594:
    // 0x27c594: 0x100001ba  b           . + 4 + (0x1BA << 2)
label_27c598:
    if (ctx->pc == 0x27C598u) {
        ctx->pc = 0x27C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C594u;
        // 0x27c598: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C59Cu;
        goto label_27c59c;
    }
    ctx->pc = 0x27C594u;
    {
        const bool branch_taken_0x27c594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C594u;
        // 0x27c598: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c594) {
            ctx->pc = 0x27CC80u;
            goto label_27cc80;
        }
    }
    ctx->pc = 0x27C59Cu;
label_27c59c:
    // 0x27c59c: 0x0  nop
    ctx->pc = 0x27c59cu;
    // NOP
label_27c5a0:
    // 0x27c5a0: 0x93a30210  lbu         $v1, 0x210($sp)
    ctx->pc = 0x27c5a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 528)));
label_27c5a4:
    // 0x27c5a4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_27c5a8:
    if (ctx->pc == 0x27C5A8u) {
        ctx->pc = 0x27C5ACu;
        goto label_27c5ac;
    }
    ctx->pc = 0x27C5A4u;
    {
        const bool branch_taken_0x27c5a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c5a4) {
            ctx->pc = 0x27C618u;
            goto label_27c618;
        }
    }
    ctx->pc = 0x27C5ACu;
label_27c5ac:
    // 0x27c5ac: 0x8fa30220  lw          $v1, 0x220($sp)
    ctx->pc = 0x27c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_27c5b0:
    // 0x27c5b0: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_27c5b4:
    if (ctx->pc == 0x27C5B4u) {
        ctx->pc = 0x27C5B8u;
        goto label_27c5b8;
    }
    ctx->pc = 0x27C5B0u;
    {
        const bool branch_taken_0x27c5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c5b0) {
            ctx->pc = 0x27C610u;
            goto label_27c610;
        }
    }
    ctx->pc = 0x27C5B8u;
label_27c5b8:
    // 0x27c5b8: 0x9663078c  lhu         $v1, 0x78C($s3)
    ctx->pc = 0x27c5b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1932)));
label_27c5bc:
    // 0x27c5bc: 0x3063e000  andi        $v1, $v1, 0xE000
    ctx->pc = 0x27c5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57344);
label_27c5c0:
    // 0x27c5c0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_27c5c4:
    if (ctx->pc == 0x27C5C4u) {
        ctx->pc = 0x27C5C8u;
        goto label_27c5c8;
    }
    ctx->pc = 0x27C5C0u;
    {
        const bool branch_taken_0x27c5c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c5c0) {
            ctx->pc = 0x27C610u;
            goto label_27c610;
        }
    }
    ctx->pc = 0x27C5C8u;
label_27c5c8:
    // 0x27c5c8: 0x8e6229c0  lw          $v0, 0x29C0($s3)
    ctx->pc = 0x27c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c5cc:
    // 0x27c5cc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x27c5ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_27c5d0:
    // 0x27c5d0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_27c5d4:
    if (ctx->pc == 0x27C5D4u) {
        ctx->pc = 0x27C5D8u;
        goto label_27c5d8;
    }
    ctx->pc = 0x27C5D0u;
    {
        const bool branch_taken_0x27c5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c5d0) {
            ctx->pc = 0x27C5F8u;
            goto label_27c5f8;
        }
    }
    ctx->pc = 0x27C5D8u;
label_27c5d8:
    // 0x27c5d8: 0x8fa601e0  lw          $a2, 0x1E0($sp)
    ctx->pc = 0x27c5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_27c5dc:
    // 0x27c5dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27c5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27c5e0:
    // 0x27c5e0: 0x8fa7020c  lw          $a3, 0x20C($sp)
    ctx->pc = 0x27c5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_27c5e4:
    // 0x27c5e4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x27c5e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27c5e8:
    // 0x27c5e8: 0xc09fcf4  jal         func_27F3D0
label_27c5ec:
    if (ctx->pc == 0x27C5ECu) {
        ctx->pc = 0x27C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5E8u;
        // 0x27c5ec: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C5F0u;
        goto label_27c5f0;
    }
    ctx->pc = 0x27C5E8u;
    SET_GPR_U32(ctx, 31, 0x27C5F0u);
    ctx->pc = 0x27C5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C5E8u;
    // 0x27c5ec: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3D0u, 0x27C5E8u, 0x27C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C5F0u;
label_27c5f0:
    // 0x27c5f0: 0x100001a3  b           . + 4 + (0x1A3 << 2)
label_27c5f4:
    if (ctx->pc == 0x27C5F4u) {
        ctx->pc = 0x27C5F8u;
        goto label_27c5f8;
    }
    ctx->pc = 0x27C5F0u;
    {
        const bool branch_taken_0x27c5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c5f0) {
            ctx->pc = 0x27CC80u;
            goto label_27cc80;
        }
    }
    ctx->pc = 0x27C5F8u;
label_27c5f8:
    // 0x27c5f8: 0x8fa50220  lw          $a1, 0x220($sp)
    ctx->pc = 0x27c5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_27c5fc:
    // 0x27c5fc: 0x8fa601e0  lw          $a2, 0x1E0($sp)
    ctx->pc = 0x27c5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_27c600:
    // 0x27c600: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27c600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27c604:
    // 0x27c604: 0x8fa7020c  lw          $a3, 0x20C($sp)
    ctx->pc = 0x27c604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_27c608:
    // 0x27c608: 0xc09fedc  jal         func_27FB70
label_27c60c:
    if (ctx->pc == 0x27C60Cu) {
        ctx->pc = 0x27C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C608u;
        // 0x27c60c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C610u;
        goto label_27c610;
    }
    ctx->pc = 0x27C608u;
    SET_GPR_U32(ctx, 31, 0x27C610u);
    ctx->pc = 0x27C60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C608u;
    // 0x27c60c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FB70u, 0x27C608u, 0x27C610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C610u;
label_27c610:
    // 0x27c610: 0x1000019b  b           . + 4 + (0x19B << 2)
label_27c614:
    if (ctx->pc == 0x27C614u) {
        ctx->pc = 0x27C618u;
        goto label_27c618;
    }
    ctx->pc = 0x27C610u;
    {
        const bool branch_taken_0x27c610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c610) {
            ctx->pc = 0x27CC80u;
            goto label_27cc80;
        }
    }
    ctx->pc = 0x27C618u;
label_27c618:
    // 0x27c618: 0x93a20190  lbu         $v0, 0x190($sp)
    ctx->pc = 0x27c618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 400)));
label_27c61c:
    // 0x27c61c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_27c620:
    if (ctx->pc == 0x27C620u) {
        ctx->pc = 0x27C624u;
        goto label_27c624;
    }
    ctx->pc = 0x27C61Cu;
    {
        const bool branch_taken_0x27c61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c61c) {
            ctx->pc = 0x27C638u;
            goto label_27c638;
        }
    }
    ctx->pc = 0x27C624u;
label_27c624:
    // 0x27c624: 0x93a20180  lbu         $v0, 0x180($sp)
    ctx->pc = 0x27c624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
label_27c628:
    // 0x27c628: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_27c62c:
    if (ctx->pc == 0x27C62Cu) {
        ctx->pc = 0x27C630u;
        goto label_27c630;
    }
    ctx->pc = 0x27C628u;
    {
        const bool branch_taken_0x27c628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c628) {
            ctx->pc = 0x27C638u;
            goto label_27c638;
        }
    }
    ctx->pc = 0x27C630u;
label_27c630:
    // 0x27c630: 0xa3a20190  sb          $v0, 0x190($sp)
    ctx->pc = 0x27c630u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 400), (uint8_t)GPR_U32(ctx, 2));
label_27c634:
    // 0x27c634: 0x0  nop
    ctx->pc = 0x27c634u;
    // NOP
label_27c638:
    // 0x27c638: 0x93a20190  lbu         $v0, 0x190($sp)
    ctx->pc = 0x27c638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 400)));
label_27c63c:
    // 0x27c63c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_27c640:
    if (ctx->pc == 0x27C640u) {
        ctx->pc = 0x27C644u;
        goto label_27c644;
    }
    ctx->pc = 0x27C63Cu;
    {
        const bool branch_taken_0x27c63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c63c) {
            ctx->pc = 0x27C680u;
            goto label_27c680;
        }
    }
    ctx->pc = 0x27C644u;
label_27c644:
    // 0x27c644: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_27c648:
    if (ctx->pc == 0x27C648u) {
        ctx->pc = 0x27C64Cu;
        goto label_27c64c;
    }
    ctx->pc = 0x27C644u;
    {
        const bool branch_taken_0x27c644 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c644) {
            ctx->pc = 0x27C668u;
            goto label_27c668;
        }
    }
    ctx->pc = 0x27C64Cu;
label_27c64c:
    // 0x27c64c: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x27c64cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_27c650:
    // 0x27c650: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27c650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c654:
    // 0x27c654: 0x8ee70004  lw          $a3, 0x4($s7)
    ctx->pc = 0x27c654u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_27c658:
    // 0x27c658: 0xc0a5564  jal         func_295590
label_27c65c:
    if (ctx->pc == 0x27C65Cu) {
        ctx->pc = 0x27C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C658u;
        // 0x27c65c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C660u;
        goto label_27c660;
    }
    ctx->pc = 0x27C658u;
    SET_GPR_U32(ctx, 31, 0x27C660u);
    ctx->pc = 0x27C65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C658u;
    // 0x27c65c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295590u, 0x27C658u, 0x27C660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C660u;
label_27c660:
    // 0x27c660: 0x10000007  b           . + 4 + (0x7 << 2)
label_27c664:
    if (ctx->pc == 0x27C664u) {
        ctx->pc = 0x27C668u;
        goto label_27c668;
    }
    ctx->pc = 0x27C660u;
    {
        const bool branch_taken_0x27c660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c660) {
            ctx->pc = 0x27C680u;
            goto label_27c680;
        }
    }
    ctx->pc = 0x27C668u;
label_27c668:
    // 0x27c668: 0x8ee70004  lw          $a3, 0x4($s7)
    ctx->pc = 0x27c668u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_27c66c:
    // 0x27c66c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27c66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c670:
    // 0x27c670: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27c670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27c674:
    // 0x27c674: 0xc0a5564  jal         func_295590
label_27c678:
    if (ctx->pc == 0x27C678u) {
        ctx->pc = 0x27C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C674u;
        // 0x27c678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C67Cu;
        goto label_27c67c;
    }
    ctx->pc = 0x27C674u;
    SET_GPR_U32(ctx, 31, 0x27C67Cu);
    ctx->pc = 0x27C678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C674u;
    // 0x27c678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295590u, 0x27C674u, 0x27C67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C67Cu;
label_27c67c:
    // 0x27c67c: 0x0  nop
    ctx->pc = 0x27c67cu;
    // NOP
label_27c680:
    // 0x27c680: 0x8e6229c0  lw          $v0, 0x29C0($s3)
    ctx->pc = 0x27c680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c684:
    // 0x27c684: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x27c684u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_27c688:
    // 0x27c688: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_27c68c:
    if (ctx->pc == 0x27C68Cu) {
        ctx->pc = 0x27C690u;
        goto label_27c690;
    }
    ctx->pc = 0x27C688u;
    {
        const bool branch_taken_0x27c688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c688) {
            ctx->pc = 0x27C6B0u;
            goto label_27c6b0;
        }
    }
    ctx->pc = 0x27C690u;
label_27c690:
    // 0x27c690: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x27c690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_27c694:
    // 0x27c694: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
label_27c698:
    if (ctx->pc == 0x27C698u) {
        ctx->pc = 0x27C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C694u;
        // 0x27c698: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C69Cu;
        goto label_27c69c;
    }
    ctx->pc = 0x27C694u;
    {
        const bool branch_taken_0x27c694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C694u;
        // 0x27c698: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c694) {
            ctx->pc = 0x27CA38u;
            goto label_27ca38;
        }
    }
    ctx->pc = 0x27C69Cu;
label_27c69c:
    // 0x27c69c: 0x24634f90  addiu       $v1, $v1, 0x4F90
    ctx->pc = 0x27c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20368));
label_27c6a0:
    // 0x27c6a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x27c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27c6a4:
    // 0x27c6a4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x27c6a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_27c6a8:
    // 0x27c6a8: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_27c6ac:
    if (ctx->pc == 0x27C6ACu) {
        ctx->pc = 0x27C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6A8u;
        // 0x27c6ac: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C6B0u;
        goto label_27c6b0;
    }
    ctx->pc = 0x27C6A8u;
    {
        const bool branch_taken_0x27c6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6A8u;
        // 0x27c6ac: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6a8) {
            ctx->pc = 0x27CA38u;
            goto label_27ca38;
        }
    }
    ctx->pc = 0x27C6B0u;
label_27c6b0:
    // 0x27c6b0: 0x9682004c  lhu         $v0, 0x4C($s4)
    ctx->pc = 0x27c6b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 76)));
label_27c6b4:
    // 0x27c6b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27c6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c6b8:
    // 0x27c6b8: 0xc096974  jal         func_25A5D0
label_27c6bc:
    if (ctx->pc == 0x27C6BCu) {
        ctx->pc = 0x27C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6B8u;
        // 0x27c6bc: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C6C0u;
        goto label_27c6c0;
    }
    ctx->pc = 0x27C6B8u;
    SET_GPR_U32(ctx, 31, 0x27C6C0u);
    ctx->pc = 0x27C6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C6B8u;
    // 0x27c6bc: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x27C6B8u, 0x27C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6C0u;
label_27c6c0:
    // 0x27c6c0: 0x8e6429c0  lw          $a0, 0x29C0($s3)
    ctx->pc = 0x27c6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c6c4:
    // 0x27c6c4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x27c6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
label_27c6c8:
    // 0x27c6c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_27c6cc:
    // 0x27c6cc: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x27c6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_27c6d0:
    // 0x27c6d0: 0x90226c10  lbu         $v0, 0x6C10($at)
    ctx->pc = 0x27c6d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27664)));
label_27c6d4:
    // 0x27c6d4: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
label_27c6d8:
    if (ctx->pc == 0x27C6D8u) {
        ctx->pc = 0x27C6DCu;
        goto label_27c6dc;
    }
    ctx->pc = 0x27C6D4u;
    {
        const bool branch_taken_0x27c6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27c6d4) {
            ctx->pc = 0x27C748u;
            goto label_27c748;
        }
    }
    ctx->pc = 0x27C6DCu;
label_27c6dc:
    // 0x27c6dc: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x27c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_27c6e0:
    // 0x27c6e0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_27c6e4:
    if (ctx->pc == 0x27C6E4u) {
        ctx->pc = 0x27C6E8u;
        goto label_27c6e8;
    }
    ctx->pc = 0x27C6E0u;
    {
        const bool branch_taken_0x27c6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c6e0) {
            ctx->pc = 0x27C748u;
            goto label_27c748;
        }
    }
    ctx->pc = 0x27C6E8u;
label_27c6e8:
    // 0x27c6e8: 0x9262000a  lbu         $v0, 0xA($s3)
    ctx->pc = 0x27c6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
label_27c6ec:
    // 0x27c6ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27c6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c6f0:
    // 0x27c6f0: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
label_27c6f4:
    if (ctx->pc == 0x27C6F4u) {
        ctx->pc = 0x27C6F8u;
        goto label_27c6f8;
    }
    ctx->pc = 0x27C6F0u;
    {
        const bool branch_taken_0x27c6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27c6f0) {
            ctx->pc = 0x27C748u;
            goto label_27c748;
        }
    }
    ctx->pc = 0x27C6F8u;
label_27c6f8:
    // 0x27c6f8: 0x8e6229c0  lw          $v0, 0x29C0($s3)
    ctx->pc = 0x27c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c6fc:
    // 0x27c6fc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x27c6fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_27c700:
    // 0x27c700: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x27c700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_27c704:
    // 0x27c704: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_27c708:
    if (ctx->pc == 0x27C708u) {
        ctx->pc = 0x27C70Cu;
        goto label_27c70c;
    }
    ctx->pc = 0x27C704u;
    {
        const bool branch_taken_0x27c704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c704) {
            ctx->pc = 0x27C728u;
            goto label_27c728;
        }
    }
    ctx->pc = 0x27C70Cu;
label_27c70c:
    // 0x27c70c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x27c70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_27c710:
    // 0x27c710: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x27c710u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
label_27c714:
    // 0x27c714: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x27c714u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_27c718:
    // 0x27c718: 0x8e6229c0  lw          $v0, 0x29C0($s3)
    ctx->pc = 0x27c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c71c:
    // 0x27c71c: 0x1000000a  b           . + 4 + (0xA << 2)
label_27c720:
    if (ctx->pc == 0x27C720u) {
        ctx->pc = 0x27C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C71Cu;
        // 0x27c720: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C724u;
        goto label_27c724;
    }
    ctx->pc = 0x27C71Cu;
    {
        const bool branch_taken_0x27c71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C71Cu;
        // 0x27c720: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c71c) {
            ctx->pc = 0x27C748u;
            goto label_27c748;
        }
    }
    ctx->pc = 0x27C724u;
label_27c724:
    // 0x27c724: 0x0  nop
    ctx->pc = 0x27c724u;
    // NOP
label_27c728:
    // 0x27c728: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27c728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_27c72c:
    // 0x27c72c: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x27c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
label_27c730:
    // 0x27c730: 0x8e6229c0  lw          $v0, 0x29C0($s3)
    ctx->pc = 0x27c730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c734:
    // 0x27c734: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x27c734u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_27c738:
    // 0x27c738: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27c738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_27c73c:
    // 0x27c73c: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x27c73cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_27c740:
    // 0x27c740: 0x8e6229c0  lw          $v0, 0x29C0($s3)
    ctx->pc = 0x27c740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c744:
    // 0x27c744: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x27c744u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_27c748:
    // 0x27c748: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x27c748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_27c74c:
    // 0x27c74c: 0x8c23cee8  lw          $v1, -0x3118($at)
    ctx->pc = 0x27c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954728)));
label_27c750:
    // 0x27c750: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27c750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_27c754:
    // 0x27c754: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27c754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27c758:
    // 0x27c758: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27c75c:
    if (ctx->pc == 0x27C75Cu) {
        ctx->pc = 0x27C760u;
        goto label_27c760;
    }
    ctx->pc = 0x27C758u;
    {
        const bool branch_taken_0x27c758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c758) {
            ctx->pc = 0x27C788u;
            goto label_27c788;
        }
    }
    ctx->pc = 0x27C760u;
label_27c760:
    // 0x27c760: 0x9263000a  lbu         $v1, 0xA($s3)
    ctx->pc = 0x27c760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
label_27c764:
    // 0x27c764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c768:
    // 0x27c768: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_27c76c:
    if (ctx->pc == 0x27C76Cu) {
        ctx->pc = 0x27C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C768u;
        // 0x27c76c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C770u;
        goto label_27c770;
    }
    ctx->pc = 0x27C768u;
    {
        const bool branch_taken_0x27c768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C768u;
        // 0x27c76c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c768) {
            ctx->pc = 0x27C7C0u;
            goto label_27c7c0;
        }
    }
    ctx->pc = 0x27C770u;
label_27c770:
    // 0x27c770: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x27c770u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
label_27c774:
    // 0x27c774: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x27c774u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_27c778:
    // 0x27c778: 0x8e6229c0  lw          $v0, 0x29C0($s3)
    ctx->pc = 0x27c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c77c:
    // 0x27c77c: 0x10000010  b           . + 4 + (0x10 << 2)
label_27c780:
    if (ctx->pc == 0x27C780u) {
        ctx->pc = 0x27C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C77Cu;
        // 0x27c780: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C784u;
        goto label_27c784;
    }
    ctx->pc = 0x27C77Cu;
    {
        const bool branch_taken_0x27c77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C77Cu;
        // 0x27c780: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c77c) {
            ctx->pc = 0x27C7C0u;
            goto label_27c7c0;
        }
    }
    ctx->pc = 0x27C784u;
label_27c784:
    // 0x27c784: 0x0  nop
    ctx->pc = 0x27c784u;
    // NOP
label_27c788:
    // 0x27c788: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27c788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27c78c:
    // 0x27c78c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27c78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27c790:
    // 0x27c790: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27c794:
    if (ctx->pc == 0x27C794u) {
        ctx->pc = 0x27C798u;
        goto label_27c798;
    }
    ctx->pc = 0x27C790u;
    {
        const bool branch_taken_0x27c790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c790) {
            ctx->pc = 0x27C7C0u;
            goto label_27c7c0;
        }
    }
    ctx->pc = 0x27C798u;
label_27c798:
    // 0x27c798: 0x9263000a  lbu         $v1, 0xA($s3)
    ctx->pc = 0x27c798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
label_27c79c:
    // 0x27c79c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c7a0:
    // 0x27c7a0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_27c7a4:
    if (ctx->pc == 0x27C7A4u) {
        ctx->pc = 0x27C7A8u;
        goto label_27c7a8;
    }
    ctx->pc = 0x27C7A0u;
    {
        const bool branch_taken_0x27c7a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27c7a0) {
            ctx->pc = 0x27C7C0u;
            goto label_27c7c0;
        }
    }
    ctx->pc = 0x27C7A8u;
label_27c7a8:
    // 0x27c7a8: 0xae80004c  sw          $zero, 0x4C($s4)
    ctx->pc = 0x27c7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
label_27c7ac:
    // 0x27c7ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27c7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27c7b0:
    // 0x27c7b0: 0xc0a6998  jal         func_29A660
label_27c7b4:
    if (ctx->pc == 0x27C7B4u) {
        ctx->pc = 0x27C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7B0u;
        // 0x27c7b4: 0xae800054  sw          $zero, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C7B8u;
        goto label_27c7b8;
    }
    ctx->pc = 0x27C7B0u;
    SET_GPR_U32(ctx, 31, 0x27C7B8u);
    ctx->pc = 0x27C7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C7B0u;
    // 0x27c7b4: 0xae800054  sw          $zero, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x27C7B0u, 0x27C7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C7B8u;
label_27c7b8:
    // 0x27c7b8: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x27c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c7bc:
    // 0x27c7bc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x27c7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_27c7c0:
    // 0x27c7c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x27c7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_27c7c4:
    // 0x27c7c4: 0x8c23ceec  lw          $v1, -0x3114($at)
    ctx->pc = 0x27c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954732)));
label_27c7c8:
    // 0x27c7c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_27c7cc:
    // 0x27c7cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27c7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27c7d0:
    // 0x27c7d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27c7d4:
    if (ctx->pc == 0x27C7D4u) {
        ctx->pc = 0x27C7D8u;
        goto label_27c7d8;
    }
    ctx->pc = 0x27C7D0u;
    {
        const bool branch_taken_0x27c7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c7d0) {
            ctx->pc = 0x27C800u;
            goto label_27c800;
        }
    }
    ctx->pc = 0x27C7D8u;
label_27c7d8:
    // 0x27c7d8: 0x9263000a  lbu         $v1, 0xA($s3)
    ctx->pc = 0x27c7d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
label_27c7dc:
    // 0x27c7dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27c7e0:
    // 0x27c7e0: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_27c7e4:
    if (ctx->pc == 0x27C7E4u) {
        ctx->pc = 0x27C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7E0u;
        // 0x27c7e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C7E8u;
        goto label_27c7e8;
    }
    ctx->pc = 0x27C7E0u;
    {
        const bool branch_taken_0x27c7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7E0u;
        // 0x27c7e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7e0) {
            ctx->pc = 0x27C838u;
            goto label_27c838;
        }
    }
    ctx->pc = 0x27C7E8u;
label_27c7e8:
    // 0x27c7e8: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x27c7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
label_27c7ec:
    // 0x27c7ec: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x27c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_27c7f0:
    // 0x27c7f0: 0x8e6229c0  lw          $v0, 0x29C0($s3)
    ctx->pc = 0x27c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c7f4:
    // 0x27c7f4: 0x10000010  b           . + 4 + (0x10 << 2)
label_27c7f8:
    if (ctx->pc == 0x27C7F8u) {
        ctx->pc = 0x27C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7F4u;
        // 0x27c7f8: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C7FCu;
        goto label_27c7fc;
    }
    ctx->pc = 0x27C7F4u;
    {
        const bool branch_taken_0x27c7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7F4u;
        // 0x27c7f8: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7f4) {
            ctx->pc = 0x27C838u;
            goto label_27c838;
        }
    }
    ctx->pc = 0x27C7FCu;
label_27c7fc:
    // 0x27c7fc: 0x0  nop
    ctx->pc = 0x27c7fcu;
    // NOP
label_27c800:
    // 0x27c800: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27c800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27c804:
    // 0x27c804: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27c804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27c808:
    // 0x27c808: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27c80c:
    if (ctx->pc == 0x27C80Cu) {
        ctx->pc = 0x27C810u;
        goto label_27c810;
    }
    ctx->pc = 0x27C808u;
    {
        const bool branch_taken_0x27c808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c808) {
            ctx->pc = 0x27C838u;
            goto label_27c838;
        }
    }
    ctx->pc = 0x27C810u;
label_27c810:
    // 0x27c810: 0x9263000a  lbu         $v1, 0xA($s3)
    ctx->pc = 0x27c810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
label_27c814:
    // 0x27c814: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27c814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27c818:
    // 0x27c818: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_27c81c:
    if (ctx->pc == 0x27C81Cu) {
        ctx->pc = 0x27C820u;
        goto label_27c820;
    }
    ctx->pc = 0x27C818u;
    {
        const bool branch_taken_0x27c818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27c818) {
            ctx->pc = 0x27C838u;
            goto label_27c838;
        }
    }
    ctx->pc = 0x27C820u;
label_27c820:
    // 0x27c820: 0xae80004c  sw          $zero, 0x4C($s4)
    ctx->pc = 0x27c820u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
label_27c824:
    // 0x27c824: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27c824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27c828:
    // 0x27c828: 0xc0a6998  jal         func_29A660
label_27c82c:
    if (ctx->pc == 0x27C82Cu) {
        ctx->pc = 0x27C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C828u;
        // 0x27c82c: 0xae800054  sw          $zero, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C830u;
        goto label_27c830;
    }
    ctx->pc = 0x27C828u;
    SET_GPR_U32(ctx, 31, 0x27C830u);
    ctx->pc = 0x27C82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C828u;
    // 0x27c82c: 0xae800054  sw          $zero, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x27C828u, 0x27C830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C830u;
label_27c830:
    // 0x27c830: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x27c830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c834:
    // 0x27c834: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x27c834u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_27c838:
    // 0x27c838: 0x8e6206c8  lw          $v0, 0x6C8($s3)
    ctx->pc = 0x27c838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1736)));
label_27c83c:
    // 0x27c83c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x27c83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_27c840:
    // 0x27c840: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_27c844:
    if (ctx->pc == 0x27C844u) {
        ctx->pc = 0x27C848u;
        goto label_27c848;
    }
    ctx->pc = 0x27C840u;
    {
        const bool branch_taken_0x27c840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c840) {
            ctx->pc = 0x27C860u;
            goto label_27c860;
        }
    }
    ctx->pc = 0x27C848u;
label_27c848:
    // 0x27c848: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x27c848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c84c:
    // 0x27c84c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x27c84cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_27c850:
    // 0x27c850: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27c854:
    if (ctx->pc == 0x27C854u) {
        ctx->pc = 0x27C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C850u;
        // 0x27c854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C858u;
        goto label_27c858;
    }
    ctx->pc = 0x27C850u;
    {
        const bool branch_taken_0x27c850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C850u;
        // 0x27c854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c850) {
            ctx->pc = 0x27C860u;
            goto label_27c860;
        }
    }
    ctx->pc = 0x27C858u;
label_27c858:
    // 0x27c858: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x27c858u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_27c85c:
    // 0x27c85c: 0x0  nop
    ctx->pc = 0x27c85cu;
    // NOP
label_27c860:
    // 0x27c860: 0x8e6429c0  lw          $a0, 0x29C0($s3)
    ctx->pc = 0x27c860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c864:
    // 0x27c864: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x27c864u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_27c868:
    // 0x27c868: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_27c86c:
    if (ctx->pc == 0x27C86Cu) {
        ctx->pc = 0x27C870u;
        goto label_27c870;
    }
    ctx->pc = 0x27C868u;
    {
        const bool branch_taken_0x27c868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c868) {
            ctx->pc = 0x27C898u;
            goto label_27c898;
        }
    }
    ctx->pc = 0x27C870u;
label_27c870:
    // 0x27c870: 0x92820073  lbu         $v0, 0x73($s4)
    ctx->pc = 0x27c870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 115)));
label_27c874:
    // 0x27c874: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27c878:
    if (ctx->pc == 0x27C878u) {
        ctx->pc = 0x27C87Cu;
        goto label_27c87c;
    }
    ctx->pc = 0x27C874u;
    {
        const bool branch_taken_0x27c874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c874) {
            ctx->pc = 0x27C898u;
            goto label_27c898;
        }
    }
    ctx->pc = 0x27C87Cu;
label_27c87c:
    // 0x27c87c: 0x968300c4  lhu         $v1, 0xC4($s4)
    ctx->pc = 0x27c87cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 196)));
label_27c880:
    // 0x27c880: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27c880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27c884:
    // 0x27c884: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27c884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_27c888:
    // 0x27c888: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27c88c:
    if (ctx->pc == 0x27C88Cu) {
        ctx->pc = 0x27C890u;
        goto label_27c890;
    }
    ctx->pc = 0x27C888u;
    {
        const bool branch_taken_0x27c888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c888) {
            ctx->pc = 0x27C898u;
            goto label_27c898;
        }
    }
    ctx->pc = 0x27C890u;
label_27c890:
    // 0x27c890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c894:
    // 0x27c894: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x27c894u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_27c898:
    // 0x27c898: 0x8e6429c0  lw          $a0, 0x29C0($s3)
    ctx->pc = 0x27c898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c89c:
    // 0x27c89c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x27c89cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_27c8a0:
    // 0x27c8a0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_27c8a4:
    if (ctx->pc == 0x27C8A4u) {
        ctx->pc = 0x27C8A8u;
        goto label_27c8a8;
    }
    ctx->pc = 0x27C8A0u;
    {
        const bool branch_taken_0x27c8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c8a0) {
            ctx->pc = 0x27C8D0u;
            goto label_27c8d0;
        }
    }
    ctx->pc = 0x27C8A8u;
label_27c8a8:
    // 0x27c8a8: 0x92820074  lbu         $v0, 0x74($s4)
    ctx->pc = 0x27c8a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 116)));
label_27c8ac:
    // 0x27c8ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27c8b0:
    if (ctx->pc == 0x27C8B0u) {
        ctx->pc = 0x27C8B4u;
        goto label_27c8b4;
    }
    ctx->pc = 0x27C8ACu;
    {
        const bool branch_taken_0x27c8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c8ac) {
            ctx->pc = 0x27C8D0u;
            goto label_27c8d0;
        }
    }
    ctx->pc = 0x27C8B4u;
label_27c8b4:
    // 0x27c8b4: 0x968300c2  lhu         $v1, 0xC2($s4)
    ctx->pc = 0x27c8b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
label_27c8b8:
    // 0x27c8b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27c8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27c8bc:
    // 0x27c8bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27c8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_27c8c0:
    // 0x27c8c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27c8c4:
    if (ctx->pc == 0x27C8C4u) {
        ctx->pc = 0x27C8C8u;
        goto label_27c8c8;
    }
    ctx->pc = 0x27C8C0u;
    {
        const bool branch_taken_0x27c8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c8c0) {
            ctx->pc = 0x27C8D0u;
            goto label_27c8d0;
        }
    }
    ctx->pc = 0x27C8C8u;
label_27c8c8:
    // 0x27c8c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c8cc:
    // 0x27c8cc: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x27c8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_27c8d0:
    // 0x27c8d0: 0x8e6229c0  lw          $v0, 0x29C0($s3)
    ctx->pc = 0x27c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27c8d4:
    // 0x27c8d4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x27c8d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_27c8d8:
    // 0x27c8d8: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
label_27c8dc:
    if (ctx->pc == 0x27C8DCu) {
        ctx->pc = 0x27C8E0u;
        goto label_27c8e0;
    }
    ctx->pc = 0x27C8D8u;
    {
        const bool branch_taken_0x27c8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c8d8) {
            ctx->pc = 0x27CA38u;
            goto label_27ca38;
        }
    }
    ctx->pc = 0x27C8E0u;
label_27c8e0:
    // 0x27c8e0: 0x968300c2  lhu         $v1, 0xC2($s4)
    ctx->pc = 0x27c8e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
label_27c8e4:
    // 0x27c8e4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x27c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_27c8e8:
    // 0x27c8e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x27c8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27c8ec:
    // 0x27c8ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x27c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_27c8f0:
    // 0x27c8f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c8f4:
    // 0x27c8f4: 0xa68300c6  sh          $v1, 0xC6($s4)
    ctx->pc = 0x27c8f4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 198), (uint16_t)GPR_U32(ctx, 3));
label_27c8f8:
    // 0x27c8f8: 0x968200c4  lhu         $v0, 0xC4($s4)
    ctx->pc = 0x27c8f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 196)));
label_27c8fc:
    // 0x27c8fc: 0xa68200c8  sh          $v0, 0xC8($s4)
    ctx->pc = 0x27c8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 200), (uint16_t)GPR_U32(ctx, 2));
label_27c900:
    // 0x27c900: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x27c900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c904:
    // 0x27c904: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27c904u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_27c908:
    // 0x27c908: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27c908u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c90c:
    // 0x27c90c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_27c910:
    if (ctx->pc == 0x27C910u) {
        ctx->pc = 0x27C914u;
        goto label_27c914;
    }
    ctx->pc = 0x27C90Cu;
    {
        const bool branch_taken_0x27c90c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c90c) {
            ctx->pc = 0x27C924u;
            goto label_27c924;
        }
    }
    ctx->pc = 0x27C914u;
label_27c914:
    // 0x27c914: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c914u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c918:
    // 0x27c918: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27c918u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27c91c:
    // 0x27c91c: 0x10000008  b           . + 4 + (0x8 << 2)
label_27c920:
    if (ctx->pc == 0x27C920u) {
        ctx->pc = 0x27C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C91Cu;
        // 0x27c920: 0x8e7904d4  lw          $t9, 0x4D4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C924u;
        goto label_27c924;
    }
    ctx->pc = 0x27C91Cu;
    {
        const bool branch_taken_0x27c91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C91Cu;
        // 0x27c920: 0x8e7904d4  lw          $t9, 0x4D4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c91c) {
            ctx->pc = 0x27C940u;
            goto label_27c940;
        }
    }
    ctx->pc = 0x27C924u;
label_27c924:
    // 0x27c924: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27c924u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c928:
    // 0x27c928: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27c928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27c92c:
    // 0x27c92c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c92cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27c930:
    // 0x27c930: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27c930u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27c934:
    // 0x27c934: 0x0  nop
    ctx->pc = 0x27c934u;
    // NOP
label_27c938:
    // 0x27c938: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27c938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27c93c:
    // 0x27c93c: 0x8e7904d4  lw          $t9, 0x4D4($s3)
    ctx->pc = 0x27c93cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1236)));
label_27c940:
    // 0x27c940: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x27c940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_27c944:
    // 0x27c944: 0x8f86892c  lw          $a2, -0x76D4($gp)
    ctx->pc = 0x27c944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936876)));
label_27c948:
    // 0x27c948: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x27c948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_27c94c:
    // 0x27c94c: 0x320f809  jalr        $t9
label_27c950:
    if (ctx->pc == 0x27C950u) {
        ctx->pc = 0x27C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C94Cu;
        // 0x27c950: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C954u;
        goto label_27c954;
    }
    ctx->pc = 0x27C94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C954u);
        ctx->pc = 0x27C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C94Cu;
        // 0x27c950: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C94Cu, 0x27C954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27C954u;
label_27c954:
    // 0x27c954: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x27c954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_27c958:
    // 0x27c958: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_27c95c:
    if (ctx->pc == 0x27C95Cu) {
        ctx->pc = 0x27C960u;
        goto label_27c960;
    }
    ctx->pc = 0x27C958u;
    {
        const bool branch_taken_0x27c958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c958) {
            ctx->pc = 0x27C988u;
            goto label_27c988;
        }
    }
    ctx->pc = 0x27C960u;
label_27c960:
    // 0x27c960: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x27c960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_27c964:
    // 0x27c964: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x27c964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
label_27c968:
    // 0x27c968: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x27c968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_27c96c:
    // 0x27c96c: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x27c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
label_27c970:
    // 0x27c970: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x27c970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_27c974:
    // 0x27c974: 0x9042000e  lbu         $v0, 0xE($v0)
    ctx->pc = 0x27c974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
label_27c978:
    // 0x27c978: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x27c978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_27c97c:
    // 0x27c97c: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x27c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_27c980:
    // 0x27c980: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x27c980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
label_27c984:
    // 0x27c984: 0x0  nop
    ctx->pc = 0x27c984u;
    // NOP
label_27c988:
    // 0x27c988: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x27c988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_27c98c:
    // 0x27c98c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_27c990:
    if (ctx->pc == 0x27C990u) {
        ctx->pc = 0x27C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C98Cu;
        // 0x27c990: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C994u;
        goto label_27c994;
    }
    ctx->pc = 0x27C98Cu;
    {
        const bool branch_taken_0x27c98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C98Cu;
        // 0x27c990: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c98c) {
            ctx->pc = 0x27C9A0u;
            goto label_27c9a0;
        }
    }
    ctx->pc = 0x27C994u;
label_27c994:
    // 0x27c994: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_27c998:
    if (ctx->pc == 0x27C998u) {
        ctx->pc = 0x27C99Cu;
        goto label_27c99c;
    }
    ctx->pc = 0x27C994u;
    {
        const bool branch_taken_0x27c994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27c994) {
            ctx->pc = 0x27C9C0u;
            goto label_27c9c0;
        }
    }
    ctx->pc = 0x27C99Cu;
label_27c99c:
    // 0x27c99c: 0x0  nop
    ctx->pc = 0x27c99cu;
    // NOP
label_27c9a0:
    // 0x27c9a0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x27c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_27c9a4:
    // 0x27c9a4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x27c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_27c9a8:
    // 0x27c9a8: 0x24634fb0  addiu       $v1, $v1, 0x4FB0
    ctx->pc = 0x27c9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20400));
label_27c9ac:
    // 0x27c9ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x27c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27c9b0:
    // 0x27c9b0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x27c9b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_27c9b4:
    // 0x27c9b4: 0x10000008  b           . + 4 + (0x8 << 2)
label_27c9b8:
    if (ctx->pc == 0x27C9B8u) {
        ctx->pc = 0x27C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C9B4u;
        // 0x27c9b8: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C9BCu;
        goto label_27c9bc;
    }
    ctx->pc = 0x27C9B4u;
    {
        const bool branch_taken_0x27c9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C9B4u;
        // 0x27c9b8: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c9b4) {
            ctx->pc = 0x27C9D8u;
            goto label_27c9d8;
        }
    }
    ctx->pc = 0x27C9BCu;
label_27c9bc:
    // 0x27c9bc: 0x0  nop
    ctx->pc = 0x27c9bcu;
    // NOP
label_27c9c0:
    // 0x27c9c0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x27c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_27c9c4:
    // 0x27c9c4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x27c9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_27c9c8:
    // 0x27c9c8: 0x24634f90  addiu       $v1, $v1, 0x4F90
    ctx->pc = 0x27c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20368));
label_27c9cc:
    // 0x27c9cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x27c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27c9d0:
    // 0x27c9d0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x27c9d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_27c9d4:
    // 0x27c9d4: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x27c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_27c9d8:
    // 0x27c9d8: 0x8ee5028c  lw          $a1, 0x28C($s7)
    ctx->pc = 0x27c9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 652)));
label_27c9dc:
    // 0x27c9dc: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_27c9e0:
    if (ctx->pc == 0x27C9E0u) {
        ctx->pc = 0x27C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C9DCu;
        // 0x27c9e0: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C9E4u;
        goto label_27c9e4;
    }
    ctx->pc = 0x27C9DCu;
    {
        const bool branch_taken_0x27c9dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C9DCu;
        // 0x27c9e0: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c9dc) {
            ctx->pc = 0x27CA10u;
            goto label_27ca10;
        }
    }
    ctx->pc = 0x27C9E4u;
label_27c9e4:
    // 0x27c9e4: 0xc07cce0  jal         func_1F3380
label_27c9e8:
    if (ctx->pc == 0x27C9E8u) {
        ctx->pc = 0x27C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C9E4u;
        // 0x27c9e8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C9ECu;
        goto label_27c9ec;
    }
    ctx->pc = 0x27C9E4u;
    SET_GPR_U32(ctx, 31, 0x27C9ECu);
    ctx->pc = 0x27C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C9E4u;
    // 0x27c9e8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x27C9E4u, 0x27C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9ECu;
label_27c9ec:
    // 0x27c9ec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_27c9f0:
    if (ctx->pc == 0x27C9F0u) {
        ctx->pc = 0x27C9F4u;
        goto label_27c9f4;
    }
    ctx->pc = 0x27C9ECu;
    {
        const bool branch_taken_0x27c9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c9ec) {
            ctx->pc = 0x27CA30u;
            goto label_27ca30;
        }
    }
    ctx->pc = 0x27C9F4u;
label_27c9f4:
    // 0x27c9f4: 0x8c5904d4  lw          $t9, 0x4D4($v0)
    ctx->pc = 0x27c9f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1236)));
label_27c9f8:
    // 0x27c9f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27c9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c9fc:
    // 0x27c9fc: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x27c9fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_27ca00:
    // 0x27ca00: 0x320f809  jalr        $t9
label_27ca04:
    if (ctx->pc == 0x27CA04u) {
        ctx->pc = 0x27CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA00u;
        // 0x27ca04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CA08u;
        goto label_27ca08;
    }
    ctx->pc = 0x27CA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27CA08u);
        ctx->pc = 0x27CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA00u;
        // 0x27ca04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CA00u, 0x27CA08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27CA08u;
label_27ca08:
    // 0x27ca08: 0x10000009  b           . + 4 + (0x9 << 2)
label_27ca0c:
    if (ctx->pc == 0x27CA0Cu) {
        ctx->pc = 0x27CA10u;
        goto label_27ca10;
    }
    ctx->pc = 0x27CA08u;
    {
        const bool branch_taken_0x27ca08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ca08) {
            ctx->pc = 0x27CA30u;
            goto label_27ca30;
        }
    }
    ctx->pc = 0x27CA10u;
label_27ca10:
    // 0x27ca10: 0x8f84892c  lw          $a0, -0x76D4($gp)
    ctx->pc = 0x27ca10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936876)));
label_27ca14:
    // 0x27ca14: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_27ca18:
    if (ctx->pc == 0x27CA18u) {
        ctx->pc = 0x27CA1Cu;
        goto label_27ca1c;
    }
    ctx->pc = 0x27CA14u;
    {
        const bool branch_taken_0x27ca14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ca14) {
            ctx->pc = 0x27CA30u;
            goto label_27ca30;
        }
    }
    ctx->pc = 0x27CA1Cu;
label_27ca1c:
    // 0x27ca1c: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x27ca1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_27ca20:
    // 0x27ca20: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x27ca20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_27ca24:
    // 0x27ca24: 0x320f809  jalr        $t9
label_27ca28:
    if (ctx->pc == 0x27CA28u) {
        ctx->pc = 0x27CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA24u;
        // 0x27ca28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CA2Cu;
        goto label_27ca2c;
    }
    ctx->pc = 0x27CA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27CA2Cu);
        ctx->pc = 0x27CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA24u;
        // 0x27ca28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CA24u, 0x27CA2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27CA2Cu;
label_27ca2c:
    // 0x27ca2c: 0x0  nop
    ctx->pc = 0x27ca2cu;
    // NOP
label_27ca30:
    // 0x27ca30: 0xa660078c  sh          $zero, 0x78C($s3)
    ctx->pc = 0x27ca30u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1932), (uint16_t)GPR_U32(ctx, 0));
label_27ca34:
    // 0x27ca34: 0x0  nop
    ctx->pc = 0x27ca34u;
    // NOP
label_27ca38:
    // 0x27ca38: 0x8e6229c0  lw          $v0, 0x29C0($s3)
    ctx->pc = 0x27ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27ca3c:
    // 0x27ca3c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x27ca3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_27ca40:
    // 0x27ca40: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_27ca44:
    if (ctx->pc == 0x27CA44u) {
        ctx->pc = 0x27CA48u;
        goto label_27ca48;
    }
    ctx->pc = 0x27CA40u;
    {
        const bool branch_taken_0x27ca40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ca40) {
            ctx->pc = 0x27CAD8u;
            goto label_27cad8;
        }
    }
    ctx->pc = 0x27CA48u;
label_27ca48:
    // 0x27ca48: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x27ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_27ca4c:
    // 0x27ca4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ca50:
    // 0x27ca50: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
label_27ca54:
    if (ctx->pc == 0x27CA54u) {
        ctx->pc = 0x27CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA50u;
        // 0x27ca54: 0x33c200ff  andi        $v0, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CA58u;
        goto label_27ca58;
    }
    ctx->pc = 0x27CA50u;
    {
        const bool branch_taken_0x27ca50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA50u;
        // 0x27ca54: 0x33c200ff  andi        $v0, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca50) {
            ctx->pc = 0x27CAD8u;
            goto label_27cad8;
        }
    }
    ctx->pc = 0x27CA58u;
label_27ca58:
    // 0x27ca58: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x27ca58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_27ca5c:
    // 0x27ca5c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_27ca60:
    if (ctx->pc == 0x27CA60u) {
        ctx->pc = 0x27CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA5Cu;
        // 0x27ca60: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CA64u;
        goto label_27ca64;
    }
    ctx->pc = 0x27CA5Cu;
    {
        const bool branch_taken_0x27ca5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA5Cu;
        // 0x27ca60: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca5c) {
            ctx->pc = 0x27CAD8u;
            goto label_27cad8;
        }
    }
    ctx->pc = 0x27CA64u;
label_27ca64:
    // 0x27ca64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_27ca68:
    // 0x27ca68: 0x246361a0  addiu       $v1, $v1, 0x61A0
    ctx->pc = 0x27ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24992));
label_27ca6c:
    // 0x27ca6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27ca70:
    // 0x27ca70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27ca74:
    // 0x27ca74: 0x400008  jr          $v0
label_27ca78:
    if (ctx->pc == 0x27CA78u) {
        ctx->pc = 0x27CA7Cu;
        goto label_27ca7c;
    }
    ctx->pc = 0x27CA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27CA80u: goto label_27ca80;
            case 0x27CA90u: goto label_27ca90;
            case 0x27CAA0u: goto label_27caa0;
            case 0x27CAB0u: goto label_27cab0;
            case 0x27CAC0u: goto label_27cac0;
            case 0x27CAD0u: goto label_27cad0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CA74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27CA7Cu;
label_27ca7c:
    // 0x27ca7c: 0x0  nop
    ctx->pc = 0x27ca7cu;
    // NOP
label_27ca80:
    // 0x27ca80: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x27ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_27ca84:
    // 0x27ca84: 0x10000014  b           . + 4 + (0x14 << 2)
label_27ca88:
    if (ctx->pc == 0x27CA88u) {
        ctx->pc = 0x27CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA84u;
        // 0x27ca88: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CA8Cu;
        goto label_27ca8c;
    }
    ctx->pc = 0x27CA84u;
    {
        const bool branch_taken_0x27ca84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA84u;
        // 0x27ca88: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca84) {
            ctx->pc = 0x27CAD8u;
            goto label_27cad8;
        }
    }
    ctx->pc = 0x27CA8Cu;
label_27ca8c:
    // 0x27ca8c: 0x0  nop
    ctx->pc = 0x27ca8cu;
    // NOP
label_27ca90:
    // 0x27ca90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27ca94:
    // 0x27ca94: 0x10000010  b           . + 4 + (0x10 << 2)
label_27ca98:
    if (ctx->pc == 0x27CA98u) {
        ctx->pc = 0x27CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA94u;
        // 0x27ca98: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CA9Cu;
        goto label_27ca9c;
    }
    ctx->pc = 0x27CA94u;
    {
        const bool branch_taken_0x27ca94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA94u;
        // 0x27ca98: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca94) {
            ctx->pc = 0x27CAD8u;
            goto label_27cad8;
        }
    }
    ctx->pc = 0x27CA9Cu;
label_27ca9c:
    // 0x27ca9c: 0x0  nop
    ctx->pc = 0x27ca9cu;
    // NOP
label_27caa0:
    // 0x27caa0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x27caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_27caa4:
    // 0x27caa4: 0x1000000c  b           . + 4 + (0xC << 2)
label_27caa8:
    if (ctx->pc == 0x27CAA8u) {
        ctx->pc = 0x27CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAA4u;
        // 0x27caa8: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CAACu;
        goto label_27caac;
    }
    ctx->pc = 0x27CAA4u;
    {
        const bool branch_taken_0x27caa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAA4u;
        // 0x27caa8: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27caa4) {
            ctx->pc = 0x27CAD8u;
            goto label_27cad8;
        }
    }
    ctx->pc = 0x27CAACu;
label_27caac:
    // 0x27caac: 0x0  nop
    ctx->pc = 0x27caacu;
    // NOP
label_27cab0:
    // 0x27cab0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x27cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_27cab4:
    // 0x27cab4: 0x10000008  b           . + 4 + (0x8 << 2)
label_27cab8:
    if (ctx->pc == 0x27CAB8u) {
        ctx->pc = 0x27CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAB4u;
        // 0x27cab8: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CABCu;
        goto label_27cabc;
    }
    ctx->pc = 0x27CAB4u;
    {
        const bool branch_taken_0x27cab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAB4u;
        // 0x27cab8: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cab4) {
            ctx->pc = 0x27CAD8u;
            goto label_27cad8;
        }
    }
    ctx->pc = 0x27CABCu;
label_27cabc:
    // 0x27cabc: 0x0  nop
    ctx->pc = 0x27cabcu;
    // NOP
label_27cac0:
    // 0x27cac0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27cac4:
    // 0x27cac4: 0x10000004  b           . + 4 + (0x4 << 2)
label_27cac8:
    if (ctx->pc == 0x27CAC8u) {
        ctx->pc = 0x27CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAC4u;
        // 0x27cac8: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CACCu;
        goto label_27cacc;
    }
    ctx->pc = 0x27CAC4u;
    {
        const bool branch_taken_0x27cac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAC4u;
        // 0x27cac8: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cac4) {
            ctx->pc = 0x27CAD8u;
            goto label_27cad8;
        }
    }
    ctx->pc = 0x27CACCu;
label_27cacc:
    // 0x27cacc: 0x0  nop
    ctx->pc = 0x27caccu;
    // NOP
label_27cad0:
    // 0x27cad0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x27cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_27cad4:
    // 0x27cad4: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x27cad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_27cad8:
    // 0x27cad8: 0x8fa2020c  lw          $v0, 0x20C($sp)
    ctx->pc = 0x27cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_27cadc:
    // 0x27cadc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_27cae0:
    if (ctx->pc == 0x27CAE0u) {
        ctx->pc = 0x27CAE4u;
        goto label_27cae4;
    }
    ctx->pc = 0x27CADCu;
    {
        const bool branch_taken_0x27cadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cadc) {
            ctx->pc = 0x27CAF0u;
            goto label_27caf0;
        }
    }
    ctx->pc = 0x27CAE4u;
label_27cae4:
    // 0x27cae4: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_27cae8:
    if (ctx->pc == 0x27CAE8u) {
        ctx->pc = 0x27CAECu;
        goto label_27caec;
    }
    ctx->pc = 0x27CAE4u;
    {
        const bool branch_taken_0x27cae4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cae4) {
            ctx->pc = 0x27CB10u;
            goto label_27cb10;
        }
    }
    ctx->pc = 0x27CAECu;
label_27caec:
    // 0x27caec: 0x0  nop
    ctx->pc = 0x27caecu;
    // NOP
label_27caf0:
    // 0x27caf0: 0x8fa2020c  lw          $v0, 0x20C($sp)
    ctx->pc = 0x27caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_27caf4:
    // 0x27caf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_27caf8:
    if (ctx->pc == 0x27CAF8u) {
        ctx->pc = 0x27CAFCu;
        goto label_27cafc;
    }
    ctx->pc = 0x27CAF4u;
    {
        const bool branch_taken_0x27caf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27caf4) {
            ctx->pc = 0x27CB08u;
            goto label_27cb08;
        }
    }
    ctx->pc = 0x27CAFCu;
label_27cafc:
    // 0x27cafc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x27cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27cb00:
    // 0x27cb00: 0x1000000b  b           . + 4 + (0xB << 2)
label_27cb04:
    if (ctx->pc == 0x27CB04u) {
        ctx->pc = 0x27CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB00u;
        // 0x27cb04: 0xae6207d0  sw          $v0, 0x7D0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CB08u;
        goto label_27cb08;
    }
    ctx->pc = 0x27CB00u;
    {
        const bool branch_taken_0x27cb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB00u;
        // 0x27cb04: 0xae6207d0  sw          $v0, 0x7D0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb00) {
            ctx->pc = 0x27CB30u;
            goto label_27cb30;
        }
    }
    ctx->pc = 0x27CB08u;
label_27cb08:
    // 0x27cb08: 0x10000009  b           . + 4 + (0x9 << 2)
label_27cb0c:
    if (ctx->pc == 0x27CB0Cu) {
        ctx->pc = 0x27CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB08u;
        // 0x27cb0c: 0xae6007d0  sw          $zero, 0x7D0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CB10u;
        goto label_27cb10;
    }
    ctx->pc = 0x27CB08u;
    {
        const bool branch_taken_0x27cb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB08u;
        // 0x27cb0c: 0xae6007d0  sw          $zero, 0x7D0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb08) {
            ctx->pc = 0x27CB30u;
            goto label_27cb30;
        }
    }
    ctx->pc = 0x27CB10u;
label_27cb10:
    // 0x27cb10: 0x8f82892c  lw          $v0, -0x76D4($gp)
    ctx->pc = 0x27cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936876)));
label_27cb14:
    // 0x27cb14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_27cb18:
    if (ctx->pc == 0x27CB18u) {
        ctx->pc = 0x27CB1Cu;
        goto label_27cb1c;
    }
    ctx->pc = 0x27CB14u;
    {
        const bool branch_taken_0x27cb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cb14) {
            ctx->pc = 0x27CB28u;
            goto label_27cb28;
        }
    }
    ctx->pc = 0x27CB1Cu;
label_27cb1c:
    // 0x27cb1c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x27cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27cb20:
    // 0x27cb20: 0x10000003  b           . + 4 + (0x3 << 2)
label_27cb24:
    if (ctx->pc == 0x27CB24u) {
        ctx->pc = 0x27CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB20u;
        // 0x27cb24: 0xae6207d0  sw          $v0, 0x7D0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CB28u;
        goto label_27cb28;
    }
    ctx->pc = 0x27CB20u;
    {
        const bool branch_taken_0x27cb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB20u;
        // 0x27cb24: 0xae6207d0  sw          $v0, 0x7D0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb20) {
            ctx->pc = 0x27CB30u;
            goto label_27cb30;
        }
    }
    ctx->pc = 0x27CB28u;
label_27cb28:
    // 0x27cb28: 0xae6007d0  sw          $zero, 0x7D0($s3)
    ctx->pc = 0x27cb28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2000), GPR_U32(ctx, 0));
label_27cb2c:
    // 0x27cb2c: 0x0  nop
    ctx->pc = 0x27cb2cu;
    // NOP
label_27cb30:
    // 0x27cb30: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x27cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_27cb34:
    // 0x27cb34: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x27cb34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_27cb38:
    // 0x27cb38: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
label_27cb3c:
    if (ctx->pc == 0x27CB3Cu) {
        ctx->pc = 0x27CB40u;
        goto label_27cb40;
    }
    ctx->pc = 0x27CB38u;
    {
        const bool branch_taken_0x27cb38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cb38) {
            ctx->pc = 0x27CBC0u;
            goto label_27cbc0;
        }
    }
    ctx->pc = 0x27CB40u;
label_27cb40:
    // 0x27cb40: 0x9662078c  lhu         $v0, 0x78C($s3)
    ctx->pc = 0x27cb40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1932)));
label_27cb44:
    // 0x27cb44: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x27cb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_27cb48:
    // 0x27cb48: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_27cb4c:
    if (ctx->pc == 0x27CB4Cu) {
        ctx->pc = 0x27CB50u;
        goto label_27cb50;
    }
    ctx->pc = 0x27CB48u;
    {
        const bool branch_taken_0x27cb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cb48) {
            ctx->pc = 0x27CBC0u;
            goto label_27cbc0;
        }
    }
    ctx->pc = 0x27CB50u;
label_27cb50:
    // 0x27cb50: 0x928202d1  lbu         $v0, 0x2D1($s4)
    ctx->pc = 0x27cb50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 721)));
label_27cb54:
    // 0x27cb54: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x27cb54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_27cb58:
    // 0x27cb58: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_27cb5c:
    if (ctx->pc == 0x27CB5Cu) {
        ctx->pc = 0x27CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB58u;
        // 0x27cb5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CB60u;
        goto label_27cb60;
    }
    ctx->pc = 0x27CB58u;
    {
        const bool branch_taken_0x27cb58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB58u;
        // 0x27cb5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb58) {
            ctx->pc = 0x27CB68u;
            goto label_27cb68;
        }
    }
    ctx->pc = 0x27CB60u;
label_27cb60:
    // 0x27cb60: 0xa28202d1  sb          $v0, 0x2D1($s4)
    ctx->pc = 0x27cb60u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 721), (uint8_t)GPR_U32(ctx, 2));
label_27cb64:
    // 0x27cb64: 0x0  nop
    ctx->pc = 0x27cb64u;
    // NOP
label_27cb68:
    // 0x27cb68: 0x8fa601e0  lw          $a2, 0x1E0($sp)
    ctx->pc = 0x27cb68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_27cb6c:
    // 0x27cb6c: 0x8fa7020c  lw          $a3, 0x20C($sp)
    ctx->pc = 0x27cb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_27cb70:
    // 0x27cb70: 0x8fa801dc  lw          $t0, 0x1DC($sp)
    ctx->pc = 0x27cb70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_27cb74:
    // 0x27cb74: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x27cb74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_27cb78:
    // 0x27cb78: 0xc09fcf4  jal         func_27F3D0
label_27cb7c:
    if (ctx->pc == 0x27CB7Cu) {
        ctx->pc = 0x27CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB78u;
        // 0x27cb7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CB80u;
        goto label_27cb80;
    }
    ctx->pc = 0x27CB78u;
    SET_GPR_U32(ctx, 31, 0x27CB80u);
    ctx->pc = 0x27CB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB78u;
    // 0x27cb7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3D0u, 0x27CB78u, 0x27CB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB80u;
label_27cb80:
    // 0x27cb80: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x27cb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_27cb84:
    // 0x27cb84: 0xa2830058  sb          $v1, 0x58($s4)
    ctx->pc = 0x27cb84u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 88), (uint8_t)GPR_U32(ctx, 3));
label_27cb88:
    // 0x27cb88: 0x92640640  lbu         $a0, 0x640($s3)
    ctx->pc = 0x27cb88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1600)));
label_27cb8c:
    // 0x27cb8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27cb90:
    // 0x27cb90: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
label_27cb94:
    if (ctx->pc == 0x27CB94u) {
        ctx->pc = 0x27CB98u;
        goto label_27cb98;
    }
    ctx->pc = 0x27CB90u;
    {
        const bool branch_taken_0x27cb90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27cb90) {
            ctx->pc = 0x27CC68u;
            goto label_27cc68;
        }
    }
    ctx->pc = 0x27CB98u;
label_27cb98:
    // 0x27cb98: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x27cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_27cb9c:
    // 0x27cb9c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x27cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_27cba0:
    // 0x27cba0: 0x24636180  addiu       $v1, $v1, 0x6180
    ctx->pc = 0x27cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24960));
label_27cba4:
    // 0x27cba4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x27cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27cba8:
    // 0x27cba8: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x27cba8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_27cbac:
    // 0x27cbac: 0xc0e2698  jal         func_389A60
label_27cbb0:
    if (ctx->pc == 0x27CBB0u) {
        ctx->pc = 0x27CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBACu;
        // 0x27cbb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CBB4u;
        goto label_27cbb4;
    }
    ctx->pc = 0x27CBACu;
    SET_GPR_U32(ctx, 31, 0x27CBB4u);
    ctx->pc = 0x27CBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CBACu;
    // 0x27cbb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A60u, 0x27CBACu, 0x27CBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBB4u;
label_27cbb4:
    // 0x27cbb4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_27cbb8:
    if (ctx->pc == 0x27CBB8u) {
        ctx->pc = 0x27CBBCu;
        goto label_27cbbc;
    }
    ctx->pc = 0x27CBB4u;
    {
        const bool branch_taken_0x27cbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cbb4) {
            ctx->pc = 0x27CC68u;
            goto label_27cc68;
        }
    }
    ctx->pc = 0x27CBBCu;
label_27cbbc:
    // 0x27cbbc: 0x0  nop
    ctx->pc = 0x27cbbcu;
    // NOP
label_27cbc0:
    // 0x27cbc0: 0xa2800058  sb          $zero, 0x58($s4)
    ctx->pc = 0x27cbc0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 88), (uint8_t)GPR_U32(ctx, 0));
label_27cbc4:
    // 0x27cbc4: 0x8fa6020c  lw          $a2, 0x20C($sp)
    ctx->pc = 0x27cbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_27cbc8:
    // 0x27cbc8: 0x26640530  addiu       $a0, $s3, 0x530
    ctx->pc = 0x27cbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1328));
label_27cbcc:
    // 0x27cbcc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27cbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27cbd0:
    // 0x27cbd0: 0xc0b2a88  jal         func_2CAA20
label_27cbd4:
    if (ctx->pc == 0x27CBD4u) {
        ctx->pc = 0x27CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBD0u;
        // 0x27cbd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CBD8u;
        goto label_27cbd8;
    }
    ctx->pc = 0x27CBD0u;
    SET_GPR_U32(ctx, 31, 0x27CBD8u);
    ctx->pc = 0x27CBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CBD0u;
    // 0x27cbd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAA20u, 0x27CBD0u, 0x27CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBD8u;
label_27cbd8:
    // 0x27cbd8: 0x8e6229c0  lw          $v0, 0x29C0($s3)
    ctx->pc = 0x27cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_27cbdc:
    // 0x27cbdc: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x27cbdcu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_27cbe0:
    // 0x27cbe0: 0xc0a6998  jal         func_29A660
label_27cbe4:
    if (ctx->pc == 0x27CBE4u) {
        ctx->pc = 0x27CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBE0u;
        // 0x27cbe4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CBE8u;
        goto label_27cbe8;
    }
    ctx->pc = 0x27CBE0u;
    SET_GPR_U32(ctx, 31, 0x27CBE8u);
    ctx->pc = 0x27CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CBE0u;
    // 0x27cbe4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x27CBE0u, 0x27CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBE8u;
label_27cbe8:
    // 0x27cbe8: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x27cbe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_27cbec:
    // 0x27cbec: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x27cbecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_27cbf0:
    // 0x27cbf0: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x27cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_27cbf4:
    // 0x27cbf4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x27cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27cbf8:
    // 0x27cbf8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27cbfc:
    // 0x27cbfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27cbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27cc00:
    // 0x27cc00: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x27cc00u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27cc04:
    // 0x27cc04: 0x0  nop
    ctx->pc = 0x27cc04u;
    // NOP
label_27cc08:
    // 0x27cc08: 0x0  nop
    ctx->pc = 0x27cc08u;
    // NOP
label_27cc0c:
    // 0x27cc0c: 0x1812  mflo        $v1
    ctx->pc = 0x27cc0cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_27cc10:
    // 0x27cc10: 0xc096974  jal         func_25A5D0
label_27cc14:
    if (ctx->pc == 0x27CC14u) {
        ctx->pc = 0x27CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC10u;
        // 0x27cc14: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CC18u;
        goto label_27cc18;
    }
    ctx->pc = 0x27CC10u;
    SET_GPR_U32(ctx, 31, 0x27CC18u);
    ctx->pc = 0x27CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC10u;
    // 0x27cc14: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x27CC10u, 0x27CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC18u;
label_27cc18:
    // 0x27cc18: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x27cc18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27cc1c:
    // 0x27cc1c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x27cc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27cc20:
    // 0x27cc20: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x27cc20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27cc24:
    // 0x27cc24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27cc24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27cc28:
    // 0x27cc28: 0xa2640122  sb          $a0, 0x122($s3)
    ctx->pc = 0x27cc28u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 290), (uint8_t)GPR_U32(ctx, 4));
label_27cc2c:
    // 0x27cc2c: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x27cc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_27cc30:
    // 0x27cc30: 0xa2640121  sb          $a0, 0x121($s3)
    ctx->pc = 0x27cc30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 289), (uint8_t)GPR_U32(ctx, 4));
label_27cc34:
    // 0x27cc34: 0xa2630120  sb          $v1, 0x120($s3)
    ctx->pc = 0x27cc34u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 288), (uint8_t)GPR_U32(ctx, 3));
label_27cc38:
    // 0x27cc38: 0xa2660123  sb          $a2, 0x123($s3)
    ctx->pc = 0x27cc38u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 291), (uint8_t)GPR_U32(ctx, 6));
label_27cc3c:
    // 0x27cc3c: 0x0  nop
    ctx->pc = 0x27cc3cu;
    // NOP
label_27cc40:
    // 0x27cc40: 0x8ca40858  lw          $a0, 0x858($a1)
    ctx->pc = 0x27cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2136)));
label_27cc44:
    // 0x27cc44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_27cc48:
    if (ctx->pc == 0x27CC48u) {
        ctx->pc = 0x27CC4Cu;
        goto label_27cc4c;
    }
    ctx->pc = 0x27CC44u;
    {
        const bool branch_taken_0x27cc44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cc44) {
            ctx->pc = 0x27CC58u;
            goto label_27cc58;
        }
    }
    ctx->pc = 0x27CC4Cu;
label_27cc4c:
    // 0x27cc4c: 0xde630120  ld          $v1, 0x120($s3)
    ctx->pc = 0x27cc4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 288)));
label_27cc50:
    // 0x27cc50: 0xfc830120  sd          $v1, 0x120($a0)
    ctx->pc = 0x27cc50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 288), GPR_U64(ctx, 3));
label_27cc54:
    // 0x27cc54: 0x0  nop
    ctx->pc = 0x27cc54u;
    // NOP
label_27cc58:
    // 0x27cc58: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x27cc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_27cc5c:
    // 0x27cc5c: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x27cc5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_27cc60:
    // 0x27cc60: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_27cc64:
    if (ctx->pc == 0x27CC64u) {
        ctx->pc = 0x27CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC60u;
        // 0x27cc64: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CC68u;
        goto label_27cc68;
    }
    ctx->pc = 0x27CC60u;
    {
        const bool branch_taken_0x27cc60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC60u;
        // 0x27cc64: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc60) {
            ctx->pc = 0x27CC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27cc40;
        }
    }
    ctx->pc = 0x27CC68u;
label_27cc68:
    // 0x27cc68: 0x10000005  b           . + 4 + (0x5 << 2)
label_27cc6c:
    if (ctx->pc == 0x27CC6Cu) {
        ctx->pc = 0x27CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC68u;
        // 0x27cc6c: 0xa27e07d5  sb          $fp, 0x7D5($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2005), (uint8_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CC70u;
        goto label_27cc70;
    }
    ctx->pc = 0x27CC68u;
    {
        const bool branch_taken_0x27cc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC68u;
        // 0x27cc6c: 0xa27e07d5  sb          $fp, 0x7D5($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2005), (uint8_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc68) {
            ctx->pc = 0x27CC80u;
            goto label_27cc80;
        }
    }
    ctx->pc = 0x27CC70u;
label_27cc70:
    // 0x27cc70: 0x93a301a0  lbu         $v1, 0x1A0($sp)
    ctx->pc = 0x27cc70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 416)));
label_27cc74:
    // 0x27cc74: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x27cc74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27cc78:
    // 0x27cc78: 0x1000fe0b  b           . + 4 + (-0x1F5 << 2)
label_27cc7c:
    if (ctx->pc == 0x27CC7Cu) {
        ctx->pc = 0x27CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC78u;
        // 0x27cc7c: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CC80u;
        goto label_27cc80;
    }
    ctx->pc = 0x27CC78u;
    {
        const bool branch_taken_0x27cc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC78u;
        // 0x27cc7c: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc78) {
            ctx->pc = 0x27C4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c4a8;
        }
    }
    ctx->pc = 0x27CC80u;
label_27cc80:
    // 0x27cc80: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27cc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_27cc84:
    // 0x27cc84: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x27cc84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27cc88:
    // 0x27cc88: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27cc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27cc8c:
    // 0x27cc8c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x27cc8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27cc90:
    // 0x27cc90: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x27cc90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27cc94:
    // 0x27cc94: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x27cc94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27cc98:
    // 0x27cc98: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27cc98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27cc9c:
    // 0x27cc9c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27cc9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27cca0:
    // 0x27cca0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27cca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27cca4:
    // 0x27cca4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27cca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27cca8:
    // 0x27cca8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27cca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27ccac:
    // 0x27ccac: 0x3e00008  jr          $ra
label_27ccb0:
    if (ctx->pc == 0x27CCB0u) {
        ctx->pc = 0x27CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCACu;
        // 0x27ccb0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CCB4u;
        goto label_fallthrough_0x27ccac;
    }
    ctx->pc = 0x27CCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCACu;
        // 0x27ccb0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27ccac:
    ctx->pc = 0x27CCB4u;
}
