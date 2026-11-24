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

// Function: sub_002CE100
// Address: 0x2ce100 - 0x2ce948
void sub_002CE100_0x2ce100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE100_0x2ce100");
#endif

    switch (ctx->pc) {
        case 0x2ce100u: goto label_2ce100;
        case 0x2ce104u: goto label_2ce104;
        case 0x2ce108u: goto label_2ce108;
        case 0x2ce10cu: goto label_2ce10c;
        case 0x2ce110u: goto label_2ce110;
        case 0x2ce114u: goto label_2ce114;
        case 0x2ce118u: goto label_2ce118;
        case 0x2ce11cu: goto label_2ce11c;
        case 0x2ce120u: goto label_2ce120;
        case 0x2ce124u: goto label_2ce124;
        case 0x2ce128u: goto label_2ce128;
        case 0x2ce12cu: goto label_2ce12c;
        case 0x2ce130u: goto label_2ce130;
        case 0x2ce134u: goto label_2ce134;
        case 0x2ce138u: goto label_2ce138;
        case 0x2ce13cu: goto label_2ce13c;
        case 0x2ce140u: goto label_2ce140;
        case 0x2ce144u: goto label_2ce144;
        case 0x2ce148u: goto label_2ce148;
        case 0x2ce14cu: goto label_2ce14c;
        case 0x2ce150u: goto label_2ce150;
        case 0x2ce154u: goto label_2ce154;
        case 0x2ce158u: goto label_2ce158;
        case 0x2ce15cu: goto label_2ce15c;
        case 0x2ce160u: goto label_2ce160;
        case 0x2ce164u: goto label_2ce164;
        case 0x2ce168u: goto label_2ce168;
        case 0x2ce16cu: goto label_2ce16c;
        case 0x2ce170u: goto label_2ce170;
        case 0x2ce174u: goto label_2ce174;
        case 0x2ce178u: goto label_2ce178;
        case 0x2ce17cu: goto label_2ce17c;
        case 0x2ce180u: goto label_2ce180;
        case 0x2ce184u: goto label_2ce184;
        case 0x2ce188u: goto label_2ce188;
        case 0x2ce18cu: goto label_2ce18c;
        case 0x2ce190u: goto label_2ce190;
        case 0x2ce194u: goto label_2ce194;
        case 0x2ce198u: goto label_2ce198;
        case 0x2ce19cu: goto label_2ce19c;
        case 0x2ce1a0u: goto label_2ce1a0;
        case 0x2ce1a4u: goto label_2ce1a4;
        case 0x2ce1a8u: goto label_2ce1a8;
        case 0x2ce1acu: goto label_2ce1ac;
        case 0x2ce1b0u: goto label_2ce1b0;
        case 0x2ce1b4u: goto label_2ce1b4;
        case 0x2ce1b8u: goto label_2ce1b8;
        case 0x2ce1bcu: goto label_2ce1bc;
        case 0x2ce1c0u: goto label_2ce1c0;
        case 0x2ce1c4u: goto label_2ce1c4;
        case 0x2ce1c8u: goto label_2ce1c8;
        case 0x2ce1ccu: goto label_2ce1cc;
        case 0x2ce1d0u: goto label_2ce1d0;
        case 0x2ce1d4u: goto label_2ce1d4;
        case 0x2ce1d8u: goto label_2ce1d8;
        case 0x2ce1dcu: goto label_2ce1dc;
        case 0x2ce1e0u: goto label_2ce1e0;
        case 0x2ce1e4u: goto label_2ce1e4;
        case 0x2ce1e8u: goto label_2ce1e8;
        case 0x2ce1ecu: goto label_2ce1ec;
        case 0x2ce1f0u: goto label_2ce1f0;
        case 0x2ce1f4u: goto label_2ce1f4;
        case 0x2ce1f8u: goto label_2ce1f8;
        case 0x2ce1fcu: goto label_2ce1fc;
        case 0x2ce200u: goto label_2ce200;
        case 0x2ce204u: goto label_2ce204;
        case 0x2ce208u: goto label_2ce208;
        case 0x2ce20cu: goto label_2ce20c;
        case 0x2ce210u: goto label_2ce210;
        case 0x2ce214u: goto label_2ce214;
        case 0x2ce218u: goto label_2ce218;
        case 0x2ce21cu: goto label_2ce21c;
        case 0x2ce220u: goto label_2ce220;
        case 0x2ce224u: goto label_2ce224;
        case 0x2ce228u: goto label_2ce228;
        case 0x2ce22cu: goto label_2ce22c;
        case 0x2ce230u: goto label_2ce230;
        case 0x2ce234u: goto label_2ce234;
        case 0x2ce238u: goto label_2ce238;
        case 0x2ce23cu: goto label_2ce23c;
        case 0x2ce240u: goto label_2ce240;
        case 0x2ce244u: goto label_2ce244;
        case 0x2ce248u: goto label_2ce248;
        case 0x2ce24cu: goto label_2ce24c;
        case 0x2ce250u: goto label_2ce250;
        case 0x2ce254u: goto label_2ce254;
        case 0x2ce258u: goto label_2ce258;
        case 0x2ce25cu: goto label_2ce25c;
        case 0x2ce260u: goto label_2ce260;
        case 0x2ce264u: goto label_2ce264;
        case 0x2ce268u: goto label_2ce268;
        case 0x2ce26cu: goto label_2ce26c;
        case 0x2ce270u: goto label_2ce270;
        case 0x2ce274u: goto label_2ce274;
        case 0x2ce278u: goto label_2ce278;
        case 0x2ce27cu: goto label_2ce27c;
        case 0x2ce280u: goto label_2ce280;
        case 0x2ce284u: goto label_2ce284;
        case 0x2ce288u: goto label_2ce288;
        case 0x2ce28cu: goto label_2ce28c;
        case 0x2ce290u: goto label_2ce290;
        case 0x2ce294u: goto label_2ce294;
        case 0x2ce298u: goto label_2ce298;
        case 0x2ce29cu: goto label_2ce29c;
        case 0x2ce2a0u: goto label_2ce2a0;
        case 0x2ce2a4u: goto label_2ce2a4;
        case 0x2ce2a8u: goto label_2ce2a8;
        case 0x2ce2acu: goto label_2ce2ac;
        case 0x2ce2b0u: goto label_2ce2b0;
        case 0x2ce2b4u: goto label_2ce2b4;
        case 0x2ce2b8u: goto label_2ce2b8;
        case 0x2ce2bcu: goto label_2ce2bc;
        case 0x2ce2c0u: goto label_2ce2c0;
        case 0x2ce2c4u: goto label_2ce2c4;
        case 0x2ce2c8u: goto label_2ce2c8;
        case 0x2ce2ccu: goto label_2ce2cc;
        case 0x2ce2d0u: goto label_2ce2d0;
        case 0x2ce2d4u: goto label_2ce2d4;
        case 0x2ce2d8u: goto label_2ce2d8;
        case 0x2ce2dcu: goto label_2ce2dc;
        case 0x2ce2e0u: goto label_2ce2e0;
        case 0x2ce2e4u: goto label_2ce2e4;
        case 0x2ce2e8u: goto label_2ce2e8;
        case 0x2ce2ecu: goto label_2ce2ec;
        case 0x2ce2f0u: goto label_2ce2f0;
        case 0x2ce2f4u: goto label_2ce2f4;
        case 0x2ce2f8u: goto label_2ce2f8;
        case 0x2ce2fcu: goto label_2ce2fc;
        case 0x2ce300u: goto label_2ce300;
        case 0x2ce304u: goto label_2ce304;
        case 0x2ce308u: goto label_2ce308;
        case 0x2ce30cu: goto label_2ce30c;
        case 0x2ce310u: goto label_2ce310;
        case 0x2ce314u: goto label_2ce314;
        case 0x2ce318u: goto label_2ce318;
        case 0x2ce31cu: goto label_2ce31c;
        case 0x2ce320u: goto label_2ce320;
        case 0x2ce324u: goto label_2ce324;
        case 0x2ce328u: goto label_2ce328;
        case 0x2ce32cu: goto label_2ce32c;
        case 0x2ce330u: goto label_2ce330;
        case 0x2ce334u: goto label_2ce334;
        case 0x2ce338u: goto label_2ce338;
        case 0x2ce33cu: goto label_2ce33c;
        case 0x2ce340u: goto label_2ce340;
        case 0x2ce344u: goto label_2ce344;
        case 0x2ce348u: goto label_2ce348;
        case 0x2ce34cu: goto label_2ce34c;
        case 0x2ce350u: goto label_2ce350;
        case 0x2ce354u: goto label_2ce354;
        case 0x2ce358u: goto label_2ce358;
        case 0x2ce35cu: goto label_2ce35c;
        case 0x2ce360u: goto label_2ce360;
        case 0x2ce364u: goto label_2ce364;
        case 0x2ce368u: goto label_2ce368;
        case 0x2ce36cu: goto label_2ce36c;
        case 0x2ce370u: goto label_2ce370;
        case 0x2ce374u: goto label_2ce374;
        case 0x2ce378u: goto label_2ce378;
        case 0x2ce37cu: goto label_2ce37c;
        case 0x2ce380u: goto label_2ce380;
        case 0x2ce384u: goto label_2ce384;
        case 0x2ce388u: goto label_2ce388;
        case 0x2ce38cu: goto label_2ce38c;
        case 0x2ce390u: goto label_2ce390;
        case 0x2ce394u: goto label_2ce394;
        case 0x2ce398u: goto label_2ce398;
        case 0x2ce39cu: goto label_2ce39c;
        case 0x2ce3a0u: goto label_2ce3a0;
        case 0x2ce3a4u: goto label_2ce3a4;
        case 0x2ce3a8u: goto label_2ce3a8;
        case 0x2ce3acu: goto label_2ce3ac;
        case 0x2ce3b0u: goto label_2ce3b0;
        case 0x2ce3b4u: goto label_2ce3b4;
        case 0x2ce3b8u: goto label_2ce3b8;
        case 0x2ce3bcu: goto label_2ce3bc;
        case 0x2ce3c0u: goto label_2ce3c0;
        case 0x2ce3c4u: goto label_2ce3c4;
        case 0x2ce3c8u: goto label_2ce3c8;
        case 0x2ce3ccu: goto label_2ce3cc;
        case 0x2ce3d0u: goto label_2ce3d0;
        case 0x2ce3d4u: goto label_2ce3d4;
        case 0x2ce3d8u: goto label_2ce3d8;
        case 0x2ce3dcu: goto label_2ce3dc;
        case 0x2ce3e0u: goto label_2ce3e0;
        case 0x2ce3e4u: goto label_2ce3e4;
        case 0x2ce3e8u: goto label_2ce3e8;
        case 0x2ce3ecu: goto label_2ce3ec;
        case 0x2ce3f0u: goto label_2ce3f0;
        case 0x2ce3f4u: goto label_2ce3f4;
        case 0x2ce3f8u: goto label_2ce3f8;
        case 0x2ce3fcu: goto label_2ce3fc;
        case 0x2ce400u: goto label_2ce400;
        case 0x2ce404u: goto label_2ce404;
        case 0x2ce408u: goto label_2ce408;
        case 0x2ce40cu: goto label_2ce40c;
        case 0x2ce410u: goto label_2ce410;
        case 0x2ce414u: goto label_2ce414;
        case 0x2ce418u: goto label_2ce418;
        case 0x2ce41cu: goto label_2ce41c;
        case 0x2ce420u: goto label_2ce420;
        case 0x2ce424u: goto label_2ce424;
        case 0x2ce428u: goto label_2ce428;
        case 0x2ce42cu: goto label_2ce42c;
        case 0x2ce430u: goto label_2ce430;
        case 0x2ce434u: goto label_2ce434;
        case 0x2ce438u: goto label_2ce438;
        case 0x2ce43cu: goto label_2ce43c;
        case 0x2ce440u: goto label_2ce440;
        case 0x2ce444u: goto label_2ce444;
        case 0x2ce448u: goto label_2ce448;
        case 0x2ce44cu: goto label_2ce44c;
        case 0x2ce450u: goto label_2ce450;
        case 0x2ce454u: goto label_2ce454;
        case 0x2ce458u: goto label_2ce458;
        case 0x2ce45cu: goto label_2ce45c;
        case 0x2ce460u: goto label_2ce460;
        case 0x2ce464u: goto label_2ce464;
        case 0x2ce468u: goto label_2ce468;
        case 0x2ce46cu: goto label_2ce46c;
        case 0x2ce470u: goto label_2ce470;
        case 0x2ce474u: goto label_2ce474;
        case 0x2ce478u: goto label_2ce478;
        case 0x2ce47cu: goto label_2ce47c;
        case 0x2ce480u: goto label_2ce480;
        case 0x2ce484u: goto label_2ce484;
        case 0x2ce488u: goto label_2ce488;
        case 0x2ce48cu: goto label_2ce48c;
        case 0x2ce490u: goto label_2ce490;
        case 0x2ce494u: goto label_2ce494;
        case 0x2ce498u: goto label_2ce498;
        case 0x2ce49cu: goto label_2ce49c;
        case 0x2ce4a0u: goto label_2ce4a0;
        case 0x2ce4a4u: goto label_2ce4a4;
        case 0x2ce4a8u: goto label_2ce4a8;
        case 0x2ce4acu: goto label_2ce4ac;
        case 0x2ce4b0u: goto label_2ce4b0;
        case 0x2ce4b4u: goto label_2ce4b4;
        case 0x2ce4b8u: goto label_2ce4b8;
        case 0x2ce4bcu: goto label_2ce4bc;
        case 0x2ce4c0u: goto label_2ce4c0;
        case 0x2ce4c4u: goto label_2ce4c4;
        case 0x2ce4c8u: goto label_2ce4c8;
        case 0x2ce4ccu: goto label_2ce4cc;
        case 0x2ce4d0u: goto label_2ce4d0;
        case 0x2ce4d4u: goto label_2ce4d4;
        case 0x2ce4d8u: goto label_2ce4d8;
        case 0x2ce4dcu: goto label_2ce4dc;
        case 0x2ce4e0u: goto label_2ce4e0;
        case 0x2ce4e4u: goto label_2ce4e4;
        case 0x2ce4e8u: goto label_2ce4e8;
        case 0x2ce4ecu: goto label_2ce4ec;
        case 0x2ce4f0u: goto label_2ce4f0;
        case 0x2ce4f4u: goto label_2ce4f4;
        case 0x2ce4f8u: goto label_2ce4f8;
        case 0x2ce4fcu: goto label_2ce4fc;
        case 0x2ce500u: goto label_2ce500;
        case 0x2ce504u: goto label_2ce504;
        case 0x2ce508u: goto label_2ce508;
        case 0x2ce50cu: goto label_2ce50c;
        case 0x2ce510u: goto label_2ce510;
        case 0x2ce514u: goto label_2ce514;
        case 0x2ce518u: goto label_2ce518;
        case 0x2ce51cu: goto label_2ce51c;
        case 0x2ce520u: goto label_2ce520;
        case 0x2ce524u: goto label_2ce524;
        case 0x2ce528u: goto label_2ce528;
        case 0x2ce52cu: goto label_2ce52c;
        case 0x2ce530u: goto label_2ce530;
        case 0x2ce534u: goto label_2ce534;
        case 0x2ce538u: goto label_2ce538;
        case 0x2ce53cu: goto label_2ce53c;
        case 0x2ce540u: goto label_2ce540;
        case 0x2ce544u: goto label_2ce544;
        case 0x2ce548u: goto label_2ce548;
        case 0x2ce54cu: goto label_2ce54c;
        case 0x2ce550u: goto label_2ce550;
        case 0x2ce554u: goto label_2ce554;
        case 0x2ce558u: goto label_2ce558;
        case 0x2ce55cu: goto label_2ce55c;
        case 0x2ce560u: goto label_2ce560;
        case 0x2ce564u: goto label_2ce564;
        case 0x2ce568u: goto label_2ce568;
        case 0x2ce56cu: goto label_2ce56c;
        case 0x2ce570u: goto label_2ce570;
        case 0x2ce574u: goto label_2ce574;
        case 0x2ce578u: goto label_2ce578;
        case 0x2ce57cu: goto label_2ce57c;
        case 0x2ce580u: goto label_2ce580;
        case 0x2ce584u: goto label_2ce584;
        case 0x2ce588u: goto label_2ce588;
        case 0x2ce58cu: goto label_2ce58c;
        case 0x2ce590u: goto label_2ce590;
        case 0x2ce594u: goto label_2ce594;
        case 0x2ce598u: goto label_2ce598;
        case 0x2ce59cu: goto label_2ce59c;
        case 0x2ce5a0u: goto label_2ce5a0;
        case 0x2ce5a4u: goto label_2ce5a4;
        case 0x2ce5a8u: goto label_2ce5a8;
        case 0x2ce5acu: goto label_2ce5ac;
        case 0x2ce5b0u: goto label_2ce5b0;
        case 0x2ce5b4u: goto label_2ce5b4;
        case 0x2ce5b8u: goto label_2ce5b8;
        case 0x2ce5bcu: goto label_2ce5bc;
        case 0x2ce5c0u: goto label_2ce5c0;
        case 0x2ce5c4u: goto label_2ce5c4;
        case 0x2ce5c8u: goto label_2ce5c8;
        case 0x2ce5ccu: goto label_2ce5cc;
        case 0x2ce5d0u: goto label_2ce5d0;
        case 0x2ce5d4u: goto label_2ce5d4;
        case 0x2ce5d8u: goto label_2ce5d8;
        case 0x2ce5dcu: goto label_2ce5dc;
        case 0x2ce5e0u: goto label_2ce5e0;
        case 0x2ce5e4u: goto label_2ce5e4;
        case 0x2ce5e8u: goto label_2ce5e8;
        case 0x2ce5ecu: goto label_2ce5ec;
        case 0x2ce5f0u: goto label_2ce5f0;
        case 0x2ce5f4u: goto label_2ce5f4;
        case 0x2ce5f8u: goto label_2ce5f8;
        case 0x2ce5fcu: goto label_2ce5fc;
        case 0x2ce600u: goto label_2ce600;
        case 0x2ce604u: goto label_2ce604;
        case 0x2ce608u: goto label_2ce608;
        case 0x2ce60cu: goto label_2ce60c;
        case 0x2ce610u: goto label_2ce610;
        case 0x2ce614u: goto label_2ce614;
        case 0x2ce618u: goto label_2ce618;
        case 0x2ce61cu: goto label_2ce61c;
        case 0x2ce620u: goto label_2ce620;
        case 0x2ce624u: goto label_2ce624;
        case 0x2ce628u: goto label_2ce628;
        case 0x2ce62cu: goto label_2ce62c;
        case 0x2ce630u: goto label_2ce630;
        case 0x2ce634u: goto label_2ce634;
        case 0x2ce638u: goto label_2ce638;
        case 0x2ce63cu: goto label_2ce63c;
        case 0x2ce640u: goto label_2ce640;
        case 0x2ce644u: goto label_2ce644;
        case 0x2ce648u: goto label_2ce648;
        case 0x2ce64cu: goto label_2ce64c;
        case 0x2ce650u: goto label_2ce650;
        case 0x2ce654u: goto label_2ce654;
        case 0x2ce658u: goto label_2ce658;
        case 0x2ce65cu: goto label_2ce65c;
        case 0x2ce660u: goto label_2ce660;
        case 0x2ce664u: goto label_2ce664;
        case 0x2ce668u: goto label_2ce668;
        case 0x2ce66cu: goto label_2ce66c;
        case 0x2ce670u: goto label_2ce670;
        case 0x2ce674u: goto label_2ce674;
        case 0x2ce678u: goto label_2ce678;
        case 0x2ce67cu: goto label_2ce67c;
        case 0x2ce680u: goto label_2ce680;
        case 0x2ce684u: goto label_2ce684;
        case 0x2ce688u: goto label_2ce688;
        case 0x2ce68cu: goto label_2ce68c;
        case 0x2ce690u: goto label_2ce690;
        case 0x2ce694u: goto label_2ce694;
        case 0x2ce698u: goto label_2ce698;
        case 0x2ce69cu: goto label_2ce69c;
        case 0x2ce6a0u: goto label_2ce6a0;
        case 0x2ce6a4u: goto label_2ce6a4;
        case 0x2ce6a8u: goto label_2ce6a8;
        case 0x2ce6acu: goto label_2ce6ac;
        case 0x2ce6b0u: goto label_2ce6b0;
        case 0x2ce6b4u: goto label_2ce6b4;
        case 0x2ce6b8u: goto label_2ce6b8;
        case 0x2ce6bcu: goto label_2ce6bc;
        case 0x2ce6c0u: goto label_2ce6c0;
        case 0x2ce6c4u: goto label_2ce6c4;
        case 0x2ce6c8u: goto label_2ce6c8;
        case 0x2ce6ccu: goto label_2ce6cc;
        case 0x2ce6d0u: goto label_2ce6d0;
        case 0x2ce6d4u: goto label_2ce6d4;
        case 0x2ce6d8u: goto label_2ce6d8;
        case 0x2ce6dcu: goto label_2ce6dc;
        case 0x2ce6e0u: goto label_2ce6e0;
        case 0x2ce6e4u: goto label_2ce6e4;
        case 0x2ce6e8u: goto label_2ce6e8;
        case 0x2ce6ecu: goto label_2ce6ec;
        case 0x2ce6f0u: goto label_2ce6f0;
        case 0x2ce6f4u: goto label_2ce6f4;
        case 0x2ce6f8u: goto label_2ce6f8;
        case 0x2ce6fcu: goto label_2ce6fc;
        case 0x2ce700u: goto label_2ce700;
        case 0x2ce704u: goto label_2ce704;
        case 0x2ce708u: goto label_2ce708;
        case 0x2ce70cu: goto label_2ce70c;
        case 0x2ce710u: goto label_2ce710;
        case 0x2ce714u: goto label_2ce714;
        case 0x2ce718u: goto label_2ce718;
        case 0x2ce71cu: goto label_2ce71c;
        case 0x2ce720u: goto label_2ce720;
        case 0x2ce724u: goto label_2ce724;
        case 0x2ce728u: goto label_2ce728;
        case 0x2ce72cu: goto label_2ce72c;
        case 0x2ce730u: goto label_2ce730;
        case 0x2ce734u: goto label_2ce734;
        case 0x2ce738u: goto label_2ce738;
        case 0x2ce73cu: goto label_2ce73c;
        case 0x2ce740u: goto label_2ce740;
        case 0x2ce744u: goto label_2ce744;
        case 0x2ce748u: goto label_2ce748;
        case 0x2ce74cu: goto label_2ce74c;
        case 0x2ce750u: goto label_2ce750;
        case 0x2ce754u: goto label_2ce754;
        case 0x2ce758u: goto label_2ce758;
        case 0x2ce75cu: goto label_2ce75c;
        case 0x2ce760u: goto label_2ce760;
        case 0x2ce764u: goto label_2ce764;
        case 0x2ce768u: goto label_2ce768;
        case 0x2ce76cu: goto label_2ce76c;
        case 0x2ce770u: goto label_2ce770;
        case 0x2ce774u: goto label_2ce774;
        case 0x2ce778u: goto label_2ce778;
        case 0x2ce77cu: goto label_2ce77c;
        case 0x2ce780u: goto label_2ce780;
        case 0x2ce784u: goto label_2ce784;
        case 0x2ce788u: goto label_2ce788;
        case 0x2ce78cu: goto label_2ce78c;
        case 0x2ce790u: goto label_2ce790;
        case 0x2ce794u: goto label_2ce794;
        case 0x2ce798u: goto label_2ce798;
        case 0x2ce79cu: goto label_2ce79c;
        case 0x2ce7a0u: goto label_2ce7a0;
        case 0x2ce7a4u: goto label_2ce7a4;
        case 0x2ce7a8u: goto label_2ce7a8;
        case 0x2ce7acu: goto label_2ce7ac;
        case 0x2ce7b0u: goto label_2ce7b0;
        case 0x2ce7b4u: goto label_2ce7b4;
        case 0x2ce7b8u: goto label_2ce7b8;
        case 0x2ce7bcu: goto label_2ce7bc;
        case 0x2ce7c0u: goto label_2ce7c0;
        case 0x2ce7c4u: goto label_2ce7c4;
        case 0x2ce7c8u: goto label_2ce7c8;
        case 0x2ce7ccu: goto label_2ce7cc;
        case 0x2ce7d0u: goto label_2ce7d0;
        case 0x2ce7d4u: goto label_2ce7d4;
        case 0x2ce7d8u: goto label_2ce7d8;
        case 0x2ce7dcu: goto label_2ce7dc;
        case 0x2ce7e0u: goto label_2ce7e0;
        case 0x2ce7e4u: goto label_2ce7e4;
        case 0x2ce7e8u: goto label_2ce7e8;
        case 0x2ce7ecu: goto label_2ce7ec;
        case 0x2ce7f0u: goto label_2ce7f0;
        case 0x2ce7f4u: goto label_2ce7f4;
        case 0x2ce7f8u: goto label_2ce7f8;
        case 0x2ce7fcu: goto label_2ce7fc;
        case 0x2ce800u: goto label_2ce800;
        case 0x2ce804u: goto label_2ce804;
        case 0x2ce808u: goto label_2ce808;
        case 0x2ce80cu: goto label_2ce80c;
        case 0x2ce810u: goto label_2ce810;
        case 0x2ce814u: goto label_2ce814;
        case 0x2ce818u: goto label_2ce818;
        case 0x2ce81cu: goto label_2ce81c;
        case 0x2ce820u: goto label_2ce820;
        case 0x2ce824u: goto label_2ce824;
        case 0x2ce828u: goto label_2ce828;
        case 0x2ce82cu: goto label_2ce82c;
        case 0x2ce830u: goto label_2ce830;
        case 0x2ce834u: goto label_2ce834;
        case 0x2ce838u: goto label_2ce838;
        case 0x2ce83cu: goto label_2ce83c;
        case 0x2ce840u: goto label_2ce840;
        case 0x2ce844u: goto label_2ce844;
        case 0x2ce848u: goto label_2ce848;
        case 0x2ce84cu: goto label_2ce84c;
        case 0x2ce850u: goto label_2ce850;
        case 0x2ce854u: goto label_2ce854;
        case 0x2ce858u: goto label_2ce858;
        case 0x2ce85cu: goto label_2ce85c;
        case 0x2ce860u: goto label_2ce860;
        case 0x2ce864u: goto label_2ce864;
        case 0x2ce868u: goto label_2ce868;
        case 0x2ce86cu: goto label_2ce86c;
        case 0x2ce870u: goto label_2ce870;
        case 0x2ce874u: goto label_2ce874;
        case 0x2ce878u: goto label_2ce878;
        case 0x2ce87cu: goto label_2ce87c;
        case 0x2ce880u: goto label_2ce880;
        case 0x2ce884u: goto label_2ce884;
        case 0x2ce888u: goto label_2ce888;
        case 0x2ce88cu: goto label_2ce88c;
        case 0x2ce890u: goto label_2ce890;
        case 0x2ce894u: goto label_2ce894;
        case 0x2ce898u: goto label_2ce898;
        case 0x2ce89cu: goto label_2ce89c;
        case 0x2ce8a0u: goto label_2ce8a0;
        case 0x2ce8a4u: goto label_2ce8a4;
        case 0x2ce8a8u: goto label_2ce8a8;
        case 0x2ce8acu: goto label_2ce8ac;
        case 0x2ce8b0u: goto label_2ce8b0;
        case 0x2ce8b4u: goto label_2ce8b4;
        case 0x2ce8b8u: goto label_2ce8b8;
        case 0x2ce8bcu: goto label_2ce8bc;
        case 0x2ce8c0u: goto label_2ce8c0;
        case 0x2ce8c4u: goto label_2ce8c4;
        case 0x2ce8c8u: goto label_2ce8c8;
        case 0x2ce8ccu: goto label_2ce8cc;
        case 0x2ce8d0u: goto label_2ce8d0;
        case 0x2ce8d4u: goto label_2ce8d4;
        case 0x2ce8d8u: goto label_2ce8d8;
        case 0x2ce8dcu: goto label_2ce8dc;
        case 0x2ce8e0u: goto label_2ce8e0;
        case 0x2ce8e4u: goto label_2ce8e4;
        case 0x2ce8e8u: goto label_2ce8e8;
        case 0x2ce8ecu: goto label_2ce8ec;
        case 0x2ce8f0u: goto label_2ce8f0;
        case 0x2ce8f4u: goto label_2ce8f4;
        case 0x2ce8f8u: goto label_2ce8f8;
        case 0x2ce8fcu: goto label_2ce8fc;
        case 0x2ce900u: goto label_2ce900;
        case 0x2ce904u: goto label_2ce904;
        case 0x2ce908u: goto label_2ce908;
        case 0x2ce90cu: goto label_2ce90c;
        case 0x2ce910u: goto label_2ce910;
        case 0x2ce914u: goto label_2ce914;
        case 0x2ce918u: goto label_2ce918;
        case 0x2ce91cu: goto label_2ce91c;
        case 0x2ce920u: goto label_2ce920;
        case 0x2ce924u: goto label_2ce924;
        case 0x2ce928u: goto label_2ce928;
        case 0x2ce92cu: goto label_2ce92c;
        case 0x2ce930u: goto label_2ce930;
        case 0x2ce934u: goto label_2ce934;
        case 0x2ce938u: goto label_2ce938;
        case 0x2ce93cu: goto label_2ce93c;
        case 0x2ce940u: goto label_2ce940;
        case 0x2ce944u: goto label_2ce944;
        default: break;
    }

    ctx->pc = 0x2ce100u;

label_2ce100:
    // 0x2ce100: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2ce100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2ce104:
    // 0x2ce104: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ce104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_2ce108:
    // 0x2ce108: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2ce108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2ce10c:
    // 0x2ce10c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2ce10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2ce110:
    // 0x2ce110: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ce110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2ce114:
    // 0x2ce114: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ce114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2ce118:
    // 0x2ce118: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ce118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2ce11c:
    // 0x2ce11c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ce11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2ce120:
    // 0x2ce120: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ce120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ce124:
    // 0x2ce124: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ce124u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ce128:
    // 0x2ce128: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ce128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ce12c:
    // 0x2ce12c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ce130:
    // 0x2ce130: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ce134:
    // 0x2ce134: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2ce134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_2ce138:
    // 0x2ce138: 0xa3a500df  sb          $a1, 0xDF($sp)
    ctx->pc = 0x2ce138u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 223), (uint8_t)GPR_U32(ctx, 5));
label_2ce13c:
    // 0x2ce13c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x2ce13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_2ce140:
    // 0x2ce140: 0x146001f5  bnez        $v1, . + 4 + (0x1F5 << 2)
label_2ce144:
    if (ctx->pc == 0x2CE144u) {
        ctx->pc = 0x2CE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE140u;
        // 0x2ce144: 0xa3a000c0  sb          $zero, 0xC0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE148u;
        goto label_2ce148;
    }
    ctx->pc = 0x2CE140u;
    {
        const bool branch_taken_0x2ce140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE140u;
        // 0x2ce144: 0xa3a000c0  sb          $zero, 0xC0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce140) {
            ctx->pc = 0x2CE918u;
            goto label_2ce918;
        }
    }
    ctx->pc = 0x2CE148u;
label_2ce148:
    // 0x2ce148: 0x6810009  bgez        $s4, . + 4 + (0x9 << 2)
label_2ce14c:
    if (ctx->pc == 0x2CE14Cu) {
        ctx->pc = 0x2CE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE148u;
        // 0x2ce14c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE150u;
        goto label_2ce150;
    }
    ctx->pc = 0x2CE148u;
    {
        const bool branch_taken_0x2ce148 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x2CE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE148u;
        // 0x2ce14c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce148) {
            ctx->pc = 0x2CE170u;
            goto label_2ce170;
        }
    }
    ctx->pc = 0x2CE150u;
label_2ce150:
    // 0x2ce150: 0xc0b3a54  jal         func_2CE950
label_2ce154:
    if (ctx->pc == 0x2CE154u) {
        ctx->pc = 0x2CE158u;
        goto label_2ce158;
    }
    ctx->pc = 0x2CE150u;
    SET_GPR_U32(ctx, 31, 0x2CE158u);
    ctx->pc = 0x2CE950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE950u, 0x2CE150u, 0x2CE158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE158u;
label_2ce158:
    // 0x2ce158: 0x93a500df  lbu         $a1, 0xDF($sp)
    ctx->pc = 0x2ce158u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
label_2ce15c:
    // 0x2ce15c: 0xc0b3a54  jal         func_2CE950
label_2ce160:
    if (ctx->pc == 0x2CE160u) {
        ctx->pc = 0x2CE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE15Cu;
        // 0x2ce160: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE164u;
        goto label_2ce164;
    }
    ctx->pc = 0x2CE15Cu;
    SET_GPR_U32(ctx, 31, 0x2CE164u);
    ctx->pc = 0x2CE160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE15Cu;
    // 0x2ce160: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE950u, 0x2CE15Cu, 0x2CE164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE164u;
label_2ce164:
    // 0x2ce164: 0x100001ec  b           . + 4 + (0x1EC << 2)
label_2ce168:
    if (ctx->pc == 0x2CE168u) {
        ctx->pc = 0x2CE16Cu;
        goto label_2ce16c;
    }
    ctx->pc = 0x2CE164u;
    {
        const bool branch_taken_0x2ce164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce164) {
            ctx->pc = 0x2CE918u;
            goto label_2ce918;
        }
    }
    ctx->pc = 0x2CE16Cu;
label_2ce16c:
    // 0x2ce16c: 0x0  nop
    ctx->pc = 0x2ce16cu;
    // NOP
label_2ce170:
    // 0x2ce170: 0x27838a54  addiu       $v1, $gp, -0x75AC
    ctx->pc = 0x2ce170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937172));
label_2ce174:
    // 0x2ce174: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x2ce174u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2ce178:
    // 0x2ce178: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x2ce178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_2ce17c:
    // 0x2ce17c: 0x85b821  addu        $s7, $a0, $a1
    ctx->pc = 0x2ce17cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2ce180:
    // 0x2ce180: 0x748021  addu        $s0, $v1, $s4
    ctx->pc = 0x2ce180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2ce184:
    // 0x2ce184: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x2ce184u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce188:
    // 0x2ce188: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_2ce18c:
    if (ctx->pc == 0x2CE18Cu) {
        ctx->pc = 0x2CE18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE188u;
        // 0x2ce18c: 0x8ef20000  lw          $s2, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE190u;
        goto label_2ce190;
    }
    ctx->pc = 0x2CE188u;
    {
        const bool branch_taken_0x2ce188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE188u;
        // 0x2ce18c: 0x8ef20000  lw          $s2, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce188) {
            ctx->pc = 0x2CE1C0u;
            goto label_2ce1c0;
        }
    }
    ctx->pc = 0x2CE190u;
label_2ce190:
    // 0x2ce190: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_2ce194:
    if (ctx->pc == 0x2CE194u) {
        ctx->pc = 0x2CE198u;
        goto label_2ce198;
    }
    ctx->pc = 0x2CE190u;
    {
        const bool branch_taken_0x2ce190 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce190) {
            ctx->pc = 0x2CE1B8u;
            goto label_2ce1b8;
        }
    }
    ctx->pc = 0x2CE198u;
label_2ce198:
    // 0x2ce198: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_2ce19c:
    if (ctx->pc == 0x2CE19Cu) {
        ctx->pc = 0x2CE19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE198u;
        // 0x2ce19c: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE1A0u;
        goto label_2ce1a0;
    }
    ctx->pc = 0x2CE198u;
    {
        const bool branch_taken_0x2ce198 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE198u;
        // 0x2ce19c: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce198) {
            ctx->pc = 0x2CE1C0u;
            goto label_2ce1c0;
        }
    }
    ctx->pc = 0x2CE1A0u;
label_2ce1a0:
    // 0x2ce1a0: 0x8e422ab0  lw          $v0, 0x2AB0($s2)
    ctx->pc = 0x2ce1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
label_2ce1a4:
    // 0x2ce1a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ce1a8:
    if (ctx->pc == 0x2CE1A8u) {
        ctx->pc = 0x2CE1ACu;
        goto label_2ce1ac;
    }
    ctx->pc = 0x2CE1A4u;
    {
        const bool branch_taken_0x2ce1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce1a4) {
            ctx->pc = 0x2CE1C0u;
            goto label_2ce1c0;
        }
    }
    ctx->pc = 0x2CE1ACu;
label_2ce1ac:
    // 0x2ce1ac: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ce1b0:
    if (ctx->pc == 0x2CE1B0u) {
        ctx->pc = 0x2CE1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1ACu;
        // 0x2ce1b0: 0xac402ab0  sw          $zero, 0x2AB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 10928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE1B4u;
        goto label_2ce1b4;
    }
    ctx->pc = 0x2CE1ACu;
    {
        const bool branch_taken_0x2ce1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1ACu;
        // 0x2ce1b0: 0xac402ab0  sw          $zero, 0x2AB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 10928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce1ac) {
            ctx->pc = 0x2CE1C0u;
            goto label_2ce1c0;
        }
    }
    ctx->pc = 0x2CE1B4u;
label_2ce1b4:
    // 0x2ce1b4: 0x0  nop
    ctx->pc = 0x2ce1b4u;
    // NOP
label_2ce1b8:
    // 0x2ce1b8: 0x100001d7  b           . + 4 + (0x1D7 << 2)
label_2ce1bc:
    if (ctx->pc == 0x2CE1BCu) {
        ctx->pc = 0x2CE1C0u;
        goto label_2ce1c0;
    }
    ctx->pc = 0x2CE1B8u;
    {
        const bool branch_taken_0x2ce1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce1b8) {
            ctx->pc = 0x2CE918u;
            goto label_2ce918;
        }
    }
    ctx->pc = 0x2CE1C0u;
label_2ce1c0:
    // 0x2ce1c0: 0x27828a5c  addiu       $v0, $gp, -0x75A4
    ctx->pc = 0x2ce1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937180));
label_2ce1c4:
    // 0x2ce1c4: 0x548821  addu        $s1, $v0, $s4
    ctx->pc = 0x2ce1c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2ce1c8:
    // 0x2ce1c8: 0x82250000  lb          $a1, 0x0($s1)
    ctx->pc = 0x2ce1c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2ce1cc:
    // 0x2ce1cc: 0x27828a64  addiu       $v0, $gp, -0x759C
    ctx->pc = 0x2ce1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937188));
label_2ce1d0:
    // 0x2ce1d0: 0xc0d25d0  jal         func_349740
label_2ce1d4:
    if (ctx->pc == 0x2CE1D4u) {
        ctx->pc = 0x2CE1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1D0u;
        // 0x2ce1d4: 0x54a821  addu        $s5, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE1D8u;
        goto label_2ce1d8;
    }
    ctx->pc = 0x2CE1D0u;
    SET_GPR_U32(ctx, 31, 0x2CE1D8u);
    ctx->pc = 0x2CE1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE1D0u;
    // 0x2ce1d4: 0x54a821  addu        $s5, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349740u, 0x2CE1D0u, 0x2CE1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE1D8u;
label_2ce1d8:
    // 0x2ce1d8: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x2ce1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_2ce1dc:
    // 0x2ce1dc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2ce1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ce1e0:
    // 0x2ce1e0: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2ce1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ce1e4:
    // 0x2ce1e4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2ce1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2ce1e8:
    // 0x2ce1e8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2ce1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2ce1ec:
    // 0x2ce1ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ce1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2ce1f0:
    // 0x2ce1f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ce1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2ce1f4:
    // 0x2ce1f4: 0x94630058  lhu         $v1, 0x58($v1)
    ctx->pc = 0x2ce1f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_2ce1f8:
    // 0x2ce1f8: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x2ce1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
label_2ce1fc:
    // 0x2ce1fc: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x2ce1fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce200:
    // 0x2ce200: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_2ce204:
    if (ctx->pc == 0x2CE204u) {
        ctx->pc = 0x2CE208u;
        goto label_2ce208;
    }
    ctx->pc = 0x2CE200u;
    {
        const bool branch_taken_0x2ce200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce200) {
            ctx->pc = 0x2CE258u;
            goto label_2ce258;
        }
    }
    ctx->pc = 0x2CE208u;
label_2ce208:
    // 0x2ce208: 0xc0d2604  jal         func_349810
label_2ce20c:
    if (ctx->pc == 0x2CE20Cu) {
        ctx->pc = 0x2CE20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE208u;
        // 0x2ce20c: 0x82250000  lb          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE210u;
        goto label_2ce210;
    }
    ctx->pc = 0x2CE208u;
    SET_GPR_U32(ctx, 31, 0x2CE210u);
    ctx->pc = 0x2CE20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE208u;
    // 0x2ce20c: 0x82250000  lb          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349810u, 0x2CE208u, 0x2CE210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE210u;
label_2ce210:
    // 0x2ce210: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2ce214:
    if (ctx->pc == 0x2CE214u) {
        ctx->pc = 0x2CE218u;
        goto label_2ce218;
    }
    ctx->pc = 0x2CE210u;
    {
        const bool branch_taken_0x2ce210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce210) {
            ctx->pc = 0x2CE248u;
            goto label_2ce248;
        }
    }
    ctx->pc = 0x2CE218u;
label_2ce218:
    // 0x2ce218: 0x9044005b  lbu         $a0, 0x5B($v0)
    ctx->pc = 0x2ce218u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 91)));
label_2ce21c:
    // 0x2ce21c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2ce220:
    if (ctx->pc == 0x2CE220u) {
        ctx->pc = 0x2CE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE21Cu;
        // 0x2ce220: 0x27838a68  addiu       $v1, $gp, -0x7598 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE224u;
        goto label_2ce224;
    }
    ctx->pc = 0x2CE21Cu;
    {
        const bool branch_taken_0x2ce21c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE21Cu;
        // 0x2ce220: 0x27838a68  addiu       $v1, $gp, -0x7598 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce21c) {
            ctx->pc = 0x2CE230u;
            goto label_2ce230;
        }
    }
    ctx->pc = 0x2CE224u;
label_2ce224:
    // 0x2ce224: 0x748821  addu        $s1, $v1, $s4
    ctx->pc = 0x2ce224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2ce228:
    // 0x2ce228: 0x1000000f  b           . + 4 + (0xF << 2)
label_2ce22c:
    if (ctx->pc == 0x2CE22Cu) {
        ctx->pc = 0x2CE22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE228u;
        // 0x2ce22c: 0xa2240000  sb          $a0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE230u;
        goto label_2ce230;
    }
    ctx->pc = 0x2CE228u;
    {
        const bool branch_taken_0x2ce228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE228u;
        // 0x2ce22c: 0xa2240000  sb          $a0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce228) {
            ctx->pc = 0x2CE268u;
            goto label_2ce268;
        }
    }
    ctx->pc = 0x2CE230u;
label_2ce230:
    // 0x2ce230: 0x27838a68  addiu       $v1, $gp, -0x7598
    ctx->pc = 0x2ce230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937192));
label_2ce234:
    // 0x2ce234: 0x748821  addu        $s1, $v1, $s4
    ctx->pc = 0x2ce234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2ce238:
    // 0x2ce238: 0x9043005a  lbu         $v1, 0x5A($v0)
    ctx->pc = 0x2ce238u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 90)));
label_2ce23c:
    // 0x2ce23c: 0x1000000a  b           . + 4 + (0xA << 2)
label_2ce240:
    if (ctx->pc == 0x2CE240u) {
        ctx->pc = 0x2CE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE23Cu;
        // 0x2ce240: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE244u;
        goto label_2ce244;
    }
    ctx->pc = 0x2CE23Cu;
    {
        const bool branch_taken_0x2ce23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE23Cu;
        // 0x2ce240: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce23c) {
            ctx->pc = 0x2CE268u;
            goto label_2ce268;
        }
    }
    ctx->pc = 0x2CE244u;
label_2ce244:
    // 0x2ce244: 0x0  nop
    ctx->pc = 0x2ce244u;
    // NOP
label_2ce248:
    // 0x2ce248: 0x27838a68  addiu       $v1, $gp, -0x7598
    ctx->pc = 0x2ce248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937192));
label_2ce24c:
    // 0x2ce24c: 0x748821  addu        $s1, $v1, $s4
    ctx->pc = 0x2ce24cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2ce250:
    // 0x2ce250: 0x10000005  b           . + 4 + (0x5 << 2)
label_2ce254:
    if (ctx->pc == 0x2CE254u) {
        ctx->pc = 0x2CE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE250u;
        // 0x2ce254: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE258u;
        goto label_2ce258;
    }
    ctx->pc = 0x2CE250u;
    {
        const bool branch_taken_0x2ce250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE250u;
        // 0x2ce254: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce250) {
            ctx->pc = 0x2CE268u;
            goto label_2ce268;
        }
    }
    ctx->pc = 0x2CE258u;
label_2ce258:
    // 0x2ce258: 0x27838a68  addiu       $v1, $gp, -0x7598
    ctx->pc = 0x2ce258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937192));
label_2ce25c:
    // 0x2ce25c: 0x748821  addu        $s1, $v1, $s4
    ctx->pc = 0x2ce25cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2ce260:
    // 0x2ce260: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2ce260u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_2ce264:
    // 0x2ce264: 0x0  nop
    ctx->pc = 0x2ce264u;
    // NOP
label_2ce268:
    // 0x2ce268: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2ce268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2ce26c:
    // 0x2ce26c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_2ce270:
    if (ctx->pc == 0x2CE270u) {
        ctx->pc = 0x2CE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE26Cu;
        // 0x2ce270: 0x141840  sll         $v1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE274u;
        goto label_2ce274;
    }
    ctx->pc = 0x2CE26Cu;
    {
        const bool branch_taken_0x2ce26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE26Cu;
        // 0x2ce270: 0x141840  sll         $v1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce26c) {
            ctx->pc = 0x2CE2D0u;
            goto label_2ce2d0;
        }
    }
    ctx->pc = 0x2CE274u;
label_2ce274:
    // 0x2ce274: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x2ce274u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce278:
    // 0x2ce278: 0x742821  addu        $a1, $v1, $s4
    ctx->pc = 0x2ce278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2ce27c:
    // 0x2ce27c: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x2ce27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
label_2ce280:
    // 0x2ce280: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2ce280u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2ce284:
    // 0x2ce284: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x2ce284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_2ce288:
    // 0x2ce288: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ce288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ce28c:
    // 0x2ce28c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2ce28cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2ce290:
    // 0x2ce290: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
label_2ce294:
    if (ctx->pc == 0x2CE294u) {
        ctx->pc = 0x2CE298u;
        goto label_2ce298;
    }
    ctx->pc = 0x2CE290u;
    {
        const bool branch_taken_0x2ce290 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ce290) {
            ctx->pc = 0x2CE2D0u;
            goto label_2ce2d0;
        }
    }
    ctx->pc = 0x2CE298u;
label_2ce298:
    // 0x2ce298: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x2ce298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
label_2ce29c:
    // 0x2ce29c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x2ce29cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2ce2a0:
    // 0x2ce2a0: 0x24636c02  addiu       $v1, $v1, 0x6C02
    ctx->pc = 0x2ce2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27650));
label_2ce2a4:
    // 0x2ce2a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ce2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ce2a8:
    // 0x2ce2a8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2ce2a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2ce2ac:
    // 0x2ce2ac: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_2ce2b0:
    if (ctx->pc == 0x2CE2B0u) {
        ctx->pc = 0x2CE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2ACu;
        // 0x2ce2b0: 0x3c03008d  lui         $v1, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE2B4u;
        goto label_2ce2b4;
    }
    ctx->pc = 0x2CE2ACu;
    {
        const bool branch_taken_0x2ce2ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2ACu;
        // 0x2ce2b0: 0x3c03008d  lui         $v1, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce2ac) {
            ctx->pc = 0x2CE2D0u;
            goto label_2ce2d0;
        }
    }
    ctx->pc = 0x2CE2B4u;
label_2ce2b4:
    // 0x2ce2b4: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x2ce2b4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2ce2b8:
    // 0x2ce2b8: 0x24636c04  addiu       $v1, $v1, 0x6C04
    ctx->pc = 0x2ce2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27652));
label_2ce2bc:
    // 0x2ce2bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ce2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ce2c0:
    // 0x2ce2c0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2ce2c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2ce2c4:
    // 0x2ce2c4: 0x10830194  beq         $a0, $v1, . + 4 + (0x194 << 2)
label_2ce2c8:
    if (ctx->pc == 0x2CE2C8u) {
        ctx->pc = 0x2CE2CCu;
        goto label_2ce2cc;
    }
    ctx->pc = 0x2CE2C4u;
    {
        const bool branch_taken_0x2ce2c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ce2c4) {
            ctx->pc = 0x2CE918u;
            goto label_2ce918;
        }
    }
    ctx->pc = 0x2CE2CCu;
label_2ce2cc:
    // 0x2ce2cc: 0x0  nop
    ctx->pc = 0x2ce2ccu;
    // NOP
label_2ce2d0:
    // 0x2ce2d0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2ce2d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce2d4:
    // 0x2ce2d4: 0x1240003a  beqz        $s2, . + 4 + (0x3A << 2)
label_2ce2d8:
    if (ctx->pc == 0x2CE2D8u) {
        ctx->pc = 0x2CE2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2D4u;
        // 0x2ce2d8: 0x64160001  daddiu      $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE2DCu;
        goto label_2ce2dc;
    }
    ctx->pc = 0x2CE2D4u;
    {
        const bool branch_taken_0x2ce2d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2D4u;
        // 0x2ce2d8: 0x64160001  daddiu      $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce2d4) {
            ctx->pc = 0x2CE3C0u;
            goto label_2ce3c0;
        }
    }
    ctx->pc = 0x2CE2DCu;
label_2ce2dc:
    // 0x2ce2dc: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x2ce2dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_2ce2e0:
    // 0x2ce2e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ce2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ce2e4:
    // 0x2ce2e4: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2ce2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_2ce2e8:
    // 0x2ce2e8: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x2ce2e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
label_2ce2ec:
    // 0x2ce2ec: 0xa7a200b0  sh          $v0, 0xB0($sp)
    ctx->pc = 0x2ce2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
label_2ce2f0:
    // 0x2ce2f0: 0x92420640  lbu         $v0, 0x640($s2)
    ctx->pc = 0x2ce2f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1600)));
label_2ce2f4:
    // 0x2ce2f4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_2ce2f8:
    if (ctx->pc == 0x2CE2F8u) {
        ctx->pc = 0x2CE2FCu;
        goto label_2ce2fc;
    }
    ctx->pc = 0x2CE2F4u;
    {
        const bool branch_taken_0x2ce2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ce2f4) {
            ctx->pc = 0x2CE308u;
            goto label_2ce308;
        }
    }
    ctx->pc = 0x2CE2FCu;
label_2ce2fc:
    // 0x2ce2fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ce300:
    if (ctx->pc == 0x2CE300u) {
        ctx->pc = 0x2CE304u;
        goto label_2ce304;
    }
    ctx->pc = 0x2CE2FCu;
    {
        const bool branch_taken_0x2ce2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce2fc) {
            ctx->pc = 0x2CE310u;
            goto label_2ce310;
        }
    }
    ctx->pc = 0x2CE304u;
label_2ce304:
    // 0x2ce304: 0x0  nop
    ctx->pc = 0x2ce304u;
    // NOP
label_2ce308:
    // 0x2ce308: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2ce308u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce30c:
    // 0x2ce30c: 0x0  nop
    ctx->pc = 0x2ce30cu;
    // NOP
label_2ce310:
    // 0x2ce310: 0x92450780  lbu         $a1, 0x780($s2)
    ctx->pc = 0x2ce310u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1920)));
label_2ce314:
    // 0x2ce314: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2ce318:
    if (ctx->pc == 0x2CE318u) {
        ctx->pc = 0x2CE318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE314u;
        // 0x2ce318: 0x26440650  addiu       $a0, $s2, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE31Cu;
        goto label_2ce31c;
    }
    ctx->pc = 0x2CE314u;
    {
        const bool branch_taken_0x2ce314 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE314u;
        // 0x2ce318: 0x26440650  addiu       $a0, $s2, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce314) {
            ctx->pc = 0x2CE330u;
            goto label_2ce330;
        }
    }
    ctx->pc = 0x2CE31Cu;
label_2ce31c:
    // 0x2ce31c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2ce31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2ce320:
    // 0x2ce320: 0xffa000e0  sd          $zero, 0xE0($sp)
    ctx->pc = 0x2ce320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 0));
label_2ce324:
    // 0x2ce324: 0xc09d3e8  jal         func_274FA0
label_2ce328:
    if (ctx->pc == 0x2CE328u) {
        ctx->pc = 0x2CE328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE324u;
        // 0x2ce328: 0xffa000e8  sd          $zero, 0xE8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE32Cu;
        goto label_2ce32c;
    }
    ctx->pc = 0x2CE324u;
    SET_GPR_U32(ctx, 31, 0x2CE32Cu);
    ctx->pc = 0x2CE328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE324u;
    // 0x2ce328: 0xffa000e8  sd          $zero, 0xE8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FA0u, 0x2CE324u, 0x2CE32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE32Cu;
label_2ce32c:
    // 0x2ce32c: 0x0  nop
    ctx->pc = 0x2ce32cu;
    // NOP
label_2ce330:
    // 0x2ce330: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x2ce330u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce334:
    // 0x2ce334: 0x10800038  beqz        $a0, . + 4 + (0x38 << 2)
label_2ce338:
    if (ctx->pc == 0x2CE338u) {
        ctx->pc = 0x2CE338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE334u;
        // 0x2ce338: 0x141840  sll         $v1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE33Cu;
        goto label_2ce33c;
    }
    ctx->pc = 0x2CE334u;
    {
        const bool branch_taken_0x2ce334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE334u;
        // 0x2ce338: 0x141840  sll         $v1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce334) {
            ctx->pc = 0x2CE418u;
            goto label_2ce418;
        }
    }
    ctx->pc = 0x2CE33Cu;
label_2ce33c:
    // 0x2ce33c: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2ce33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
label_2ce340:
    // 0x2ce340: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2ce340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2ce344:
    // 0x2ce344: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x2ce344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_2ce348:
    // 0x2ce348: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x2ce348u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2ce34c:
    // 0x2ce34c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ce34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ce350:
    // 0x2ce350: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2ce350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce354:
    // 0x2ce354: 0x14820030  bne         $a0, $v0, . + 4 + (0x30 << 2)
label_2ce358:
    if (ctx->pc == 0x2CE358u) {
        ctx->pc = 0x2CE358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE354u;
        // 0x2ce358: 0x3c02008d  lui         $v0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE35Cu;
        goto label_2ce35c;
    }
    ctx->pc = 0x2CE354u;
    {
        const bool branch_taken_0x2ce354 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CE358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE354u;
        // 0x2ce358: 0x3c02008d  lui         $v0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce354) {
            ctx->pc = 0x2CE418u;
            goto label_2ce418;
        }
    }
    ctx->pc = 0x2CE35Cu;
label_2ce35c:
    // 0x2ce35c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2ce35cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2ce360:
    // 0x2ce360: 0x24426c02  addiu       $v0, $v0, 0x6C02
    ctx->pc = 0x2ce360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27650));
label_2ce364:
    // 0x2ce364: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ce364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ce368:
    // 0x2ce368: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2ce368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce36c:
    // 0x2ce36c: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
label_2ce370:
    if (ctx->pc == 0x2CE370u) {
        ctx->pc = 0x2CE374u;
        goto label_2ce374;
    }
    ctx->pc = 0x2CE36Cu;
    {
        const bool branch_taken_0x2ce36c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ce36c) {
            ctx->pc = 0x2CE418u;
            goto label_2ce418;
        }
    }
    ctx->pc = 0x2CE374u;
label_2ce374:
    // 0x2ce374: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2ce374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
label_2ce378:
    // 0x2ce378: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x2ce378u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2ce37c:
    // 0x2ce37c: 0x24426c04  addiu       $v0, $v0, 0x6C04
    ctx->pc = 0x2ce37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27652));
label_2ce380:
    // 0x2ce380: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ce380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ce384:
    // 0x2ce384: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2ce384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce388:
    // 0x2ce388: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_2ce38c:
    if (ctx->pc == 0x2CE38Cu) {
        ctx->pc = 0x2CE390u;
        goto label_2ce390;
    }
    ctx->pc = 0x2CE388u;
    {
        const bool branch_taken_0x2ce388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce388) {
            ctx->pc = 0x2CE418u;
            goto label_2ce418;
        }
    }
    ctx->pc = 0x2CE390u;
label_2ce390:
    // 0x2ce390: 0x9243065c  lbu         $v1, 0x65C($s2)
    ctx->pc = 0x2ce390u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1628)));
label_2ce394:
    // 0x2ce394: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x2ce394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
label_2ce398:
    // 0x2ce398: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2ce39c:
    if (ctx->pc == 0x2CE39Cu) {
        ctx->pc = 0x2CE39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE398u;
        // 0x2ce39c: 0x286100f0  slti        $at, $v1, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)240) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE3A0u;
        goto label_2ce3a0;
    }
    ctx->pc = 0x2CE398u;
    {
        const bool branch_taken_0x2ce398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE398u;
        // 0x2ce39c: 0x286100f0  slti        $at, $v1, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)240) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce398) {
            ctx->pc = 0x2CE3B0u;
            goto label_2ce3b0;
        }
    }
    ctx->pc = 0x2CE3A0u;
label_2ce3a0:
    // 0x2ce3a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2ce3a4:
    if (ctx->pc == 0x2CE3A4u) {
        ctx->pc = 0x2CE3A8u;
        goto label_2ce3a8;
    }
    ctx->pc = 0x2CE3A0u;
    {
        const bool branch_taken_0x2ce3a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce3a0) {
            ctx->pc = 0x2CE3B0u;
            goto label_2ce3b0;
        }
    }
    ctx->pc = 0x2CE3A8u;
label_2ce3a8:
    // 0x2ce3a8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2ce3ac:
    if (ctx->pc == 0x2CE3ACu) {
        ctx->pc = 0x2CE3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3A8u;
        // 0x2ce3ac: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE3B0u;
        goto label_2ce3b0;
    }
    ctx->pc = 0x2CE3A8u;
    {
        const bool branch_taken_0x2ce3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3A8u;
        // 0x2ce3ac: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce3a8) {
            ctx->pc = 0x2CE418u;
            goto label_2ce418;
        }
    }
    ctx->pc = 0x2CE3B0u;
label_2ce3b0:
    // 0x2ce3b0: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x2ce3b0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2ce3b4:
    // 0x2ce3b4: 0x10000018  b           . + 4 + (0x18 << 2)
label_2ce3b8:
    if (ctx->pc == 0x2CE3B8u) {
        ctx->pc = 0x2CE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3B4u;
        // 0x2ce3b8: 0xa3a200c0  sb          $v0, 0xC0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE3BCu;
        goto label_2ce3bc;
    }
    ctx->pc = 0x2CE3B4u;
    {
        const bool branch_taken_0x2ce3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3B4u;
        // 0x2ce3b8: 0xa3a200c0  sb          $v0, 0xC0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce3b4) {
            ctx->pc = 0x2CE418u;
            goto label_2ce418;
        }
    }
    ctx->pc = 0x2CE3BCu;
label_2ce3bc:
    // 0x2ce3bc: 0x0  nop
    ctx->pc = 0x2ce3bcu;
    // NOP
label_2ce3c0:
    // 0x2ce3c0: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x2ce3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2ce3c4:
    // 0x2ce3c4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2ce3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ce3c8:
    // 0x2ce3c8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2ce3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_2ce3cc:
    // 0x2ce3cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ce3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ce3d0:
    // 0x2ce3d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ce3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ce3d4:
    // 0x2ce3d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ce3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce3d8:
    // 0x2ce3d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ce3dc:
    if (ctx->pc == 0x2CE3DCu) {
        ctx->pc = 0x2CE3E0u;
        goto label_2ce3e0;
    }
    ctx->pc = 0x2CE3D8u;
    {
        const bool branch_taken_0x2ce3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce3d8) {
            ctx->pc = 0x2CE3F0u;
            goto label_2ce3f0;
        }
    }
    ctx->pc = 0x2CE3E0u;
label_2ce3e0:
    // 0x2ce3e0: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x2ce3e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2ce3e4:
    // 0x2ce3e4: 0xa7a000b0  sh          $zero, 0xB0($sp)
    ctx->pc = 0x2ce3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 0));
label_2ce3e8:
    // 0x2ce3e8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2ce3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_2ce3ec:
    // 0x2ce3ec: 0x0  nop
    ctx->pc = 0x2ce3ecu;
    // NOP
label_2ce3f0:
    // 0x2ce3f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ce3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_2ce3f4:
    // 0x2ce3f4: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x2ce3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
label_2ce3f8:
    // 0x2ce3f8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2ce3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_2ce3fc:
    // 0x2ce3fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ce400:
    if (ctx->pc == 0x2CE400u) {
        ctx->pc = 0x2CE400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3FCu;
        // 0x2ce400: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE404u;
        goto label_2ce404;
    }
    ctx->pc = 0x2CE3FCu;
    {
        const bool branch_taken_0x2ce3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3FCu;
        // 0x2ce400: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce3fc) {
            ctx->pc = 0x2CE410u;
            goto label_2ce410;
        }
    }
    ctx->pc = 0x2CE404u;
label_2ce404:
    // 0x2ce404: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ce408:
    if (ctx->pc == 0x2CE408u) {
        ctx->pc = 0x2CE40Cu;
        goto label_2ce40c;
    }
    ctx->pc = 0x2CE404u;
    {
        const bool branch_taken_0x2ce404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce404) {
            ctx->pc = 0x2CE418u;
            goto label_2ce418;
        }
    }
    ctx->pc = 0x2CE40Cu;
label_2ce40c:
    // 0x2ce40c: 0x0  nop
    ctx->pc = 0x2ce40cu;
    // NOP
label_2ce410:
    // 0x2ce410: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2ce410u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce414:
    // 0x2ce414: 0x0  nop
    ctx->pc = 0x2ce414u;
    // NOP
label_2ce418:
    // 0x2ce418: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
label_2ce41c:
    if (ctx->pc == 0x2CE41Cu) {
        ctx->pc = 0x2CE420u;
        goto label_2ce420;
    }
    ctx->pc = 0x2CE418u;
    {
        const bool branch_taken_0x2ce418 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce418) {
            ctx->pc = 0x2CE4A8u;
            goto label_2ce4a8;
        }
    }
    ctx->pc = 0x2CE420u;
label_2ce420:
    // 0x2ce420: 0x12c00021  beqz        $s6, . + 4 + (0x21 << 2)
label_2ce424:
    if (ctx->pc == 0x2CE424u) {
        ctx->pc = 0x2CE428u;
        goto label_2ce428;
    }
    ctx->pc = 0x2CE420u;
    {
        const bool branch_taken_0x2ce420 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce420) {
            ctx->pc = 0x2CE4A8u;
            goto label_2ce4a8;
        }
    }
    ctx->pc = 0x2CE428u;
label_2ce428:
    // 0x2ce428: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x2ce428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_2ce42c:
    // 0x2ce42c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ce430:
    if (ctx->pc == 0x2CE430u) {
        ctx->pc = 0x2CE434u;
        goto label_2ce434;
    }
    ctx->pc = 0x2CE42Cu;
    {
        const bool branch_taken_0x2ce42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce42c) {
            ctx->pc = 0x2CE450u;
            goto label_2ce450;
        }
    }
    ctx->pc = 0x2CE434u;
label_2ce434:
    // 0x2ce434: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2ce434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2ce438:
    // 0x2ce438: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ce438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ce43c:
    // 0x2ce43c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2ce440:
    if (ctx->pc == 0x2CE440u) {
        ctx->pc = 0x2CE440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE43Cu;
        // 0x2ce440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE444u;
        goto label_2ce444;
    }
    ctx->pc = 0x2CE43Cu;
    {
        const bool branch_taken_0x2ce43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CE440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE43Cu;
        // 0x2ce440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce43c) {
            ctx->pc = 0x2CE450u;
            goto label_2ce450;
        }
    }
    ctx->pc = 0x2CE444u;
label_2ce444:
    // 0x2ce444: 0xc098f90  jal         func_263E40
label_2ce448:
    if (ctx->pc == 0x2CE448u) {
        ctx->pc = 0x2CE44Cu;
        goto label_2ce44c;
    }
    ctx->pc = 0x2CE444u;
    SET_GPR_U32(ctx, 31, 0x2CE44Cu);
    ctx->pc = 0x263E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263E40u, 0x2CE444u, 0x2CE44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE44Cu;
label_2ce44c:
    // 0x2ce44c: 0x0  nop
    ctx->pc = 0x2ce44cu;
    // NOP
label_2ce450:
    // 0x2ce450: 0xc0a72d8  jal         func_29CB60
label_2ce454:
    if (ctx->pc == 0x2CE454u) {
        ctx->pc = 0x2CE454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE450u;
        // 0x2ce454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE458u;
        goto label_2ce458;
    }
    ctx->pc = 0x2CE450u;
    SET_GPR_U32(ctx, 31, 0x2CE458u);
    ctx->pc = 0x2CE454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE450u;
    // 0x2ce454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CB60u, 0x2CE450u, 0x2CE458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE458u;
label_2ce458:
    // 0x2ce458: 0x8e5904d4  lw          $t9, 0x4D4($s2)
    ctx->pc = 0x2ce458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1236)));
label_2ce45c:
    // 0x2ce45c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x2ce45cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_2ce460:
    // 0x2ce460: 0x320f809  jalr        $t9
label_2ce464:
    if (ctx->pc == 0x2CE464u) {
        ctx->pc = 0x2CE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE460u;
        // 0x2ce464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE468u;
        goto label_2ce468;
    }
    ctx->pc = 0x2CE460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CE468u);
        ctx->pc = 0x2CE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE460u;
        // 0x2ce464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE460u, 0x2CE468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CE468u;
label_2ce468:
    // 0x2ce468: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2ce468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
label_2ce46c:
    // 0x2ce46c: 0xc0a7428  jal         func_29D0A0
label_2ce470:
    if (ctx->pc == 0x2CE470u) {
        ctx->pc = 0x2CE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE46Cu;
        // 0x2ce470: 0x2484f610  addiu       $a0, $a0, -0x9F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE474u;
        goto label_2ce474;
    }
    ctx->pc = 0x2CE46Cu;
    SET_GPR_U32(ctx, 31, 0x2CE474u);
    ctx->pc = 0x2CE470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE46Cu;
    // 0x2ce470: 0x2484f610  addiu       $a0, $a0, -0x9F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x2CE46Cu, 0x2CE474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE474u;
label_2ce474:
    // 0x2ce474: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2ce474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
label_2ce478:
    // 0x2ce478: 0xc0a7428  jal         func_29D0A0
label_2ce47c:
    if (ctx->pc == 0x2CE47Cu) {
        ctx->pc = 0x2CE47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE478u;
        // 0x2ce47c: 0x2484f610  addiu       $a0, $a0, -0x9F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE480u;
        goto label_2ce480;
    }
    ctx->pc = 0x2CE478u;
    SET_GPR_U32(ctx, 31, 0x2CE480u);
    ctx->pc = 0x2CE47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE478u;
    // 0x2ce47c: 0x2484f610  addiu       $a0, $a0, -0x9F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x2CE478u, 0x2CE480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE480u;
label_2ce480:
    // 0x2ce480: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2ce480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_2ce484:
    // 0x2ce484: 0xc0a7428  jal         func_29D0A0
label_2ce488:
    if (ctx->pc == 0x2CE488u) {
        ctx->pc = 0x2CE488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE484u;
        // 0x2ce488: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE48Cu;
        goto label_2ce48c;
    }
    ctx->pc = 0x2CE484u;
    SET_GPR_U32(ctx, 31, 0x2CE48Cu);
    ctx->pc = 0x2CE488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE484u;
    // 0x2ce488: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x2CE484u, 0x2CE48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE48Cu;
label_2ce48c:
    // 0x2ce48c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2ce48cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_2ce490:
    // 0x2ce490: 0xc0a7428  jal         func_29D0A0
label_2ce494:
    if (ctx->pc == 0x2CE494u) {
        ctx->pc = 0x2CE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE490u;
        // 0x2ce494: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE498u;
        goto label_2ce498;
    }
    ctx->pc = 0x2CE490u;
    SET_GPR_U32(ctx, 31, 0x2CE498u);
    ctx->pc = 0x2CE494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE490u;
    // 0x2ce494: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x2CE490u, 0x2CE498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE498u;
label_2ce498:
    // 0x2ce498: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2ce498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_2ce49c:
    // 0x2ce49c: 0xc0510c0  jal         func_144300
label_2ce4a0:
    if (ctx->pc == 0x2CE4A0u) {
        ctx->pc = 0x2CE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE49Cu;
        // 0x2ce4a0: 0x248486e0  addiu       $a0, $a0, -0x7920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE4A4u;
        goto label_2ce4a4;
    }
    ctx->pc = 0x2CE49Cu;
    SET_GPR_U32(ctx, 31, 0x2CE4A4u);
    ctx->pc = 0x2CE4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE49Cu;
    // 0x2ce4a0: 0x248486e0  addiu       $a0, $a0, -0x7920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144300u, 0x2CE49Cu, 0x2CE4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE4A4u;
label_2ce4a4:
    // 0x2ce4a4: 0x0  nop
    ctx->pc = 0x2ce4a4u;
    // NOP
label_2ce4a8:
    // 0x2ce4a8: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_2ce4ac:
    if (ctx->pc == 0x2CE4ACu) {
        ctx->pc = 0x2CE4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4A8u;
        // 0x2ce4ac: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE4B0u;
        goto label_2ce4b0;
    }
    ctx->pc = 0x2CE4A8u;
    {
        const bool branch_taken_0x2ce4a8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4A8u;
        // 0x2ce4ac: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce4a8) {
            ctx->pc = 0x2CE4C0u;
            goto label_2ce4c0;
        }
    }
    ctx->pc = 0x2CE4B0u;
label_2ce4b0:
    // 0x2ce4b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ce4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ce4b4:
    // 0x2ce4b4: 0xc0ceb24  jal         func_33AC90
label_2ce4b8:
    if (ctx->pc == 0x2CE4B8u) {
        ctx->pc = 0x2CE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4B4u;
        // 0x2ce4b8: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE4BCu;
        goto label_2ce4bc;
    }
    ctx->pc = 0x2CE4B4u;
    SET_GPR_U32(ctx, 31, 0x2CE4BCu);
    ctx->pc = 0x2CE4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE4B4u;
    // 0x2ce4b8: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AC90u, 0x2CE4B4u, 0x2CE4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE4BCu;
label_2ce4bc:
    // 0x2ce4bc: 0x0  nop
    ctx->pc = 0x2ce4bcu;
    // NOP
label_2ce4c0:
    // 0x2ce4c0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2ce4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_2ce4c4:
    // 0x2ce4c4: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x2ce4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
label_2ce4c8:
    // 0x2ce4c8: 0xc0ceb30  jal         func_33ACC0
label_2ce4cc:
    if (ctx->pc == 0x2CE4CCu) {
        ctx->pc = 0x2CE4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4C8u;
        // 0x2ce4cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE4D0u;
        goto label_2ce4d0;
    }
    ctx->pc = 0x2CE4C8u;
    SET_GPR_U32(ctx, 31, 0x2CE4D0u);
    ctx->pc = 0x2CE4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE4C8u;
    // 0x2ce4cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACC0u, 0x2CE4C8u, 0x2CE4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE4D0u;
label_2ce4d0:
    // 0x2ce4d0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2ce4d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce4d4:
    // 0x2ce4d4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_2ce4d8:
    if (ctx->pc == 0x2CE4D8u) {
        ctx->pc = 0x2CE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4D4u;
        // 0x2ce4d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE4DCu;
        goto label_2ce4dc;
    }
    ctx->pc = 0x2CE4D4u;
    {
        const bool branch_taken_0x2ce4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4D4u;
        // 0x2ce4d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce4d4) {
            ctx->pc = 0x2CE580u;
            goto label_2ce580;
        }
    }
    ctx->pc = 0x2CE4DCu;
label_2ce4dc:
    // 0x2ce4dc: 0xc0b3394  jal         func_2CCE50
label_2ce4e0:
    if (ctx->pc == 0x2CE4E0u) {
        ctx->pc = 0x2CE4E4u;
        goto label_2ce4e4;
    }
    ctx->pc = 0x2CE4DCu;
    SET_GPR_U32(ctx, 31, 0x2CE4E4u);
    ctx->pc = 0x2CCE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCE50u, 0x2CE4DCu, 0x2CE4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE4E4u;
label_2ce4e4:
    // 0x2ce4e4: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x2ce4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_2ce4e8:
    // 0x2ce4e8: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x2ce4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
label_2ce4ec:
    // 0x2ce4ec: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2ce4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2ce4f0:
    // 0x2ce4f0: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x2ce4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_2ce4f4:
    // 0x2ce4f4: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x2ce4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2ce4f8:
    // 0x2ce4f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2ce4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ce4fc:
    // 0x2ce4fc: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2ce4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
label_2ce500:
    // 0x2ce500: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x2ce500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2ce504:
    // 0x2ce504: 0x24426c02  addiu       $v0, $v0, 0x6C02
    ctx->pc = 0x2ce504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27650));
label_2ce508:
    // 0x2ce508: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x2ce508u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_2ce50c:
    // 0x2ce50c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2ce50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2ce510:
    // 0x2ce510: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2ce510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
label_2ce514:
    // 0x2ce514: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x2ce514u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_2ce518:
    // 0x2ce518: 0x24426c04  addiu       $v0, $v0, 0x6C04
    ctx->pc = 0x2ce518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27652));
label_2ce51c:
    // 0x2ce51c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ce51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2ce520:
    // 0x2ce520: 0xc0a2a88  jal         func_28AA20
label_2ce524:
    if (ctx->pc == 0x2CE524u) {
        ctx->pc = 0x2CE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE520u;
        // 0x2ce524: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE528u;
        goto label_2ce528;
    }
    ctx->pc = 0x2CE520u;
    SET_GPR_U32(ctx, 31, 0x2CE528u);
    ctx->pc = 0x2CE524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE520u;
    // 0x2ce524: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA20u, 0x2CE520u, 0x2CE528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE528u;
label_2ce528:
    // 0x2ce528: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2ce528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_2ce52c:
    // 0x2ce52c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ce52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ce530:
    // 0x2ce530: 0xc0ceb24  jal         func_33AC90
label_2ce534:
    if (ctx->pc == 0x2CE534u) {
        ctx->pc = 0x2CE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE530u;
        // 0x2ce534: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE538u;
        goto label_2ce538;
    }
    ctx->pc = 0x2CE530u;
    SET_GPR_U32(ctx, 31, 0x2CE538u);
    ctx->pc = 0x2CE534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE530u;
    // 0x2ce534: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AC90u, 0x2CE530u, 0x2CE538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE538u;
label_2ce538:
    // 0x2ce538: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2ce538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_2ce53c:
    // 0x2ce53c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ce53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ce540:
    // 0x2ce540: 0xc0ceb30  jal         func_33ACC0
label_2ce544:
    if (ctx->pc == 0x2CE544u) {
        ctx->pc = 0x2CE544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE540u;
        // 0x2ce544: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE548u;
        goto label_2ce548;
    }
    ctx->pc = 0x2CE540u;
    SET_GPR_U32(ctx, 31, 0x2CE548u);
    ctx->pc = 0x2CE544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE540u;
    // 0x2ce544: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACC0u, 0x2CE540u, 0x2CE548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE548u;
label_2ce548:
    // 0x2ce548: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ce548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ce54c:
    // 0x2ce54c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ce54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ce550:
    // 0x2ce550: 0xc0a932c  jal         func_2A4CB0
label_2ce554:
    if (ctx->pc == 0x2CE554u) {
        ctx->pc = 0x2CE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE550u;
        // 0x2ce554: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE558u;
        goto label_2ce558;
    }
    ctx->pc = 0x2CE550u;
    SET_GPR_U32(ctx, 31, 0x2CE558u);
    ctx->pc = 0x2CE554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE550u;
    // 0x2ce554: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4CB0u, 0x2CE550u, 0x2CE558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE558u;
label_2ce558:
    // 0x2ce558: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x2ce558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
label_2ce55c:
    // 0x2ce55c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x2ce55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
label_2ce560:
    // 0x2ce560: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x2ce560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
label_2ce564:
    // 0x2ce564: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x2ce564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
label_2ce568:
    // 0x2ce568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ce568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce56c:
    // 0x2ce56c: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2ce56cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2ce570:
    // 0x2ce570: 0xc0c99d0  jal         func_326740
label_2ce574:
    if (ctx->pc == 0x2CE574u) {
        ctx->pc = 0x2CE574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE570u;
        // 0x2ce574: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE578u;
        goto label_2ce578;
    }
    ctx->pc = 0x2CE570u;
    SET_GPR_U32(ctx, 31, 0x2CE578u);
    ctx->pc = 0x2CE574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE570u;
    // 0x2ce574: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x2CE570u, 0x2CE578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE578u;
label_2ce578:
    // 0x2ce578: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_2ce57c:
    if (ctx->pc == 0x2CE57Cu) {
        ctx->pc = 0x2CE580u;
        goto label_2ce580;
    }
    ctx->pc = 0x2CE578u;
    {
        const bool branch_taken_0x2ce578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce578) {
            ctx->pc = 0x2CE918u;
            goto label_2ce918;
        }
    }
    ctx->pc = 0x2CE580u;
label_2ce580:
    // 0x2ce580: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ce580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce584:
    // 0x2ce584: 0x0  nop
    ctx->pc = 0x2ce584u;
    // NOP
label_2ce588:
    // 0x2ce588: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2ce588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_2ce58c:
    // 0x2ce58c: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x2ce58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
label_2ce590:
    // 0x2ce590: 0xc04c918  jal         func_132460
label_2ce594:
    if (ctx->pc == 0x2CE594u) {
        ctx->pc = 0x2CE594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE590u;
        // 0x2ce594: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE598u;
        goto label_2ce598;
    }
    ctx->pc = 0x2CE590u;
    SET_GPR_U32(ctx, 31, 0x2CE598u);
    ctx->pc = 0x2CE594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE590u;
    // 0x2ce594: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2CE590u, 0x2CE598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE598u;
label_2ce598:
    // 0x2ce598: 0xc0b33f8  jal         func_2CCFE0
label_2ce59c:
    if (ctx->pc == 0x2CE59Cu) {
        ctx->pc = 0x2CE5A0u;
        goto label_2ce5a0;
    }
    ctx->pc = 0x2CE598u;
    SET_GPR_U32(ctx, 31, 0x2CE5A0u);
    ctx->pc = 0x2CCFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCFE0u, 0x2CE598u, 0x2CE5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE5A0u;
label_2ce5a0:
    // 0x2ce5a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ce5a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2ce5a4:
    // 0x2ce5a4: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x2ce5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_2ce5a8:
    // 0x2ce5a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2ce5ac:
    if (ctx->pc == 0x2CE5ACu) {
        ctx->pc = 0x2CE5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5A8u;
        // 0x2ce5ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE5B0u;
        goto label_2ce5b0;
    }
    ctx->pc = 0x2CE5A8u;
    {
        const bool branch_taken_0x2ce5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5A8u;
        // 0x2ce5ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce5a8) {
            ctx->pc = 0x2CE588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce588;
        }
    }
    ctx->pc = 0x2CE5B0u;
label_2ce5b0:
    // 0x2ce5b0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2ce5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
label_2ce5b4:
    // 0x2ce5b4: 0xa3828c88  sb          $v0, -0x7378($gp)
    ctx->pc = 0x2ce5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937736), (uint8_t)GPR_U32(ctx, 2));
label_2ce5b8:
    // 0x2ce5b8: 0x8c24fe84  lw          $a0, -0x17C($at)
    ctx->pc = 0x2ce5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966916)));
label_2ce5bc:
    // 0x2ce5bc: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x2ce5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_2ce5c0:
    // 0x2ce5c0: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x2ce5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2ce5c4:
    // 0x2ce5c4: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2ce5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
label_2ce5c8:
    // 0x2ce5c8: 0x39840  sll         $s3, $v1, 1
    ctx->pc = 0x2ce5c8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2ce5cc:
    // 0x2ce5cc: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x2ce5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_2ce5d0:
    // 0x2ce5d0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ce5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2ce5d4:
    // 0x2ce5d4: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2ce5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_2ce5d8:
    // 0x2ce5d8: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x2ce5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_2ce5dc:
    // 0x2ce5dc: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2ce5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
label_2ce5e0:
    // 0x2ce5e0: 0xac22fe84  sw          $v0, -0x17C($at)
    ctx->pc = 0x2ce5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966916), GPR_U32(ctx, 2));
label_2ce5e4:
    // 0x2ce5e4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2ce5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2ce5e8:
    // 0x2ce5e8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2ce5e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce5ec:
    // 0x2ce5ec: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2ce5ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce5f0:
    // 0x2ce5f0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_2ce5f4:
    if (ctx->pc == 0x2CE5F4u) {
        ctx->pc = 0x2CE5F8u;
        goto label_2ce5f8;
    }
    ctx->pc = 0x2CE5F0u;
    {
        const bool branch_taken_0x2ce5f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ce5f0) {
            ctx->pc = 0x2CE618u;
            goto label_2ce618;
        }
    }
    ctx->pc = 0x2CE5F8u;
label_2ce5f8:
    // 0x2ce5f8: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2ce5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
label_2ce5fc:
    // 0x2ce5fc: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2ce5fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2ce600:
    // 0x2ce600: 0x24426c02  addiu       $v0, $v0, 0x6C02
    ctx->pc = 0x2ce600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27650));
label_2ce604:
    // 0x2ce604: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ce604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2ce608:
    // 0x2ce608: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2ce608u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce60c:
    // 0x2ce60c: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
label_2ce610:
    if (ctx->pc == 0x2CE610u) {
        ctx->pc = 0x2CE614u;
        goto label_2ce614;
    }
    ctx->pc = 0x2CE60Cu;
    {
        const bool branch_taken_0x2ce60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce60c) {
            ctx->pc = 0x2CE6B0u;
            goto label_2ce6b0;
        }
    }
    ctx->pc = 0x2CE614u;
label_2ce614:
    // 0x2ce614: 0x0  nop
    ctx->pc = 0x2ce614u;
    // NOP
label_2ce618:
    // 0x2ce618: 0xc0b3394  jal         func_2CCE50
label_2ce61c:
    if (ctx->pc == 0x2CE61Cu) {
        ctx->pc = 0x2CE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE618u;
        // 0x2ce61c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE620u;
        goto label_2ce620;
    }
    ctx->pc = 0x2CE618u;
    SET_GPR_U32(ctx, 31, 0x2CE620u);
    ctx->pc = 0x2CE61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE618u;
    // 0x2ce61c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCE50u, 0x2CE618u, 0x2CE620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE620u;
label_2ce620:
    // 0x2ce620: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x2ce620u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce624:
    // 0x2ce624: 0x328700ff  andi        $a3, $s4, 0xFF
    ctx->pc = 0x2ce624u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2ce628:
    // 0x2ce628: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x2ce628u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2ce62c:
    // 0x2ce62c: 0xc0b30a4  jal         func_2CC290
label_2ce630:
    if (ctx->pc == 0x2CE630u) {
        ctx->pc = 0x2CE630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE62Cu;
        // 0x2ce630: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE634u;
        goto label_2ce634;
    }
    ctx->pc = 0x2CE62Cu;
    SET_GPR_U32(ctx, 31, 0x2CE634u);
    ctx->pc = 0x2CE630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE62Cu;
    // 0x2ce630: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC290u, 0x2CE62Cu, 0x2CE634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE634u;
label_2ce634:
    // 0x2ce634: 0xc0554f4  jal         func_1553D0
label_2ce638:
    if (ctx->pc == 0x2CE638u) {
        ctx->pc = 0x2CE638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE634u;
        // 0x2ce638: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE63Cu;
        goto label_2ce63c;
    }
    ctx->pc = 0x2CE634u;
    SET_GPR_U32(ctx, 31, 0x2CE63Cu);
    ctx->pc = 0x2CE638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE634u;
    // 0x2ce638: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x2CE634u, 0x2CE63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE63Cu;
label_2ce63c:
    // 0x2ce63c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2ce640:
    if (ctx->pc == 0x2CE640u) {
        ctx->pc = 0x2CE644u;
        goto label_2ce644;
    }
    ctx->pc = 0x2CE63Cu;
    {
        const bool branch_taken_0x2ce63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce63c) {
            ctx->pc = 0x2CE670u;
            goto label_2ce670;
        }
    }
    ctx->pc = 0x2CE644u;
label_2ce644:
    // 0x2ce644: 0x0  nop
    ctx->pc = 0x2ce644u;
    // NOP
label_2ce648:
    // 0x2ce648: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2ce648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_2ce64c:
    // 0x2ce64c: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x2ce64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
label_2ce650:
    // 0x2ce650: 0xc04c918  jal         func_132460
label_2ce654:
    if (ctx->pc == 0x2CE654u) {
        ctx->pc = 0x2CE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE650u;
        // 0x2ce654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE658u;
        goto label_2ce658;
    }
    ctx->pc = 0x2CE650u;
    SET_GPR_U32(ctx, 31, 0x2CE658u);
    ctx->pc = 0x2CE654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE650u;
    // 0x2ce654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2CE650u, 0x2CE658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE658u;
label_2ce658:
    // 0x2ce658: 0xc0b33f8  jal         func_2CCFE0
label_2ce65c:
    if (ctx->pc == 0x2CE65Cu) {
        ctx->pc = 0x2CE660u;
        goto label_2ce660;
    }
    ctx->pc = 0x2CE658u;
    SET_GPR_U32(ctx, 31, 0x2CE660u);
    ctx->pc = 0x2CCFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCFE0u, 0x2CE658u, 0x2CE660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE660u;
label_2ce660:
    // 0x2ce660: 0xc0554f4  jal         func_1553D0
label_2ce664:
    if (ctx->pc == 0x2CE664u) {
        ctx->pc = 0x2CE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE660u;
        // 0x2ce664: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE668u;
        goto label_2ce668;
    }
    ctx->pc = 0x2CE660u;
    SET_GPR_U32(ctx, 31, 0x2CE668u);
    ctx->pc = 0x2CE664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE660u;
    // 0x2ce664: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x2CE660u, 0x2CE668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE668u;
label_2ce668:
    // 0x2ce668: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2ce66c:
    if (ctx->pc == 0x2CE66Cu) {
        ctx->pc = 0x2CE670u;
        goto label_2ce670;
    }
    ctx->pc = 0x2CE668u;
    {
        const bool branch_taken_0x2ce668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce668) {
            ctx->pc = 0x2CE648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce648;
        }
    }
    ctx->pc = 0x2CE670u;
label_2ce670:
    // 0x2ce670: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x2ce670u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce674:
    // 0x2ce674: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x2ce674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
label_2ce678:
    // 0x2ce678: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ce678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce67c:
    // 0x2ce67c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ce67cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce680:
    // 0x2ce680: 0xc050ed4  jal         func_143B50
label_2ce684:
    if (ctx->pc == 0x2CE684u) {
        ctx->pc = 0x2CE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE680u;
        // 0x2ce684: 0x240800fe  addiu       $t0, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE688u;
        goto label_2ce688;
    }
    ctx->pc = 0x2CE680u;
    SET_GPR_U32(ctx, 31, 0x2CE688u);
    ctx->pc = 0x2CE684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE680u;
    // 0x2ce684: 0x240800fe  addiu       $t0, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x2CE680u, 0x2CE688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE688u;
label_2ce688:
    // 0x2ce688: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x2ce688u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce68c:
    // 0x2ce68c: 0x328700ff  andi        $a3, $s4, 0xFF
    ctx->pc = 0x2ce68cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2ce690:
    // 0x2ce690: 0x82a60000  lb          $a2, 0x0($s5)
    ctx->pc = 0x2ce690u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2ce694:
    // 0x2ce694: 0xc0b3104  jal         func_2CC410
label_2ce698:
    if (ctx->pc == 0x2CE698u) {
        ctx->pc = 0x2CE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE694u;
        // 0x2ce698: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE69Cu;
        goto label_2ce69c;
    }
    ctx->pc = 0x2CE694u;
    SET_GPR_U32(ctx, 31, 0x2CE69Cu);
    ctx->pc = 0x2CE698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE694u;
    // 0x2ce698: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC410u, 0x2CE694u, 0x2CE69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE69Cu;
label_2ce69c:
    // 0x2ce69c: 0x142040  sll         $a0, $s4, 1
    ctx->pc = 0x2ce69cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_2ce6a0:
    // 0x2ce6a0: 0x27838a60  addiu       $v1, $gp, -0x75A0
    ctx->pc = 0x2ce6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937184));
label_2ce6a4:
    // 0x2ce6a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ce6a8:
    // 0x2ce6a8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2ce6ac:
    if (ctx->pc == 0x2CE6ACu) {
        ctx->pc = 0x2CE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6A8u;
        // 0x2ce6ac: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE6B0u;
        goto label_2ce6b0;
    }
    ctx->pc = 0x2CE6A8u;
    {
        const bool branch_taken_0x2ce6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6A8u;
        // 0x2ce6ac: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6a8) {
            ctx->pc = 0x2CE728u;
            goto label_2ce728;
        }
    }
    ctx->pc = 0x2CE6B0u;
label_2ce6b0:
    // 0x2ce6b0: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2ce6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
label_2ce6b4:
    // 0x2ce6b4: 0x24426c04  addiu       $v0, $v0, 0x6C04
    ctx->pc = 0x2ce6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27652));
label_2ce6b8:
    // 0x2ce6b8: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x2ce6b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2ce6bc:
    // 0x2ce6bc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ce6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2ce6c0:
    // 0x2ce6c0: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2ce6c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce6c4:
    // 0x2ce6c4: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_2ce6c8:
    if (ctx->pc == 0x2CE6C8u) {
        ctx->pc = 0x2CE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6C4u;
        // 0x2ce6c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE6CCu;
        goto label_2ce6cc;
    }
    ctx->pc = 0x2CE6C4u;
    {
        const bool branch_taken_0x2ce6c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6C4u;
        // 0x2ce6c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6c4) {
            ctx->pc = 0x2CE728u;
            goto label_2ce728;
        }
    }
    ctx->pc = 0x2CE6CCu;
label_2ce6cc:
    // 0x2ce6cc: 0xc0b3358  jal         func_2CCD60
label_2ce6d0:
    if (ctx->pc == 0x2CE6D0u) {
        ctx->pc = 0x2CE6D4u;
        goto label_2ce6d4;
    }
    ctx->pc = 0x2CE6CCu;
    SET_GPR_U32(ctx, 31, 0x2CE6D4u);
    ctx->pc = 0x2CCD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCD60u, 0x2CE6CCu, 0x2CE6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6D4u;
label_2ce6d4:
    // 0x2ce6d4: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_2ce6d8:
    if (ctx->pc == 0x2CE6D8u) {
        ctx->pc = 0x2CE6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6D4u;
        // 0x2ce6d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE6DCu;
        goto label_2ce6dc;
    }
    ctx->pc = 0x2CE6D4u;
    {
        const bool branch_taken_0x2ce6d4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6D4u;
        // 0x2ce6d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6d4) {
            ctx->pc = 0x2CE6E8u;
            goto label_2ce6e8;
        }
    }
    ctx->pc = 0x2CE6DCu;
label_2ce6dc:
    // 0x2ce6dc: 0xc05559c  jal         func_155670
label_2ce6e0:
    if (ctx->pc == 0x2CE6E0u) {
        ctx->pc = 0x2CE6E4u;
        goto label_2ce6e4;
    }
    ctx->pc = 0x2CE6DCu;
    SET_GPR_U32(ctx, 31, 0x2CE6E4u);
    ctx->pc = 0x155670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155670u, 0x2CE6DCu, 0x2CE6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6E4u;
label_2ce6e4:
    // 0x2ce6e4: 0x0  nop
    ctx->pc = 0x2ce6e4u;
    // NOP
label_2ce6e8:
    // 0x2ce6e8: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x2ce6e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce6ec:
    // 0x2ce6ec: 0x82a60000  lb          $a2, 0x0($s5)
    ctx->pc = 0x2ce6ecu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2ce6f0:
    // 0x2ce6f0: 0x328700ff  andi        $a3, $s4, 0xFF
    ctx->pc = 0x2ce6f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2ce6f4:
    // 0x2ce6f4: 0xc0b3104  jal         func_2CC410
label_2ce6f8:
    if (ctx->pc == 0x2CE6F8u) {
        ctx->pc = 0x2CE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6F4u;
        // 0x2ce6f8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE6FCu;
        goto label_2ce6fc;
    }
    ctx->pc = 0x2CE6F4u;
    SET_GPR_U32(ctx, 31, 0x2CE6FCu);
    ctx->pc = 0x2CE6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE6F4u;
    // 0x2ce6f8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC410u, 0x2CE6F4u, 0x2CE6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6FCu;
label_2ce6fc:
    // 0x2ce6fc: 0x142040  sll         $a0, $s4, 1
    ctx->pc = 0x2ce6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_2ce700:
    // 0x2ce700: 0x27838a60  addiu       $v1, $gp, -0x75A0
    ctx->pc = 0x2ce700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937184));
label_2ce704:
    // 0x2ce704: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ce708:
    // 0x2ce708: 0x10000007  b           . + 4 + (0x7 << 2)
label_2ce70c:
    if (ctx->pc == 0x2CE70Cu) {
        ctx->pc = 0x2CE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE708u;
        // 0x2ce70c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE710u;
        goto label_2ce710;
    }
    ctx->pc = 0x2CE708u;
    {
        const bool branch_taken_0x2ce708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE708u;
        // 0x2ce70c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce708) {
            ctx->pc = 0x2CE728u;
            goto label_2ce728;
        }
    }
    ctx->pc = 0x2CE710u;
label_2ce710:
    // 0x2ce710: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2ce710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_2ce714:
    // 0x2ce714: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x2ce714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
label_2ce718:
    // 0x2ce718: 0xc04c918  jal         func_132460
label_2ce71c:
    if (ctx->pc == 0x2CE71Cu) {
        ctx->pc = 0x2CE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE718u;
        // 0x2ce71c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE720u;
        goto label_2ce720;
    }
    ctx->pc = 0x2CE718u;
    SET_GPR_U32(ctx, 31, 0x2CE720u);
    ctx->pc = 0x2CE71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE718u;
    // 0x2ce71c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2CE718u, 0x2CE720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE720u;
label_2ce720:
    // 0x2ce720: 0xc0b33f8  jal         func_2CCFE0
label_2ce724:
    if (ctx->pc == 0x2CE724u) {
        ctx->pc = 0x2CE728u;
        goto label_2ce728;
    }
    ctx->pc = 0x2CE720u;
    SET_GPR_U32(ctx, 31, 0x2CE728u);
    ctx->pc = 0x2CCFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCFE0u, 0x2CE720u, 0x2CE728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE728u;
label_2ce728:
    // 0x2ce728: 0xc0554f4  jal         func_1553D0
label_2ce72c:
    if (ctx->pc == 0x2CE72Cu) {
        ctx->pc = 0x2CE72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE728u;
        // 0x2ce72c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE730u;
        goto label_2ce730;
    }
    ctx->pc = 0x2CE728u;
    SET_GPR_U32(ctx, 31, 0x2CE730u);
    ctx->pc = 0x2CE72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE728u;
    // 0x2ce72c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x2CE728u, 0x2CE730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE730u;
label_2ce730:
    // 0x2ce730: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2ce734:
    if (ctx->pc == 0x2CE734u) {
        ctx->pc = 0x2CE738u;
        goto label_2ce738;
    }
    ctx->pc = 0x2CE730u;
    {
        const bool branch_taken_0x2ce730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce730) {
            ctx->pc = 0x2CE710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce710;
        }
    }
    ctx->pc = 0x2CE738u;
label_2ce738:
    // 0x2ce738: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x2ce738u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce73c:
    // 0x2ce73c: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x2ce73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
label_2ce740:
    // 0x2ce740: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ce740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce744:
    // 0x2ce744: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ce744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce748:
    // 0x2ce748: 0xc050ed4  jal         func_143B50
label_2ce74c:
    if (ctx->pc == 0x2CE74Cu) {
        ctx->pc = 0x2CE74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE748u;
        // 0x2ce74c: 0x240800fe  addiu       $t0, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE750u;
        goto label_2ce750;
    }
    ctx->pc = 0x2CE748u;
    SET_GPR_U32(ctx, 31, 0x2CE750u);
    ctx->pc = 0x2CE74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE748u;
    // 0x2ce74c: 0x240800fe  addiu       $t0, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x2CE748u, 0x2CE750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE750u;
label_2ce750:
    // 0x2ce750: 0xc0a2a88  jal         func_28AA20
label_2ce754:
    if (ctx->pc == 0x2CE754u) {
        ctx->pc = 0x2CE758u;
        goto label_2ce758;
    }
    ctx->pc = 0x2CE750u;
    SET_GPR_U32(ctx, 31, 0x2CE758u);
    ctx->pc = 0x28AA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA20u, 0x2CE750u, 0x2CE758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE758u;
label_2ce758:
    // 0x2ce758: 0x12c00041  beqz        $s6, . + 4 + (0x41 << 2)
label_2ce75c:
    if (ctx->pc == 0x2CE75Cu) {
        ctx->pc = 0x2CE75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE758u;
        // 0x2ce75c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE760u;
        goto label_2ce760;
    }
    ctx->pc = 0x2CE758u;
    {
        const bool branch_taken_0x2ce758 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE758u;
        // 0x2ce75c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce758) {
            ctx->pc = 0x2CE860u;
            goto label_2ce860;
        }
    }
    ctx->pc = 0x2CE760u;
label_2ce760:
    // 0x2ce760: 0xc05559c  jal         func_155670
label_2ce764:
    if (ctx->pc == 0x2CE764u) {
        ctx->pc = 0x2CE768u;
        goto label_2ce768;
    }
    ctx->pc = 0x2CE760u;
    SET_GPR_U32(ctx, 31, 0x2CE768u);
    ctx->pc = 0x155670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155670u, 0x2CE760u, 0x2CE768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE768u;
label_2ce768:
    // 0x2ce768: 0xc0555a4  jal         func_155690
label_2ce76c:
    if (ctx->pc == 0x2CE76Cu) {
        ctx->pc = 0x2CE76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE768u;
        // 0x2ce76c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE770u;
        goto label_2ce770;
    }
    ctx->pc = 0x2CE768u;
    SET_GPR_U32(ctx, 31, 0x2CE770u);
    ctx->pc = 0x2CE76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE768u;
    // 0x2ce76c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155690u, 0x2CE768u, 0x2CE770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE770u;
label_2ce770:
    // 0x2ce770: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x2ce770u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce774:
    // 0x2ce774: 0xc0b2e68  jal         func_2CB9A0
label_2ce778:
    if (ctx->pc == 0x2CE778u) {
        ctx->pc = 0x2CE778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE774u;
        // 0x2ce778: 0x328500ff  andi        $a1, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE77Cu;
        goto label_2ce77c;
    }
    ctx->pc = 0x2CE774u;
    SET_GPR_U32(ctx, 31, 0x2CE77Cu);
    ctx->pc = 0x2CE778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE774u;
    // 0x2ce778: 0x328500ff  andi        $a1, $s4, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB9A0u, 0x2CE774u, 0x2CE77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE77Cu;
label_2ce77c:
    // 0x2ce77c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x2ce77cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_2ce780:
    // 0x2ce780: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ce780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce784:
    // 0x2ce784: 0x82a50000  lb          $a1, 0x0($s5)
    ctx->pc = 0x2ce784u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2ce788:
    // 0x2ce788: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ce788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ce78c:
    // 0x2ce78c: 0xac45085c  sw          $a1, 0x85C($v0)
    ctx->pc = 0x2ce78cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2140), GPR_U32(ctx, 5));
label_2ce790:
    // 0x2ce790: 0xac430860  sw          $v1, 0x860($v0)
    ctx->pc = 0x2ce790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2144), GPR_U32(ctx, 3));
label_2ce794:
    // 0x2ce794: 0xac430864  sw          $v1, 0x864($v0)
    ctx->pc = 0x2ce794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2148), GPR_U32(ctx, 3));
label_2ce798:
    // 0x2ce798: 0x8c5904d4  lw          $t9, 0x4D4($v0)
    ctx->pc = 0x2ce798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1236)));
label_2ce79c:
    // 0x2ce79c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2ce79cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2ce7a0:
    // 0x2ce7a0: 0x320f809  jalr        $t9
label_2ce7a4:
    if (ctx->pc == 0x2CE7A4u) {
        ctx->pc = 0x2CE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7A0u;
        // 0x2ce7a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE7A8u;
        goto label_2ce7a8;
    }
    ctx->pc = 0x2CE7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CE7A8u);
        ctx->pc = 0x2CE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7A0u;
        // 0x2ce7a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE7A0u, 0x2CE7A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CE7A8u;
label_2ce7a8:
    // 0x2ce7a8: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x2ce7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ce7ac:
    // 0x2ce7ac: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x2ce7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2ce7b0:
    // 0x2ce7b0: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x2ce7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2ce7b4:
    // 0x2ce7b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ce7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ce7b8:
    // 0x2ce7b8: 0xa64407f2  sh          $a0, 0x7F2($s2)
    ctx->pc = 0x2ce7b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 4));
label_2ce7bc:
    // 0x2ce7bc: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ce7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2ce7c0:
    // 0x2ce7c0: 0xa24007f5  sb          $zero, 0x7F5($s2)
    ctx->pc = 0x2ce7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 0));
label_2ce7c4:
    // 0x2ce7c4: 0x240300bf  addiu       $v1, $zero, 0xBF
    ctx->pc = 0x2ce7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
label_2ce7c8:
    // 0x2ce7c8: 0xae4407ec  sw          $a0, 0x7EC($s2)
    ctx->pc = 0x2ce7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 4));
label_2ce7cc:
    // 0x2ce7cc: 0xa2430780  sb          $v1, 0x780($s2)
    ctx->pc = 0x2ce7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2ce7d0:
    // 0x2ce7d0: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x2ce7d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2ce7d4:
    // 0x2ce7d4: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x2ce7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
label_2ce7d8:
    // 0x2ce7d8: 0x87a300b0  lh          $v1, 0xB0($sp)
    ctx->pc = 0x2ce7d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
label_2ce7dc:
    // 0x2ce7dc: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
label_2ce7e0:
    if (ctx->pc == 0x2CE7E0u) {
        ctx->pc = 0x2CE7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7DCu;
        // 0x2ce7e0: 0xa64300c2  sh          $v1, 0xC2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE7E4u;
        goto label_2ce7e4;
    }
    ctx->pc = 0x2CE7DCu;
    {
        const bool branch_taken_0x2ce7dc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7DCu;
        // 0x2ce7e0: 0xa64300c2  sh          $v1, 0xC2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce7dc) {
            ctx->pc = 0x2CE7F0u;
            goto label_2ce7f0;
        }
    }
    ctx->pc = 0x2CE7E4u;
label_2ce7e4:
    // 0x2ce7e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ce7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ce7e8:
    // 0x2ce7e8: 0x10000011  b           . + 4 + (0x11 << 2)
label_2ce7ec:
    if (ctx->pc == 0x2CE7ECu) {
        ctx->pc = 0x2CE7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7E8u;
        // 0x2ce7ec: 0xa2430640  sb          $v1, 0x640($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1600), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE7F0u;
        goto label_2ce7f0;
    }
    ctx->pc = 0x2CE7E8u;
    {
        const bool branch_taken_0x2ce7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7E8u;
        // 0x2ce7ec: 0xa2430640  sb          $v1, 0x640($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1600), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce7e8) {
            ctx->pc = 0x2CE830u;
            goto label_2ce830;
        }
    }
    ctx->pc = 0x2CE7F0u;
label_2ce7f0:
    // 0x2ce7f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce7f4:
    // 0x2ce7f4: 0xa2430640  sb          $v1, 0x640($s2)
    ctx->pc = 0x2ce7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1600), (uint8_t)GPR_U32(ctx, 3));
label_2ce7f8:
    // 0x2ce7f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ce7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_2ce7fc:
    // 0x2ce7fc: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x2ce7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
label_2ce800:
    // 0x2ce800: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x2ce800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_2ce804:
    // 0x2ce804: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2ce808:
    if (ctx->pc == 0x2CE808u) {
        ctx->pc = 0x2CE80Cu;
        goto label_2ce80c;
    }
    ctx->pc = 0x2CE804u;
    {
        const bool branch_taken_0x2ce804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce804) {
            ctx->pc = 0x2CE828u;
            goto label_2ce828;
        }
    }
    ctx->pc = 0x2CE80Cu;
label_2ce80c:
    // 0x2ce80c: 0x87848278  lh          $a0, -0x7D88($gp)
    ctx->pc = 0x2ce80cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935160)));
label_2ce810:
    // 0x2ce810: 0x27a5010c  addiu       $a1, $sp, 0x10C
    ctx->pc = 0x2ce810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_2ce814:
    // 0x2ce814: 0x29d1821  addu        $v1, $s4, $sp
    ctx->pc = 0x2ce814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_2ce818:
    // 0x2ce818: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x2ce818u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
label_2ce81c:
    // 0x2ce81c: 0x9063010c  lbu         $v1, 0x10C($v1)
    ctx->pc = 0x2ce81cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 268)));
label_2ce820:
    // 0x2ce820: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ce824:
    if (ctx->pc == 0x2CE824u) {
        ctx->pc = 0x2CE824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE820u;
        // 0x2ce824: 0xa2430641  sb          $v1, 0x641($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1601), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE828u;
        goto label_2ce828;
    }
    ctx->pc = 0x2CE820u;
    {
        const bool branch_taken_0x2ce820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE820u;
        // 0x2ce824: 0xa2430641  sb          $v1, 0x641($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1601), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce820) {
            ctx->pc = 0x2CE830u;
            goto label_2ce830;
        }
    }
    ctx->pc = 0x2CE828u;
label_2ce828:
    // 0x2ce828: 0xa2400641  sb          $zero, 0x641($s2)
    ctx->pc = 0x2ce828u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1601), (uint8_t)GPR_U32(ctx, 0));
label_2ce82c:
    // 0x2ce82c: 0x0  nop
    ctx->pc = 0x2ce82cu;
    // NOP
label_2ce830:
    // 0x2ce830: 0x93a300c0  lbu         $v1, 0xC0($sp)
    ctx->pc = 0x2ce830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_2ce834:
    // 0x2ce834: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_2ce838:
    if (ctx->pc == 0x2CE838u) {
        ctx->pc = 0x2CE83Cu;
        goto label_2ce83c;
    }
    ctx->pc = 0x2CE834u;
    {
        const bool branch_taken_0x2ce834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce834) {
            ctx->pc = 0x2CE898u;
            goto label_2ce898;
        }
    }
    ctx->pc = 0x2CE83Cu;
label_2ce83c:
    // 0x2ce83c: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x2ce83cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2ce840:
    // 0x2ce840: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ce840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ce844:
    // 0x2ce844: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
label_2ce848:
    if (ctx->pc == 0x2CE848u) {
        ctx->pc = 0x2CE848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE844u;
        // 0x2ce848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE84Cu;
        goto label_2ce84c;
    }
    ctx->pc = 0x2CE844u;
    {
        const bool branch_taken_0x2ce844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CE848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE844u;
        // 0x2ce848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce844) {
            ctx->pc = 0x2CE898u;
            goto label_2ce898;
        }
    }
    ctx->pc = 0x2CE84Cu;
label_2ce84c:
    // 0x2ce84c: 0xc098fb4  jal         func_263ED0
label_2ce850:
    if (ctx->pc == 0x2CE850u) {
        ctx->pc = 0x2CE854u;
        goto label_2ce854;
    }
    ctx->pc = 0x2CE84Cu;
    SET_GPR_U32(ctx, 31, 0x2CE854u);
    ctx->pc = 0x263ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263ED0u, 0x2CE84Cu, 0x2CE854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE854u;
label_2ce854:
    // 0x2ce854: 0x10000010  b           . + 4 + (0x10 << 2)
label_2ce858:
    if (ctx->pc == 0x2CE858u) {
        ctx->pc = 0x2CE85Cu;
        goto label_2ce85c;
    }
    ctx->pc = 0x2CE854u;
    {
        const bool branch_taken_0x2ce854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce854) {
            ctx->pc = 0x2CE898u;
            goto label_2ce898;
        }
    }
    ctx->pc = 0x2CE85Cu;
label_2ce85c:
    // 0x2ce85c: 0x0  nop
    ctx->pc = 0x2ce85cu;
    // NOP
label_2ce860:
    // 0x2ce860: 0x82a60000  lb          $a2, 0x0($s5)
    ctx->pc = 0x2ce860u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2ce864:
    // 0x2ce864: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce868:
    // 0x2ce868: 0xc0a5250  jal         func_294940
label_2ce86c:
    if (ctx->pc == 0x2CE86Cu) {
        ctx->pc = 0x2CE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE868u;
        // 0x2ce86c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE870u;
        goto label_2ce870;
    }
    ctx->pc = 0x2CE868u;
    SET_GPR_U32(ctx, 31, 0x2CE870u);
    ctx->pc = 0x2CE86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE868u;
    // 0x2ce86c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294940u, 0x2CE868u, 0x2CE870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE870u;
label_2ce870:
    // 0x2ce870: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2ce870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_2ce874:
    // 0x2ce874: 0xc0a7428  jal         func_29D0A0
label_2ce878:
    if (ctx->pc == 0x2CE878u) {
        ctx->pc = 0x2CE878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE874u;
        // 0x2ce878: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE87Cu;
        goto label_2ce87c;
    }
    ctx->pc = 0x2CE874u;
    SET_GPR_U32(ctx, 31, 0x2CE87Cu);
    ctx->pc = 0x2CE878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE874u;
    // 0x2ce878: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x2CE874u, 0x2CE87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE87Cu;
label_2ce87c:
    // 0x2ce87c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2ce87cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_2ce880:
    // 0x2ce880: 0xc0a7428  jal         func_29D0A0
label_2ce884:
    if (ctx->pc == 0x2CE884u) {
        ctx->pc = 0x2CE884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE880u;
        // 0x2ce884: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE888u;
        goto label_2ce888;
    }
    ctx->pc = 0x2CE880u;
    SET_GPR_U32(ctx, 31, 0x2CE888u);
    ctx->pc = 0x2CE884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE880u;
    // 0x2ce884: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x2CE880u, 0x2CE888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE888u;
label_2ce888:
    // 0x2ce888: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2ce888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_2ce88c:
    // 0x2ce88c: 0xc0510c0  jal         func_144300
label_2ce890:
    if (ctx->pc == 0x2CE890u) {
        ctx->pc = 0x2CE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE88Cu;
        // 0x2ce890: 0x248486e0  addiu       $a0, $a0, -0x7920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE894u;
        goto label_2ce894;
    }
    ctx->pc = 0x2CE88Cu;
    SET_GPR_U32(ctx, 31, 0x2CE894u);
    ctx->pc = 0x2CE890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE88Cu;
    // 0x2ce890: 0x248486e0  addiu       $a0, $a0, -0x7920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144300u, 0x2CE88Cu, 0x2CE894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE894u;
label_2ce894:
    // 0x2ce894: 0x0  nop
    ctx->pc = 0x2ce894u;
    // NOP
label_2ce898:
    // 0x2ce898: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2ce898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_2ce89c:
    // 0x2ce89c: 0x24846c02  addiu       $a0, $a0, 0x6C02
    ctx->pc = 0x2ce89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27650));
label_2ce8a0:
    // 0x2ce8a0: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x2ce8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
label_2ce8a4:
    // 0x2ce8a4: 0x24636c04  addiu       $v1, $v1, 0x6C04
    ctx->pc = 0x2ce8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27652));
label_2ce8a8:
    // 0x2ce8a8: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x2ce8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_2ce8ac:
    // 0x2ce8ac: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x2ce8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2ce8b0:
    // 0x2ce8b0: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x2ce8b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce8b4:
    // 0x2ce8b4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2ce8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2ce8b8:
    // 0x2ce8b8: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x2ce8b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
label_2ce8bc:
    // 0x2ce8bc: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2ce8bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2ce8c0:
    // 0x2ce8c0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2ce8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_2ce8c4:
    // 0x2ce8c4: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x2ce8c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2ce8c8:
    // 0x2ce8c8: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2ce8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_2ce8cc:
    // 0x2ce8cc: 0x93a300df  lbu         $v1, 0xDF($sp)
    ctx->pc = 0x2ce8ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
label_2ce8d0:
    // 0x2ce8d0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_2ce8d4:
    if (ctx->pc == 0x2CE8D4u) {
        ctx->pc = 0x2CE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE8D0u;
        // 0x2ce8d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE8D8u;
        goto label_2ce8d8;
    }
    ctx->pc = 0x2CE8D0u;
    {
        const bool branch_taken_0x2ce8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE8D0u;
        // 0x2ce8d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce8d0) {
            ctx->pc = 0x2CE918u;
            goto label_2ce918;
        }
    }
    ctx->pc = 0x2CE8D8u;
label_2ce8d8:
    // 0x2ce8d8: 0xc0f5738  jal         func_3D5CE0
label_2ce8dc:
    if (ctx->pc == 0x2CE8DCu) {
        ctx->pc = 0x2CE8E0u;
        goto label_2ce8e0;
    }
    ctx->pc = 0x2CE8D8u;
    SET_GPR_U32(ctx, 31, 0x2CE8E0u);
    ctx->pc = 0x3D5CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5CE0u, 0x2CE8D8u, 0x2CE8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE8E0u;
label_2ce8e0:
    // 0x2ce8e0: 0x8f828064  lw          $v0, -0x7F9C($gp)
    ctx->pc = 0x2ce8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
label_2ce8e4:
    // 0x2ce8e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ce8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ce8e8:
    // 0x2ce8e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ce8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ce8ec:
    // 0x2ce8ec: 0xc0a932c  jal         func_2A4CB0
label_2ce8f0:
    if (ctx->pc == 0x2CE8F0u) {
        ctx->pc = 0x2CE8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE8ECu;
        // 0x2ce8f0: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE8F4u;
        goto label_2ce8f4;
    }
    ctx->pc = 0x2CE8ECu;
    SET_GPR_U32(ctx, 31, 0x2CE8F4u);
    ctx->pc = 0x2CE8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE8ECu;
    // 0x2ce8f0: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4CB0u, 0x2CE8ECu, 0x2CE8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE8F4u;
label_2ce8f4:
    // 0x2ce8f4: 0x8f838064  lw          $v1, -0x7F9C($gp)
    ctx->pc = 0x2ce8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
label_2ce8f8:
    // 0x2ce8f8: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x2ce8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
label_2ce8fc:
    // 0x2ce8fc: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x2ce8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
label_2ce900:
    // 0x2ce900: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x2ce900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
label_2ce904:
    // 0x2ce904: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ce904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce908:
    // 0x2ce908: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x2ce908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
label_2ce90c:
    // 0x2ce90c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ce90cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce910:
    // 0x2ce910: 0xc0c99d0  jal         func_326740
label_2ce914:
    if (ctx->pc == 0x2CE914u) {
        ctx->pc = 0x2CE914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE910u;
        // 0x2ce914: 0x24670020  addiu       $a3, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE918u;
        goto label_2ce918;
    }
    ctx->pc = 0x2CE910u;
    SET_GPR_U32(ctx, 31, 0x2CE918u);
    ctx->pc = 0x2CE914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE910u;
    // 0x2ce914: 0x24670020  addiu       $a3, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x2CE910u, 0x2CE918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE918u;
label_2ce918:
    // 0x2ce918: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2ce918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2ce91c:
    // 0x2ce91c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2ce91cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ce920:
    // 0x2ce920: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ce920u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ce924:
    // 0x2ce924: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ce924u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ce928:
    // 0x2ce928: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ce928u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ce92c:
    // 0x2ce92c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ce92cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ce930:
    // 0x2ce930: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ce930u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ce934:
    // 0x2ce934: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ce934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ce938:
    // 0x2ce938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ce93c:
    // 0x2ce93c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce93cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce940:
    // 0x2ce940: 0x3e00008  jr          $ra
label_2ce944:
    if (ctx->pc == 0x2CE944u) {
        ctx->pc = 0x2CE944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE940u;
        // 0x2ce944: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE948u;
        goto label_fallthrough_0x2ce940;
    }
    ctx->pc = 0x2CE940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE940u;
        // 0x2ce944: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ce940:
    ctx->pc = 0x2CE948u;
}
