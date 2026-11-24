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

// Function: sub_0013EE90
// Address: 0x13ee90 - 0x143048
void sub_0013EE90_0x13ee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EE90_0x13ee90");
#endif

    switch (ctx->pc) {
        case 0x13ee90u: goto label_13ee90;
        case 0x13ee94u: goto label_13ee94;
        case 0x13ee98u: goto label_13ee98;
        case 0x13ee9cu: goto label_13ee9c;
        case 0x13eea0u: goto label_13eea0;
        case 0x13eea4u: goto label_13eea4;
        case 0x13eea8u: goto label_13eea8;
        case 0x13eeacu: goto label_13eeac;
        case 0x13eeb0u: goto label_13eeb0;
        case 0x13eeb4u: goto label_13eeb4;
        case 0x13eeb8u: goto label_13eeb8;
        case 0x13eebcu: goto label_13eebc;
        case 0x13eec0u: goto label_13eec0;
        case 0x13eec4u: goto label_13eec4;
        case 0x13eec8u: goto label_13eec8;
        case 0x13eeccu: goto label_13eecc;
        case 0x13eed0u: goto label_13eed0;
        case 0x13eed4u: goto label_13eed4;
        case 0x13eed8u: goto label_13eed8;
        case 0x13eedcu: goto label_13eedc;
        case 0x13eee0u: goto label_13eee0;
        case 0x13eee4u: goto label_13eee4;
        case 0x13eee8u: goto label_13eee8;
        case 0x13eeecu: goto label_13eeec;
        case 0x13eef0u: goto label_13eef0;
        case 0x13eef4u: goto label_13eef4;
        case 0x13eef8u: goto label_13eef8;
        case 0x13eefcu: goto label_13eefc;
        case 0x13ef00u: goto label_13ef00;
        case 0x13ef04u: goto label_13ef04;
        case 0x13ef08u: goto label_13ef08;
        case 0x13ef0cu: goto label_13ef0c;
        case 0x13ef10u: goto label_13ef10;
        case 0x13ef14u: goto label_13ef14;
        case 0x13ef18u: goto label_13ef18;
        case 0x13ef1cu: goto label_13ef1c;
        case 0x13ef20u: goto label_13ef20;
        case 0x13ef24u: goto label_13ef24;
        case 0x13ef28u: goto label_13ef28;
        case 0x13ef2cu: goto label_13ef2c;
        case 0x13ef30u: goto label_13ef30;
        case 0x13ef34u: goto label_13ef34;
        case 0x13ef38u: goto label_13ef38;
        case 0x13ef3cu: goto label_13ef3c;
        case 0x13ef40u: goto label_13ef40;
        case 0x13ef44u: goto label_13ef44;
        case 0x13ef48u: goto label_13ef48;
        case 0x13ef4cu: goto label_13ef4c;
        case 0x13ef50u: goto label_13ef50;
        case 0x13ef54u: goto label_13ef54;
        case 0x13ef58u: goto label_13ef58;
        case 0x13ef5cu: goto label_13ef5c;
        case 0x13ef60u: goto label_13ef60;
        case 0x13ef64u: goto label_13ef64;
        case 0x13ef68u: goto label_13ef68;
        case 0x13ef6cu: goto label_13ef6c;
        case 0x13ef70u: goto label_13ef70;
        case 0x13ef74u: goto label_13ef74;
        case 0x13ef78u: goto label_13ef78;
        case 0x13ef7cu: goto label_13ef7c;
        case 0x13ef80u: goto label_13ef80;
        case 0x13ef84u: goto label_13ef84;
        case 0x13ef88u: goto label_13ef88;
        case 0x13ef8cu: goto label_13ef8c;
        case 0x13ef90u: goto label_13ef90;
        case 0x13ef94u: goto label_13ef94;
        case 0x13ef98u: goto label_13ef98;
        case 0x13ef9cu: goto label_13ef9c;
        case 0x13efa0u: goto label_13efa0;
        case 0x13efa4u: goto label_13efa4;
        case 0x13efa8u: goto label_13efa8;
        case 0x13efacu: goto label_13efac;
        case 0x13efb0u: goto label_13efb0;
        case 0x13efb4u: goto label_13efb4;
        case 0x13efb8u: goto label_13efb8;
        case 0x13efbcu: goto label_13efbc;
        case 0x13efc0u: goto label_13efc0;
        case 0x13efc4u: goto label_13efc4;
        case 0x13efc8u: goto label_13efc8;
        case 0x13efccu: goto label_13efcc;
        case 0x13efd0u: goto label_13efd0;
        case 0x13efd4u: goto label_13efd4;
        case 0x13efd8u: goto label_13efd8;
        case 0x13efdcu: goto label_13efdc;
        case 0x13efe0u: goto label_13efe0;
        case 0x13efe4u: goto label_13efe4;
        case 0x13efe8u: goto label_13efe8;
        case 0x13efecu: goto label_13efec;
        case 0x13eff0u: goto label_13eff0;
        case 0x13eff4u: goto label_13eff4;
        case 0x13eff8u: goto label_13eff8;
        case 0x13effcu: goto label_13effc;
        case 0x13f000u: goto label_13f000;
        case 0x13f004u: goto label_13f004;
        case 0x13f008u: goto label_13f008;
        case 0x13f00cu: goto label_13f00c;
        case 0x13f010u: goto label_13f010;
        case 0x13f014u: goto label_13f014;
        case 0x13f018u: goto label_13f018;
        case 0x13f01cu: goto label_13f01c;
        case 0x13f020u: goto label_13f020;
        case 0x13f024u: goto label_13f024;
        case 0x13f028u: goto label_13f028;
        case 0x13f02cu: goto label_13f02c;
        case 0x13f030u: goto label_13f030;
        case 0x13f034u: goto label_13f034;
        case 0x13f038u: goto label_13f038;
        case 0x13f03cu: goto label_13f03c;
        case 0x13f040u: goto label_13f040;
        case 0x13f044u: goto label_13f044;
        case 0x13f048u: goto label_13f048;
        case 0x13f04cu: goto label_13f04c;
        case 0x13f050u: goto label_13f050;
        case 0x13f054u: goto label_13f054;
        case 0x13f058u: goto label_13f058;
        case 0x13f05cu: goto label_13f05c;
        case 0x13f060u: goto label_13f060;
        case 0x13f064u: goto label_13f064;
        case 0x13f068u: goto label_13f068;
        case 0x13f06cu: goto label_13f06c;
        case 0x13f070u: goto label_13f070;
        case 0x13f074u: goto label_13f074;
        case 0x13f078u: goto label_13f078;
        case 0x13f07cu: goto label_13f07c;
        case 0x13f080u: goto label_13f080;
        case 0x13f084u: goto label_13f084;
        case 0x13f088u: goto label_13f088;
        case 0x13f08cu: goto label_13f08c;
        case 0x13f090u: goto label_13f090;
        case 0x13f094u: goto label_13f094;
        case 0x13f098u: goto label_13f098;
        case 0x13f09cu: goto label_13f09c;
        case 0x13f0a0u: goto label_13f0a0;
        case 0x13f0a4u: goto label_13f0a4;
        case 0x13f0a8u: goto label_13f0a8;
        case 0x13f0acu: goto label_13f0ac;
        case 0x13f0b0u: goto label_13f0b0;
        case 0x13f0b4u: goto label_13f0b4;
        case 0x13f0b8u: goto label_13f0b8;
        case 0x13f0bcu: goto label_13f0bc;
        case 0x13f0c0u: goto label_13f0c0;
        case 0x13f0c4u: goto label_13f0c4;
        case 0x13f0c8u: goto label_13f0c8;
        case 0x13f0ccu: goto label_13f0cc;
        case 0x13f0d0u: goto label_13f0d0;
        case 0x13f0d4u: goto label_13f0d4;
        case 0x13f0d8u: goto label_13f0d8;
        case 0x13f0dcu: goto label_13f0dc;
        case 0x13f0e0u: goto label_13f0e0;
        case 0x13f0e4u: goto label_13f0e4;
        case 0x13f0e8u: goto label_13f0e8;
        case 0x13f0ecu: goto label_13f0ec;
        case 0x13f0f0u: goto label_13f0f0;
        case 0x13f0f4u: goto label_13f0f4;
        case 0x13f0f8u: goto label_13f0f8;
        case 0x13f0fcu: goto label_13f0fc;
        case 0x13f100u: goto label_13f100;
        case 0x13f104u: goto label_13f104;
        case 0x13f108u: goto label_13f108;
        case 0x13f10cu: goto label_13f10c;
        case 0x13f110u: goto label_13f110;
        case 0x13f114u: goto label_13f114;
        case 0x13f118u: goto label_13f118;
        case 0x13f11cu: goto label_13f11c;
        case 0x13f120u: goto label_13f120;
        case 0x13f124u: goto label_13f124;
        case 0x13f128u: goto label_13f128;
        case 0x13f12cu: goto label_13f12c;
        case 0x13f130u: goto label_13f130;
        case 0x13f134u: goto label_13f134;
        case 0x13f138u: goto label_13f138;
        case 0x13f13cu: goto label_13f13c;
        case 0x13f140u: goto label_13f140;
        case 0x13f144u: goto label_13f144;
        case 0x13f148u: goto label_13f148;
        case 0x13f14cu: goto label_13f14c;
        case 0x13f150u: goto label_13f150;
        case 0x13f154u: goto label_13f154;
        case 0x13f158u: goto label_13f158;
        case 0x13f15cu: goto label_13f15c;
        case 0x13f160u: goto label_13f160;
        case 0x13f164u: goto label_13f164;
        case 0x13f168u: goto label_13f168;
        case 0x13f16cu: goto label_13f16c;
        case 0x13f170u: goto label_13f170;
        case 0x13f174u: goto label_13f174;
        case 0x13f178u: goto label_13f178;
        case 0x13f17cu: goto label_13f17c;
        case 0x13f180u: goto label_13f180;
        case 0x13f184u: goto label_13f184;
        case 0x13f188u: goto label_13f188;
        case 0x13f18cu: goto label_13f18c;
        case 0x13f190u: goto label_13f190;
        case 0x13f194u: goto label_13f194;
        case 0x13f198u: goto label_13f198;
        case 0x13f19cu: goto label_13f19c;
        case 0x13f1a0u: goto label_13f1a0;
        case 0x13f1a4u: goto label_13f1a4;
        case 0x13f1a8u: goto label_13f1a8;
        case 0x13f1acu: goto label_13f1ac;
        case 0x13f1b0u: goto label_13f1b0;
        case 0x13f1b4u: goto label_13f1b4;
        case 0x13f1b8u: goto label_13f1b8;
        case 0x13f1bcu: goto label_13f1bc;
        case 0x13f1c0u: goto label_13f1c0;
        case 0x13f1c4u: goto label_13f1c4;
        case 0x13f1c8u: goto label_13f1c8;
        case 0x13f1ccu: goto label_13f1cc;
        case 0x13f1d0u: goto label_13f1d0;
        case 0x13f1d4u: goto label_13f1d4;
        case 0x13f1d8u: goto label_13f1d8;
        case 0x13f1dcu: goto label_13f1dc;
        case 0x13f1e0u: goto label_13f1e0;
        case 0x13f1e4u: goto label_13f1e4;
        case 0x13f1e8u: goto label_13f1e8;
        case 0x13f1ecu: goto label_13f1ec;
        case 0x13f1f0u: goto label_13f1f0;
        case 0x13f1f4u: goto label_13f1f4;
        case 0x13f1f8u: goto label_13f1f8;
        case 0x13f1fcu: goto label_13f1fc;
        case 0x13f200u: goto label_13f200;
        case 0x13f204u: goto label_13f204;
        case 0x13f208u: goto label_13f208;
        case 0x13f20cu: goto label_13f20c;
        case 0x13f210u: goto label_13f210;
        case 0x13f214u: goto label_13f214;
        case 0x13f218u: goto label_13f218;
        case 0x13f21cu: goto label_13f21c;
        case 0x13f220u: goto label_13f220;
        case 0x13f224u: goto label_13f224;
        case 0x13f228u: goto label_13f228;
        case 0x13f22cu: goto label_13f22c;
        case 0x13f230u: goto label_13f230;
        case 0x13f234u: goto label_13f234;
        case 0x13f238u: goto label_13f238;
        case 0x13f23cu: goto label_13f23c;
        case 0x13f240u: goto label_13f240;
        case 0x13f244u: goto label_13f244;
        case 0x13f248u: goto label_13f248;
        case 0x13f24cu: goto label_13f24c;
        case 0x13f250u: goto label_13f250;
        case 0x13f254u: goto label_13f254;
        case 0x13f258u: goto label_13f258;
        case 0x13f25cu: goto label_13f25c;
        case 0x13f260u: goto label_13f260;
        case 0x13f264u: goto label_13f264;
        case 0x13f268u: goto label_13f268;
        case 0x13f26cu: goto label_13f26c;
        case 0x13f270u: goto label_13f270;
        case 0x13f274u: goto label_13f274;
        case 0x13f278u: goto label_13f278;
        case 0x13f27cu: goto label_13f27c;
        case 0x13f280u: goto label_13f280;
        case 0x13f284u: goto label_13f284;
        case 0x13f288u: goto label_13f288;
        case 0x13f28cu: goto label_13f28c;
        case 0x13f290u: goto label_13f290;
        case 0x13f294u: goto label_13f294;
        case 0x13f298u: goto label_13f298;
        case 0x13f29cu: goto label_13f29c;
        case 0x13f2a0u: goto label_13f2a0;
        case 0x13f2a4u: goto label_13f2a4;
        case 0x13f2a8u: goto label_13f2a8;
        case 0x13f2acu: goto label_13f2ac;
        case 0x13f2b0u: goto label_13f2b0;
        case 0x13f2b4u: goto label_13f2b4;
        case 0x13f2b8u: goto label_13f2b8;
        case 0x13f2bcu: goto label_13f2bc;
        case 0x13f2c0u: goto label_13f2c0;
        case 0x13f2c4u: goto label_13f2c4;
        case 0x13f2c8u: goto label_13f2c8;
        case 0x13f2ccu: goto label_13f2cc;
        case 0x13f2d0u: goto label_13f2d0;
        case 0x13f2d4u: goto label_13f2d4;
        case 0x13f2d8u: goto label_13f2d8;
        case 0x13f2dcu: goto label_13f2dc;
        case 0x13f2e0u: goto label_13f2e0;
        case 0x13f2e4u: goto label_13f2e4;
        case 0x13f2e8u: goto label_13f2e8;
        case 0x13f2ecu: goto label_13f2ec;
        case 0x13f2f0u: goto label_13f2f0;
        case 0x13f2f4u: goto label_13f2f4;
        case 0x13f2f8u: goto label_13f2f8;
        case 0x13f2fcu: goto label_13f2fc;
        case 0x13f300u: goto label_13f300;
        case 0x13f304u: goto label_13f304;
        case 0x13f308u: goto label_13f308;
        case 0x13f30cu: goto label_13f30c;
        case 0x13f310u: goto label_13f310;
        case 0x13f314u: goto label_13f314;
        case 0x13f318u: goto label_13f318;
        case 0x13f31cu: goto label_13f31c;
        case 0x13f320u: goto label_13f320;
        case 0x13f324u: goto label_13f324;
        case 0x13f328u: goto label_13f328;
        case 0x13f32cu: goto label_13f32c;
        case 0x13f330u: goto label_13f330;
        case 0x13f334u: goto label_13f334;
        case 0x13f338u: goto label_13f338;
        case 0x13f33cu: goto label_13f33c;
        case 0x13f340u: goto label_13f340;
        case 0x13f344u: goto label_13f344;
        case 0x13f348u: goto label_13f348;
        case 0x13f34cu: goto label_13f34c;
        case 0x13f350u: goto label_13f350;
        case 0x13f354u: goto label_13f354;
        case 0x13f358u: goto label_13f358;
        case 0x13f35cu: goto label_13f35c;
        case 0x13f360u: goto label_13f360;
        case 0x13f364u: goto label_13f364;
        case 0x13f368u: goto label_13f368;
        case 0x13f36cu: goto label_13f36c;
        case 0x13f370u: goto label_13f370;
        case 0x13f374u: goto label_13f374;
        case 0x13f378u: goto label_13f378;
        case 0x13f37cu: goto label_13f37c;
        case 0x13f380u: goto label_13f380;
        case 0x13f384u: goto label_13f384;
        case 0x13f388u: goto label_13f388;
        case 0x13f38cu: goto label_13f38c;
        case 0x13f390u: goto label_13f390;
        case 0x13f394u: goto label_13f394;
        case 0x13f398u: goto label_13f398;
        case 0x13f39cu: goto label_13f39c;
        case 0x13f3a0u: goto label_13f3a0;
        case 0x13f3a4u: goto label_13f3a4;
        case 0x13f3a8u: goto label_13f3a8;
        case 0x13f3acu: goto label_13f3ac;
        case 0x13f3b0u: goto label_13f3b0;
        case 0x13f3b4u: goto label_13f3b4;
        case 0x13f3b8u: goto label_13f3b8;
        case 0x13f3bcu: goto label_13f3bc;
        case 0x13f3c0u: goto label_13f3c0;
        case 0x13f3c4u: goto label_13f3c4;
        case 0x13f3c8u: goto label_13f3c8;
        case 0x13f3ccu: goto label_13f3cc;
        case 0x13f3d0u: goto label_13f3d0;
        case 0x13f3d4u: goto label_13f3d4;
        case 0x13f3d8u: goto label_13f3d8;
        case 0x13f3dcu: goto label_13f3dc;
        case 0x13f3e0u: goto label_13f3e0;
        case 0x13f3e4u: goto label_13f3e4;
        case 0x13f3e8u: goto label_13f3e8;
        case 0x13f3ecu: goto label_13f3ec;
        case 0x13f3f0u: goto label_13f3f0;
        case 0x13f3f4u: goto label_13f3f4;
        case 0x13f3f8u: goto label_13f3f8;
        case 0x13f3fcu: goto label_13f3fc;
        case 0x13f400u: goto label_13f400;
        case 0x13f404u: goto label_13f404;
        case 0x13f408u: goto label_13f408;
        case 0x13f40cu: goto label_13f40c;
        case 0x13f410u: goto label_13f410;
        case 0x13f414u: goto label_13f414;
        case 0x13f418u: goto label_13f418;
        case 0x13f41cu: goto label_13f41c;
        case 0x13f420u: goto label_13f420;
        case 0x13f424u: goto label_13f424;
        case 0x13f428u: goto label_13f428;
        case 0x13f42cu: goto label_13f42c;
        case 0x13f430u: goto label_13f430;
        case 0x13f434u: goto label_13f434;
        case 0x13f438u: goto label_13f438;
        case 0x13f43cu: goto label_13f43c;
        case 0x13f440u: goto label_13f440;
        case 0x13f444u: goto label_13f444;
        case 0x13f448u: goto label_13f448;
        case 0x13f44cu: goto label_13f44c;
        case 0x13f450u: goto label_13f450;
        case 0x13f454u: goto label_13f454;
        case 0x13f458u: goto label_13f458;
        case 0x13f45cu: goto label_13f45c;
        case 0x13f460u: goto label_13f460;
        case 0x13f464u: goto label_13f464;
        case 0x13f468u: goto label_13f468;
        case 0x13f46cu: goto label_13f46c;
        case 0x13f470u: goto label_13f470;
        case 0x13f474u: goto label_13f474;
        case 0x13f478u: goto label_13f478;
        case 0x13f47cu: goto label_13f47c;
        case 0x13f480u: goto label_13f480;
        case 0x13f484u: goto label_13f484;
        case 0x13f488u: goto label_13f488;
        case 0x13f48cu: goto label_13f48c;
        case 0x13f490u: goto label_13f490;
        case 0x13f494u: goto label_13f494;
        case 0x13f498u: goto label_13f498;
        case 0x13f49cu: goto label_13f49c;
        case 0x13f4a0u: goto label_13f4a0;
        case 0x13f4a4u: goto label_13f4a4;
        case 0x13f4a8u: goto label_13f4a8;
        case 0x13f4acu: goto label_13f4ac;
        case 0x13f4b0u: goto label_13f4b0;
        case 0x13f4b4u: goto label_13f4b4;
        case 0x13f4b8u: goto label_13f4b8;
        case 0x13f4bcu: goto label_13f4bc;
        case 0x13f4c0u: goto label_13f4c0;
        case 0x13f4c4u: goto label_13f4c4;
        case 0x13f4c8u: goto label_13f4c8;
        case 0x13f4ccu: goto label_13f4cc;
        case 0x13f4d0u: goto label_13f4d0;
        case 0x13f4d4u: goto label_13f4d4;
        case 0x13f4d8u: goto label_13f4d8;
        case 0x13f4dcu: goto label_13f4dc;
        case 0x13f4e0u: goto label_13f4e0;
        case 0x13f4e4u: goto label_13f4e4;
        case 0x13f4e8u: goto label_13f4e8;
        case 0x13f4ecu: goto label_13f4ec;
        case 0x13f4f0u: goto label_13f4f0;
        case 0x13f4f4u: goto label_13f4f4;
        case 0x13f4f8u: goto label_13f4f8;
        case 0x13f4fcu: goto label_13f4fc;
        case 0x13f500u: goto label_13f500;
        case 0x13f504u: goto label_13f504;
        case 0x13f508u: goto label_13f508;
        case 0x13f50cu: goto label_13f50c;
        case 0x13f510u: goto label_13f510;
        case 0x13f514u: goto label_13f514;
        case 0x13f518u: goto label_13f518;
        case 0x13f51cu: goto label_13f51c;
        case 0x13f520u: goto label_13f520;
        case 0x13f524u: goto label_13f524;
        case 0x13f528u: goto label_13f528;
        case 0x13f52cu: goto label_13f52c;
        case 0x13f530u: goto label_13f530;
        case 0x13f534u: goto label_13f534;
        case 0x13f538u: goto label_13f538;
        case 0x13f53cu: goto label_13f53c;
        case 0x13f540u: goto label_13f540;
        case 0x13f544u: goto label_13f544;
        case 0x13f548u: goto label_13f548;
        case 0x13f54cu: goto label_13f54c;
        case 0x13f550u: goto label_13f550;
        case 0x13f554u: goto label_13f554;
        case 0x13f558u: goto label_13f558;
        case 0x13f55cu: goto label_13f55c;
        case 0x13f560u: goto label_13f560;
        case 0x13f564u: goto label_13f564;
        case 0x13f568u: goto label_13f568;
        case 0x13f56cu: goto label_13f56c;
        case 0x13f570u: goto label_13f570;
        case 0x13f574u: goto label_13f574;
        case 0x13f578u: goto label_13f578;
        case 0x13f57cu: goto label_13f57c;
        case 0x13f580u: goto label_13f580;
        case 0x13f584u: goto label_13f584;
        case 0x13f588u: goto label_13f588;
        case 0x13f58cu: goto label_13f58c;
        case 0x13f590u: goto label_13f590;
        case 0x13f594u: goto label_13f594;
        case 0x13f598u: goto label_13f598;
        case 0x13f59cu: goto label_13f59c;
        case 0x13f5a0u: goto label_13f5a0;
        case 0x13f5a4u: goto label_13f5a4;
        case 0x13f5a8u: goto label_13f5a8;
        case 0x13f5acu: goto label_13f5ac;
        case 0x13f5b0u: goto label_13f5b0;
        case 0x13f5b4u: goto label_13f5b4;
        case 0x13f5b8u: goto label_13f5b8;
        case 0x13f5bcu: goto label_13f5bc;
        case 0x13f5c0u: goto label_13f5c0;
        case 0x13f5c4u: goto label_13f5c4;
        case 0x13f5c8u: goto label_13f5c8;
        case 0x13f5ccu: goto label_13f5cc;
        case 0x13f5d0u: goto label_13f5d0;
        case 0x13f5d4u: goto label_13f5d4;
        case 0x13f5d8u: goto label_13f5d8;
        case 0x13f5dcu: goto label_13f5dc;
        case 0x13f5e0u: goto label_13f5e0;
        case 0x13f5e4u: goto label_13f5e4;
        case 0x13f5e8u: goto label_13f5e8;
        case 0x13f5ecu: goto label_13f5ec;
        case 0x13f5f0u: goto label_13f5f0;
        case 0x13f5f4u: goto label_13f5f4;
        case 0x13f5f8u: goto label_13f5f8;
        case 0x13f5fcu: goto label_13f5fc;
        case 0x13f600u: goto label_13f600;
        case 0x13f604u: goto label_13f604;
        case 0x13f608u: goto label_13f608;
        case 0x13f60cu: goto label_13f60c;
        case 0x13f610u: goto label_13f610;
        case 0x13f614u: goto label_13f614;
        case 0x13f618u: goto label_13f618;
        case 0x13f61cu: goto label_13f61c;
        case 0x13f620u: goto label_13f620;
        case 0x13f624u: goto label_13f624;
        case 0x13f628u: goto label_13f628;
        case 0x13f62cu: goto label_13f62c;
        case 0x13f630u: goto label_13f630;
        case 0x13f634u: goto label_13f634;
        case 0x13f638u: goto label_13f638;
        case 0x13f63cu: goto label_13f63c;
        case 0x13f640u: goto label_13f640;
        case 0x13f644u: goto label_13f644;
        case 0x13f648u: goto label_13f648;
        case 0x13f64cu: goto label_13f64c;
        case 0x13f650u: goto label_13f650;
        case 0x13f654u: goto label_13f654;
        case 0x13f658u: goto label_13f658;
        case 0x13f65cu: goto label_13f65c;
        case 0x13f660u: goto label_13f660;
        case 0x13f664u: goto label_13f664;
        case 0x13f668u: goto label_13f668;
        case 0x13f66cu: goto label_13f66c;
        case 0x13f670u: goto label_13f670;
        case 0x13f674u: goto label_13f674;
        case 0x13f678u: goto label_13f678;
        case 0x13f67cu: goto label_13f67c;
        case 0x13f680u: goto label_13f680;
        case 0x13f684u: goto label_13f684;
        case 0x13f688u: goto label_13f688;
        case 0x13f68cu: goto label_13f68c;
        case 0x13f690u: goto label_13f690;
        case 0x13f694u: goto label_13f694;
        case 0x13f698u: goto label_13f698;
        case 0x13f69cu: goto label_13f69c;
        case 0x13f6a0u: goto label_13f6a0;
        case 0x13f6a4u: goto label_13f6a4;
        case 0x13f6a8u: goto label_13f6a8;
        case 0x13f6acu: goto label_13f6ac;
        case 0x13f6b0u: goto label_13f6b0;
        case 0x13f6b4u: goto label_13f6b4;
        case 0x13f6b8u: goto label_13f6b8;
        case 0x13f6bcu: goto label_13f6bc;
        case 0x13f6c0u: goto label_13f6c0;
        case 0x13f6c4u: goto label_13f6c4;
        case 0x13f6c8u: goto label_13f6c8;
        case 0x13f6ccu: goto label_13f6cc;
        case 0x13f6d0u: goto label_13f6d0;
        case 0x13f6d4u: goto label_13f6d4;
        case 0x13f6d8u: goto label_13f6d8;
        case 0x13f6dcu: goto label_13f6dc;
        case 0x13f6e0u: goto label_13f6e0;
        case 0x13f6e4u: goto label_13f6e4;
        case 0x13f6e8u: goto label_13f6e8;
        case 0x13f6ecu: goto label_13f6ec;
        case 0x13f6f0u: goto label_13f6f0;
        case 0x13f6f4u: goto label_13f6f4;
        case 0x13f6f8u: goto label_13f6f8;
        case 0x13f6fcu: goto label_13f6fc;
        case 0x13f700u: goto label_13f700;
        case 0x13f704u: goto label_13f704;
        case 0x13f708u: goto label_13f708;
        case 0x13f70cu: goto label_13f70c;
        case 0x13f710u: goto label_13f710;
        case 0x13f714u: goto label_13f714;
        case 0x13f718u: goto label_13f718;
        case 0x13f71cu: goto label_13f71c;
        case 0x13f720u: goto label_13f720;
        case 0x13f724u: goto label_13f724;
        case 0x13f728u: goto label_13f728;
        case 0x13f72cu: goto label_13f72c;
        case 0x13f730u: goto label_13f730;
        case 0x13f734u: goto label_13f734;
        case 0x13f738u: goto label_13f738;
        case 0x13f73cu: goto label_13f73c;
        case 0x13f740u: goto label_13f740;
        case 0x13f744u: goto label_13f744;
        case 0x13f748u: goto label_13f748;
        case 0x13f74cu: goto label_13f74c;
        case 0x13f750u: goto label_13f750;
        case 0x13f754u: goto label_13f754;
        case 0x13f758u: goto label_13f758;
        case 0x13f75cu: goto label_13f75c;
        case 0x13f760u: goto label_13f760;
        case 0x13f764u: goto label_13f764;
        case 0x13f768u: goto label_13f768;
        case 0x13f76cu: goto label_13f76c;
        case 0x13f770u: goto label_13f770;
        case 0x13f774u: goto label_13f774;
        case 0x13f778u: goto label_13f778;
        case 0x13f77cu: goto label_13f77c;
        case 0x13f780u: goto label_13f780;
        case 0x13f784u: goto label_13f784;
        case 0x13f788u: goto label_13f788;
        case 0x13f78cu: goto label_13f78c;
        case 0x13f790u: goto label_13f790;
        case 0x13f794u: goto label_13f794;
        case 0x13f798u: goto label_13f798;
        case 0x13f79cu: goto label_13f79c;
        case 0x13f7a0u: goto label_13f7a0;
        case 0x13f7a4u: goto label_13f7a4;
        case 0x13f7a8u: goto label_13f7a8;
        case 0x13f7acu: goto label_13f7ac;
        case 0x13f7b0u: goto label_13f7b0;
        case 0x13f7b4u: goto label_13f7b4;
        case 0x13f7b8u: goto label_13f7b8;
        case 0x13f7bcu: goto label_13f7bc;
        case 0x13f7c0u: goto label_13f7c0;
        case 0x13f7c4u: goto label_13f7c4;
        case 0x13f7c8u: goto label_13f7c8;
        case 0x13f7ccu: goto label_13f7cc;
        case 0x13f7d0u: goto label_13f7d0;
        case 0x13f7d4u: goto label_13f7d4;
        case 0x13f7d8u: goto label_13f7d8;
        case 0x13f7dcu: goto label_13f7dc;
        case 0x13f7e0u: goto label_13f7e0;
        case 0x13f7e4u: goto label_13f7e4;
        case 0x13f7e8u: goto label_13f7e8;
        case 0x13f7ecu: goto label_13f7ec;
        case 0x13f7f0u: goto label_13f7f0;
        case 0x13f7f4u: goto label_13f7f4;
        case 0x13f7f8u: goto label_13f7f8;
        case 0x13f7fcu: goto label_13f7fc;
        case 0x13f800u: goto label_13f800;
        case 0x13f804u: goto label_13f804;
        case 0x13f808u: goto label_13f808;
        case 0x13f80cu: goto label_13f80c;
        case 0x13f810u: goto label_13f810;
        case 0x13f814u: goto label_13f814;
        case 0x13f818u: goto label_13f818;
        case 0x13f81cu: goto label_13f81c;
        case 0x13f820u: goto label_13f820;
        case 0x13f824u: goto label_13f824;
        case 0x13f828u: goto label_13f828;
        case 0x13f82cu: goto label_13f82c;
        case 0x13f830u: goto label_13f830;
        case 0x13f834u: goto label_13f834;
        case 0x13f838u: goto label_13f838;
        case 0x13f83cu: goto label_13f83c;
        case 0x13f840u: goto label_13f840;
        case 0x13f844u: goto label_13f844;
        case 0x13f848u: goto label_13f848;
        case 0x13f84cu: goto label_13f84c;
        case 0x13f850u: goto label_13f850;
        case 0x13f854u: goto label_13f854;
        case 0x13f858u: goto label_13f858;
        case 0x13f85cu: goto label_13f85c;
        case 0x13f860u: goto label_13f860;
        case 0x13f864u: goto label_13f864;
        case 0x13f868u: goto label_13f868;
        case 0x13f86cu: goto label_13f86c;
        case 0x13f870u: goto label_13f870;
        case 0x13f874u: goto label_13f874;
        case 0x13f878u: goto label_13f878;
        case 0x13f87cu: goto label_13f87c;
        case 0x13f880u: goto label_13f880;
        case 0x13f884u: goto label_13f884;
        case 0x13f888u: goto label_13f888;
        case 0x13f88cu: goto label_13f88c;
        case 0x13f890u: goto label_13f890;
        case 0x13f894u: goto label_13f894;
        case 0x13f898u: goto label_13f898;
        case 0x13f89cu: goto label_13f89c;
        case 0x13f8a0u: goto label_13f8a0;
        case 0x13f8a4u: goto label_13f8a4;
        case 0x13f8a8u: goto label_13f8a8;
        case 0x13f8acu: goto label_13f8ac;
        case 0x13f8b0u: goto label_13f8b0;
        case 0x13f8b4u: goto label_13f8b4;
        case 0x13f8b8u: goto label_13f8b8;
        case 0x13f8bcu: goto label_13f8bc;
        case 0x13f8c0u: goto label_13f8c0;
        case 0x13f8c4u: goto label_13f8c4;
        case 0x13f8c8u: goto label_13f8c8;
        case 0x13f8ccu: goto label_13f8cc;
        case 0x13f8d0u: goto label_13f8d0;
        case 0x13f8d4u: goto label_13f8d4;
        case 0x13f8d8u: goto label_13f8d8;
        case 0x13f8dcu: goto label_13f8dc;
        case 0x13f8e0u: goto label_13f8e0;
        case 0x13f8e4u: goto label_13f8e4;
        case 0x13f8e8u: goto label_13f8e8;
        case 0x13f8ecu: goto label_13f8ec;
        case 0x13f8f0u: goto label_13f8f0;
        case 0x13f8f4u: goto label_13f8f4;
        case 0x13f8f8u: goto label_13f8f8;
        case 0x13f8fcu: goto label_13f8fc;
        case 0x13f900u: goto label_13f900;
        case 0x13f904u: goto label_13f904;
        case 0x13f908u: goto label_13f908;
        case 0x13f90cu: goto label_13f90c;
        case 0x13f910u: goto label_13f910;
        case 0x13f914u: goto label_13f914;
        case 0x13f918u: goto label_13f918;
        case 0x13f91cu: goto label_13f91c;
        case 0x13f920u: goto label_13f920;
        case 0x13f924u: goto label_13f924;
        case 0x13f928u: goto label_13f928;
        case 0x13f92cu: goto label_13f92c;
        case 0x13f930u: goto label_13f930;
        case 0x13f934u: goto label_13f934;
        case 0x13f938u: goto label_13f938;
        case 0x13f93cu: goto label_13f93c;
        case 0x13f940u: goto label_13f940;
        case 0x13f944u: goto label_13f944;
        case 0x13f948u: goto label_13f948;
        case 0x13f94cu: goto label_13f94c;
        case 0x13f950u: goto label_13f950;
        case 0x13f954u: goto label_13f954;
        case 0x13f958u: goto label_13f958;
        case 0x13f95cu: goto label_13f95c;
        case 0x13f960u: goto label_13f960;
        case 0x13f964u: goto label_13f964;
        case 0x13f968u: goto label_13f968;
        case 0x13f96cu: goto label_13f96c;
        case 0x13f970u: goto label_13f970;
        case 0x13f974u: goto label_13f974;
        case 0x13f978u: goto label_13f978;
        case 0x13f97cu: goto label_13f97c;
        case 0x13f980u: goto label_13f980;
        case 0x13f984u: goto label_13f984;
        case 0x13f988u: goto label_13f988;
        case 0x13f98cu: goto label_13f98c;
        case 0x13f990u: goto label_13f990;
        case 0x13f994u: goto label_13f994;
        case 0x13f998u: goto label_13f998;
        case 0x13f99cu: goto label_13f99c;
        case 0x13f9a0u: goto label_13f9a0;
        case 0x13f9a4u: goto label_13f9a4;
        case 0x13f9a8u: goto label_13f9a8;
        case 0x13f9acu: goto label_13f9ac;
        case 0x13f9b0u: goto label_13f9b0;
        case 0x13f9b4u: goto label_13f9b4;
        case 0x13f9b8u: goto label_13f9b8;
        case 0x13f9bcu: goto label_13f9bc;
        case 0x13f9c0u: goto label_13f9c0;
        case 0x13f9c4u: goto label_13f9c4;
        case 0x13f9c8u: goto label_13f9c8;
        case 0x13f9ccu: goto label_13f9cc;
        case 0x13f9d0u: goto label_13f9d0;
        case 0x13f9d4u: goto label_13f9d4;
        case 0x13f9d8u: goto label_13f9d8;
        case 0x13f9dcu: goto label_13f9dc;
        case 0x13f9e0u: goto label_13f9e0;
        case 0x13f9e4u: goto label_13f9e4;
        case 0x13f9e8u: goto label_13f9e8;
        case 0x13f9ecu: goto label_13f9ec;
        case 0x13f9f0u: goto label_13f9f0;
        case 0x13f9f4u: goto label_13f9f4;
        case 0x13f9f8u: goto label_13f9f8;
        case 0x13f9fcu: goto label_13f9fc;
        case 0x13fa00u: goto label_13fa00;
        case 0x13fa04u: goto label_13fa04;
        case 0x13fa08u: goto label_13fa08;
        case 0x13fa0cu: goto label_13fa0c;
        case 0x13fa10u: goto label_13fa10;
        case 0x13fa14u: goto label_13fa14;
        case 0x13fa18u: goto label_13fa18;
        case 0x13fa1cu: goto label_13fa1c;
        case 0x13fa20u: goto label_13fa20;
        case 0x13fa24u: goto label_13fa24;
        case 0x13fa28u: goto label_13fa28;
        case 0x13fa2cu: goto label_13fa2c;
        case 0x13fa30u: goto label_13fa30;
        case 0x13fa34u: goto label_13fa34;
        case 0x13fa38u: goto label_13fa38;
        case 0x13fa3cu: goto label_13fa3c;
        case 0x13fa40u: goto label_13fa40;
        case 0x13fa44u: goto label_13fa44;
        case 0x13fa48u: goto label_13fa48;
        case 0x13fa4cu: goto label_13fa4c;
        case 0x13fa50u: goto label_13fa50;
        case 0x13fa54u: goto label_13fa54;
        case 0x13fa58u: goto label_13fa58;
        case 0x13fa5cu: goto label_13fa5c;
        case 0x13fa60u: goto label_13fa60;
        case 0x13fa64u: goto label_13fa64;
        case 0x13fa68u: goto label_13fa68;
        case 0x13fa6cu: goto label_13fa6c;
        case 0x13fa70u: goto label_13fa70;
        case 0x13fa74u: goto label_13fa74;
        case 0x13fa78u: goto label_13fa78;
        case 0x13fa7cu: goto label_13fa7c;
        case 0x13fa80u: goto label_13fa80;
        case 0x13fa84u: goto label_13fa84;
        case 0x13fa88u: goto label_13fa88;
        case 0x13fa8cu: goto label_13fa8c;
        case 0x13fa90u: goto label_13fa90;
        case 0x13fa94u: goto label_13fa94;
        case 0x13fa98u: goto label_13fa98;
        case 0x13fa9cu: goto label_13fa9c;
        case 0x13faa0u: goto label_13faa0;
        case 0x13faa4u: goto label_13faa4;
        case 0x13faa8u: goto label_13faa8;
        case 0x13faacu: goto label_13faac;
        case 0x13fab0u: goto label_13fab0;
        case 0x13fab4u: goto label_13fab4;
        case 0x13fab8u: goto label_13fab8;
        case 0x13fabcu: goto label_13fabc;
        case 0x13fac0u: goto label_13fac0;
        case 0x13fac4u: goto label_13fac4;
        case 0x13fac8u: goto label_13fac8;
        case 0x13faccu: goto label_13facc;
        case 0x13fad0u: goto label_13fad0;
        case 0x13fad4u: goto label_13fad4;
        case 0x13fad8u: goto label_13fad8;
        case 0x13fadcu: goto label_13fadc;
        case 0x13fae0u: goto label_13fae0;
        case 0x13fae4u: goto label_13fae4;
        case 0x13fae8u: goto label_13fae8;
        case 0x13faecu: goto label_13faec;
        case 0x13faf0u: goto label_13faf0;
        case 0x13faf4u: goto label_13faf4;
        case 0x13faf8u: goto label_13faf8;
        case 0x13fafcu: goto label_13fafc;
        case 0x13fb00u: goto label_13fb00;
        case 0x13fb04u: goto label_13fb04;
        case 0x13fb08u: goto label_13fb08;
        case 0x13fb0cu: goto label_13fb0c;
        case 0x13fb10u: goto label_13fb10;
        case 0x13fb14u: goto label_13fb14;
        case 0x13fb18u: goto label_13fb18;
        case 0x13fb1cu: goto label_13fb1c;
        case 0x13fb20u: goto label_13fb20;
        case 0x13fb24u: goto label_13fb24;
        case 0x13fb28u: goto label_13fb28;
        case 0x13fb2cu: goto label_13fb2c;
        case 0x13fb30u: goto label_13fb30;
        case 0x13fb34u: goto label_13fb34;
        case 0x13fb38u: goto label_13fb38;
        case 0x13fb3cu: goto label_13fb3c;
        case 0x13fb40u: goto label_13fb40;
        case 0x13fb44u: goto label_13fb44;
        case 0x13fb48u: goto label_13fb48;
        case 0x13fb4cu: goto label_13fb4c;
        case 0x13fb50u: goto label_13fb50;
        case 0x13fb54u: goto label_13fb54;
        case 0x13fb58u: goto label_13fb58;
        case 0x13fb5cu: goto label_13fb5c;
        case 0x13fb60u: goto label_13fb60;
        case 0x13fb64u: goto label_13fb64;
        case 0x13fb68u: goto label_13fb68;
        case 0x13fb6cu: goto label_13fb6c;
        case 0x13fb70u: goto label_13fb70;
        case 0x13fb74u: goto label_13fb74;
        case 0x13fb78u: goto label_13fb78;
        case 0x13fb7cu: goto label_13fb7c;
        case 0x13fb80u: goto label_13fb80;
        case 0x13fb84u: goto label_13fb84;
        case 0x13fb88u: goto label_13fb88;
        case 0x13fb8cu: goto label_13fb8c;
        case 0x13fb90u: goto label_13fb90;
        case 0x13fb94u: goto label_13fb94;
        case 0x13fb98u: goto label_13fb98;
        case 0x13fb9cu: goto label_13fb9c;
        case 0x13fba0u: goto label_13fba0;
        case 0x13fba4u: goto label_13fba4;
        case 0x13fba8u: goto label_13fba8;
        case 0x13fbacu: goto label_13fbac;
        case 0x13fbb0u: goto label_13fbb0;
        case 0x13fbb4u: goto label_13fbb4;
        case 0x13fbb8u: goto label_13fbb8;
        case 0x13fbbcu: goto label_13fbbc;
        case 0x13fbc0u: goto label_13fbc0;
        case 0x13fbc4u: goto label_13fbc4;
        case 0x13fbc8u: goto label_13fbc8;
        case 0x13fbccu: goto label_13fbcc;
        case 0x13fbd0u: goto label_13fbd0;
        case 0x13fbd4u: goto label_13fbd4;
        case 0x13fbd8u: goto label_13fbd8;
        case 0x13fbdcu: goto label_13fbdc;
        case 0x13fbe0u: goto label_13fbe0;
        case 0x13fbe4u: goto label_13fbe4;
        case 0x13fbe8u: goto label_13fbe8;
        case 0x13fbecu: goto label_13fbec;
        case 0x13fbf0u: goto label_13fbf0;
        case 0x13fbf4u: goto label_13fbf4;
        case 0x13fbf8u: goto label_13fbf8;
        case 0x13fbfcu: goto label_13fbfc;
        case 0x13fc00u: goto label_13fc00;
        case 0x13fc04u: goto label_13fc04;
        case 0x13fc08u: goto label_13fc08;
        case 0x13fc0cu: goto label_13fc0c;
        case 0x13fc10u: goto label_13fc10;
        case 0x13fc14u: goto label_13fc14;
        case 0x13fc18u: goto label_13fc18;
        case 0x13fc1cu: goto label_13fc1c;
        case 0x13fc20u: goto label_13fc20;
        case 0x13fc24u: goto label_13fc24;
        case 0x13fc28u: goto label_13fc28;
        case 0x13fc2cu: goto label_13fc2c;
        case 0x13fc30u: goto label_13fc30;
        case 0x13fc34u: goto label_13fc34;
        case 0x13fc38u: goto label_13fc38;
        case 0x13fc3cu: goto label_13fc3c;
        case 0x13fc40u: goto label_13fc40;
        case 0x13fc44u: goto label_13fc44;
        case 0x13fc48u: goto label_13fc48;
        case 0x13fc4cu: goto label_13fc4c;
        case 0x13fc50u: goto label_13fc50;
        case 0x13fc54u: goto label_13fc54;
        case 0x13fc58u: goto label_13fc58;
        case 0x13fc5cu: goto label_13fc5c;
        case 0x13fc60u: goto label_13fc60;
        case 0x13fc64u: goto label_13fc64;
        case 0x13fc68u: goto label_13fc68;
        case 0x13fc6cu: goto label_13fc6c;
        case 0x13fc70u: goto label_13fc70;
        case 0x13fc74u: goto label_13fc74;
        case 0x13fc78u: goto label_13fc78;
        case 0x13fc7cu: goto label_13fc7c;
        case 0x13fc80u: goto label_13fc80;
        case 0x13fc84u: goto label_13fc84;
        case 0x13fc88u: goto label_13fc88;
        case 0x13fc8cu: goto label_13fc8c;
        case 0x13fc90u: goto label_13fc90;
        case 0x13fc94u: goto label_13fc94;
        case 0x13fc98u: goto label_13fc98;
        case 0x13fc9cu: goto label_13fc9c;
        case 0x13fca0u: goto label_13fca0;
        case 0x13fca4u: goto label_13fca4;
        case 0x13fca8u: goto label_13fca8;
        case 0x13fcacu: goto label_13fcac;
        case 0x13fcb0u: goto label_13fcb0;
        case 0x13fcb4u: goto label_13fcb4;
        case 0x13fcb8u: goto label_13fcb8;
        case 0x13fcbcu: goto label_13fcbc;
        case 0x13fcc0u: goto label_13fcc0;
        case 0x13fcc4u: goto label_13fcc4;
        case 0x13fcc8u: goto label_13fcc8;
        case 0x13fcccu: goto label_13fccc;
        case 0x13fcd0u: goto label_13fcd0;
        case 0x13fcd4u: goto label_13fcd4;
        case 0x13fcd8u: goto label_13fcd8;
        case 0x13fcdcu: goto label_13fcdc;
        case 0x13fce0u: goto label_13fce0;
        case 0x13fce4u: goto label_13fce4;
        case 0x13fce8u: goto label_13fce8;
        case 0x13fcecu: goto label_13fcec;
        case 0x13fcf0u: goto label_13fcf0;
        case 0x13fcf4u: goto label_13fcf4;
        case 0x13fcf8u: goto label_13fcf8;
        case 0x13fcfcu: goto label_13fcfc;
        case 0x13fd00u: goto label_13fd00;
        case 0x13fd04u: goto label_13fd04;
        case 0x13fd08u: goto label_13fd08;
        case 0x13fd0cu: goto label_13fd0c;
        case 0x13fd10u: goto label_13fd10;
        case 0x13fd14u: goto label_13fd14;
        case 0x13fd18u: goto label_13fd18;
        case 0x13fd1cu: goto label_13fd1c;
        case 0x13fd20u: goto label_13fd20;
        case 0x13fd24u: goto label_13fd24;
        case 0x13fd28u: goto label_13fd28;
        case 0x13fd2cu: goto label_13fd2c;
        case 0x13fd30u: goto label_13fd30;
        case 0x13fd34u: goto label_13fd34;
        case 0x13fd38u: goto label_13fd38;
        case 0x13fd3cu: goto label_13fd3c;
        case 0x13fd40u: goto label_13fd40;
        case 0x13fd44u: goto label_13fd44;
        case 0x13fd48u: goto label_13fd48;
        case 0x13fd4cu: goto label_13fd4c;
        case 0x13fd50u: goto label_13fd50;
        case 0x13fd54u: goto label_13fd54;
        case 0x13fd58u: goto label_13fd58;
        case 0x13fd5cu: goto label_13fd5c;
        case 0x13fd60u: goto label_13fd60;
        case 0x13fd64u: goto label_13fd64;
        case 0x13fd68u: goto label_13fd68;
        case 0x13fd6cu: goto label_13fd6c;
        case 0x13fd70u: goto label_13fd70;
        case 0x13fd74u: goto label_13fd74;
        case 0x13fd78u: goto label_13fd78;
        case 0x13fd7cu: goto label_13fd7c;
        case 0x13fd80u: goto label_13fd80;
        case 0x13fd84u: goto label_13fd84;
        case 0x13fd88u: goto label_13fd88;
        case 0x13fd8cu: goto label_13fd8c;
        case 0x13fd90u: goto label_13fd90;
        case 0x13fd94u: goto label_13fd94;
        case 0x13fd98u: goto label_13fd98;
        case 0x13fd9cu: goto label_13fd9c;
        case 0x13fda0u: goto label_13fda0;
        case 0x13fda4u: goto label_13fda4;
        case 0x13fda8u: goto label_13fda8;
        case 0x13fdacu: goto label_13fdac;
        case 0x13fdb0u: goto label_13fdb0;
        case 0x13fdb4u: goto label_13fdb4;
        case 0x13fdb8u: goto label_13fdb8;
        case 0x13fdbcu: goto label_13fdbc;
        case 0x13fdc0u: goto label_13fdc0;
        case 0x13fdc4u: goto label_13fdc4;
        case 0x13fdc8u: goto label_13fdc8;
        case 0x13fdccu: goto label_13fdcc;
        case 0x13fdd0u: goto label_13fdd0;
        case 0x13fdd4u: goto label_13fdd4;
        case 0x13fdd8u: goto label_13fdd8;
        case 0x13fddcu: goto label_13fddc;
        case 0x13fde0u: goto label_13fde0;
        case 0x13fde4u: goto label_13fde4;
        case 0x13fde8u: goto label_13fde8;
        case 0x13fdecu: goto label_13fdec;
        case 0x13fdf0u: goto label_13fdf0;
        case 0x13fdf4u: goto label_13fdf4;
        case 0x13fdf8u: goto label_13fdf8;
        case 0x13fdfcu: goto label_13fdfc;
        case 0x13fe00u: goto label_13fe00;
        case 0x13fe04u: goto label_13fe04;
        case 0x13fe08u: goto label_13fe08;
        case 0x13fe0cu: goto label_13fe0c;
        case 0x13fe10u: goto label_13fe10;
        case 0x13fe14u: goto label_13fe14;
        case 0x13fe18u: goto label_13fe18;
        case 0x13fe1cu: goto label_13fe1c;
        case 0x13fe20u: goto label_13fe20;
        case 0x13fe24u: goto label_13fe24;
        case 0x13fe28u: goto label_13fe28;
        case 0x13fe2cu: goto label_13fe2c;
        case 0x13fe30u: goto label_13fe30;
        case 0x13fe34u: goto label_13fe34;
        case 0x13fe38u: goto label_13fe38;
        case 0x13fe3cu: goto label_13fe3c;
        case 0x13fe40u: goto label_13fe40;
        case 0x13fe44u: goto label_13fe44;
        case 0x13fe48u: goto label_13fe48;
        case 0x13fe4cu: goto label_13fe4c;
        case 0x13fe50u: goto label_13fe50;
        case 0x13fe54u: goto label_13fe54;
        case 0x13fe58u: goto label_13fe58;
        case 0x13fe5cu: goto label_13fe5c;
        case 0x13fe60u: goto label_13fe60;
        case 0x13fe64u: goto label_13fe64;
        case 0x13fe68u: goto label_13fe68;
        case 0x13fe6cu: goto label_13fe6c;
        case 0x13fe70u: goto label_13fe70;
        case 0x13fe74u: goto label_13fe74;
        case 0x13fe78u: goto label_13fe78;
        case 0x13fe7cu: goto label_13fe7c;
        case 0x13fe80u: goto label_13fe80;
        case 0x13fe84u: goto label_13fe84;
        case 0x13fe88u: goto label_13fe88;
        case 0x13fe8cu: goto label_13fe8c;
        case 0x13fe90u: goto label_13fe90;
        case 0x13fe94u: goto label_13fe94;
        case 0x13fe98u: goto label_13fe98;
        case 0x13fe9cu: goto label_13fe9c;
        case 0x13fea0u: goto label_13fea0;
        case 0x13fea4u: goto label_13fea4;
        case 0x13fea8u: goto label_13fea8;
        case 0x13feacu: goto label_13feac;
        case 0x13feb0u: goto label_13feb0;
        case 0x13feb4u: goto label_13feb4;
        case 0x13feb8u: goto label_13feb8;
        case 0x13febcu: goto label_13febc;
        case 0x13fec0u: goto label_13fec0;
        case 0x13fec4u: goto label_13fec4;
        case 0x13fec8u: goto label_13fec8;
        case 0x13feccu: goto label_13fecc;
        case 0x13fed0u: goto label_13fed0;
        case 0x13fed4u: goto label_13fed4;
        case 0x13fed8u: goto label_13fed8;
        case 0x13fedcu: goto label_13fedc;
        case 0x13fee0u: goto label_13fee0;
        case 0x13fee4u: goto label_13fee4;
        case 0x13fee8u: goto label_13fee8;
        case 0x13feecu: goto label_13feec;
        case 0x13fef0u: goto label_13fef0;
        case 0x13fef4u: goto label_13fef4;
        case 0x13fef8u: goto label_13fef8;
        case 0x13fefcu: goto label_13fefc;
        case 0x13ff00u: goto label_13ff00;
        case 0x13ff04u: goto label_13ff04;
        case 0x13ff08u: goto label_13ff08;
        case 0x13ff0cu: goto label_13ff0c;
        case 0x13ff10u: goto label_13ff10;
        case 0x13ff14u: goto label_13ff14;
        case 0x13ff18u: goto label_13ff18;
        case 0x13ff1cu: goto label_13ff1c;
        case 0x13ff20u: goto label_13ff20;
        case 0x13ff24u: goto label_13ff24;
        case 0x13ff28u: goto label_13ff28;
        case 0x13ff2cu: goto label_13ff2c;
        case 0x13ff30u: goto label_13ff30;
        case 0x13ff34u: goto label_13ff34;
        case 0x13ff38u: goto label_13ff38;
        case 0x13ff3cu: goto label_13ff3c;
        case 0x13ff40u: goto label_13ff40;
        case 0x13ff44u: goto label_13ff44;
        case 0x13ff48u: goto label_13ff48;
        case 0x13ff4cu: goto label_13ff4c;
        case 0x13ff50u: goto label_13ff50;
        case 0x13ff54u: goto label_13ff54;
        case 0x13ff58u: goto label_13ff58;
        case 0x13ff5cu: goto label_13ff5c;
        case 0x13ff60u: goto label_13ff60;
        case 0x13ff64u: goto label_13ff64;
        case 0x13ff68u: goto label_13ff68;
        case 0x13ff6cu: goto label_13ff6c;
        case 0x13ff70u: goto label_13ff70;
        case 0x13ff74u: goto label_13ff74;
        case 0x13ff78u: goto label_13ff78;
        case 0x13ff7cu: goto label_13ff7c;
        case 0x13ff80u: goto label_13ff80;
        case 0x13ff84u: goto label_13ff84;
        case 0x13ff88u: goto label_13ff88;
        case 0x13ff8cu: goto label_13ff8c;
        case 0x13ff90u: goto label_13ff90;
        case 0x13ff94u: goto label_13ff94;
        case 0x13ff98u: goto label_13ff98;
        case 0x13ff9cu: goto label_13ff9c;
        case 0x13ffa0u: goto label_13ffa0;
        case 0x13ffa4u: goto label_13ffa4;
        case 0x13ffa8u: goto label_13ffa8;
        case 0x13ffacu: goto label_13ffac;
        case 0x13ffb0u: goto label_13ffb0;
        case 0x13ffb4u: goto label_13ffb4;
        case 0x13ffb8u: goto label_13ffb8;
        case 0x13ffbcu: goto label_13ffbc;
        case 0x13ffc0u: goto label_13ffc0;
        case 0x13ffc4u: goto label_13ffc4;
        case 0x13ffc8u: goto label_13ffc8;
        case 0x13ffccu: goto label_13ffcc;
        case 0x13ffd0u: goto label_13ffd0;
        case 0x13ffd4u: goto label_13ffd4;
        case 0x13ffd8u: goto label_13ffd8;
        case 0x13ffdcu: goto label_13ffdc;
        case 0x13ffe0u: goto label_13ffe0;
        case 0x13ffe4u: goto label_13ffe4;
        case 0x13ffe8u: goto label_13ffe8;
        case 0x13ffecu: goto label_13ffec;
        case 0x13fff0u: goto label_13fff0;
        case 0x13fff4u: goto label_13fff4;
        case 0x13fff8u: goto label_13fff8;
        case 0x13fffcu: goto label_13fffc;
        case 0x140000u: goto label_140000;
        case 0x140004u: goto label_140004;
        case 0x140008u: goto label_140008;
        case 0x14000cu: goto label_14000c;
        case 0x140010u: goto label_140010;
        case 0x140014u: goto label_140014;
        case 0x140018u: goto label_140018;
        case 0x14001cu: goto label_14001c;
        case 0x140020u: goto label_140020;
        case 0x140024u: goto label_140024;
        case 0x140028u: goto label_140028;
        case 0x14002cu: goto label_14002c;
        case 0x140030u: goto label_140030;
        case 0x140034u: goto label_140034;
        case 0x140038u: goto label_140038;
        case 0x14003cu: goto label_14003c;
        case 0x140040u: goto label_140040;
        case 0x140044u: goto label_140044;
        case 0x140048u: goto label_140048;
        case 0x14004cu: goto label_14004c;
        case 0x140050u: goto label_140050;
        case 0x140054u: goto label_140054;
        case 0x140058u: goto label_140058;
        case 0x14005cu: goto label_14005c;
        case 0x140060u: goto label_140060;
        case 0x140064u: goto label_140064;
        case 0x140068u: goto label_140068;
        case 0x14006cu: goto label_14006c;
        case 0x140070u: goto label_140070;
        case 0x140074u: goto label_140074;
        case 0x140078u: goto label_140078;
        case 0x14007cu: goto label_14007c;
        case 0x140080u: goto label_140080;
        case 0x140084u: goto label_140084;
        case 0x140088u: goto label_140088;
        case 0x14008cu: goto label_14008c;
        case 0x140090u: goto label_140090;
        case 0x140094u: goto label_140094;
        case 0x140098u: goto label_140098;
        case 0x14009cu: goto label_14009c;
        case 0x1400a0u: goto label_1400a0;
        case 0x1400a4u: goto label_1400a4;
        case 0x1400a8u: goto label_1400a8;
        case 0x1400acu: goto label_1400ac;
        case 0x1400b0u: goto label_1400b0;
        case 0x1400b4u: goto label_1400b4;
        case 0x1400b8u: goto label_1400b8;
        case 0x1400bcu: goto label_1400bc;
        case 0x1400c0u: goto label_1400c0;
        case 0x1400c4u: goto label_1400c4;
        case 0x1400c8u: goto label_1400c8;
        case 0x1400ccu: goto label_1400cc;
        case 0x1400d0u: goto label_1400d0;
        case 0x1400d4u: goto label_1400d4;
        case 0x1400d8u: goto label_1400d8;
        case 0x1400dcu: goto label_1400dc;
        case 0x1400e0u: goto label_1400e0;
        case 0x1400e4u: goto label_1400e4;
        case 0x1400e8u: goto label_1400e8;
        case 0x1400ecu: goto label_1400ec;
        case 0x1400f0u: goto label_1400f0;
        case 0x1400f4u: goto label_1400f4;
        case 0x1400f8u: goto label_1400f8;
        case 0x1400fcu: goto label_1400fc;
        case 0x140100u: goto label_140100;
        case 0x140104u: goto label_140104;
        case 0x140108u: goto label_140108;
        case 0x14010cu: goto label_14010c;
        case 0x140110u: goto label_140110;
        case 0x140114u: goto label_140114;
        case 0x140118u: goto label_140118;
        case 0x14011cu: goto label_14011c;
        case 0x140120u: goto label_140120;
        case 0x140124u: goto label_140124;
        case 0x140128u: goto label_140128;
        case 0x14012cu: goto label_14012c;
        case 0x140130u: goto label_140130;
        case 0x140134u: goto label_140134;
        case 0x140138u: goto label_140138;
        case 0x14013cu: goto label_14013c;
        case 0x140140u: goto label_140140;
        case 0x140144u: goto label_140144;
        case 0x140148u: goto label_140148;
        case 0x14014cu: goto label_14014c;
        case 0x140150u: goto label_140150;
        case 0x140154u: goto label_140154;
        case 0x140158u: goto label_140158;
        case 0x14015cu: goto label_14015c;
        case 0x140160u: goto label_140160;
        case 0x140164u: goto label_140164;
        case 0x140168u: goto label_140168;
        case 0x14016cu: goto label_14016c;
        case 0x140170u: goto label_140170;
        case 0x140174u: goto label_140174;
        case 0x140178u: goto label_140178;
        case 0x14017cu: goto label_14017c;
        case 0x140180u: goto label_140180;
        case 0x140184u: goto label_140184;
        case 0x140188u: goto label_140188;
        case 0x14018cu: goto label_14018c;
        case 0x140190u: goto label_140190;
        case 0x140194u: goto label_140194;
        case 0x140198u: goto label_140198;
        case 0x14019cu: goto label_14019c;
        case 0x1401a0u: goto label_1401a0;
        case 0x1401a4u: goto label_1401a4;
        case 0x1401a8u: goto label_1401a8;
        case 0x1401acu: goto label_1401ac;
        case 0x1401b0u: goto label_1401b0;
        case 0x1401b4u: goto label_1401b4;
        case 0x1401b8u: goto label_1401b8;
        case 0x1401bcu: goto label_1401bc;
        case 0x1401c0u: goto label_1401c0;
        case 0x1401c4u: goto label_1401c4;
        case 0x1401c8u: goto label_1401c8;
        case 0x1401ccu: goto label_1401cc;
        case 0x1401d0u: goto label_1401d0;
        case 0x1401d4u: goto label_1401d4;
        case 0x1401d8u: goto label_1401d8;
        case 0x1401dcu: goto label_1401dc;
        case 0x1401e0u: goto label_1401e0;
        case 0x1401e4u: goto label_1401e4;
        case 0x1401e8u: goto label_1401e8;
        case 0x1401ecu: goto label_1401ec;
        case 0x1401f0u: goto label_1401f0;
        case 0x1401f4u: goto label_1401f4;
        case 0x1401f8u: goto label_1401f8;
        case 0x1401fcu: goto label_1401fc;
        case 0x140200u: goto label_140200;
        case 0x140204u: goto label_140204;
        case 0x140208u: goto label_140208;
        case 0x14020cu: goto label_14020c;
        case 0x140210u: goto label_140210;
        case 0x140214u: goto label_140214;
        case 0x140218u: goto label_140218;
        case 0x14021cu: goto label_14021c;
        case 0x140220u: goto label_140220;
        case 0x140224u: goto label_140224;
        case 0x140228u: goto label_140228;
        case 0x14022cu: goto label_14022c;
        case 0x140230u: goto label_140230;
        case 0x140234u: goto label_140234;
        case 0x140238u: goto label_140238;
        case 0x14023cu: goto label_14023c;
        case 0x140240u: goto label_140240;
        case 0x140244u: goto label_140244;
        case 0x140248u: goto label_140248;
        case 0x14024cu: goto label_14024c;
        case 0x140250u: goto label_140250;
        case 0x140254u: goto label_140254;
        case 0x140258u: goto label_140258;
        case 0x14025cu: goto label_14025c;
        case 0x140260u: goto label_140260;
        case 0x140264u: goto label_140264;
        case 0x140268u: goto label_140268;
        case 0x14026cu: goto label_14026c;
        case 0x140270u: goto label_140270;
        case 0x140274u: goto label_140274;
        case 0x140278u: goto label_140278;
        case 0x14027cu: goto label_14027c;
        case 0x140280u: goto label_140280;
        case 0x140284u: goto label_140284;
        case 0x140288u: goto label_140288;
        case 0x14028cu: goto label_14028c;
        case 0x140290u: goto label_140290;
        case 0x140294u: goto label_140294;
        case 0x140298u: goto label_140298;
        case 0x14029cu: goto label_14029c;
        case 0x1402a0u: goto label_1402a0;
        case 0x1402a4u: goto label_1402a4;
        case 0x1402a8u: goto label_1402a8;
        case 0x1402acu: goto label_1402ac;
        case 0x1402b0u: goto label_1402b0;
        case 0x1402b4u: goto label_1402b4;
        case 0x1402b8u: goto label_1402b8;
        case 0x1402bcu: goto label_1402bc;
        case 0x1402c0u: goto label_1402c0;
        case 0x1402c4u: goto label_1402c4;
        case 0x1402c8u: goto label_1402c8;
        case 0x1402ccu: goto label_1402cc;
        case 0x1402d0u: goto label_1402d0;
        case 0x1402d4u: goto label_1402d4;
        case 0x1402d8u: goto label_1402d8;
        case 0x1402dcu: goto label_1402dc;
        case 0x1402e0u: goto label_1402e0;
        case 0x1402e4u: goto label_1402e4;
        case 0x1402e8u: goto label_1402e8;
        case 0x1402ecu: goto label_1402ec;
        case 0x1402f0u: goto label_1402f0;
        case 0x1402f4u: goto label_1402f4;
        case 0x1402f8u: goto label_1402f8;
        case 0x1402fcu: goto label_1402fc;
        case 0x140300u: goto label_140300;
        case 0x140304u: goto label_140304;
        case 0x140308u: goto label_140308;
        case 0x14030cu: goto label_14030c;
        case 0x140310u: goto label_140310;
        case 0x140314u: goto label_140314;
        case 0x140318u: goto label_140318;
        case 0x14031cu: goto label_14031c;
        case 0x140320u: goto label_140320;
        case 0x140324u: goto label_140324;
        case 0x140328u: goto label_140328;
        case 0x14032cu: goto label_14032c;
        case 0x140330u: goto label_140330;
        case 0x140334u: goto label_140334;
        case 0x140338u: goto label_140338;
        case 0x14033cu: goto label_14033c;
        case 0x140340u: goto label_140340;
        case 0x140344u: goto label_140344;
        case 0x140348u: goto label_140348;
        case 0x14034cu: goto label_14034c;
        case 0x140350u: goto label_140350;
        case 0x140354u: goto label_140354;
        case 0x140358u: goto label_140358;
        case 0x14035cu: goto label_14035c;
        case 0x140360u: goto label_140360;
        case 0x140364u: goto label_140364;
        case 0x140368u: goto label_140368;
        case 0x14036cu: goto label_14036c;
        case 0x140370u: goto label_140370;
        case 0x140374u: goto label_140374;
        case 0x140378u: goto label_140378;
        case 0x14037cu: goto label_14037c;
        case 0x140380u: goto label_140380;
        case 0x140384u: goto label_140384;
        case 0x140388u: goto label_140388;
        case 0x14038cu: goto label_14038c;
        case 0x140390u: goto label_140390;
        case 0x140394u: goto label_140394;
        case 0x140398u: goto label_140398;
        case 0x14039cu: goto label_14039c;
        case 0x1403a0u: goto label_1403a0;
        case 0x1403a4u: goto label_1403a4;
        case 0x1403a8u: goto label_1403a8;
        case 0x1403acu: goto label_1403ac;
        case 0x1403b0u: goto label_1403b0;
        case 0x1403b4u: goto label_1403b4;
        case 0x1403b8u: goto label_1403b8;
        case 0x1403bcu: goto label_1403bc;
        case 0x1403c0u: goto label_1403c0;
        case 0x1403c4u: goto label_1403c4;
        case 0x1403c8u: goto label_1403c8;
        case 0x1403ccu: goto label_1403cc;
        case 0x1403d0u: goto label_1403d0;
        case 0x1403d4u: goto label_1403d4;
        case 0x1403d8u: goto label_1403d8;
        case 0x1403dcu: goto label_1403dc;
        case 0x1403e0u: goto label_1403e0;
        case 0x1403e4u: goto label_1403e4;
        case 0x1403e8u: goto label_1403e8;
        case 0x1403ecu: goto label_1403ec;
        case 0x1403f0u: goto label_1403f0;
        case 0x1403f4u: goto label_1403f4;
        case 0x1403f8u: goto label_1403f8;
        case 0x1403fcu: goto label_1403fc;
        case 0x140400u: goto label_140400;
        case 0x140404u: goto label_140404;
        case 0x140408u: goto label_140408;
        case 0x14040cu: goto label_14040c;
        case 0x140410u: goto label_140410;
        case 0x140414u: goto label_140414;
        case 0x140418u: goto label_140418;
        case 0x14041cu: goto label_14041c;
        case 0x140420u: goto label_140420;
        case 0x140424u: goto label_140424;
        case 0x140428u: goto label_140428;
        case 0x14042cu: goto label_14042c;
        case 0x140430u: goto label_140430;
        case 0x140434u: goto label_140434;
        case 0x140438u: goto label_140438;
        case 0x14043cu: goto label_14043c;
        case 0x140440u: goto label_140440;
        case 0x140444u: goto label_140444;
        case 0x140448u: goto label_140448;
        case 0x14044cu: goto label_14044c;
        case 0x140450u: goto label_140450;
        case 0x140454u: goto label_140454;
        case 0x140458u: goto label_140458;
        case 0x14045cu: goto label_14045c;
        case 0x140460u: goto label_140460;
        case 0x140464u: goto label_140464;
        case 0x140468u: goto label_140468;
        case 0x14046cu: goto label_14046c;
        case 0x140470u: goto label_140470;
        case 0x140474u: goto label_140474;
        case 0x140478u: goto label_140478;
        case 0x14047cu: goto label_14047c;
        case 0x140480u: goto label_140480;
        case 0x140484u: goto label_140484;
        case 0x140488u: goto label_140488;
        case 0x14048cu: goto label_14048c;
        case 0x140490u: goto label_140490;
        case 0x140494u: goto label_140494;
        case 0x140498u: goto label_140498;
        case 0x14049cu: goto label_14049c;
        case 0x1404a0u: goto label_1404a0;
        case 0x1404a4u: goto label_1404a4;
        case 0x1404a8u: goto label_1404a8;
        case 0x1404acu: goto label_1404ac;
        case 0x1404b0u: goto label_1404b0;
        case 0x1404b4u: goto label_1404b4;
        case 0x1404b8u: goto label_1404b8;
        case 0x1404bcu: goto label_1404bc;
        case 0x1404c0u: goto label_1404c0;
        case 0x1404c4u: goto label_1404c4;
        case 0x1404c8u: goto label_1404c8;
        case 0x1404ccu: goto label_1404cc;
        case 0x1404d0u: goto label_1404d0;
        case 0x1404d4u: goto label_1404d4;
        case 0x1404d8u: goto label_1404d8;
        case 0x1404dcu: goto label_1404dc;
        case 0x1404e0u: goto label_1404e0;
        case 0x1404e4u: goto label_1404e4;
        case 0x1404e8u: goto label_1404e8;
        case 0x1404ecu: goto label_1404ec;
        case 0x1404f0u: goto label_1404f0;
        case 0x1404f4u: goto label_1404f4;
        case 0x1404f8u: goto label_1404f8;
        case 0x1404fcu: goto label_1404fc;
        case 0x140500u: goto label_140500;
        case 0x140504u: goto label_140504;
        case 0x140508u: goto label_140508;
        case 0x14050cu: goto label_14050c;
        case 0x140510u: goto label_140510;
        case 0x140514u: goto label_140514;
        case 0x140518u: goto label_140518;
        case 0x14051cu: goto label_14051c;
        case 0x140520u: goto label_140520;
        case 0x140524u: goto label_140524;
        case 0x140528u: goto label_140528;
        case 0x14052cu: goto label_14052c;
        case 0x140530u: goto label_140530;
        case 0x140534u: goto label_140534;
        case 0x140538u: goto label_140538;
        case 0x14053cu: goto label_14053c;
        case 0x140540u: goto label_140540;
        case 0x140544u: goto label_140544;
        case 0x140548u: goto label_140548;
        case 0x14054cu: goto label_14054c;
        case 0x140550u: goto label_140550;
        case 0x140554u: goto label_140554;
        case 0x140558u: goto label_140558;
        case 0x14055cu: goto label_14055c;
        case 0x140560u: goto label_140560;
        case 0x140564u: goto label_140564;
        case 0x140568u: goto label_140568;
        case 0x14056cu: goto label_14056c;
        case 0x140570u: goto label_140570;
        case 0x140574u: goto label_140574;
        case 0x140578u: goto label_140578;
        case 0x14057cu: goto label_14057c;
        case 0x140580u: goto label_140580;
        case 0x140584u: goto label_140584;
        case 0x140588u: goto label_140588;
        case 0x14058cu: goto label_14058c;
        case 0x140590u: goto label_140590;
        case 0x140594u: goto label_140594;
        case 0x140598u: goto label_140598;
        case 0x14059cu: goto label_14059c;
        case 0x1405a0u: goto label_1405a0;
        case 0x1405a4u: goto label_1405a4;
        case 0x1405a8u: goto label_1405a8;
        case 0x1405acu: goto label_1405ac;
        case 0x1405b0u: goto label_1405b0;
        case 0x1405b4u: goto label_1405b4;
        case 0x1405b8u: goto label_1405b8;
        case 0x1405bcu: goto label_1405bc;
        case 0x1405c0u: goto label_1405c0;
        case 0x1405c4u: goto label_1405c4;
        case 0x1405c8u: goto label_1405c8;
        case 0x1405ccu: goto label_1405cc;
        case 0x1405d0u: goto label_1405d0;
        case 0x1405d4u: goto label_1405d4;
        case 0x1405d8u: goto label_1405d8;
        case 0x1405dcu: goto label_1405dc;
        case 0x1405e0u: goto label_1405e0;
        case 0x1405e4u: goto label_1405e4;
        case 0x1405e8u: goto label_1405e8;
        case 0x1405ecu: goto label_1405ec;
        case 0x1405f0u: goto label_1405f0;
        case 0x1405f4u: goto label_1405f4;
        case 0x1405f8u: goto label_1405f8;
        case 0x1405fcu: goto label_1405fc;
        case 0x140600u: goto label_140600;
        case 0x140604u: goto label_140604;
        case 0x140608u: goto label_140608;
        case 0x14060cu: goto label_14060c;
        case 0x140610u: goto label_140610;
        case 0x140614u: goto label_140614;
        case 0x140618u: goto label_140618;
        case 0x14061cu: goto label_14061c;
        case 0x140620u: goto label_140620;
        case 0x140624u: goto label_140624;
        case 0x140628u: goto label_140628;
        case 0x14062cu: goto label_14062c;
        case 0x140630u: goto label_140630;
        case 0x140634u: goto label_140634;
        case 0x140638u: goto label_140638;
        case 0x14063cu: goto label_14063c;
        case 0x140640u: goto label_140640;
        case 0x140644u: goto label_140644;
        case 0x140648u: goto label_140648;
        case 0x14064cu: goto label_14064c;
        case 0x140650u: goto label_140650;
        case 0x140654u: goto label_140654;
        case 0x140658u: goto label_140658;
        case 0x14065cu: goto label_14065c;
        case 0x140660u: goto label_140660;
        case 0x140664u: goto label_140664;
        case 0x140668u: goto label_140668;
        case 0x14066cu: goto label_14066c;
        case 0x140670u: goto label_140670;
        case 0x140674u: goto label_140674;
        case 0x140678u: goto label_140678;
        case 0x14067cu: goto label_14067c;
        case 0x140680u: goto label_140680;
        case 0x140684u: goto label_140684;
        case 0x140688u: goto label_140688;
        case 0x14068cu: goto label_14068c;
        case 0x140690u: goto label_140690;
        case 0x140694u: goto label_140694;
        case 0x140698u: goto label_140698;
        case 0x14069cu: goto label_14069c;
        case 0x1406a0u: goto label_1406a0;
        case 0x1406a4u: goto label_1406a4;
        case 0x1406a8u: goto label_1406a8;
        case 0x1406acu: goto label_1406ac;
        case 0x1406b0u: goto label_1406b0;
        case 0x1406b4u: goto label_1406b4;
        case 0x1406b8u: goto label_1406b8;
        case 0x1406bcu: goto label_1406bc;
        case 0x1406c0u: goto label_1406c0;
        case 0x1406c4u: goto label_1406c4;
        case 0x1406c8u: goto label_1406c8;
        case 0x1406ccu: goto label_1406cc;
        case 0x1406d0u: goto label_1406d0;
        case 0x1406d4u: goto label_1406d4;
        case 0x1406d8u: goto label_1406d8;
        case 0x1406dcu: goto label_1406dc;
        case 0x1406e0u: goto label_1406e0;
        case 0x1406e4u: goto label_1406e4;
        case 0x1406e8u: goto label_1406e8;
        case 0x1406ecu: goto label_1406ec;
        case 0x1406f0u: goto label_1406f0;
        case 0x1406f4u: goto label_1406f4;
        case 0x1406f8u: goto label_1406f8;
        case 0x1406fcu: goto label_1406fc;
        case 0x140700u: goto label_140700;
        case 0x140704u: goto label_140704;
        case 0x140708u: goto label_140708;
        case 0x14070cu: goto label_14070c;
        case 0x140710u: goto label_140710;
        case 0x140714u: goto label_140714;
        case 0x140718u: goto label_140718;
        case 0x14071cu: goto label_14071c;
        case 0x140720u: goto label_140720;
        case 0x140724u: goto label_140724;
        case 0x140728u: goto label_140728;
        case 0x14072cu: goto label_14072c;
        case 0x140730u: goto label_140730;
        case 0x140734u: goto label_140734;
        case 0x140738u: goto label_140738;
        case 0x14073cu: goto label_14073c;
        case 0x140740u: goto label_140740;
        case 0x140744u: goto label_140744;
        case 0x140748u: goto label_140748;
        case 0x14074cu: goto label_14074c;
        case 0x140750u: goto label_140750;
        case 0x140754u: goto label_140754;
        case 0x140758u: goto label_140758;
        case 0x14075cu: goto label_14075c;
        case 0x140760u: goto label_140760;
        case 0x140764u: goto label_140764;
        case 0x140768u: goto label_140768;
        case 0x14076cu: goto label_14076c;
        case 0x140770u: goto label_140770;
        case 0x140774u: goto label_140774;
        case 0x140778u: goto label_140778;
        case 0x14077cu: goto label_14077c;
        case 0x140780u: goto label_140780;
        case 0x140784u: goto label_140784;
        case 0x140788u: goto label_140788;
        case 0x14078cu: goto label_14078c;
        case 0x140790u: goto label_140790;
        case 0x140794u: goto label_140794;
        case 0x140798u: goto label_140798;
        case 0x14079cu: goto label_14079c;
        case 0x1407a0u: goto label_1407a0;
        case 0x1407a4u: goto label_1407a4;
        case 0x1407a8u: goto label_1407a8;
        case 0x1407acu: goto label_1407ac;
        case 0x1407b0u: goto label_1407b0;
        case 0x1407b4u: goto label_1407b4;
        case 0x1407b8u: goto label_1407b8;
        case 0x1407bcu: goto label_1407bc;
        case 0x1407c0u: goto label_1407c0;
        case 0x1407c4u: goto label_1407c4;
        case 0x1407c8u: goto label_1407c8;
        case 0x1407ccu: goto label_1407cc;
        case 0x1407d0u: goto label_1407d0;
        case 0x1407d4u: goto label_1407d4;
        case 0x1407d8u: goto label_1407d8;
        case 0x1407dcu: goto label_1407dc;
        case 0x1407e0u: goto label_1407e0;
        case 0x1407e4u: goto label_1407e4;
        case 0x1407e8u: goto label_1407e8;
        case 0x1407ecu: goto label_1407ec;
        case 0x1407f0u: goto label_1407f0;
        case 0x1407f4u: goto label_1407f4;
        case 0x1407f8u: goto label_1407f8;
        case 0x1407fcu: goto label_1407fc;
        case 0x140800u: goto label_140800;
        case 0x140804u: goto label_140804;
        case 0x140808u: goto label_140808;
        case 0x14080cu: goto label_14080c;
        case 0x140810u: goto label_140810;
        case 0x140814u: goto label_140814;
        case 0x140818u: goto label_140818;
        case 0x14081cu: goto label_14081c;
        case 0x140820u: goto label_140820;
        case 0x140824u: goto label_140824;
        case 0x140828u: goto label_140828;
        case 0x14082cu: goto label_14082c;
        case 0x140830u: goto label_140830;
        case 0x140834u: goto label_140834;
        case 0x140838u: goto label_140838;
        case 0x14083cu: goto label_14083c;
        case 0x140840u: goto label_140840;
        case 0x140844u: goto label_140844;
        case 0x140848u: goto label_140848;
        case 0x14084cu: goto label_14084c;
        case 0x140850u: goto label_140850;
        case 0x140854u: goto label_140854;
        case 0x140858u: goto label_140858;
        case 0x14085cu: goto label_14085c;
        case 0x140860u: goto label_140860;
        case 0x140864u: goto label_140864;
        case 0x140868u: goto label_140868;
        case 0x14086cu: goto label_14086c;
        case 0x140870u: goto label_140870;
        case 0x140874u: goto label_140874;
        case 0x140878u: goto label_140878;
        case 0x14087cu: goto label_14087c;
        case 0x140880u: goto label_140880;
        case 0x140884u: goto label_140884;
        case 0x140888u: goto label_140888;
        case 0x14088cu: goto label_14088c;
        case 0x140890u: goto label_140890;
        case 0x140894u: goto label_140894;
        case 0x140898u: goto label_140898;
        case 0x14089cu: goto label_14089c;
        case 0x1408a0u: goto label_1408a0;
        case 0x1408a4u: goto label_1408a4;
        case 0x1408a8u: goto label_1408a8;
        case 0x1408acu: goto label_1408ac;
        case 0x1408b0u: goto label_1408b0;
        case 0x1408b4u: goto label_1408b4;
        case 0x1408b8u: goto label_1408b8;
        case 0x1408bcu: goto label_1408bc;
        case 0x1408c0u: goto label_1408c0;
        case 0x1408c4u: goto label_1408c4;
        case 0x1408c8u: goto label_1408c8;
        case 0x1408ccu: goto label_1408cc;
        case 0x1408d0u: goto label_1408d0;
        case 0x1408d4u: goto label_1408d4;
        case 0x1408d8u: goto label_1408d8;
        case 0x1408dcu: goto label_1408dc;
        case 0x1408e0u: goto label_1408e0;
        case 0x1408e4u: goto label_1408e4;
        case 0x1408e8u: goto label_1408e8;
        case 0x1408ecu: goto label_1408ec;
        case 0x1408f0u: goto label_1408f0;
        case 0x1408f4u: goto label_1408f4;
        case 0x1408f8u: goto label_1408f8;
        case 0x1408fcu: goto label_1408fc;
        case 0x140900u: goto label_140900;
        case 0x140904u: goto label_140904;
        case 0x140908u: goto label_140908;
        case 0x14090cu: goto label_14090c;
        case 0x140910u: goto label_140910;
        case 0x140914u: goto label_140914;
        case 0x140918u: goto label_140918;
        case 0x14091cu: goto label_14091c;
        case 0x140920u: goto label_140920;
        case 0x140924u: goto label_140924;
        case 0x140928u: goto label_140928;
        case 0x14092cu: goto label_14092c;
        case 0x140930u: goto label_140930;
        case 0x140934u: goto label_140934;
        case 0x140938u: goto label_140938;
        case 0x14093cu: goto label_14093c;
        case 0x140940u: goto label_140940;
        case 0x140944u: goto label_140944;
        case 0x140948u: goto label_140948;
        case 0x14094cu: goto label_14094c;
        case 0x140950u: goto label_140950;
        case 0x140954u: goto label_140954;
        case 0x140958u: goto label_140958;
        case 0x14095cu: goto label_14095c;
        case 0x140960u: goto label_140960;
        case 0x140964u: goto label_140964;
        case 0x140968u: goto label_140968;
        case 0x14096cu: goto label_14096c;
        case 0x140970u: goto label_140970;
        case 0x140974u: goto label_140974;
        case 0x140978u: goto label_140978;
        case 0x14097cu: goto label_14097c;
        case 0x140980u: goto label_140980;
        case 0x140984u: goto label_140984;
        case 0x140988u: goto label_140988;
        case 0x14098cu: goto label_14098c;
        case 0x140990u: goto label_140990;
        case 0x140994u: goto label_140994;
        case 0x140998u: goto label_140998;
        case 0x14099cu: goto label_14099c;
        case 0x1409a0u: goto label_1409a0;
        case 0x1409a4u: goto label_1409a4;
        case 0x1409a8u: goto label_1409a8;
        case 0x1409acu: goto label_1409ac;
        case 0x1409b0u: goto label_1409b0;
        case 0x1409b4u: goto label_1409b4;
        case 0x1409b8u: goto label_1409b8;
        case 0x1409bcu: goto label_1409bc;
        case 0x1409c0u: goto label_1409c0;
        case 0x1409c4u: goto label_1409c4;
        case 0x1409c8u: goto label_1409c8;
        case 0x1409ccu: goto label_1409cc;
        case 0x1409d0u: goto label_1409d0;
        case 0x1409d4u: goto label_1409d4;
        case 0x1409d8u: goto label_1409d8;
        case 0x1409dcu: goto label_1409dc;
        case 0x1409e0u: goto label_1409e0;
        case 0x1409e4u: goto label_1409e4;
        case 0x1409e8u: goto label_1409e8;
        case 0x1409ecu: goto label_1409ec;
        case 0x1409f0u: goto label_1409f0;
        case 0x1409f4u: goto label_1409f4;
        case 0x1409f8u: goto label_1409f8;
        case 0x1409fcu: goto label_1409fc;
        case 0x140a00u: goto label_140a00;
        case 0x140a04u: goto label_140a04;
        case 0x140a08u: goto label_140a08;
        case 0x140a0cu: goto label_140a0c;
        case 0x140a10u: goto label_140a10;
        case 0x140a14u: goto label_140a14;
        case 0x140a18u: goto label_140a18;
        case 0x140a1cu: goto label_140a1c;
        case 0x140a20u: goto label_140a20;
        case 0x140a24u: goto label_140a24;
        case 0x140a28u: goto label_140a28;
        case 0x140a2cu: goto label_140a2c;
        case 0x140a30u: goto label_140a30;
        case 0x140a34u: goto label_140a34;
        case 0x140a38u: goto label_140a38;
        case 0x140a3cu: goto label_140a3c;
        case 0x140a40u: goto label_140a40;
        case 0x140a44u: goto label_140a44;
        case 0x140a48u: goto label_140a48;
        case 0x140a4cu: goto label_140a4c;
        case 0x140a50u: goto label_140a50;
        case 0x140a54u: goto label_140a54;
        case 0x140a58u: goto label_140a58;
        case 0x140a5cu: goto label_140a5c;
        case 0x140a60u: goto label_140a60;
        case 0x140a64u: goto label_140a64;
        case 0x140a68u: goto label_140a68;
        case 0x140a6cu: goto label_140a6c;
        case 0x140a70u: goto label_140a70;
        case 0x140a74u: goto label_140a74;
        case 0x140a78u: goto label_140a78;
        case 0x140a7cu: goto label_140a7c;
        case 0x140a80u: goto label_140a80;
        case 0x140a84u: goto label_140a84;
        case 0x140a88u: goto label_140a88;
        case 0x140a8cu: goto label_140a8c;
        case 0x140a90u: goto label_140a90;
        case 0x140a94u: goto label_140a94;
        case 0x140a98u: goto label_140a98;
        case 0x140a9cu: goto label_140a9c;
        case 0x140aa0u: goto label_140aa0;
        case 0x140aa4u: goto label_140aa4;
        case 0x140aa8u: goto label_140aa8;
        case 0x140aacu: goto label_140aac;
        case 0x140ab0u: goto label_140ab0;
        case 0x140ab4u: goto label_140ab4;
        case 0x140ab8u: goto label_140ab8;
        case 0x140abcu: goto label_140abc;
        case 0x140ac0u: goto label_140ac0;
        case 0x140ac4u: goto label_140ac4;
        case 0x140ac8u: goto label_140ac8;
        case 0x140accu: goto label_140acc;
        case 0x140ad0u: goto label_140ad0;
        case 0x140ad4u: goto label_140ad4;
        case 0x140ad8u: goto label_140ad8;
        case 0x140adcu: goto label_140adc;
        case 0x140ae0u: goto label_140ae0;
        case 0x140ae4u: goto label_140ae4;
        case 0x140ae8u: goto label_140ae8;
        case 0x140aecu: goto label_140aec;
        case 0x140af0u: goto label_140af0;
        case 0x140af4u: goto label_140af4;
        case 0x140af8u: goto label_140af8;
        case 0x140afcu: goto label_140afc;
        case 0x140b00u: goto label_140b00;
        case 0x140b04u: goto label_140b04;
        case 0x140b08u: goto label_140b08;
        case 0x140b0cu: goto label_140b0c;
        case 0x140b10u: goto label_140b10;
        case 0x140b14u: goto label_140b14;
        case 0x140b18u: goto label_140b18;
        case 0x140b1cu: goto label_140b1c;
        case 0x140b20u: goto label_140b20;
        case 0x140b24u: goto label_140b24;
        case 0x140b28u: goto label_140b28;
        case 0x140b2cu: goto label_140b2c;
        case 0x140b30u: goto label_140b30;
        case 0x140b34u: goto label_140b34;
        case 0x140b38u: goto label_140b38;
        case 0x140b3cu: goto label_140b3c;
        case 0x140b40u: goto label_140b40;
        case 0x140b44u: goto label_140b44;
        case 0x140b48u: goto label_140b48;
        case 0x140b4cu: goto label_140b4c;
        case 0x140b50u: goto label_140b50;
        case 0x140b54u: goto label_140b54;
        case 0x140b58u: goto label_140b58;
        case 0x140b5cu: goto label_140b5c;
        case 0x140b60u: goto label_140b60;
        case 0x140b64u: goto label_140b64;
        case 0x140b68u: goto label_140b68;
        case 0x140b6cu: goto label_140b6c;
        case 0x140b70u: goto label_140b70;
        case 0x140b74u: goto label_140b74;
        case 0x140b78u: goto label_140b78;
        case 0x140b7cu: goto label_140b7c;
        case 0x140b80u: goto label_140b80;
        case 0x140b84u: goto label_140b84;
        case 0x140b88u: goto label_140b88;
        case 0x140b8cu: goto label_140b8c;
        case 0x140b90u: goto label_140b90;
        case 0x140b94u: goto label_140b94;
        case 0x140b98u: goto label_140b98;
        case 0x140b9cu: goto label_140b9c;
        case 0x140ba0u: goto label_140ba0;
        case 0x140ba4u: goto label_140ba4;
        case 0x140ba8u: goto label_140ba8;
        case 0x140bacu: goto label_140bac;
        case 0x140bb0u: goto label_140bb0;
        case 0x140bb4u: goto label_140bb4;
        case 0x140bb8u: goto label_140bb8;
        case 0x140bbcu: goto label_140bbc;
        case 0x140bc0u: goto label_140bc0;
        case 0x140bc4u: goto label_140bc4;
        case 0x140bc8u: goto label_140bc8;
        case 0x140bccu: goto label_140bcc;
        case 0x140bd0u: goto label_140bd0;
        case 0x140bd4u: goto label_140bd4;
        case 0x140bd8u: goto label_140bd8;
        case 0x140bdcu: goto label_140bdc;
        case 0x140be0u: goto label_140be0;
        case 0x140be4u: goto label_140be4;
        case 0x140be8u: goto label_140be8;
        case 0x140becu: goto label_140bec;
        case 0x140bf0u: goto label_140bf0;
        case 0x140bf4u: goto label_140bf4;
        case 0x140bf8u: goto label_140bf8;
        case 0x140bfcu: goto label_140bfc;
        case 0x140c00u: goto label_140c00;
        case 0x140c04u: goto label_140c04;
        case 0x140c08u: goto label_140c08;
        case 0x140c0cu: goto label_140c0c;
        case 0x140c10u: goto label_140c10;
        case 0x140c14u: goto label_140c14;
        case 0x140c18u: goto label_140c18;
        case 0x140c1cu: goto label_140c1c;
        case 0x140c20u: goto label_140c20;
        case 0x140c24u: goto label_140c24;
        case 0x140c28u: goto label_140c28;
        case 0x140c2cu: goto label_140c2c;
        case 0x140c30u: goto label_140c30;
        case 0x140c34u: goto label_140c34;
        case 0x140c38u: goto label_140c38;
        case 0x140c3cu: goto label_140c3c;
        case 0x140c40u: goto label_140c40;
        case 0x140c44u: goto label_140c44;
        case 0x140c48u: goto label_140c48;
        case 0x140c4cu: goto label_140c4c;
        case 0x140c50u: goto label_140c50;
        case 0x140c54u: goto label_140c54;
        case 0x140c58u: goto label_140c58;
        case 0x140c5cu: goto label_140c5c;
        case 0x140c60u: goto label_140c60;
        case 0x140c64u: goto label_140c64;
        case 0x140c68u: goto label_140c68;
        case 0x140c6cu: goto label_140c6c;
        case 0x140c70u: goto label_140c70;
        case 0x140c74u: goto label_140c74;
        case 0x140c78u: goto label_140c78;
        case 0x140c7cu: goto label_140c7c;
        case 0x140c80u: goto label_140c80;
        case 0x140c84u: goto label_140c84;
        case 0x140c88u: goto label_140c88;
        case 0x140c8cu: goto label_140c8c;
        case 0x140c90u: goto label_140c90;
        case 0x140c94u: goto label_140c94;
        case 0x140c98u: goto label_140c98;
        case 0x140c9cu: goto label_140c9c;
        case 0x140ca0u: goto label_140ca0;
        case 0x140ca4u: goto label_140ca4;
        case 0x140ca8u: goto label_140ca8;
        case 0x140cacu: goto label_140cac;
        case 0x140cb0u: goto label_140cb0;
        case 0x140cb4u: goto label_140cb4;
        case 0x140cb8u: goto label_140cb8;
        case 0x140cbcu: goto label_140cbc;
        case 0x140cc0u: goto label_140cc0;
        case 0x140cc4u: goto label_140cc4;
        case 0x140cc8u: goto label_140cc8;
        case 0x140cccu: goto label_140ccc;
        case 0x140cd0u: goto label_140cd0;
        case 0x140cd4u: goto label_140cd4;
        case 0x140cd8u: goto label_140cd8;
        case 0x140cdcu: goto label_140cdc;
        case 0x140ce0u: goto label_140ce0;
        case 0x140ce4u: goto label_140ce4;
        case 0x140ce8u: goto label_140ce8;
        case 0x140cecu: goto label_140cec;
        case 0x140cf0u: goto label_140cf0;
        case 0x140cf4u: goto label_140cf4;
        case 0x140cf8u: goto label_140cf8;
        case 0x140cfcu: goto label_140cfc;
        case 0x140d00u: goto label_140d00;
        case 0x140d04u: goto label_140d04;
        case 0x140d08u: goto label_140d08;
        case 0x140d0cu: goto label_140d0c;
        case 0x140d10u: goto label_140d10;
        case 0x140d14u: goto label_140d14;
        case 0x140d18u: goto label_140d18;
        case 0x140d1cu: goto label_140d1c;
        case 0x140d20u: goto label_140d20;
        case 0x140d24u: goto label_140d24;
        case 0x140d28u: goto label_140d28;
        case 0x140d2cu: goto label_140d2c;
        case 0x140d30u: goto label_140d30;
        case 0x140d34u: goto label_140d34;
        case 0x140d38u: goto label_140d38;
        case 0x140d3cu: goto label_140d3c;
        case 0x140d40u: goto label_140d40;
        case 0x140d44u: goto label_140d44;
        case 0x140d48u: goto label_140d48;
        case 0x140d4cu: goto label_140d4c;
        case 0x140d50u: goto label_140d50;
        case 0x140d54u: goto label_140d54;
        case 0x140d58u: goto label_140d58;
        case 0x140d5cu: goto label_140d5c;
        case 0x140d60u: goto label_140d60;
        case 0x140d64u: goto label_140d64;
        case 0x140d68u: goto label_140d68;
        case 0x140d6cu: goto label_140d6c;
        case 0x140d70u: goto label_140d70;
        case 0x140d74u: goto label_140d74;
        case 0x140d78u: goto label_140d78;
        case 0x140d7cu: goto label_140d7c;
        case 0x140d80u: goto label_140d80;
        case 0x140d84u: goto label_140d84;
        case 0x140d88u: goto label_140d88;
        case 0x140d8cu: goto label_140d8c;
        case 0x140d90u: goto label_140d90;
        case 0x140d94u: goto label_140d94;
        case 0x140d98u: goto label_140d98;
        case 0x140d9cu: goto label_140d9c;
        case 0x140da0u: goto label_140da0;
        case 0x140da4u: goto label_140da4;
        case 0x140da8u: goto label_140da8;
        case 0x140dacu: goto label_140dac;
        case 0x140db0u: goto label_140db0;
        case 0x140db4u: goto label_140db4;
        case 0x140db8u: goto label_140db8;
        case 0x140dbcu: goto label_140dbc;
        case 0x140dc0u: goto label_140dc0;
        case 0x140dc4u: goto label_140dc4;
        case 0x140dc8u: goto label_140dc8;
        case 0x140dccu: goto label_140dcc;
        case 0x140dd0u: goto label_140dd0;
        case 0x140dd4u: goto label_140dd4;
        case 0x140dd8u: goto label_140dd8;
        case 0x140ddcu: goto label_140ddc;
        case 0x140de0u: goto label_140de0;
        case 0x140de4u: goto label_140de4;
        case 0x140de8u: goto label_140de8;
        case 0x140decu: goto label_140dec;
        case 0x140df0u: goto label_140df0;
        case 0x140df4u: goto label_140df4;
        case 0x140df8u: goto label_140df8;
        case 0x140dfcu: goto label_140dfc;
        case 0x140e00u: goto label_140e00;
        case 0x140e04u: goto label_140e04;
        case 0x140e08u: goto label_140e08;
        case 0x140e0cu: goto label_140e0c;
        case 0x140e10u: goto label_140e10;
        case 0x140e14u: goto label_140e14;
        case 0x140e18u: goto label_140e18;
        case 0x140e1cu: goto label_140e1c;
        case 0x140e20u: goto label_140e20;
        case 0x140e24u: goto label_140e24;
        case 0x140e28u: goto label_140e28;
        case 0x140e2cu: goto label_140e2c;
        case 0x140e30u: goto label_140e30;
        case 0x140e34u: goto label_140e34;
        case 0x140e38u: goto label_140e38;
        case 0x140e3cu: goto label_140e3c;
        case 0x140e40u: goto label_140e40;
        case 0x140e44u: goto label_140e44;
        case 0x140e48u: goto label_140e48;
        case 0x140e4cu: goto label_140e4c;
        case 0x140e50u: goto label_140e50;
        case 0x140e54u: goto label_140e54;
        case 0x140e58u: goto label_140e58;
        case 0x140e5cu: goto label_140e5c;
        case 0x140e60u: goto label_140e60;
        case 0x140e64u: goto label_140e64;
        case 0x140e68u: goto label_140e68;
        case 0x140e6cu: goto label_140e6c;
        case 0x140e70u: goto label_140e70;
        case 0x140e74u: goto label_140e74;
        case 0x140e78u: goto label_140e78;
        case 0x140e7cu: goto label_140e7c;
        case 0x140e80u: goto label_140e80;
        case 0x140e84u: goto label_140e84;
        case 0x140e88u: goto label_140e88;
        case 0x140e8cu: goto label_140e8c;
        case 0x140e90u: goto label_140e90;
        case 0x140e94u: goto label_140e94;
        case 0x140e98u: goto label_140e98;
        case 0x140e9cu: goto label_140e9c;
        case 0x140ea0u: goto label_140ea0;
        case 0x140ea4u: goto label_140ea4;
        case 0x140ea8u: goto label_140ea8;
        case 0x140eacu: goto label_140eac;
        case 0x140eb0u: goto label_140eb0;
        case 0x140eb4u: goto label_140eb4;
        case 0x140eb8u: goto label_140eb8;
        case 0x140ebcu: goto label_140ebc;
        case 0x140ec0u: goto label_140ec0;
        case 0x140ec4u: goto label_140ec4;
        case 0x140ec8u: goto label_140ec8;
        case 0x140eccu: goto label_140ecc;
        case 0x140ed0u: goto label_140ed0;
        case 0x140ed4u: goto label_140ed4;
        case 0x140ed8u: goto label_140ed8;
        case 0x140edcu: goto label_140edc;
        case 0x140ee0u: goto label_140ee0;
        case 0x140ee4u: goto label_140ee4;
        case 0x140ee8u: goto label_140ee8;
        case 0x140eecu: goto label_140eec;
        case 0x140ef0u: goto label_140ef0;
        case 0x140ef4u: goto label_140ef4;
        case 0x140ef8u: goto label_140ef8;
        case 0x140efcu: goto label_140efc;
        case 0x140f00u: goto label_140f00;
        case 0x140f04u: goto label_140f04;
        case 0x140f08u: goto label_140f08;
        case 0x140f0cu: goto label_140f0c;
        case 0x140f10u: goto label_140f10;
        case 0x140f14u: goto label_140f14;
        case 0x140f18u: goto label_140f18;
        case 0x140f1cu: goto label_140f1c;
        case 0x140f20u: goto label_140f20;
        case 0x140f24u: goto label_140f24;
        case 0x140f28u: goto label_140f28;
        case 0x140f2cu: goto label_140f2c;
        case 0x140f30u: goto label_140f30;
        case 0x140f34u: goto label_140f34;
        case 0x140f38u: goto label_140f38;
        case 0x140f3cu: goto label_140f3c;
        case 0x140f40u: goto label_140f40;
        case 0x140f44u: goto label_140f44;
        case 0x140f48u: goto label_140f48;
        case 0x140f4cu: goto label_140f4c;
        case 0x140f50u: goto label_140f50;
        case 0x140f54u: goto label_140f54;
        case 0x140f58u: goto label_140f58;
        case 0x140f5cu: goto label_140f5c;
        case 0x140f60u: goto label_140f60;
        case 0x140f64u: goto label_140f64;
        case 0x140f68u: goto label_140f68;
        case 0x140f6cu: goto label_140f6c;
        case 0x140f70u: goto label_140f70;
        case 0x140f74u: goto label_140f74;
        case 0x140f78u: goto label_140f78;
        case 0x140f7cu: goto label_140f7c;
        case 0x140f80u: goto label_140f80;
        case 0x140f84u: goto label_140f84;
        case 0x140f88u: goto label_140f88;
        case 0x140f8cu: goto label_140f8c;
        case 0x140f90u: goto label_140f90;
        case 0x140f94u: goto label_140f94;
        case 0x140f98u: goto label_140f98;
        case 0x140f9cu: goto label_140f9c;
        case 0x140fa0u: goto label_140fa0;
        case 0x140fa4u: goto label_140fa4;
        case 0x140fa8u: goto label_140fa8;
        case 0x140facu: goto label_140fac;
        case 0x140fb0u: goto label_140fb0;
        case 0x140fb4u: goto label_140fb4;
        case 0x140fb8u: goto label_140fb8;
        case 0x140fbcu: goto label_140fbc;
        case 0x140fc0u: goto label_140fc0;
        case 0x140fc4u: goto label_140fc4;
        case 0x140fc8u: goto label_140fc8;
        case 0x140fccu: goto label_140fcc;
        case 0x140fd0u: goto label_140fd0;
        case 0x140fd4u: goto label_140fd4;
        case 0x140fd8u: goto label_140fd8;
        case 0x140fdcu: goto label_140fdc;
        case 0x140fe0u: goto label_140fe0;
        case 0x140fe4u: goto label_140fe4;
        case 0x140fe8u: goto label_140fe8;
        case 0x140fecu: goto label_140fec;
        case 0x140ff0u: goto label_140ff0;
        case 0x140ff4u: goto label_140ff4;
        case 0x140ff8u: goto label_140ff8;
        case 0x140ffcu: goto label_140ffc;
        case 0x141000u: goto label_141000;
        case 0x141004u: goto label_141004;
        case 0x141008u: goto label_141008;
        case 0x14100cu: goto label_14100c;
        case 0x141010u: goto label_141010;
        case 0x141014u: goto label_141014;
        case 0x141018u: goto label_141018;
        case 0x14101cu: goto label_14101c;
        case 0x141020u: goto label_141020;
        case 0x141024u: goto label_141024;
        case 0x141028u: goto label_141028;
        case 0x14102cu: goto label_14102c;
        case 0x141030u: goto label_141030;
        case 0x141034u: goto label_141034;
        case 0x141038u: goto label_141038;
        case 0x14103cu: goto label_14103c;
        case 0x141040u: goto label_141040;
        case 0x141044u: goto label_141044;
        case 0x141048u: goto label_141048;
        case 0x14104cu: goto label_14104c;
        case 0x141050u: goto label_141050;
        case 0x141054u: goto label_141054;
        case 0x141058u: goto label_141058;
        case 0x14105cu: goto label_14105c;
        case 0x141060u: goto label_141060;
        case 0x141064u: goto label_141064;
        case 0x141068u: goto label_141068;
        case 0x14106cu: goto label_14106c;
        case 0x141070u: goto label_141070;
        case 0x141074u: goto label_141074;
        case 0x141078u: goto label_141078;
        case 0x14107cu: goto label_14107c;
        case 0x141080u: goto label_141080;
        case 0x141084u: goto label_141084;
        case 0x141088u: goto label_141088;
        case 0x14108cu: goto label_14108c;
        case 0x141090u: goto label_141090;
        case 0x141094u: goto label_141094;
        case 0x141098u: goto label_141098;
        case 0x14109cu: goto label_14109c;
        case 0x1410a0u: goto label_1410a0;
        case 0x1410a4u: goto label_1410a4;
        case 0x1410a8u: goto label_1410a8;
        case 0x1410acu: goto label_1410ac;
        case 0x1410b0u: goto label_1410b0;
        case 0x1410b4u: goto label_1410b4;
        case 0x1410b8u: goto label_1410b8;
        case 0x1410bcu: goto label_1410bc;
        case 0x1410c0u: goto label_1410c0;
        case 0x1410c4u: goto label_1410c4;
        case 0x1410c8u: goto label_1410c8;
        case 0x1410ccu: goto label_1410cc;
        case 0x1410d0u: goto label_1410d0;
        case 0x1410d4u: goto label_1410d4;
        case 0x1410d8u: goto label_1410d8;
        case 0x1410dcu: goto label_1410dc;
        case 0x1410e0u: goto label_1410e0;
        case 0x1410e4u: goto label_1410e4;
        case 0x1410e8u: goto label_1410e8;
        case 0x1410ecu: goto label_1410ec;
        case 0x1410f0u: goto label_1410f0;
        case 0x1410f4u: goto label_1410f4;
        case 0x1410f8u: goto label_1410f8;
        case 0x1410fcu: goto label_1410fc;
        case 0x141100u: goto label_141100;
        case 0x141104u: goto label_141104;
        case 0x141108u: goto label_141108;
        case 0x14110cu: goto label_14110c;
        case 0x141110u: goto label_141110;
        case 0x141114u: goto label_141114;
        case 0x141118u: goto label_141118;
        case 0x14111cu: goto label_14111c;
        case 0x141120u: goto label_141120;
        case 0x141124u: goto label_141124;
        case 0x141128u: goto label_141128;
        case 0x14112cu: goto label_14112c;
        case 0x141130u: goto label_141130;
        case 0x141134u: goto label_141134;
        case 0x141138u: goto label_141138;
        case 0x14113cu: goto label_14113c;
        case 0x141140u: goto label_141140;
        case 0x141144u: goto label_141144;
        case 0x141148u: goto label_141148;
        case 0x14114cu: goto label_14114c;
        case 0x141150u: goto label_141150;
        case 0x141154u: goto label_141154;
        case 0x141158u: goto label_141158;
        case 0x14115cu: goto label_14115c;
        case 0x141160u: goto label_141160;
        case 0x141164u: goto label_141164;
        case 0x141168u: goto label_141168;
        case 0x14116cu: goto label_14116c;
        case 0x141170u: goto label_141170;
        case 0x141174u: goto label_141174;
        case 0x141178u: goto label_141178;
        case 0x14117cu: goto label_14117c;
        case 0x141180u: goto label_141180;
        case 0x141184u: goto label_141184;
        case 0x141188u: goto label_141188;
        case 0x14118cu: goto label_14118c;
        case 0x141190u: goto label_141190;
        case 0x141194u: goto label_141194;
        case 0x141198u: goto label_141198;
        case 0x14119cu: goto label_14119c;
        case 0x1411a0u: goto label_1411a0;
        case 0x1411a4u: goto label_1411a4;
        case 0x1411a8u: goto label_1411a8;
        case 0x1411acu: goto label_1411ac;
        case 0x1411b0u: goto label_1411b0;
        case 0x1411b4u: goto label_1411b4;
        case 0x1411b8u: goto label_1411b8;
        case 0x1411bcu: goto label_1411bc;
        case 0x1411c0u: goto label_1411c0;
        case 0x1411c4u: goto label_1411c4;
        case 0x1411c8u: goto label_1411c8;
        case 0x1411ccu: goto label_1411cc;
        case 0x1411d0u: goto label_1411d0;
        case 0x1411d4u: goto label_1411d4;
        case 0x1411d8u: goto label_1411d8;
        case 0x1411dcu: goto label_1411dc;
        case 0x1411e0u: goto label_1411e0;
        case 0x1411e4u: goto label_1411e4;
        case 0x1411e8u: goto label_1411e8;
        case 0x1411ecu: goto label_1411ec;
        case 0x1411f0u: goto label_1411f0;
        case 0x1411f4u: goto label_1411f4;
        case 0x1411f8u: goto label_1411f8;
        case 0x1411fcu: goto label_1411fc;
        case 0x141200u: goto label_141200;
        case 0x141204u: goto label_141204;
        case 0x141208u: goto label_141208;
        case 0x14120cu: goto label_14120c;
        case 0x141210u: goto label_141210;
        case 0x141214u: goto label_141214;
        case 0x141218u: goto label_141218;
        case 0x14121cu: goto label_14121c;
        case 0x141220u: goto label_141220;
        case 0x141224u: goto label_141224;
        case 0x141228u: goto label_141228;
        case 0x14122cu: goto label_14122c;
        case 0x141230u: goto label_141230;
        case 0x141234u: goto label_141234;
        case 0x141238u: goto label_141238;
        case 0x14123cu: goto label_14123c;
        case 0x141240u: goto label_141240;
        case 0x141244u: goto label_141244;
        case 0x141248u: goto label_141248;
        case 0x14124cu: goto label_14124c;
        case 0x141250u: goto label_141250;
        case 0x141254u: goto label_141254;
        case 0x141258u: goto label_141258;
        case 0x14125cu: goto label_14125c;
        case 0x141260u: goto label_141260;
        case 0x141264u: goto label_141264;
        case 0x141268u: goto label_141268;
        case 0x14126cu: goto label_14126c;
        case 0x141270u: goto label_141270;
        case 0x141274u: goto label_141274;
        case 0x141278u: goto label_141278;
        case 0x14127cu: goto label_14127c;
        case 0x141280u: goto label_141280;
        case 0x141284u: goto label_141284;
        case 0x141288u: goto label_141288;
        case 0x14128cu: goto label_14128c;
        case 0x141290u: goto label_141290;
        case 0x141294u: goto label_141294;
        case 0x141298u: goto label_141298;
        case 0x14129cu: goto label_14129c;
        case 0x1412a0u: goto label_1412a0;
        case 0x1412a4u: goto label_1412a4;
        case 0x1412a8u: goto label_1412a8;
        case 0x1412acu: goto label_1412ac;
        case 0x1412b0u: goto label_1412b0;
        case 0x1412b4u: goto label_1412b4;
        case 0x1412b8u: goto label_1412b8;
        case 0x1412bcu: goto label_1412bc;
        case 0x1412c0u: goto label_1412c0;
        case 0x1412c4u: goto label_1412c4;
        case 0x1412c8u: goto label_1412c8;
        case 0x1412ccu: goto label_1412cc;
        case 0x1412d0u: goto label_1412d0;
        case 0x1412d4u: goto label_1412d4;
        case 0x1412d8u: goto label_1412d8;
        case 0x1412dcu: goto label_1412dc;
        case 0x1412e0u: goto label_1412e0;
        case 0x1412e4u: goto label_1412e4;
        case 0x1412e8u: goto label_1412e8;
        case 0x1412ecu: goto label_1412ec;
        case 0x1412f0u: goto label_1412f0;
        case 0x1412f4u: goto label_1412f4;
        case 0x1412f8u: goto label_1412f8;
        case 0x1412fcu: goto label_1412fc;
        case 0x141300u: goto label_141300;
        case 0x141304u: goto label_141304;
        case 0x141308u: goto label_141308;
        case 0x14130cu: goto label_14130c;
        case 0x141310u: goto label_141310;
        case 0x141314u: goto label_141314;
        case 0x141318u: goto label_141318;
        case 0x14131cu: goto label_14131c;
        case 0x141320u: goto label_141320;
        case 0x141324u: goto label_141324;
        case 0x141328u: goto label_141328;
        case 0x14132cu: goto label_14132c;
        case 0x141330u: goto label_141330;
        case 0x141334u: goto label_141334;
        case 0x141338u: goto label_141338;
        case 0x14133cu: goto label_14133c;
        case 0x141340u: goto label_141340;
        case 0x141344u: goto label_141344;
        case 0x141348u: goto label_141348;
        case 0x14134cu: goto label_14134c;
        case 0x141350u: goto label_141350;
        case 0x141354u: goto label_141354;
        case 0x141358u: goto label_141358;
        case 0x14135cu: goto label_14135c;
        case 0x141360u: goto label_141360;
        case 0x141364u: goto label_141364;
        case 0x141368u: goto label_141368;
        case 0x14136cu: goto label_14136c;
        case 0x141370u: goto label_141370;
        case 0x141374u: goto label_141374;
        case 0x141378u: goto label_141378;
        case 0x14137cu: goto label_14137c;
        case 0x141380u: goto label_141380;
        case 0x141384u: goto label_141384;
        case 0x141388u: goto label_141388;
        case 0x14138cu: goto label_14138c;
        case 0x141390u: goto label_141390;
        case 0x141394u: goto label_141394;
        case 0x141398u: goto label_141398;
        case 0x14139cu: goto label_14139c;
        case 0x1413a0u: goto label_1413a0;
        case 0x1413a4u: goto label_1413a4;
        case 0x1413a8u: goto label_1413a8;
        case 0x1413acu: goto label_1413ac;
        case 0x1413b0u: goto label_1413b0;
        case 0x1413b4u: goto label_1413b4;
        case 0x1413b8u: goto label_1413b8;
        case 0x1413bcu: goto label_1413bc;
        case 0x1413c0u: goto label_1413c0;
        case 0x1413c4u: goto label_1413c4;
        case 0x1413c8u: goto label_1413c8;
        case 0x1413ccu: goto label_1413cc;
        case 0x1413d0u: goto label_1413d0;
        case 0x1413d4u: goto label_1413d4;
        case 0x1413d8u: goto label_1413d8;
        case 0x1413dcu: goto label_1413dc;
        case 0x1413e0u: goto label_1413e0;
        case 0x1413e4u: goto label_1413e4;
        case 0x1413e8u: goto label_1413e8;
        case 0x1413ecu: goto label_1413ec;
        case 0x1413f0u: goto label_1413f0;
        case 0x1413f4u: goto label_1413f4;
        case 0x1413f8u: goto label_1413f8;
        case 0x1413fcu: goto label_1413fc;
        case 0x141400u: goto label_141400;
        case 0x141404u: goto label_141404;
        case 0x141408u: goto label_141408;
        case 0x14140cu: goto label_14140c;
        case 0x141410u: goto label_141410;
        case 0x141414u: goto label_141414;
        case 0x141418u: goto label_141418;
        case 0x14141cu: goto label_14141c;
        case 0x141420u: goto label_141420;
        case 0x141424u: goto label_141424;
        case 0x141428u: goto label_141428;
        case 0x14142cu: goto label_14142c;
        case 0x141430u: goto label_141430;
        case 0x141434u: goto label_141434;
        case 0x141438u: goto label_141438;
        case 0x14143cu: goto label_14143c;
        case 0x141440u: goto label_141440;
        case 0x141444u: goto label_141444;
        case 0x141448u: goto label_141448;
        case 0x14144cu: goto label_14144c;
        case 0x141450u: goto label_141450;
        case 0x141454u: goto label_141454;
        case 0x141458u: goto label_141458;
        case 0x14145cu: goto label_14145c;
        case 0x141460u: goto label_141460;
        case 0x141464u: goto label_141464;
        case 0x141468u: goto label_141468;
        case 0x14146cu: goto label_14146c;
        case 0x141470u: goto label_141470;
        case 0x141474u: goto label_141474;
        case 0x141478u: goto label_141478;
        case 0x14147cu: goto label_14147c;
        case 0x141480u: goto label_141480;
        case 0x141484u: goto label_141484;
        case 0x141488u: goto label_141488;
        case 0x14148cu: goto label_14148c;
        case 0x141490u: goto label_141490;
        case 0x141494u: goto label_141494;
        case 0x141498u: goto label_141498;
        case 0x14149cu: goto label_14149c;
        case 0x1414a0u: goto label_1414a0;
        case 0x1414a4u: goto label_1414a4;
        case 0x1414a8u: goto label_1414a8;
        case 0x1414acu: goto label_1414ac;
        case 0x1414b0u: goto label_1414b0;
        case 0x1414b4u: goto label_1414b4;
        case 0x1414b8u: goto label_1414b8;
        case 0x1414bcu: goto label_1414bc;
        case 0x1414c0u: goto label_1414c0;
        case 0x1414c4u: goto label_1414c4;
        case 0x1414c8u: goto label_1414c8;
        case 0x1414ccu: goto label_1414cc;
        case 0x1414d0u: goto label_1414d0;
        case 0x1414d4u: goto label_1414d4;
        case 0x1414d8u: goto label_1414d8;
        case 0x1414dcu: goto label_1414dc;
        case 0x1414e0u: goto label_1414e0;
        case 0x1414e4u: goto label_1414e4;
        case 0x1414e8u: goto label_1414e8;
        case 0x1414ecu: goto label_1414ec;
        case 0x1414f0u: goto label_1414f0;
        case 0x1414f4u: goto label_1414f4;
        case 0x1414f8u: goto label_1414f8;
        case 0x1414fcu: goto label_1414fc;
        case 0x141500u: goto label_141500;
        case 0x141504u: goto label_141504;
        case 0x141508u: goto label_141508;
        case 0x14150cu: goto label_14150c;
        case 0x141510u: goto label_141510;
        case 0x141514u: goto label_141514;
        case 0x141518u: goto label_141518;
        case 0x14151cu: goto label_14151c;
        case 0x141520u: goto label_141520;
        case 0x141524u: goto label_141524;
        case 0x141528u: goto label_141528;
        case 0x14152cu: goto label_14152c;
        case 0x141530u: goto label_141530;
        case 0x141534u: goto label_141534;
        case 0x141538u: goto label_141538;
        case 0x14153cu: goto label_14153c;
        case 0x141540u: goto label_141540;
        case 0x141544u: goto label_141544;
        case 0x141548u: goto label_141548;
        case 0x14154cu: goto label_14154c;
        case 0x141550u: goto label_141550;
        case 0x141554u: goto label_141554;
        case 0x141558u: goto label_141558;
        case 0x14155cu: goto label_14155c;
        case 0x141560u: goto label_141560;
        case 0x141564u: goto label_141564;
        case 0x141568u: goto label_141568;
        case 0x14156cu: goto label_14156c;
        case 0x141570u: goto label_141570;
        case 0x141574u: goto label_141574;
        case 0x141578u: goto label_141578;
        case 0x14157cu: goto label_14157c;
        case 0x141580u: goto label_141580;
        case 0x141584u: goto label_141584;
        case 0x141588u: goto label_141588;
        case 0x14158cu: goto label_14158c;
        case 0x141590u: goto label_141590;
        case 0x141594u: goto label_141594;
        case 0x141598u: goto label_141598;
        case 0x14159cu: goto label_14159c;
        case 0x1415a0u: goto label_1415a0;
        case 0x1415a4u: goto label_1415a4;
        case 0x1415a8u: goto label_1415a8;
        case 0x1415acu: goto label_1415ac;
        case 0x1415b0u: goto label_1415b0;
        case 0x1415b4u: goto label_1415b4;
        case 0x1415b8u: goto label_1415b8;
        case 0x1415bcu: goto label_1415bc;
        case 0x1415c0u: goto label_1415c0;
        case 0x1415c4u: goto label_1415c4;
        case 0x1415c8u: goto label_1415c8;
        case 0x1415ccu: goto label_1415cc;
        case 0x1415d0u: goto label_1415d0;
        case 0x1415d4u: goto label_1415d4;
        case 0x1415d8u: goto label_1415d8;
        case 0x1415dcu: goto label_1415dc;
        case 0x1415e0u: goto label_1415e0;
        case 0x1415e4u: goto label_1415e4;
        case 0x1415e8u: goto label_1415e8;
        case 0x1415ecu: goto label_1415ec;
        case 0x1415f0u: goto label_1415f0;
        case 0x1415f4u: goto label_1415f4;
        case 0x1415f8u: goto label_1415f8;
        case 0x1415fcu: goto label_1415fc;
        case 0x141600u: goto label_141600;
        case 0x141604u: goto label_141604;
        case 0x141608u: goto label_141608;
        case 0x14160cu: goto label_14160c;
        case 0x141610u: goto label_141610;
        case 0x141614u: goto label_141614;
        case 0x141618u: goto label_141618;
        case 0x14161cu: goto label_14161c;
        case 0x141620u: goto label_141620;
        case 0x141624u: goto label_141624;
        case 0x141628u: goto label_141628;
        case 0x14162cu: goto label_14162c;
        case 0x141630u: goto label_141630;
        case 0x141634u: goto label_141634;
        case 0x141638u: goto label_141638;
        case 0x14163cu: goto label_14163c;
        case 0x141640u: goto label_141640;
        case 0x141644u: goto label_141644;
        case 0x141648u: goto label_141648;
        case 0x14164cu: goto label_14164c;
        case 0x141650u: goto label_141650;
        case 0x141654u: goto label_141654;
        case 0x141658u: goto label_141658;
        case 0x14165cu: goto label_14165c;
        case 0x141660u: goto label_141660;
        case 0x141664u: goto label_141664;
        case 0x141668u: goto label_141668;
        case 0x14166cu: goto label_14166c;
        case 0x141670u: goto label_141670;
        case 0x141674u: goto label_141674;
        case 0x141678u: goto label_141678;
        case 0x14167cu: goto label_14167c;
        case 0x141680u: goto label_141680;
        case 0x141684u: goto label_141684;
        case 0x141688u: goto label_141688;
        case 0x14168cu: goto label_14168c;
        case 0x141690u: goto label_141690;
        case 0x141694u: goto label_141694;
        case 0x141698u: goto label_141698;
        case 0x14169cu: goto label_14169c;
        case 0x1416a0u: goto label_1416a0;
        case 0x1416a4u: goto label_1416a4;
        case 0x1416a8u: goto label_1416a8;
        case 0x1416acu: goto label_1416ac;
        case 0x1416b0u: goto label_1416b0;
        case 0x1416b4u: goto label_1416b4;
        case 0x1416b8u: goto label_1416b8;
        case 0x1416bcu: goto label_1416bc;
        case 0x1416c0u: goto label_1416c0;
        case 0x1416c4u: goto label_1416c4;
        case 0x1416c8u: goto label_1416c8;
        case 0x1416ccu: goto label_1416cc;
        case 0x1416d0u: goto label_1416d0;
        case 0x1416d4u: goto label_1416d4;
        case 0x1416d8u: goto label_1416d8;
        case 0x1416dcu: goto label_1416dc;
        case 0x1416e0u: goto label_1416e0;
        case 0x1416e4u: goto label_1416e4;
        case 0x1416e8u: goto label_1416e8;
        case 0x1416ecu: goto label_1416ec;
        case 0x1416f0u: goto label_1416f0;
        case 0x1416f4u: goto label_1416f4;
        case 0x1416f8u: goto label_1416f8;
        case 0x1416fcu: goto label_1416fc;
        case 0x141700u: goto label_141700;
        case 0x141704u: goto label_141704;
        case 0x141708u: goto label_141708;
        case 0x14170cu: goto label_14170c;
        case 0x141710u: goto label_141710;
        case 0x141714u: goto label_141714;
        case 0x141718u: goto label_141718;
        case 0x14171cu: goto label_14171c;
        case 0x141720u: goto label_141720;
        case 0x141724u: goto label_141724;
        case 0x141728u: goto label_141728;
        case 0x14172cu: goto label_14172c;
        case 0x141730u: goto label_141730;
        case 0x141734u: goto label_141734;
        case 0x141738u: goto label_141738;
        case 0x14173cu: goto label_14173c;
        case 0x141740u: goto label_141740;
        case 0x141744u: goto label_141744;
        case 0x141748u: goto label_141748;
        case 0x14174cu: goto label_14174c;
        case 0x141750u: goto label_141750;
        case 0x141754u: goto label_141754;
        case 0x141758u: goto label_141758;
        case 0x14175cu: goto label_14175c;
        case 0x141760u: goto label_141760;
        case 0x141764u: goto label_141764;
        case 0x141768u: goto label_141768;
        case 0x14176cu: goto label_14176c;
        case 0x141770u: goto label_141770;
        case 0x141774u: goto label_141774;
        case 0x141778u: goto label_141778;
        case 0x14177cu: goto label_14177c;
        case 0x141780u: goto label_141780;
        case 0x141784u: goto label_141784;
        case 0x141788u: goto label_141788;
        case 0x14178cu: goto label_14178c;
        case 0x141790u: goto label_141790;
        case 0x141794u: goto label_141794;
        case 0x141798u: goto label_141798;
        case 0x14179cu: goto label_14179c;
        case 0x1417a0u: goto label_1417a0;
        case 0x1417a4u: goto label_1417a4;
        case 0x1417a8u: goto label_1417a8;
        case 0x1417acu: goto label_1417ac;
        case 0x1417b0u: goto label_1417b0;
        case 0x1417b4u: goto label_1417b4;
        case 0x1417b8u: goto label_1417b8;
        case 0x1417bcu: goto label_1417bc;
        case 0x1417c0u: goto label_1417c0;
        case 0x1417c4u: goto label_1417c4;
        case 0x1417c8u: goto label_1417c8;
        case 0x1417ccu: goto label_1417cc;
        case 0x1417d0u: goto label_1417d0;
        case 0x1417d4u: goto label_1417d4;
        case 0x1417d8u: goto label_1417d8;
        case 0x1417dcu: goto label_1417dc;
        case 0x1417e0u: goto label_1417e0;
        case 0x1417e4u: goto label_1417e4;
        case 0x1417e8u: goto label_1417e8;
        case 0x1417ecu: goto label_1417ec;
        case 0x1417f0u: goto label_1417f0;
        case 0x1417f4u: goto label_1417f4;
        case 0x1417f8u: goto label_1417f8;
        case 0x1417fcu: goto label_1417fc;
        case 0x141800u: goto label_141800;
        case 0x141804u: goto label_141804;
        case 0x141808u: goto label_141808;
        case 0x14180cu: goto label_14180c;
        case 0x141810u: goto label_141810;
        case 0x141814u: goto label_141814;
        case 0x141818u: goto label_141818;
        case 0x14181cu: goto label_14181c;
        case 0x141820u: goto label_141820;
        case 0x141824u: goto label_141824;
        case 0x141828u: goto label_141828;
        case 0x14182cu: goto label_14182c;
        case 0x141830u: goto label_141830;
        case 0x141834u: goto label_141834;
        case 0x141838u: goto label_141838;
        case 0x14183cu: goto label_14183c;
        case 0x141840u: goto label_141840;
        case 0x141844u: goto label_141844;
        case 0x141848u: goto label_141848;
        case 0x14184cu: goto label_14184c;
        case 0x141850u: goto label_141850;
        case 0x141854u: goto label_141854;
        case 0x141858u: goto label_141858;
        case 0x14185cu: goto label_14185c;
        case 0x141860u: goto label_141860;
        case 0x141864u: goto label_141864;
        case 0x141868u: goto label_141868;
        case 0x14186cu: goto label_14186c;
        case 0x141870u: goto label_141870;
        case 0x141874u: goto label_141874;
        case 0x141878u: goto label_141878;
        case 0x14187cu: goto label_14187c;
        case 0x141880u: goto label_141880;
        case 0x141884u: goto label_141884;
        case 0x141888u: goto label_141888;
        case 0x14188cu: goto label_14188c;
        case 0x141890u: goto label_141890;
        case 0x141894u: goto label_141894;
        case 0x141898u: goto label_141898;
        case 0x14189cu: goto label_14189c;
        case 0x1418a0u: goto label_1418a0;
        case 0x1418a4u: goto label_1418a4;
        case 0x1418a8u: goto label_1418a8;
        case 0x1418acu: goto label_1418ac;
        case 0x1418b0u: goto label_1418b0;
        case 0x1418b4u: goto label_1418b4;
        case 0x1418b8u: goto label_1418b8;
        case 0x1418bcu: goto label_1418bc;
        case 0x1418c0u: goto label_1418c0;
        case 0x1418c4u: goto label_1418c4;
        case 0x1418c8u: goto label_1418c8;
        case 0x1418ccu: goto label_1418cc;
        case 0x1418d0u: goto label_1418d0;
        case 0x1418d4u: goto label_1418d4;
        case 0x1418d8u: goto label_1418d8;
        case 0x1418dcu: goto label_1418dc;
        case 0x1418e0u: goto label_1418e0;
        case 0x1418e4u: goto label_1418e4;
        case 0x1418e8u: goto label_1418e8;
        case 0x1418ecu: goto label_1418ec;
        case 0x1418f0u: goto label_1418f0;
        case 0x1418f4u: goto label_1418f4;
        case 0x1418f8u: goto label_1418f8;
        case 0x1418fcu: goto label_1418fc;
        case 0x141900u: goto label_141900;
        case 0x141904u: goto label_141904;
        case 0x141908u: goto label_141908;
        case 0x14190cu: goto label_14190c;
        case 0x141910u: goto label_141910;
        case 0x141914u: goto label_141914;
        case 0x141918u: goto label_141918;
        case 0x14191cu: goto label_14191c;
        case 0x141920u: goto label_141920;
        case 0x141924u: goto label_141924;
        case 0x141928u: goto label_141928;
        case 0x14192cu: goto label_14192c;
        case 0x141930u: goto label_141930;
        case 0x141934u: goto label_141934;
        case 0x141938u: goto label_141938;
        case 0x14193cu: goto label_14193c;
        case 0x141940u: goto label_141940;
        case 0x141944u: goto label_141944;
        case 0x141948u: goto label_141948;
        case 0x14194cu: goto label_14194c;
        case 0x141950u: goto label_141950;
        case 0x141954u: goto label_141954;
        case 0x141958u: goto label_141958;
        case 0x14195cu: goto label_14195c;
        case 0x141960u: goto label_141960;
        case 0x141964u: goto label_141964;
        case 0x141968u: goto label_141968;
        case 0x14196cu: goto label_14196c;
        case 0x141970u: goto label_141970;
        case 0x141974u: goto label_141974;
        case 0x141978u: goto label_141978;
        case 0x14197cu: goto label_14197c;
        case 0x141980u: goto label_141980;
        case 0x141984u: goto label_141984;
        case 0x141988u: goto label_141988;
        case 0x14198cu: goto label_14198c;
        case 0x141990u: goto label_141990;
        case 0x141994u: goto label_141994;
        case 0x141998u: goto label_141998;
        case 0x14199cu: goto label_14199c;
        case 0x1419a0u: goto label_1419a0;
        case 0x1419a4u: goto label_1419a4;
        case 0x1419a8u: goto label_1419a8;
        case 0x1419acu: goto label_1419ac;
        case 0x1419b0u: goto label_1419b0;
        case 0x1419b4u: goto label_1419b4;
        case 0x1419b8u: goto label_1419b8;
        case 0x1419bcu: goto label_1419bc;
        case 0x1419c0u: goto label_1419c0;
        case 0x1419c4u: goto label_1419c4;
        case 0x1419c8u: goto label_1419c8;
        case 0x1419ccu: goto label_1419cc;
        case 0x1419d0u: goto label_1419d0;
        case 0x1419d4u: goto label_1419d4;
        case 0x1419d8u: goto label_1419d8;
        case 0x1419dcu: goto label_1419dc;
        case 0x1419e0u: goto label_1419e0;
        case 0x1419e4u: goto label_1419e4;
        case 0x1419e8u: goto label_1419e8;
        case 0x1419ecu: goto label_1419ec;
        case 0x1419f0u: goto label_1419f0;
        case 0x1419f4u: goto label_1419f4;
        case 0x1419f8u: goto label_1419f8;
        case 0x1419fcu: goto label_1419fc;
        case 0x141a00u: goto label_141a00;
        case 0x141a04u: goto label_141a04;
        case 0x141a08u: goto label_141a08;
        case 0x141a0cu: goto label_141a0c;
        case 0x141a10u: goto label_141a10;
        case 0x141a14u: goto label_141a14;
        case 0x141a18u: goto label_141a18;
        case 0x141a1cu: goto label_141a1c;
        case 0x141a20u: goto label_141a20;
        case 0x141a24u: goto label_141a24;
        case 0x141a28u: goto label_141a28;
        case 0x141a2cu: goto label_141a2c;
        case 0x141a30u: goto label_141a30;
        case 0x141a34u: goto label_141a34;
        case 0x141a38u: goto label_141a38;
        case 0x141a3cu: goto label_141a3c;
        case 0x141a40u: goto label_141a40;
        case 0x141a44u: goto label_141a44;
        case 0x141a48u: goto label_141a48;
        case 0x141a4cu: goto label_141a4c;
        case 0x141a50u: goto label_141a50;
        case 0x141a54u: goto label_141a54;
        case 0x141a58u: goto label_141a58;
        case 0x141a5cu: goto label_141a5c;
        case 0x141a60u: goto label_141a60;
        case 0x141a64u: goto label_141a64;
        case 0x141a68u: goto label_141a68;
        case 0x141a6cu: goto label_141a6c;
        case 0x141a70u: goto label_141a70;
        case 0x141a74u: goto label_141a74;
        case 0x141a78u: goto label_141a78;
        case 0x141a7cu: goto label_141a7c;
        case 0x141a80u: goto label_141a80;
        case 0x141a84u: goto label_141a84;
        case 0x141a88u: goto label_141a88;
        case 0x141a8cu: goto label_141a8c;
        case 0x141a90u: goto label_141a90;
        case 0x141a94u: goto label_141a94;
        case 0x141a98u: goto label_141a98;
        case 0x141a9cu: goto label_141a9c;
        case 0x141aa0u: goto label_141aa0;
        case 0x141aa4u: goto label_141aa4;
        case 0x141aa8u: goto label_141aa8;
        case 0x141aacu: goto label_141aac;
        case 0x141ab0u: goto label_141ab0;
        case 0x141ab4u: goto label_141ab4;
        case 0x141ab8u: goto label_141ab8;
        case 0x141abcu: goto label_141abc;
        case 0x141ac0u: goto label_141ac0;
        case 0x141ac4u: goto label_141ac4;
        case 0x141ac8u: goto label_141ac8;
        case 0x141accu: goto label_141acc;
        case 0x141ad0u: goto label_141ad0;
        case 0x141ad4u: goto label_141ad4;
        case 0x141ad8u: goto label_141ad8;
        case 0x141adcu: goto label_141adc;
        case 0x141ae0u: goto label_141ae0;
        case 0x141ae4u: goto label_141ae4;
        case 0x141ae8u: goto label_141ae8;
        case 0x141aecu: goto label_141aec;
        case 0x141af0u: goto label_141af0;
        case 0x141af4u: goto label_141af4;
        case 0x141af8u: goto label_141af8;
        case 0x141afcu: goto label_141afc;
        case 0x141b00u: goto label_141b00;
        case 0x141b04u: goto label_141b04;
        case 0x141b08u: goto label_141b08;
        case 0x141b0cu: goto label_141b0c;
        case 0x141b10u: goto label_141b10;
        case 0x141b14u: goto label_141b14;
        case 0x141b18u: goto label_141b18;
        case 0x141b1cu: goto label_141b1c;
        case 0x141b20u: goto label_141b20;
        case 0x141b24u: goto label_141b24;
        case 0x141b28u: goto label_141b28;
        case 0x141b2cu: goto label_141b2c;
        case 0x141b30u: goto label_141b30;
        case 0x141b34u: goto label_141b34;
        case 0x141b38u: goto label_141b38;
        case 0x141b3cu: goto label_141b3c;
        case 0x141b40u: goto label_141b40;
        case 0x141b44u: goto label_141b44;
        case 0x141b48u: goto label_141b48;
        case 0x141b4cu: goto label_141b4c;
        case 0x141b50u: goto label_141b50;
        case 0x141b54u: goto label_141b54;
        case 0x141b58u: goto label_141b58;
        case 0x141b5cu: goto label_141b5c;
        case 0x141b60u: goto label_141b60;
        case 0x141b64u: goto label_141b64;
        case 0x141b68u: goto label_141b68;
        case 0x141b6cu: goto label_141b6c;
        case 0x141b70u: goto label_141b70;
        case 0x141b74u: goto label_141b74;
        case 0x141b78u: goto label_141b78;
        case 0x141b7cu: goto label_141b7c;
        case 0x141b80u: goto label_141b80;
        case 0x141b84u: goto label_141b84;
        case 0x141b88u: goto label_141b88;
        case 0x141b8cu: goto label_141b8c;
        case 0x141b90u: goto label_141b90;
        case 0x141b94u: goto label_141b94;
        case 0x141b98u: goto label_141b98;
        case 0x141b9cu: goto label_141b9c;
        case 0x141ba0u: goto label_141ba0;
        case 0x141ba4u: goto label_141ba4;
        case 0x141ba8u: goto label_141ba8;
        case 0x141bacu: goto label_141bac;
        case 0x141bb0u: goto label_141bb0;
        case 0x141bb4u: goto label_141bb4;
        case 0x141bb8u: goto label_141bb8;
        case 0x141bbcu: goto label_141bbc;
        case 0x141bc0u: goto label_141bc0;
        case 0x141bc4u: goto label_141bc4;
        case 0x141bc8u: goto label_141bc8;
        case 0x141bccu: goto label_141bcc;
        case 0x141bd0u: goto label_141bd0;
        case 0x141bd4u: goto label_141bd4;
        case 0x141bd8u: goto label_141bd8;
        case 0x141bdcu: goto label_141bdc;
        case 0x141be0u: goto label_141be0;
        case 0x141be4u: goto label_141be4;
        case 0x141be8u: goto label_141be8;
        case 0x141becu: goto label_141bec;
        case 0x141bf0u: goto label_141bf0;
        case 0x141bf4u: goto label_141bf4;
        case 0x141bf8u: goto label_141bf8;
        case 0x141bfcu: goto label_141bfc;
        case 0x141c00u: goto label_141c00;
        case 0x141c04u: goto label_141c04;
        case 0x141c08u: goto label_141c08;
        case 0x141c0cu: goto label_141c0c;
        case 0x141c10u: goto label_141c10;
        case 0x141c14u: goto label_141c14;
        case 0x141c18u: goto label_141c18;
        case 0x141c1cu: goto label_141c1c;
        case 0x141c20u: goto label_141c20;
        case 0x141c24u: goto label_141c24;
        case 0x141c28u: goto label_141c28;
        case 0x141c2cu: goto label_141c2c;
        case 0x141c30u: goto label_141c30;
        case 0x141c34u: goto label_141c34;
        case 0x141c38u: goto label_141c38;
        case 0x141c3cu: goto label_141c3c;
        case 0x141c40u: goto label_141c40;
        case 0x141c44u: goto label_141c44;
        case 0x141c48u: goto label_141c48;
        case 0x141c4cu: goto label_141c4c;
        case 0x141c50u: goto label_141c50;
        case 0x141c54u: goto label_141c54;
        case 0x141c58u: goto label_141c58;
        case 0x141c5cu: goto label_141c5c;
        case 0x141c60u: goto label_141c60;
        case 0x141c64u: goto label_141c64;
        case 0x141c68u: goto label_141c68;
        case 0x141c6cu: goto label_141c6c;
        case 0x141c70u: goto label_141c70;
        case 0x141c74u: goto label_141c74;
        case 0x141c78u: goto label_141c78;
        case 0x141c7cu: goto label_141c7c;
        case 0x141c80u: goto label_141c80;
        case 0x141c84u: goto label_141c84;
        case 0x141c88u: goto label_141c88;
        case 0x141c8cu: goto label_141c8c;
        case 0x141c90u: goto label_141c90;
        case 0x141c94u: goto label_141c94;
        case 0x141c98u: goto label_141c98;
        case 0x141c9cu: goto label_141c9c;
        case 0x141ca0u: goto label_141ca0;
        case 0x141ca4u: goto label_141ca4;
        case 0x141ca8u: goto label_141ca8;
        case 0x141cacu: goto label_141cac;
        case 0x141cb0u: goto label_141cb0;
        case 0x141cb4u: goto label_141cb4;
        case 0x141cb8u: goto label_141cb8;
        case 0x141cbcu: goto label_141cbc;
        case 0x141cc0u: goto label_141cc0;
        case 0x141cc4u: goto label_141cc4;
        case 0x141cc8u: goto label_141cc8;
        case 0x141cccu: goto label_141ccc;
        case 0x141cd0u: goto label_141cd0;
        case 0x141cd4u: goto label_141cd4;
        case 0x141cd8u: goto label_141cd8;
        case 0x141cdcu: goto label_141cdc;
        case 0x141ce0u: goto label_141ce0;
        case 0x141ce4u: goto label_141ce4;
        case 0x141ce8u: goto label_141ce8;
        case 0x141cecu: goto label_141cec;
        case 0x141cf0u: goto label_141cf0;
        case 0x141cf4u: goto label_141cf4;
        case 0x141cf8u: goto label_141cf8;
        case 0x141cfcu: goto label_141cfc;
        case 0x141d00u: goto label_141d00;
        case 0x141d04u: goto label_141d04;
        case 0x141d08u: goto label_141d08;
        case 0x141d0cu: goto label_141d0c;
        case 0x141d10u: goto label_141d10;
        case 0x141d14u: goto label_141d14;
        case 0x141d18u: goto label_141d18;
        case 0x141d1cu: goto label_141d1c;
        case 0x141d20u: goto label_141d20;
        case 0x141d24u: goto label_141d24;
        case 0x141d28u: goto label_141d28;
        case 0x141d2cu: goto label_141d2c;
        case 0x141d30u: goto label_141d30;
        case 0x141d34u: goto label_141d34;
        case 0x141d38u: goto label_141d38;
        case 0x141d3cu: goto label_141d3c;
        case 0x141d40u: goto label_141d40;
        case 0x141d44u: goto label_141d44;
        case 0x141d48u: goto label_141d48;
        case 0x141d4cu: goto label_141d4c;
        case 0x141d50u: goto label_141d50;
        case 0x141d54u: goto label_141d54;
        case 0x141d58u: goto label_141d58;
        case 0x141d5cu: goto label_141d5c;
        case 0x141d60u: goto label_141d60;
        case 0x141d64u: goto label_141d64;
        case 0x141d68u: goto label_141d68;
        case 0x141d6cu: goto label_141d6c;
        case 0x141d70u: goto label_141d70;
        case 0x141d74u: goto label_141d74;
        case 0x141d78u: goto label_141d78;
        case 0x141d7cu: goto label_141d7c;
        case 0x141d80u: goto label_141d80;
        case 0x141d84u: goto label_141d84;
        case 0x141d88u: goto label_141d88;
        case 0x141d8cu: goto label_141d8c;
        case 0x141d90u: goto label_141d90;
        case 0x141d94u: goto label_141d94;
        case 0x141d98u: goto label_141d98;
        case 0x141d9cu: goto label_141d9c;
        case 0x141da0u: goto label_141da0;
        case 0x141da4u: goto label_141da4;
        case 0x141da8u: goto label_141da8;
        case 0x141dacu: goto label_141dac;
        case 0x141db0u: goto label_141db0;
        case 0x141db4u: goto label_141db4;
        case 0x141db8u: goto label_141db8;
        case 0x141dbcu: goto label_141dbc;
        case 0x141dc0u: goto label_141dc0;
        case 0x141dc4u: goto label_141dc4;
        case 0x141dc8u: goto label_141dc8;
        case 0x141dccu: goto label_141dcc;
        case 0x141dd0u: goto label_141dd0;
        case 0x141dd4u: goto label_141dd4;
        case 0x141dd8u: goto label_141dd8;
        case 0x141ddcu: goto label_141ddc;
        case 0x141de0u: goto label_141de0;
        case 0x141de4u: goto label_141de4;
        case 0x141de8u: goto label_141de8;
        case 0x141decu: goto label_141dec;
        case 0x141df0u: goto label_141df0;
        case 0x141df4u: goto label_141df4;
        case 0x141df8u: goto label_141df8;
        case 0x141dfcu: goto label_141dfc;
        case 0x141e00u: goto label_141e00;
        case 0x141e04u: goto label_141e04;
        case 0x141e08u: goto label_141e08;
        case 0x141e0cu: goto label_141e0c;
        case 0x141e10u: goto label_141e10;
        case 0x141e14u: goto label_141e14;
        case 0x141e18u: goto label_141e18;
        case 0x141e1cu: goto label_141e1c;
        case 0x141e20u: goto label_141e20;
        case 0x141e24u: goto label_141e24;
        case 0x141e28u: goto label_141e28;
        case 0x141e2cu: goto label_141e2c;
        case 0x141e30u: goto label_141e30;
        case 0x141e34u: goto label_141e34;
        case 0x141e38u: goto label_141e38;
        case 0x141e3cu: goto label_141e3c;
        case 0x141e40u: goto label_141e40;
        case 0x141e44u: goto label_141e44;
        case 0x141e48u: goto label_141e48;
        case 0x141e4cu: goto label_141e4c;
        case 0x141e50u: goto label_141e50;
        case 0x141e54u: goto label_141e54;
        case 0x141e58u: goto label_141e58;
        case 0x141e5cu: goto label_141e5c;
        case 0x141e60u: goto label_141e60;
        case 0x141e64u: goto label_141e64;
        case 0x141e68u: goto label_141e68;
        case 0x141e6cu: goto label_141e6c;
        case 0x141e70u: goto label_141e70;
        case 0x141e74u: goto label_141e74;
        case 0x141e78u: goto label_141e78;
        case 0x141e7cu: goto label_141e7c;
        case 0x141e80u: goto label_141e80;
        case 0x141e84u: goto label_141e84;
        case 0x141e88u: goto label_141e88;
        case 0x141e8cu: goto label_141e8c;
        case 0x141e90u: goto label_141e90;
        case 0x141e94u: goto label_141e94;
        case 0x141e98u: goto label_141e98;
        case 0x141e9cu: goto label_141e9c;
        case 0x141ea0u: goto label_141ea0;
        case 0x141ea4u: goto label_141ea4;
        case 0x141ea8u: goto label_141ea8;
        case 0x141eacu: goto label_141eac;
        case 0x141eb0u: goto label_141eb0;
        case 0x141eb4u: goto label_141eb4;
        case 0x141eb8u: goto label_141eb8;
        case 0x141ebcu: goto label_141ebc;
        case 0x141ec0u: goto label_141ec0;
        case 0x141ec4u: goto label_141ec4;
        case 0x141ec8u: goto label_141ec8;
        case 0x141eccu: goto label_141ecc;
        case 0x141ed0u: goto label_141ed0;
        case 0x141ed4u: goto label_141ed4;
        case 0x141ed8u: goto label_141ed8;
        case 0x141edcu: goto label_141edc;
        case 0x141ee0u: goto label_141ee0;
        case 0x141ee4u: goto label_141ee4;
        case 0x141ee8u: goto label_141ee8;
        case 0x141eecu: goto label_141eec;
        case 0x141ef0u: goto label_141ef0;
        case 0x141ef4u: goto label_141ef4;
        case 0x141ef8u: goto label_141ef8;
        case 0x141efcu: goto label_141efc;
        case 0x141f00u: goto label_141f00;
        case 0x141f04u: goto label_141f04;
        case 0x141f08u: goto label_141f08;
        case 0x141f0cu: goto label_141f0c;
        case 0x141f10u: goto label_141f10;
        case 0x141f14u: goto label_141f14;
        case 0x141f18u: goto label_141f18;
        case 0x141f1cu: goto label_141f1c;
        case 0x141f20u: goto label_141f20;
        case 0x141f24u: goto label_141f24;
        case 0x141f28u: goto label_141f28;
        case 0x141f2cu: goto label_141f2c;
        case 0x141f30u: goto label_141f30;
        case 0x141f34u: goto label_141f34;
        case 0x141f38u: goto label_141f38;
        case 0x141f3cu: goto label_141f3c;
        case 0x141f40u: goto label_141f40;
        case 0x141f44u: goto label_141f44;
        case 0x141f48u: goto label_141f48;
        case 0x141f4cu: goto label_141f4c;
        case 0x141f50u: goto label_141f50;
        case 0x141f54u: goto label_141f54;
        case 0x141f58u: goto label_141f58;
        case 0x141f5cu: goto label_141f5c;
        case 0x141f60u: goto label_141f60;
        case 0x141f64u: goto label_141f64;
        case 0x141f68u: goto label_141f68;
        case 0x141f6cu: goto label_141f6c;
        case 0x141f70u: goto label_141f70;
        case 0x141f74u: goto label_141f74;
        case 0x141f78u: goto label_141f78;
        case 0x141f7cu: goto label_141f7c;
        case 0x141f80u: goto label_141f80;
        case 0x141f84u: goto label_141f84;
        case 0x141f88u: goto label_141f88;
        case 0x141f8cu: goto label_141f8c;
        case 0x141f90u: goto label_141f90;
        case 0x141f94u: goto label_141f94;
        case 0x141f98u: goto label_141f98;
        case 0x141f9cu: goto label_141f9c;
        case 0x141fa0u: goto label_141fa0;
        case 0x141fa4u: goto label_141fa4;
        case 0x141fa8u: goto label_141fa8;
        case 0x141facu: goto label_141fac;
        case 0x141fb0u: goto label_141fb0;
        case 0x141fb4u: goto label_141fb4;
        case 0x141fb8u: goto label_141fb8;
        case 0x141fbcu: goto label_141fbc;
        case 0x141fc0u: goto label_141fc0;
        case 0x141fc4u: goto label_141fc4;
        case 0x141fc8u: goto label_141fc8;
        case 0x141fccu: goto label_141fcc;
        case 0x141fd0u: goto label_141fd0;
        case 0x141fd4u: goto label_141fd4;
        case 0x141fd8u: goto label_141fd8;
        case 0x141fdcu: goto label_141fdc;
        case 0x141fe0u: goto label_141fe0;
        case 0x141fe4u: goto label_141fe4;
        case 0x141fe8u: goto label_141fe8;
        case 0x141fecu: goto label_141fec;
        case 0x141ff0u: goto label_141ff0;
        case 0x141ff4u: goto label_141ff4;
        case 0x141ff8u: goto label_141ff8;
        case 0x141ffcu: goto label_141ffc;
        case 0x142000u: goto label_142000;
        case 0x142004u: goto label_142004;
        case 0x142008u: goto label_142008;
        case 0x14200cu: goto label_14200c;
        case 0x142010u: goto label_142010;
        case 0x142014u: goto label_142014;
        case 0x142018u: goto label_142018;
        case 0x14201cu: goto label_14201c;
        case 0x142020u: goto label_142020;
        case 0x142024u: goto label_142024;
        case 0x142028u: goto label_142028;
        case 0x14202cu: goto label_14202c;
        case 0x142030u: goto label_142030;
        case 0x142034u: goto label_142034;
        case 0x142038u: goto label_142038;
        case 0x14203cu: goto label_14203c;
        case 0x142040u: goto label_142040;
        case 0x142044u: goto label_142044;
        case 0x142048u: goto label_142048;
        case 0x14204cu: goto label_14204c;
        case 0x142050u: goto label_142050;
        case 0x142054u: goto label_142054;
        case 0x142058u: goto label_142058;
        case 0x14205cu: goto label_14205c;
        case 0x142060u: goto label_142060;
        case 0x142064u: goto label_142064;
        case 0x142068u: goto label_142068;
        case 0x14206cu: goto label_14206c;
        case 0x142070u: goto label_142070;
        case 0x142074u: goto label_142074;
        case 0x142078u: goto label_142078;
        case 0x14207cu: goto label_14207c;
        case 0x142080u: goto label_142080;
        case 0x142084u: goto label_142084;
        case 0x142088u: goto label_142088;
        case 0x14208cu: goto label_14208c;
        case 0x142090u: goto label_142090;
        case 0x142094u: goto label_142094;
        case 0x142098u: goto label_142098;
        case 0x14209cu: goto label_14209c;
        case 0x1420a0u: goto label_1420a0;
        case 0x1420a4u: goto label_1420a4;
        case 0x1420a8u: goto label_1420a8;
        case 0x1420acu: goto label_1420ac;
        case 0x1420b0u: goto label_1420b0;
        case 0x1420b4u: goto label_1420b4;
        case 0x1420b8u: goto label_1420b8;
        case 0x1420bcu: goto label_1420bc;
        case 0x1420c0u: goto label_1420c0;
        case 0x1420c4u: goto label_1420c4;
        case 0x1420c8u: goto label_1420c8;
        case 0x1420ccu: goto label_1420cc;
        case 0x1420d0u: goto label_1420d0;
        case 0x1420d4u: goto label_1420d4;
        case 0x1420d8u: goto label_1420d8;
        case 0x1420dcu: goto label_1420dc;
        case 0x1420e0u: goto label_1420e0;
        case 0x1420e4u: goto label_1420e4;
        case 0x1420e8u: goto label_1420e8;
        case 0x1420ecu: goto label_1420ec;
        case 0x1420f0u: goto label_1420f0;
        case 0x1420f4u: goto label_1420f4;
        case 0x1420f8u: goto label_1420f8;
        case 0x1420fcu: goto label_1420fc;
        case 0x142100u: goto label_142100;
        case 0x142104u: goto label_142104;
        case 0x142108u: goto label_142108;
        case 0x14210cu: goto label_14210c;
        case 0x142110u: goto label_142110;
        case 0x142114u: goto label_142114;
        case 0x142118u: goto label_142118;
        case 0x14211cu: goto label_14211c;
        case 0x142120u: goto label_142120;
        case 0x142124u: goto label_142124;
        case 0x142128u: goto label_142128;
        case 0x14212cu: goto label_14212c;
        case 0x142130u: goto label_142130;
        case 0x142134u: goto label_142134;
        case 0x142138u: goto label_142138;
        case 0x14213cu: goto label_14213c;
        case 0x142140u: goto label_142140;
        case 0x142144u: goto label_142144;
        case 0x142148u: goto label_142148;
        case 0x14214cu: goto label_14214c;
        case 0x142150u: goto label_142150;
        case 0x142154u: goto label_142154;
        case 0x142158u: goto label_142158;
        case 0x14215cu: goto label_14215c;
        case 0x142160u: goto label_142160;
        case 0x142164u: goto label_142164;
        case 0x142168u: goto label_142168;
        case 0x14216cu: goto label_14216c;
        case 0x142170u: goto label_142170;
        case 0x142174u: goto label_142174;
        case 0x142178u: goto label_142178;
        case 0x14217cu: goto label_14217c;
        case 0x142180u: goto label_142180;
        case 0x142184u: goto label_142184;
        case 0x142188u: goto label_142188;
        case 0x14218cu: goto label_14218c;
        case 0x142190u: goto label_142190;
        case 0x142194u: goto label_142194;
        case 0x142198u: goto label_142198;
        case 0x14219cu: goto label_14219c;
        case 0x1421a0u: goto label_1421a0;
        case 0x1421a4u: goto label_1421a4;
        case 0x1421a8u: goto label_1421a8;
        case 0x1421acu: goto label_1421ac;
        case 0x1421b0u: goto label_1421b0;
        case 0x1421b4u: goto label_1421b4;
        case 0x1421b8u: goto label_1421b8;
        case 0x1421bcu: goto label_1421bc;
        case 0x1421c0u: goto label_1421c0;
        case 0x1421c4u: goto label_1421c4;
        case 0x1421c8u: goto label_1421c8;
        case 0x1421ccu: goto label_1421cc;
        case 0x1421d0u: goto label_1421d0;
        case 0x1421d4u: goto label_1421d4;
        case 0x1421d8u: goto label_1421d8;
        case 0x1421dcu: goto label_1421dc;
        case 0x1421e0u: goto label_1421e0;
        case 0x1421e4u: goto label_1421e4;
        case 0x1421e8u: goto label_1421e8;
        case 0x1421ecu: goto label_1421ec;
        case 0x1421f0u: goto label_1421f0;
        case 0x1421f4u: goto label_1421f4;
        case 0x1421f8u: goto label_1421f8;
        case 0x1421fcu: goto label_1421fc;
        case 0x142200u: goto label_142200;
        case 0x142204u: goto label_142204;
        case 0x142208u: goto label_142208;
        case 0x14220cu: goto label_14220c;
        case 0x142210u: goto label_142210;
        case 0x142214u: goto label_142214;
        case 0x142218u: goto label_142218;
        case 0x14221cu: goto label_14221c;
        case 0x142220u: goto label_142220;
        case 0x142224u: goto label_142224;
        case 0x142228u: goto label_142228;
        case 0x14222cu: goto label_14222c;
        case 0x142230u: goto label_142230;
        case 0x142234u: goto label_142234;
        case 0x142238u: goto label_142238;
        case 0x14223cu: goto label_14223c;
        case 0x142240u: goto label_142240;
        case 0x142244u: goto label_142244;
        case 0x142248u: goto label_142248;
        case 0x14224cu: goto label_14224c;
        case 0x142250u: goto label_142250;
        case 0x142254u: goto label_142254;
        case 0x142258u: goto label_142258;
        case 0x14225cu: goto label_14225c;
        case 0x142260u: goto label_142260;
        case 0x142264u: goto label_142264;
        case 0x142268u: goto label_142268;
        case 0x14226cu: goto label_14226c;
        case 0x142270u: goto label_142270;
        case 0x142274u: goto label_142274;
        case 0x142278u: goto label_142278;
        case 0x14227cu: goto label_14227c;
        case 0x142280u: goto label_142280;
        case 0x142284u: goto label_142284;
        case 0x142288u: goto label_142288;
        case 0x14228cu: goto label_14228c;
        case 0x142290u: goto label_142290;
        case 0x142294u: goto label_142294;
        case 0x142298u: goto label_142298;
        case 0x14229cu: goto label_14229c;
        case 0x1422a0u: goto label_1422a0;
        case 0x1422a4u: goto label_1422a4;
        case 0x1422a8u: goto label_1422a8;
        case 0x1422acu: goto label_1422ac;
        case 0x1422b0u: goto label_1422b0;
        case 0x1422b4u: goto label_1422b4;
        case 0x1422b8u: goto label_1422b8;
        case 0x1422bcu: goto label_1422bc;
        case 0x1422c0u: goto label_1422c0;
        case 0x1422c4u: goto label_1422c4;
        case 0x1422c8u: goto label_1422c8;
        case 0x1422ccu: goto label_1422cc;
        case 0x1422d0u: goto label_1422d0;
        case 0x1422d4u: goto label_1422d4;
        case 0x1422d8u: goto label_1422d8;
        case 0x1422dcu: goto label_1422dc;
        case 0x1422e0u: goto label_1422e0;
        case 0x1422e4u: goto label_1422e4;
        case 0x1422e8u: goto label_1422e8;
        case 0x1422ecu: goto label_1422ec;
        case 0x1422f0u: goto label_1422f0;
        case 0x1422f4u: goto label_1422f4;
        case 0x1422f8u: goto label_1422f8;
        case 0x1422fcu: goto label_1422fc;
        case 0x142300u: goto label_142300;
        case 0x142304u: goto label_142304;
        case 0x142308u: goto label_142308;
        case 0x14230cu: goto label_14230c;
        case 0x142310u: goto label_142310;
        case 0x142314u: goto label_142314;
        case 0x142318u: goto label_142318;
        case 0x14231cu: goto label_14231c;
        case 0x142320u: goto label_142320;
        case 0x142324u: goto label_142324;
        case 0x142328u: goto label_142328;
        case 0x14232cu: goto label_14232c;
        case 0x142330u: goto label_142330;
        case 0x142334u: goto label_142334;
        case 0x142338u: goto label_142338;
        case 0x14233cu: goto label_14233c;
        case 0x142340u: goto label_142340;
        case 0x142344u: goto label_142344;
        case 0x142348u: goto label_142348;
        case 0x14234cu: goto label_14234c;
        case 0x142350u: goto label_142350;
        case 0x142354u: goto label_142354;
        case 0x142358u: goto label_142358;
        case 0x14235cu: goto label_14235c;
        case 0x142360u: goto label_142360;
        case 0x142364u: goto label_142364;
        case 0x142368u: goto label_142368;
        case 0x14236cu: goto label_14236c;
        case 0x142370u: goto label_142370;
        case 0x142374u: goto label_142374;
        case 0x142378u: goto label_142378;
        case 0x14237cu: goto label_14237c;
        case 0x142380u: goto label_142380;
        case 0x142384u: goto label_142384;
        case 0x142388u: goto label_142388;
        case 0x14238cu: goto label_14238c;
        case 0x142390u: goto label_142390;
        case 0x142394u: goto label_142394;
        case 0x142398u: goto label_142398;
        case 0x14239cu: goto label_14239c;
        case 0x1423a0u: goto label_1423a0;
        case 0x1423a4u: goto label_1423a4;
        case 0x1423a8u: goto label_1423a8;
        case 0x1423acu: goto label_1423ac;
        case 0x1423b0u: goto label_1423b0;
        case 0x1423b4u: goto label_1423b4;
        case 0x1423b8u: goto label_1423b8;
        case 0x1423bcu: goto label_1423bc;
        case 0x1423c0u: goto label_1423c0;
        case 0x1423c4u: goto label_1423c4;
        case 0x1423c8u: goto label_1423c8;
        case 0x1423ccu: goto label_1423cc;
        case 0x1423d0u: goto label_1423d0;
        case 0x1423d4u: goto label_1423d4;
        case 0x1423d8u: goto label_1423d8;
        case 0x1423dcu: goto label_1423dc;
        case 0x1423e0u: goto label_1423e0;
        case 0x1423e4u: goto label_1423e4;
        case 0x1423e8u: goto label_1423e8;
        case 0x1423ecu: goto label_1423ec;
        case 0x1423f0u: goto label_1423f0;
        case 0x1423f4u: goto label_1423f4;
        case 0x1423f8u: goto label_1423f8;
        case 0x1423fcu: goto label_1423fc;
        case 0x142400u: goto label_142400;
        case 0x142404u: goto label_142404;
        case 0x142408u: goto label_142408;
        case 0x14240cu: goto label_14240c;
        case 0x142410u: goto label_142410;
        case 0x142414u: goto label_142414;
        case 0x142418u: goto label_142418;
        case 0x14241cu: goto label_14241c;
        case 0x142420u: goto label_142420;
        case 0x142424u: goto label_142424;
        case 0x142428u: goto label_142428;
        case 0x14242cu: goto label_14242c;
        case 0x142430u: goto label_142430;
        case 0x142434u: goto label_142434;
        case 0x142438u: goto label_142438;
        case 0x14243cu: goto label_14243c;
        case 0x142440u: goto label_142440;
        case 0x142444u: goto label_142444;
        case 0x142448u: goto label_142448;
        case 0x14244cu: goto label_14244c;
        case 0x142450u: goto label_142450;
        case 0x142454u: goto label_142454;
        case 0x142458u: goto label_142458;
        case 0x14245cu: goto label_14245c;
        case 0x142460u: goto label_142460;
        case 0x142464u: goto label_142464;
        case 0x142468u: goto label_142468;
        case 0x14246cu: goto label_14246c;
        case 0x142470u: goto label_142470;
        case 0x142474u: goto label_142474;
        case 0x142478u: goto label_142478;
        case 0x14247cu: goto label_14247c;
        case 0x142480u: goto label_142480;
        case 0x142484u: goto label_142484;
        case 0x142488u: goto label_142488;
        case 0x14248cu: goto label_14248c;
        case 0x142490u: goto label_142490;
        case 0x142494u: goto label_142494;
        case 0x142498u: goto label_142498;
        case 0x14249cu: goto label_14249c;
        case 0x1424a0u: goto label_1424a0;
        case 0x1424a4u: goto label_1424a4;
        case 0x1424a8u: goto label_1424a8;
        case 0x1424acu: goto label_1424ac;
        case 0x1424b0u: goto label_1424b0;
        case 0x1424b4u: goto label_1424b4;
        case 0x1424b8u: goto label_1424b8;
        case 0x1424bcu: goto label_1424bc;
        case 0x1424c0u: goto label_1424c0;
        case 0x1424c4u: goto label_1424c4;
        case 0x1424c8u: goto label_1424c8;
        case 0x1424ccu: goto label_1424cc;
        case 0x1424d0u: goto label_1424d0;
        case 0x1424d4u: goto label_1424d4;
        case 0x1424d8u: goto label_1424d8;
        case 0x1424dcu: goto label_1424dc;
        case 0x1424e0u: goto label_1424e0;
        case 0x1424e4u: goto label_1424e4;
        case 0x1424e8u: goto label_1424e8;
        case 0x1424ecu: goto label_1424ec;
        case 0x1424f0u: goto label_1424f0;
        case 0x1424f4u: goto label_1424f4;
        case 0x1424f8u: goto label_1424f8;
        case 0x1424fcu: goto label_1424fc;
        case 0x142500u: goto label_142500;
        case 0x142504u: goto label_142504;
        case 0x142508u: goto label_142508;
        case 0x14250cu: goto label_14250c;
        case 0x142510u: goto label_142510;
        case 0x142514u: goto label_142514;
        case 0x142518u: goto label_142518;
        case 0x14251cu: goto label_14251c;
        case 0x142520u: goto label_142520;
        case 0x142524u: goto label_142524;
        case 0x142528u: goto label_142528;
        case 0x14252cu: goto label_14252c;
        case 0x142530u: goto label_142530;
        case 0x142534u: goto label_142534;
        case 0x142538u: goto label_142538;
        case 0x14253cu: goto label_14253c;
        case 0x142540u: goto label_142540;
        case 0x142544u: goto label_142544;
        case 0x142548u: goto label_142548;
        case 0x14254cu: goto label_14254c;
        case 0x142550u: goto label_142550;
        case 0x142554u: goto label_142554;
        case 0x142558u: goto label_142558;
        case 0x14255cu: goto label_14255c;
        case 0x142560u: goto label_142560;
        case 0x142564u: goto label_142564;
        case 0x142568u: goto label_142568;
        case 0x14256cu: goto label_14256c;
        case 0x142570u: goto label_142570;
        case 0x142574u: goto label_142574;
        case 0x142578u: goto label_142578;
        case 0x14257cu: goto label_14257c;
        case 0x142580u: goto label_142580;
        case 0x142584u: goto label_142584;
        case 0x142588u: goto label_142588;
        case 0x14258cu: goto label_14258c;
        case 0x142590u: goto label_142590;
        case 0x142594u: goto label_142594;
        case 0x142598u: goto label_142598;
        case 0x14259cu: goto label_14259c;
        case 0x1425a0u: goto label_1425a0;
        case 0x1425a4u: goto label_1425a4;
        case 0x1425a8u: goto label_1425a8;
        case 0x1425acu: goto label_1425ac;
        case 0x1425b0u: goto label_1425b0;
        case 0x1425b4u: goto label_1425b4;
        case 0x1425b8u: goto label_1425b8;
        case 0x1425bcu: goto label_1425bc;
        case 0x1425c0u: goto label_1425c0;
        case 0x1425c4u: goto label_1425c4;
        case 0x1425c8u: goto label_1425c8;
        case 0x1425ccu: goto label_1425cc;
        case 0x1425d0u: goto label_1425d0;
        case 0x1425d4u: goto label_1425d4;
        case 0x1425d8u: goto label_1425d8;
        case 0x1425dcu: goto label_1425dc;
        case 0x1425e0u: goto label_1425e0;
        case 0x1425e4u: goto label_1425e4;
        case 0x1425e8u: goto label_1425e8;
        case 0x1425ecu: goto label_1425ec;
        case 0x1425f0u: goto label_1425f0;
        case 0x1425f4u: goto label_1425f4;
        case 0x1425f8u: goto label_1425f8;
        case 0x1425fcu: goto label_1425fc;
        case 0x142600u: goto label_142600;
        case 0x142604u: goto label_142604;
        case 0x142608u: goto label_142608;
        case 0x14260cu: goto label_14260c;
        case 0x142610u: goto label_142610;
        case 0x142614u: goto label_142614;
        case 0x142618u: goto label_142618;
        case 0x14261cu: goto label_14261c;
        case 0x142620u: goto label_142620;
        case 0x142624u: goto label_142624;
        case 0x142628u: goto label_142628;
        case 0x14262cu: goto label_14262c;
        case 0x142630u: goto label_142630;
        case 0x142634u: goto label_142634;
        case 0x142638u: goto label_142638;
        case 0x14263cu: goto label_14263c;
        case 0x142640u: goto label_142640;
        case 0x142644u: goto label_142644;
        case 0x142648u: goto label_142648;
        case 0x14264cu: goto label_14264c;
        case 0x142650u: goto label_142650;
        case 0x142654u: goto label_142654;
        case 0x142658u: goto label_142658;
        case 0x14265cu: goto label_14265c;
        case 0x142660u: goto label_142660;
        case 0x142664u: goto label_142664;
        case 0x142668u: goto label_142668;
        case 0x14266cu: goto label_14266c;
        case 0x142670u: goto label_142670;
        case 0x142674u: goto label_142674;
        case 0x142678u: goto label_142678;
        case 0x14267cu: goto label_14267c;
        case 0x142680u: goto label_142680;
        case 0x142684u: goto label_142684;
        case 0x142688u: goto label_142688;
        case 0x14268cu: goto label_14268c;
        case 0x142690u: goto label_142690;
        case 0x142694u: goto label_142694;
        case 0x142698u: goto label_142698;
        case 0x14269cu: goto label_14269c;
        case 0x1426a0u: goto label_1426a0;
        case 0x1426a4u: goto label_1426a4;
        case 0x1426a8u: goto label_1426a8;
        case 0x1426acu: goto label_1426ac;
        case 0x1426b0u: goto label_1426b0;
        case 0x1426b4u: goto label_1426b4;
        case 0x1426b8u: goto label_1426b8;
        case 0x1426bcu: goto label_1426bc;
        case 0x1426c0u: goto label_1426c0;
        case 0x1426c4u: goto label_1426c4;
        case 0x1426c8u: goto label_1426c8;
        case 0x1426ccu: goto label_1426cc;
        case 0x1426d0u: goto label_1426d0;
        case 0x1426d4u: goto label_1426d4;
        case 0x1426d8u: goto label_1426d8;
        case 0x1426dcu: goto label_1426dc;
        case 0x1426e0u: goto label_1426e0;
        case 0x1426e4u: goto label_1426e4;
        case 0x1426e8u: goto label_1426e8;
        case 0x1426ecu: goto label_1426ec;
        case 0x1426f0u: goto label_1426f0;
        case 0x1426f4u: goto label_1426f4;
        case 0x1426f8u: goto label_1426f8;
        case 0x1426fcu: goto label_1426fc;
        case 0x142700u: goto label_142700;
        case 0x142704u: goto label_142704;
        case 0x142708u: goto label_142708;
        case 0x14270cu: goto label_14270c;
        case 0x142710u: goto label_142710;
        case 0x142714u: goto label_142714;
        case 0x142718u: goto label_142718;
        case 0x14271cu: goto label_14271c;
        case 0x142720u: goto label_142720;
        case 0x142724u: goto label_142724;
        case 0x142728u: goto label_142728;
        case 0x14272cu: goto label_14272c;
        case 0x142730u: goto label_142730;
        case 0x142734u: goto label_142734;
        case 0x142738u: goto label_142738;
        case 0x14273cu: goto label_14273c;
        case 0x142740u: goto label_142740;
        case 0x142744u: goto label_142744;
        case 0x142748u: goto label_142748;
        case 0x14274cu: goto label_14274c;
        case 0x142750u: goto label_142750;
        case 0x142754u: goto label_142754;
        case 0x142758u: goto label_142758;
        case 0x14275cu: goto label_14275c;
        case 0x142760u: goto label_142760;
        case 0x142764u: goto label_142764;
        case 0x142768u: goto label_142768;
        case 0x14276cu: goto label_14276c;
        case 0x142770u: goto label_142770;
        case 0x142774u: goto label_142774;
        case 0x142778u: goto label_142778;
        case 0x14277cu: goto label_14277c;
        case 0x142780u: goto label_142780;
        case 0x142784u: goto label_142784;
        case 0x142788u: goto label_142788;
        case 0x14278cu: goto label_14278c;
        case 0x142790u: goto label_142790;
        case 0x142794u: goto label_142794;
        case 0x142798u: goto label_142798;
        case 0x14279cu: goto label_14279c;
        case 0x1427a0u: goto label_1427a0;
        case 0x1427a4u: goto label_1427a4;
        case 0x1427a8u: goto label_1427a8;
        case 0x1427acu: goto label_1427ac;
        case 0x1427b0u: goto label_1427b0;
        case 0x1427b4u: goto label_1427b4;
        case 0x1427b8u: goto label_1427b8;
        case 0x1427bcu: goto label_1427bc;
        case 0x1427c0u: goto label_1427c0;
        case 0x1427c4u: goto label_1427c4;
        case 0x1427c8u: goto label_1427c8;
        case 0x1427ccu: goto label_1427cc;
        case 0x1427d0u: goto label_1427d0;
        case 0x1427d4u: goto label_1427d4;
        case 0x1427d8u: goto label_1427d8;
        case 0x1427dcu: goto label_1427dc;
        case 0x1427e0u: goto label_1427e0;
        case 0x1427e4u: goto label_1427e4;
        case 0x1427e8u: goto label_1427e8;
        case 0x1427ecu: goto label_1427ec;
        case 0x1427f0u: goto label_1427f0;
        case 0x1427f4u: goto label_1427f4;
        case 0x1427f8u: goto label_1427f8;
        case 0x1427fcu: goto label_1427fc;
        case 0x142800u: goto label_142800;
        case 0x142804u: goto label_142804;
        case 0x142808u: goto label_142808;
        case 0x14280cu: goto label_14280c;
        case 0x142810u: goto label_142810;
        case 0x142814u: goto label_142814;
        case 0x142818u: goto label_142818;
        case 0x14281cu: goto label_14281c;
        case 0x142820u: goto label_142820;
        case 0x142824u: goto label_142824;
        case 0x142828u: goto label_142828;
        case 0x14282cu: goto label_14282c;
        case 0x142830u: goto label_142830;
        case 0x142834u: goto label_142834;
        case 0x142838u: goto label_142838;
        case 0x14283cu: goto label_14283c;
        case 0x142840u: goto label_142840;
        case 0x142844u: goto label_142844;
        case 0x142848u: goto label_142848;
        case 0x14284cu: goto label_14284c;
        case 0x142850u: goto label_142850;
        case 0x142854u: goto label_142854;
        case 0x142858u: goto label_142858;
        case 0x14285cu: goto label_14285c;
        case 0x142860u: goto label_142860;
        case 0x142864u: goto label_142864;
        case 0x142868u: goto label_142868;
        case 0x14286cu: goto label_14286c;
        case 0x142870u: goto label_142870;
        case 0x142874u: goto label_142874;
        case 0x142878u: goto label_142878;
        case 0x14287cu: goto label_14287c;
        case 0x142880u: goto label_142880;
        case 0x142884u: goto label_142884;
        case 0x142888u: goto label_142888;
        case 0x14288cu: goto label_14288c;
        case 0x142890u: goto label_142890;
        case 0x142894u: goto label_142894;
        case 0x142898u: goto label_142898;
        case 0x14289cu: goto label_14289c;
        case 0x1428a0u: goto label_1428a0;
        case 0x1428a4u: goto label_1428a4;
        case 0x1428a8u: goto label_1428a8;
        case 0x1428acu: goto label_1428ac;
        case 0x1428b0u: goto label_1428b0;
        case 0x1428b4u: goto label_1428b4;
        case 0x1428b8u: goto label_1428b8;
        case 0x1428bcu: goto label_1428bc;
        case 0x1428c0u: goto label_1428c0;
        case 0x1428c4u: goto label_1428c4;
        case 0x1428c8u: goto label_1428c8;
        case 0x1428ccu: goto label_1428cc;
        case 0x1428d0u: goto label_1428d0;
        case 0x1428d4u: goto label_1428d4;
        case 0x1428d8u: goto label_1428d8;
        case 0x1428dcu: goto label_1428dc;
        case 0x1428e0u: goto label_1428e0;
        case 0x1428e4u: goto label_1428e4;
        case 0x1428e8u: goto label_1428e8;
        case 0x1428ecu: goto label_1428ec;
        case 0x1428f0u: goto label_1428f0;
        case 0x1428f4u: goto label_1428f4;
        case 0x1428f8u: goto label_1428f8;
        case 0x1428fcu: goto label_1428fc;
        case 0x142900u: goto label_142900;
        case 0x142904u: goto label_142904;
        case 0x142908u: goto label_142908;
        case 0x14290cu: goto label_14290c;
        case 0x142910u: goto label_142910;
        case 0x142914u: goto label_142914;
        case 0x142918u: goto label_142918;
        case 0x14291cu: goto label_14291c;
        case 0x142920u: goto label_142920;
        case 0x142924u: goto label_142924;
        case 0x142928u: goto label_142928;
        case 0x14292cu: goto label_14292c;
        case 0x142930u: goto label_142930;
        case 0x142934u: goto label_142934;
        case 0x142938u: goto label_142938;
        case 0x14293cu: goto label_14293c;
        case 0x142940u: goto label_142940;
        case 0x142944u: goto label_142944;
        case 0x142948u: goto label_142948;
        case 0x14294cu: goto label_14294c;
        case 0x142950u: goto label_142950;
        case 0x142954u: goto label_142954;
        case 0x142958u: goto label_142958;
        case 0x14295cu: goto label_14295c;
        case 0x142960u: goto label_142960;
        case 0x142964u: goto label_142964;
        case 0x142968u: goto label_142968;
        case 0x14296cu: goto label_14296c;
        case 0x142970u: goto label_142970;
        case 0x142974u: goto label_142974;
        case 0x142978u: goto label_142978;
        case 0x14297cu: goto label_14297c;
        case 0x142980u: goto label_142980;
        case 0x142984u: goto label_142984;
        case 0x142988u: goto label_142988;
        case 0x14298cu: goto label_14298c;
        case 0x142990u: goto label_142990;
        case 0x142994u: goto label_142994;
        case 0x142998u: goto label_142998;
        case 0x14299cu: goto label_14299c;
        case 0x1429a0u: goto label_1429a0;
        case 0x1429a4u: goto label_1429a4;
        case 0x1429a8u: goto label_1429a8;
        case 0x1429acu: goto label_1429ac;
        case 0x1429b0u: goto label_1429b0;
        case 0x1429b4u: goto label_1429b4;
        case 0x1429b8u: goto label_1429b8;
        case 0x1429bcu: goto label_1429bc;
        case 0x1429c0u: goto label_1429c0;
        case 0x1429c4u: goto label_1429c4;
        case 0x1429c8u: goto label_1429c8;
        case 0x1429ccu: goto label_1429cc;
        case 0x1429d0u: goto label_1429d0;
        case 0x1429d4u: goto label_1429d4;
        case 0x1429d8u: goto label_1429d8;
        case 0x1429dcu: goto label_1429dc;
        case 0x1429e0u: goto label_1429e0;
        case 0x1429e4u: goto label_1429e4;
        case 0x1429e8u: goto label_1429e8;
        case 0x1429ecu: goto label_1429ec;
        case 0x1429f0u: goto label_1429f0;
        case 0x1429f4u: goto label_1429f4;
        case 0x1429f8u: goto label_1429f8;
        case 0x1429fcu: goto label_1429fc;
        case 0x142a00u: goto label_142a00;
        case 0x142a04u: goto label_142a04;
        case 0x142a08u: goto label_142a08;
        case 0x142a0cu: goto label_142a0c;
        case 0x142a10u: goto label_142a10;
        case 0x142a14u: goto label_142a14;
        case 0x142a18u: goto label_142a18;
        case 0x142a1cu: goto label_142a1c;
        case 0x142a20u: goto label_142a20;
        case 0x142a24u: goto label_142a24;
        case 0x142a28u: goto label_142a28;
        case 0x142a2cu: goto label_142a2c;
        case 0x142a30u: goto label_142a30;
        case 0x142a34u: goto label_142a34;
        case 0x142a38u: goto label_142a38;
        case 0x142a3cu: goto label_142a3c;
        case 0x142a40u: goto label_142a40;
        case 0x142a44u: goto label_142a44;
        case 0x142a48u: goto label_142a48;
        case 0x142a4cu: goto label_142a4c;
        case 0x142a50u: goto label_142a50;
        case 0x142a54u: goto label_142a54;
        case 0x142a58u: goto label_142a58;
        case 0x142a5cu: goto label_142a5c;
        case 0x142a60u: goto label_142a60;
        case 0x142a64u: goto label_142a64;
        case 0x142a68u: goto label_142a68;
        case 0x142a6cu: goto label_142a6c;
        case 0x142a70u: goto label_142a70;
        case 0x142a74u: goto label_142a74;
        case 0x142a78u: goto label_142a78;
        case 0x142a7cu: goto label_142a7c;
        case 0x142a80u: goto label_142a80;
        case 0x142a84u: goto label_142a84;
        case 0x142a88u: goto label_142a88;
        case 0x142a8cu: goto label_142a8c;
        case 0x142a90u: goto label_142a90;
        case 0x142a94u: goto label_142a94;
        case 0x142a98u: goto label_142a98;
        case 0x142a9cu: goto label_142a9c;
        case 0x142aa0u: goto label_142aa0;
        case 0x142aa4u: goto label_142aa4;
        case 0x142aa8u: goto label_142aa8;
        case 0x142aacu: goto label_142aac;
        case 0x142ab0u: goto label_142ab0;
        case 0x142ab4u: goto label_142ab4;
        case 0x142ab8u: goto label_142ab8;
        case 0x142abcu: goto label_142abc;
        case 0x142ac0u: goto label_142ac0;
        case 0x142ac4u: goto label_142ac4;
        case 0x142ac8u: goto label_142ac8;
        case 0x142accu: goto label_142acc;
        case 0x142ad0u: goto label_142ad0;
        case 0x142ad4u: goto label_142ad4;
        case 0x142ad8u: goto label_142ad8;
        case 0x142adcu: goto label_142adc;
        case 0x142ae0u: goto label_142ae0;
        case 0x142ae4u: goto label_142ae4;
        case 0x142ae8u: goto label_142ae8;
        case 0x142aecu: goto label_142aec;
        case 0x142af0u: goto label_142af0;
        case 0x142af4u: goto label_142af4;
        case 0x142af8u: goto label_142af8;
        case 0x142afcu: goto label_142afc;
        case 0x142b00u: goto label_142b00;
        case 0x142b04u: goto label_142b04;
        case 0x142b08u: goto label_142b08;
        case 0x142b0cu: goto label_142b0c;
        case 0x142b10u: goto label_142b10;
        case 0x142b14u: goto label_142b14;
        case 0x142b18u: goto label_142b18;
        case 0x142b1cu: goto label_142b1c;
        case 0x142b20u: goto label_142b20;
        case 0x142b24u: goto label_142b24;
        case 0x142b28u: goto label_142b28;
        case 0x142b2cu: goto label_142b2c;
        case 0x142b30u: goto label_142b30;
        case 0x142b34u: goto label_142b34;
        case 0x142b38u: goto label_142b38;
        case 0x142b3cu: goto label_142b3c;
        case 0x142b40u: goto label_142b40;
        case 0x142b44u: goto label_142b44;
        case 0x142b48u: goto label_142b48;
        case 0x142b4cu: goto label_142b4c;
        case 0x142b50u: goto label_142b50;
        case 0x142b54u: goto label_142b54;
        case 0x142b58u: goto label_142b58;
        case 0x142b5cu: goto label_142b5c;
        case 0x142b60u: goto label_142b60;
        case 0x142b64u: goto label_142b64;
        case 0x142b68u: goto label_142b68;
        case 0x142b6cu: goto label_142b6c;
        case 0x142b70u: goto label_142b70;
        case 0x142b74u: goto label_142b74;
        case 0x142b78u: goto label_142b78;
        case 0x142b7cu: goto label_142b7c;
        case 0x142b80u: goto label_142b80;
        case 0x142b84u: goto label_142b84;
        case 0x142b88u: goto label_142b88;
        case 0x142b8cu: goto label_142b8c;
        case 0x142b90u: goto label_142b90;
        case 0x142b94u: goto label_142b94;
        case 0x142b98u: goto label_142b98;
        case 0x142b9cu: goto label_142b9c;
        case 0x142ba0u: goto label_142ba0;
        case 0x142ba4u: goto label_142ba4;
        case 0x142ba8u: goto label_142ba8;
        case 0x142bacu: goto label_142bac;
        case 0x142bb0u: goto label_142bb0;
        case 0x142bb4u: goto label_142bb4;
        case 0x142bb8u: goto label_142bb8;
        case 0x142bbcu: goto label_142bbc;
        case 0x142bc0u: goto label_142bc0;
        case 0x142bc4u: goto label_142bc4;
        case 0x142bc8u: goto label_142bc8;
        case 0x142bccu: goto label_142bcc;
        case 0x142bd0u: goto label_142bd0;
        case 0x142bd4u: goto label_142bd4;
        case 0x142bd8u: goto label_142bd8;
        case 0x142bdcu: goto label_142bdc;
        case 0x142be0u: goto label_142be0;
        case 0x142be4u: goto label_142be4;
        case 0x142be8u: goto label_142be8;
        case 0x142becu: goto label_142bec;
        case 0x142bf0u: goto label_142bf0;
        case 0x142bf4u: goto label_142bf4;
        case 0x142bf8u: goto label_142bf8;
        case 0x142bfcu: goto label_142bfc;
        case 0x142c00u: goto label_142c00;
        case 0x142c04u: goto label_142c04;
        case 0x142c08u: goto label_142c08;
        case 0x142c0cu: goto label_142c0c;
        case 0x142c10u: goto label_142c10;
        case 0x142c14u: goto label_142c14;
        case 0x142c18u: goto label_142c18;
        case 0x142c1cu: goto label_142c1c;
        case 0x142c20u: goto label_142c20;
        case 0x142c24u: goto label_142c24;
        case 0x142c28u: goto label_142c28;
        case 0x142c2cu: goto label_142c2c;
        case 0x142c30u: goto label_142c30;
        case 0x142c34u: goto label_142c34;
        case 0x142c38u: goto label_142c38;
        case 0x142c3cu: goto label_142c3c;
        case 0x142c40u: goto label_142c40;
        case 0x142c44u: goto label_142c44;
        case 0x142c48u: goto label_142c48;
        case 0x142c4cu: goto label_142c4c;
        case 0x142c50u: goto label_142c50;
        case 0x142c54u: goto label_142c54;
        case 0x142c58u: goto label_142c58;
        case 0x142c5cu: goto label_142c5c;
        case 0x142c60u: goto label_142c60;
        case 0x142c64u: goto label_142c64;
        case 0x142c68u: goto label_142c68;
        case 0x142c6cu: goto label_142c6c;
        case 0x142c70u: goto label_142c70;
        case 0x142c74u: goto label_142c74;
        case 0x142c78u: goto label_142c78;
        case 0x142c7cu: goto label_142c7c;
        case 0x142c80u: goto label_142c80;
        case 0x142c84u: goto label_142c84;
        case 0x142c88u: goto label_142c88;
        case 0x142c8cu: goto label_142c8c;
        case 0x142c90u: goto label_142c90;
        case 0x142c94u: goto label_142c94;
        case 0x142c98u: goto label_142c98;
        case 0x142c9cu: goto label_142c9c;
        case 0x142ca0u: goto label_142ca0;
        case 0x142ca4u: goto label_142ca4;
        case 0x142ca8u: goto label_142ca8;
        case 0x142cacu: goto label_142cac;
        case 0x142cb0u: goto label_142cb0;
        case 0x142cb4u: goto label_142cb4;
        case 0x142cb8u: goto label_142cb8;
        case 0x142cbcu: goto label_142cbc;
        case 0x142cc0u: goto label_142cc0;
        case 0x142cc4u: goto label_142cc4;
        case 0x142cc8u: goto label_142cc8;
        case 0x142cccu: goto label_142ccc;
        case 0x142cd0u: goto label_142cd0;
        case 0x142cd4u: goto label_142cd4;
        case 0x142cd8u: goto label_142cd8;
        case 0x142cdcu: goto label_142cdc;
        case 0x142ce0u: goto label_142ce0;
        case 0x142ce4u: goto label_142ce4;
        case 0x142ce8u: goto label_142ce8;
        case 0x142cecu: goto label_142cec;
        case 0x142cf0u: goto label_142cf0;
        case 0x142cf4u: goto label_142cf4;
        case 0x142cf8u: goto label_142cf8;
        case 0x142cfcu: goto label_142cfc;
        case 0x142d00u: goto label_142d00;
        case 0x142d04u: goto label_142d04;
        case 0x142d08u: goto label_142d08;
        case 0x142d0cu: goto label_142d0c;
        case 0x142d10u: goto label_142d10;
        case 0x142d14u: goto label_142d14;
        case 0x142d18u: goto label_142d18;
        case 0x142d1cu: goto label_142d1c;
        case 0x142d20u: goto label_142d20;
        case 0x142d24u: goto label_142d24;
        case 0x142d28u: goto label_142d28;
        case 0x142d2cu: goto label_142d2c;
        case 0x142d30u: goto label_142d30;
        case 0x142d34u: goto label_142d34;
        case 0x142d38u: goto label_142d38;
        case 0x142d3cu: goto label_142d3c;
        case 0x142d40u: goto label_142d40;
        case 0x142d44u: goto label_142d44;
        case 0x142d48u: goto label_142d48;
        case 0x142d4cu: goto label_142d4c;
        case 0x142d50u: goto label_142d50;
        case 0x142d54u: goto label_142d54;
        case 0x142d58u: goto label_142d58;
        case 0x142d5cu: goto label_142d5c;
        case 0x142d60u: goto label_142d60;
        case 0x142d64u: goto label_142d64;
        case 0x142d68u: goto label_142d68;
        case 0x142d6cu: goto label_142d6c;
        case 0x142d70u: goto label_142d70;
        case 0x142d74u: goto label_142d74;
        case 0x142d78u: goto label_142d78;
        case 0x142d7cu: goto label_142d7c;
        case 0x142d80u: goto label_142d80;
        case 0x142d84u: goto label_142d84;
        case 0x142d88u: goto label_142d88;
        case 0x142d8cu: goto label_142d8c;
        case 0x142d90u: goto label_142d90;
        case 0x142d94u: goto label_142d94;
        case 0x142d98u: goto label_142d98;
        case 0x142d9cu: goto label_142d9c;
        case 0x142da0u: goto label_142da0;
        case 0x142da4u: goto label_142da4;
        case 0x142da8u: goto label_142da8;
        case 0x142dacu: goto label_142dac;
        case 0x142db0u: goto label_142db0;
        case 0x142db4u: goto label_142db4;
        case 0x142db8u: goto label_142db8;
        case 0x142dbcu: goto label_142dbc;
        case 0x142dc0u: goto label_142dc0;
        case 0x142dc4u: goto label_142dc4;
        case 0x142dc8u: goto label_142dc8;
        case 0x142dccu: goto label_142dcc;
        case 0x142dd0u: goto label_142dd0;
        case 0x142dd4u: goto label_142dd4;
        case 0x142dd8u: goto label_142dd8;
        case 0x142ddcu: goto label_142ddc;
        case 0x142de0u: goto label_142de0;
        case 0x142de4u: goto label_142de4;
        case 0x142de8u: goto label_142de8;
        case 0x142decu: goto label_142dec;
        case 0x142df0u: goto label_142df0;
        case 0x142df4u: goto label_142df4;
        case 0x142df8u: goto label_142df8;
        case 0x142dfcu: goto label_142dfc;
        case 0x142e00u: goto label_142e00;
        case 0x142e04u: goto label_142e04;
        case 0x142e08u: goto label_142e08;
        case 0x142e0cu: goto label_142e0c;
        case 0x142e10u: goto label_142e10;
        case 0x142e14u: goto label_142e14;
        case 0x142e18u: goto label_142e18;
        case 0x142e1cu: goto label_142e1c;
        case 0x142e20u: goto label_142e20;
        case 0x142e24u: goto label_142e24;
        case 0x142e28u: goto label_142e28;
        case 0x142e2cu: goto label_142e2c;
        case 0x142e30u: goto label_142e30;
        case 0x142e34u: goto label_142e34;
        case 0x142e38u: goto label_142e38;
        case 0x142e3cu: goto label_142e3c;
        case 0x142e40u: goto label_142e40;
        case 0x142e44u: goto label_142e44;
        case 0x142e48u: goto label_142e48;
        case 0x142e4cu: goto label_142e4c;
        case 0x142e50u: goto label_142e50;
        case 0x142e54u: goto label_142e54;
        case 0x142e58u: goto label_142e58;
        case 0x142e5cu: goto label_142e5c;
        case 0x142e60u: goto label_142e60;
        case 0x142e64u: goto label_142e64;
        case 0x142e68u: goto label_142e68;
        case 0x142e6cu: goto label_142e6c;
        case 0x142e70u: goto label_142e70;
        case 0x142e74u: goto label_142e74;
        case 0x142e78u: goto label_142e78;
        case 0x142e7cu: goto label_142e7c;
        case 0x142e80u: goto label_142e80;
        case 0x142e84u: goto label_142e84;
        case 0x142e88u: goto label_142e88;
        case 0x142e8cu: goto label_142e8c;
        case 0x142e90u: goto label_142e90;
        case 0x142e94u: goto label_142e94;
        case 0x142e98u: goto label_142e98;
        case 0x142e9cu: goto label_142e9c;
        case 0x142ea0u: goto label_142ea0;
        case 0x142ea4u: goto label_142ea4;
        case 0x142ea8u: goto label_142ea8;
        case 0x142eacu: goto label_142eac;
        case 0x142eb0u: goto label_142eb0;
        case 0x142eb4u: goto label_142eb4;
        case 0x142eb8u: goto label_142eb8;
        case 0x142ebcu: goto label_142ebc;
        case 0x142ec0u: goto label_142ec0;
        case 0x142ec4u: goto label_142ec4;
        case 0x142ec8u: goto label_142ec8;
        case 0x142eccu: goto label_142ecc;
        case 0x142ed0u: goto label_142ed0;
        case 0x142ed4u: goto label_142ed4;
        case 0x142ed8u: goto label_142ed8;
        case 0x142edcu: goto label_142edc;
        case 0x142ee0u: goto label_142ee0;
        case 0x142ee4u: goto label_142ee4;
        case 0x142ee8u: goto label_142ee8;
        case 0x142eecu: goto label_142eec;
        case 0x142ef0u: goto label_142ef0;
        case 0x142ef4u: goto label_142ef4;
        case 0x142ef8u: goto label_142ef8;
        case 0x142efcu: goto label_142efc;
        case 0x142f00u: goto label_142f00;
        case 0x142f04u: goto label_142f04;
        case 0x142f08u: goto label_142f08;
        case 0x142f0cu: goto label_142f0c;
        case 0x142f10u: goto label_142f10;
        case 0x142f14u: goto label_142f14;
        case 0x142f18u: goto label_142f18;
        case 0x142f1cu: goto label_142f1c;
        case 0x142f20u: goto label_142f20;
        case 0x142f24u: goto label_142f24;
        case 0x142f28u: goto label_142f28;
        case 0x142f2cu: goto label_142f2c;
        case 0x142f30u: goto label_142f30;
        case 0x142f34u: goto label_142f34;
        case 0x142f38u: goto label_142f38;
        case 0x142f3cu: goto label_142f3c;
        case 0x142f40u: goto label_142f40;
        case 0x142f44u: goto label_142f44;
        case 0x142f48u: goto label_142f48;
        case 0x142f4cu: goto label_142f4c;
        case 0x142f50u: goto label_142f50;
        case 0x142f54u: goto label_142f54;
        case 0x142f58u: goto label_142f58;
        case 0x142f5cu: goto label_142f5c;
        case 0x142f60u: goto label_142f60;
        case 0x142f64u: goto label_142f64;
        case 0x142f68u: goto label_142f68;
        case 0x142f6cu: goto label_142f6c;
        case 0x142f70u: goto label_142f70;
        case 0x142f74u: goto label_142f74;
        case 0x142f78u: goto label_142f78;
        case 0x142f7cu: goto label_142f7c;
        case 0x142f80u: goto label_142f80;
        case 0x142f84u: goto label_142f84;
        case 0x142f88u: goto label_142f88;
        case 0x142f8cu: goto label_142f8c;
        case 0x142f90u: goto label_142f90;
        case 0x142f94u: goto label_142f94;
        case 0x142f98u: goto label_142f98;
        case 0x142f9cu: goto label_142f9c;
        case 0x142fa0u: goto label_142fa0;
        case 0x142fa4u: goto label_142fa4;
        case 0x142fa8u: goto label_142fa8;
        case 0x142facu: goto label_142fac;
        case 0x142fb0u: goto label_142fb0;
        case 0x142fb4u: goto label_142fb4;
        case 0x142fb8u: goto label_142fb8;
        case 0x142fbcu: goto label_142fbc;
        case 0x142fc0u: goto label_142fc0;
        case 0x142fc4u: goto label_142fc4;
        case 0x142fc8u: goto label_142fc8;
        case 0x142fccu: goto label_142fcc;
        case 0x142fd0u: goto label_142fd0;
        case 0x142fd4u: goto label_142fd4;
        case 0x142fd8u: goto label_142fd8;
        case 0x142fdcu: goto label_142fdc;
        case 0x142fe0u: goto label_142fe0;
        case 0x142fe4u: goto label_142fe4;
        case 0x142fe8u: goto label_142fe8;
        case 0x142fecu: goto label_142fec;
        case 0x142ff0u: goto label_142ff0;
        case 0x142ff4u: goto label_142ff4;
        case 0x142ff8u: goto label_142ff8;
        case 0x142ffcu: goto label_142ffc;
        case 0x143000u: goto label_143000;
        case 0x143004u: goto label_143004;
        case 0x143008u: goto label_143008;
        case 0x14300cu: goto label_14300c;
        case 0x143010u: goto label_143010;
        case 0x143014u: goto label_143014;
        case 0x143018u: goto label_143018;
        case 0x14301cu: goto label_14301c;
        case 0x143020u: goto label_143020;
        case 0x143024u: goto label_143024;
        case 0x143028u: goto label_143028;
        case 0x14302cu: goto label_14302c;
        case 0x143030u: goto label_143030;
        case 0x143034u: goto label_143034;
        case 0x143038u: goto label_143038;
        case 0x14303cu: goto label_14303c;
        case 0x143040u: goto label_143040;
        case 0x143044u: goto label_143044;
        default: break;
    }

    ctx->pc = 0x13ee90u;

label_13ee90:
    // 0x13ee90: 0x27bdfc30  addiu       $sp, $sp, -0x3D0
    ctx->pc = 0x13ee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966320));
label_13ee94:
    // 0x13ee94: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x13ee94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
label_13ee98:
    // 0x13ee98: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13ee98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_13ee9c:
    // 0x13ee9c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13ee9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_13eea0:
    // 0x13eea0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13eea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_13eea4:
    // 0x13eea4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13eea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_13eea8:
    // 0x13eea8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13eea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_13eeac:
    // 0x13eeac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13eeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_13eeb0:
    // 0x13eeb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13eeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13eeb4:
    // 0x13eeb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13eeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13eeb8:
    // 0x13eeb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13eeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13eebc:
    // 0x13eebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13eebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13eec0:
    // 0x13eec0: 0xc4206ce4  lwc1        $f0, 0x6CE4($at)
    ctx->pc = 0x13eec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 27876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13eec4:
    // 0x13eec4: 0xafa60250  sw          $a2, 0x250($sp)
    ctx->pc = 0x13eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 6));
label_13eec8:
    // 0x13eec8: 0xafa4026c  sw          $a0, 0x26C($sp)
    ctx->pc = 0x13eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
label_13eecc:
    // 0x13eecc: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x13eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_13eed0:
    // 0x13eed0: 0x8c930008  lw          $s3, 0x8($a0)
    ctx->pc = 0x13eed0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_13eed4:
    // 0x13eed4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13eed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_13eed8:
    // 0x13eed8: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x13eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
label_13eedc:
    // 0x13eedc: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x13eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
label_13eee0:
    // 0x13eee0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x13eee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_13eee4:
    // 0x13eee4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13eee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13eee8:
    // 0x13eee8: 0xafa5024c  sw          $a1, 0x24C($sp)
    ctx->pc = 0x13eee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 5));
label_13eeec:
    // 0x13eeec: 0x3c03414c  lui         $v1, 0x414C
    ctx->pc = 0x13eeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16716 << 16));
label_13eef0:
    // 0x13eef0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x13eef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_13eef4:
    // 0x13eef4: 0x8fa2024c  lw          $v0, 0x24C($sp)
    ctx->pc = 0x13eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_13eef8:
    // 0x13eef8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x13eef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_13eefc:
    // 0x13eefc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13eefcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13ef00:
    // 0x13ef00: 0x0  nop
    ctx->pc = 0x13ef00u;
    // NOP
label_13ef04:
    // 0x13ef04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13ef04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_13ef08:
    // 0x13ef08: 0x8c23cee0  lw          $v1, -0x3120($at)
    ctx->pc = 0x13ef08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954720)));
label_13ef0c:
    // 0x13ef0c: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x13ef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
label_13ef10:
    // 0x13ef10: 0x8fa2024c  lw          $v0, 0x24C($sp)
    ctx->pc = 0x13ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_13ef14:
    // 0x13ef14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13ef14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_13ef18:
    // 0x13ef18: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x13ef18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_13ef1c:
    // 0x13ef1c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x13ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_13ef20:
    // 0x13ef20: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x13ef20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_13ef24:
    // 0x13ef24: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x13ef24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
label_13ef28:
    // 0x13ef28: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x13ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_13ef2c:
    // 0x13ef2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13ef2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_13ef30:
    // 0x13ef30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_13ef34:
    if (ctx->pc == 0x13EF34u) {
        ctx->pc = 0x13EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF30u;
        // 0x13ef34: 0xe7808540  swc1        $f0, -0x7AC0($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294935872), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EF38u;
        goto label_13ef38;
    }
    ctx->pc = 0x13EF30u;
    {
        const bool branch_taken_0x13ef30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF30u;
        // 0x13ef34: 0xe7808540  swc1        $f0, -0x7AC0($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294935872), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef30) {
            ctx->pc = 0x13EF50u;
            goto label_13ef50;
        }
    }
    ctx->pc = 0x13EF38u;
label_13ef38:
    // 0x13ef38: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x13ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_13ef3c:
    // 0x13ef3c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x13ef3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_13ef40:
    // 0x13ef40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13ef44:
    if (ctx->pc == 0x13EF44u) {
        ctx->pc = 0x13EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF40u;
        // 0x13ef44: 0x27a40370  addiu       $a0, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EF48u;
        goto label_13ef48;
    }
    ctx->pc = 0x13EF40u;
    {
        const bool branch_taken_0x13ef40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF40u;
        // 0x13ef44: 0x27a40370  addiu       $a0, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef40) {
            ctx->pc = 0x13EF50u;
            goto label_13ef50;
        }
    }
    ctx->pc = 0x13EF48u;
label_13ef48:
    // 0x13ef48: 0xc04fb5c  jal         func_13ED70
label_13ef4c:
    if (ctx->pc == 0x13EF4Cu) {
        ctx->pc = 0x13EF50u;
        goto label_13ef50;
    }
    ctx->pc = 0x13EF48u;
    SET_GPR_U32(ctx, 31, 0x13EF50u);
    ctx->pc = 0x13ED70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ED70u, 0x13EF48u, 0x13EF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF50u;
label_13ef50:
    // 0x13ef50: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x13ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_13ef54:
    // 0x13ef54: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x13ef54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_13ef58:
    // 0x13ef58: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_13ef5c:
    if (ctx->pc == 0x13EF5Cu) {
        ctx->pc = 0x13EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF58u;
        // 0x13ef5c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EF60u;
        goto label_13ef60;
    }
    ctx->pc = 0x13EF58u;
    {
        const bool branch_taken_0x13ef58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF58u;
        // 0x13ef5c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef58) {
            ctx->pc = 0x13EFD8u;
            goto label_13efd8;
        }
    }
    ctx->pc = 0x13EF60u;
label_13ef60:
    // 0x13ef60: 0x34028002  ori         $v0, $zero, 0x8002
    ctx->pc = 0x13ef60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
label_13ef64:
    // 0x13ef64: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13ef64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_13ef68:
    // 0x13ef68: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x13ef68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_13ef6c:
    // 0x13ef6c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x13ef6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13ef70:
    // 0x13ef70: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x13ef70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_13ef74:
    // 0x13ef74: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x13ef74u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_13ef78:
    // 0x13ef78: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x13ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_13ef7c:
    // 0x13ef7c: 0xa6840008  sh          $a0, 0x8($s4)
    ctx->pc = 0x13ef7cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 4));
label_13ef80:
    // 0x13ef80: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x13ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_13ef84:
    // 0x13ef84: 0x8c24f014  lw          $a0, -0xFEC($at)
    ctx->pc = 0x13ef84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
label_13ef88:
    // 0x13ef88: 0xdc840040  ld          $a0, 0x40($a0)
    ctx->pc = 0x13ef88u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 64)));
label_13ef8c:
    // 0x13ef8c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x13ef8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_13ef90:
    // 0x13ef90: 0xfe840010  sd          $a0, 0x10($s4)
    ctx->pc = 0x13ef90u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 4));
label_13ef94:
    // 0x13ef94: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x13ef94u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_13ef98:
    // 0x13ef98: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x13ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_13ef9c:
    // 0x13ef9c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x13ef9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_13efa0:
    // 0x13efa0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x13efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_13efa4:
    // 0x13efa4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x13efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_13efa8:
    // 0x13efa8: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x13efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_13efac:
    // 0x13efac: 0x8c22f014  lw          $v0, -0xFEC($at)
    ctx->pc = 0x13efacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
label_13efb0:
    // 0x13efb0: 0xdc420040  ld          $v0, 0x40($v0)
    ctx->pc = 0x13efb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 64)));
label_13efb4:
    // 0x13efb4: 0xfe820020  sd          $v0, 0x20($s4)
    ctx->pc = 0x13efb4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 2));
label_13efb8:
    // 0x13efb8: 0xfe830028  sd          $v1, 0x28($s4)
    ctx->pc = 0x13efb8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 3));
label_13efbc:
    // 0x13efbc: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x13efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_13efc0:
    // 0x13efc0: 0x84430010  lh          $v1, 0x10($v0)
    ctx->pc = 0x13efc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_13efc4:
    // 0x13efc4: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x13efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_13efc8:
    // 0x13efc8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x13efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13efcc:
    // 0x13efcc: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x13efccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_13efd0:
    // 0x13efd0: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x13efd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_13efd4:
    // 0x13efd4: 0x0  nop
    ctx->pc = 0x13efd4u;
    // NOP
label_13efd8:
    // 0x13efd8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x13efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13efdc:
    // 0x13efdc: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x13efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
label_13efe0:
    // 0x13efe0: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x13efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_13efe4:
    // 0x13efe4: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x13efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_13efe8:
    // 0x13efe8: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x13efe8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_13efec:
    // 0x13efec: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x13efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_13eff0:
    // 0x13eff0: 0x4410fdf  bgez        $v0, . + 4 + (0xFDF << 2)
label_13eff4:
    if (ctx->pc == 0x13EFF4u) {
        ctx->pc = 0x13EFF8u;
        goto label_13eff8;
    }
    ctx->pc = 0x13EFF0u;
    {
        const bool branch_taken_0x13eff0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x13eff0) {
            ctx->pc = 0x142F70u;
            goto label_142f70;
        }
    }
    ctx->pc = 0x13EFF8u;
label_13eff8:
    // 0x13eff8: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x13eff8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_13effc:
    // 0x13effc: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x13effcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
label_13f000:
    // 0x13f000: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x13f000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_13f004:
    // 0x13f004: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x13f004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13f008:
    // 0x13f008: 0x14400fdf  bnez        $v0, . + 4 + (0xFDF << 2)
label_13f00c:
    if (ctx->pc == 0x13F00Cu) {
        ctx->pc = 0x13F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F008u;
        // 0x13f00c: 0x32420060  andi        $v0, $s2, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F010u;
        goto label_13f010;
    }
    ctx->pc = 0x13F008u;
    {
        const bool branch_taken_0x13f008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F008u;
        // 0x13f00c: 0x32420060  andi        $v0, $s2, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f008) {
            ctx->pc = 0x142F88u;
            goto label_142f88;
        }
    }
    ctx->pc = 0x13F010u;
label_13f010:
    // 0x13f010: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_13f014:
    if (ctx->pc == 0x13F014u) {
        ctx->pc = 0x13F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F010u;
        // 0x13f014: 0x32440040  andi        $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F018u;
        goto label_13f018;
    }
    ctx->pc = 0x13F010u;
    {
        const bool branch_taken_0x13f010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F010u;
        // 0x13f014: 0x32440040  andi        $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f010) {
            ctx->pc = 0x13F0B8u;
            goto label_13f0b8;
        }
    }
    ctx->pc = 0x13F018u;
label_13f018:
    // 0x13f018: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_13f01c:
    if (ctx->pc == 0x13F01Cu) {
        ctx->pc = 0x13F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F018u;
        // 0x13f01c: 0x32450020  andi        $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F020u;
        goto label_13f020;
    }
    ctx->pc = 0x13F018u;
    {
        const bool branch_taken_0x13f018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F018u;
        // 0x13f01c: 0x32450020  andi        $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f018) {
            ctx->pc = 0x13F040u;
            goto label_13f040;
        }
    }
    ctx->pc = 0x13F020u;
label_13f020:
    // 0x13f020: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_13f024:
    if (ctx->pc == 0x13F024u) {
        ctx->pc = 0x13F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F020u;
        // 0x13f024: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F028u;
        goto label_13f028;
    }
    ctx->pc = 0x13F020u;
    {
        const bool branch_taken_0x13f020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F020u;
        // 0x13f024: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f020) {
            ctx->pc = 0x13F040u;
            goto label_13f040;
        }
    }
    ctx->pc = 0x13F028u;
label_13f028:
    // 0x13f028: 0x34028002  ori         $v0, $zero, 0x8002
    ctx->pc = 0x13f028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
label_13f02c:
    // 0x13f02c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13f02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_13f030:
    // 0x13f030: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13f030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13f034:
    // 0x13f034: 0x10000008  b           . + 4 + (0x8 << 2)
label_13f038:
    if (ctx->pc == 0x13F038u) {
        ctx->pc = 0x13F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F034u;
        // 0x13f038: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F03Cu;
        goto label_13f03c;
    }
    ctx->pc = 0x13F034u;
    {
        const bool branch_taken_0x13f034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F034u;
        // 0x13f038: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f034) {
            ctx->pc = 0x13F058u;
            goto label_13f058;
        }
    }
    ctx->pc = 0x13F03Cu;
label_13f03c:
    // 0x13f03c: 0x0  nop
    ctx->pc = 0x13f03cu;
    // NOP
label_13f040:
    // 0x13f040: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13f040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_13f044:
    // 0x13f044: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13f044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_13f048:
    // 0x13f048: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x13f048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_13f04c:
    // 0x13f04c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13f04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13f050:
    // 0x13f050: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x13f050u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_13f054:
    // 0x13f054: 0x0  nop
    ctx->pc = 0x13f054u;
    // NOP
label_13f058:
    // 0x13f058: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x13f058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_13f05c:
    // 0x13f05c: 0xa6820008  sh          $v0, 0x8($s4)
    ctx->pc = 0x13f05cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 2));
label_13f060:
    // 0x13f060: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_13f064:
    if (ctx->pc == 0x13F064u) {
        ctx->pc = 0x13F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F060u;
        // 0x13f064: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F068u;
        goto label_13f068;
    }
    ctx->pc = 0x13F060u;
    {
        const bool branch_taken_0x13f060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F060u;
        // 0x13f064: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f060) {
            ctx->pc = 0x13F098u;
            goto label_13f098;
        }
    }
    ctx->pc = 0x13F068u;
label_13f068:
    // 0x13f068: 0x9264000f  lbu         $a0, 0xF($s3)
    ctx->pc = 0x13f068u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_13f06c:
    // 0x13f06c: 0x1212c2  srl         $v0, $s2, 11
    ctx->pc = 0x13f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 11));
label_13f070:
    // 0x13f070: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13f070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13f074:
    // 0x13f074: 0x121242  srl         $v0, $s2, 9
    ctx->pc = 0x13f074u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 9));
label_13f078:
    // 0x13f078: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13f078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_13f07c:
    // 0x13f07c: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x13f07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
label_13f080:
    // 0x13f080: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x13f080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_13f084:
    // 0x13f084: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x13f084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_13f088:
    // 0x13f088: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x13f088u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_13f08c:
    // 0x13f08c: 0xa6820008  sh          $v0, 0x8($s4)
    ctx->pc = 0x13f08cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 2));
label_13f090:
    // 0x13f090: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x13f090u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_13f094:
    // 0x13f094: 0x0  nop
    ctx->pc = 0x13f094u;
    // NOP
label_13f098:
    // 0x13f098: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_13f09c:
    if (ctx->pc == 0x13F09Cu) {
        ctx->pc = 0x13F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F098u;
        // 0x13f09c: 0x3c01006b  lui         $at, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F0A0u;
        goto label_13f0a0;
    }
    ctx->pc = 0x13F098u;
    {
        const bool branch_taken_0x13f098 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F098u;
        // 0x13f09c: 0x3c01006b  lui         $at, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f098) {
            ctx->pc = 0x13F0B8u;
            goto label_13f0b8;
        }
    }
    ctx->pc = 0x13F0A0u;
label_13f0a0:
    // 0x13f0a0: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x13f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_13f0a4:
    // 0x13f0a4: 0x8c23f9a0  lw          $v1, -0x660($at)
    ctx->pc = 0x13f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965664)));
label_13f0a8:
    // 0x13f0a8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x13f0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_13f0ac:
    // 0x13f0ac: 0xa6820008  sh          $v0, 0x8($s4)
    ctx->pc = 0x13f0acu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 2));
label_13f0b0:
    // 0x13f0b0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x13f0b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_13f0b4:
    // 0x13f0b4: 0x0  nop
    ctx->pc = 0x13f0b4u;
    // NOP
label_13f0b8:
    // 0x13f0b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x13f0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_13f0bc:
    // 0x13f0bc: 0x8c23cee0  lw          $v1, -0x3120($at)
    ctx->pc = 0x13f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954720)));
label_13f0c0:
    // 0x13f0c0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x13f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_13f0c4:
    // 0x13f0c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13f0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_13f0c8:
    // 0x13f0c8: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
label_13f0cc:
    if (ctx->pc == 0x13F0CCu) {
        ctx->pc = 0x13F0D0u;
        goto label_13f0d0;
    }
    ctx->pc = 0x13F0C8u;
    {
        const bool branch_taken_0x13f0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f0c8) {
            ctx->pc = 0x13F1C8u;
            goto label_13f1c8;
        }
    }
    ctx->pc = 0x13F0D0u;
label_13f0d0:
    // 0x13f0d0: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x13f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_13f0d4:
    // 0x13f0d4: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x13f0d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_13f0d8:
    // 0x13f0d8: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_13f0dc:
    if (ctx->pc == 0x13F0DCu) {
        ctx->pc = 0x13F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0D8u;
        // 0x13f0dc: 0x121682  srl         $v0, $s2, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F0E0u;
        goto label_13f0e0;
    }
    ctx->pc = 0x13F0D8u;
    {
        const bool branch_taken_0x13f0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0D8u;
        // 0x13f0dc: 0x121682  srl         $v0, $s2, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0d8) {
            ctx->pc = 0x13F1C8u;
            goto label_13f1c8;
        }
    }
    ctx->pc = 0x13F0E0u;
label_13f0e0:
    // 0x13f0e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13f0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13f0e4:
    // 0x13f0e4: 0x441804  sllv        $v1, $a0, $v0
    ctx->pc = 0x13f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_13f0e8:
    // 0x13f0e8: 0x3c026663  lui         $v0, 0x6663
    ctx->pc = 0x13f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26211 << 16));
label_13f0ec:
    // 0x13f0ec: 0x3442c780  ori         $v0, $v0, 0xC780
    ctx->pc = 0x13f0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51072);
label_13f0f0:
    // 0x13f0f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13f0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_13f0f4:
    // 0x13f0f4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_13f0f8:
    if (ctx->pc == 0x13F0F8u) {
        ctx->pc = 0x13F0FCu;
        goto label_13f0fc;
    }
    ctx->pc = 0x13F0F4u;
    {
        const bool branch_taken_0x13f0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f0f4) {
            ctx->pc = 0x13F1C8u;
            goto label_13f1c8;
        }
    }
    ctx->pc = 0x13F0FCu;
label_13f0fc:
    // 0x13f0fc: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x13f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_13f100:
    // 0x13f100: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_13f104:
    if (ctx->pc == 0x13F104u) {
        ctx->pc = 0x13F108u;
        goto label_13f108;
    }
    ctx->pc = 0x13F100u;
    {
        const bool branch_taken_0x13f100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f100) {
            ctx->pc = 0x13F1C8u;
            goto label_13f1c8;
        }
    }
    ctx->pc = 0x13F108u;
label_13f108:
    // 0x13f108: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x13f108u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_13f10c:
    // 0x13f10c: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
label_13f110:
    if (ctx->pc == 0x13F110u) {
        ctx->pc = 0x13F114u;
        goto label_13f114;
    }
    ctx->pc = 0x13F10Cu;
    {
        const bool branch_taken_0x13f10c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f10c) {
            ctx->pc = 0x13F1C8u;
            goto label_13f1c8;
        }
    }
    ctx->pc = 0x13F114u;
label_13f114:
    // 0x13f114: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x13f114u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_13f118:
    // 0x13f118: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x13f118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_13f11c:
    // 0x13f11c: 0xa41804  sllv        $v1, $a0, $a1
    ctx->pc = 0x13f11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_13f120:
    // 0x13f120: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13f120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13f124:
    // 0x13f124: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_13f128:
    if (ctx->pc == 0x13F128u) {
        ctx->pc = 0x13F12Cu;
        goto label_13f12c;
    }
    ctx->pc = 0x13F124u;
    {
        const bool branch_taken_0x13f124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f124) {
            ctx->pc = 0x13F1C8u;
            goto label_13f1c8;
        }
    }
    ctx->pc = 0x13F12Cu;
label_13f12c:
    // 0x13f12c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x13f12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_13f130:
    // 0x13f130: 0x27a603cc  addiu       $a2, $sp, 0x3CC
    ctx->pc = 0x13f130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 972));
label_13f134:
    // 0x13f134: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x13f134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
label_13f138:
    // 0x13f138: 0xc04ca60  jal         func_132980
label_13f13c:
    if (ctx->pc == 0x13F13Cu) {
        ctx->pc = 0x13F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F138u;
        // 0x13f13c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F140u;
        goto label_13f140;
    }
    ctx->pc = 0x13F138u;
    SET_GPR_U32(ctx, 31, 0x13F140u);
    ctx->pc = 0x13F13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F138u;
    // 0x13f13c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132980u, 0x13F138u, 0x13F140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F140u;
label_13f140:
    // 0x13f140: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_13f144:
    if (ctx->pc == 0x13F144u) {
        ctx->pc = 0x13F148u;
        goto label_13f148;
    }
    ctx->pc = 0x13F140u;
    {
        const bool branch_taken_0x13f140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f140) {
            ctx->pc = 0x13F190u;
            goto label_13f190;
        }
    }
    ctx->pc = 0x13F148u;
label_13f148:
    // 0x13f148: 0x8fa5024c  lw          $a1, 0x24C($sp)
    ctx->pc = 0x13f148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_13f14c:
    // 0x13f14c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13f14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13f150:
    // 0x13f150: 0xc050c14  jal         func_143050
label_13f154:
    if (ctx->pc == 0x13F154u) {
        ctx->pc = 0x13F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F150u;
        // 0x13f154: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F158u;
        goto label_13f158;
    }
    ctx->pc = 0x13F150u;
    SET_GPR_U32(ctx, 31, 0x13F158u);
    ctx->pc = 0x13F154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F150u;
    // 0x13f154: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143050u, 0x13F150u, 0x13F158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F158u;
label_13f158:
    // 0x13f158: 0x8fa403cc  lw          $a0, 0x3CC($sp)
    ctx->pc = 0x13f158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 972)));
label_13f15c:
    // 0x13f15c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_13f160:
    // 0x13f160: 0x24940010  addiu       $s4, $a0, 0x10
    ctx->pc = 0x13f160u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_13f164:
    // 0x13f164: 0x14193c  dsll32      $v1, $s4, 4
    ctx->pc = 0x13f164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 4));
label_13f168:
    // 0x13f168: 0xafb4024c  sw          $s4, 0x24C($sp)
    ctx->pc = 0x13f168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 20));
label_13f16c:
    // 0x13f16c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x13f16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
label_13f170:
    // 0x13f170: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x13f170u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_13f174:
    // 0x13f174: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13f174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_13f178:
    // 0x13f178: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13f178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_13f17c:
    // 0x13f17c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x13f17cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_13f180:
    // 0x13f180: 0x8fa203cc  lw          $v0, 0x3CC($sp)
    ctx->pc = 0x13f180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 972)));
label_13f184:
    // 0x13f184: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x13f184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_13f188:
    // 0x13f188: 0x8fa203cc  lw          $v0, 0x3CC($sp)
    ctx->pc = 0x13f188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 972)));
label_13f18c:
    // 0x13f18c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x13f18cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_13f190:
    // 0x13f190: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x13f190u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_13f194:
    // 0x13f194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13f198:
    // 0x13f198: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x13f198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_13f19c:
    // 0x13f19c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x13f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_13f1a0:
    // 0x13f1a0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_13f1a4:
    // 0x13f1a4: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x13f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
label_13f1a8:
    // 0x13f1a8: 0x402027  not         $a0, $v0
    ctx->pc = 0x13f1a8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_13f1ac:
    // 0x13f1ac: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x13f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_13f1b0:
    // 0x13f1b0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x13f1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_13f1b4:
    // 0x13f1b4: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x13f1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
label_13f1b8:
    // 0x13f1b8: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x13f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_13f1bc:
    // 0x13f1bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13f1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13f1c0:
    // 0x13f1c0: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x13f1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
label_13f1c4:
    // 0x13f1c4: 0x0  nop
    ctx->pc = 0x13f1c4u;
    // NOP
label_13f1c8:
    // 0x13f1c8: 0x121682  srl         $v0, $s2, 26
    ctx->pc = 0x13f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 26));
label_13f1cc:
    // 0x13f1cc: 0x2c410027  sltiu       $at, $v0, 0x27
    ctx->pc = 0x13f1ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)39) ? 1 : 0);
label_13f1d0:
    // 0x13f1d0: 0x10200f59  beqz        $at, . + 4 + (0xF59 << 2)
label_13f1d4:
    if (ctx->pc == 0x13F1D4u) {
        ctx->pc = 0x13F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1D0u;
        // 0x13f1d4: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F1D8u;
        goto label_13f1d8;
    }
    ctx->pc = 0x13F1D0u;
    {
        const bool branch_taken_0x13f1d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1D0u;
        // 0x13f1d4: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1d0) {
            ctx->pc = 0x142F38u;
            goto label_142f38;
        }
    }
    ctx->pc = 0x13F1D8u;
label_13f1d8:
    // 0x13f1d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13f1dc:
    // 0x13f1dc: 0x246348f0  addiu       $v1, $v1, 0x48F0
    ctx->pc = 0x13f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18672));
label_13f1e0:
    // 0x13f1e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13f1e4:
    // 0x13f1e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13f1e8:
    // 0x13f1e8: 0x400008  jr          $v0
label_13f1ec:
    if (ctx->pc == 0x13F1ECu) {
        ctx->pc = 0x13F1F0u;
        goto label_13f1f0;
    }
    ctx->pc = 0x13F1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F1F0u: goto label_13f1f0;
            case 0x13F228u: goto label_13f228;
            case 0x13F268u: goto label_13f268;
            case 0x13F2E0u: goto label_13f2e0;
            case 0x13F320u: goto label_13f320;
            case 0x13F368u: goto label_13f368;
            case 0x13F3C8u: goto label_13f3c8;
            case 0x13F460u: goto label_13f460;
            case 0x13F500u: goto label_13f500;
            case 0x13F690u: goto label_13f690;
            case 0x140140u: goto label_140140;
            case 0x140470u: goto label_140470;
            case 0x141150u: goto label_141150;
            case 0x1411A0u: goto label_1411a0;
            case 0x1411F8u: goto label_1411f8;
            case 0x1412B0u: goto label_1412b0;
            case 0x141388u: goto label_141388;
            case 0x141DB0u: goto label_141db0;
            case 0x142798u: goto label_142798;
            case 0x142830u: goto label_142830;
            case 0x1428D8u: goto label_1428d8;
            case 0x142980u: goto label_142980;
            case 0x142A40u: goto label_142a40;
            case 0x142A90u: goto label_142a90;
            case 0x142AF8u: goto label_142af8;
            case 0x142B78u: goto label_142b78;
            case 0x142BF8u: goto label_142bf8;
            case 0x142C70u: goto label_142c70;
            case 0x142D10u: goto label_142d10;
            case 0x142DC8u: goto label_142dc8;
            case 0x142E80u: goto label_142e80;
            case 0x142F38u: goto label_142f38;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F1E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13F1F0u;
label_13f1f0:
    // 0x13f1f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_13f1f4:
    // 0x13f1f4: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x13f1f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_13f1f8:
    // 0x13f1f8: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x13f1f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_13f1fc:
    // 0x13f1fc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x13f1fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_13f200:
    // 0x13f200: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x13f200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_13f204:
    // 0x13f204: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x13f204u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
label_13f208:
    // 0x13f208: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x13f208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_13f20c:
    // 0x13f20c: 0xa6830008  sh          $v1, 0x8($s4)
    ctx->pc = 0x13f20cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 3));
label_13f210:
    // 0x13f210: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x13f210u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
label_13f214:
    // 0x13f214: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x13f214u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
label_13f218:
    // 0x13f218: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x13f218u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_13f21c:
    // 0x13f21c: 0x10000f50  b           . + 4 + (0xF50 << 2)
label_13f220:
    if (ctx->pc == 0x13F220u) {
        ctx->pc = 0x13F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F21Cu;
        // 0x13f220: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F224u;
        goto label_13f224;
    }
    ctx->pc = 0x13F21Cu;
    {
        const bool branch_taken_0x13f21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F21Cu;
        // 0x13f220: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f21c) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x13F224u;
label_13f224:
    // 0x13f224: 0x0  nop
    ctx->pc = 0x13f224u;
    // NOP
label_13f228:
    // 0x13f228: 0x8fa5024c  lw          $a1, 0x24C($sp)
    ctx->pc = 0x13f228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_13f22c:
    // 0x13f22c: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x13f22cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_13f230:
    // 0x13f230: 0x8e70000c  lw          $s0, 0xC($s3)
    ctx->pc = 0x13f230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_13f234:
    // 0x13f234: 0xc050c14  jal         func_143050
label_13f238:
    if (ctx->pc == 0x13F238u) {
        ctx->pc = 0x13F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F234u;
        // 0x13f238: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F23Cu;
        goto label_13f23c;
    }
    ctx->pc = 0x13F234u;
    SET_GPR_U32(ctx, 31, 0x13F23Cu);
    ctx->pc = 0x13F238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F234u;
    // 0x13f238: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143050u, 0x13F234u, 0x13F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F23Cu;
label_13f23c:
    // 0x13f23c: 0x14193c  dsll32      $v1, $s4, 4
    ctx->pc = 0x13f23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 4));
label_13f240:
    // 0x13f240: 0xafb4024c  sw          $s4, 0x24C($sp)
    ctx->pc = 0x13f240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 20));
label_13f244:
    // 0x13f244: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x13f244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
label_13f248:
    // 0x13f248: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13f248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_13f24c:
    // 0x13f24c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13f24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_13f250:
    // 0x13f250: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x13f250u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_13f254:
    // 0x13f254: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13f254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_13f258:
    // 0x13f258: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x13f258u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_13f25c:
    // 0x13f25c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13f25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_13f260:
    // 0x13f260: 0x10000f3f  b           . + 4 + (0xF3F << 2)
label_13f264:
    if (ctx->pc == 0x13F264u) {
        ctx->pc = 0x13F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F260u;
        // 0x13f264: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F268u;
        goto label_13f268;
    }
    ctx->pc = 0x13F260u;
    {
        const bool branch_taken_0x13f260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F260u;
        // 0x13f264: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f260) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x13F268u;
label_13f268:
    // 0x13f268: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x13f268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_13f26c:
    // 0x13f26c: 0x2821823  subu        $v1, $s4, $v0
    ctx->pc = 0x13f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_13f270:
    // 0x13f270: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_13f274:
    if (ctx->pc == 0x13F274u) {
        ctx->pc = 0x13F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F270u;
        // 0x13f274: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F278u;
        goto label_13f278;
    }
    ctx->pc = 0x13F270u;
    {
        const bool branch_taken_0x13f270 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x13F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F270u;
        // 0x13f274: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f270) {
            ctx->pc = 0x13F280u;
            goto label_13f280;
        }
    }
    ctx->pc = 0x13F278u;
label_13f278:
    // 0x13f278: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x13f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_13f27c:
    // 0x13f27c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x13f27cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_13f280:
    // 0x13f280: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x13f280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_13f284:
    // 0x13f284: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x13f284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_13f288:
    // 0x13f288: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x13f288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_13f28c:
    // 0x13f28c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_13f290:
    // 0x13f290: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x13f290u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_13f294:
    // 0x13f294: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13f294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_13f298:
    // 0x13f298: 0x4193c  dsll32      $v1, $a0, 4
    ctx->pc = 0x13f298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 4));
label_13f29c:
    // 0x13f29c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x13f29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
label_13f2a0:
    // 0x13f2a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13f2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_13f2a4:
    // 0x13f2a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13f2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13f2a8:
    // 0x13f2a8: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x13f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_13f2ac:
    // 0x13f2ac: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_13f2b0:
    if (ctx->pc == 0x13F2B0u) {
        ctx->pc = 0x13F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2ACu;
        // 0x13f2b0: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F2B4u;
        goto label_13f2b4;
    }
    ctx->pc = 0x13F2ACu;
    {
        const bool branch_taken_0x13f2ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2ACu;
        // 0x13f2b0: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2ac) {
            ctx->pc = 0x13F2C8u;
            goto label_13f2c8;
        }
    }
    ctx->pc = 0x13F2B4u;
label_13f2b4:
    // 0x13f2b4: 0x3c025100  lui         $v0, 0x5100
    ctx->pc = 0x13f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20736 << 16));
label_13f2b8:
    // 0x13f2b8: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x13f2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_13f2bc:
    // 0x13f2bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_13f2c0:
    if (ctx->pc == 0x13F2C0u) {
        ctx->pc = 0x13F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2BCu;
        // 0x13f2c0: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F2C4u;
        goto label_13f2c4;
    }
    ctx->pc = 0x13F2BCu;
    {
        const bool branch_taken_0x13f2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2BCu;
        // 0x13f2c0: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2bc) {
            ctx->pc = 0x13F2D0u;
            goto label_13f2d0;
        }
    }
    ctx->pc = 0x13F2C4u;
label_13f2c4:
    // 0x13f2c4: 0x0  nop
    ctx->pc = 0x13f2c4u;
    // NOP
label_13f2c8:
    // 0x13f2c8: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x13f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_13f2cc:
    // 0x13f2cc: 0x0  nop
    ctx->pc = 0x13f2ccu;
    // NOP
label_13f2d0:
    // 0x13f2d0: 0xafb40248  sw          $s4, 0x248($sp)
    ctx->pc = 0x13f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 20));
label_13f2d4:
    // 0x13f2d4: 0x10000f22  b           . + 4 + (0xF22 << 2)
label_13f2d8:
    if (ctx->pc == 0x13F2D8u) {
        ctx->pc = 0x13F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2D4u;
        // 0x13f2d8: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F2DCu;
        goto label_13f2dc;
    }
    ctx->pc = 0x13F2D4u;
    {
        const bool branch_taken_0x13f2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2D4u;
        // 0x13f2d8: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2d4) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x13F2DCu;
label_13f2dc:
    // 0x13f2dc: 0x0  nop
    ctx->pc = 0x13f2dcu;
    // NOP
label_13f2e0:
    // 0x13f2e0: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x13f2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_13f2e4:
    // 0x13f2e4: 0xde670010  ld          $a3, 0x10($s3)
    ctx->pc = 0x13f2e4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 19), 16)));
label_13f2e8:
    // 0x13f2e8: 0x3c033400  lui         $v1, 0x3400
    ctx->pc = 0x13f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13312 << 16));
label_13f2ec:
    // 0x13f2ec: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x13f2ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_13f2f0:
    // 0x13f2f0: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x13f2f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_13f2f4:
    // 0x13f2f4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x13f2f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_13f2f8:
    // 0x13f2f8: 0x24030410  addiu       $v1, $zero, 0x410
    ctx->pc = 0x13f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_13f2fc:
    // 0x13f2fc: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x13f2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_13f300:
    // 0x13f300: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x13f300u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
label_13f304:
    // 0x13f304: 0xa6830008  sh          $v1, 0x8($s4)
    ctx->pc = 0x13f304u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 3));
label_13f308:
    // 0x13f308: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x13f308u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_13f30c:
    // 0x13f30c: 0xae860018  sw          $a2, 0x18($s4)
    ctx->pc = 0x13f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 6));
label_13f310:
    // 0x13f310: 0xfe870020  sd          $a3, 0x20($s4)
    ctx->pc = 0x13f310u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 7));
label_13f314:
    // 0x13f314: 0x10000f12  b           . + 4 + (0xF12 << 2)
label_13f318:
    if (ctx->pc == 0x13F318u) {
        ctx->pc = 0x13F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F314u;
        // 0x13f318: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F31Cu;
        goto label_13f31c;
    }
    ctx->pc = 0x13F314u;
    {
        const bool branch_taken_0x13f314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F314u;
        // 0x13f318: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f314) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x13F31Cu;
label_13f31c:
    // 0x13f31c: 0x0  nop
    ctx->pc = 0x13f31cu;
    // NOP
label_13f320:
    // 0x13f320: 0x3c044400  lui         $a0, 0x4400
    ctx->pc = 0x13f320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17408 << 16));
label_13f324:
    // 0x13f324: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x13f324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_13f328:
    // 0x13f328: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x13f328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_13f32c:
    // 0x13f32c: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x13f32cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_13f330:
    // 0x13f330: 0xde660010  ld          $a2, 0x10($s3)
    ctx->pc = 0x13f330u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 16)));
label_13f334:
    // 0x13f334: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x13f334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_13f338:
    // 0x13f338: 0x24054410  addiu       $a1, $zero, 0x4410
    ctx->pc = 0x13f338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17424));
label_13f33c:
    // 0x13f33c: 0xde640018  ld          $a0, 0x18($s3)
    ctx->pc = 0x13f33cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_13f340:
    // 0x13f340: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x13f340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_13f344:
    // 0x13f344: 0xfe870000  sd          $a3, 0x0($s4)
    ctx->pc = 0x13f344u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 7));
label_13f348:
    // 0x13f348: 0xa6850008  sh          $a1, 0x8($s4)
    ctx->pc = 0x13f348u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 5));
label_13f34c:
    // 0x13f34c: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x13f34cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_13f350:
    // 0x13f350: 0xae830018  sw          $v1, 0x18($s4)
    ctx->pc = 0x13f350u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
label_13f354:
    // 0x13f354: 0xfe860020  sd          $a2, 0x20($s4)
    ctx->pc = 0x13f354u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 6));
label_13f358:
    // 0x13f358: 0xfe840028  sd          $a0, 0x28($s4)
    ctx->pc = 0x13f358u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 4));
label_13f35c:
    // 0x13f35c: 0x10000f00  b           . + 4 + (0xF00 << 2)
label_13f360:
    if (ctx->pc == 0x13F360u) {
        ctx->pc = 0x13F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F35Cu;
        // 0x13f360: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F364u;
        goto label_13f364;
    }
    ctx->pc = 0x13F35Cu;
    {
        const bool branch_taken_0x13f35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F35Cu;
        // 0x13f360: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f35c) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x13F364u;
label_13f364:
    // 0x13f364: 0x0  nop
    ctx->pc = 0x13f364u;
    // NOP
label_13f368:
    // 0x13f368: 0x3c044400  lui         $a0, 0x4400
    ctx->pc = 0x13f368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17408 << 16));
label_13f36c:
    // 0x13f36c: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x13f36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_13f370:
    // 0x13f370: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x13f370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_13f374:
    // 0x13f374: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x13f374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_13f378:
    // 0x13f378: 0x24054410  addiu       $a1, $zero, 0x4410
    ctx->pc = 0x13f378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17424));
label_13f37c:
    // 0x13f37c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x13f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_13f380:
    // 0x13f380: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x13f380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_13f384:
    // 0x13f384: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x13f384u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
label_13f388:
    // 0x13f388: 0xa6850008  sh          $a1, 0x8($s4)
    ctx->pc = 0x13f388u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 5));
label_13f38c:
    // 0x13f38c: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x13f38cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_13f390:
    // 0x13f390: 0xae830018  sw          $v1, 0x18($s4)
    ctx->pc = 0x13f390u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
label_13f394:
    // 0x13f394: 0xde640010  ld          $a0, 0x10($s3)
    ctx->pc = 0x13f394u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 16)));
label_13f398:
    // 0x13f398: 0x9662001a  lhu         $v0, 0x1A($s3)
    ctx->pc = 0x13f398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
label_13f39c:
    // 0x13f39c: 0x96630018  lhu         $v1, 0x18($s3)
    ctx->pc = 0x13f39cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
label_13f3a0:
    // 0x13f3a0: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x13f3a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_13f3a4:
    // 0x13f3a4: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x13f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
label_13f3a8:
    // 0x13f3a8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x13f3a8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_13f3ac:
    // 0x13f3ac: 0xfe840020  sd          $a0, 0x20($s4)
    ctx->pc = 0x13f3acu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 4));
label_13f3b0:
    // 0x13f3b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13f3b4:
    // 0x13f3b4: 0xfe840028  sd          $a0, 0x28($s4)
    ctx->pc = 0x13f3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 4));
label_13f3b8:
    // 0x13f3b8: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x13f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_13f3bc:
    // 0x13f3bc: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x13f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_13f3c0:
    // 0x13f3c0: 0x10000ee7  b           . + 4 + (0xEE7 << 2)
label_13f3c4:
    if (ctx->pc == 0x13F3C4u) {
        ctx->pc = 0x13F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F3C0u;
        // 0x13f3c4: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F3C8u;
        goto label_13f3c8;
    }
    ctx->pc = 0x13F3C0u;
    {
        const bool branch_taken_0x13f3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F3C0u;
        // 0x13f3c4: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f3c0) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x13F3C8u;
label_13f3c8:
    // 0x13f3c8: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x13f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
label_13f3cc:
    // 0x13f3cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13f3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_13f3d0:
    // 0x13f3d0: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x13f3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_13f3d4:
    // 0x13f3d4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x13f3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13f3d8:
    // 0x13f3d8: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x13f3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_13f3dc:
    // 0x13f3dc: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x13f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
label_13f3e0:
    // 0x13f3e0: 0x3c030424  lui         $v1, 0x424
    ctx->pc = 0x13f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1060 << 16));
label_13f3e4:
    // 0x13f3e4: 0x30440010  andi        $a0, $v0, 0x10
    ctx->pc = 0x13f3e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_13f3e8:
    // 0x13f3e8: 0x34632160  ori         $v1, $v1, 0x2160
    ctx->pc = 0x13f3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8544);
label_13f3ec:
    // 0x13f3ec: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x13f3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_13f3f0:
    // 0x13f3f0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x13f3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_13f3f4:
    // 0x13f3f4: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x13f3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_13f3f8:
    // 0x13f3f8: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x13f3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_13f3fc:
    // 0x13f3fc: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x13f3fcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_13f400:
    // 0x13f400: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x13f400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_13f404:
    // 0x13f404: 0xc04cfd8  jal         func_133F60
label_13f408:
    if (ctx->pc == 0x13F408u) {
        ctx->pc = 0x13F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F404u;
        // 0x13f408: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F40Cu;
        goto label_13f40c;
    }
    ctx->pc = 0x13F404u;
    SET_GPR_U32(ctx, 31, 0x13F40Cu);
    ctx->pc = 0x13F408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F404u;
    // 0x13f408: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x13F404u, 0x13F40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F40Cu;
label_13f40c:
    // 0x13f40c: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x13f40cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_13f410:
    // 0x13f410: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x13f410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_13f414:
    // 0x13f414: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13f414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_13f418:
    // 0x13f418: 0xde670018  ld          $a3, 0x18($s3)
    ctx->pc = 0x13f418u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_13f41c:
    // 0x13f41c: 0xde660020  ld          $a2, 0x20($s3)
    ctx->pc = 0x13f41cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 32)));
label_13f420:
    // 0x13f420: 0xde650028  ld          $a1, 0x28($s3)
    ctx->pc = 0x13f420u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 40)));
label_13f424:
    // 0x13f424: 0xae840020  sw          $a0, 0x20($s4)
    ctx->pc = 0x13f424u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 4));
label_13f428:
    // 0x13f428: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x13f428u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_13f42c:
    // 0x13f42c: 0xfe870028  sd          $a3, 0x28($s4)
    ctx->pc = 0x13f42cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 7));
label_13f430:
    // 0x13f430: 0x96620032  lhu         $v0, 0x32($s3)
    ctx->pc = 0x13f430u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
label_13f434:
    // 0x13f434: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x13f434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_13f438:
    // 0x13f438: 0x96630030  lhu         $v1, 0x30($s3)
    ctx->pc = 0x13f438u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_13f43c:
    // 0x13f43c: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x13f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
label_13f440:
    // 0x13f440: 0xfe860030  sd          $a2, 0x30($s4)
    ctx->pc = 0x13f440u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 6));
label_13f444:
    // 0x13f444: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13f444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13f448:
    // 0x13f448: 0xfe850038  sd          $a1, 0x38($s4)
    ctx->pc = 0x13f448u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 56), GPR_U64(ctx, 5));
label_13f44c:
    // 0x13f44c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_13f450:
    // 0x13f450: 0xfe870040  sd          $a3, 0x40($s4)
    ctx->pc = 0x13f450u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 7));
label_13f454:
    // 0x13f454: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x13f454u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
label_13f458:
    // 0x13f458: 0x10000ec1  b           . + 4 + (0xEC1 << 2)
label_13f45c:
    if (ctx->pc == 0x13F45Cu) {
        ctx->pc = 0x13F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F458u;
        // 0x13f45c: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F460u;
        goto label_13f460;
    }
    ctx->pc = 0x13F458u;
    {
        const bool branch_taken_0x13f458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F458u;
        // 0x13f45c: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f458) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x13F460u;
label_13f460:
    // 0x13f460: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x13f460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
label_13f464:
    // 0x13f464: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13f464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_13f468:
    // 0x13f468: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x13f468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_13f46c:
    // 0x13f46c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x13f46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13f470:
    // 0x13f470: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x13f470u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
label_13f474:
    // 0x13f474: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x13f474u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_13f478:
    // 0x13f478: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x13f478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_13f47c:
    // 0x13f47c: 0x3c020434  lui         $v0, 0x434
    ctx->pc = 0x13f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1076 << 16));
label_13f480:
    // 0x13f480: 0x34423160  ori         $v0, $v0, 0x3160
    ctx->pc = 0x13f480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12640);
label_13f484:
    // 0x13f484: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13f484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_13f488:
    // 0x13f488: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13f488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_13f48c:
    // 0x13f48c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13f48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_13f490:
    // 0x13f490: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x13f490u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
label_13f494:
    // 0x13f494: 0x96650014  lhu         $a1, 0x14($s3)
    ctx->pc = 0x13f494u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
label_13f498:
    // 0x13f498: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x13f498u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_13f49c:
    // 0x13f49c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x13f49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_13f4a0:
    // 0x13f4a0: 0xc04cfd8  jal         func_133F60
label_13f4a4:
    if (ctx->pc == 0x13F4A4u) {
        ctx->pc = 0x13F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4A0u;
        // 0x13f4a4: 0x325007ff  andi        $s0, $s2, 0x7FF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F4A8u;
        goto label_13f4a8;
    }
    ctx->pc = 0x13F4A0u;
    SET_GPR_U32(ctx, 31, 0x13F4A8u);
    ctx->pc = 0x13F4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F4A0u;
    // 0x13f4a4: 0x325007ff  andi        $s0, $s2, 0x7FF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x13F4A0u, 0x13F4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F4A8u;
label_13f4a8:
    // 0x13f4a8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x13f4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_13f4ac:
    // 0x13f4ac: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x13f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_13f4b0:
    // 0x13f4b0: 0xfe900010  sd          $s0, 0x10($s4)
    ctx->pc = 0x13f4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 16));
label_13f4b4:
    // 0x13f4b4: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x13f4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_13f4b8:
    // 0x13f4b8: 0xae850020  sw          $a1, 0x20($s4)
    ctx->pc = 0x13f4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 5));
label_13f4bc:
    // 0x13f4bc: 0xae840028  sw          $a0, 0x28($s4)
    ctx->pc = 0x13f4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 4));
label_13f4c0:
    // 0x13f4c0: 0xde660020  ld          $a2, 0x20($s3)
    ctx->pc = 0x13f4c0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 32)));
label_13f4c4:
    // 0x13f4c4: 0x9662002a  lhu         $v0, 0x2A($s3)
    ctx->pc = 0x13f4c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 42)));
label_13f4c8:
    // 0x13f4c8: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x13f4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_13f4cc:
    // 0x13f4cc: 0x96630028  lhu         $v1, 0x28($s3)
    ctx->pc = 0x13f4ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
label_13f4d0:
    // 0x13f4d0: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x13f4d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
label_13f4d4:
    // 0x13f4d4: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x13f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
label_13f4d8:
    // 0x13f4d8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x13f4d8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_13f4dc:
    // 0x13f4dc: 0xfe860030  sd          $a2, 0x30($s4)
    ctx->pc = 0x13f4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 6));
label_13f4e0:
    // 0x13f4e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13f4e4:
    // 0x13f4e4: 0xae850038  sw          $a1, 0x38($s4)
    ctx->pc = 0x13f4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 5));
label_13f4e8:
    // 0x13f4e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_13f4ec:
    // 0x13f4ec: 0xfe860040  sd          $a2, 0x40($s4)
    ctx->pc = 0x13f4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 6));
label_13f4f0:
    // 0x13f4f0: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x13f4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
label_13f4f4:
    // 0x13f4f4: 0x10000e9a  b           . + 4 + (0xE9A << 2)
label_13f4f8:
    if (ctx->pc == 0x13F4F8u) {
        ctx->pc = 0x13F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4F4u;
        // 0x13f4f8: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F4FCu;
        goto label_13f4fc;
    }
    ctx->pc = 0x13F4F4u;
    {
        const bool branch_taken_0x13f4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4F4u;
        // 0x13f4f8: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f4f4) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x13F4FCu;
label_13f4fc:
    // 0x13f4fc: 0x0  nop
    ctx->pc = 0x13f4fcu;
    // NOP
label_13f500:
    // 0x13f500: 0x96640024  lhu         $a0, 0x24($s3)
    ctx->pc = 0x13f500u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
label_13f504:
    // 0x13f504: 0x9663001c  lhu         $v1, 0x1C($s3)
    ctx->pc = 0x13f504u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
label_13f508:
    // 0x13f508: 0xc7828540  lwc1        $f2, -0x7AC0($gp)
    ctx->pc = 0x13f508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13f50c:
    // 0x13f50c: 0x9662001e  lhu         $v0, 0x1E($s3)
    ctx->pc = 0x13f50cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
label_13f510:
    // 0x13f510: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x13f510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13f514:
    // 0x13f514: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x13f514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_13f518:
    // 0x13f518: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13f518u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f51c:
    // 0x13f51c: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x13f51cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_13f520:
    // 0x13f520: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13f520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_13f524:
    // 0x13f524: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13f524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_13f528:
    // 0x13f528: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13f528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13f52c:
    // 0x13f52c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13f52cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_13f530:
    // 0x13f530: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x13f530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_13f534:
    // 0x13f534: 0x0  nop
    ctx->pc = 0x13f534u;
    // NOP
label_13f538:
    // 0x13f538: 0x11200e89  beqz        $t1, . + 4 + (0xE89 << 2)
label_13f53c:
    if (ctx->pc == 0x13F53Cu) {
        ctx->pc = 0x13F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F538u;
        // 0x13f53c: 0x305effff  andi        $fp, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F540u;
        goto label_13f540;
    }
    ctx->pc = 0x13F538u;
    {
        const bool branch_taken_0x13f538 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F538u;
        // 0x13f53c: 0x305effff  andi        $fp, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f538) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x13F540u;
label_13f540:
    // 0x13f540: 0x73c91018  mult1       $v0, $fp, $t1
    ctx->pc = 0x13f540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_13f544:
    // 0x13f544: 0x2e93018  mult        $a2, $s7, $t1
    ctx->pc = 0x13f544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_13f548:
    // 0x13f548: 0x22b02  srl         $a1, $v0, 12
    ctx->pc = 0x13f548u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_13f54c:
    // 0x13f54c: 0x86670022  lh          $a3, 0x22($s3)
    ctx->pc = 0x13f54cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
label_13f550:
    // 0x13f550: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x13f550u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_13f554:
    // 0x13f554: 0x86680020  lh          $t0, 0x20($s3)
    ctx->pc = 0x13f554u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_13f558:
    // 0x13f558: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13f558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_13f55c:
    // 0x13f55c: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x13f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_13f560:
    // 0x13f560: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13f560u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_13f564:
    // 0x13f564: 0x6ab02  srl         $s5, $a2, 12
    ctx->pc = 0x13f564u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 6), 12));
label_13f568:
    // 0x13f568: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13f568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_13f56c:
    // 0x13f56c: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x13f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_13f570:
    // 0x13f570: 0x4b182  srl         $s6, $a0, 6
    ctx->pc = 0x13f570u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_13f574:
    // 0x13f574: 0x70e92018  mult1       $a0, $a3, $t1
    ctx->pc = 0x13f574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_13f578:
    // 0x13f578: 0x42a03  sra         $a1, $a0, 8
    ctx->pc = 0x13f578u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 8));
label_13f57c:
    // 0x13f57c: 0x1093018  mult        $a2, $t0, $t1
    ctx->pc = 0x13f57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_13f580:
    // 0x13f580: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x13f580u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_13f584:
    // 0x13f584: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13f584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_13f588:
    // 0x13f588: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13f588u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_13f58c:
    // 0x13f58c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13f58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_13f590:
    // 0x13f590: 0x68a03  sra         $s1, $a2, 8
    ctx->pc = 0x13f590u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 6), 8));
label_13f594:
    // 0x13f594: 0x48183  sra         $s0, $a0, 6
    ctx->pc = 0x13f594u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 6));
label_13f598:
    // 0x13f598: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x13f598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_13f59c:
    // 0x13f59c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x13f59cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_13f5a0:
    // 0x13f5a0: 0x2b1a821  addu        $s5, $s5, $s1
    ctx->pc = 0x13f5a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_13f5a4:
    // 0x13f5a4: 0x2301025  or          $v0, $s1, $s0
    ctx->pc = 0x13f5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
label_13f5a8:
    // 0x13f5a8: 0x2d0b021  addu        $s6, $s6, $s0
    ctx->pc = 0x13f5a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_13f5ac:
    // 0x13f5ac: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x13f5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
label_13f5b0:
    // 0x13f5b0: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x13f5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
label_13f5b4:
    // 0x13f5b4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x13f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_13f5b8:
    // 0x13f5b8: 0x14400e69  bnez        $v0, . + 4 + (0xE69 << 2)
label_13f5bc:
    if (ctx->pc == 0x13F5BCu) {
        ctx->pc = 0x13F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F5B8u;
        // 0x13f5bc: 0x3c027400  lui         $v0, 0x7400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F5C0u;
        goto label_13f5c0;
    }
    ctx->pc = 0x13F5B8u;
    {
        const bool branch_taken_0x13f5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F5B8u;
        // 0x13f5bc: 0x3c027400  lui         $v0, 0x7400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f5b8) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x13F5C0u;
label_13f5c0:
    // 0x13f5c0: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x13f5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_13f5c4:
    // 0x13f5c4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x13f5c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_13f5c8:
    // 0x13f5c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x13f5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_13f5cc:
    // 0x13f5cc: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x13f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
label_13f5d0:
    // 0x13f5d0: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x13f5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_13f5d4:
    // 0x13f5d4: 0x30440010  andi        $a0, $v0, 0x10
    ctx->pc = 0x13f5d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_13f5d8:
    // 0x13f5d8: 0x3c030434  lui         $v1, 0x434
    ctx->pc = 0x13f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1076 << 16));
label_13f5dc:
    // 0x13f5dc: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x13f5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_13f5e0:
    // 0x13f5e0: 0x34633160  ori         $v1, $v1, 0x3160
    ctx->pc = 0x13f5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12640);
label_13f5e4:
    // 0x13f5e4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x13f5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_13f5e8:
    // 0x13f5e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13f5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_13f5ec:
    // 0x13f5ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13f5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_13f5f0:
    // 0x13f5f0: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x13f5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
label_13f5f4:
    // 0x13f5f4: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x13f5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_13f5f8:
    // 0x13f5f8: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x13f5f8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_13f5fc:
    // 0x13f5fc: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x13f5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_13f600:
    // 0x13f600: 0xc04cfd8  jal         func_133F60
label_13f604:
    if (ctx->pc == 0x13F604u) {
        ctx->pc = 0x13F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F600u;
        // 0x13f604: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F608u;
        goto label_13f608;
    }
    ctx->pc = 0x13F600u;
    SET_GPR_U32(ctx, 31, 0x13F608u);
    ctx->pc = 0x13F604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F600u;
    // 0x13f604: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x13F600u, 0x13F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F608u;
label_13f608:
    // 0x13f608: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x13f608u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_13f60c:
    // 0x13f60c: 0x96620026  lhu         $v0, 0x26($s3)
    ctx->pc = 0x13f60cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
label_13f610:
    // 0x13f610: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13f610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_13f614:
    // 0x13f614: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_13f618:
    if (ctx->pc == 0x13F618u) {
        ctx->pc = 0x13F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F614u;
        // 0x13f618: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F61Cu;
        goto label_13f61c;
    }
    ctx->pc = 0x13F614u;
    {
        const bool branch_taken_0x13f614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F614u;
        // 0x13f618: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f614) {
            ctx->pc = 0x13F638u;
            goto label_13f638;
        }
    }
    ctx->pc = 0x13F61Cu;
label_13f61c:
    // 0x13f61c: 0x86660018  lh          $a2, 0x18($s3)
    ctx->pc = 0x13f61cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
label_13f620:
    // 0x13f620: 0x8665001a  lh          $a1, 0x1A($s3)
    ctx->pc = 0x13f620u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
label_13f624:
    // 0x13f624: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x13f624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_13f628:
    // 0x13f628: 0xd71021  addu        $v0, $a2, $s7
    ctx->pc = 0x13f628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
label_13f62c:
    // 0x13f62c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x13f62cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
label_13f630:
    // 0x13f630: 0x10000007  b           . + 4 + (0x7 << 2)
label_13f634:
    if (ctx->pc == 0x13F634u) {
        ctx->pc = 0x13F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F630u;
        // 0x13f634: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F638u;
        goto label_13f638;
    }
    ctx->pc = 0x13F630u;
    {
        const bool branch_taken_0x13f630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F630u;
        // 0x13f634: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f630) {
            ctx->pc = 0x13F650u;
            goto label_13f650;
        }
    }
    ctx->pc = 0x13F638u;
label_13f638:
    // 0x13f638: 0x86670018  lh          $a3, 0x18($s3)
    ctx->pc = 0x13f638u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
label_13f63c:
    // 0x13f63c: 0x8665001a  lh          $a1, 0x1A($s3)
    ctx->pc = 0x13f63cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
label_13f640:
    // 0x13f640: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x13f640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_13f644:
    // 0x13f644: 0xf71021  addu        $v0, $a3, $s7
    ctx->pc = 0x13f644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
label_13f648:
    // 0x13f648: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x13f648u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
label_13f64c:
    // 0x13f64c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x13f64cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_13f650:
    // 0x13f650: 0xae840020  sw          $a0, 0x20($s4)
    ctx->pc = 0x13f650u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 4));
label_13f654:
    // 0x13f654: 0xa6870028  sh          $a3, 0x28($s4)
    ctx->pc = 0x13f654u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 40), (uint16_t)GPR_U32(ctx, 7));
label_13f658:
    // 0x13f658: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x13f658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_13f65c:
    // 0x13f65c: 0xa685002a  sh          $a1, 0x2A($s4)
    ctx->pc = 0x13f65cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 42), (uint16_t)GPR_U32(ctx, 5));
label_13f660:
    // 0x13f660: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13f660u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_13f664:
    // 0x13f664: 0xa6910030  sh          $s1, 0x30($s4)
    ctx->pc = 0x13f664u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 48), (uint16_t)GPR_U32(ctx, 17));
label_13f668:
    // 0x13f668: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x13f668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_13f66c:
    // 0x13f66c: 0xa6900032  sh          $s0, 0x32($s4)
    ctx->pc = 0x13f66cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 50), (uint16_t)GPR_U32(ctx, 16));
label_13f670:
    // 0x13f670: 0xae830034  sw          $v1, 0x34($s4)
    ctx->pc = 0x13f670u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
label_13f674:
    // 0x13f674: 0xa6860038  sh          $a2, 0x38($s4)
    ctx->pc = 0x13f674u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 56), (uint16_t)GPR_U32(ctx, 6));
label_13f678:
    // 0x13f678: 0xa682003a  sh          $v0, 0x3A($s4)
    ctx->pc = 0x13f678u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 58), (uint16_t)GPR_U32(ctx, 2));
label_13f67c:
    // 0x13f67c: 0xa6950040  sh          $s5, 0x40($s4)
    ctx->pc = 0x13f67cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 64), (uint16_t)GPR_U32(ctx, 21));
label_13f680:
    // 0x13f680: 0xa6960042  sh          $s6, 0x42($s4)
    ctx->pc = 0x13f680u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 66), (uint16_t)GPR_U32(ctx, 22));
label_13f684:
    // 0x13f684: 0xae830044  sw          $v1, 0x44($s4)
    ctx->pc = 0x13f684u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
label_13f688:
    // 0x13f688: 0x10000e35  b           . + 4 + (0xE35 << 2)
label_13f68c:
    if (ctx->pc == 0x13F68Cu) {
        ctx->pc = 0x13F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F688u;
        // 0x13f68c: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F690u;
        goto label_13f690;
    }
    ctx->pc = 0x13F688u;
    {
        const bool branch_taken_0x13f688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F688u;
        // 0x13f68c: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f688) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x13F690u;
label_13f690:
    // 0x13f690: 0x96640024  lhu         $a0, 0x24($s3)
    ctx->pc = 0x13f690u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
label_13f694:
    // 0x13f694: 0x9662001e  lhu         $v0, 0x1E($s3)
    ctx->pc = 0x13f694u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
label_13f698:
    // 0x13f698: 0xc7828540  lwc1        $f2, -0x7AC0($gp)
    ctx->pc = 0x13f698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13f69c:
    // 0x13f69c: 0x9663001c  lhu         $v1, 0x1C($s3)
    ctx->pc = 0x13f69cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
label_13f6a0:
    // 0x13f6a0: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x13f6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13f6a4:
    // 0x13f6a4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x13f6a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_13f6a8:
    // 0x13f6a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13f6a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f6ac:
    // 0x13f6ac: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x13f6acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_13f6b0:
    // 0x13f6b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13f6b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_13f6b4:
    // 0x13f6b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13f6b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_13f6b8:
    // 0x13f6b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13f6b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13f6bc:
    // 0x13f6bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13f6bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_13f6c0:
    // 0x13f6c0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x13f6c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_13f6c4:
    // 0x13f6c4: 0x0  nop
    ctx->pc = 0x13f6c4u;
    // NOP
label_13f6c8:
    // 0x13f6c8: 0x10400e25  beqz        $v0, . + 4 + (0xE25 << 2)
label_13f6cc:
    if (ctx->pc == 0x13F6CCu) {
        ctx->pc = 0x13F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6C8u;
        // 0x13f6cc: 0x3066ffff  andi        $a2, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F6D0u;
        goto label_13f6d0;
    }
    ctx->pc = 0x13F6C8u;
    {
        const bool branch_taken_0x13f6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6C8u;
        // 0x13f6cc: 0x3066ffff  andi        $a2, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6c8) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x13F6D0u;
label_13f6d0:
    // 0x13f6d0: 0x70a21818  mult1       $v1, $a1, $v0
    ctx->pc = 0x13f6d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_13f6d4:
    // 0x13f6d4: 0xc24818  mult        $t1, $a2, $v0
    ctx->pc = 0x13f6d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_13f6d8:
    // 0x13f6d8: 0x34302  srl         $t0, $v1, 12
    ctx->pc = 0x13f6d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_13f6dc:
    // 0x13f6dc: 0x866a0022  lh          $t2, 0x22($s3)
    ctx->pc = 0x13f6dcu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
label_13f6e0:
    // 0x13f6e0: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x13f6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_13f6e4:
    // 0x13f6e4: 0x866b0020  lh          $t3, 0x20($s3)
    ctx->pc = 0x13f6e4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_13f6e8:
    // 0x13f6e8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x13f6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_13f6ec:
    // 0x13f6ec: 0x8e640028  lw          $a0, 0x28($s3)
    ctx->pc = 0x13f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_13f6f0:
    // 0x13f6f0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x13f6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_13f6f4:
    // 0x13f6f4: 0x98b02  srl         $s1, $t1, 12
    ctx->pc = 0x13f6f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 9), 12));
label_13f6f8:
    // 0x13f6f8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x13f6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_13f6fc:
    // 0x13f6fc: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x13f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_13f700:
    // 0x13f700: 0x7a982  srl         $s5, $a3, 6
    ctx->pc = 0x13f700u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
label_13f704:
    // 0x13f704: 0x71423818  mult1       $a3, $t2, $v0
    ctx->pc = 0x13f704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_13f708:
    // 0x13f708: 0x74203  sra         $t0, $a3, 8
    ctx->pc = 0x13f708u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), 8));
label_13f70c:
    // 0x13f70c: 0x1624818  mult        $t1, $t3, $v0
    ctx->pc = 0x13f70cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_13f710:
    // 0x13f710: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x13f710u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_13f714:
    // 0x13f714: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x13f714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_13f718:
    // 0x13f718: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x13f718u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_13f71c:
    // 0x13f71c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x13f71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_13f720:
    // 0x13f720: 0x99203  sra         $s2, $t1, 8
    ctx->pc = 0x13f720u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 9), 8));
label_13f724:
    // 0x13f724: 0x78183  sra         $s0, $a3, 6
    ctx->pc = 0x13f724u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 7), 6));
label_13f728:
    // 0x13f728: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x13f728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_13f72c:
    // 0x13f72c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x13f72cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_13f730:
    // 0x13f730: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x13f730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_13f734:
    // 0x13f734: 0x2501825  or          $v1, $s2, $s0
    ctx->pc = 0x13f734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 16));
label_13f738:
    // 0x13f738: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x13f738u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_13f73c:
    // 0x13f73c: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x13f73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_13f740:
    // 0x13f740: 0x2a31825  or          $v1, $s5, $v1
    ctx->pc = 0x13f740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
label_13f744:
    // 0x13f744: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x13f744u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_13f748:
    // 0x13f748: 0x14600e05  bnez        $v1, . + 4 + (0xE05 << 2)
label_13f74c:
    if (ctx->pc == 0x13F74Cu) {
        ctx->pc = 0x13F750u;
        goto label_13f750;
    }
    ctx->pc = 0x13F748u;
    {
        const bool branch_taken_0x13f748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f748) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x13F750u;
label_13f750:
    // 0x13f750: 0x86670038  lh          $a3, 0x38($s3)
    ctx->pc = 0x13f750u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_13f754:
    // 0x13f754: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13f754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_13f758:
    // 0x13f758: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x13f758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_13f75c:
    // 0x13f75c: 0x240b000e  addiu       $t3, $zero, 0xE
    ctx->pc = 0x13f75cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_13f760:
    // 0x13f760: 0x34038011  ori         $v1, $zero, 0x8011
    ctx->pc = 0x13f760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32785);
label_13f764:
    // 0x13f764: 0x240a004c  addiu       $t2, $zero, 0x4C
    ctx->pc = 0x13f764u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_13f768:
    // 0x13f768: 0x646025  or          $t4, $v1, $a0
    ctx->pc = 0x13f768u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_13f76c:
    // 0x13f76c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x13f76cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_13f770:
    // 0x13f770: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x13f770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_13f774:
    // 0x13f774: 0x3c0400df  lui         $a0, 0xDF
    ctx->pc = 0x13f774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)223 << 16));
label_13f778:
    // 0x13f778: 0x34690080  ori         $t1, $v1, 0x80
    ctx->pc = 0x13f778u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_13f77c:
    // 0x13f77c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x13f77cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_13f780:
    // 0x13f780: 0xe26818  mult        $t5, $a3, $v0
    ctx->pc = 0x13f780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_13f784:
    // 0x13f784: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x13f784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
label_13f788:
    // 0x13f788: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x13f788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_13f78c:
    // 0x13f78c: 0xd6b03  sra         $t5, $t5, 12
    ctx->pc = 0x13f78cu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 12));
label_13f790:
    // 0x13f790: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x13f790u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_13f794:
    // 0x13f794: 0xafad0360  sw          $t5, 0x360($sp)
    ctx->pc = 0x13f794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 864), GPR_U32(ctx, 13));
label_13f798:
    // 0x13f798: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x13f798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_13f79c:
    // 0x13f79c: 0x866d003c  lh          $t5, 0x3C($s3)
    ctx->pc = 0x13f79cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_13f7a0:
    // 0x13f7a0: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x13f7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_13f7a4:
    // 0x13f7a4: 0x34631001  ori         $v1, $v1, 0x1001
    ctx->pc = 0x13f7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4097);
label_13f7a8:
    // 0x13f7a8: 0x71a26818  mult1       $t5, $t5, $v0
    ctx->pc = 0x13f7a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_13f7ac:
    // 0x13f7ac: 0xd6b03  sra         $t5, $t5, 12
    ctx->pc = 0x13f7acu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 12));
label_13f7b0:
    // 0x13f7b0: 0xafad0364  sw          $t5, 0x364($sp)
    ctx->pc = 0x13f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 868), GPR_U32(ctx, 13));
label_13f7b4:
    // 0x13f7b4: 0x866d0040  lh          $t5, 0x40($s3)
    ctx->pc = 0x13f7b4u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 64)));
label_13f7b8:
    // 0x13f7b8: 0x1a26818  mult        $t5, $t5, $v0
    ctx->pc = 0x13f7b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_13f7bc:
    // 0x13f7bc: 0xd6b03  sra         $t5, $t5, 12
    ctx->pc = 0x13f7bcu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 12));
label_13f7c0:
    // 0x13f7c0: 0xafad0368  sw          $t5, 0x368($sp)
    ctx->pc = 0x13f7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 872), GPR_U32(ctx, 13));
label_13f7c4:
    // 0x13f7c4: 0x866d0044  lh          $t5, 0x44($s3)
    ctx->pc = 0x13f7c4u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 68)));
label_13f7c8:
    // 0x13f7c8: 0x71a26818  mult1       $t5, $t5, $v0
    ctx->pc = 0x13f7c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_13f7cc:
    // 0x13f7cc: 0xd6b03  sra         $t5, $t5, 12
    ctx->pc = 0x13f7ccu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 12));
label_13f7d0:
    // 0x13f7d0: 0xafad036c  sw          $t5, 0x36C($sp)
    ctx->pc = 0x13f7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 876), GPR_U32(ctx, 13));
label_13f7d4:
    // 0x13f7d4: 0x866d003a  lh          $t5, 0x3A($s3)
    ctx->pc = 0x13f7d4u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
label_13f7d8:
    // 0x13f7d8: 0x1a26818  mult        $t5, $t5, $v0
    ctx->pc = 0x13f7d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_13f7dc:
    // 0x13f7dc: 0xd6b03  sra         $t5, $t5, 12
    ctx->pc = 0x13f7dcu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 12));
label_13f7e0:
    // 0x13f7e0: 0xafad0350  sw          $t5, 0x350($sp)
    ctx->pc = 0x13f7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 13));
label_13f7e4:
    // 0x13f7e4: 0x866d003e  lh          $t5, 0x3E($s3)
    ctx->pc = 0x13f7e4u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 62)));
label_13f7e8:
    // 0x13f7e8: 0x71a26818  mult1       $t5, $t5, $v0
    ctx->pc = 0x13f7e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_13f7ec:
    // 0x13f7ec: 0xd6b03  sra         $t5, $t5, 12
    ctx->pc = 0x13f7ecu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 12));
label_13f7f0:
    // 0x13f7f0: 0xafad0354  sw          $t5, 0x354($sp)
    ctx->pc = 0x13f7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 852), GPR_U32(ctx, 13));
label_13f7f4:
    // 0x13f7f4: 0x866d0042  lh          $t5, 0x42($s3)
    ctx->pc = 0x13f7f4u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 66)));
label_13f7f8:
    // 0x13f7f8: 0x1a26818  mult        $t5, $t5, $v0
    ctx->pc = 0x13f7f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_13f7fc:
    // 0x13f7fc: 0xd6b03  sra         $t5, $t5, 12
    ctx->pc = 0x13f7fcu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 12));
label_13f800:
    // 0x13f800: 0xafad0358  sw          $t5, 0x358($sp)
    ctx->pc = 0x13f800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 856), GPR_U32(ctx, 13));
label_13f804:
    // 0x13f804: 0x866d0046  lh          $t5, 0x46($s3)
    ctx->pc = 0x13f804u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
label_13f808:
    // 0x13f808: 0x71a21018  mult1       $v0, $t5, $v0
    ctx->pc = 0x13f808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_13f80c:
    // 0x13f80c: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x13f80cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
label_13f810:
    // 0x13f810: 0xafa2035c  sw          $v0, 0x35C($sp)
    ctx->pc = 0x13f810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 860), GPR_U32(ctx, 2));
label_13f814:
    // 0x13f814: 0xfe8c0000  sd          $t4, 0x0($s4)
    ctx->pc = 0x13f814u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 12));
label_13f818:
    // 0x13f818: 0xfe8b0008  sd          $t3, 0x8($s4)
    ctx->pc = 0x13f818u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 11));
label_13f81c:
    // 0x13f81c: 0xfe8a0018  sd          $t2, 0x18($s4)
    ctx->pc = 0x13f81cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 10));
label_13f820:
    // 0x13f820: 0xfe890010  sd          $t1, 0x10($s4)
    ctx->pc = 0x13f820u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 9));
label_13f824:
    // 0x13f824: 0xfe880028  sd          $t0, 0x28($s4)
    ctx->pc = 0x13f824u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 8));
label_13f828:
    // 0x13f828: 0xfe870020  sd          $a3, 0x20($s4)
    ctx->pc = 0x13f828u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 7));
label_13f82c:
    // 0x13f82c: 0xfe840038  sd          $a0, 0x38($s4)
    ctx->pc = 0x13f82cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 56), GPR_U64(ctx, 4));
label_13f830:
    // 0x13f830: 0xfe830030  sd          $v1, 0x30($s4)
    ctx->pc = 0x13f830u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 3));
label_13f834:
    // 0x13f834: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x13f834u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954660)));
label_13f838:
    // 0x13f838: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_13f83c:
    if (ctx->pc == 0x13F83Cu) {
        ctx->pc = 0x13F840u;
        goto label_13f840;
    }
    ctx->pc = 0x13F838u;
    {
        const bool branch_taken_0x13f838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f838) {
            ctx->pc = 0x13F848u;
            goto label_13f848;
        }
    }
    ctx->pc = 0x13F840u;
label_13f840:
    // 0x13f840: 0x10000003  b           . + 4 + (0x3 << 2)
label_13f844:
    if (ctx->pc == 0x13F844u) {
        ctx->pc = 0x13F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F840u;
        // 0x13f844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F848u;
        goto label_13f848;
    }
    ctx->pc = 0x13F840u;
    {
        const bool branch_taken_0x13f840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F840u;
        // 0x13f844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f840) {
            ctx->pc = 0x13F850u;
            goto label_13f850;
        }
    }
    ctx->pc = 0x13F848u;
label_13f848:
    // 0x13f848: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x13f848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_13f84c:
    // 0x13f84c: 0x0  nop
    ctx->pc = 0x13f84cu;
    // NOP
label_13f850:
    // 0x13f850: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x13f850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_13f854:
    // 0x13f854: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x13f854u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_13f858:
    // 0x13f858: 0xfe830048  sd          $v1, 0x48($s4)
    ctx->pc = 0x13f858u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 3));
label_13f85c:
    // 0x13f85c: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x13f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
label_13f860:
    // 0x13f860: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13f860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_13f864:
    // 0x13f864: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x13f864u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_13f868:
    // 0x13f868: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13f868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13f86c:
    // 0x13f86c: 0xe21825  or          $v1, $a3, $v0
    ctx->pc = 0x13f86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_13f870:
    // 0x13f870: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x13f870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_13f874:
    // 0x13f874: 0xfe830040  sd          $v1, 0x40($s4)
    ctx->pc = 0x13f874u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 3));
label_13f878:
    // 0x13f878: 0x2402037c  addiu       $v0, $zero, 0x37C
    ctx->pc = 0x13f878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
label_13f87c:
    // 0x13f87c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13f87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_13f880:
    // 0x13f880: 0xfe840058  sd          $a0, 0x58($s4)
    ctx->pc = 0x13f880u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 4));
label_13f884:
    // 0x13f884: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x13f884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_13f888:
    // 0x13f888: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x13f888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_13f88c:
    // 0x13f88c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13f88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13f890:
    // 0x13f890: 0xfe820050  sd          $v0, 0x50($s4)
    ctx->pc = 0x13f890u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 2));
label_13f894:
    // 0x13f894: 0x8fa30360  lw          $v1, 0x360($sp)
    ctx->pc = 0x13f894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_13f898:
    // 0x13f898: 0x8fa20368  lw          $v0, 0x368($sp)
    ctx->pc = 0x13f898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 872)));
label_13f89c:
    // 0x13f89c: 0x243b021  addu        $s6, $s2, $v1
    ctx->pc = 0x13f89cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_13f8a0:
    // 0x13f8a0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x13f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_13f8a4:
    // 0x13f8a4: 0x56082a  slt         $at, $v0, $s6
    ctx->pc = 0x13f8a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_13f8a8:
    // 0x13f8a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_13f8ac:
    if (ctx->pc == 0x13F8ACu) {
        ctx->pc = 0x13F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8A8u;
        // 0x13f8ac: 0x2c0f02d  daddu       $fp, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8B0u;
        goto label_13f8b0;
    }
    ctx->pc = 0x13F8A8u;
    {
        const bool branch_taken_0x13f8a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8A8u;
        // 0x13f8ac: 0x2c0f02d  daddu       $fp, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f8a8) {
            ctx->pc = 0x13F8B8u;
            goto label_13f8b8;
        }
    }
    ctx->pc = 0x13F8B0u;
label_13f8b0:
    // 0x13f8b0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x13f8b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f8b4:
    // 0x13f8b4: 0x0  nop
    ctx->pc = 0x13f8b4u;
    // NOP
label_13f8b8:
    // 0x13f8b8: 0x8fa20364  lw          $v0, 0x364($sp)
    ctx->pc = 0x13f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 868)));
label_13f8bc:
    // 0x13f8bc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_13f8c0:
    // 0x13f8c0: 0x56082a  slt         $at, $v0, $s6
    ctx->pc = 0x13f8c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_13f8c4:
    // 0x13f8c4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_13f8c8:
    if (ctx->pc == 0x13F8C8u) {
        ctx->pc = 0x13F8CCu;
        goto label_13f8cc;
    }
    ctx->pc = 0x13F8C4u;
    {
        const bool branch_taken_0x13f8c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f8c4) {
            ctx->pc = 0x13F8D0u;
            goto label_13f8d0;
        }
    }
    ctx->pc = 0x13F8CCu;
label_13f8cc:
    // 0x13f8cc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x13f8ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f8d0:
    // 0x13f8d0: 0x8fa2036c  lw          $v0, 0x36C($sp)
    ctx->pc = 0x13f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 876)));
label_13f8d4:
    // 0x13f8d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_13f8d8:
    // 0x13f8d8: 0x56082a  slt         $at, $v0, $s6
    ctx->pc = 0x13f8d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_13f8dc:
    // 0x13f8dc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_13f8e0:
    if (ctx->pc == 0x13F8E0u) {
        ctx->pc = 0x13F8E4u;
        goto label_13f8e4;
    }
    ctx->pc = 0x13F8DCu;
    {
        const bool branch_taken_0x13f8dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f8dc) {
            ctx->pc = 0x13F8E8u;
            goto label_13f8e8;
        }
    }
    ctx->pc = 0x13F8E4u;
label_13f8e4:
    // 0x13f8e4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x13f8e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f8e8:
    // 0x13f8e8: 0x8fa20368  lw          $v0, 0x368($sp)
    ctx->pc = 0x13f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 872)));
label_13f8ec:
    // 0x13f8ec: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x13f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_13f8f0:
    // 0x13f8f0: 0x3c2082a  slt         $at, $fp, $v0
    ctx->pc = 0x13f8f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13f8f4:
    // 0x13f8f4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_13f8f8:
    if (ctx->pc == 0x13F8F8u) {
        ctx->pc = 0x13F8FCu;
        goto label_13f8fc;
    }
    ctx->pc = 0x13F8F4u;
    {
        const bool branch_taken_0x13f8f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f8f4) {
            ctx->pc = 0x13F900u;
            goto label_13f900;
        }
    }
    ctx->pc = 0x13F8FCu;
label_13f8fc:
    // 0x13f8fc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x13f8fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f900:
    // 0x13f900: 0x8fa20364  lw          $v0, 0x364($sp)
    ctx->pc = 0x13f900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 868)));
label_13f904:
    // 0x13f904: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_13f908:
    // 0x13f908: 0x3c2082a  slt         $at, $fp, $v0
    ctx->pc = 0x13f908u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13f90c:
    // 0x13f90c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_13f910:
    if (ctx->pc == 0x13F910u) {
        ctx->pc = 0x13F914u;
        goto label_13f914;
    }
    ctx->pc = 0x13F90Cu;
    {
        const bool branch_taken_0x13f90c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f90c) {
            ctx->pc = 0x13F918u;
            goto label_13f918;
        }
    }
    ctx->pc = 0x13F914u;
label_13f914:
    // 0x13f914: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x13f914u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f918:
    // 0x13f918: 0x8fa2036c  lw          $v0, 0x36C($sp)
    ctx->pc = 0x13f918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 876)));
label_13f91c:
    // 0x13f91c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_13f920:
    // 0x13f920: 0x3c2082a  slt         $at, $fp, $v0
    ctx->pc = 0x13f920u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13f924:
    // 0x13f924: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_13f928:
    if (ctx->pc == 0x13F928u) {
        ctx->pc = 0x13F92Cu;
        goto label_13f92c;
    }
    ctx->pc = 0x13F924u;
    {
        const bool branch_taken_0x13f924 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f924) {
            ctx->pc = 0x13F930u;
            goto label_13f930;
        }
    }
    ctx->pc = 0x13F92Cu;
label_13f92c:
    // 0x13f92c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x13f92cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f930:
    // 0x13f930: 0x8fa30350  lw          $v1, 0x350($sp)
    ctx->pc = 0x13f930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_13f934:
    // 0x13f934: 0x8fa20354  lw          $v0, 0x354($sp)
    ctx->pc = 0x13f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 852)));
label_13f938:
    // 0x13f938: 0x203b821  addu        $s7, $s0, $v1
    ctx->pc = 0x13f938u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_13f93c:
    // 0x13f93c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x13f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_13f940:
    // 0x13f940: 0x57082a  slt         $at, $v0, $s7
    ctx->pc = 0x13f940u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_13f944:
    // 0x13f944: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_13f948:
    if (ctx->pc == 0x13F948u) {
        ctx->pc = 0x13F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F944u;
        // 0x13f948: 0xafb701d0  sw          $s7, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F94Cu;
        goto label_13f94c;
    }
    ctx->pc = 0x13F944u;
    {
        const bool branch_taken_0x13f944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F944u;
        // 0x13f948: 0xafb701d0  sw          $s7, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f944) {
            ctx->pc = 0x13F950u;
            goto label_13f950;
        }
    }
    ctx->pc = 0x13F94Cu;
label_13f94c:
    // 0x13f94c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x13f94cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f950:
    // 0x13f950: 0x8fa20358  lw          $v0, 0x358($sp)
    ctx->pc = 0x13f950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 856)));
label_13f954:
    // 0x13f954: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x13f954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_13f958:
    // 0x13f958: 0x57082a  slt         $at, $v0, $s7
    ctx->pc = 0x13f958u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_13f95c:
    // 0x13f95c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_13f960:
    if (ctx->pc == 0x13F960u) {
        ctx->pc = 0x13F964u;
        goto label_13f964;
    }
    ctx->pc = 0x13F95Cu;
    {
        const bool branch_taken_0x13f95c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f95c) {
            ctx->pc = 0x13F968u;
            goto label_13f968;
        }
    }
    ctx->pc = 0x13F964u;
label_13f964:
    // 0x13f964: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x13f964u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f968:
    // 0x13f968: 0x8fa2035c  lw          $v0, 0x35C($sp)
    ctx->pc = 0x13f968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 860)));
label_13f96c:
    // 0x13f96c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x13f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_13f970:
    // 0x13f970: 0x57082a  slt         $at, $v0, $s7
    ctx->pc = 0x13f970u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_13f974:
    // 0x13f974: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_13f978:
    if (ctx->pc == 0x13F978u) {
        ctx->pc = 0x13F97Cu;
        goto label_13f97c;
    }
    ctx->pc = 0x13F974u;
    {
        const bool branch_taken_0x13f974 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f974) {
            ctx->pc = 0x13F980u;
            goto label_13f980;
        }
    }
    ctx->pc = 0x13F97Cu;
label_13f97c:
    // 0x13f97c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x13f97cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f980:
    // 0x13f980: 0x8fa20354  lw          $v0, 0x354($sp)
    ctx->pc = 0x13f980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 852)));
label_13f984:
    // 0x13f984: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x13f984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_13f988:
    // 0x13f988: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x13f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_13f98c:
    // 0x13f98c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x13f98cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_13f990:
    // 0x13f990: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_13f994:
    if (ctx->pc == 0x13F994u) {
        ctx->pc = 0x13F998u;
        goto label_13f998;
    }
    ctx->pc = 0x13F990u;
    {
        const bool branch_taken_0x13f990 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f990) {
            ctx->pc = 0x13F9A0u;
            goto label_13f9a0;
        }
    }
    ctx->pc = 0x13F998u;
label_13f998:
    // 0x13f998: 0xafa301d0  sw          $v1, 0x1D0($sp)
    ctx->pc = 0x13f998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
label_13f99c:
    // 0x13f99c: 0x0  nop
    ctx->pc = 0x13f99cu;
    // NOP
label_13f9a0:
    // 0x13f9a0: 0x8fa20358  lw          $v0, 0x358($sp)
    ctx->pc = 0x13f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 856)));
label_13f9a4:
    // 0x13f9a4: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x13f9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_13f9a8:
    // 0x13f9a8: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x13f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_13f9ac:
    // 0x13f9ac: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x13f9acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_13f9b0:
    // 0x13f9b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_13f9b4:
    if (ctx->pc == 0x13F9B4u) {
        ctx->pc = 0x13F9B8u;
        goto label_13f9b8;
    }
    ctx->pc = 0x13F9B0u;
    {
        const bool branch_taken_0x13f9b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f9b0) {
            ctx->pc = 0x13F9C0u;
            goto label_13f9c0;
        }
    }
    ctx->pc = 0x13F9B8u;
label_13f9b8:
    // 0x13f9b8: 0xafa301d0  sw          $v1, 0x1D0($sp)
    ctx->pc = 0x13f9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
label_13f9bc:
    // 0x13f9bc: 0x0  nop
    ctx->pc = 0x13f9bcu;
    // NOP
label_13f9c0:
    // 0x13f9c0: 0x8fa2035c  lw          $v0, 0x35C($sp)
    ctx->pc = 0x13f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 860)));
label_13f9c4:
    // 0x13f9c4: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x13f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_13f9c8:
    // 0x13f9c8: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x13f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_13f9cc:
    // 0x13f9cc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x13f9ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_13f9d0:
    // 0x13f9d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_13f9d4:
    if (ctx->pc == 0x13F9D4u) {
        ctx->pc = 0x13F9D8u;
        goto label_13f9d8;
    }
    ctx->pc = 0x13F9D0u;
    {
        const bool branch_taken_0x13f9d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f9d0) {
            ctx->pc = 0x13F9E0u;
            goto label_13f9e0;
        }
    }
    ctx->pc = 0x13F9D8u;
label_13f9d8:
    // 0x13f9d8: 0xafa301d0  sw          $v1, 0x1D0($sp)
    ctx->pc = 0x13f9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
label_13f9dc:
    // 0x13f9dc: 0x0  nop
    ctx->pc = 0x13f9dcu;
    // NOP
label_13f9e0:
    // 0x13f9e0: 0x2ac17000  slti        $at, $s6, 0x7000
    ctx->pc = 0x13f9e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)28672) ? 1 : 0);
label_13f9e4:
    // 0x13f9e4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_13f9e8:
    if (ctx->pc == 0x13F9E8u) {
        ctx->pc = 0x13F9ECu;
        goto label_13f9ec;
    }
    ctx->pc = 0x13F9E4u;
    {
        const bool branch_taken_0x13f9e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f9e4) {
            ctx->pc = 0x13F9F0u;
            goto label_13f9f0;
        }
    }
    ctx->pc = 0x13F9ECu;
label_13f9ec:
    // 0x13f9ec: 0x24167000  addiu       $s6, $zero, 0x7000
    ctx->pc = 0x13f9ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_13f9f0:
    // 0x13f9f0: 0x2bc17000  slti        $at, $fp, 0x7000
    ctx->pc = 0x13f9f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)28672) ? 1 : 0);
label_13f9f4:
    // 0x13f9f4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_13f9f8:
    if (ctx->pc == 0x13F9F8u) {
        ctx->pc = 0x13F9FCu;
        goto label_13f9fc;
    }
    ctx->pc = 0x13F9F4u;
    {
        const bool branch_taken_0x13f9f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f9f4) {
            ctx->pc = 0x13FA00u;
            goto label_13fa00;
        }
    }
    ctx->pc = 0x13F9FCu;
label_13f9fc:
    // 0x13f9fc: 0x241e7000  addiu       $fp, $zero, 0x7000
    ctx->pc = 0x13f9fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_13fa00:
    // 0x13fa00: 0x34018ff1  ori         $at, $zero, 0x8FF1
    ctx->pc = 0x13fa00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36849);
label_13fa04:
    // 0x13fa04: 0x2c1082a  slt         $at, $s6, $at
    ctx->pc = 0x13fa04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_13fa08:
    // 0x13fa08: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_13fa0c:
    if (ctx->pc == 0x13FA0Cu) {
        ctx->pc = 0x13FA10u;
        goto label_13fa10;
    }
    ctx->pc = 0x13FA08u;
    {
        const bool branch_taken_0x13fa08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fa08) {
            ctx->pc = 0x13FA18u;
            goto label_13fa18;
        }
    }
    ctx->pc = 0x13FA10u;
label_13fa10:
    // 0x13fa10: 0x34168ff0  ori         $s6, $zero, 0x8FF0
    ctx->pc = 0x13fa10u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36848);
label_13fa14:
    // 0x13fa14: 0x0  nop
    ctx->pc = 0x13fa14u;
    // NOP
label_13fa18:
    // 0x13fa18: 0x34018ff1  ori         $at, $zero, 0x8FF1
    ctx->pc = 0x13fa18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36849);
label_13fa1c:
    // 0x13fa1c: 0x3c1082a  slt         $at, $fp, $at
    ctx->pc = 0x13fa1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_13fa20:
    // 0x13fa20: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_13fa24:
    if (ctx->pc == 0x13FA24u) {
        ctx->pc = 0x13FA28u;
        goto label_13fa28;
    }
    ctx->pc = 0x13FA20u;
    {
        const bool branch_taken_0x13fa20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fa20) {
            ctx->pc = 0x13FA30u;
            goto label_13fa30;
        }
    }
    ctx->pc = 0x13FA28u;
label_13fa28:
    // 0x13fa28: 0x341e8ff0  ori         $fp, $zero, 0x8FF0
    ctx->pc = 0x13fa28u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36848);
label_13fa2c:
    // 0x13fa2c: 0x0  nop
    ctx->pc = 0x13fa2cu;
    // NOP
label_13fa30:
    // 0x13fa30: 0x2ae17900  slti        $at, $s7, 0x7900
    ctx->pc = 0x13fa30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)30976) ? 1 : 0);
label_13fa34:
    // 0x13fa34: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_13fa38:
    if (ctx->pc == 0x13FA38u) {
        ctx->pc = 0x13FA3Cu;
        goto label_13fa3c;
    }
    ctx->pc = 0x13FA34u;
    {
        const bool branch_taken_0x13fa34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fa34) {
            ctx->pc = 0x13FA40u;
            goto label_13fa40;
        }
    }
    ctx->pc = 0x13FA3Cu;
label_13fa3c:
    // 0x13fa3c: 0x24177900  addiu       $s7, $zero, 0x7900
    ctx->pc = 0x13fa3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
label_13fa40:
    // 0x13fa40: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x13fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_13fa44:
    // 0x13fa44: 0x28417900  slti        $at, $v0, 0x7900
    ctx->pc = 0x13fa44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30976) ? 1 : 0);
label_13fa48:
    // 0x13fa48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_13fa4c:
    if (ctx->pc == 0x13FA4Cu) {
        ctx->pc = 0x13FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA48u;
        // 0x13fa4c: 0x24027900  addiu       $v0, $zero, 0x7900 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FA50u;
        goto label_13fa50;
    }
    ctx->pc = 0x13FA48u;
    {
        const bool branch_taken_0x13fa48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA48u;
        // 0x13fa4c: 0x24027900  addiu       $v0, $zero, 0x7900 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa48) {
            ctx->pc = 0x13FA58u;
            goto label_13fa58;
        }
    }
    ctx->pc = 0x13FA50u;
label_13fa50:
    // 0x13fa50: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x13fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_13fa54:
    // 0x13fa54: 0x0  nop
    ctx->pc = 0x13fa54u;
    // NOP
label_13fa58:
    // 0x13fa58: 0x340186f1  ori         $at, $zero, 0x86F1
    ctx->pc = 0x13fa58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34545);
label_13fa5c:
    // 0x13fa5c: 0x2e1082a  slt         $at, $s7, $at
    ctx->pc = 0x13fa5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_13fa60:
    // 0x13fa60: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_13fa64:
    if (ctx->pc == 0x13FA64u) {
        ctx->pc = 0x13FA68u;
        goto label_13fa68;
    }
    ctx->pc = 0x13FA60u;
    {
        const bool branch_taken_0x13fa60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fa60) {
            ctx->pc = 0x13FA70u;
            goto label_13fa70;
        }
    }
    ctx->pc = 0x13FA68u;
label_13fa68:
    // 0x13fa68: 0x341786f0  ori         $s7, $zero, 0x86F0
    ctx->pc = 0x13fa68u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34544);
label_13fa6c:
    // 0x13fa6c: 0x0  nop
    ctx->pc = 0x13fa6cu;
    // NOP
label_13fa70:
    // 0x13fa70: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x13fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_13fa74:
    // 0x13fa74: 0x340186f1  ori         $at, $zero, 0x86F1
    ctx->pc = 0x13fa74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34545);
label_13fa78:
    // 0x13fa78: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x13fa78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_13fa7c:
    // 0x13fa7c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_13fa80:
    if (ctx->pc == 0x13FA80u) {
        ctx->pc = 0x13FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA7Cu;
        // 0x13fa80: 0x340286f0  ori         $v0, $zero, 0x86F0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34544);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FA84u;
        goto label_13fa84;
    }
    ctx->pc = 0x13FA7Cu;
    {
        const bool branch_taken_0x13fa7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA7Cu;
        // 0x13fa80: 0x340286f0  ori         $v0, $zero, 0x86F0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34544);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa7c) {
            ctx->pc = 0x13FA88u;
            goto label_13fa88;
        }
    }
    ctx->pc = 0x13FA84u;
label_13fa84:
    // 0x13fa84: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x13fa84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_13fa88:
    // 0x13fa88: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x13fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_13fa8c:
    // 0x13fa8c: 0x26d69000  addiu       $s6, $s6, -0x7000
    ctx->pc = 0x13fa8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294938624));
label_13fa90:
    // 0x13fa90: 0x27de9000  addiu       $fp, $fp, -0x7000
    ctx->pc = 0x13fa90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294938624));
label_13fa94:
    // 0x13fa94: 0x26f78700  addiu       $s7, $s7, -0x7900
    ctx->pc = 0x13fa94u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936320));
label_13fa98:
    // 0x13fa98: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x13fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_13fa9c:
    // 0x13fa9c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x13fa9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_13faa0:
    // 0x13faa0: 0x24428700  addiu       $v0, $v0, -0x7900
    ctx->pc = 0x13faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
label_13faa4:
    // 0x13faa4: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x13faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_13faa8:
    // 0x13faa8: 0x161103  sra         $v0, $s6, 4
    ctx->pc = 0x13faa8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 22), 4));
label_13faac:
    // 0x13faac: 0xfe840068  sd          $a0, 0x68($s4)
    ctx->pc = 0x13faacu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 104), GPR_U64(ctx, 4));
label_13fab0:
    // 0x13fab0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x13fab0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_13fab4:
    // 0x13fab4: 0x1e1103  sra         $v0, $fp, 4
    ctx->pc = 0x13fab4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 30), 4));
label_13fab8:
    // 0x13fab8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x13fab8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_13fabc:
    // 0x13fabc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13fabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_13fac0:
    // 0x13fac0: 0x171103  sra         $v0, $s7, 4
    ctx->pc = 0x13fac0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 23), 4));
label_13fac4:
    // 0x13fac4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x13fac4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_13fac8:
    // 0x13fac8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13fac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_13facc:
    // 0x13facc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x13faccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_13fad0:
    // 0x13fad0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13fad0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_13fad4:
    // 0x13fad4: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x13fad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_13fad8:
    // 0x13fad8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13fad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_13fadc:
    // 0x13fadc: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x13fadcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13fae0:
    // 0x13fae0: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x13fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_13fae4:
    // 0x13fae4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x13fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_13fae8:
    // 0x13fae8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x13fae8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_13faec:
    // 0x13faec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13faecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_13faf0:
    // 0x13faf0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13faf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_13faf4:
    // 0x13faf4: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x13faf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
label_13faf8:
    // 0x13faf8: 0xe84025  or          $t0, $a3, $t0
    ctx->pc = 0x13faf8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_13fafc:
    // 0x13fafc: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x13fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
label_13fb00:
    // 0x13fb00: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x13fb00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_13fb04:
    // 0x13fb04: 0xfe880060  sd          $t0, 0x60($s4)
    ctx->pc = 0x13fb04u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 8));
label_13fb08:
    // 0x13fb08: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x13fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_13fb0c:
    // 0x13fb0c: 0xfe830078  sd          $v1, 0x78($s4)
    ctx->pc = 0x13fb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 3));
label_13fb10:
    // 0x13fb10: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x13fb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_13fb14:
    // 0x13fb14: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x13fb14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_13fb18:
    // 0x13fb18: 0xfe820070  sd          $v0, 0x70($s4)
    ctx->pc = 0x13fb18u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 2));
label_13fb1c:
    // 0x13fb1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13fb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13fb20:
    // 0x13fb20: 0x24020116  addiu       $v0, $zero, 0x116
    ctx->pc = 0x13fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
label_13fb24:
    // 0x13fb24: 0xfe800088  sd          $zero, 0x88($s4)
    ctx->pc = 0x13fb24u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 136), GPR_U64(ctx, 0));
label_13fb28:
    // 0x13fb28: 0xfe820080  sd          $v0, 0x80($s4)
    ctx->pc = 0x13fb28u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 128), GPR_U64(ctx, 2));
label_13fb2c:
    // 0x13fb2c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x13fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_13fb30:
    // 0x13fb30: 0xfe870098  sd          $a3, 0x98($s4)
    ctx->pc = 0x13fb30u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 152), GPR_U64(ctx, 7));
label_13fb34:
    // 0x13fb34: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x13fb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_13fb38:
    // 0x13fb38: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x13fb38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_13fb3c:
    // 0x13fb3c: 0xfe820090  sd          $v0, 0x90($s4)
    ctx->pc = 0x13fb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 144), GPR_U64(ctx, 2));
label_13fb40:
    // 0x13fb40: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x13fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_13fb44:
    // 0x13fb44: 0xfe8800a8  sd          $t0, 0xA8($s4)
    ctx->pc = 0x13fb44u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 168), GPR_U64(ctx, 8));
label_13fb48:
    // 0x13fb48: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x13fb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_13fb4c:
    // 0x13fb4c: 0xfe8200a0  sd          $v0, 0xA0($s4)
    ctx->pc = 0x13fb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 160), GPR_U64(ctx, 2));
label_13fb50:
    // 0x13fb50: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x13fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
label_13fb54:
    // 0x13fb54: 0xfe8700b8  sd          $a3, 0xB8($s4)
    ctx->pc = 0x13fb54u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 184), GPR_U64(ctx, 7));
label_13fb58:
    // 0x13fb58: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x13fb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
label_13fb5c:
    // 0x13fb5c: 0x34078700  ori         $a3, $zero, 0x8700
    ctx->pc = 0x13fb5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
label_13fb60:
    // 0x13fb60: 0xfe8200b0  sd          $v0, 0xB0($s4)
    ctx->pc = 0x13fb60u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 176), GPR_U64(ctx, 2));
label_13fb64:
    // 0x13fb64: 0x3c020e08  lui         $v0, 0xE08
    ctx->pc = 0x13fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3592 << 16));
label_13fb68:
    // 0x13fb68: 0xfe8800c8  sd          $t0, 0xC8($s4)
    ctx->pc = 0x13fb68u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 200), GPR_U64(ctx, 8));
label_13fb6c:
    // 0x13fb6c: 0x34422008  ori         $v0, $v0, 0x2008
    ctx->pc = 0x13fb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8200);
label_13fb70:
    // 0x13fb70: 0x74438  dsll        $t0, $a3, 16
    ctx->pc = 0x13fb70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << 16);
label_13fb74:
    // 0x13fb74: 0xfe8200c0  sd          $v0, 0xC0($s4)
    ctx->pc = 0x13fb74u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 192), GPR_U64(ctx, 2));
label_13fb78:
    // 0x13fb78: 0x3c0700df  lui         $a3, 0xDF
    ctx->pc = 0x13fb78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)223 << 16));
label_13fb7c:
    // 0x13fb7c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x13fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_13fb80:
    // 0x13fb80: 0x35099000  ori         $t1, $t0, 0x9000
    ctx->pc = 0x13fb80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)36864);
label_13fb84:
    // 0x13fb84: 0xfe8200d8  sd          $v0, 0xD8($s4)
    ctx->pc = 0x13fb84u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 216), GPR_U64(ctx, 2));
label_13fb88:
    // 0x13fb88: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x13fb88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
label_13fb8c:
    // 0x13fb8c: 0xfe8900d0  sd          $t1, 0xD0($s4)
    ctx->pc = 0x13fb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 208), GPR_U64(ctx, 9));
label_13fb90:
    // 0x13fb90: 0x3c0701ff  lui         $a3, 0x1FF
    ctx->pc = 0x13fb90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)511 << 16));
label_13fb94:
    // 0x13fb94: 0xfe8400e8  sd          $a0, 0xE8($s4)
    ctx->pc = 0x13fb94u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 232), GPR_U64(ctx, 4));
label_13fb98:
    // 0x13fb98: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x13fb98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_13fb9c:
    // 0x13fb9c: 0xfe8700e0  sd          $a3, 0xE0($s4)
    ctx->pc = 0x13fb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 224), GPR_U64(ctx, 7));
label_13fba0:
    // 0x13fba0: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x13fba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_13fba4:
    // 0x13fba4: 0xfe8400f8  sd          $a0, 0xF8($s4)
    ctx->pc = 0x13fba4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 248), GPR_U64(ctx, 4));
label_13fba8:
    // 0x13fba8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x13fba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_13fbac:
    // 0x13fbac: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x13fbacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
label_13fbb0:
    // 0x13fbb0: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x13fbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_13fbb4:
    // 0x13fbb4: 0x873825  or          $a3, $a0, $a3
    ctx->pc = 0x13fbb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_13fbb8:
    // 0x13fbb8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x13fbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_13fbbc:
    // 0x13fbbc: 0xfe8700f0  sd          $a3, 0xF0($s4)
    ctx->pc = 0x13fbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 240), GPR_U64(ctx, 7));
label_13fbc0:
    // 0x13fbc0: 0xfe840108  sd          $a0, 0x108($s4)
    ctx->pc = 0x13fbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 264), GPR_U64(ctx, 4));
label_13fbc4:
    // 0x13fbc4: 0xfe820100  sd          $v0, 0x100($s4)
    ctx->pc = 0x13fbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 256), GPR_U64(ctx, 2));
label_13fbc8:
    // 0x13fbc8: 0xfe830118  sd          $v1, 0x118($s4)
    ctx->pc = 0x13fbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 280), GPR_U64(ctx, 3));
label_13fbcc:
    // 0x13fbcc: 0x8c22f014  lw          $v0, -0xFEC($at)
    ctx->pc = 0x13fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
label_13fbd0:
    // 0x13fbd0: 0xdc420040  ld          $v0, 0x40($v0)
    ctx->pc = 0x13fbd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 64)));
label_13fbd4:
    // 0x13fbd4: 0xfe820110  sd          $v0, 0x110($s4)
    ctx->pc = 0x13fbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 272), GPR_U64(ctx, 2));
label_13fbd8:
    // 0x13fbd8: 0x96620026  lhu         $v0, 0x26($s3)
    ctx->pc = 0x13fbd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
label_13fbdc:
    // 0x13fbdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13fbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_13fbe0:
    // 0x13fbe0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_13fbe4:
    if (ctx->pc == 0x13FBE4u) {
        ctx->pc = 0x13FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FBE0u;
        // 0x13fbe4: 0x26940120  addiu       $s4, $s4, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FBE8u;
        goto label_13fbe8;
    }
    ctx->pc = 0x13FBE0u;
    {
        const bool branch_taken_0x13fbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FBE0u;
        // 0x13fbe4: 0x26940120  addiu       $s4, $s4, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fbe0) {
            ctx->pc = 0x13FC08u;
            goto label_13fc08;
        }
    }
    ctx->pc = 0x13FBE8u;
label_13fbe8:
    // 0x13fbe8: 0x86620018  lh          $v0, 0x18($s3)
    ctx->pc = 0x13fbe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
label_13fbec:
    // 0x13fbec: 0xa7a20200  sh          $v0, 0x200($sp)
    ctx->pc = 0x13fbecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 512), (uint16_t)GPR_U32(ctx, 2));
label_13fbf0:
    // 0x13fbf0: 0x8662001a  lh          $v0, 0x1A($s3)
    ctx->pc = 0x13fbf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
label_13fbf4:
    // 0x13fbf4: 0xa7a201f0  sh          $v0, 0x1F0($sp)
    ctx->pc = 0x13fbf4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 496), (uint16_t)GPR_U32(ctx, 2));
label_13fbf8:
    // 0x13fbf8: 0x87a20200  lh          $v0, 0x200($sp)
    ctx->pc = 0x13fbf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 512)));
label_13fbfc:
    // 0x13fbfc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_13fc00:
    // 0x13fc00: 0x10000009  b           . + 4 + (0x9 << 2)
label_13fc04:
    if (ctx->pc == 0x13FC04u) {
        ctx->pc = 0x13FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC00u;
        // 0x13fc04: 0xa7a20210  sh          $v0, 0x210($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 528), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FC08u;
        goto label_13fc08;
    }
    ctx->pc = 0x13FC00u;
    {
        const bool branch_taken_0x13fc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC00u;
        // 0x13fc04: 0xa7a20210  sh          $v0, 0x210($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 528), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc00) {
            ctx->pc = 0x13FC28u;
            goto label_13fc28;
        }
    }
    ctx->pc = 0x13FC08u;
label_13fc08:
    // 0x13fc08: 0x86620018  lh          $v0, 0x18($s3)
    ctx->pc = 0x13fc08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
label_13fc0c:
    // 0x13fc0c: 0xa7a20210  sh          $v0, 0x210($sp)
    ctx->pc = 0x13fc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 528), (uint16_t)GPR_U32(ctx, 2));
label_13fc10:
    // 0x13fc10: 0x8662001a  lh          $v0, 0x1A($s3)
    ctx->pc = 0x13fc10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
label_13fc14:
    // 0x13fc14: 0xa7a201f0  sh          $v0, 0x1F0($sp)
    ctx->pc = 0x13fc14u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 496), (uint16_t)GPR_U32(ctx, 2));
label_13fc18:
    // 0x13fc18: 0x87a20210  lh          $v0, 0x210($sp)
    ctx->pc = 0x13fc18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 528)));
label_13fc1c:
    // 0x13fc1c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_13fc20:
    // 0x13fc20: 0xa7a20200  sh          $v0, 0x200($sp)
    ctx->pc = 0x13fc20u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 512), (uint16_t)GPR_U32(ctx, 2));
label_13fc24:
    // 0x13fc24: 0x0  nop
    ctx->pc = 0x13fc24u;
    // NOP
label_13fc28:
    // 0x13fc28: 0x87a201f0  lh          $v0, 0x1F0($sp)
    ctx->pc = 0x13fc28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 496)));
label_13fc2c:
    // 0x13fc2c: 0x3c03c400  lui         $v1, 0xC400
    ctx->pc = 0x13fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50176 << 16));
label_13fc30:
    // 0x13fc30: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x13fc30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_13fc34:
    // 0x13fc34: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x13fc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_13fc38:
    // 0x13fc38: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x13fc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_13fc3c:
    // 0x13fc3c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x13fc3cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_13fc40:
    // 0x13fc40: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x13fc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13fc44:
    // 0x13fc44: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_13fc48:
    // 0x13fc48: 0xa7a201e0  sh          $v0, 0x1E0($sp)
    ctx->pc = 0x13fc48u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 480), (uint16_t)GPR_U32(ctx, 2));
label_13fc4c:
    // 0x13fc4c: 0x3c023434  lui         $v0, 0x3434
    ctx->pc = 0x13fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13364 << 16));
label_13fc50:
    // 0x13fc50: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x13fc50u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_13fc54:
    // 0x13fc54: 0x34423160  ori         $v0, $v0, 0x3160
    ctx->pc = 0x13fc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12640);
label_13fc58:
    // 0x13fc58: 0x3403f434  ori         $v1, $zero, 0xF434
    ctx->pc = 0x13fc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62516);
label_13fc5c:
    // 0x13fc5c: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x13fc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_13fc60:
    // 0x13fc60: 0x24020154  addiu       $v0, $zero, 0x154
    ctx->pc = 0x13fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
label_13fc64:
    // 0x13fc64: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x13fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
label_13fc68:
    // 0x13fc68: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x13fc68u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_13fc6c:
    // 0x13fc6c: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x13fc6cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_13fc70:
    // 0x13fc70: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x13fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_13fc74:
    // 0x13fc74: 0xc04cfd8  jal         func_133F60
label_13fc78:
    if (ctx->pc == 0x13FC78u) {
        ctx->pc = 0x13FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC74u;
        // 0x13fc78: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FC7Cu;
        goto label_13fc7c;
    }
    ctx->pc = 0x13FC74u;
    SET_GPR_U32(ctx, 31, 0x13FC7Cu);
    ctx->pc = 0x13FC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC74u;
    // 0x13fc78: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x13FC74u, 0x13FC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC7Cu;
label_13fc7c:
    // 0x13fc7c: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x13fc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_13fc80:
    // 0x13fc80: 0x3c194124  lui         $t9, 0x4124
    ctx->pc = 0x13fc80u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)16676 << 16));
label_13fc84:
    // 0x13fc84: 0x161103  sra         $v0, $s6, 4
    ctx->pc = 0x13fc84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 22), 4));
label_13fc88:
    // 0x13fc88: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x13fc88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_13fc8c:
    // 0x13fc8c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13fc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_13fc90:
    // 0x13fc90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x13fc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_13fc94:
    // 0x13fc94: 0x1e1103  sra         $v0, $fp, 4
    ctx->pc = 0x13fc94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 30), 4));
label_13fc98:
    // 0x13fc98: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x13fc98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_13fc9c:
    // 0x13fc9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13fc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_13fca0:
    // 0x13fca0: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x13fca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
label_13fca4:
    // 0x13fca4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13fca4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_13fca8:
    // 0x13fca8: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x13fca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
label_13fcac:
    // 0x13fcac: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x13fcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
label_13fcb0:
    // 0x13fcb0: 0x264a9008  addiu       $t2, $s2, -0x6FF8
    ctx->pc = 0x13fcb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938632));
label_13fcb4:
    // 0x13fcb4: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x13fcb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_13fcb8:
    // 0x13fcb8: 0x26098708  addiu       $t1, $s0, -0x78F8
    ctx->pc = 0x13fcb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936328));
label_13fcbc:
    // 0x13fcbc: 0x171103  sra         $v0, $s7, 4
    ctx->pc = 0x13fcbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 23), 4));
label_13fcc0:
    // 0x13fcc0: 0x26289008  addiu       $t0, $s1, -0x6FF8
    ctx->pc = 0x13fcc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 4294938632));
label_13fcc4:
    // 0x13fcc4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13fcc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_13fcc8:
    // 0x13fcc8: 0x5b83c  dsll32      $s7, $a1, 0
    ctx->pc = 0x13fcc8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) << (32 + 0));
label_13fccc:
    // 0x13fccc: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x13fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_13fcd0:
    // 0x13fcd0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x13fcd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_13fcd4:
    // 0x13fcd4: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x13fcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
label_13fcd8:
    // 0x13fcd8: 0x37391260  ori         $t9, $t9, 0x1260
    ctx->pc = 0x13fcd8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)4704);
label_13fcdc:
    // 0x13fcdc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x13fcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_13fce0:
    // 0x13fce0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x13fce0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_13fce4:
    // 0x13fce4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13fce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_13fce8:
    // 0x13fce8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13fce8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_13fcec:
    // 0x13fcec: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x13fcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_13fcf0:
    // 0x13fcf0: 0x436825  or          $t5, $v0, $v1
    ctx->pc = 0x13fcf0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13fcf4:
    // 0x13fcf4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_13fcf8:
    // 0x13fcf8: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x13fcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_13fcfc:
    // 0x13fcfc: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x13fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_13fd00:
    // 0x13fd00: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x13fd00u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_13fd04:
    // 0x13fd04: 0x87a20210  lh          $v0, 0x210($sp)
    ctx->pc = 0x13fd04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 528)));
label_13fd08:
    // 0x13fd08: 0xa6820028  sh          $v0, 0x28($s4)
    ctx->pc = 0x13fd08u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 40), (uint16_t)GPR_U32(ctx, 2));
label_13fd0c:
    // 0x13fd0c: 0x87a201f0  lh          $v0, 0x1F0($sp)
    ctx->pc = 0x13fd0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 496)));
label_13fd10:
    // 0x13fd10: 0xa682002a  sh          $v0, 0x2A($s4)
    ctx->pc = 0x13fd10u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 42), (uint16_t)GPR_U32(ctx, 2));
label_13fd14:
    // 0x13fd14: 0x8fa70360  lw          $a3, 0x360($sp)
    ctx->pc = 0x13fd14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_13fd18:
    // 0x13fd18: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x13fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_13fd1c:
    // 0x13fd1c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x13fd1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_13fd20:
    // 0x13fd20: 0x34028007  ori         $v0, $zero, 0x8007
    ctx->pc = 0x13fd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32775);
label_13fd24:
    // 0x13fd24: 0x57b025  or          $s6, $v0, $s7
    ctx->pc = 0x13fd24u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
label_13fd28:
    // 0x13fd28: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x13fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_13fd2c:
    // 0x13fd2c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x13fd2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_13fd30:
    // 0x13fd30: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x13fd30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_13fd34:
    // 0x13fd34: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x13fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
label_13fd38:
    // 0x13fd38: 0xa6870030  sh          $a3, 0x30($s4)
    ctx->pc = 0x13fd38u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 48), (uint16_t)GPR_U32(ctx, 7));
label_13fd3c:
    // 0x13fd3c: 0x70067b89  pcpyld      $t7, $zero, $a2
    ctx->pc = 0x13fd3cu;
    SET_GPR_VEC(ctx, 15, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
label_13fd40:
    // 0x13fd40: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x13fd40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_13fd44:
    // 0x13fd44: 0x8fa60350  lw          $a2, 0x350($sp)
    ctx->pc = 0x13fd44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_13fd48:
    // 0x13fd48: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x13fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
label_13fd4c:
    // 0x13fd4c: 0x26a78708  addiu       $a3, $s5, -0x78F8
    ctx->pc = 0x13fd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936328));
label_13fd50:
    // 0x13fd50: 0x457025  or          $t6, $v0, $a1
    ctx->pc = 0x13fd50u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_13fd54:
    // 0x13fd54: 0x24057900  addiu       $a1, $zero, 0x7900
    ctx->pc = 0x13fd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
label_13fd58:
    // 0x13fd58: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x13fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_13fd5c:
    // 0x13fd5c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x13fd5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_13fd60:
    // 0x13fd60: 0x456025  or          $t4, $v0, $a1
    ctx->pc = 0x13fd60u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_13fd64:
    // 0x13fd64: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x13fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_13fd68:
    // 0x13fd68: 0x3c05e400  lui         $a1, 0xE400
    ctx->pc = 0x13fd68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58368 << 16));
label_13fd6c:
    // 0x13fd6c: 0xa6820032  sh          $v0, 0x32($s4)
    ctx->pc = 0x13fd6cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 50), (uint16_t)GPR_U32(ctx, 2));
label_13fd70:
    // 0x13fd70: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x13fd70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_13fd74:
    // 0x13fd74: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x13fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_13fd78:
    // 0x13fd78: 0x8e660030  lw          $a2, 0x30($s3)
    ctx->pc = 0x13fd78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_13fd7c:
    // 0x13fd7c: 0x344b17fd  ori         $t3, $v0, 0x17FD
    ctx->pc = 0x13fd7cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
label_13fd80:
    // 0x13fd80: 0x3c023900  lui         $v0, 0x3900
    ctx->pc = 0x13fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14592 << 16));
label_13fd84:
    // 0x13fd84: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x13fd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_13fd88:
    // 0x13fd88: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x13fd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_13fd8c:
    // 0x13fd8c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x13fd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_13fd90:
    // 0x13fd90: 0xae860034  sw          $a2, 0x34($s4)
    ctx->pc = 0x13fd90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 6));
label_13fd94:
    // 0x13fd94: 0x7002c389  pcpyld      $t8, $zero, $v0
    ctx->pc = 0x13fd94u;
    SET_GPR_VEC(ctx, 24, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_13fd98:
    // 0x13fd98: 0x87a20200  lh          $v0, 0x200($sp)
    ctx->pc = 0x13fd98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 512)));
label_13fd9c:
    // 0x13fd9c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x13fd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_13fda0:
    // 0x13fda0: 0x34be2412  ori         $fp, $a1, 0x2412
    ctx->pc = 0x13fda0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9234);
label_13fda4:
    // 0x13fda4: 0x3c066402  lui         $a2, 0x6402
    ctx->pc = 0x13fda4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25602 << 16));
label_13fda8:
    // 0x13fda8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x13fda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_13fdac:
    // 0x13fdac: 0x34c61000  ori         $a2, $a2, 0x1000
    ctx->pc = 0x13fdacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4096);
label_13fdb0:
    // 0x13fdb0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x13fdb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_13fdb4:
    // 0x13fdb4: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x13fdb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_13fdb8:
    // 0x13fdb8: 0x34058002  ori         $a1, $zero, 0x8002
    ctx->pc = 0x13fdb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
label_13fdbc:
    // 0x13fdbc: 0xa6820038  sh          $v0, 0x38($s4)
    ctx->pc = 0x13fdbcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 56), (uint16_t)GPR_U32(ctx, 2));
label_13fdc0:
    // 0x13fdc0: 0xb72825  or          $a1, $a1, $s7
    ctx->pc = 0x13fdc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 23));
label_13fdc4:
    // 0x13fdc4: 0x87a201f0  lh          $v0, 0x1F0($sp)
    ctx->pc = 0x13fdc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 496)));
label_13fdc8:
    // 0x13fdc8: 0xa682003a  sh          $v0, 0x3A($s4)
    ctx->pc = 0x13fdc8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 58), (uint16_t)GPR_U32(ctx, 2));
label_13fdcc:
    // 0x13fdcc: 0x8fa20364  lw          $v0, 0x364($sp)
    ctx->pc = 0x13fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 868)));
label_13fdd0:
    // 0x13fdd0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_13fdd4:
    // 0x13fdd4: 0xa6820040  sh          $v0, 0x40($s4)
    ctx->pc = 0x13fdd4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 64), (uint16_t)GPR_U32(ctx, 2));
label_13fdd8:
    // 0x13fdd8: 0x8fa20354  lw          $v0, 0x354($sp)
    ctx->pc = 0x13fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 852)));
label_13fddc:
    // 0x13fddc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x13fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_13fde0:
    // 0x13fde0: 0xa6820042  sh          $v0, 0x42($s4)
    ctx->pc = 0x13fde0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 66), (uint16_t)GPR_U32(ctx, 2));
label_13fde4:
    // 0x13fde4: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x13fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_13fde8:
    // 0x13fde8: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x13fde8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
label_13fdec:
    // 0x13fdec: 0x87a20210  lh          $v0, 0x210($sp)
    ctx->pc = 0x13fdecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 528)));
label_13fdf0:
    // 0x13fdf0: 0xa6820048  sh          $v0, 0x48($s4)
    ctx->pc = 0x13fdf0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 72), (uint16_t)GPR_U32(ctx, 2));
label_13fdf4:
    // 0x13fdf4: 0x87a201e0  lh          $v0, 0x1E0($sp)
    ctx->pc = 0x13fdf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 480)));
label_13fdf8:
    // 0x13fdf8: 0xa682004a  sh          $v0, 0x4A($s4)
    ctx->pc = 0x13fdf8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 74), (uint16_t)GPR_U32(ctx, 2));
label_13fdfc:
    // 0x13fdfc: 0x8fa20368  lw          $v0, 0x368($sp)
    ctx->pc = 0x13fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 872)));
label_13fe00:
    // 0x13fe00: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x13fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_13fe04:
    // 0x13fe04: 0xa6820050  sh          $v0, 0x50($s4)
    ctx->pc = 0x13fe04u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 80), (uint16_t)GPR_U32(ctx, 2));
label_13fe08:
    // 0x13fe08: 0x8fa20358  lw          $v0, 0x358($sp)
    ctx->pc = 0x13fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 856)));
label_13fe0c:
    // 0x13fe0c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x13fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_13fe10:
    // 0x13fe10: 0xa6820052  sh          $v0, 0x52($s4)
    ctx->pc = 0x13fe10u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 82), (uint16_t)GPR_U32(ctx, 2));
label_13fe14:
    // 0x13fe14: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x13fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_13fe18:
    // 0x13fe18: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x13fe18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_13fe1c:
    // 0x13fe1c: 0x87a20200  lh          $v0, 0x200($sp)
    ctx->pc = 0x13fe1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 512)));
label_13fe20:
    // 0x13fe20: 0xa6820058  sh          $v0, 0x58($s4)
    ctx->pc = 0x13fe20u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 88), (uint16_t)GPR_U32(ctx, 2));
label_13fe24:
    // 0x13fe24: 0x87a201e0  lh          $v0, 0x1E0($sp)
    ctx->pc = 0x13fe24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 480)));
label_13fe28:
    // 0x13fe28: 0xa682005a  sh          $v0, 0x5A($s4)
    ctx->pc = 0x13fe28u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 90), (uint16_t)GPR_U32(ctx, 2));
label_13fe2c:
    // 0x13fe2c: 0x8fa2036c  lw          $v0, 0x36C($sp)
    ctx->pc = 0x13fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 876)));
label_13fe30:
    // 0x13fe30: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_13fe34:
    // 0x13fe34: 0xa6820060  sh          $v0, 0x60($s4)
    ctx->pc = 0x13fe34u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 96), (uint16_t)GPR_U32(ctx, 2));
label_13fe38:
    // 0x13fe38: 0x8fa2035c  lw          $v0, 0x35C($sp)
    ctx->pc = 0x13fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 860)));
label_13fe3c:
    // 0x13fe3c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x13fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_13fe40:
    // 0x13fe40: 0xa6820062  sh          $v0, 0x62($s4)
    ctx->pc = 0x13fe40u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 98), (uint16_t)GPR_U32(ctx, 2));
label_13fe44:
    // 0x13fe44: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x13fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_13fe48:
    // 0x13fe48: 0xae820064  sw          $v0, 0x64($s4)
    ctx->pc = 0x13fe48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 2));
label_13fe4c:
    // 0x13fe4c: 0x26940070  addiu       $s4, $s4, 0x70
    ctx->pc = 0x13fe4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_13fe50:
    // 0x13fe50: 0x96820030  lhu         $v0, 0x30($s4)
    ctx->pc = 0x13fe50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
label_13fe54:
    // 0x13fe54: 0x44b823  subu        $s7, $v0, $a0
    ctx->pc = 0x13fe54u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_13fe58:
    // 0x13fe58: 0x17b903  sra         $s7, $s7, 4
    ctx->pc = 0x13fe58u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 23), 4));
label_13fe5c:
    // 0x13fe5c: 0x32f7ffff  andi        $s7, $s7, 0xFFFF
    ctx->pc = 0x13fe5cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_13fe60:
    // 0x13fe60: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x13fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_13fe64:
    // 0x13fe64: 0xa6820030  sh          $v0, 0x30($s4)
    ctx->pc = 0x13fe64u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 48), (uint16_t)GPR_U32(ctx, 2));
label_13fe68:
    // 0x13fe68: 0x96820032  lhu         $v0, 0x32($s4)
    ctx->pc = 0x13fe68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 50)));
label_13fe6c:
    // 0x13fe6c: 0x43b823  subu        $s7, $v0, $v1
    ctx->pc = 0x13fe6cu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13fe70:
    // 0x13fe70: 0x17b903  sra         $s7, $s7, 4
    ctx->pc = 0x13fe70u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 23), 4));
label_13fe74:
    // 0x13fe74: 0x32f7ffff  andi        $s7, $s7, 0xFFFF
    ctx->pc = 0x13fe74u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_13fe78:
    // 0x13fe78: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x13fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_13fe7c:
    // 0x13fe7c: 0xa6820032  sh          $v0, 0x32($s4)
    ctx->pc = 0x13fe7cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 50), (uint16_t)GPR_U32(ctx, 2));
label_13fe80:
    // 0x13fe80: 0x96820040  lhu         $v0, 0x40($s4)
    ctx->pc = 0x13fe80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 64)));
label_13fe84:
    // 0x13fe84: 0x44b823  subu        $s7, $v0, $a0
    ctx->pc = 0x13fe84u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_13fe88:
    // 0x13fe88: 0x17b903  sra         $s7, $s7, 4
    ctx->pc = 0x13fe88u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 23), 4));
label_13fe8c:
    // 0x13fe8c: 0x32f7ffff  andi        $s7, $s7, 0xFFFF
    ctx->pc = 0x13fe8cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_13fe90:
    // 0x13fe90: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x13fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_13fe94:
    // 0x13fe94: 0xa6820040  sh          $v0, 0x40($s4)
    ctx->pc = 0x13fe94u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 64), (uint16_t)GPR_U32(ctx, 2));
label_13fe98:
    // 0x13fe98: 0x96820042  lhu         $v0, 0x42($s4)
    ctx->pc = 0x13fe98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 66)));
label_13fe9c:
    // 0x13fe9c: 0x43b823  subu        $s7, $v0, $v1
    ctx->pc = 0x13fe9cu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13fea0:
    // 0x13fea0: 0x17b903  sra         $s7, $s7, 4
    ctx->pc = 0x13fea0u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 23), 4));
label_13fea4:
    // 0x13fea4: 0x32f7ffff  andi        $s7, $s7, 0xFFFF
    ctx->pc = 0x13fea4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_13fea8:
    // 0x13fea8: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x13fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_13feac:
    // 0x13feac: 0xa6820042  sh          $v0, 0x42($s4)
    ctx->pc = 0x13feacu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 66), (uint16_t)GPR_U32(ctx, 2));
label_13feb0:
    // 0x13feb0: 0x96820050  lhu         $v0, 0x50($s4)
    ctx->pc = 0x13feb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 80)));
label_13feb4:
    // 0x13feb4: 0x44b823  subu        $s7, $v0, $a0
    ctx->pc = 0x13feb4u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_13feb8:
    // 0x13feb8: 0x17b903  sra         $s7, $s7, 4
    ctx->pc = 0x13feb8u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 23), 4));
label_13febc:
    // 0x13febc: 0x32f7ffff  andi        $s7, $s7, 0xFFFF
    ctx->pc = 0x13febcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_13fec0:
    // 0x13fec0: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x13fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_13fec4:
    // 0x13fec4: 0xa6820050  sh          $v0, 0x50($s4)
    ctx->pc = 0x13fec4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 80), (uint16_t)GPR_U32(ctx, 2));
label_13fec8:
    // 0x13fec8: 0x96820052  lhu         $v0, 0x52($s4)
    ctx->pc = 0x13fec8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 82)));
label_13fecc:
    // 0x13fecc: 0x43b823  subu        $s7, $v0, $v1
    ctx->pc = 0x13feccu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13fed0:
    // 0x13fed0: 0x17b903  sra         $s7, $s7, 4
    ctx->pc = 0x13fed0u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 23), 4));
label_13fed4:
    // 0x13fed4: 0x32f7ffff  andi        $s7, $s7, 0xFFFF
    ctx->pc = 0x13fed4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_13fed8:
    // 0x13fed8: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x13fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_13fedc:
    // 0x13fedc: 0xa6820052  sh          $v0, 0x52($s4)
    ctx->pc = 0x13fedcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 82), (uint16_t)GPR_U32(ctx, 2));
label_13fee0:
    // 0x13fee0: 0x96820060  lhu         $v0, 0x60($s4)
    ctx->pc = 0x13fee0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 96)));
label_13fee4:
    // 0x13fee4: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x13fee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_13fee8:
    // 0x13fee8: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x13fee8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_13feec:
    // 0x13feec: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x13feecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_13fef0:
    // 0x13fef0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_13fef4:
    // 0x13fef4: 0xa6820060  sh          $v0, 0x60($s4)
    ctx->pc = 0x13fef4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 96), (uint16_t)GPR_U32(ctx, 2));
label_13fef8:
    // 0x13fef8: 0x96820062  lhu         $v0, 0x62($s4)
    ctx->pc = 0x13fef8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 98)));
label_13fefc:
    // 0x13fefc: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x13fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13ff00:
    // 0x13ff00: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x13ff00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_13ff04:
    // 0x13ff04: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x13ff04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_13ff08:
    // 0x13ff08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13ff0c:
    // 0x13ff0c: 0xa6820062  sh          $v0, 0x62($s4)
    ctx->pc = 0x13ff0cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 98), (uint16_t)GPR_U32(ctx, 2));
label_13ff10:
    // 0x13ff10: 0xfe960000  sd          $s6, 0x0($s4)
    ctx->pc = 0x13ff10u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 22));
label_13ff14:
    // 0x13ff14: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x13ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_13ff18:
    // 0x13ff18: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x13ff18u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
label_13ff1c:
    // 0x13ff1c: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x13ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_13ff20:
    // 0x13ff20: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x13ff20u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_13ff24:
    // 0x13ff24: 0x8c22f014  lw          $v0, -0xFEC($at)
    ctx->pc = 0x13ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
label_13ff28:
    // 0x13ff28: 0xdc420020  ld          $v0, 0x20($v0)
    ctx->pc = 0x13ff28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 32)));
label_13ff2c:
    // 0x13ff2c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x13ff2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_13ff30:
    // 0x13ff30: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x13ff30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
label_13ff34:
    // 0x13ff34: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x13ff34u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_13ff38:
    // 0x13ff38: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x13ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_13ff3c:
    // 0x13ff3c: 0xfe820028  sd          $v0, 0x28($s4)
    ctx->pc = 0x13ff3cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 2));
label_13ff40:
    // 0x13ff40: 0xfe8e0020  sd          $t6, 0x20($s4)
    ctx->pc = 0x13ff40u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 14));
label_13ff44:
    // 0x13ff44: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x13ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_13ff48:
    // 0x13ff48: 0xfe820038  sd          $v0, 0x38($s4)
    ctx->pc = 0x13ff48u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 56), GPR_U64(ctx, 2));
label_13ff4c:
    // 0x13ff4c: 0xfe800030  sd          $zero, 0x30($s4)
    ctx->pc = 0x13ff4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 0));
label_13ff50:
    // 0x13ff50: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x13ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_13ff54:
    // 0x13ff54: 0xfe820048  sd          $v0, 0x48($s4)
    ctx->pc = 0x13ff54u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 2));
label_13ff58:
    // 0x13ff58: 0xfe8d0040  sd          $t5, 0x40($s4)
    ctx->pc = 0x13ff58u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 13));
label_13ff5c:
    // 0x13ff5c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x13ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_13ff60:
    // 0x13ff60: 0xfe820058  sd          $v0, 0x58($s4)
    ctx->pc = 0x13ff60u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 2));
label_13ff64:
    // 0x13ff64: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x13ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_13ff68:
    // 0x13ff68: 0xfe820050  sd          $v0, 0x50($s4)
    ctx->pc = 0x13ff68u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 2));
label_13ff6c:
    // 0x13ff6c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x13ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_13ff70:
    // 0x13ff70: 0xfe820068  sd          $v0, 0x68($s4)
    ctx->pc = 0x13ff70u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 104), GPR_U64(ctx, 2));
label_13ff74:
    // 0x13ff74: 0xfe8c0060  sd          $t4, 0x60($s4)
    ctx->pc = 0x13ff74u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 12));
label_13ff78:
    // 0x13ff78: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x13ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_13ff7c:
    // 0x13ff7c: 0xfe820078  sd          $v0, 0x78($s4)
    ctx->pc = 0x13ff7cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 2));
label_13ff80:
    // 0x13ff80: 0xfe8b0070  sd          $t3, 0x70($s4)
    ctx->pc = 0x13ff80u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 11));
label_13ff84:
    // 0x13ff84: 0x8fab0360  lw          $t3, 0x360($sp)
    ctx->pc = 0x13ff84u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_13ff88:
    // 0x13ff88: 0x26940080  addiu       $s4, $s4, 0x80
    ctx->pc = 0x13ff88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_13ff8c:
    // 0x13ff8c: 0x8fa40350  lw          $a0, 0x350($sp)
    ctx->pc = 0x13ff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_13ff90:
    // 0x13ff90: 0x8fa20354  lw          $v0, 0x354($sp)
    ctx->pc = 0x13ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 852)));
label_13ff94:
    // 0x13ff94: 0x8fad0368  lw          $t5, 0x368($sp)
    ctx->pc = 0x13ff94u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 872)));
label_13ff98:
    // 0x13ff98: 0x8fac0358  lw          $t4, 0x358($sp)
    ctx->pc = 0x13ff98u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 856)));
label_13ff9c:
    // 0x13ff9c: 0x8fa30364  lw          $v1, 0x364($sp)
    ctx->pc = 0x13ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 868)));
label_13ffa0:
    // 0x13ffa0: 0x14b7021  addu        $t6, $t2, $t3
    ctx->pc = 0x13ffa0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_13ffa4:
    // 0x13ffa4: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x13ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_13ffa8:
    // 0x13ffa8: 0x8fab036c  lw          $t3, 0x36C($sp)
    ctx->pc = 0x13ffa8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 876)));
label_13ffac:
    // 0x13ffac: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x13ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_13ffb0:
    // 0x13ffb0: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x13ffb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
label_13ffb4:
    // 0x13ffb4: 0xec4821  addu        $t1, $a3, $t4
    ctx->pc = 0x13ffb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_13ffb8:
    // 0x13ffb8: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x13ffb8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13ffbc:
    // 0x13ffbc: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x13ffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_13ffc0:
    // 0x13ffc0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x13ffc0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13ffc4:
    // 0x13ffc4: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x13ffc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_13ffc8:
    // 0x13ffc8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13ffc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_13ffcc:
    // 0x13ffcc: 0x8fa4035c  lw          $a0, 0x35C($sp)
    ctx->pc = 0x13ffccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 860)));
label_13ffd0:
    // 0x13ffd0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x13ffd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_13ffd4:
    // 0x13ffd4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x13ffd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_13ffd8:
    // 0x13ffd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13ffd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_13ffdc:
    // 0x13ffdc: 0x10b1821  addu        $v1, $t0, $t3
    ctx->pc = 0x13ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_13ffe0:
    // 0x13ffe0: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x13ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_13ffe4:
    // 0x13ffe4: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x13ffe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_13ffe8:
    // 0x13ffe8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x13ffe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_13ffec:
    // 0x13ffec: 0xe7a10340  swc1        $f1, 0x340($sp)
    ctx->pc = 0x13ffecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 832), bits); }
label_13fff0:
    // 0x13fff0: 0xe7a00344  swc1        $f0, 0x344($sp)
    ctx->pc = 0x13fff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 836), bits); }
label_13fff4:
    // 0x13fff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13fff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13fff8:
    // 0x13fff8: 0x448e2800  mtc1        $t6, $f5
    ctx->pc = 0x13fff8u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_13fffc:
    // 0x13fffc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13fffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_140000:
    // 0x140000: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x140000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_140004:
    // 0x140004: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x140004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_140008:
    // 0x140008: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x140008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_14000c:
    // 0x14000c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x14000cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_140010:
    // 0x140010: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x140010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_140014:
    // 0x140014: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x140014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_140018:
    // 0x140018: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x140018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_14001c:
    // 0x14001c: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x14001cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_140020:
    // 0x140020: 0x46043102  mul.s       $f4, $f6, $f4
    ctx->pc = 0x140020u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
label_140024:
    // 0x140024: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x140024u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_140028:
    // 0x140028: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x140028u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_14002c:
    // 0x14002c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x14002cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_140030:
    // 0x140030: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x140030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_140034:
    // 0x140034: 0xe7a50330  swc1        $f5, 0x330($sp)
    ctx->pc = 0x140034u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
label_140038:
    // 0x140038: 0xe7a40334  swc1        $f4, 0x334($sp)
    ctx->pc = 0x140038u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 820), bits); }
label_14003c:
    // 0x14003c: 0xe7a30338  swc1        $f3, 0x338($sp)
    ctx->pc = 0x14003cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 824), bits); }
label_140040:
    // 0x140040: 0xe7a2033c  swc1        $f2, 0x33C($sp)
    ctx->pc = 0x140040u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 828), bits); }
label_140044:
    // 0x140044: 0xe7a10348  swc1        $f1, 0x348($sp)
    ctx->pc = 0x140044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 840), bits); }
label_140048:
    // 0x140048: 0xe7a0034c  swc1        $f0, 0x34C($sp)
    ctx->pc = 0x140048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 844), bits); }
label_14004c:
    // 0x14004c: 0xfe980000  sd          $t8, 0x0($s4)
    ctx->pc = 0x14004cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 24));
label_140050:
    // 0x140050: 0xae990008  sw          $t9, 0x8($s4)
    ctx->pc = 0x140050u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 25));
label_140054:
    // 0x140054: 0xae9e000c  sw          $fp, 0xC($s4)
    ctx->pc = 0x140054u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 30));
label_140058:
    // 0x140058: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x140058u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_14005c:
    // 0x14005c: 0xfe860018  sd          $a2, 0x18($s4)
    ctx->pc = 0x14005cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 6));
label_140060:
    // 0x140060: 0xc7a00330  lwc1        $f0, 0x330($sp)
    ctx->pc = 0x140060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140064:
    // 0x140064: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x140064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_140068:
    // 0x140068: 0xc7a00334  lwc1        $f0, 0x334($sp)
    ctx->pc = 0x140068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14006c:
    // 0x14006c: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x14006cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_140070:
    // 0x140070: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x140070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_140074:
    // 0x140074: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x140074u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_140078:
    // 0x140078: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x140078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14007c:
    // 0x14007c: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x14007cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
label_140080:
    // 0x140080: 0xa6920030  sh          $s2, 0x30($s4)
    ctx->pc = 0x140080u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 48), (uint16_t)GPR_U32(ctx, 18));
label_140084:
    // 0x140084: 0xa6900032  sh          $s0, 0x32($s4)
    ctx->pc = 0x140084u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 50), (uint16_t)GPR_U32(ctx, 16));
label_140088:
    // 0x140088: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x140088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_14008c:
    // 0x14008c: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x14008cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
label_140090:
    // 0x140090: 0xc7a00338  lwc1        $f0, 0x338($sp)
    ctx->pc = 0x140090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140094:
    // 0x140094: 0xe6800038  swc1        $f0, 0x38($s4)
    ctx->pc = 0x140094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 56), bits); }
label_140098:
    // 0x140098: 0xc7a0033c  lwc1        $f0, 0x33C($sp)
    ctx->pc = 0x140098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14009c:
    // 0x14009c: 0xe680003c  swc1        $f0, 0x3C($s4)
    ctx->pc = 0x14009cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
label_1400a0:
    // 0x1400a0: 0xde820028  ld          $v0, 0x28($s4)
    ctx->pc = 0x1400a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 40)));
label_1400a4:
    // 0x1400a4: 0xfe820040  sd          $v0, 0x40($s4)
    ctx->pc = 0x1400a4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 2));
label_1400a8:
    // 0x1400a8: 0xa6910048  sh          $s1, 0x48($s4)
    ctx->pc = 0x1400a8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 72), (uint16_t)GPR_U32(ctx, 17));
label_1400ac:
    // 0x1400ac: 0xa690004a  sh          $s0, 0x4A($s4)
    ctx->pc = 0x1400acu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 74), (uint16_t)GPR_U32(ctx, 16));
label_1400b0:
    // 0x1400b0: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x1400b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_1400b4:
    // 0x1400b4: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x1400b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
label_1400b8:
    // 0x1400b8: 0xc7a00340  lwc1        $f0, 0x340($sp)
    ctx->pc = 0x1400b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1400bc:
    // 0x1400bc: 0xe6800050  swc1        $f0, 0x50($s4)
    ctx->pc = 0x1400bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 80), bits); }
label_1400c0:
    // 0x1400c0: 0xc7a00344  lwc1        $f0, 0x344($sp)
    ctx->pc = 0x1400c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1400c4:
    // 0x1400c4: 0xe6800054  swc1        $f0, 0x54($s4)
    ctx->pc = 0x1400c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
label_1400c8:
    // 0x1400c8: 0xde820028  ld          $v0, 0x28($s4)
    ctx->pc = 0x1400c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 40)));
label_1400cc:
    // 0x1400cc: 0xfe820058  sd          $v0, 0x58($s4)
    ctx->pc = 0x1400ccu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 2));
label_1400d0:
    // 0x1400d0: 0xa6920060  sh          $s2, 0x60($s4)
    ctx->pc = 0x1400d0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 96), (uint16_t)GPR_U32(ctx, 18));
label_1400d4:
    // 0x1400d4: 0xa6950062  sh          $s5, 0x62($s4)
    ctx->pc = 0x1400d4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 98), (uint16_t)GPR_U32(ctx, 21));
label_1400d8:
    // 0x1400d8: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x1400d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_1400dc:
    // 0x1400dc: 0xae820064  sw          $v0, 0x64($s4)
    ctx->pc = 0x1400dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 2));
label_1400e0:
    // 0x1400e0: 0xc7a00348  lwc1        $f0, 0x348($sp)
    ctx->pc = 0x1400e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1400e4:
    // 0x1400e4: 0xe6800068  swc1        $f0, 0x68($s4)
    ctx->pc = 0x1400e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 104), bits); }
label_1400e8:
    // 0x1400e8: 0xc7a0034c  lwc1        $f0, 0x34C($sp)
    ctx->pc = 0x1400e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1400ec:
    // 0x1400ec: 0xe680006c  swc1        $f0, 0x6C($s4)
    ctx->pc = 0x1400ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 108), bits); }
label_1400f0:
    // 0x1400f0: 0xde820028  ld          $v0, 0x28($s4)
    ctx->pc = 0x1400f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 40)));
label_1400f4:
    // 0x1400f4: 0xfe820070  sd          $v0, 0x70($s4)
    ctx->pc = 0x1400f4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 2));
label_1400f8:
    // 0x1400f8: 0xa6910078  sh          $s1, 0x78($s4)
    ctx->pc = 0x1400f8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 120), (uint16_t)GPR_U32(ctx, 17));
label_1400fc:
    // 0x1400fc: 0xa695007a  sh          $s5, 0x7A($s4)
    ctx->pc = 0x1400fcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 122), (uint16_t)GPR_U32(ctx, 21));
label_140100:
    // 0x140100: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x140100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_140104:
    // 0x140104: 0xae82007c  sw          $v0, 0x7C($s4)
    ctx->pc = 0x140104u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 2));
label_140108:
    // 0x140108: 0x26940080  addiu       $s4, $s4, 0x80
    ctx->pc = 0x140108u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_14010c:
    // 0x14010c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x14010cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_140110:
    // 0x140110: 0xfe850000  sd          $a1, 0x0($s4)
    ctx->pc = 0x140110u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 5));
label_140114:
    // 0x140114: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x140114u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
label_140118:
    // 0x140118: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x140118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_14011c:
    // 0x14011c: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x14011cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_140120:
    // 0x140120: 0x8c22f014  lw          $v0, -0xFEC($at)
    ctx->pc = 0x140120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
label_140124:
    // 0x140124: 0xdc420040  ld          $v0, 0x40($v0)
    ctx->pc = 0x140124u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 64)));
label_140128:
    // 0x140128: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x140128u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_14012c:
    // 0x14012c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x14012cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_140130:
    // 0x140130: 0xfe820028  sd          $v0, 0x28($s4)
    ctx->pc = 0x140130u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 2));
label_140134:
    // 0x140134: 0xfe800020  sd          $zero, 0x20($s4)
    ctx->pc = 0x140134u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 0));
label_140138:
    // 0x140138: 0x10000b89  b           . + 4 + (0xB89 << 2)
label_14013c:
    if (ctx->pc == 0x14013Cu) {
        ctx->pc = 0x14013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140138u;
        // 0x14013c: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140140u;
        goto label_140140;
    }
    ctx->pc = 0x140138u;
    {
        const bool branch_taken_0x140138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140138u;
        // 0x14013c: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140138) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x140140u;
label_140140:
    // 0x140140: 0x96620024  lhu         $v0, 0x24($s3)
    ctx->pc = 0x140140u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
label_140144:
    // 0x140144: 0xc7828540  lwc1        $f2, -0x7AC0($gp)
    ctx->pc = 0x140144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_140148:
    // 0x140148: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x140148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14014c:
    // 0x14014c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x14014cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_140150:
    // 0x140150: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x140150u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_140154:
    // 0x140154: 0x0  nop
    ctx->pc = 0x140154u;
    // NOP
label_140158:
    // 0x140158: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x140158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_14015c:
    // 0x14015c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14015cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_140160:
    // 0x140160: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x140160u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_140164:
    // 0x140164: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x140164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_140168:
    // 0x140168: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x140168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_14016c:
    // 0x14016c: 0x0  nop
    ctx->pc = 0x14016cu;
    // NOP
label_140170:
    // 0x140170: 0x12a00b7b  beqz        $s5, . + 4 + (0xB7B << 2)
label_140174:
    if (ctx->pc == 0x140174u) {
        ctx->pc = 0x140178u;
        goto label_140178;
    }
    ctx->pc = 0x140170u;
    {
        const bool branch_taken_0x140170 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x140170) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x140178u;
label_140178:
    // 0x140178: 0x96630026  lhu         $v1, 0x26($s3)
    ctx->pc = 0x140178u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
label_14017c:
    // 0x14017c: 0x967e001c  lhu         $fp, 0x1C($s3)
    ctx->pc = 0x14017cu;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
label_140180:
    // 0x140180: 0x9662001e  lhu         $v0, 0x1E($s3)
    ctx->pc = 0x140180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
label_140184:
    // 0x140184: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x140184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
label_140188:
    // 0x140188: 0x8e70002c  lw          $s0, 0x2C($s3)
    ctx->pc = 0x140188u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_14018c:
    // 0x14018c: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
label_140190:
    if (ctx->pc == 0x140190u) {
        ctx->pc = 0x140190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14018Cu;
        // 0x140190: 0x8e710028  lw          $s1, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140194u;
        goto label_140194;
    }
    ctx->pc = 0x14018Cu;
    {
        const bool branch_taken_0x14018c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x140190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14018Cu;
        // 0x140190: 0x8e710028  lw          $s1, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14018c) {
            ctx->pc = 0x140330u;
            goto label_140330;
        }
    }
    ctx->pc = 0x140194u;
label_140194:
    // 0x140194: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x140194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_140198:
    // 0x140198: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x140198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_14019c:
    // 0x14019c: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x14019cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_1401a0:
    // 0x1401a0: 0x34441ec0  ori         $a0, $v0, 0x1EC0
    ctx->pc = 0x1401a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7872);
label_1401a4:
    // 0x1401a4: 0xc04d5b4  jal         func_1356D0
label_1401a8:
    if (ctx->pc == 0x1401A8u) {
        ctx->pc = 0x1401A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401A4u;
        // 0x1401a8: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1401ACu;
        goto label_1401ac;
    }
    ctx->pc = 0x1401A4u;
    SET_GPR_U32(ctx, 31, 0x1401ACu);
    ctx->pc = 0x1401A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1401A4u;
    // 0x1401a8: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x1401A4u, 0x1401ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1401ACu;
label_1401ac:
    // 0x1401ac: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1401acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_1401b0:
    // 0x1401b0: 0x3d51818  mult        $v1, $fp, $s5
    ctx->pc = 0x1401b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1401b4:
    // 0x1401b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1401b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1401b8:
    // 0x1401b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1401b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1401bc:
    // 0x1401bc: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x1401bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_1401c0:
    // 0x1401c0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1401c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1401c4:
    // 0x1401c4: 0x70551018  mult1       $v0, $v0, $s5
    ctx->pc = 0x1401c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1401c8:
    // 0x1401c8: 0x22302  srl         $a0, $v0, 12
    ctx->pc = 0x1401c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_1401cc:
    // 0x1401cc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1401ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1401d0:
    // 0x1401d0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1401d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1401d4:
    // 0x1401d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1401d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1401d8:
    // 0x1401d8: 0x34441f60  ori         $a0, $v0, 0x1F60
    ctx->pc = 0x1401d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8032);
label_1401dc:
    // 0x1401dc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1401dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1401e0:
    // 0x1401e0: 0x34451ec0  ori         $a1, $v0, 0x1EC0
    ctx->pc = 0x1401e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7872);
label_1401e4:
    // 0x1401e4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1401e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1401e8:
    // 0x1401e8: 0x34461f70  ori         $a2, $v0, 0x1F70
    ctx->pc = 0x1401e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8048);
label_1401ec:
    // 0x1401ec: 0xe4221f70  swc1        $f2, 0x1F70($at)
    ctx->pc = 0x1401ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 8048), bits); }
label_1401f0:
    // 0x1401f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1401f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1401f4:
    // 0x1401f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1401f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1401f8:
    // 0x1401f8: 0xe4211f74  swc1        $f1, 0x1F74($at)
    ctx->pc = 0x1401f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 8052), bits); }
label_1401fc:
    // 0x1401fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1401fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_140200:
    // 0x140200: 0xe4201f7c  swc1        $f0, 0x1F7C($at)
    ctx->pc = 0x140200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 8060), bits); }
label_140204:
    // 0x140204: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x140204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_140208:
    // 0x140208: 0xc041442  jal         func_105108
label_14020c:
    if (ctx->pc == 0x14020Cu) {
        ctx->pc = 0x14020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140208u;
        // 0x14020c: 0xe4201f78  swc1        $f0, 0x1F78($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 8056), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x140210u;
        goto label_140210;
    }
    ctx->pc = 0x140208u;
    SET_GPR_U32(ctx, 31, 0x140210u);
    ctx->pc = 0x14020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140208u;
    // 0x14020c: 0xe4201f78  swc1        $f0, 0x1F78($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 8056), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x140208u, 0x140210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140210u;
label_140210:
    // 0x140210: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x140210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_140214:
    // 0x140214: 0x34441ff0  ori         $a0, $v0, 0x1FF0
    ctx->pc = 0x140214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8176);
label_140218:
    // 0x140218: 0xc041500  jal         func_105400
label_14021c:
    if (ctx->pc == 0x14021Cu) {
        ctx->pc = 0x14021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140218u;
        // 0x14021c: 0x34451f60  ori         $a1, $v0, 0x1F60 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8032);
        ctx->in_delay_slot = false;
        ctx->pc = 0x140220u;
        goto label_140220;
    }
    ctx->pc = 0x140218u;
    SET_GPR_U32(ctx, 31, 0x140220u);
    ctx->pc = 0x14021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140218u;
    // 0x14021c: 0x34451f60  ori         $a1, $v0, 0x1F60 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8032);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105400u, 0x140218u, 0x140220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140220u;
label_140220:
    // 0x140220: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x140220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_140224:
    // 0x140224: 0x8c231ff4  lw          $v1, 0x1FF4($at)
    ctx->pc = 0x140224u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8180))); // MMIO: 0x70001ff4
label_140228:
    // 0x140228: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x140228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_14022c:
    // 0x14022c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x14022cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_140230:
    // 0x140230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_140234:
    // 0x140234: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x140234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_140238:
    // 0x140238: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x140238u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_14023c:
    // 0x14023c: 0xac221ff4  sw          $v0, 0x1FF4($at)
    ctx->pc = 0x14023cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8180), GPR_U32(ctx, 2));
label_140240:
    // 0x140240: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x140240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_140244:
    // 0x140244: 0x8c221ff0  lw          $v0, 0x1FF0($at)
    ctx->pc = 0x140244u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8176))); // MMIO: 0x70001ff0
label_140248:
    // 0x140248: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x140248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_14024c:
    // 0x14024c: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x14024cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_140250:
    // 0x140250: 0x8c231ff4  lw          $v1, 0x1FF4($at)
    ctx->pc = 0x140250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8180)));
label_140254:
    // 0x140254: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x140254u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_140258:
    // 0x140258: 0x224b021  addu        $s6, $s1, $a0
    ctx->pc = 0x140258u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_14025c:
    // 0x14025c: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x14025cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_140260:
    // 0x140260: 0x203b821  addu        $s7, $s0, $v1
    ctx->pc = 0x140260u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_140264:
    // 0x140264: 0x2031023  subu        $v0, $s0, $v1
    ctx->pc = 0x140264u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_140268:
    // 0x140268: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x140268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_14026c:
    // 0x14026c: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x14026cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_140270:
    // 0x140270: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x140270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_140274:
    // 0x140274: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x140274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_140278:
    // 0x140278: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x140278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
label_14027c:
    // 0x14027c: 0x2e21025  or          $v0, $s7, $v0
    ctx->pc = 0x14027cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
label_140280:
    // 0x140280: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x140280u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_140284:
    // 0x140284: 0x14400b36  bnez        $v0, . + 4 + (0xB36 << 2)
label_140288:
    if (ctx->pc == 0x140288u) {
        ctx->pc = 0x140288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140284u;
        // 0x140288: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14028Cu;
        goto label_14028c;
    }
    ctx->pc = 0x140284u;
    {
        const bool branch_taken_0x140284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140284u;
        // 0x140288: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140284) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x14028Cu;
label_14028c:
    // 0x14028c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x14028cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_140290:
    // 0x140290: 0xc4201f70  lwc1        $f0, 0x1F70($at)
    ctx->pc = 0x140290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 8048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140294:
    // 0x140294: 0x34441f60  ori         $a0, $v0, 0x1F60
    ctx->pc = 0x140294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8032);
label_140298:
    // 0x140298: 0x34451ec0  ori         $a1, $v0, 0x1EC0
    ctx->pc = 0x140298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7872);
label_14029c:
    // 0x14029c: 0x34461f70  ori         $a2, $v0, 0x1F70
    ctx->pc = 0x14029cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8048);
label_1402a0:
    // 0x1402a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1402a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1402a4:
    // 0x1402a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1402a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1402a8:
    // 0x1402a8: 0xc041442  jal         func_105108
label_1402ac:
    if (ctx->pc == 0x1402ACu) {
        ctx->pc = 0x1402ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402A8u;
        // 0x1402ac: 0xe4201f70  swc1        $f0, 0x1F70($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 8048), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1402B0u;
        goto label_1402b0;
    }
    ctx->pc = 0x1402A8u;
    SET_GPR_U32(ctx, 31, 0x1402B0u);
    ctx->pc = 0x1402ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1402A8u;
    // 0x1402ac: 0xe4201f70  swc1        $f0, 0x1F70($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 8048), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1402A8u, 0x1402B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1402B0u;
label_1402b0:
    // 0x1402b0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1402b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1402b4:
    // 0x1402b4: 0x34441ff0  ori         $a0, $v0, 0x1FF0
    ctx->pc = 0x1402b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8176);
label_1402b8:
    // 0x1402b8: 0xc041500  jal         func_105400
label_1402bc:
    if (ctx->pc == 0x1402BCu) {
        ctx->pc = 0x1402BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402B8u;
        // 0x1402bc: 0x34451f60  ori         $a1, $v0, 0x1F60 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8032);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1402C0u;
        goto label_1402c0;
    }
    ctx->pc = 0x1402B8u;
    SET_GPR_U32(ctx, 31, 0x1402C0u);
    ctx->pc = 0x1402BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1402B8u;
    // 0x1402bc: 0x34451f60  ori         $a1, $v0, 0x1F60 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8032);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105400u, 0x1402B8u, 0x1402C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1402C0u;
label_1402c0:
    // 0x1402c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1402c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1402c4:
    // 0x1402c4: 0x8c231ff4  lw          $v1, 0x1FF4($at)
    ctx->pc = 0x1402c4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8180))); // MMIO: 0x70001ff4
label_1402c8:
    // 0x1402c8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1402c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1402cc:
    // 0x1402cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1402ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1402d0:
    // 0x1402d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1402d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1402d4:
    // 0x1402d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1402d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1402d8:
    // 0x1402d8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1402d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1402dc:
    // 0x1402dc: 0xac221ff4  sw          $v0, 0x1FF4($at)
    ctx->pc = 0x1402dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8180), GPR_U32(ctx, 2));
label_1402e0:
    // 0x1402e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1402e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1402e4:
    // 0x1402e4: 0x8c221ff0  lw          $v0, 0x1FF0($at)
    ctx->pc = 0x1402e4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8176))); // MMIO: 0x70001ff0
label_1402e8:
    // 0x1402e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1402e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1402ec:
    // 0x1402ec: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1402ecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_1402f0:
    // 0x1402f0: 0x8c231ff4  lw          $v1, 0x1FF4($at)
    ctx->pc = 0x1402f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8180)));
label_1402f4:
    // 0x1402f4: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x1402f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1402f8:
    // 0x1402f8: 0x224a821  addu        $s5, $s1, $a0
    ctx->pc = 0x1402f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1402fc:
    // 0x1402fc: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x1402fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_140300:
    // 0x140300: 0x2038823  subu        $s1, $s0, $v1
    ctx->pc = 0x140300u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_140304:
    // 0x140304: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x140304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_140308:
    // 0x140308: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x140308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_14030c:
    // 0x14030c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x14030cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_140310:
    // 0x140310: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x140310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
label_140314:
    // 0x140314: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x140314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_140318:
    // 0x140318: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x140318u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_14031c:
    // 0x14031c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_140320:
    if (ctx->pc == 0x140320u) {
        ctx->pc = 0x140324u;
        goto label_140324;
    }
    ctx->pc = 0x14031Cu;
    {
        const bool branch_taken_0x14031c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14031c) {
            ctx->pc = 0x140388u;
            goto label_140388;
        }
    }
    ctx->pc = 0x140324u;
label_140324:
    // 0x140324: 0x10000b0e  b           . + 4 + (0xB0E << 2)
label_140328:
    if (ctx->pc == 0x140328u) {
        ctx->pc = 0x14032Cu;
        goto label_14032c;
    }
    ctx->pc = 0x140324u;
    {
        const bool branch_taken_0x140324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140324) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x14032Cu;
label_14032c:
    // 0x14032c: 0x0  nop
    ctx->pc = 0x14032cu;
    // NOP
label_140330:
    // 0x140330: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x140330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_140334:
    // 0x140334: 0x3d52018  mult        $a0, $fp, $s5
    ctx->pc = 0x140334u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_140338:
    // 0x140338: 0x70551018  mult1       $v0, $v0, $s5
    ctx->pc = 0x140338u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_14033c:
    // 0x14033c: 0x21b02  srl         $v1, $v0, 12
    ctx->pc = 0x14033cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_140340:
    // 0x140340: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x140340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_140344:
    // 0x140344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_140348:
    // 0x140348: 0x41b42  srl         $v1, $a0, 13
    ctx->pc = 0x140348u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 13));
label_14034c:
    // 0x14034c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x14034cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_140350:
    // 0x140350: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x140350u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_140354:
    // 0x140354: 0x223a823  subu        $s5, $s1, $v1
    ctx->pc = 0x140354u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_140358:
    // 0x140358: 0x223b021  addu        $s6, $s1, $v1
    ctx->pc = 0x140358u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_14035c:
    // 0x14035c: 0x202b821  addu        $s7, $s0, $v0
    ctx->pc = 0x14035cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_140360:
    // 0x140360: 0x2028823  subu        $s1, $s0, $v0
    ctx->pc = 0x140360u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_140364:
    // 0x140364: 0xafb501b0  sw          $s5, 0x1B0($sp)
    ctx->pc = 0x140364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 21));
label_140368:
    // 0x140368: 0x2b11025  or          $v0, $s5, $s1
    ctx->pc = 0x140368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 17));
label_14036c:
    // 0x14036c: 0xafb60190  sw          $s6, 0x190($sp)
    ctx->pc = 0x14036cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 22));
label_140370:
    // 0x140370: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x140370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
label_140374:
    // 0x140374: 0xafb101a0  sw          $s1, 0x1A0($sp)
    ctx->pc = 0x140374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 17));
label_140378:
    // 0x140378: 0x2e21025  or          $v0, $s7, $v0
    ctx->pc = 0x140378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
label_14037c:
    // 0x14037c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x14037cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_140380:
    // 0x140380: 0x14400af7  bnez        $v0, . + 4 + (0xAF7 << 2)
label_140384:
    if (ctx->pc == 0x140384u) {
        ctx->pc = 0x140384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140380u;
        // 0x140384: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140388u;
        goto label_140388;
    }
    ctx->pc = 0x140380u;
    {
        const bool branch_taken_0x140380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140380u;
        // 0x140384: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140380) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x140388u;
label_140388:
    // 0x140388: 0x3c02b400  lui         $v0, 0xB400
    ctx->pc = 0x140388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46080 << 16));
label_14038c:
    // 0x14038c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x14038cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_140390:
    // 0x140390: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x140390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_140394:
    // 0x140394: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x140394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_140398:
    // 0x140398: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x140398u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_14039c:
    // 0x14039c: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x14039cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1403a0:
    // 0x1403a0: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x1403a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
label_1403a4:
    // 0x1403a4: 0x3c033434  lui         $v1, 0x3434
    ctx->pc = 0x1403a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13364 << 16));
label_1403a8:
    // 0x1403a8: 0x30450010  andi        $a1, $v0, 0x10
    ctx->pc = 0x1403a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1403ac:
    // 0x1403ac: 0x34643160  ori         $a0, $v1, 0x3160
    ctx->pc = 0x1403acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12640);
label_1403b0:
    // 0x1403b0: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x1403b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_1403b4:
    // 0x1403b4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1403b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1403b8:
    // 0x1403b8: 0x24030434  addiu       $v1, $zero, 0x434
    ctx->pc = 0x1403b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1076));
label_1403bc:
    // 0x1403bc: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x1403bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
label_1403c0:
    // 0x1403c0: 0xa683000c  sh          $v1, 0xC($s4)
    ctx->pc = 0x1403c0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 3));
label_1403c4:
    // 0x1403c4: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x1403c4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_1403c8:
    // 0x1403c8: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x1403c8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_1403cc:
    // 0x1403cc: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x1403ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1403d0:
    // 0x1403d0: 0xc04cfd8  jal         func_133F60
label_1403d4:
    if (ctx->pc == 0x1403D4u) {
        ctx->pc = 0x1403D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1403D0u;
        // 0x1403d4: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1403D8u;
        goto label_1403d8;
    }
    ctx->pc = 0x1403D0u;
    SET_GPR_U32(ctx, 31, 0x1403D8u);
    ctx->pc = 0x1403D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1403D0u;
    // 0x1403d4: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x1403D0u, 0x1403D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1403D8u;
label_1403d8:
    // 0x1403d8: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x1403d8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_1403dc:
    // 0x1403dc: 0x96650018  lhu         $a1, 0x18($s3)
    ctx->pc = 0x1403dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
label_1403e0:
    // 0x1403e0: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x1403e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1403e4:
    // 0x1403e4: 0x9664001a  lhu         $a0, 0x1A($s3)
    ctx->pc = 0x1403e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
label_1403e8:
    // 0x1403e8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1403e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1403ec:
    // 0x1403ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1403ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1403f0:
    // 0x1403f0: 0xae860020  sw          $a2, 0x20($s4)
    ctx->pc = 0x1403f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 6));
label_1403f4:
    // 0x1403f4: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x1403f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1403f8:
    // 0x1403f8: 0xa6850028  sh          $a1, 0x28($s4)
    ctx->pc = 0x1403f8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 40), (uint16_t)GPR_U32(ctx, 5));
label_1403fc:
    // 0x1403fc: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x1403fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_140400:
    // 0x140400: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x140400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_140404:
    // 0x140404: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x140404u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_140408:
    // 0x140408: 0xa684002a  sh          $a0, 0x2A($s4)
    ctx->pc = 0x140408u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 42), (uint16_t)GPR_U32(ctx, 4));
label_14040c:
    // 0x14040c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x14040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_140410:
    // 0x140410: 0xa6830038  sh          $v1, 0x38($s4)
    ctx->pc = 0x140410u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 56), (uint16_t)GPR_U32(ctx, 3));
label_140414:
    // 0x140414: 0xa684003a  sh          $a0, 0x3A($s4)
    ctx->pc = 0x140414u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 58), (uint16_t)GPR_U32(ctx, 4));
label_140418:
    // 0x140418: 0x8e660030  lw          $a2, 0x30($s3)
    ctx->pc = 0x140418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_14041c:
    // 0x14041c: 0xa6850048  sh          $a1, 0x48($s4)
    ctx->pc = 0x14041cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 72), (uint16_t)GPR_U32(ctx, 5));
label_140420:
    // 0x140420: 0xa682004a  sh          $v0, 0x4A($s4)
    ctx->pc = 0x140420u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 74), (uint16_t)GPR_U32(ctx, 2));
label_140424:
    // 0x140424: 0xa6830058  sh          $v1, 0x58($s4)
    ctx->pc = 0x140424u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 88), (uint16_t)GPR_U32(ctx, 3));
label_140428:
    // 0x140428: 0xa682005a  sh          $v0, 0x5A($s4)
    ctx->pc = 0x140428u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 90), (uint16_t)GPR_U32(ctx, 2));
label_14042c:
    // 0x14042c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x14042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_140430:
    // 0x140430: 0xa6820030  sh          $v0, 0x30($s4)
    ctx->pc = 0x140430u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 48), (uint16_t)GPR_U32(ctx, 2));
label_140434:
    // 0x140434: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x140434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_140438:
    // 0x140438: 0xa6820032  sh          $v0, 0x32($s4)
    ctx->pc = 0x140438u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 50), (uint16_t)GPR_U32(ctx, 2));
label_14043c:
    // 0x14043c: 0xae860034  sw          $a2, 0x34($s4)
    ctx->pc = 0x14043cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 6));
label_140440:
    // 0x140440: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x140440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_140444:
    // 0x140444: 0xa6820040  sh          $v0, 0x40($s4)
    ctx->pc = 0x140444u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 64), (uint16_t)GPR_U32(ctx, 2));
label_140448:
    // 0x140448: 0xa6910042  sh          $s1, 0x42($s4)
    ctx->pc = 0x140448u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 66), (uint16_t)GPR_U32(ctx, 17));
label_14044c:
    // 0x14044c: 0xae860044  sw          $a2, 0x44($s4)
    ctx->pc = 0x14044cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 6));
label_140450:
    // 0x140450: 0xa6950050  sh          $s5, 0x50($s4)
    ctx->pc = 0x140450u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 80), (uint16_t)GPR_U32(ctx, 21));
label_140454:
    // 0x140454: 0xa6900052  sh          $s0, 0x52($s4)
    ctx->pc = 0x140454u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 82), (uint16_t)GPR_U32(ctx, 16));
label_140458:
    // 0x140458: 0xae860054  sw          $a2, 0x54($s4)
    ctx->pc = 0x140458u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 6));
label_14045c:
    // 0x14045c: 0xa6960060  sh          $s6, 0x60($s4)
    ctx->pc = 0x14045cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 96), (uint16_t)GPR_U32(ctx, 22));
label_140460:
    // 0x140460: 0xa6970062  sh          $s7, 0x62($s4)
    ctx->pc = 0x140460u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 98), (uint16_t)GPR_U32(ctx, 23));
label_140464:
    // 0x140464: 0xae860064  sw          $a2, 0x64($s4)
    ctx->pc = 0x140464u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 6));
label_140468:
    // 0x140468: 0x10000abd  b           . + 4 + (0xABD << 2)
label_14046c:
    if (ctx->pc == 0x14046Cu) {
        ctx->pc = 0x14046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140468u;
        // 0x14046c: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140470u;
        goto label_140470;
    }
    ctx->pc = 0x140468u;
    {
        const bool branch_taken_0x140468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140468u;
        // 0x14046c: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140468) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x140470u;
label_140470:
    // 0x140470: 0x96620024  lhu         $v0, 0x24($s3)
    ctx->pc = 0x140470u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
label_140474:
    // 0x140474: 0xc7828540  lwc1        $f2, -0x7AC0($gp)
    ctx->pc = 0x140474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_140478:
    // 0x140478: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x140478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14047c:
    // 0x14047c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14047cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_140480:
    // 0x140480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_140484:
    // 0x140484: 0x0  nop
    ctx->pc = 0x140484u;
    // NOP
label_140488:
    // 0x140488: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x140488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_14048c:
    // 0x14048c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14048cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_140490:
    // 0x140490: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x140490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_140494:
    // 0x140494: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x140494u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_140498:
    // 0x140498: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x140498u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_14049c:
    // 0x14049c: 0x0  nop
    ctx->pc = 0x14049cu;
    // NOP
label_1404a0:
    // 0x1404a0: 0x12000aaf  beqz        $s0, . + 4 + (0xAAF << 2)
label_1404a4:
    if (ctx->pc == 0x1404A4u) {
        ctx->pc = 0x1404A8u;
        goto label_1404a8;
    }
    ctx->pc = 0x1404A0u;
    {
        const bool branch_taken_0x1404a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1404a0) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x1404A8u;
label_1404a8:
    // 0x1404a8: 0x96630026  lhu         $v1, 0x26($s3)
    ctx->pc = 0x1404a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
label_1404ac:
    // 0x1404ac: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x1404acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
label_1404b0:
    // 0x1404b0: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1404b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_1404b4:
    // 0x1404b4: 0x9662001e  lhu         $v0, 0x1E($s3)
    ctx->pc = 0x1404b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
label_1404b8:
    // 0x1404b8: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1404b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_1404bc:
    // 0x1404bc: 0x8e72002c  lw          $s2, 0x2C($s3)
    ctx->pc = 0x1404bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1404c0:
    // 0x1404c0: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
label_1404c4:
    if (ctx->pc == 0x1404C4u) {
        ctx->pc = 0x1404C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404C0u;
        // 0x1404c4: 0x8e710028  lw          $s1, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1404C8u;
        goto label_1404c8;
    }
    ctx->pc = 0x1404C0u;
    {
        const bool branch_taken_0x1404c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1404C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404C0u;
        // 0x1404c4: 0x8e710028  lw          $s1, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404c0) {
            ctx->pc = 0x140678u;
            goto label_140678;
        }
    }
    ctx->pc = 0x1404C8u;
label_1404c8:
    // 0x1404c8: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1404c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1404cc:
    // 0x1404cc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1404ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1404d0:
    // 0x1404d0: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1404d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_1404d4:
    // 0x1404d4: 0x34441ec0  ori         $a0, $v0, 0x1EC0
    ctx->pc = 0x1404d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7872);
label_1404d8:
    // 0x1404d8: 0xc04d5b4  jal         func_1356D0
label_1404dc:
    if (ctx->pc == 0x1404DCu) {
        ctx->pc = 0x1404DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404D8u;
        // 0x1404dc: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1404E0u;
        goto label_1404e0;
    }
    ctx->pc = 0x1404D8u;
    SET_GPR_U32(ctx, 31, 0x1404E0u);
    ctx->pc = 0x1404DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404D8u;
    // 0x1404dc: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x1404D8u, 0x1404E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404E0u;
label_1404e0:
    // 0x1404e0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1404e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1404e4:
    // 0x1404e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1404e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1404e8:
    // 0x1404e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1404e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1404ec:
    // 0x1404ec: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x1404ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1404f0:
    // 0x1404f0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1404f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1404f4:
    // 0x1404f4: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x1404f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_1404f8:
    // 0x1404f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1404f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1404fc:
    // 0x1404fc: 0x0  nop
    ctx->pc = 0x1404fcu;
    // NOP
label_140500:
    // 0x140500: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x140500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_140504:
    // 0x140504: 0x70501018  mult1       $v0, $v0, $s0
    ctx->pc = 0x140504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_140508:
    // 0x140508: 0x22302  srl         $a0, $v0, 12
    ctx->pc = 0x140508u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_14050c:
    // 0x14050c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x14050cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_140510:
    // 0x140510: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x140510u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_140514:
    // 0x140514: 0xe4221f70  swc1        $f2, 0x1F70($at)
    ctx->pc = 0x140514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 8048), bits); }
label_140518:
    // 0x140518: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x140518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14051c:
    // 0x14051c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x14051cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_140520:
    // 0x140520: 0x34441f60  ori         $a0, $v0, 0x1F60
    ctx->pc = 0x140520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8032);
label_140524:
    // 0x140524: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x140524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_140528:
    // 0x140528: 0x34451ec0  ori         $a1, $v0, 0x1EC0
    ctx->pc = 0x140528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7872);
label_14052c:
    // 0x14052c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x14052cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_140530:
    // 0x140530: 0x34461f70  ori         $a2, $v0, 0x1F70
    ctx->pc = 0x140530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8048);
label_140534:
    // 0x140534: 0xe4211f74  swc1        $f1, 0x1F74($at)
    ctx->pc = 0x140534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 8052), bits); }
label_140538:
    // 0x140538: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x140538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_14053c:
    // 0x14053c: 0xe4201f7c  swc1        $f0, 0x1F7C($at)
    ctx->pc = 0x14053cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 8060), bits); }
label_140540:
    // 0x140540: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x140540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_140544:
    // 0x140544: 0xc041442  jal         func_105108
label_140548:
    if (ctx->pc == 0x140548u) {
        ctx->pc = 0x140548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140544u;
        // 0x140548: 0xe4201f78  swc1        $f0, 0x1F78($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 8056), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14054Cu;
        goto label_14054c;
    }
    ctx->pc = 0x140544u;
    SET_GPR_U32(ctx, 31, 0x14054Cu);
    ctx->pc = 0x140548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140544u;
    // 0x140548: 0xe4201f78  swc1        $f0, 0x1F78($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 8056), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x140544u, 0x14054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14054Cu;
label_14054c:
    // 0x14054c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x14054cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_140550:
    // 0x140550: 0x34441ff0  ori         $a0, $v0, 0x1FF0
    ctx->pc = 0x140550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8176);
label_140554:
    // 0x140554: 0xc041500  jal         func_105400
label_140558:
    if (ctx->pc == 0x140558u) {
        ctx->pc = 0x140558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140554u;
        // 0x140558: 0x34451f60  ori         $a1, $v0, 0x1F60 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8032);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14055Cu;
        goto label_14055c;
    }
    ctx->pc = 0x140554u;
    SET_GPR_U32(ctx, 31, 0x14055Cu);
    ctx->pc = 0x140558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140554u;
    // 0x140558: 0x34451f60  ori         $a1, $v0, 0x1F60 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8032);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105400u, 0x140554u, 0x14055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14055Cu;
label_14055c:
    // 0x14055c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x14055cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_140560:
    // 0x140560: 0x8c231ff4  lw          $v1, 0x1FF4($at)
    ctx->pc = 0x140560u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8180))); // MMIO: 0x70001ff4
label_140564:
    // 0x140564: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x140564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_140568:
    // 0x140568: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x140568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_14056c:
    // 0x14056c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_140570:
    // 0x140570: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x140570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_140574:
    // 0x140574: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x140574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_140578:
    // 0x140578: 0xac221ff4  sw          $v0, 0x1FF4($at)
    ctx->pc = 0x140578u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8180), GPR_U32(ctx, 2));
label_14057c:
    // 0x14057c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x14057cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_140580:
    // 0x140580: 0x8c221ff0  lw          $v0, 0x1FF0($at)
    ctx->pc = 0x140580u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8176))); // MMIO: 0x70001ff0
label_140584:
    // 0x140584: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x140584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_140588:
    // 0x140588: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x140588u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_14058c:
    // 0x14058c: 0x8c231ff4  lw          $v1, 0x1FF4($at)
    ctx->pc = 0x14058cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8180)));
label_140590:
    // 0x140590: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x140590u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_140594:
    // 0x140594: 0x224f021  addu        $fp, $s1, $a0
    ctx->pc = 0x140594u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_140598:
    // 0x140598: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x140598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_14059c:
    // 0x14059c: 0x2431023  subu        $v0, $s2, $v1
    ctx->pc = 0x14059cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_1405a0:
    // 0x1405a0: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1405a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_1405a4:
    // 0x1405a4: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1405a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_1405a8:
    // 0x1405a8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1405a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1405ac:
    // 0x1405ac: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x1405acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1405b0:
    // 0x1405b0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1405b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1405b4:
    // 0x1405b4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1405b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1405b8:
    // 0x1405b8: 0x3c21825  or          $v1, $fp, $v0
    ctx->pc = 0x1405b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
label_1405bc:
    // 0x1405bc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1405bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1405c0:
    // 0x1405c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1405c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1405c4:
    // 0x1405c4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1405c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_1405c8:
    // 0x1405c8: 0x14400a65  bnez        $v0, . + 4 + (0xA65 << 2)
label_1405cc:
    if (ctx->pc == 0x1405CCu) {
        ctx->pc = 0x1405CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405C8u;
        // 0x1405cc: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1405D0u;
        goto label_1405d0;
    }
    ctx->pc = 0x1405C8u;
    {
        const bool branch_taken_0x1405c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1405CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405C8u;
        // 0x1405cc: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1405c8) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x1405D0u;
label_1405d0:
    // 0x1405d0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1405d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1405d4:
    // 0x1405d4: 0xc4201f70  lwc1        $f0, 0x1F70($at)
    ctx->pc = 0x1405d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 8048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1405d8:
    // 0x1405d8: 0x34441f60  ori         $a0, $v0, 0x1F60
    ctx->pc = 0x1405d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8032);
label_1405dc:
    // 0x1405dc: 0x34451ec0  ori         $a1, $v0, 0x1EC0
    ctx->pc = 0x1405dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7872);
label_1405e0:
    // 0x1405e0: 0x34461f70  ori         $a2, $v0, 0x1F70
    ctx->pc = 0x1405e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8048);
label_1405e4:
    // 0x1405e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1405e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1405e8:
    // 0x1405e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1405e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1405ec:
    // 0x1405ec: 0xc041442  jal         func_105108
label_1405f0:
    if (ctx->pc == 0x1405F0u) {
        ctx->pc = 0x1405F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405ECu;
        // 0x1405f0: 0xe4201f70  swc1        $f0, 0x1F70($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 8048), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1405F4u;
        goto label_1405f4;
    }
    ctx->pc = 0x1405ECu;
    SET_GPR_U32(ctx, 31, 0x1405F4u);
    ctx->pc = 0x1405F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1405ECu;
    // 0x1405f0: 0xe4201f70  swc1        $f0, 0x1F70($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 8048), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1405ECu, 0x1405F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1405F4u;
label_1405f4:
    // 0x1405f4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1405f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1405f8:
    // 0x1405f8: 0x34441ff0  ori         $a0, $v0, 0x1FF0
    ctx->pc = 0x1405f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8176);
label_1405fc:
    // 0x1405fc: 0xc041500  jal         func_105400
label_140600:
    if (ctx->pc == 0x140600u) {
        ctx->pc = 0x140600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405FCu;
        // 0x140600: 0x34451f60  ori         $a1, $v0, 0x1F60 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8032);
        ctx->in_delay_slot = false;
        ctx->pc = 0x140604u;
        goto label_140604;
    }
    ctx->pc = 0x1405FCu;
    SET_GPR_U32(ctx, 31, 0x140604u);
    ctx->pc = 0x140600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1405FCu;
    // 0x140600: 0x34451f60  ori         $a1, $v0, 0x1F60 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8032);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105400u, 0x1405FCu, 0x140604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140604u;
label_140604:
    // 0x140604: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x140604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_140608:
    // 0x140608: 0x8c231ff4  lw          $v1, 0x1FF4($at)
    ctx->pc = 0x140608u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8180))); // MMIO: 0x70001ff4
label_14060c:
    // 0x14060c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x14060cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_140610:
    // 0x140610: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x140610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_140614:
    // 0x140614: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_140618:
    // 0x140618: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x140618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_14061c:
    // 0x14061c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x14061cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_140620:
    // 0x140620: 0xac221ff4  sw          $v0, 0x1FF4($at)
    ctx->pc = 0x140620u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8180), GPR_U32(ctx, 2));
label_140624:
    // 0x140624: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x140624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_140628:
    // 0x140628: 0x8c221ff0  lw          $v0, 0x1FF0($at)
    ctx->pc = 0x140628u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8176))); // MMIO: 0x70001ff0
label_14062c:
    // 0x14062c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x14062cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_140630:
    // 0x140630: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x140630u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_140634:
    // 0x140634: 0x8c231ff4  lw          $v1, 0x1FF4($at)
    ctx->pc = 0x140634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8180)));
label_140638:
    // 0x140638: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x140638u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_14063c:
    // 0x14063c: 0x224b821  addu        $s7, $s1, $a0
    ctx->pc = 0x14063cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_140640:
    // 0x140640: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x140640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_140644:
    // 0x140644: 0x243b023  subu        $s6, $s2, $v1
    ctx->pc = 0x140644u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_140648:
    // 0x140648: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x140648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_14064c:
    // 0x14064c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x14064cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_140650:
    // 0x140650: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x140650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_140654:
    // 0x140654: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x140654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
label_140658:
    // 0x140658: 0x2e21825  or          $v1, $s7, $v0
    ctx->pc = 0x140658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
label_14065c:
    // 0x14065c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x14065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_140660:
    // 0x140660: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x140660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_140664:
    // 0x140664: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x140664u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_140668:
    // 0x140668: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_14066c:
    if (ctx->pc == 0x14066Cu) {
        ctx->pc = 0x140670u;
        goto label_140670;
    }
    ctx->pc = 0x140668u;
    {
        const bool branch_taken_0x140668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140668) {
            ctx->pc = 0x1406E0u;
            goto label_1406e0;
        }
    }
    ctx->pc = 0x140670u;
label_140670:
    // 0x140670: 0x10000a3b  b           . + 4 + (0xA3B << 2)
label_140674:
    if (ctx->pc == 0x140674u) {
        ctx->pc = 0x140678u;
        goto label_140678;
    }
    ctx->pc = 0x140670u;
    {
        const bool branch_taken_0x140670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140670) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x140678u;
label_140678:
    // 0x140678: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x140678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_14067c:
    // 0x14067c: 0x70501018  mult1       $v0, $v0, $s0
    ctx->pc = 0x14067cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_140680:
    // 0x140680: 0x21b02  srl         $v1, $v0, 12
    ctx->pc = 0x140680u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_140684:
    // 0x140684: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x140684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_140688:
    // 0x140688: 0x502018  mult        $a0, $v0, $s0
    ctx->pc = 0x140688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_14068c:
    // 0x14068c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x14068cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_140690:
    // 0x140690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_140694:
    // 0x140694: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x140694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_140698:
    // 0x140698: 0x41b42  srl         $v1, $a0, 13
    ctx->pc = 0x140698u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 13));
label_14069c:
    // 0x14069c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x14069cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_1406a0:
    // 0x1406a0: 0x223b823  subu        $s7, $s1, $v1
    ctx->pc = 0x1406a0u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1406a4:
    // 0x1406a4: 0x242b023  subu        $s6, $s2, $v0
    ctx->pc = 0x1406a4u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1406a8:
    // 0x1406a8: 0x223f021  addu        $fp, $s1, $v1
    ctx->pc = 0x1406a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1406ac:
    // 0x1406ac: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1406acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1406b0:
    // 0x1406b0: 0xafb70120  sw          $s7, 0x120($sp)
    ctx->pc = 0x1406b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 23));
label_1406b4:
    // 0x1406b4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1406b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1406b8:
    // 0x1406b8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1406b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1406bc:
    // 0x1406bc: 0xafbe0100  sw          $fp, 0x100($sp)
    ctx->pc = 0x1406bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 30));
label_1406c0:
    // 0x1406c0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1406c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_1406c4:
    // 0x1406c4: 0x2f61025  or          $v0, $s7, $s6
    ctx->pc = 0x1406c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | GPR_U64(ctx, 22));
label_1406c8:
    // 0x1406c8: 0x3c21825  or          $v1, $fp, $v0
    ctx->pc = 0x1406c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
label_1406cc:
    // 0x1406cc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1406ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1406d0:
    // 0x1406d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1406d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1406d4:
    // 0x1406d4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1406d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_1406d8:
    // 0x1406d8: 0x14400a21  bnez        $v0, . + 4 + (0xA21 << 2)
label_1406dc:
    if (ctx->pc == 0x1406DCu) {
        ctx->pc = 0x1406DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1406D8u;
        // 0x1406dc: 0xafb60110  sw          $s6, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1406E0u;
        goto label_1406e0;
    }
    ctx->pc = 0x1406D8u;
    {
        const bool branch_taken_0x1406d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1406DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1406D8u;
        // 0x1406dc: 0xafb60110  sw          $s6, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1406d8) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x1406E0u;
label_1406e0:
    // 0x1406e0: 0x86640038  lh          $a0, 0x38($s3)
    ctx->pc = 0x1406e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_1406e4:
    // 0x1406e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1406e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1406e8:
    // 0x1406e8: 0x34028011  ori         $v0, $zero, 0x8011
    ctx->pc = 0x1406e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32785);
label_1406ec:
    // 0x1406ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1406ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1406f0:
    // 0x1406f0: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x1406f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1406f4:
    // 0x1406f4: 0x434825  or          $t1, $v0, $v1
    ctx->pc = 0x1406f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1406f8:
    // 0x1406f8: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x1406f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1406fc:
    // 0x1406fc: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1406fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_140700:
    // 0x140700: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x140700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_140704:
    // 0x140704: 0x34460080  ori         $a2, $v0, 0x80
    ctx->pc = 0x140704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_140708:
    // 0x140708: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x140708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_14070c:
    // 0x14070c: 0x905018  mult        $t2, $a0, $s0
    ctx->pc = 0x14070cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_140710:
    // 0x140710: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x140710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
label_140714:
    // 0x140714: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x140714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_140718:
    // 0x140718: 0xa5303  sra         $t2, $t2, 12
    ctx->pc = 0x140718u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
label_14071c:
    // 0x14071c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x14071cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_140720:
    // 0x140720: 0xafaa0320  sw          $t2, 0x320($sp)
    ctx->pc = 0x140720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 10));
label_140724:
    // 0x140724: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x140724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
label_140728:
    // 0x140728: 0x866a003c  lh          $t2, 0x3C($s3)
    ctx->pc = 0x140728u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_14072c:
    // 0x14072c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x14072cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_140730:
    // 0x140730: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x140730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_140734:
    // 0x140734: 0x34421001  ori         $v0, $v0, 0x1001
    ctx->pc = 0x140734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
label_140738:
    // 0x140738: 0x71505018  mult1       $t2, $t2, $s0
    ctx->pc = 0x140738u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_14073c:
    // 0x14073c: 0xa5303  sra         $t2, $t2, 12
    ctx->pc = 0x14073cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
label_140740:
    // 0x140740: 0xafaa0324  sw          $t2, 0x324($sp)
    ctx->pc = 0x140740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 10));
label_140744:
    // 0x140744: 0x866a0040  lh          $t2, 0x40($s3)
    ctx->pc = 0x140744u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 64)));
label_140748:
    // 0x140748: 0x1505018  mult        $t2, $t2, $s0
    ctx->pc = 0x140748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_14074c:
    // 0x14074c: 0xa5303  sra         $t2, $t2, 12
    ctx->pc = 0x14074cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
label_140750:
    // 0x140750: 0xafaa0328  sw          $t2, 0x328($sp)
    ctx->pc = 0x140750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 808), GPR_U32(ctx, 10));
label_140754:
    // 0x140754: 0x866a0044  lh          $t2, 0x44($s3)
    ctx->pc = 0x140754u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 68)));
label_140758:
    // 0x140758: 0x71505018  mult1       $t2, $t2, $s0
    ctx->pc = 0x140758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_14075c:
    // 0x14075c: 0xa5303  sra         $t2, $t2, 12
    ctx->pc = 0x14075cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
label_140760:
    // 0x140760: 0xafaa032c  sw          $t2, 0x32C($sp)
    ctx->pc = 0x140760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 812), GPR_U32(ctx, 10));
label_140764:
    // 0x140764: 0x866a003a  lh          $t2, 0x3A($s3)
    ctx->pc = 0x140764u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
label_140768:
    // 0x140768: 0x1505018  mult        $t2, $t2, $s0
    ctx->pc = 0x140768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_14076c:
    // 0x14076c: 0xa5303  sra         $t2, $t2, 12
    ctx->pc = 0x14076cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
label_140770:
    // 0x140770: 0xafaa0310  sw          $t2, 0x310($sp)
    ctx->pc = 0x140770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 10));
label_140774:
    // 0x140774: 0x866a003e  lh          $t2, 0x3E($s3)
    ctx->pc = 0x140774u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 62)));
label_140778:
    // 0x140778: 0x71505018  mult1       $t2, $t2, $s0
    ctx->pc = 0x140778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_14077c:
    // 0x14077c: 0xa5303  sra         $t2, $t2, 12
    ctx->pc = 0x14077cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
label_140780:
    // 0x140780: 0xafaa0314  sw          $t2, 0x314($sp)
    ctx->pc = 0x140780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 10));
label_140784:
    // 0x140784: 0x866a0042  lh          $t2, 0x42($s3)
    ctx->pc = 0x140784u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 66)));
label_140788:
    // 0x140788: 0x1505018  mult        $t2, $t2, $s0
    ctx->pc = 0x140788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_14078c:
    // 0x14078c: 0xa5303  sra         $t2, $t2, 12
    ctx->pc = 0x14078cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
label_140790:
    // 0x140790: 0xafaa0318  sw          $t2, 0x318($sp)
    ctx->pc = 0x140790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 792), GPR_U32(ctx, 10));
label_140794:
    // 0x140794: 0x866a0046  lh          $t2, 0x46($s3)
    ctx->pc = 0x140794u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
label_140798:
    // 0x140798: 0x71505018  mult1       $t2, $t2, $s0
    ctx->pc = 0x140798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_14079c:
    // 0x14079c: 0xa5303  sra         $t2, $t2, 12
    ctx->pc = 0x14079cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
label_1407a0:
    // 0x1407a0: 0xafaa031c  sw          $t2, 0x31C($sp)
    ctx->pc = 0x1407a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 796), GPR_U32(ctx, 10));
label_1407a4:
    // 0x1407a4: 0xfe890000  sd          $t1, 0x0($s4)
    ctx->pc = 0x1407a4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 9));
label_1407a8:
    // 0x1407a8: 0xfe880008  sd          $t0, 0x8($s4)
    ctx->pc = 0x1407a8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 8));
label_1407ac:
    // 0x1407ac: 0xfe870018  sd          $a3, 0x18($s4)
    ctx->pc = 0x1407acu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 7));
label_1407b0:
    // 0x1407b0: 0xfe860010  sd          $a2, 0x10($s4)
    ctx->pc = 0x1407b0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 6));
label_1407b4:
    // 0x1407b4: 0xfe850028  sd          $a1, 0x28($s4)
    ctx->pc = 0x1407b4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 5));
label_1407b8:
    // 0x1407b8: 0xfe840020  sd          $a0, 0x20($s4)
    ctx->pc = 0x1407b8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 4));
label_1407bc:
    // 0x1407bc: 0xfe830038  sd          $v1, 0x38($s4)
    ctx->pc = 0x1407bcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 56), GPR_U64(ctx, 3));
label_1407c0:
    // 0x1407c0: 0xfe820030  sd          $v0, 0x30($s4)
    ctx->pc = 0x1407c0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 2));
label_1407c4:
    // 0x1407c4: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x1407c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954660)));
label_1407c8:
    // 0x1407c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1407cc:
    if (ctx->pc == 0x1407CCu) {
        ctx->pc = 0x1407CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407C8u;
        // 0x1407cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1407D0u;
        goto label_1407d0;
    }
    ctx->pc = 0x1407C8u;
    {
        const bool branch_taken_0x1407c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1407CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407C8u;
        // 0x1407cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1407c8) {
            ctx->pc = 0x1407D8u;
            goto label_1407d8;
        }
    }
    ctx->pc = 0x1407D0u;
label_1407d0:
    // 0x1407d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1407d4:
    if (ctx->pc == 0x1407D4u) {
        ctx->pc = 0x1407D8u;
        goto label_1407d8;
    }
    ctx->pc = 0x1407D0u;
    {
        const bool branch_taken_0x1407d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1407d0) {
            ctx->pc = 0x1407E0u;
            goto label_1407e0;
        }
    }
    ctx->pc = 0x1407D8u;
label_1407d8:
    // 0x1407d8: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x1407d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1407dc:
    // 0x1407dc: 0x0  nop
    ctx->pc = 0x1407dcu;
    // NOP
label_1407e0:
    // 0x1407e0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1407e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1407e4:
    // 0x1407e4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1407e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_1407e8:
    // 0x1407e8: 0xfe830048  sd          $v1, 0x48($s4)
    ctx->pc = 0x1407e8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 3));
label_1407ec:
    // 0x1407ec: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1407ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
label_1407f0:
    // 0x1407f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1407f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1407f4:
    // 0x1407f4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1407f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_1407f8:
    // 0x1407f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1407f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1407fc:
    // 0x1407fc: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x1407fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_140800:
    // 0x140800: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x140800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_140804:
    // 0x140804: 0xfe830040  sd          $v1, 0x40($s4)
    ctx->pc = 0x140804u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 3));
label_140808:
    // 0x140808: 0x2402037c  addiu       $v0, $zero, 0x37C
    ctx->pc = 0x140808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
label_14080c:
    // 0x14080c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x14080cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_140810:
    // 0x140810: 0xfe840058  sd          $a0, 0x58($s4)
    ctx->pc = 0x140810u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 4));
label_140814:
    // 0x140814: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x140814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_140818:
    // 0x140818: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x140818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_14081c:
    // 0x14081c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14081cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_140820:
    // 0x140820: 0xfe820050  sd          $v0, 0x50($s4)
    ctx->pc = 0x140820u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 2));
label_140824:
    // 0x140824: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x140824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
label_140828:
    // 0x140828: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x140828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_14082c:
    // 0x14082c: 0x8fa30324  lw          $v1, 0x324($sp)
    ctx->pc = 0x14082cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
label_140830:
    // 0x140830: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x140830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_140834:
    // 0x140834: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x140834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_140838:
    // 0x140838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14083c:
    // 0x14083c: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x14083cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_140840:
    // 0x140840: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_140844:
    if (ctx->pc == 0x140844u) {
        ctx->pc = 0x140844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140840u;
        // 0x140844: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140848u;
        goto label_140848;
    }
    ctx->pc = 0x140840u;
    {
        const bool branch_taken_0x140840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x140844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140840u;
        // 0x140844: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140840) {
            ctx->pc = 0x140850u;
            goto label_140850;
        }
    }
    ctx->pc = 0x140848u;
label_140848:
    // 0x140848: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x140848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14084c:
    // 0x14084c: 0x0  nop
    ctx->pc = 0x14084cu;
    // NOP
label_140850:
    // 0x140850: 0x8fa20328  lw          $v0, 0x328($sp)
    ctx->pc = 0x140850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
label_140854:
    // 0x140854: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x140854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_140858:
    // 0x140858: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x140858u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_14085c:
    // 0x14085c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_140860:
    if (ctx->pc == 0x140860u) {
        ctx->pc = 0x140864u;
        goto label_140864;
    }
    ctx->pc = 0x14085Cu;
    {
        const bool branch_taken_0x14085c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14085c) {
            ctx->pc = 0x140868u;
            goto label_140868;
        }
    }
    ctx->pc = 0x140864u;
label_140864:
    // 0x140864: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x140864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140868:
    // 0x140868: 0x8fa2032c  lw          $v0, 0x32C($sp)
    ctx->pc = 0x140868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
label_14086c:
    // 0x14086c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x14086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_140870:
    // 0x140870: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x140870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_140874:
    // 0x140874: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_140878:
    if (ctx->pc == 0x140878u) {
        ctx->pc = 0x14087Cu;
        goto label_14087c;
    }
    ctx->pc = 0x140874u;
    {
        const bool branch_taken_0x140874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140874) {
            ctx->pc = 0x140880u;
            goto label_140880;
        }
    }
    ctx->pc = 0x14087Cu;
label_14087c:
    // 0x14087c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14087cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140880:
    // 0x140880: 0x8fa30324  lw          $v1, 0x324($sp)
    ctx->pc = 0x140880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
label_140884:
    // 0x140884: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x140884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_140888:
    // 0x140888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14088c:
    // 0x14088c: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x14088cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_140890:
    // 0x140890: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_140894:
    if (ctx->pc == 0x140894u) {
        ctx->pc = 0x140898u;
        goto label_140898;
    }
    ctx->pc = 0x140890u;
    {
        const bool branch_taken_0x140890 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140890) {
            ctx->pc = 0x1408A0u;
            goto label_1408a0;
        }
    }
    ctx->pc = 0x140898u;
label_140898:
    // 0x140898: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x140898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14089c:
    // 0x14089c: 0x0  nop
    ctx->pc = 0x14089cu;
    // NOP
label_1408a0:
    // 0x1408a0: 0x8fa20328  lw          $v0, 0x328($sp)
    ctx->pc = 0x1408a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
label_1408a4:
    // 0x1408a4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1408a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_1408a8:
    // 0x1408a8: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x1408a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1408ac:
    // 0x1408ac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1408b0:
    if (ctx->pc == 0x1408B0u) {
        ctx->pc = 0x1408B4u;
        goto label_1408b4;
    }
    ctx->pc = 0x1408ACu;
    {
        const bool branch_taken_0x1408ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1408ac) {
            ctx->pc = 0x1408B8u;
            goto label_1408b8;
        }
    }
    ctx->pc = 0x1408B4u;
label_1408b4:
    // 0x1408b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1408b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1408b8:
    // 0x1408b8: 0x8fa2032c  lw          $v0, 0x32C($sp)
    ctx->pc = 0x1408b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
label_1408bc:
    // 0x1408bc: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1408bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_1408c0:
    // 0x1408c0: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x1408c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1408c4:
    // 0x1408c4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1408c8:
    if (ctx->pc == 0x1408C8u) {
        ctx->pc = 0x1408CCu;
        goto label_1408cc;
    }
    ctx->pc = 0x1408C4u;
    {
        const bool branch_taken_0x1408c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1408c4) {
            ctx->pc = 0x1408D0u;
            goto label_1408d0;
        }
    }
    ctx->pc = 0x1408CCu;
label_1408cc:
    // 0x1408cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1408ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1408d0:
    // 0x1408d0: 0x8fa40310  lw          $a0, 0x310($sp)
    ctx->pc = 0x1408d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_1408d4:
    // 0x1408d4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1408d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1408d8:
    // 0x1408d8: 0x8fa30314  lw          $v1, 0x314($sp)
    ctx->pc = 0x1408d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
label_1408dc:
    // 0x1408dc: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x1408dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1408e0:
    // 0x1408e0: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x1408e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_1408e4:
    // 0x1408e4: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x1408e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1408e8:
    // 0x1408e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1408ec:
    if (ctx->pc == 0x1408ECu) {
        ctx->pc = 0x1408ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408E8u;
        // 0x1408ec: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1408F0u;
        goto label_1408f0;
    }
    ctx->pc = 0x1408E8u;
    {
        const bool branch_taken_0x1408e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1408ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408E8u;
        // 0x1408ec: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1408e8) {
            ctx->pc = 0x1408F8u;
            goto label_1408f8;
        }
    }
    ctx->pc = 0x1408F0u;
label_1408f0:
    // 0x1408f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1408f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1408f4:
    // 0x1408f4: 0x0  nop
    ctx->pc = 0x1408f4u;
    // NOP
label_1408f8:
    // 0x1408f8: 0x8fa30318  lw          $v1, 0x318($sp)
    ctx->pc = 0x1408f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 792)));
label_1408fc:
    // 0x1408fc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1408fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_140900:
    // 0x140900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_140904:
    // 0x140904: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x140904u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_140908:
    // 0x140908: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_14090c:
    if (ctx->pc == 0x14090Cu) {
        ctx->pc = 0x140910u;
        goto label_140910;
    }
    ctx->pc = 0x140908u;
    {
        const bool branch_taken_0x140908 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140908) {
            ctx->pc = 0x140918u;
            goto label_140918;
        }
    }
    ctx->pc = 0x140910u;
label_140910:
    // 0x140910: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x140910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140914:
    // 0x140914: 0x0  nop
    ctx->pc = 0x140914u;
    // NOP
label_140918:
    // 0x140918: 0x8fa3031c  lw          $v1, 0x31C($sp)
    ctx->pc = 0x140918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 796)));
label_14091c:
    // 0x14091c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x14091cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_140920:
    // 0x140920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_140924:
    // 0x140924: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x140924u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_140928:
    // 0x140928: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_14092c:
    if (ctx->pc == 0x14092Cu) {
        ctx->pc = 0x140930u;
        goto label_140930;
    }
    ctx->pc = 0x140928u;
    {
        const bool branch_taken_0x140928 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140928) {
            ctx->pc = 0x140938u;
            goto label_140938;
        }
    }
    ctx->pc = 0x140930u;
label_140930:
    // 0x140930: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x140930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140934:
    // 0x140934: 0x0  nop
    ctx->pc = 0x140934u;
    // NOP
label_140938:
    // 0x140938: 0x8fa20314  lw          $v0, 0x314($sp)
    ctx->pc = 0x140938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
label_14093c:
    // 0x14093c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x14093cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_140940:
    // 0x140940: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x140940u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_140944:
    // 0x140944: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_140948:
    if (ctx->pc == 0x140948u) {
        ctx->pc = 0x14094Cu;
        goto label_14094c;
    }
    ctx->pc = 0x140944u;
    {
        const bool branch_taken_0x140944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140944) {
            ctx->pc = 0x140950u;
            goto label_140950;
        }
    }
    ctx->pc = 0x14094Cu;
label_14094c:
    // 0x14094c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x14094cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140950:
    // 0x140950: 0x8fa30318  lw          $v1, 0x318($sp)
    ctx->pc = 0x140950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 792)));
label_140954:
    // 0x140954: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x140954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_140958:
    // 0x140958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14095c:
    // 0x14095c: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x14095cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_140960:
    // 0x140960: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_140964:
    if (ctx->pc == 0x140964u) {
        ctx->pc = 0x140968u;
        goto label_140968;
    }
    ctx->pc = 0x140960u;
    {
        const bool branch_taken_0x140960 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140960) {
            ctx->pc = 0x140970u;
            goto label_140970;
        }
    }
    ctx->pc = 0x140968u;
label_140968:
    // 0x140968: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x140968u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14096c:
    // 0x14096c: 0x0  nop
    ctx->pc = 0x14096cu;
    // NOP
label_140970:
    // 0x140970: 0x8fa3031c  lw          $v1, 0x31C($sp)
    ctx->pc = 0x140970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 796)));
label_140974:
    // 0x140974: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x140974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_140978:
    // 0x140978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14097c:
    // 0x14097c: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x14097cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_140980:
    // 0x140980: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_140984:
    if (ctx->pc == 0x140984u) {
        ctx->pc = 0x140988u;
        goto label_140988;
    }
    ctx->pc = 0x140980u;
    {
        const bool branch_taken_0x140980 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140980) {
            ctx->pc = 0x140990u;
            goto label_140990;
        }
    }
    ctx->pc = 0x140988u;
label_140988:
    // 0x140988: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x140988u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14098c:
    // 0x14098c: 0x0  nop
    ctx->pc = 0x14098cu;
    // NOP
label_140990:
    // 0x140990: 0x2a417000  slti        $at, $s2, 0x7000
    ctx->pc = 0x140990u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)28672) ? 1 : 0);
label_140994:
    // 0x140994: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_140998:
    if (ctx->pc == 0x140998u) {
        ctx->pc = 0x14099Cu;
        goto label_14099c;
    }
    ctx->pc = 0x140994u;
    {
        const bool branch_taken_0x140994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140994) {
            ctx->pc = 0x1409A0u;
            goto label_1409a0;
        }
    }
    ctx->pc = 0x14099Cu;
label_14099c:
    // 0x14099c: 0x24127000  addiu       $s2, $zero, 0x7000
    ctx->pc = 0x14099cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_1409a0:
    // 0x1409a0: 0x2a217000  slti        $at, $s1, 0x7000
    ctx->pc = 0x1409a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)28672) ? 1 : 0);
label_1409a4:
    // 0x1409a4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1409a8:
    if (ctx->pc == 0x1409A8u) {
        ctx->pc = 0x1409ACu;
        goto label_1409ac;
    }
    ctx->pc = 0x1409A4u;
    {
        const bool branch_taken_0x1409a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1409a4) {
            ctx->pc = 0x1409B0u;
            goto label_1409b0;
        }
    }
    ctx->pc = 0x1409ACu;
label_1409ac:
    // 0x1409ac: 0x24117000  addiu       $s1, $zero, 0x7000
    ctx->pc = 0x1409acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_1409b0:
    // 0x1409b0: 0x34018ff1  ori         $at, $zero, 0x8FF1
    ctx->pc = 0x1409b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36849);
label_1409b4:
    // 0x1409b4: 0x241082a  slt         $at, $s2, $at
    ctx->pc = 0x1409b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_1409b8:
    // 0x1409b8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1409bc:
    if (ctx->pc == 0x1409BCu) {
        ctx->pc = 0x1409C0u;
        goto label_1409c0;
    }
    ctx->pc = 0x1409B8u;
    {
        const bool branch_taken_0x1409b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1409b8) {
            ctx->pc = 0x1409C8u;
            goto label_1409c8;
        }
    }
    ctx->pc = 0x1409C0u;
label_1409c0:
    // 0x1409c0: 0x34128ff0  ori         $s2, $zero, 0x8FF0
    ctx->pc = 0x1409c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36848);
label_1409c4:
    // 0x1409c4: 0x0  nop
    ctx->pc = 0x1409c4u;
    // NOP
label_1409c8:
    // 0x1409c8: 0x34018ff1  ori         $at, $zero, 0x8FF1
    ctx->pc = 0x1409c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36849);
label_1409cc:
    // 0x1409cc: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x1409ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_1409d0:
    // 0x1409d0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1409d4:
    if (ctx->pc == 0x1409D4u) {
        ctx->pc = 0x1409D8u;
        goto label_1409d8;
    }
    ctx->pc = 0x1409D0u;
    {
        const bool branch_taken_0x1409d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1409d0) {
            ctx->pc = 0x1409E0u;
            goto label_1409e0;
        }
    }
    ctx->pc = 0x1409D8u;
label_1409d8:
    // 0x1409d8: 0x34118ff0  ori         $s1, $zero, 0x8FF0
    ctx->pc = 0x1409d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36848);
label_1409dc:
    // 0x1409dc: 0x0  nop
    ctx->pc = 0x1409dcu;
    // NOP
label_1409e0:
    // 0x1409e0: 0x2a017900  slti        $at, $s0, 0x7900
    ctx->pc = 0x1409e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)30976) ? 1 : 0);
label_1409e4:
    // 0x1409e4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1409e8:
    if (ctx->pc == 0x1409E8u) {
        ctx->pc = 0x1409ECu;
        goto label_1409ec;
    }
    ctx->pc = 0x1409E4u;
    {
        const bool branch_taken_0x1409e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1409e4) {
            ctx->pc = 0x1409F0u;
            goto label_1409f0;
        }
    }
    ctx->pc = 0x1409ECu;
label_1409ec:
    // 0x1409ec: 0x24107900  addiu       $s0, $zero, 0x7900
    ctx->pc = 0x1409ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
label_1409f0:
    // 0x1409f0: 0x2aa17900  slti        $at, $s5, 0x7900
    ctx->pc = 0x1409f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)30976) ? 1 : 0);
label_1409f4:
    // 0x1409f4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1409f8:
    if (ctx->pc == 0x1409F8u) {
        ctx->pc = 0x1409FCu;
        goto label_1409fc;
    }
    ctx->pc = 0x1409F4u;
    {
        const bool branch_taken_0x1409f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1409f4) {
            ctx->pc = 0x140A00u;
            goto label_140a00;
        }
    }
    ctx->pc = 0x1409FCu;
label_1409fc:
    // 0x1409fc: 0x24157900  addiu       $s5, $zero, 0x7900
    ctx->pc = 0x1409fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
label_140a00:
    // 0x140a00: 0x340186f1  ori         $at, $zero, 0x86F1
    ctx->pc = 0x140a00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34545);
label_140a04:
    // 0x140a04: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x140a04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_140a08:
    // 0x140a08: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_140a0c:
    if (ctx->pc == 0x140A0Cu) {
        ctx->pc = 0x140A10u;
        goto label_140a10;
    }
    ctx->pc = 0x140A08u;
    {
        const bool branch_taken_0x140a08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x140a08) {
            ctx->pc = 0x140A18u;
            goto label_140a18;
        }
    }
    ctx->pc = 0x140A10u;
label_140a10:
    // 0x140a10: 0x341086f0  ori         $s0, $zero, 0x86F0
    ctx->pc = 0x140a10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34544);
label_140a14:
    // 0x140a14: 0x0  nop
    ctx->pc = 0x140a14u;
    // NOP
label_140a18:
    // 0x140a18: 0x340186f1  ori         $at, $zero, 0x86F1
    ctx->pc = 0x140a18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34545);
label_140a1c:
    // 0x140a1c: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x140a1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_140a20:
    // 0x140a20: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_140a24:
    if (ctx->pc == 0x140A24u) {
        ctx->pc = 0x140A28u;
        goto label_140a28;
    }
    ctx->pc = 0x140A20u;
    {
        const bool branch_taken_0x140a20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x140a20) {
            ctx->pc = 0x140A30u;
            goto label_140a30;
        }
    }
    ctx->pc = 0x140A28u;
label_140a28:
    // 0x140a28: 0x341586f0  ori         $s5, $zero, 0x86F0
    ctx->pc = 0x140a28u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34544);
label_140a2c:
    // 0x140a2c: 0x0  nop
    ctx->pc = 0x140a2cu;
    // NOP
label_140a30:
    // 0x140a30: 0x26529000  addiu       $s2, $s2, -0x7000
    ctx->pc = 0x140a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938624));
label_140a34:
    // 0x140a34: 0x121103  sra         $v0, $s2, 4
    ctx->pc = 0x140a34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 4));
label_140a38:
    // 0x140a38: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x140a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_140a3c:
    // 0x140a3c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x140a3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_140a40:
    // 0x140a40: 0x26319000  addiu       $s1, $s1, -0x7000
    ctx->pc = 0x140a40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294938624));
label_140a44:
    // 0x140a44: 0x111103  sra         $v0, $s1, 4
    ctx->pc = 0x140a44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 4));
label_140a48:
    // 0x140a48: 0x26108700  addiu       $s0, $s0, -0x7900
    ctx->pc = 0x140a48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936320));
label_140a4c:
    // 0x140a4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x140a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_140a50:
    // 0x140a50: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x140a50u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_140a54:
    // 0x140a54: 0x101103  sra         $v0, $s0, 4
    ctx->pc = 0x140a54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 4));
label_140a58:
    // 0x140a58: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x140a58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_140a5c:
    // 0x140a5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x140a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_140a60:
    // 0x140a60: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x140a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_140a64:
    // 0x140a64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x140a64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_140a68:
    // 0x140a68: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x140a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_140a6c:
    // 0x140a6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x140a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_140a70:
    // 0x140a70: 0x26b58700  addiu       $s5, $s5, -0x7900
    ctx->pc = 0x140a70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936320));
label_140a74:
    // 0x140a74: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x140a74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_140a78:
    // 0x140a78: 0xfe840068  sd          $a0, 0x68($s4)
    ctx->pc = 0x140a78u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 104), GPR_U64(ctx, 4));
label_140a7c:
    // 0x140a7c: 0x151103  sra         $v0, $s5, 4
    ctx->pc = 0x140a7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 4));
label_140a80:
    // 0x140a80: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x140a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_140a84:
    // 0x140a84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x140a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_140a88:
    // 0x140a88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x140a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_140a8c:
    // 0x140a8c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x140a8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_140a90:
    // 0x140a90: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x140a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
label_140a94:
    // 0x140a94: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x140a94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_140a98:
    // 0x140a98: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x140a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
label_140a9c:
    // 0x140a9c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x140a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_140aa0:
    // 0x140aa0: 0xfe860060  sd          $a2, 0x60($s4)
    ctx->pc = 0x140aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 6));
label_140aa4:
    // 0x140aa4: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x140aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_140aa8:
    // 0x140aa8: 0xfe830078  sd          $v1, 0x78($s4)
    ctx->pc = 0x140aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 3));
label_140aac:
    // 0x140aac: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x140aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_140ab0:
    // 0x140ab0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x140ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_140ab4:
    // 0x140ab4: 0xfe820070  sd          $v0, 0x70($s4)
    ctx->pc = 0x140ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 2));
label_140ab8:
    // 0x140ab8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x140ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140abc:
    // 0x140abc: 0x24020116  addiu       $v0, $zero, 0x116
    ctx->pc = 0x140abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
label_140ac0:
    // 0x140ac0: 0xfe800088  sd          $zero, 0x88($s4)
    ctx->pc = 0x140ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 136), GPR_U64(ctx, 0));
label_140ac4:
    // 0x140ac4: 0xfe820080  sd          $v0, 0x80($s4)
    ctx->pc = 0x140ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 128), GPR_U64(ctx, 2));
label_140ac8:
    // 0x140ac8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x140ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_140acc:
    // 0x140acc: 0xfe850098  sd          $a1, 0x98($s4)
    ctx->pc = 0x140accu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 152), GPR_U64(ctx, 5));
label_140ad0:
    // 0x140ad0: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x140ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_140ad4:
    // 0x140ad4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x140ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_140ad8:
    // 0x140ad8: 0xfe820090  sd          $v0, 0x90($s4)
    ctx->pc = 0x140ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 144), GPR_U64(ctx, 2));
label_140adc:
    // 0x140adc: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x140adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_140ae0:
    // 0x140ae0: 0xfe8600a8  sd          $a2, 0xA8($s4)
    ctx->pc = 0x140ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 168), GPR_U64(ctx, 6));
label_140ae4:
    // 0x140ae4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x140ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_140ae8:
    // 0x140ae8: 0xfe8200a0  sd          $v0, 0xA0($s4)
    ctx->pc = 0x140ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 160), GPR_U64(ctx, 2));
label_140aec:
    // 0x140aec: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x140aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
label_140af0:
    // 0x140af0: 0xfe8500b8  sd          $a1, 0xB8($s4)
    ctx->pc = 0x140af0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 184), GPR_U64(ctx, 5));
label_140af4:
    // 0x140af4: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x140af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
label_140af8:
    // 0x140af8: 0x34058700  ori         $a1, $zero, 0x8700
    ctx->pc = 0x140af8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
label_140afc:
    // 0x140afc: 0xfe8200b0  sd          $v0, 0xB0($s4)
    ctx->pc = 0x140afcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 176), GPR_U64(ctx, 2));
label_140b00:
    // 0x140b00: 0x3c020e08  lui         $v0, 0xE08
    ctx->pc = 0x140b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3592 << 16));
label_140b04:
    // 0x140b04: 0xfe8600c8  sd          $a2, 0xC8($s4)
    ctx->pc = 0x140b04u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 200), GPR_U64(ctx, 6));
label_140b08:
    // 0x140b08: 0x34422008  ori         $v0, $v0, 0x2008
    ctx->pc = 0x140b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8200);
label_140b0c:
    // 0x140b0c: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x140b0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
label_140b10:
    // 0x140b10: 0xfe8200c0  sd          $v0, 0xC0($s4)
    ctx->pc = 0x140b10u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 192), GPR_U64(ctx, 2));
label_140b14:
    // 0x140b14: 0x3c0500df  lui         $a1, 0xDF
    ctx->pc = 0x140b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)223 << 16));
label_140b18:
    // 0x140b18: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x140b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_140b1c:
    // 0x140b1c: 0x34c79000  ori         $a3, $a2, 0x9000
    ctx->pc = 0x140b1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36864);
label_140b20:
    // 0x140b20: 0xfe8200d8  sd          $v0, 0xD8($s4)
    ctx->pc = 0x140b20u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 216), GPR_U64(ctx, 2));
label_140b24:
    // 0x140b24: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x140b24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_140b28:
    // 0x140b28: 0xfe8700d0  sd          $a3, 0xD0($s4)
    ctx->pc = 0x140b28u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 208), GPR_U64(ctx, 7));
label_140b2c:
    // 0x140b2c: 0x3c0501ff  lui         $a1, 0x1FF
    ctx->pc = 0x140b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)511 << 16));
label_140b30:
    // 0x140b30: 0xfe8400e8  sd          $a0, 0xE8($s4)
    ctx->pc = 0x140b30u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 232), GPR_U64(ctx, 4));
label_140b34:
    // 0x140b34: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x140b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_140b38:
    // 0x140b38: 0xfe8500e0  sd          $a1, 0xE0($s4)
    ctx->pc = 0x140b38u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 224), GPR_U64(ctx, 5));
label_140b3c:
    // 0x140b3c: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x140b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_140b40:
    // 0x140b40: 0xfe8400f8  sd          $a0, 0xF8($s4)
    ctx->pc = 0x140b40u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 248), GPR_U64(ctx, 4));
label_140b44:
    // 0x140b44: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x140b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_140b48:
    // 0x140b48: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x140b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_140b4c:
    // 0x140b4c: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x140b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_140b50:
    // 0x140b50: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x140b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_140b54:
    // 0x140b54: 0xfe8400f0  sd          $a0, 0xF0($s4)
    ctx->pc = 0x140b54u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 240), GPR_U64(ctx, 4));
label_140b58:
    // 0x140b58: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x140b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_140b5c:
    // 0x140b5c: 0xfe850108  sd          $a1, 0x108($s4)
    ctx->pc = 0x140b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 264), GPR_U64(ctx, 5));
label_140b60:
    // 0x140b60: 0x3c04c400  lui         $a0, 0xC400
    ctx->pc = 0x140b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50176 << 16));
label_140b64:
    // 0x140b64: 0xfe820100  sd          $v0, 0x100($s4)
    ctx->pc = 0x140b64u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 256), GPR_U64(ctx, 2));
label_140b68:
    // 0x140b68: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x140b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_140b6c:
    // 0x140b6c: 0xfe830118  sd          $v1, 0x118($s4)
    ctx->pc = 0x140b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 280), GPR_U64(ctx, 3));
label_140b70:
    // 0x140b70: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x140b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_140b74:
    // 0x140b74: 0x8c23f014  lw          $v1, -0xFEC($at)
    ctx->pc = 0x140b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
label_140b78:
    // 0x140b78: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x140b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_140b7c:
    // 0x140b7c: 0x70023b89  pcpyld      $a3, $zero, $v0
    ctx->pc = 0x140b7cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_140b80:
    // 0x140b80: 0x3c023434  lui         $v0, 0x3434
    ctx->pc = 0x140b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13364 << 16));
label_140b84:
    // 0x140b84: 0x3405f434  ori         $a1, $zero, 0xF434
    ctx->pc = 0x140b84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62516);
label_140b88:
    // 0x140b88: 0x34463160  ori         $a2, $v0, 0x3160
    ctx->pc = 0x140b88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12640);
label_140b8c:
    // 0x140b8c: 0x24040154  addiu       $a0, $zero, 0x154
    ctx->pc = 0x140b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
label_140b90:
    // 0x140b90: 0xdc620040  ld          $v0, 0x40($v1)
    ctx->pc = 0x140b90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 64)));
label_140b94:
    // 0x140b94: 0xfe820110  sd          $v0, 0x110($s4)
    ctx->pc = 0x140b94u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 272), GPR_U64(ctx, 2));
label_140b98:
    // 0x140b98: 0x86620018  lh          $v0, 0x18($s3)
    ctx->pc = 0x140b98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
label_140b9c:
    // 0x140b9c: 0x26940120  addiu       $s4, $s4, 0x120
    ctx->pc = 0x140b9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
label_140ba0:
    // 0x140ba0: 0xa7a20180  sh          $v0, 0x180($sp)
    ctx->pc = 0x140ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 384), (uint16_t)GPR_U32(ctx, 2));
label_140ba4:
    // 0x140ba4: 0x8662001a  lh          $v0, 0x1A($s3)
    ctx->pc = 0x140ba4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
label_140ba8:
    // 0x140ba8: 0x87a30180  lh          $v1, 0x180($sp)
    ctx->pc = 0x140ba8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 384)));
label_140bac:
    // 0x140bac: 0xa7a20160  sh          $v0, 0x160($sp)
    ctx->pc = 0x140bacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 352), (uint16_t)GPR_U32(ctx, 2));
label_140bb0:
    // 0x140bb0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x140bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_140bb4:
    // 0x140bb4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x140bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_140bb8:
    // 0x140bb8: 0xfe870000  sd          $a3, 0x0($s4)
    ctx->pc = 0x140bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 7));
label_140bbc:
    // 0x140bbc: 0xa7a20170  sh          $v0, 0x170($sp)
    ctx->pc = 0x140bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 368), (uint16_t)GPR_U32(ctx, 2));
label_140bc0:
    // 0x140bc0: 0xae860008  sw          $a2, 0x8($s4)
    ctx->pc = 0x140bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
label_140bc4:
    // 0x140bc4: 0x87a30160  lh          $v1, 0x160($sp)
    ctx->pc = 0x140bc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 352)));
label_140bc8:
    // 0x140bc8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x140bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_140bcc:
    // 0x140bcc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x140bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_140bd0:
    // 0x140bd0: 0xae85000c  sw          $a1, 0xC($s4)
    ctx->pc = 0x140bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 5));
label_140bd4:
    // 0x140bd4: 0xa7a20150  sh          $v0, 0x150($sp)
    ctx->pc = 0x140bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 336), (uint16_t)GPR_U32(ctx, 2));
label_140bd8:
    // 0x140bd8: 0xfe840010  sd          $a0, 0x10($s4)
    ctx->pc = 0x140bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 4));
label_140bdc:
    // 0x140bdc: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x140bdcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_140be0:
    // 0x140be0: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x140be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_140be4:
    // 0x140be4: 0xc04cfd8  jal         func_133F60
label_140be8:
    if (ctx->pc == 0x140BE8u) {
        ctx->pc = 0x140BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BE4u;
        // 0x140be8: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140BECu;
        goto label_140bec;
    }
    ctx->pc = 0x140BE4u;
    SET_GPR_U32(ctx, 31, 0x140BECu);
    ctx->pc = 0x140BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140BE4u;
    // 0x140be8: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x140BE4u, 0x140BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BECu;
label_140bec:
    // 0x140bec: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x140becu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_140bf0:
    // 0x140bf0: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x140bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_140bf4:
    // 0x140bf4: 0x121103  sra         $v0, $s2, 4
    ctx->pc = 0x140bf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 4));
label_140bf8:
    // 0x140bf8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x140bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_140bfc:
    // 0x140bfc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x140bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_140c00:
    // 0x140c00: 0x34128001  ori         $s2, $zero, 0x8001
    ctx->pc = 0x140c00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_140c04:
    // 0x140c04: 0x111103  sra         $v0, $s1, 4
    ctx->pc = 0x140c04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 4));
label_140c08:
    // 0x140c08: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x140c08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_140c0c:
    // 0x140c0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x140c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_140c10:
    // 0x140c10: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x140c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
label_140c14:
    // 0x140c14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x140c14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_140c18:
    // 0x140c18: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x140c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
label_140c1c:
    // 0x140c1c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x140c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
label_140c20:
    // 0x140c20: 0x26f99008  addiu       $t9, $s7, -0x6FF8
    ctx->pc = 0x140c20u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 23), 4294938632));
label_140c24:
    // 0x140c24: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x140c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_140c28:
    // 0x140c28: 0x101103  sra         $v0, $s0, 4
    ctx->pc = 0x140c28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 4));
label_140c2c:
    // 0x140c2c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x140c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_140c30:
    // 0x140c30: 0x151103  sra         $v0, $s5, 4
    ctx->pc = 0x140c30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 4));
label_140c34:
    // 0x140c34: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x140c34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_140c38:
    // 0x140c38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x140c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_140c3c:
    // 0x140c3c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x140c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
label_140c40:
    // 0x140c40: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x140c40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_140c44:
    // 0x140c44: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x140c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_140c48:
    // 0x140c48: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x140c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_140c4c:
    // 0x140c4c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x140c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_140c50:
    // 0x140c50: 0x436825  or          $t5, $v0, $v1
    ctx->pc = 0x140c50u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_140c54:
    // 0x140c54: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x140c54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_140c58:
    // 0x140c58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x140c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_140c5c:
    // 0x140c5c: 0x3c154124  lui         $s5, 0x4124
    ctx->pc = 0x140c5cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16676 << 16));
label_140c60:
    // 0x140c60: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x140c60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_140c64:
    // 0x140c64: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x140c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_140c68:
    // 0x140c68: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x140c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_140c6c:
    // 0x140c6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x140c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_140c70:
    // 0x140c70: 0x2e21821  addu        $v1, $s7, $v0
    ctx->pc = 0x140c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_140c74:
    // 0x140c74: 0x87a20180  lh          $v0, 0x180($sp)
    ctx->pc = 0x140c74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 384)));
label_140c78:
    // 0x140c78: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x140c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_140c7c:
    // 0x140c7c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x140c7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_140c80:
    // 0x140c80: 0xa6820028  sh          $v0, 0x28($s4)
    ctx->pc = 0x140c80u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 40), (uint16_t)GPR_U32(ctx, 2));
label_140c84:
    // 0x140c84: 0x87a20160  lh          $v0, 0x160($sp)
    ctx->pc = 0x140c84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 352)));
label_140c88:
    // 0x140c88: 0xa682002a  sh          $v0, 0x2A($s4)
    ctx->pc = 0x140c88u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 42), (uint16_t)GPR_U32(ctx, 2));
label_140c8c:
    // 0x140c8c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x140c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_140c90:
    // 0x140c90: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x140c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
label_140c94:
    // 0x140c94: 0x562821  addu        $a1, $v0, $s6
    ctx->pc = 0x140c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_140c98:
    // 0x140c98: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x140c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_140c9c:
    // 0x140c9c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x140c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_140ca0:
    // 0x140ca0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x140ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_140ca4:
    // 0x140ca4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x140ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_140ca8:
    // 0x140ca8: 0x34058007  ori         $a1, $zero, 0x8007
    ctx->pc = 0x140ca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32775);
label_140cac:
    // 0x140cac: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x140cacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_140cb0:
    // 0x140cb0: 0xa48025  or          $s0, $a1, $a0
    ctx->pc = 0x140cb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_140cb4:
    // 0x140cb4: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x140cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_140cb8:
    // 0x140cb8: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x140cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_140cbc:
    // 0x140cbc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x140cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_140cc0:
    // 0x140cc0: 0xa6860030  sh          $a2, 0x30($s4)
    ctx->pc = 0x140cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 48), (uint16_t)GPR_U32(ctx, 6));
label_140cc4:
    // 0x140cc4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x140cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_140cc8:
    // 0x140cc8: 0x8fa80310  lw          $t0, 0x310($sp)
    ctx->pc = 0x140cc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_140ccc:
    // 0x140ccc: 0x70057b89  pcpyld      $t7, $zero, $a1
    ctx->pc = 0x140cccu;
    SET_GPR_VEC(ctx, 15, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
label_140cd0:
    // 0x140cd0: 0x3c0500df  lui         $a1, 0xDF
    ctx->pc = 0x140cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)223 << 16));
label_140cd4:
    // 0x140cd4: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x140cd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_140cd8:
    // 0x140cd8: 0x3c0501ff  lui         $a1, 0x1FF
    ctx->pc = 0x140cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)511 << 16));
label_140cdc:
    // 0x140cdc: 0xa67025  or          $t6, $a1, $a2
    ctx->pc = 0x140cdcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_140ce0:
    // 0x140ce0: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x140ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_140ce4:
    // 0x140ce4: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x140ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_140ce8:
    // 0x140ce8: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x140ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_140cec:
    // 0x140cec: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x140cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
label_140cf0:
    // 0x140cf0: 0xa6880032  sh          $t0, 0x32($s4)
    ctx->pc = 0x140cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 50), (uint16_t)GPR_U32(ctx, 8));
label_140cf4:
    // 0x140cf4: 0xc56025  or          $t4, $a2, $a1
    ctx->pc = 0x140cf4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_140cf8:
    // 0x140cf8: 0x24067900  addiu       $a2, $zero, 0x7900
    ctx->pc = 0x140cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
label_140cfc:
    // 0x140cfc: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x140cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_140d00:
    // 0x140d00: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x140d00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
label_140d04:
    // 0x140d04: 0x24067000  addiu       $a2, $zero, 0x7000
    ctx->pc = 0x140d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_140d08:
    // 0x140d08: 0xc75825  or          $t3, $a2, $a3
    ctx->pc = 0x140d08u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_140d0c:
    // 0x140d0c: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x140d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_140d10:
    // 0x140d10: 0x3c070005  lui         $a3, 0x5
    ctx->pc = 0x140d10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)5 << 16));
label_140d14:
    // 0x140d14: 0x34ea17fd  ori         $t2, $a3, 0x17FD
    ctx->pc = 0x140d14u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)6141);
label_140d18:
    // 0x140d18: 0xae850034  sw          $a1, 0x34($s4)
    ctx->pc = 0x140d18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 5));
label_140d1c:
    // 0x140d1c: 0x24c99008  addiu       $t1, $a2, -0x6FF8
    ctx->pc = 0x140d1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938632));
label_140d20:
    // 0x140d20: 0x87a50170  lh          $a1, 0x170($sp)
    ctx->pc = 0x140d20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 368)));
label_140d24:
    // 0x140d24: 0x3c063900  lui         $a2, 0x3900
    ctx->pc = 0x140d24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)14592 << 16));
label_140d28:
    // 0x140d28: 0x44864000  mtc1        $a2, $f8
    ctx->pc = 0x140d28u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_140d2c:
    // 0x140d2c: 0x26c68708  addiu       $a2, $s6, -0x78F8
    ctx->pc = 0x140d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936328));
label_140d30:
    // 0x140d30: 0xa6850038  sh          $a1, 0x38($s4)
    ctx->pc = 0x140d30u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 56), (uint16_t)GPR_U32(ctx, 5));
label_140d34:
    // 0x140d34: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x140d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_140d38:
    // 0x140d38: 0x24a88708  addiu       $t0, $a1, -0x78F8
    ctx->pc = 0x140d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936328));
label_140d3c:
    // 0x140d3c: 0x87a50160  lh          $a1, 0x160($sp)
    ctx->pc = 0x140d3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 352)));
label_140d40:
    // 0x140d40: 0xa685003a  sh          $a1, 0x3A($s4)
    ctx->pc = 0x140d40u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 58), (uint16_t)GPR_U32(ctx, 5));
label_140d44:
    // 0x140d44: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x140d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_140d48:
    // 0x140d48: 0x8fb10324  lw          $s1, 0x324($sp)
    ctx->pc = 0x140d48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
label_140d4c:
    // 0x140d4c: 0x24a79008  addiu       $a3, $a1, -0x6FF8
    ctx->pc = 0x140d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938632));
label_140d50:
    // 0x140d50: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x140d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_140d54:
    // 0x140d54: 0x24a58708  addiu       $a1, $a1, -0x78F8
    ctx->pc = 0x140d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936328));
label_140d58:
    // 0x140d58: 0x7fa500d0  sq          $a1, 0xD0($sp)
    ctx->pc = 0x140d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 5));
label_140d5c:
    // 0x140d5c: 0x27c59008  addiu       $a1, $fp, -0x6FF8
    ctx->pc = 0x140d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294938632));
label_140d60:
    // 0x140d60: 0x7fa500c0  sq          $a1, 0xC0($sp)
    ctx->pc = 0x140d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 5));
label_140d64:
    // 0x140d64: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x140d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_140d68:
    // 0x140d68: 0x24a58708  addiu       $a1, $a1, -0x78F8
    ctx->pc = 0x140d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936328));
label_140d6c:
    // 0x140d6c: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x140d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
label_140d70:
    // 0x140d70: 0x3c05e400  lui         $a1, 0xE400
    ctx->pc = 0x140d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58368 << 16));
label_140d74:
    // 0x140d74: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x140d74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_140d78:
    // 0x140d78: 0x2452825  or          $a1, $s2, $a1
    ctx->pc = 0x140d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
label_140d7c:
    // 0x140d7c: 0x36b21260  ori         $s2, $s5, 0x1260
    ctx->pc = 0x140d7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4704);
label_140d80:
    // 0x140d80: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x140d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_140d84:
    // 0x140d84: 0x7005ab89  pcpyld      $s5, $zero, $a1
    ctx->pc = 0x140d84u;
    SET_GPR_VEC(ctx, 21, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
label_140d88:
    // 0x140d88: 0x8fb20100  lw          $s2, 0x100($sp)
    ctx->pc = 0x140d88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_140d8c:
    // 0x140d8c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x140d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_140d90:
    // 0x140d90: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x140d90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_140d94:
    // 0x140d94: 0xa6910040  sh          $s1, 0x40($s4)
    ctx->pc = 0x140d94u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 64), (uint16_t)GPR_U32(ctx, 17));
label_140d98:
    // 0x140d98: 0x3c120041  lui         $s2, 0x41
    ctx->pc = 0x140d98u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
label_140d9c:
    // 0x140d9c: 0x8fb10314  lw          $s1, 0x314($sp)
    ctx->pc = 0x140d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
label_140da0:
    // 0x140da0: 0x36582412  ori         $t8, $s2, 0x2412
    ctx->pc = 0x140da0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)9234);
label_140da4:
    // 0x140da4: 0x5903c  dsll32      $s2, $a1, 0
    ctx->pc = 0x140da4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 0));
label_140da8:
    // 0x140da8: 0x3c056402  lui         $a1, 0x6402
    ctx->pc = 0x140da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25602 << 16));
label_140dac:
    // 0x140dac: 0x34a51000  ori         $a1, $a1, 0x1000
    ctx->pc = 0x140dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
label_140db0:
    // 0x140db0: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x140db0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
label_140db4:
    // 0x140db4: 0x34128002  ori         $s2, $zero, 0x8002
    ctx->pc = 0x140db4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
label_140db8:
    // 0x140db8: 0x2d18821  addu        $s1, $s6, $s1
    ctx->pc = 0x140db8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
label_140dbc:
    // 0x140dbc: 0x2442025  or          $a0, $s2, $a0
    ctx->pc = 0x140dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
label_140dc0:
    // 0x140dc0: 0xa6910042  sh          $s1, 0x42($s4)
    ctx->pc = 0x140dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 66), (uint16_t)GPR_U32(ctx, 17));
label_140dc4:
    // 0x140dc4: 0x8e710030  lw          $s1, 0x30($s3)
    ctx->pc = 0x140dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_140dc8:
    // 0x140dc8: 0xae910044  sw          $s1, 0x44($s4)
    ctx->pc = 0x140dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 17));
label_140dcc:
    // 0x140dcc: 0x87b10180  lh          $s1, 0x180($sp)
    ctx->pc = 0x140dccu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 384)));
label_140dd0:
    // 0x140dd0: 0xa6910048  sh          $s1, 0x48($s4)
    ctx->pc = 0x140dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 72), (uint16_t)GPR_U32(ctx, 17));
label_140dd4:
    // 0x140dd4: 0x87b10150  lh          $s1, 0x150($sp)
    ctx->pc = 0x140dd4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_140dd8:
    // 0x140dd8: 0xa691004a  sh          $s1, 0x4A($s4)
    ctx->pc = 0x140dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 74), (uint16_t)GPR_U32(ctx, 17));
label_140ddc:
    // 0x140ddc: 0x8fb10328  lw          $s1, 0x328($sp)
    ctx->pc = 0x140ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
label_140de0:
    // 0x140de0: 0x2f18821  addu        $s1, $s7, $s1
    ctx->pc = 0x140de0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_140de4:
    // 0x140de4: 0xa6910050  sh          $s1, 0x50($s4)
    ctx->pc = 0x140de4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 80), (uint16_t)GPR_U32(ctx, 17));
label_140de8:
    // 0x140de8: 0x8fb20318  lw          $s2, 0x318($sp)
    ctx->pc = 0x140de8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 792)));
label_140dec:
    // 0x140dec: 0x8fb100f0  lw          $s1, 0xF0($sp)
    ctx->pc = 0x140decu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_140df0:
    // 0x140df0: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x140df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_140df4:
    // 0x140df4: 0xa6910052  sh          $s1, 0x52($s4)
    ctx->pc = 0x140df4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 82), (uint16_t)GPR_U32(ctx, 17));
label_140df8:
    // 0x140df8: 0x8e710030  lw          $s1, 0x30($s3)
    ctx->pc = 0x140df8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_140dfc:
    // 0x140dfc: 0xae910054  sw          $s1, 0x54($s4)
    ctx->pc = 0x140dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 17));
label_140e00:
    // 0x140e00: 0x87b10170  lh          $s1, 0x170($sp)
    ctx->pc = 0x140e00u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 368)));
label_140e04:
    // 0x140e04: 0xa6910058  sh          $s1, 0x58($s4)
    ctx->pc = 0x140e04u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 88), (uint16_t)GPR_U32(ctx, 17));
label_140e08:
    // 0x140e08: 0x87b10150  lh          $s1, 0x150($sp)
    ctx->pc = 0x140e08u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_140e0c:
    // 0x140e0c: 0xa691005a  sh          $s1, 0x5A($s4)
    ctx->pc = 0x140e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 90), (uint16_t)GPR_U32(ctx, 17));
label_140e10:
    // 0x140e10: 0x8fb1032c  lw          $s1, 0x32C($sp)
    ctx->pc = 0x140e10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
label_140e14:
    // 0x140e14: 0x3d18821  addu        $s1, $fp, $s1
    ctx->pc = 0x140e14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
label_140e18:
    // 0x140e18: 0xa6910060  sh          $s1, 0x60($s4)
    ctx->pc = 0x140e18u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 96), (uint16_t)GPR_U32(ctx, 17));
label_140e1c:
    // 0x140e1c: 0x8fb2031c  lw          $s2, 0x31C($sp)
    ctx->pc = 0x140e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 796)));
label_140e20:
    // 0x140e20: 0x8fb100e0  lw          $s1, 0xE0($sp)
    ctx->pc = 0x140e20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_140e24:
    // 0x140e24: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x140e24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_140e28:
    // 0x140e28: 0xa6910062  sh          $s1, 0x62($s4)
    ctx->pc = 0x140e28u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 98), (uint16_t)GPR_U32(ctx, 17));
label_140e2c:
    // 0x140e2c: 0x8e710030  lw          $s1, 0x30($s3)
    ctx->pc = 0x140e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_140e30:
    // 0x140e30: 0xae910064  sw          $s1, 0x64($s4)
    ctx->pc = 0x140e30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 17));
label_140e34:
    // 0x140e34: 0x96910030  lhu         $s1, 0x30($s4)
    ctx->pc = 0x140e34u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
label_140e38:
    // 0x140e38: 0x2239023  subu        $s2, $s1, $v1
    ctx->pc = 0x140e38u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_140e3c:
    // 0x140e3c: 0x129103  sra         $s2, $s2, 4
    ctx->pc = 0x140e3cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 4));
label_140e40:
    // 0x140e40: 0x3252ffff  andi        $s2, $s2, 0xFFFF
    ctx->pc = 0x140e40u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_140e44:
    // 0x140e44: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x140e44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_140e48:
    // 0x140e48: 0xa6910030  sh          $s1, 0x30($s4)
    ctx->pc = 0x140e48u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 48), (uint16_t)GPR_U32(ctx, 17));
label_140e4c:
    // 0x140e4c: 0x96910032  lhu         $s1, 0x32($s4)
    ctx->pc = 0x140e4cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 50)));
label_140e50:
    // 0x140e50: 0x2229023  subu        $s2, $s1, $v0
    ctx->pc = 0x140e50u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_140e54:
    // 0x140e54: 0x129103  sra         $s2, $s2, 4
    ctx->pc = 0x140e54u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 4));
label_140e58:
    // 0x140e58: 0x3252ffff  andi        $s2, $s2, 0xFFFF
    ctx->pc = 0x140e58u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_140e5c:
    // 0x140e5c: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x140e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_140e60:
    // 0x140e60: 0xa6910032  sh          $s1, 0x32($s4)
    ctx->pc = 0x140e60u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 50), (uint16_t)GPR_U32(ctx, 17));
label_140e64:
    // 0x140e64: 0x96910040  lhu         $s1, 0x40($s4)
    ctx->pc = 0x140e64u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 64)));
label_140e68:
    // 0x140e68: 0x2239023  subu        $s2, $s1, $v1
    ctx->pc = 0x140e68u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_140e6c:
    // 0x140e6c: 0x129103  sra         $s2, $s2, 4
    ctx->pc = 0x140e6cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 4));
label_140e70:
    // 0x140e70: 0x3252ffff  andi        $s2, $s2, 0xFFFF
    ctx->pc = 0x140e70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_140e74:
    // 0x140e74: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x140e74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_140e78:
    // 0x140e78: 0xa6910040  sh          $s1, 0x40($s4)
    ctx->pc = 0x140e78u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 64), (uint16_t)GPR_U32(ctx, 17));
label_140e7c:
    // 0x140e7c: 0x96910042  lhu         $s1, 0x42($s4)
    ctx->pc = 0x140e7cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 66)));
label_140e80:
    // 0x140e80: 0x2229023  subu        $s2, $s1, $v0
    ctx->pc = 0x140e80u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_140e84:
    // 0x140e84: 0x129103  sra         $s2, $s2, 4
    ctx->pc = 0x140e84u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 4));
label_140e88:
    // 0x140e88: 0x3252ffff  andi        $s2, $s2, 0xFFFF
    ctx->pc = 0x140e88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_140e8c:
    // 0x140e8c: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x140e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_140e90:
    // 0x140e90: 0xa6910042  sh          $s1, 0x42($s4)
    ctx->pc = 0x140e90u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 66), (uint16_t)GPR_U32(ctx, 17));
label_140e94:
    // 0x140e94: 0x96910050  lhu         $s1, 0x50($s4)
    ctx->pc = 0x140e94u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 80)));
label_140e98:
    // 0x140e98: 0x2239023  subu        $s2, $s1, $v1
    ctx->pc = 0x140e98u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_140e9c:
    // 0x140e9c: 0x129103  sra         $s2, $s2, 4
    ctx->pc = 0x140e9cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 4));
label_140ea0:
    // 0x140ea0: 0x3252ffff  andi        $s2, $s2, 0xFFFF
    ctx->pc = 0x140ea0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_140ea4:
    // 0x140ea4: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x140ea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_140ea8:
    // 0x140ea8: 0xa6910050  sh          $s1, 0x50($s4)
    ctx->pc = 0x140ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 80), (uint16_t)GPR_U32(ctx, 17));
label_140eac:
    // 0x140eac: 0x96910052  lhu         $s1, 0x52($s4)
    ctx->pc = 0x140eacu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 82)));
label_140eb0:
    // 0x140eb0: 0x2229023  subu        $s2, $s1, $v0
    ctx->pc = 0x140eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_140eb4:
    // 0x140eb4: 0x129103  sra         $s2, $s2, 4
    ctx->pc = 0x140eb4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 4));
label_140eb8:
    // 0x140eb8: 0x3252ffff  andi        $s2, $s2, 0xFFFF
    ctx->pc = 0x140eb8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_140ebc:
    // 0x140ebc: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x140ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_140ec0:
    // 0x140ec0: 0xa6910052  sh          $s1, 0x52($s4)
    ctx->pc = 0x140ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 82), (uint16_t)GPR_U32(ctx, 17));
label_140ec4:
    // 0x140ec4: 0x96910060  lhu         $s1, 0x60($s4)
    ctx->pc = 0x140ec4u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 96)));
label_140ec8:
    // 0x140ec8: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x140ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_140ecc:
    // 0x140ecc: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x140eccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_140ed0:
    // 0x140ed0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x140ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_140ed4:
    // 0x140ed4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x140ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_140ed8:
    // 0x140ed8: 0xa6830060  sh          $v1, 0x60($s4)
    ctx->pc = 0x140ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 96), (uint16_t)GPR_U32(ctx, 3));
label_140edc:
    // 0x140edc: 0x96830062  lhu         $v1, 0x62($s4)
    ctx->pc = 0x140edcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 98)));
label_140ee0:
    // 0x140ee0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x140ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_140ee4:
    // 0x140ee4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x140ee4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_140ee8:
    // 0x140ee8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x140ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_140eec:
    // 0x140eec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x140eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_140ef0:
    // 0x140ef0: 0xa6820062  sh          $v0, 0x62($s4)
    ctx->pc = 0x140ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 98), (uint16_t)GPR_U32(ctx, 2));
label_140ef4:
    // 0x140ef4: 0x26940070  addiu       $s4, $s4, 0x70
    ctx->pc = 0x140ef4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_140ef8:
    // 0x140ef8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x140ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_140efc:
    // 0x140efc: 0xfe900000  sd          $s0, 0x0($s4)
    ctx->pc = 0x140efcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 16));
label_140f00:
    // 0x140f00: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x140f00u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
label_140f04:
    // 0x140f04: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x140f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_140f08:
    // 0x140f08: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x140f08u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_140f0c:
    // 0x140f0c: 0x8c22f014  lw          $v0, -0xFEC($at)
    ctx->pc = 0x140f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
label_140f10:
    // 0x140f10: 0xdc420020  ld          $v0, 0x20($v0)
    ctx->pc = 0x140f10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 32)));
label_140f14:
    // 0x140f14: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x140f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_140f18:
    // 0x140f18: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x140f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
label_140f1c:
    // 0x140f1c: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x140f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_140f20:
    // 0x140f20: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x140f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_140f24:
    // 0x140f24: 0xfe820028  sd          $v0, 0x28($s4)
    ctx->pc = 0x140f24u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 2));
label_140f28:
    // 0x140f28: 0xfe8e0020  sd          $t6, 0x20($s4)
    ctx->pc = 0x140f28u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 14));
label_140f2c:
    // 0x140f2c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x140f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_140f30:
    // 0x140f30: 0xfe820038  sd          $v0, 0x38($s4)
    ctx->pc = 0x140f30u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 56), GPR_U64(ctx, 2));
label_140f34:
    // 0x140f34: 0xfe800030  sd          $zero, 0x30($s4)
    ctx->pc = 0x140f34u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 0));
label_140f38:
    // 0x140f38: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x140f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_140f3c:
    // 0x140f3c: 0xfe820048  sd          $v0, 0x48($s4)
    ctx->pc = 0x140f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 2));
label_140f40:
    // 0x140f40: 0xfe8d0040  sd          $t5, 0x40($s4)
    ctx->pc = 0x140f40u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 13));
label_140f44:
    // 0x140f44: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x140f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_140f48:
    // 0x140f48: 0xfe820058  sd          $v0, 0x58($s4)
    ctx->pc = 0x140f48u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 2));
label_140f4c:
    // 0x140f4c: 0xfe8c0050  sd          $t4, 0x50($s4)
    ctx->pc = 0x140f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 12));
label_140f50:
    // 0x140f50: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x140f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_140f54:
    // 0x140f54: 0xfe820050  sd          $v0, 0x50($s4)
    ctx->pc = 0x140f54u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 2));
label_140f58:
    // 0x140f58: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x140f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_140f5c:
    // 0x140f5c: 0xfe820068  sd          $v0, 0x68($s4)
    ctx->pc = 0x140f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 104), GPR_U64(ctx, 2));
label_140f60:
    // 0x140f60: 0xfe8b0060  sd          $t3, 0x60($s4)
    ctx->pc = 0x140f60u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 11));
label_140f64:
    // 0x140f64: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x140f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_140f68:
    // 0x140f68: 0xfe820078  sd          $v0, 0x78($s4)
    ctx->pc = 0x140f68u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 2));
label_140f6c:
    // 0x140f6c: 0xfe8a0070  sd          $t2, 0x70($s4)
    ctx->pc = 0x140f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 10));
label_140f70:
    // 0x140f70: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x140f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
label_140f74:
    // 0x140f74: 0x26940080  addiu       $s4, $s4, 0x80
    ctx->pc = 0x140f74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_140f78:
    // 0x140f78: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x140f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_140f7c:
    // 0x140f7c: 0x8fae0324  lw          $t6, 0x324($sp)
    ctx->pc = 0x140f7cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
label_140f80:
    // 0x140f80: 0x8fad0314  lw          $t5, 0x314($sp)
    ctx->pc = 0x140f80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
label_140f84:
    // 0x140f84: 0x8fac0328  lw          $t4, 0x328($sp)
    ctx->pc = 0x140f84u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
label_140f88:
    // 0x140f88: 0x8faa0318  lw          $t2, 0x318($sp)
    ctx->pc = 0x140f88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 792)));
label_140f8c:
    // 0x140f8c: 0x1235821  addu        $t3, $t1, $v1
    ctx->pc = 0x140f8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_140f90:
    // 0x140f90: 0x1024821  addu        $t1, $t0, $v0
    ctx->pc = 0x140f90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_140f94:
    // 0x140f94: 0x8fa3032c  lw          $v1, 0x32C($sp)
    ctx->pc = 0x140f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
label_140f98:
    // 0x140f98: 0xee4021  addu        $t0, $a3, $t6
    ctx->pc = 0x140f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
label_140f9c:
    // 0x140f9c: 0x8fa2031c  lw          $v0, 0x31C($sp)
    ctx->pc = 0x140f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 796)));
label_140fa0:
    // 0x140fa0: 0xcd3821  addu        $a3, $a2, $t5
    ctx->pc = 0x140fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
label_140fa4:
    // 0x140fa4: 0x32c3021  addu        $a2, $t9, $t4
    ctx->pc = 0x140fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
label_140fa8:
    // 0x140fa8: 0x7bac00d0  lq          $t4, 0xD0($sp)
    ctx->pc = 0x140fa8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_140fac:
    // 0x140fac: 0x448b3800  mtc1        $t3, $f7
    ctx->pc = 0x140facu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_140fb0:
    // 0x140fb0: 0x44893000  mtc1        $t1, $f6
    ctx->pc = 0x140fb0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_140fb4:
    // 0x140fb4: 0x44882800  mtc1        $t0, $f5
    ctx->pc = 0x140fb4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_140fb8:
    // 0x140fb8: 0x44872000  mtc1        $a3, $f4
    ctx->pc = 0x140fb8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_140fbc:
    // 0x140fbc: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x140fbcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_140fc0:
    // 0x140fc0: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x140fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
label_140fc4:
    // 0x140fc4: 0x18a6021  addu        $t4, $t4, $t2
    ctx->pc = 0x140fc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
label_140fc8:
    // 0x140fc8: 0x7baa00c0  lq          $t2, 0xC0($sp)
    ctx->pc = 0x140fc8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_140fcc:
    // 0x140fcc: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x140fccu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_140fd0:
    // 0x140fd0: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x140fd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
label_140fd4:
    // 0x140fd4: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x140fd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_140fd8:
    // 0x140fd8: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x140fd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_140fdc:
    // 0x140fdc: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x140fdcu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_140fe0:
    // 0x140fe0: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x140fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_140fe4:
    // 0x140fe4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x140fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_140fe8:
    // 0x140fe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_140fec:
    // 0x140fec: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x140fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_140ff0:
    // 0x140ff0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x140ff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_140ff4:
    // 0x140ff4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x140ff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_140ff8:
    // 0x140ff8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x140ff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_140ffc:
    // 0x140ffc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x140ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_141000:
    // 0x141000: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x141000u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
label_141004:
    // 0x141004: 0x46064182  mul.s       $f6, $f8, $f6
    ctx->pc = 0x141004u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
label_141008:
    // 0x141008: 0x46054142  mul.s       $f5, $f8, $f5
    ctx->pc = 0x141008u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
label_14100c:
    // 0x14100c: 0x46044102  mul.s       $f4, $f8, $f4
    ctx->pc = 0x14100cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_141010:
    // 0x141010: 0x460340c2  mul.s       $f3, $f8, $f3
    ctx->pc = 0x141010u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
label_141014:
    // 0x141014: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x141014u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_141018:
    // 0x141018: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x141018u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_14101c:
    // 0x14101c: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x14101cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_141020:
    // 0x141020: 0xe7a702f0  swc1        $f7, 0x2F0($sp)
    ctx->pc = 0x141020u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
label_141024:
    // 0x141024: 0xe7a602f4  swc1        $f6, 0x2F4($sp)
    ctx->pc = 0x141024u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 756), bits); }
label_141028:
    // 0x141028: 0xe7a502f8  swc1        $f5, 0x2F8($sp)
    ctx->pc = 0x141028u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
label_14102c:
    // 0x14102c: 0xe7a402fc  swc1        $f4, 0x2FC($sp)
    ctx->pc = 0x14102cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 764), bits); }
label_141030:
    // 0x141030: 0xe7a30300  swc1        $f3, 0x300($sp)
    ctx->pc = 0x141030u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
label_141034:
    // 0x141034: 0xe7a20304  swc1        $f2, 0x304($sp)
    ctx->pc = 0x141034u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 772), bits); }
label_141038:
    // 0x141038: 0xe7a10308  swc1        $f1, 0x308($sp)
    ctx->pc = 0x141038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
label_14103c:
    // 0x14103c: 0xe7a0030c  swc1        $f0, 0x30C($sp)
    ctx->pc = 0x14103cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 780), bits); }
label_141040:
    // 0x141040: 0xfe950000  sd          $s5, 0x0($s4)
    ctx->pc = 0x141040u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 21));
label_141044:
    // 0x141044: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x141044u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_141048:
    // 0x141048: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x141048u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_14104c:
    // 0x14104c: 0xae98000c  sw          $t8, 0xC($s4)
    ctx->pc = 0x14104cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 24));
label_141050:
    // 0x141050: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x141050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_141054:
    // 0x141054: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x141054u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_141058:
    // 0x141058: 0xfe850018  sd          $a1, 0x18($s4)
    ctx->pc = 0x141058u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 5));
label_14105c:
    // 0x14105c: 0xc7a002f0  lwc1        $f0, 0x2F0($sp)
    ctx->pc = 0x14105cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_141060:
    // 0x141060: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x141060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_141064:
    // 0x141064: 0xc7a002f4  lwc1        $f0, 0x2F4($sp)
    ctx->pc = 0x141064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_141068:
    // 0x141068: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x141068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_14106c:
    // 0x14106c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x14106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_141070:
    // 0x141070: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x141070u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_141074:
    // 0x141074: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x141074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_141078:
    // 0x141078: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x141078u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
label_14107c:
    // 0x14107c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x14107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_141080:
    // 0x141080: 0xa6820030  sh          $v0, 0x30($s4)
    ctx->pc = 0x141080u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 48), (uint16_t)GPR_U32(ctx, 2));
label_141084:
    // 0x141084: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x141084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_141088:
    // 0x141088: 0xa6820032  sh          $v0, 0x32($s4)
    ctx->pc = 0x141088u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 50), (uint16_t)GPR_U32(ctx, 2));
label_14108c:
    // 0x14108c: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x14108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_141090:
    // 0x141090: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x141090u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
label_141094:
    // 0x141094: 0xc7a002f8  lwc1        $f0, 0x2F8($sp)
    ctx->pc = 0x141094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_141098:
    // 0x141098: 0xe6800038  swc1        $f0, 0x38($s4)
    ctx->pc = 0x141098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 56), bits); }
label_14109c:
    // 0x14109c: 0xc7a002fc  lwc1        $f0, 0x2FC($sp)
    ctx->pc = 0x14109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1410a0:
    // 0x1410a0: 0xe680003c  swc1        $f0, 0x3C($s4)
    ctx->pc = 0x1410a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
label_1410a4:
    // 0x1410a4: 0xde820028  ld          $v0, 0x28($s4)
    ctx->pc = 0x1410a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 40)));
label_1410a8:
    // 0x1410a8: 0xfe820040  sd          $v0, 0x40($s4)
    ctx->pc = 0x1410a8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 2));
label_1410ac:
    // 0x1410ac: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1410acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1410b0:
    // 0x1410b0: 0xa6820048  sh          $v0, 0x48($s4)
    ctx->pc = 0x1410b0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 72), (uint16_t)GPR_U32(ctx, 2));
label_1410b4:
    // 0x1410b4: 0xa696004a  sh          $s6, 0x4A($s4)
    ctx->pc = 0x1410b4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 74), (uint16_t)GPR_U32(ctx, 22));
label_1410b8:
    // 0x1410b8: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x1410b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_1410bc:
    // 0x1410bc: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x1410bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
label_1410c0:
    // 0x1410c0: 0xc7a00300  lwc1        $f0, 0x300($sp)
    ctx->pc = 0x1410c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1410c4:
    // 0x1410c4: 0xe6800050  swc1        $f0, 0x50($s4)
    ctx->pc = 0x1410c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 80), bits); }
label_1410c8:
    // 0x1410c8: 0xc7a00304  lwc1        $f0, 0x304($sp)
    ctx->pc = 0x1410c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1410cc:
    // 0x1410cc: 0xe6800054  swc1        $f0, 0x54($s4)
    ctx->pc = 0x1410ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
label_1410d0:
    // 0x1410d0: 0xde820028  ld          $v0, 0x28($s4)
    ctx->pc = 0x1410d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 40)));
label_1410d4:
    // 0x1410d4: 0xfe820058  sd          $v0, 0x58($s4)
    ctx->pc = 0x1410d4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 2));
label_1410d8:
    // 0x1410d8: 0xa6970060  sh          $s7, 0x60($s4)
    ctx->pc = 0x1410d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 96), (uint16_t)GPR_U32(ctx, 23));
label_1410dc:
    // 0x1410dc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1410dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1410e0:
    // 0x1410e0: 0xa6820062  sh          $v0, 0x62($s4)
    ctx->pc = 0x1410e0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 98), (uint16_t)GPR_U32(ctx, 2));
label_1410e4:
    // 0x1410e4: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x1410e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_1410e8:
    // 0x1410e8: 0xae820064  sw          $v0, 0x64($s4)
    ctx->pc = 0x1410e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 2));
label_1410ec:
    // 0x1410ec: 0xc7a00308  lwc1        $f0, 0x308($sp)
    ctx->pc = 0x1410ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1410f0:
    // 0x1410f0: 0xe6800068  swc1        $f0, 0x68($s4)
    ctx->pc = 0x1410f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 104), bits); }
label_1410f4:
    // 0x1410f4: 0xc7a0030c  lwc1        $f0, 0x30C($sp)
    ctx->pc = 0x1410f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1410f8:
    // 0x1410f8: 0xe680006c  swc1        $f0, 0x6C($s4)
    ctx->pc = 0x1410f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 108), bits); }
label_1410fc:
    // 0x1410fc: 0xde820028  ld          $v0, 0x28($s4)
    ctx->pc = 0x1410fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 40)));
label_141100:
    // 0x141100: 0xfe820070  sd          $v0, 0x70($s4)
    ctx->pc = 0x141100u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 2));
label_141104:
    // 0x141104: 0xa69e0078  sh          $fp, 0x78($s4)
    ctx->pc = 0x141104u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 120), (uint16_t)GPR_U32(ctx, 30));
label_141108:
    // 0x141108: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x141108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_14110c:
    // 0x14110c: 0xa682007a  sh          $v0, 0x7A($s4)
    ctx->pc = 0x14110cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 122), (uint16_t)GPR_U32(ctx, 2));
label_141110:
    // 0x141110: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x141110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_141114:
    // 0x141114: 0xae82007c  sw          $v0, 0x7C($s4)
    ctx->pc = 0x141114u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 2));
label_141118:
    // 0x141118: 0x26940080  addiu       $s4, $s4, 0x80
    ctx->pc = 0x141118u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_14111c:
    // 0x14111c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x14111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_141120:
    // 0x141120: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x141120u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
label_141124:
    // 0x141124: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x141124u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
label_141128:
    // 0x141128: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x141128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_14112c:
    // 0x14112c: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x14112cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_141130:
    // 0x141130: 0x8c22f014  lw          $v0, -0xFEC($at)
    ctx->pc = 0x141130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
label_141134:
    // 0x141134: 0xdc420040  ld          $v0, 0x40($v0)
    ctx->pc = 0x141134u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 64)));
label_141138:
    // 0x141138: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x141138u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_14113c:
    // 0x14113c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x14113cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_141140:
    // 0x141140: 0xfe820028  sd          $v0, 0x28($s4)
    ctx->pc = 0x141140u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 2));
label_141144:
    // 0x141144: 0xfe800020  sd          $zero, 0x20($s4)
    ctx->pc = 0x141144u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 0));
label_141148:
    // 0x141148: 0x10000785  b           . + 4 + (0x785 << 2)
label_14114c:
    if (ctx->pc == 0x14114Cu) {
        ctx->pc = 0x14114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141148u;
        // 0x14114c: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141150u;
        goto label_141150;
    }
    ctx->pc = 0x141148u;
    {
        const bool branch_taken_0x141148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141148u;
        // 0x14114c: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141148) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x141150u;
label_141150:
    // 0x141150: 0x3c035400  lui         $v1, 0x5400
    ctx->pc = 0x141150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21504 << 16));
label_141154:
    // 0x141154: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x141154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_141158:
    // 0x141158: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x141158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_14115c:
    // 0x14115c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x14115cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_141160:
    // 0x141160: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x141160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_141164:
    // 0x141164: 0x34634410  ori         $v1, $v1, 0x4410
    ctx->pc = 0x141164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17424);
label_141168:
    // 0x141168: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x141168u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
label_14116c:
    // 0x14116c: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x14116cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_141170:
    // 0x141170: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x141170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_141174:
    // 0x141174: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x141174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_141178:
    // 0x141178: 0xde660010  ld          $a2, 0x10($s3)
    ctx->pc = 0x141178u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 16)));
label_14117c:
    // 0x14117c: 0xde650018  ld          $a1, 0x18($s3)
    ctx->pc = 0x14117cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_141180:
    // 0x141180: 0xde640020  ld          $a0, 0x20($s3)
    ctx->pc = 0x141180u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 32)));
label_141184:
    // 0x141184: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x141184u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_141188:
    // 0x141188: 0xae830018  sw          $v1, 0x18($s4)
    ctx->pc = 0x141188u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
label_14118c:
    // 0x14118c: 0xfe860020  sd          $a2, 0x20($s4)
    ctx->pc = 0x14118cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 6));
label_141190:
    // 0x141190: 0xfe850028  sd          $a1, 0x28($s4)
    ctx->pc = 0x141190u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 5));
label_141194:
    // 0x141194: 0xfe840030  sd          $a0, 0x30($s4)
    ctx->pc = 0x141194u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 4));
label_141198:
    // 0x141198: 0x10000771  b           . + 4 + (0x771 << 2)
label_14119c:
    if (ctx->pc == 0x14119Cu) {
        ctx->pc = 0x14119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141198u;
        // 0x14119c: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1411A0u;
        goto label_1411a0;
    }
    ctx->pc = 0x141198u;
    {
        const bool branch_taken_0x141198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141198u;
        // 0x14119c: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141198) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x1411A0u;
label_1411a0:
    // 0x1411a0: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x1411a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
label_1411a4:
    // 0x1411a4: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1411a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_1411a8:
    // 0x1411a8: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x1411a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_1411ac:
    // 0x1411ac: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1411acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_1411b0:
    // 0x1411b0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1411b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1411b4:
    // 0x1411b4: 0x34634410  ori         $v1, $v1, 0x4410
    ctx->pc = 0x1411b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17424);
label_1411b8:
    // 0x1411b8: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x1411b8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
label_1411bc:
    // 0x1411bc: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x1411bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_1411c0:
    // 0x1411c0: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x1411c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_1411c4:
    // 0x1411c4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1411c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1411c8:
    // 0x1411c8: 0xde670010  ld          $a3, 0x10($s3)
    ctx->pc = 0x1411c8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 19), 16)));
label_1411cc:
    // 0x1411cc: 0xde660018  ld          $a2, 0x18($s3)
    ctx->pc = 0x1411ccu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_1411d0:
    // 0x1411d0: 0xde650020  ld          $a1, 0x20($s3)
    ctx->pc = 0x1411d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 32)));
label_1411d4:
    // 0x1411d4: 0xde640028  ld          $a0, 0x28($s3)
    ctx->pc = 0x1411d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 40)));
label_1411d8:
    // 0x1411d8: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x1411d8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_1411dc:
    // 0x1411dc: 0xae830018  sw          $v1, 0x18($s4)
    ctx->pc = 0x1411dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
label_1411e0:
    // 0x1411e0: 0xfe870020  sd          $a3, 0x20($s4)
    ctx->pc = 0x1411e0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 7));
label_1411e4:
    // 0x1411e4: 0xfe860028  sd          $a2, 0x28($s4)
    ctx->pc = 0x1411e4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 6));
label_1411e8:
    // 0x1411e8: 0xfe850030  sd          $a1, 0x30($s4)
    ctx->pc = 0x1411e8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 5));
label_1411ec:
    // 0x1411ec: 0xfe840038  sd          $a0, 0x38($s4)
    ctx->pc = 0x1411ecu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 56), GPR_U64(ctx, 4));
label_1411f0:
    // 0x1411f0: 0x1000075b  b           . + 4 + (0x75B << 2)
label_1411f4:
    if (ctx->pc == 0x1411F4u) {
        ctx->pc = 0x1411F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411F0u;
        // 0x1411f4: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1411F8u;
        goto label_1411f8;
    }
    ctx->pc = 0x1411F0u;
    {
        const bool branch_taken_0x1411f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1411F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411F0u;
        // 0x1411f4: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411f0) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x1411F8u;
label_1411f8:
    // 0x1411f8: 0x3c02b400  lui         $v0, 0xB400
    ctx->pc = 0x1411f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46080 << 16));
label_1411fc:
    // 0x1411fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1411fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_141200:
    // 0x141200: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x141200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_141204:
    // 0x141204: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x141204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_141208:
    // 0x141208: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x141208u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_14120c:
    // 0x14120c: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x14120cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_141210:
    // 0x141210: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x141210u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
label_141214:
    // 0x141214: 0x3c034214  lui         $v1, 0x4214
    ctx->pc = 0x141214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16916 << 16));
label_141218:
    // 0x141218: 0x30450010  andi        $a1, $v0, 0x10
    ctx->pc = 0x141218u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_14121c:
    // 0x14121c: 0x34642160  ori         $a0, $v1, 0x2160
    ctx->pc = 0x14121cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8544);
label_141220:
    // 0x141220: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x141220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_141224:
    // 0x141224: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x141224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_141228:
    // 0x141228: 0x24030421  addiu       $v1, $zero, 0x421
    ctx->pc = 0x141228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1057));
label_14122c:
    // 0x14122c: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x14122cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
label_141230:
    // 0x141230: 0xa683000c  sh          $v1, 0xC($s4)
    ctx->pc = 0x141230u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 3));
label_141234:
    // 0x141234: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x141234u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_141238:
    // 0x141238: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x141238u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_14123c:
    // 0x14123c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x14123cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_141240:
    // 0x141240: 0xc04cfd8  jal         func_133F60
label_141244:
    if (ctx->pc == 0x141244u) {
        ctx->pc = 0x141244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141240u;
        // 0x141244: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141248u;
        goto label_141248;
    }
    ctx->pc = 0x141240u;
    SET_GPR_U32(ctx, 31, 0x141248u);
    ctx->pc = 0x141244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141240u;
    // 0x141244: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x141240u, 0x141248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141248u;
label_141248:
    // 0x141248: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x141248u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_14124c:
    // 0x14124c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x14124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_141250:
    // 0x141250: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x141250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_141254:
    // 0x141254: 0xde660018  ld          $a2, 0x18($s3)
    ctx->pc = 0x141254u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_141258:
    // 0x141258: 0xde650028  ld          $a1, 0x28($s3)
    ctx->pc = 0x141258u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 40)));
label_14125c:
    // 0x14125c: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x14125cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_141260:
    // 0x141260: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x141260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_141264:
    // 0x141264: 0xfe860028  sd          $a2, 0x28($s4)
    ctx->pc = 0x141264u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 6));
label_141268:
    // 0x141268: 0xfe850030  sd          $a1, 0x30($s4)
    ctx->pc = 0x141268u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 5));
label_14126c:
    // 0x14126c: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x14126cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_141270:
    // 0x141270: 0xde660030  ld          $a2, 0x30($s3)
    ctx->pc = 0x141270u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 48)));
label_141274:
    // 0x141274: 0xde650038  ld          $a1, 0x38($s3)
    ctx->pc = 0x141274u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 56)));
label_141278:
    // 0x141278: 0xae820038  sw          $v0, 0x38($s4)
    ctx->pc = 0x141278u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
label_14127c:
    // 0x14127c: 0xe680003c  swc1        $f0, 0x3C($s4)
    ctx->pc = 0x14127cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
label_141280:
    // 0x141280: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x141280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_141284:
    // 0x141284: 0xde640040  ld          $a0, 0x40($s3)
    ctx->pc = 0x141284u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 64)));
label_141288:
    // 0x141288: 0xde630050  ld          $v1, 0x50($s3)
    ctx->pc = 0x141288u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 80)));
label_14128c:
    // 0x14128c: 0xfe860040  sd          $a2, 0x40($s4)
    ctx->pc = 0x14128cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 6));
label_141290:
    // 0x141290: 0xfe850048  sd          $a1, 0x48($s4)
    ctx->pc = 0x141290u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 5));
label_141294:
    // 0x141294: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x141294u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_141298:
    // 0x141298: 0xe6800054  swc1        $f0, 0x54($s4)
    ctx->pc = 0x141298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
label_14129c:
    // 0x14129c: 0xfe840058  sd          $a0, 0x58($s4)
    ctx->pc = 0x14129cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 4));
label_1412a0:
    // 0x1412a0: 0xfe830060  sd          $v1, 0x60($s4)
    ctx->pc = 0x1412a0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 3));
label_1412a4:
    // 0x1412a4: 0x1000072e  b           . + 4 + (0x72E << 2)
label_1412a8:
    if (ctx->pc == 0x1412A8u) {
        ctx->pc = 0x1412A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412A4u;
        // 0x1412a8: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1412ACu;
        goto label_1412ac;
    }
    ctx->pc = 0x1412A4u;
    {
        const bool branch_taken_0x1412a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1412A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412A4u;
        // 0x1412a8: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1412a4) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x1412ACu;
label_1412ac:
    // 0x1412ac: 0x0  nop
    ctx->pc = 0x1412acu;
    // NOP
label_1412b0:
    // 0x1412b0: 0x3c02e400  lui         $v0, 0xE400
    ctx->pc = 0x1412b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58368 << 16));
label_1412b4:
    // 0x1412b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1412b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1412b8:
    // 0x1412b8: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1412b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_1412bc:
    // 0x1412bc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1412bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1412c0:
    // 0x1412c0: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1412c0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_1412c4:
    // 0x1412c4: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1412c4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1412c8:
    // 0x1412c8: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x1412c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
label_1412cc:
    // 0x1412cc: 0x3c034214  lui         $v1, 0x4214
    ctx->pc = 0x1412ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16916 << 16));
label_1412d0:
    // 0x1412d0: 0x30450010  andi        $a1, $v0, 0x10
    ctx->pc = 0x1412d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1412d4:
    // 0x1412d4: 0x34642160  ori         $a0, $v1, 0x2160
    ctx->pc = 0x1412d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8544);
label_1412d8:
    // 0x1412d8: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x1412d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_1412dc:
    // 0x1412dc: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1412dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_1412e0:
    // 0x1412e0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1412e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1412e4:
    // 0x1412e4: 0x34631421  ori         $v1, $v1, 0x1421
    ctx->pc = 0x1412e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5153);
label_1412e8:
    // 0x1412e8: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x1412e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
label_1412ec:
    // 0x1412ec: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x1412ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
label_1412f0:
    // 0x1412f0: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x1412f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_1412f4:
    // 0x1412f4: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x1412f4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_1412f8:
    // 0x1412f8: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x1412f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1412fc:
    // 0x1412fc: 0xc04cfd8  jal         func_133F60
label_141300:
    if (ctx->pc == 0x141300u) {
        ctx->pc = 0x141300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412FCu;
        // 0x141300: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141304u;
        goto label_141304;
    }
    ctx->pc = 0x1412FCu;
    SET_GPR_U32(ctx, 31, 0x141304u);
    ctx->pc = 0x141300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1412FCu;
    // 0x141300: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x1412FCu, 0x141304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141304u;
label_141304:
    // 0x141304: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x141304u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_141308:
    // 0x141308: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x141308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_14130c:
    // 0x14130c: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x14130cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_141310:
    // 0x141310: 0xde660018  ld          $a2, 0x18($s3)
    ctx->pc = 0x141310u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_141314:
    // 0x141314: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x141314u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_141318:
    // 0x141318: 0xae820038  sw          $v0, 0x38($s4)
    ctx->pc = 0x141318u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
label_14131c:
    // 0x14131c: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x14131cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_141320:
    // 0x141320: 0xfe860028  sd          $a2, 0x28($s4)
    ctx->pc = 0x141320u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 6));
label_141324:
    // 0x141324: 0xde650028  ld          $a1, 0x28($s3)
    ctx->pc = 0x141324u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 40)));
label_141328:
    // 0x141328: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x141328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14132c:
    // 0x14132c: 0xde640030  ld          $a0, 0x30($s3)
    ctx->pc = 0x14132cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 48)));
label_141330:
    // 0x141330: 0xde630038  ld          $v1, 0x38($s3)
    ctx->pc = 0x141330u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 56)));
label_141334:
    // 0x141334: 0xfe850030  sd          $a1, 0x30($s4)
    ctx->pc = 0x141334u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 5));
label_141338:
    // 0x141338: 0xe680003c  swc1        $f0, 0x3C($s4)
    ctx->pc = 0x141338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
label_14133c:
    // 0x14133c: 0xfe840040  sd          $a0, 0x40($s4)
    ctx->pc = 0x14133cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 4));
label_141340:
    // 0x141340: 0xfe830048  sd          $v1, 0x48($s4)
    ctx->pc = 0x141340u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 3));
label_141344:
    // 0x141344: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x141344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_141348:
    // 0x141348: 0xde660040  ld          $a2, 0x40($s3)
    ctx->pc = 0x141348u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 64)));
label_14134c:
    // 0x14134c: 0xde650050  ld          $a1, 0x50($s3)
    ctx->pc = 0x14134cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 80)));
label_141350:
    // 0x141350: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x141350u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_141354:
    // 0x141354: 0xe6800054  swc1        $f0, 0x54($s4)
    ctx->pc = 0x141354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
label_141358:
    // 0x141358: 0xc660004c  lwc1        $f0, 0x4C($s3)
    ctx->pc = 0x141358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14135c:
    // 0x14135c: 0xde640058  ld          $a0, 0x58($s3)
    ctx->pc = 0x14135cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 88)));
label_141360:
    // 0x141360: 0xde630060  ld          $v1, 0x60($s3)
    ctx->pc = 0x141360u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 96)));
label_141364:
    // 0x141364: 0xfe860058  sd          $a2, 0x58($s4)
    ctx->pc = 0x141364u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 6));
label_141368:
    // 0x141368: 0xfe850060  sd          $a1, 0x60($s4)
    ctx->pc = 0x141368u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 5));
label_14136c:
    // 0x14136c: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x14136cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_141370:
    // 0x141370: 0xe680006c  swc1        $f0, 0x6C($s4)
    ctx->pc = 0x141370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 108), bits); }
label_141374:
    // 0x141374: 0xfe840070  sd          $a0, 0x70($s4)
    ctx->pc = 0x141374u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 4));
label_141378:
    // 0x141378: 0xfe830078  sd          $v1, 0x78($s4)
    ctx->pc = 0x141378u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 3));
label_14137c:
    // 0x14137c: 0x100006f8  b           . + 4 + (0x6F8 << 2)
label_141380:
    if (ctx->pc == 0x141380u) {
        ctx->pc = 0x141380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14137Cu;
        // 0x141380: 0x26940080  addiu       $s4, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141384u;
        goto label_141384;
    }
    ctx->pc = 0x14137Cu;
    {
        const bool branch_taken_0x14137c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14137Cu;
        // 0x141380: 0x26940080  addiu       $s4, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14137c) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x141384u;
label_141384:
    // 0x141384: 0x0  nop
    ctx->pc = 0x141384u;
    // NOP
label_141388:
    // 0x141388: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x141388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_14138c:
    // 0x14138c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x14138cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_141390:
    // 0x141390: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x141390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_141394:
    // 0x141394: 0x34028011  ori         $v0, $zero, 0x8011
    ctx->pc = 0x141394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32785);
label_141398:
    // 0x141398: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x141398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14139c:
    // 0x14139c: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x14139cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1413a0:
    // 0x1413a0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1413a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1413a4:
    // 0x1413a4: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x1413a4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
label_1413a8:
    // 0x1413a8: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x1413a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1413ac:
    // 0x1413ac: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1413acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_1413b0:
    // 0x1413b0: 0xfe830018  sd          $v1, 0x18($s4)
    ctx->pc = 0x1413b0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 3));
label_1413b4:
    // 0x1413b4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1413b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1413b8:
    // 0x1413b8: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x1413b8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_1413bc:
    // 0x1413bc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1413bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1413c0:
    // 0x1413c0: 0xfe820028  sd          $v0, 0x28($s4)
    ctx->pc = 0x1413c0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 2));
label_1413c4:
    // 0x1413c4: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x1413c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
label_1413c8:
    // 0x1413c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1413c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1413cc:
    // 0x1413cc: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x1413ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
label_1413d0:
    // 0x1413d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1413d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1413d4:
    // 0x1413d4: 0xfe820020  sd          $v0, 0x20($s4)
    ctx->pc = 0x1413d4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 2));
label_1413d8:
    // 0x1413d8: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x1413d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1413dc:
    // 0x1413dc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1413dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_1413e0:
    // 0x1413e0: 0xfe830038  sd          $v1, 0x38($s4)
    ctx->pc = 0x1413e0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 56), GPR_U64(ctx, 3));
label_1413e4:
    // 0x1413e4: 0x34421001  ori         $v0, $v0, 0x1001
    ctx->pc = 0x1413e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
label_1413e8:
    // 0x1413e8: 0xfe820030  sd          $v0, 0x30($s4)
    ctx->pc = 0x1413e8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 2));
label_1413ec:
    // 0x1413ec: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x1413ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954660)));
label_1413f0:
    // 0x1413f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1413f4:
    if (ctx->pc == 0x1413F4u) {
        ctx->pc = 0x1413F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1413F0u;
        // 0x1413f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1413F8u;
        goto label_1413f8;
    }
    ctx->pc = 0x1413F0u;
    {
        const bool branch_taken_0x1413f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1413F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1413F0u;
        // 0x1413f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1413f0) {
            ctx->pc = 0x141400u;
            goto label_141400;
        }
    }
    ctx->pc = 0x1413F8u;
label_1413f8:
    // 0x1413f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1413fc:
    if (ctx->pc == 0x1413FCu) {
        ctx->pc = 0x141400u;
        goto label_141400;
    }
    ctx->pc = 0x1413F8u;
    {
        const bool branch_taken_0x1413f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1413f8) {
            ctx->pc = 0x141408u;
            goto label_141408;
        }
    }
    ctx->pc = 0x141400u;
label_141400:
    // 0x141400: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x141400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_141404:
    // 0x141404: 0x0  nop
    ctx->pc = 0x141404u;
    // NOP
label_141408:
    // 0x141408: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x141408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14140c:
    // 0x14140c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x14140cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_141410:
    // 0x141410: 0xfe830048  sd          $v1, 0x48($s4)
    ctx->pc = 0x141410u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 3));
label_141414:
    // 0x141414: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x141414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
label_141418:
    // 0x141418: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x141418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_14141c:
    // 0x14141c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x14141cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_141420:
    // 0x141420: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x141420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_141424:
    // 0x141424: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x141424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_141428:
    // 0x141428: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x141428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_14142c:
    // 0x14142c: 0xfe830040  sd          $v1, 0x40($s4)
    ctx->pc = 0x14142cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 3));
label_141430:
    // 0x141430: 0x2402037c  addiu       $v0, $zero, 0x37C
    ctx->pc = 0x141430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
label_141434:
    // 0x141434: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x141434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_141438:
    // 0x141438: 0xfe840058  sd          $a0, 0x58($s4)
    ctx->pc = 0x141438u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 4));
label_14143c:
    // 0x14143c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x14143cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_141440:
    // 0x141440: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x141440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_141444:
    // 0x141444: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x141444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_141448:
    // 0x141448: 0xfe820050  sd          $v0, 0x50($s4)
    ctx->pc = 0x141448u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 2));
label_14144c:
    // 0x14144c: 0x96650028  lhu         $a1, 0x28($s3)
    ctx->pc = 0x14144cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
label_141450:
    // 0x141450: 0x86640068  lh          $a0, 0x68($s3)
    ctx->pc = 0x141450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 104)));
label_141454:
    // 0x141454: 0x96630038  lhu         $v1, 0x38($s3)
    ctx->pc = 0x141454u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_141458:
    // 0x141458: 0x8662006c  lh          $v0, 0x6C($s3)
    ctx->pc = 0x141458u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 108)));
label_14145c:
    // 0x14145c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x14145cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_141460:
    // 0x141460: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x141460u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_141464:
    // 0x141464: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x141464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_141468:
    // 0x141468: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x141468u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_14146c:
    // 0x14146c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_141470:
    if (ctx->pc == 0x141470u) {
        ctx->pc = 0x141470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14146Cu;
        // 0x141470: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141474u;
        goto label_141474;
    }
    ctx->pc = 0x14146Cu;
    {
        const bool branch_taken_0x14146c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x141470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14146Cu;
        // 0x141470: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14146c) {
            ctx->pc = 0x141478u;
            goto label_141478;
        }
    }
    ctx->pc = 0x141474u;
label_141474:
    // 0x141474: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x141474u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_141478:
    // 0x141478: 0x96640050  lhu         $a0, 0x50($s3)
    ctx->pc = 0x141478u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
label_14147c:
    // 0x14147c: 0x86630070  lh          $v1, 0x70($s3)
    ctx->pc = 0x14147cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 112)));
label_141480:
    // 0x141480: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x141480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_141484:
    // 0x141484: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x141484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_141488:
    // 0x141488: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x141488u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_14148c:
    // 0x14148c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_141490:
    if (ctx->pc == 0x141490u) {
        ctx->pc = 0x141494u;
        goto label_141494;
    }
    ctx->pc = 0x14148Cu;
    {
        const bool branch_taken_0x14148c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14148c) {
            ctx->pc = 0x141498u;
            goto label_141498;
        }
    }
    ctx->pc = 0x141494u;
label_141494:
    // 0x141494: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x141494u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_141498:
    // 0x141498: 0x96640060  lhu         $a0, 0x60($s3)
    ctx->pc = 0x141498u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 96)));
label_14149c:
    // 0x14149c: 0x86630074  lh          $v1, 0x74($s3)
    ctx->pc = 0x14149cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 116)));
label_1414a0:
    // 0x1414a0: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1414a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1414a4:
    // 0x1414a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1414a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1414a8:
    // 0x1414a8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1414a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1414ac:
    // 0x1414ac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1414b0:
    if (ctx->pc == 0x1414B0u) {
        ctx->pc = 0x1414B4u;
        goto label_1414b4;
    }
    ctx->pc = 0x1414ACu;
    {
        const bool branch_taken_0x1414ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1414ac) {
            ctx->pc = 0x1414B8u;
            goto label_1414b8;
        }
    }
    ctx->pc = 0x1414B4u;
label_1414b4:
    // 0x1414b4: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x1414b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1414b8:
    // 0x1414b8: 0x96640038  lhu         $a0, 0x38($s3)
    ctx->pc = 0x1414b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_1414bc:
    // 0x1414bc: 0x8663006c  lh          $v1, 0x6C($s3)
    ctx->pc = 0x1414bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 108)));
label_1414c0:
    // 0x1414c0: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x1414c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
label_1414c4:
    // 0x1414c4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1414c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1414c8:
    // 0x1414c8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1414c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1414cc:
    // 0x1414cc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1414d0:
    if (ctx->pc == 0x1414D0u) {
        ctx->pc = 0x1414D4u;
        goto label_1414d4;
    }
    ctx->pc = 0x1414CCu;
    {
        const bool branch_taken_0x1414cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1414cc) {
            ctx->pc = 0x1414D8u;
            goto label_1414d8;
        }
    }
    ctx->pc = 0x1414D4u;
label_1414d4:
    // 0x1414d4: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x1414d4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1414d8:
    // 0x1414d8: 0x96640050  lhu         $a0, 0x50($s3)
    ctx->pc = 0x1414d8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
label_1414dc:
    // 0x1414dc: 0x86630070  lh          $v1, 0x70($s3)
    ctx->pc = 0x1414dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 112)));
label_1414e0:
    // 0x1414e0: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x1414e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
label_1414e4:
    // 0x1414e4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1414e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1414e8:
    // 0x1414e8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1414e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1414ec:
    // 0x1414ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1414f0:
    if (ctx->pc == 0x1414F0u) {
        ctx->pc = 0x1414F4u;
        goto label_1414f4;
    }
    ctx->pc = 0x1414ECu;
    {
        const bool branch_taken_0x1414ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1414ec) {
            ctx->pc = 0x1414F8u;
            goto label_1414f8;
        }
    }
    ctx->pc = 0x1414F4u;
label_1414f4:
    // 0x1414f4: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x1414f4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1414f8:
    // 0x1414f8: 0x96640060  lhu         $a0, 0x60($s3)
    ctx->pc = 0x1414f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 96)));
label_1414fc:
    // 0x1414fc: 0x86630074  lh          $v1, 0x74($s3)
    ctx->pc = 0x1414fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 116)));
label_141500:
    // 0x141500: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x141500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
label_141504:
    // 0x141504: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x141504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_141508:
    // 0x141508: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x141508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_14150c:
    // 0x14150c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_141510:
    if (ctx->pc == 0x141510u) {
        ctx->pc = 0x141514u;
        goto label_141514;
    }
    ctx->pc = 0x14150Cu;
    {
        const bool branch_taken_0x14150c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14150c) {
            ctx->pc = 0x141518u;
            goto label_141518;
        }
    }
    ctx->pc = 0x141514u;
label_141514:
    // 0x141514: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x141514u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_141518:
    // 0x141518: 0x9665002a  lhu         $a1, 0x2A($s3)
    ctx->pc = 0x141518u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 42)));
label_14151c:
    // 0x14151c: 0x8664006a  lh          $a0, 0x6A($s3)
    ctx->pc = 0x14151cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 106)));
label_141520:
    // 0x141520: 0x9663003a  lhu         $v1, 0x3A($s3)
    ctx->pc = 0x141520u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
label_141524:
    // 0x141524: 0x8662006e  lh          $v0, 0x6E($s3)
    ctx->pc = 0x141524u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 110)));
label_141528:
    // 0x141528: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x141528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_14152c:
    // 0x14152c: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x14152cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_141530:
    // 0x141530: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x141530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_141534:
    // 0x141534: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x141534u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_141538:
    // 0x141538: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_14153c:
    if (ctx->pc == 0x14153Cu) {
        ctx->pc = 0x14153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141538u;
        // 0x14153c: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141540u;
        goto label_141540;
    }
    ctx->pc = 0x141538u;
    {
        const bool branch_taken_0x141538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141538u;
        // 0x14153c: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141538) {
            ctx->pc = 0x141548u;
            goto label_141548;
        }
    }
    ctx->pc = 0x141540u;
label_141540:
    // 0x141540: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x141540u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_141544:
    // 0x141544: 0x0  nop
    ctx->pc = 0x141544u;
    // NOP
label_141548:
    // 0x141548: 0x96640052  lhu         $a0, 0x52($s3)
    ctx->pc = 0x141548u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 82)));
label_14154c:
    // 0x14154c: 0x86630072  lh          $v1, 0x72($s3)
    ctx->pc = 0x14154cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 114)));
label_141550:
    // 0x141550: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x141550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_141554:
    // 0x141554: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x141554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_141558:
    // 0x141558: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x141558u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_14155c:
    // 0x14155c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_141560:
    if (ctx->pc == 0x141560u) {
        ctx->pc = 0x141564u;
        goto label_141564;
    }
    ctx->pc = 0x14155Cu;
    {
        const bool branch_taken_0x14155c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14155c) {
            ctx->pc = 0x141568u;
            goto label_141568;
        }
    }
    ctx->pc = 0x141564u;
label_141564:
    // 0x141564: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x141564u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_141568:
    // 0x141568: 0x96640062  lhu         $a0, 0x62($s3)
    ctx->pc = 0x141568u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 98)));
label_14156c:
    // 0x14156c: 0x86630076  lh          $v1, 0x76($s3)
    ctx->pc = 0x14156cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 118)));
label_141570:
    // 0x141570: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x141570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_141574:
    // 0x141574: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x141574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_141578:
    // 0x141578: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x141578u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_14157c:
    // 0x14157c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_141580:
    if (ctx->pc == 0x141580u) {
        ctx->pc = 0x141584u;
        goto label_141584;
    }
    ctx->pc = 0x14157Cu;
    {
        const bool branch_taken_0x14157c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14157c) {
            ctx->pc = 0x141588u;
            goto label_141588;
        }
    }
    ctx->pc = 0x141584u;
label_141584:
    // 0x141584: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x141584u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_141588:
    // 0x141588: 0x9664003a  lhu         $a0, 0x3A($s3)
    ctx->pc = 0x141588u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
label_14158c:
    // 0x14158c: 0x8663006e  lh          $v1, 0x6E($s3)
    ctx->pc = 0x14158cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 110)));
label_141590:
    // 0x141590: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x141590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_141594:
    // 0x141594: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x141594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_141598:
    // 0x141598: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x141598u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_14159c:
    // 0x14159c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1415a0:
    if (ctx->pc == 0x1415A0u) {
        ctx->pc = 0x1415A4u;
        goto label_1415a4;
    }
    ctx->pc = 0x14159Cu;
    {
        const bool branch_taken_0x14159c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14159c) {
            ctx->pc = 0x1415A8u;
            goto label_1415a8;
        }
    }
    ctx->pc = 0x1415A4u;
label_1415a4:
    // 0x1415a4: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x1415a4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1415a8:
    // 0x1415a8: 0x96640052  lhu         $a0, 0x52($s3)
    ctx->pc = 0x1415a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 82)));
label_1415ac:
    // 0x1415ac: 0x86630072  lh          $v1, 0x72($s3)
    ctx->pc = 0x1415acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 114)));
label_1415b0:
    // 0x1415b0: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x1415b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_1415b4:
    // 0x1415b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1415b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1415b8:
    // 0x1415b8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1415b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1415bc:
    // 0x1415bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1415c0:
    if (ctx->pc == 0x1415C0u) {
        ctx->pc = 0x1415C4u;
        goto label_1415c4;
    }
    ctx->pc = 0x1415BCu;
    {
        const bool branch_taken_0x1415bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1415bc) {
            ctx->pc = 0x1415C8u;
            goto label_1415c8;
        }
    }
    ctx->pc = 0x1415C4u;
label_1415c4:
    // 0x1415c4: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x1415c4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1415c8:
    // 0x1415c8: 0x96640062  lhu         $a0, 0x62($s3)
    ctx->pc = 0x1415c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 98)));
label_1415cc:
    // 0x1415cc: 0x86630076  lh          $v1, 0x76($s3)
    ctx->pc = 0x1415ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 118)));
label_1415d0:
    // 0x1415d0: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x1415d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_1415d4:
    // 0x1415d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1415d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1415d8:
    // 0x1415d8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1415d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1415dc:
    // 0x1415dc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1415e0:
    if (ctx->pc == 0x1415E0u) {
        ctx->pc = 0x1415E4u;
        goto label_1415e4;
    }
    ctx->pc = 0x1415DCu;
    {
        const bool branch_taken_0x1415dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1415dc) {
            ctx->pc = 0x1415E8u;
            goto label_1415e8;
        }
    }
    ctx->pc = 0x1415E4u;
label_1415e4:
    // 0x1415e4: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x1415e4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1415e8:
    // 0x1415e8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1415e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1415ec:
    // 0x1415ec: 0x28417000  slti        $at, $v0, 0x7000
    ctx->pc = 0x1415ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)28672) ? 1 : 0);
label_1415f0:
    // 0x1415f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1415f4:
    if (ctx->pc == 0x1415F4u) {
        ctx->pc = 0x1415F8u;
        goto label_1415f8;
    }
    ctx->pc = 0x1415F0u;
    {
        const bool branch_taken_0x1415f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1415f0) {
            ctx->pc = 0x141600u;
            goto label_141600;
        }
    }
    ctx->pc = 0x1415F8u;
label_1415f8:
    // 0x1415f8: 0x64117000  daddiu      $s1, $zero, 0x7000
    ctx->pc = 0x1415f8u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)28672);
label_1415fc:
    // 0x1415fc: 0x0  nop
    ctx->pc = 0x1415fcu;
    // NOP
label_141600:
    // 0x141600: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x141600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
label_141604:
    // 0x141604: 0x28417000  slti        $at, $v0, 0x7000
    ctx->pc = 0x141604u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)28672) ? 1 : 0);
label_141608:
    // 0x141608: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_14160c:
    if (ctx->pc == 0x14160Cu) {
        ctx->pc = 0x141610u;
        goto label_141610;
    }
    ctx->pc = 0x141608u;
    {
        const bool branch_taken_0x141608 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141608) {
            ctx->pc = 0x141618u;
            goto label_141618;
        }
    }
    ctx->pc = 0x141610u;
label_141610:
    // 0x141610: 0x64157000  daddiu      $s5, $zero, 0x7000
    ctx->pc = 0x141610u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)28672);
label_141614:
    // 0x141614: 0x0  nop
    ctx->pc = 0x141614u;
    // NOP
label_141618:
    // 0x141618: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x141618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_14161c:
    // 0x14161c: 0x34018ff1  ori         $at, $zero, 0x8FF1
    ctx->pc = 0x14161cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36849);
label_141620:
    // 0x141620: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x141620u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_141624:
    // 0x141624: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_141628:
    if (ctx->pc == 0x141628u) {
        ctx->pc = 0x141628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141624u;
        // 0x141628: 0x34028ff0  ori         $v0, $zero, 0x8FF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36848);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14162Cu;
        goto label_14162c;
    }
    ctx->pc = 0x141624u;
    {
        const bool branch_taken_0x141624 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x141628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141624u;
        // 0x141628: 0x34028ff0  ori         $v0, $zero, 0x8FF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36848);
        ctx->in_delay_slot = false;
        if (branch_taken_0x141624) {
            ctx->pc = 0x141630u;
            goto label_141630;
        }
    }
    ctx->pc = 0x14162Cu;
label_14162c:
    // 0x14162c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x14162cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_141630:
    // 0x141630: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x141630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
label_141634:
    // 0x141634: 0x34018ff1  ori         $at, $zero, 0x8FF1
    ctx->pc = 0x141634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36849);
label_141638:
    // 0x141638: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x141638u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_14163c:
    // 0x14163c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_141640:
    if (ctx->pc == 0x141640u) {
        ctx->pc = 0x141640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14163Cu;
        // 0x141640: 0x34028ff0  ori         $v0, $zero, 0x8FF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36848);
        ctx->in_delay_slot = false;
        ctx->pc = 0x141644u;
        goto label_141644;
    }
    ctx->pc = 0x14163Cu;
    {
        const bool branch_taken_0x14163c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x141640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14163Cu;
        // 0x141640: 0x34028ff0  ori         $v0, $zero, 0x8FF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36848);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14163c) {
            ctx->pc = 0x141648u;
            goto label_141648;
        }
    }
    ctx->pc = 0x141644u;
label_141644:
    // 0x141644: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x141644u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_141648:
    // 0x141648: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x141648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_14164c:
    // 0x14164c: 0x28417900  slti        $at, $v0, 0x7900
    ctx->pc = 0x14164cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30976) ? 1 : 0);
label_141650:
    // 0x141650: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_141654:
    if (ctx->pc == 0x141654u) {
        ctx->pc = 0x141658u;
        goto label_141658;
    }
    ctx->pc = 0x141650u;
    {
        const bool branch_taken_0x141650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141650) {
            ctx->pc = 0x141660u;
            goto label_141660;
        }
    }
    ctx->pc = 0x141658u;
label_141658:
    // 0x141658: 0x64107900  daddiu      $s0, $zero, 0x7900
    ctx->pc = 0x141658u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)30976);
label_14165c:
    // 0x14165c: 0x0  nop
    ctx->pc = 0x14165cu;
    // NOP
label_141660:
    // 0x141660: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x141660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_141664:
    // 0x141664: 0x28417900  slti        $at, $v0, 0x7900
    ctx->pc = 0x141664u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30976) ? 1 : 0);
label_141668:
    // 0x141668: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_14166c:
    if (ctx->pc == 0x14166Cu) {
        ctx->pc = 0x141670u;
        goto label_141670;
    }
    ctx->pc = 0x141668u;
    {
        const bool branch_taken_0x141668 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141668) {
            ctx->pc = 0x141678u;
            goto label_141678;
        }
    }
    ctx->pc = 0x141670u;
label_141670:
    // 0x141670: 0x64167900  daddiu      $s6, $zero, 0x7900
    ctx->pc = 0x141670u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)30976);
label_141674:
    // 0x141674: 0x0  nop
    ctx->pc = 0x141674u;
    // NOP
label_141678:
    // 0x141678: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x141678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_14167c:
    // 0x14167c: 0x340186f1  ori         $at, $zero, 0x86F1
    ctx->pc = 0x14167cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34545);
label_141680:
    // 0x141680: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x141680u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_141684:
    // 0x141684: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_141688:
    if (ctx->pc == 0x141688u) {
        ctx->pc = 0x141688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141684u;
        // 0x141688: 0x340286f0  ori         $v0, $zero, 0x86F0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34544);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14168Cu;
        goto label_14168c;
    }
    ctx->pc = 0x141684u;
    {
        const bool branch_taken_0x141684 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x141688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141684u;
        // 0x141688: 0x340286f0  ori         $v0, $zero, 0x86F0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34544);
        ctx->in_delay_slot = false;
        if (branch_taken_0x141684) {
            ctx->pc = 0x141690u;
            goto label_141690;
        }
    }
    ctx->pc = 0x14168Cu;
label_14168c:
    // 0x14168c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x14168cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_141690:
    // 0x141690: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x141690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_141694:
    // 0x141694: 0x340186f1  ori         $at, $zero, 0x86F1
    ctx->pc = 0x141694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34545);
label_141698:
    // 0x141698: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x141698u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_14169c:
    // 0x14169c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1416a0:
    if (ctx->pc == 0x1416A0u) {
        ctx->pc = 0x1416A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14169Cu;
        // 0x1416a0: 0x340286f0  ori         $v0, $zero, 0x86F0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34544);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1416A4u;
        goto label_1416a4;
    }
    ctx->pc = 0x14169Cu;
    {
        const bool branch_taken_0x14169c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1416A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14169Cu;
        // 0x1416a0: 0x340286f0  ori         $v0, $zero, 0x86F0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34544);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14169c) {
            ctx->pc = 0x1416A8u;
            goto label_1416a8;
        }
    }
    ctx->pc = 0x1416A4u;
label_1416a4:
    // 0x1416a4: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x1416a4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1416a8:
    // 0x1416a8: 0x26229000  addiu       $v0, $s1, -0x7000
    ctx->pc = 0x1416a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294938624));
label_1416ac:
    // 0x1416ac: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1416acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1416b0:
    // 0x1416b0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1416b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1416b4:
    // 0x1416b4: 0x26a29000  addiu       $v0, $s5, -0x7000
    ctx->pc = 0x1416b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294938624));
label_1416b8:
    // 0x1416b8: 0xfe840068  sd          $a0, 0x68($s4)
    ctx->pc = 0x1416b8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 104), GPR_U64(ctx, 4));
label_1416bc:
    // 0x1416bc: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x1416bcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1416c0:
    // 0x1416c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1416c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1416c4:
    // 0x1416c4: 0x26028700  addiu       $v0, $s0, -0x7900
    ctx->pc = 0x1416c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936320));
label_1416c8:
    // 0x1416c8: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1416c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1416cc:
    // 0x1416cc: 0x26c28700  addiu       $v0, $s6, -0x7900
    ctx->pc = 0x1416ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936320));
label_1416d0:
    // 0x1416d0: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x1416d0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1416d4:
    // 0x1416d4: 0x111103  sra         $v0, $s1, 4
    ctx->pc = 0x1416d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 4));
label_1416d8:
    // 0x1416d8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1416d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_1416dc:
    // 0x1416dc: 0x151103  sra         $v0, $s5, 4
    ctx->pc = 0x1416dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 4));
label_1416e0:
    // 0x1416e0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1416e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_1416e4:
    // 0x1416e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1416e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1416e8:
    // 0x1416e8: 0x101103  sra         $v0, $s0, 4
    ctx->pc = 0x1416e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 4));
label_1416ec:
    // 0x1416ec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1416ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1416f0:
    // 0x1416f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1416f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1416f4:
    // 0x1416f4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1416f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1416f8:
    // 0x1416f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1416f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1416fc:
    // 0x1416fc: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1416fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_141700:
    // 0x141700: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x141700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_141704:
    // 0x141704: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x141704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_141708:
    // 0x141708: 0x161103  sra         $v0, $s6, 4
    ctx->pc = 0x141708u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 22), 4));
label_14170c:
    // 0x14170c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x14170cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_141710:
    // 0x141710: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x141710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_141714:
    // 0x141714: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x141714u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_141718:
    // 0x141718: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x141718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
label_14171c:
    // 0x14171c: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x14171cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_141720:
    // 0x141720: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x141720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
label_141724:
    // 0x141724: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x141724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_141728:
    // 0x141728: 0xfe860060  sd          $a2, 0x60($s4)
    ctx->pc = 0x141728u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 6));
label_14172c:
    // 0x14172c: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x14172cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_141730:
    // 0x141730: 0xfe830078  sd          $v1, 0x78($s4)
    ctx->pc = 0x141730u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 3));
label_141734:
    // 0x141734: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x141734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_141738:
    // 0x141738: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x141738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14173c:
    // 0x14173c: 0xfe820070  sd          $v0, 0x70($s4)
    ctx->pc = 0x14173cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 2));
label_141740:
    // 0x141740: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x141740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141744:
    // 0x141744: 0x24020116  addiu       $v0, $zero, 0x116
    ctx->pc = 0x141744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
label_141748:
    // 0x141748: 0xfe800088  sd          $zero, 0x88($s4)
    ctx->pc = 0x141748u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 136), GPR_U64(ctx, 0));
label_14174c:
    // 0x14174c: 0xfe820080  sd          $v0, 0x80($s4)
    ctx->pc = 0x14174cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 128), GPR_U64(ctx, 2));
label_141750:
    // 0x141750: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x141750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_141754:
    // 0x141754: 0xfe850098  sd          $a1, 0x98($s4)
    ctx->pc = 0x141754u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 152), GPR_U64(ctx, 5));
label_141758:
    // 0x141758: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x141758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_14175c:
    // 0x14175c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x14175cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_141760:
    // 0x141760: 0xfe820090  sd          $v0, 0x90($s4)
    ctx->pc = 0x141760u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 144), GPR_U64(ctx, 2));
label_141764:
    // 0x141764: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x141764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_141768:
    // 0x141768: 0xfe8600a8  sd          $a2, 0xA8($s4)
    ctx->pc = 0x141768u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 168), GPR_U64(ctx, 6));
label_14176c:
    // 0x14176c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x14176cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_141770:
    // 0x141770: 0xfe8200a0  sd          $v0, 0xA0($s4)
    ctx->pc = 0x141770u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 160), GPR_U64(ctx, 2));
label_141774:
    // 0x141774: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x141774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
label_141778:
    // 0x141778: 0xfe8500b8  sd          $a1, 0xB8($s4)
    ctx->pc = 0x141778u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 184), GPR_U64(ctx, 5));
label_14177c:
    // 0x14177c: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x14177cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
label_141780:
    // 0x141780: 0x34058700  ori         $a1, $zero, 0x8700
    ctx->pc = 0x141780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
label_141784:
    // 0x141784: 0xfe8200b0  sd          $v0, 0xB0($s4)
    ctx->pc = 0x141784u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 176), GPR_U64(ctx, 2));
label_141788:
    // 0x141788: 0x3c020e08  lui         $v0, 0xE08
    ctx->pc = 0x141788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3592 << 16));
label_14178c:
    // 0x14178c: 0xfe8600c8  sd          $a2, 0xC8($s4)
    ctx->pc = 0x14178cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 200), GPR_U64(ctx, 6));
label_141790:
    // 0x141790: 0x34422008  ori         $v0, $v0, 0x2008
    ctx->pc = 0x141790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8200);
label_141794:
    // 0x141794: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x141794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
label_141798:
    // 0x141798: 0xfe8200c0  sd          $v0, 0xC0($s4)
    ctx->pc = 0x141798u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 192), GPR_U64(ctx, 2));
label_14179c:
    // 0x14179c: 0x3c0500df  lui         $a1, 0xDF
    ctx->pc = 0x14179cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)223 << 16));
label_1417a0:
    // 0x1417a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1417a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1417a4:
    // 0x1417a4: 0x34c79000  ori         $a3, $a2, 0x9000
    ctx->pc = 0x1417a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36864);
label_1417a8:
    // 0x1417a8: 0xfe8200d8  sd          $v0, 0xD8($s4)
    ctx->pc = 0x1417a8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 216), GPR_U64(ctx, 2));
label_1417ac:
    // 0x1417ac: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x1417acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_1417b0:
    // 0x1417b0: 0xfe8700d0  sd          $a3, 0xD0($s4)
    ctx->pc = 0x1417b0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 208), GPR_U64(ctx, 7));
label_1417b4:
    // 0x1417b4: 0x3c0501ff  lui         $a1, 0x1FF
    ctx->pc = 0x1417b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)511 << 16));
label_1417b8:
    // 0x1417b8: 0xfe8400e8  sd          $a0, 0xE8($s4)
    ctx->pc = 0x1417b8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 232), GPR_U64(ctx, 4));
label_1417bc:
    // 0x1417bc: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1417bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_1417c0:
    // 0x1417c0: 0xfe8500e0  sd          $a1, 0xE0($s4)
    ctx->pc = 0x1417c0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 224), GPR_U64(ctx, 5));
label_1417c4:
    // 0x1417c4: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1417c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1417c8:
    // 0x1417c8: 0xfe8400f8  sd          $a0, 0xF8($s4)
    ctx->pc = 0x1417c8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 248), GPR_U64(ctx, 4));
label_1417cc:
    // 0x1417cc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1417ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1417d0:
    // 0x1417d0: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1417d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_1417d4:
    // 0x1417d4: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x1417d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_1417d8:
    // 0x1417d8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1417d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1417dc:
    // 0x1417dc: 0xfe8400f0  sd          $a0, 0xF0($s4)
    ctx->pc = 0x1417dcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 240), GPR_U64(ctx, 4));
label_1417e0:
    // 0x1417e0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1417e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1417e4:
    // 0x1417e4: 0xfe850108  sd          $a1, 0x108($s4)
    ctx->pc = 0x1417e4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 264), GPR_U64(ctx, 5));
label_1417e8:
    // 0x1417e8: 0x3c04e400  lui         $a0, 0xE400
    ctx->pc = 0x1417e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58368 << 16));
label_1417ec:
    // 0x1417ec: 0xfe820100  sd          $v0, 0x100($s4)
    ctx->pc = 0x1417ecu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 256), GPR_U64(ctx, 2));
label_1417f0:
    // 0x1417f0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1417f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1417f4:
    // 0x1417f4: 0xfe830118  sd          $v1, 0x118($s4)
    ctx->pc = 0x1417f4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 280), GPR_U64(ctx, 3));
label_1417f8:
    // 0x1417f8: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1417f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_1417fc:
    // 0x1417fc: 0x8c26f014  lw          $a2, -0xFEC($at)
    ctx->pc = 0x1417fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
label_141800:
    // 0x141800: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x141800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_141804:
    // 0x141804: 0x70022b89  pcpyld      $a1, $zero, $v0
    ctx->pc = 0x141804u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_141808:
    // 0x141808: 0x121942  srl         $v1, $s2, 5
    ctx->pc = 0x141808u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
label_14180c:
    // 0x14180c: 0x3c024214  lui         $v0, 0x4214
    ctx->pc = 0x14180cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16916 << 16));
label_141810:
    // 0x141810: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x141810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_141814:
    // 0x141814: 0x34422160  ori         $v0, $v0, 0x2160
    ctx->pc = 0x141814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8544);
label_141818:
    // 0x141818: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x141818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14181c:
    // 0x14181c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14181cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_141820:
    // 0x141820: 0xdcc60040  ld          $a2, 0x40($a2)
    ctx->pc = 0x141820u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 6), 64)));
label_141824:
    // 0x141824: 0x34431421  ori         $v1, $v0, 0x1421
    ctx->pc = 0x141824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5153);
label_141828:
    // 0x141828: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x141828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_14182c:
    // 0x14182c: 0xfe860110  sd          $a2, 0x110($s4)
    ctx->pc = 0x14182cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 272), GPR_U64(ctx, 6));
label_141830:
    // 0x141830: 0x26940120  addiu       $s4, $s4, 0x120
    ctx->pc = 0x141830u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
label_141834:
    // 0x141834: 0xfe850000  sd          $a1, 0x0($s4)
    ctx->pc = 0x141834u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 5));
label_141838:
    // 0x141838: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x141838u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
label_14183c:
    // 0x14183c: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x14183cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
label_141840:
    // 0x141840: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x141840u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_141844:
    // 0x141844: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x141844u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_141848:
    // 0x141848: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x141848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_14184c:
    // 0x14184c: 0xc04cfd8  jal         func_133F60
label_141850:
    if (ctx->pc == 0x141850u) {
        ctx->pc = 0x141850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14184Cu;
        // 0x141850: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141854u;
        goto label_141854;
    }
    ctx->pc = 0x14184Cu;
    SET_GPR_U32(ctx, 31, 0x141854u);
    ctx->pc = 0x141850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14184Cu;
    // 0x141850: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x14184Cu, 0x141854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141854u;
label_141854:
    // 0x141854: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x141854u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_141858:
    // 0x141858: 0x34058007  ori         $a1, $zero, 0x8007
    ctx->pc = 0x141858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32775);
label_14185c:
    // 0x14185c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x14185cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_141860:
    // 0x141860: 0x2419000e  addiu       $t9, $zero, 0xE
    ctx->pc = 0x141860u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_141864:
    // 0x141864: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x141864u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_141868:
    // 0x141868: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x141868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_14186c:
    // 0x14186c: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x14186cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
label_141870:
    // 0x141870: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x141870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_141874:
    // 0x141874: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x141874u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_141878:
    // 0x141878: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x141878u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_14187c:
    // 0x14187c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14187cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_141880:
    // 0x141880: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x141880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
label_141884:
    // 0x141884: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x141884u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_141888:
    // 0x141888: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x141888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
label_14188c:
    // 0x14188c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x14188cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
label_141890:
    // 0x141890: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x141890u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_141894:
    // 0x141894: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x141894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_141898:
    // 0x141898: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x141898u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
label_14189c:
    // 0x14189c: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x14189cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1418a0:
    // 0x1418a0: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x1418a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_1418a4:
    // 0x1418a4: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x1418a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_1418a8:
    // 0x1418a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1418a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1418ac:
    // 0x1418ac: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1418acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1418b0:
    // 0x1418b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1418b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1418b4:
    // 0x1418b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1418b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1418b8:
    // 0x1418b8: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1418b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
label_1418bc:
    // 0x1418bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1418bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1418c0:
    // 0x1418c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1418c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1418c4:
    // 0x1418c4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1418c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_1418c8:
    // 0x1418c8: 0x324407ff  andi        $a0, $s2, 0x7FF
    ctx->pc = 0x1418c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_1418cc:
    // 0x1418cc: 0x43c025  or          $t8, $v0, $v1
    ctx->pc = 0x1418ccu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1418d0:
    // 0x1418d0: 0xde720018  ld          $s2, 0x18($s3)
    ctx->pc = 0x1418d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_1418d4:
    // 0x1418d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1418d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1418d8:
    // 0x1418d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1418d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1418dc:
    // 0x1418dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1418dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1418e0:
    // 0x1418e0: 0xa37025  or          $t6, $a1, $v1
    ctx->pc = 0x1418e0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1418e4:
    // 0x1418e4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1418e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1418e8:
    // 0x1418e8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1418e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_1418ec:
    // 0x1418ec: 0x70056b89  pcpyld      $t5, $zero, $a1
    ctx->pc = 0x1418ecu;
    SET_GPR_VEC(ctx, 13, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
label_1418f0:
    // 0x1418f0: 0x3c0500df  lui         $a1, 0xDF
    ctx->pc = 0x1418f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)223 << 16));
label_1418f4:
    // 0x1418f4: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x1418f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_1418f8:
    // 0x1418f8: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1418f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1418fc:
    // 0x1418fc: 0x3c0501ff  lui         $a1, 0x1FF
    ctx->pc = 0x1418fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)511 << 16));
label_141900:
    // 0x141900: 0xa66025  or          $t4, $a1, $a2
    ctx->pc = 0x141900u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_141904:
    // 0x141904: 0x24057900  addiu       $a1, $zero, 0x7900
    ctx->pc = 0x141904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
label_141908:
    // 0x141908: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x141908u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_14190c:
    // 0x14190c: 0x24057000  addiu       $a1, $zero, 0x7000
    ctx->pc = 0x14190cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_141910:
    // 0x141910: 0xa65825  or          $t3, $a1, $a2
    ctx->pc = 0x141910u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_141914:
    // 0x141914: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x141914u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_141918:
    // 0x141918: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x141918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_14191c:
    // 0x14191c: 0xae820038  sw          $v0, 0x38($s4)
    ctx->pc = 0x14191cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
label_141920:
    // 0x141920: 0x34aa17fd  ori         $t2, $a1, 0x17FD
    ctx->pc = 0x141920u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6141);
label_141924:
    // 0x141924: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x141924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_141928:
    // 0x141928: 0x3c053900  lui         $a1, 0x3900
    ctx->pc = 0x141928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14592 << 16));
label_14192c:
    // 0x14192c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x14192cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_141930:
    // 0x141930: 0xfe920028  sd          $s2, 0x28($s4)
    ctx->pc = 0x141930u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 18));
label_141934:
    // 0x141934: 0xde710028  ld          $s1, 0x28($s3)
    ctx->pc = 0x141934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 40)));
label_141938:
    // 0x141938: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x141938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14193c:
    // 0x14193c: 0x3c05e400  lui         $a1, 0xE400
    ctx->pc = 0x14193cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58368 << 16));
label_141940:
    // 0x141940: 0xde700030  ld          $s0, 0x30($s3)
    ctx->pc = 0x141940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 48)));
label_141944:
    // 0x141944: 0xde6f0038  ld          $t7, 0x38($s3)
    ctx->pc = 0x141944u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 19), 56)));
label_141948:
    // 0x141948: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x141948u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_14194c:
    // 0x14194c: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x14194cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_141950:
    // 0x141950: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x141950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_141954:
    // 0x141954: 0x70054389  pcpyld      $t0, $zero, $a1
    ctx->pc = 0x141954u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
label_141958:
    // 0x141958: 0x3c054214  lui         $a1, 0x4214
    ctx->pc = 0x141958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16916 << 16));
label_14195c:
    // 0x14195c: 0x34a72160  ori         $a3, $a1, 0x2160
    ctx->pc = 0x14195cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8544);
label_141960:
    // 0x141960: 0xfe910030  sd          $s1, 0x30($s4)
    ctx->pc = 0x141960u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 17));
label_141964:
    // 0x141964: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x141964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_141968:
    // 0x141968: 0xe681003c  swc1        $f1, 0x3C($s4)
    ctx->pc = 0x141968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
label_14196c:
    // 0x14196c: 0x34a61421  ori         $a2, $a1, 0x1421
    ctx->pc = 0x14196cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5153);
label_141970:
    // 0x141970: 0xfe900040  sd          $s0, 0x40($s4)
    ctx->pc = 0x141970u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 16));
label_141974:
    // 0x141974: 0x2405fdf7  addiu       $a1, $zero, -0x209
    ctx->pc = 0x141974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966775));
label_141978:
    // 0x141978: 0xfe8f0048  sd          $t7, 0x48($s4)
    ctx->pc = 0x141978u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 15));
label_14197c:
    // 0x14197c: 0x70052b89  pcpyld      $a1, $zero, $a1
    ctx->pc = 0x14197cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
label_141980:
    // 0x141980: 0x852824  and         $a1, $a0, $a1
    ctx->pc = 0x141980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_141984:
    // 0x141984: 0xde720040  ld          $s2, 0x40($s3)
    ctx->pc = 0x141984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 19), 64)));
label_141988:
    // 0x141988: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x141988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14198c:
    // 0x14198c: 0xde710050  ld          $s1, 0x50($s3)
    ctx->pc = 0x14198cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 80)));
label_141990:
    // 0x141990: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x141990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141994:
    // 0x141994: 0x4783c  dsll32      $t7, $a0, 0
    ctx->pc = 0x141994u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) << (32 + 0));
label_141998:
    // 0x141998: 0x3c046402  lui         $a0, 0x6402
    ctx->pc = 0x141998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25602 << 16));
label_14199c:
    // 0x14199c: 0x34841000  ori         $a0, $a0, 0x1000
    ctx->pc = 0x14199cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
label_1419a0:
    // 0x1419a0: 0x8f2025  or          $a0, $a0, $t7
    ctx->pc = 0x1419a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 15));
label_1419a4:
    // 0x1419a4: 0x340f8002  ori         $t7, $zero, 0x8002
    ctx->pc = 0x1419a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
label_1419a8:
    // 0x1419a8: 0x1e31825  or          $v1, $t7, $v1
    ctx->pc = 0x1419a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
label_1419ac:
    // 0x1419ac: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x1419acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_1419b0:
    // 0x1419b0: 0xe6810054  swc1        $f1, 0x54($s4)
    ctx->pc = 0x1419b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
label_1419b4:
    // 0x1419b4: 0xc661004c  lwc1        $f1, 0x4C($s3)
    ctx->pc = 0x1419b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1419b8:
    // 0x1419b8: 0xde700058  ld          $s0, 0x58($s3)
    ctx->pc = 0x1419b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 88)));
label_1419bc:
    // 0x1419bc: 0xde6f0060  ld          $t7, 0x60($s3)
    ctx->pc = 0x1419bcu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 19), 96)));
label_1419c0:
    // 0x1419c0: 0xfe920058  sd          $s2, 0x58($s4)
    ctx->pc = 0x1419c0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 18));
label_1419c4:
    // 0x1419c4: 0xfe910060  sd          $s1, 0x60($s4)
    ctx->pc = 0x1419c4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 17));
label_1419c8:
    // 0x1419c8: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x1419c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_1419cc:
    // 0x1419cc: 0xe681006c  swc1        $f1, 0x6C($s4)
    ctx->pc = 0x1419ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 108), bits); }
label_1419d0:
    // 0x1419d0: 0xfe900070  sd          $s0, 0x70($s4)
    ctx->pc = 0x1419d0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 16));
label_1419d4:
    // 0x1419d4: 0xfe8f0078  sd          $t7, 0x78($s4)
    ctx->pc = 0x1419d4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 15));
label_1419d8:
    // 0x1419d8: 0x96820030  lhu         $v0, 0x30($s4)
    ctx->pc = 0x1419d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
label_1419dc:
    // 0x1419dc: 0x96900048  lhu         $s0, 0x48($s4)
    ctx->pc = 0x1419dcu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 72)));
label_1419e0:
    // 0x1419e0: 0x968f0060  lhu         $t7, 0x60($s4)
    ctx->pc = 0x1419e0u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 96)));
label_1419e4:
    // 0x1419e4: 0x96960078  lhu         $s6, 0x78($s4)
    ctx->pc = 0x1419e4u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 120)));
label_1419e8:
    // 0x1419e8: 0x96950032  lhu         $s5, 0x32($s4)
    ctx->pc = 0x1419e8u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 50)));
label_1419ec:
    // 0x1419ec: 0x9692004a  lhu         $s2, 0x4A($s4)
    ctx->pc = 0x1419ecu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 74)));
label_1419f0:
    // 0x1419f0: 0x96910062  lhu         $s1, 0x62($s4)
    ctx->pc = 0x1419f0u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 98)));
label_1419f4:
    // 0x1419f4: 0x50b821  addu        $s7, $v0, $s0
    ctx->pc = 0x1419f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1419f8:
    // 0x1419f8: 0x1f7b821  addu        $s7, $t7, $s7
    ctx->pc = 0x1419f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 23)));
label_1419fc:
    // 0x1419fc: 0x9690007a  lhu         $s0, 0x7A($s4)
    ctx->pc = 0x1419fcu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 122)));
label_141a00:
    // 0x141a00: 0x2d7b021  addu        $s6, $s6, $s7
    ctx->pc = 0x141a00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
label_141a04:
    // 0x141a04: 0x866f0068  lh          $t7, 0x68($s3)
    ctx->pc = 0x141a04u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 104)));
label_141a08:
    // 0x141a08: 0x16b083  sra         $s6, $s6, 2
    ctx->pc = 0x141a08u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 22), 2));
label_141a0c:
    // 0x141a0c: 0x2b2a821  addu        $s5, $s5, $s2
    ctx->pc = 0x141a0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_141a10:
    // 0x141a10: 0x569023  subu        $s2, $v0, $s6
    ctx->pc = 0x141a10u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_141a14:
    // 0x141a14: 0x2358821  addu        $s1, $s1, $s5
    ctx->pc = 0x141a14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_141a18:
    // 0x141a18: 0x129103  sra         $s2, $s2, 4
    ctx->pc = 0x141a18u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 4));
label_141a1c:
    // 0x141a1c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x141a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_141a20:
    // 0x141a20: 0x1f28821  addu        $s1, $t7, $s2
    ctx->pc = 0x141a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
label_141a24:
    // 0x141a24: 0x107883  sra         $t7, $s0, 2
    ctx->pc = 0x141a24u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 16), 2));
label_141a28:
    // 0x141a28: 0x3230ffff  andi        $s0, $s1, 0xFFFF
    ctx->pc = 0x141a28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_141a2c:
    // 0x141a2c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x141a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_141a30:
    // 0x141a30: 0xa6820030  sh          $v0, 0x30($s4)
    ctx->pc = 0x141a30u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 48), (uint16_t)GPR_U32(ctx, 2));
label_141a34:
    // 0x141a34: 0x96820032  lhu         $v0, 0x32($s4)
    ctx->pc = 0x141a34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 50)));
label_141a38:
    // 0x141a38: 0x8670006a  lh          $s0, 0x6A($s3)
    ctx->pc = 0x141a38u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 106)));
label_141a3c:
    // 0x141a3c: 0x4f8823  subu        $s1, $v0, $t7
    ctx->pc = 0x141a3cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_141a40:
    // 0x141a40: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x141a40u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
label_141a44:
    // 0x141a44: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x141a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_141a48:
    // 0x141a48: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x141a48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_141a4c:
    // 0x141a4c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x141a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_141a50:
    // 0x141a50: 0xa6820032  sh          $v0, 0x32($s4)
    ctx->pc = 0x141a50u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 50), (uint16_t)GPR_U32(ctx, 2));
label_141a54:
    // 0x141a54: 0x96820048  lhu         $v0, 0x48($s4)
    ctx->pc = 0x141a54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 72)));
label_141a58:
    // 0x141a58: 0x8670006c  lh          $s0, 0x6C($s3)
    ctx->pc = 0x141a58u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 108)));
label_141a5c:
    // 0x141a5c: 0x568823  subu        $s1, $v0, $s6
    ctx->pc = 0x141a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_141a60:
    // 0x141a60: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x141a60u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
label_141a64:
    // 0x141a64: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x141a64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_141a68:
    // 0x141a68: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x141a68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_141a6c:
    // 0x141a6c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x141a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_141a70:
    // 0x141a70: 0xa6820048  sh          $v0, 0x48($s4)
    ctx->pc = 0x141a70u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 72), (uint16_t)GPR_U32(ctx, 2));
label_141a74:
    // 0x141a74: 0x9682004a  lhu         $v0, 0x4A($s4)
    ctx->pc = 0x141a74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 74)));
label_141a78:
    // 0x141a78: 0x8670006e  lh          $s0, 0x6E($s3)
    ctx->pc = 0x141a78u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 110)));
label_141a7c:
    // 0x141a7c: 0x4f8823  subu        $s1, $v0, $t7
    ctx->pc = 0x141a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_141a80:
    // 0x141a80: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x141a80u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
label_141a84:
    // 0x141a84: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x141a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_141a88:
    // 0x141a88: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x141a88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_141a8c:
    // 0x141a8c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x141a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_141a90:
    // 0x141a90: 0xa682004a  sh          $v0, 0x4A($s4)
    ctx->pc = 0x141a90u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 74), (uint16_t)GPR_U32(ctx, 2));
label_141a94:
    // 0x141a94: 0x96820060  lhu         $v0, 0x60($s4)
    ctx->pc = 0x141a94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 96)));
label_141a98:
    // 0x141a98: 0x86700070  lh          $s0, 0x70($s3)
    ctx->pc = 0x141a98u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 112)));
label_141a9c:
    // 0x141a9c: 0x568823  subu        $s1, $v0, $s6
    ctx->pc = 0x141a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_141aa0:
    // 0x141aa0: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x141aa0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
label_141aa4:
    // 0x141aa4: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x141aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_141aa8:
    // 0x141aa8: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x141aa8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_141aac:
    // 0x141aac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x141aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_141ab0:
    // 0x141ab0: 0xa6820060  sh          $v0, 0x60($s4)
    ctx->pc = 0x141ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 96), (uint16_t)GPR_U32(ctx, 2));
label_141ab4:
    // 0x141ab4: 0x96820062  lhu         $v0, 0x62($s4)
    ctx->pc = 0x141ab4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 98)));
label_141ab8:
    // 0x141ab8: 0x86700072  lh          $s0, 0x72($s3)
    ctx->pc = 0x141ab8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 114)));
label_141abc:
    // 0x141abc: 0x4f8823  subu        $s1, $v0, $t7
    ctx->pc = 0x141abcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_141ac0:
    // 0x141ac0: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x141ac0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
label_141ac4:
    // 0x141ac4: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x141ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_141ac8:
    // 0x141ac8: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x141ac8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_141acc:
    // 0x141acc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x141accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_141ad0:
    // 0x141ad0: 0xa6820062  sh          $v0, 0x62($s4)
    ctx->pc = 0x141ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 98), (uint16_t)GPR_U32(ctx, 2));
label_141ad4:
    // 0x141ad4: 0x96820078  lhu         $v0, 0x78($s4)
    ctx->pc = 0x141ad4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 120)));
label_141ad8:
    // 0x141ad8: 0x86700074  lh          $s0, 0x74($s3)
    ctx->pc = 0x141ad8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 116)));
label_141adc:
    // 0x141adc: 0x568823  subu        $s1, $v0, $s6
    ctx->pc = 0x141adcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_141ae0:
    // 0x141ae0: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x141ae0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
label_141ae4:
    // 0x141ae4: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x141ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_141ae8:
    // 0x141ae8: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x141ae8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_141aec:
    // 0x141aec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x141aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_141af0:
    // 0x141af0: 0xa6820078  sh          $v0, 0x78($s4)
    ctx->pc = 0x141af0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 120), (uint16_t)GPR_U32(ctx, 2));
label_141af4:
    // 0x141af4: 0x9682007a  lhu         $v0, 0x7A($s4)
    ctx->pc = 0x141af4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 122)));
label_141af8:
    // 0x141af8: 0x86700076  lh          $s0, 0x76($s3)
    ctx->pc = 0x141af8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 118)));
label_141afc:
    // 0x141afc: 0x4f7823  subu        $t7, $v0, $t7
    ctx->pc = 0x141afcu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_141b00:
    // 0x141b00: 0xf7903  sra         $t7, $t7, 4
    ctx->pc = 0x141b00u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 4));
label_141b04:
    // 0x141b04: 0x20f7821  addu        $t7, $s0, $t7
    ctx->pc = 0x141b04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
label_141b08:
    // 0x141b08: 0x31efffff  andi        $t7, $t7, 0xFFFF
    ctx->pc = 0x141b08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
label_141b0c:
    // 0x141b0c: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x141b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_141b10:
    // 0x141b10: 0xa682007a  sh          $v0, 0x7A($s4)
    ctx->pc = 0x141b10u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 122), (uint16_t)GPR_U32(ctx, 2));
label_141b14:
    // 0x141b14: 0x26940080  addiu       $s4, $s4, 0x80
    ctx->pc = 0x141b14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_141b18:
    // 0x141b18: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x141b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_141b1c:
    // 0x141b1c: 0xfe8e0000  sd          $t6, 0x0($s4)
    ctx->pc = 0x141b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 14));
label_141b20:
    // 0x141b20: 0xfe990008  sd          $t9, 0x8($s4)
    ctx->pc = 0x141b20u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 25));
label_141b24:
    // 0x141b24: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x141b24u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_141b28:
    // 0x141b28: 0x8c22f014  lw          $v0, -0xFEC($at)
    ctx->pc = 0x141b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
label_141b2c:
    // 0x141b2c: 0xdc420020  ld          $v0, 0x20($v0)
    ctx->pc = 0x141b2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 32)));
label_141b30:
    // 0x141b30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x141b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_141b34:
    // 0x141b34: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x141b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_141b38:
    // 0x141b38: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x141b38u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_141b3c:
    // 0x141b3c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x141b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_141b40:
    // 0x141b40: 0xfe820028  sd          $v0, 0x28($s4)
    ctx->pc = 0x141b40u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 2));
label_141b44:
    // 0x141b44: 0xfe8c0020  sd          $t4, 0x20($s4)
    ctx->pc = 0x141b44u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 12));
label_141b48:
    // 0x141b48: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x141b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_141b4c:
    // 0x141b4c: 0xfe820038  sd          $v0, 0x38($s4)
    ctx->pc = 0x141b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 56), GPR_U64(ctx, 2));
label_141b50:
    // 0x141b50: 0xfe800030  sd          $zero, 0x30($s4)
    ctx->pc = 0x141b50u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 0));
label_141b54:
    // 0x141b54: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x141b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_141b58:
    // 0x141b58: 0xfe9e0048  sd          $fp, 0x48($s4)
    ctx->pc = 0x141b58u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 30));
label_141b5c:
    // 0x141b5c: 0xfe980040  sd          $t8, 0x40($s4)
    ctx->pc = 0x141b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 24));
label_141b60:
    // 0x141b60: 0xfe820058  sd          $v0, 0x58($s4)
    ctx->pc = 0x141b60u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 2));
label_141b64:
    // 0x141b64: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x141b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_141b68:
    // 0x141b68: 0xfe820050  sd          $v0, 0x50($s4)
    ctx->pc = 0x141b68u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 2));
label_141b6c:
    // 0x141b6c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x141b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_141b70:
    // 0x141b70: 0xfe820068  sd          $v0, 0x68($s4)
    ctx->pc = 0x141b70u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 104), GPR_U64(ctx, 2));
label_141b74:
    // 0x141b74: 0xfe8b0060  sd          $t3, 0x60($s4)
    ctx->pc = 0x141b74u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 11));
label_141b78:
    // 0x141b78: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x141b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_141b7c:
    // 0x141b7c: 0xfe820078  sd          $v0, 0x78($s4)
    ctx->pc = 0x141b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 2));
label_141b80:
    // 0x141b80: 0xfe8a0070  sd          $t2, 0x70($s4)
    ctx->pc = 0x141b80u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 10));
label_141b84:
    // 0x141b84: 0xae69004c  sw          $t1, 0x4C($s3)
    ctx->pc = 0x141b84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 9));
label_141b88:
    // 0x141b88: 0x26940080  addiu       $s4, $s4, 0x80
    ctx->pc = 0x141b88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_141b8c:
    // 0x141b8c: 0xae690048  sw          $t1, 0x48($s3)
    ctx->pc = 0x141b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 9));
label_141b90:
    // 0x141b90: 0xae690024  sw          $t1, 0x24($s3)
    ctx->pc = 0x141b90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 9));
label_141b94:
    // 0x141b94: 0xae690020  sw          $t1, 0x20($s3)
    ctx->pc = 0x141b94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 9));
label_141b98:
    // 0x141b98: 0x96690028  lhu         $t1, 0x28($s3)
    ctx->pc = 0x141b98u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
label_141b9c:
    // 0x141b9c: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x141b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141ba0:
    // 0x141ba0: 0x86620068  lh          $v0, 0x68($s3)
    ctx->pc = 0x141ba0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 104)));
label_141ba4:
    // 0x141ba4: 0x25299008  addiu       $t1, $t1, -0x6FF8
    ctx->pc = 0x141ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294938632));
label_141ba8:
    // 0x141ba8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x141ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_141bac:
    // 0x141bac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x141bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_141bb0:
    // 0x141bb0: 0x0  nop
    ctx->pc = 0x141bb0u;
    // NOP
label_141bb4:
    // 0x141bb4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x141bb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_141bb8:
    // 0x141bb8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x141bb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_141bbc:
    // 0x141bbc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x141bbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_141bc0:
    // 0x141bc0: 0xe7a102b0  swc1        $f1, 0x2B0($sp)
    ctx->pc = 0x141bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_141bc4:
    // 0x141bc4: 0x9669002a  lhu         $t1, 0x2A($s3)
    ctx->pc = 0x141bc4u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 42)));
label_141bc8:
    // 0x141bc8: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x141bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141bcc:
    // 0x141bcc: 0x8662006a  lh          $v0, 0x6A($s3)
    ctx->pc = 0x141bccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 106)));
label_141bd0:
    // 0x141bd0: 0x25298708  addiu       $t1, $t1, -0x78F8
    ctx->pc = 0x141bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294936328));
label_141bd4:
    // 0x141bd4: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x141bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_141bd8:
    // 0x141bd8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x141bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_141bdc:
    // 0x141bdc: 0x0  nop
    ctx->pc = 0x141bdcu;
    // NOP
label_141be0:
    // 0x141be0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x141be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_141be4:
    // 0x141be4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x141be4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_141be8:
    // 0x141be8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x141be8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_141bec:
    // 0x141bec: 0xe7a102b4  swc1        $f1, 0x2B4($sp)
    ctx->pc = 0x141becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 692), bits); }
label_141bf0:
    // 0x141bf0: 0x96690038  lhu         $t1, 0x38($s3)
    ctx->pc = 0x141bf0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_141bf4:
    // 0x141bf4: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x141bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141bf8:
    // 0x141bf8: 0x8662006c  lh          $v0, 0x6C($s3)
    ctx->pc = 0x141bf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 108)));
label_141bfc:
    // 0x141bfc: 0x25299008  addiu       $t1, $t1, -0x6FF8
    ctx->pc = 0x141bfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294938632));
label_141c00:
    // 0x141c00: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x141c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_141c04:
    // 0x141c04: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x141c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_141c08:
    // 0x141c08: 0x0  nop
    ctx->pc = 0x141c08u;
    // NOP
label_141c0c:
    // 0x141c0c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x141c0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_141c10:
    // 0x141c10: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x141c10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_141c14:
    // 0x141c14: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x141c14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_141c18:
    // 0x141c18: 0xe7a102c0  swc1        $f1, 0x2C0($sp)
    ctx->pc = 0x141c18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_141c1c:
    // 0x141c1c: 0x9669003a  lhu         $t1, 0x3A($s3)
    ctx->pc = 0x141c1cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
label_141c20:
    // 0x141c20: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x141c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141c24:
    // 0x141c24: 0x8662006e  lh          $v0, 0x6E($s3)
    ctx->pc = 0x141c24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 110)));
label_141c28:
    // 0x141c28: 0x25298708  addiu       $t1, $t1, -0x78F8
    ctx->pc = 0x141c28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294936328));
label_141c2c:
    // 0x141c2c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x141c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_141c30:
    // 0x141c30: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x141c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_141c34:
    // 0x141c34: 0x0  nop
    ctx->pc = 0x141c34u;
    // NOP
label_141c38:
    // 0x141c38: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x141c38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_141c3c:
    // 0x141c3c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x141c3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_141c40:
    // 0x141c40: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x141c40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_141c44:
    // 0x141c44: 0xe7a102c4  swc1        $f1, 0x2C4($sp)
    ctx->pc = 0x141c44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_141c48:
    // 0x141c48: 0x96690050  lhu         $t1, 0x50($s3)
    ctx->pc = 0x141c48u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
label_141c4c:
    // 0x141c4c: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x141c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141c50:
    // 0x141c50: 0x86620070  lh          $v0, 0x70($s3)
    ctx->pc = 0x141c50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 112)));
label_141c54:
    // 0x141c54: 0x25299008  addiu       $t1, $t1, -0x6FF8
    ctx->pc = 0x141c54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294938632));
label_141c58:
    // 0x141c58: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x141c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_141c5c:
    // 0x141c5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x141c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_141c60:
    // 0x141c60: 0x0  nop
    ctx->pc = 0x141c60u;
    // NOP
label_141c64:
    // 0x141c64: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x141c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_141c68:
    // 0x141c68: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x141c68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_141c6c:
    // 0x141c6c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x141c6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_141c70:
    // 0x141c70: 0xe7a102d0  swc1        $f1, 0x2D0($sp)
    ctx->pc = 0x141c70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_141c74:
    // 0x141c74: 0x96690052  lhu         $t1, 0x52($s3)
    ctx->pc = 0x141c74u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 82)));
label_141c78:
    // 0x141c78: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x141c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141c7c:
    // 0x141c7c: 0x86620072  lh          $v0, 0x72($s3)
    ctx->pc = 0x141c7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 114)));
label_141c80:
    // 0x141c80: 0x25298708  addiu       $t1, $t1, -0x78F8
    ctx->pc = 0x141c80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294936328));
label_141c84:
    // 0x141c84: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x141c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_141c88:
    // 0x141c88: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x141c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_141c8c:
    // 0x141c8c: 0x0  nop
    ctx->pc = 0x141c8cu;
    // NOP
label_141c90:
    // 0x141c90: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x141c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_141c94:
    // 0x141c94: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x141c94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_141c98:
    // 0x141c98: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x141c98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_141c9c:
    // 0x141c9c: 0xe7a102d4  swc1        $f1, 0x2D4($sp)
    ctx->pc = 0x141c9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 724), bits); }
label_141ca0:
    // 0x141ca0: 0x96690060  lhu         $t1, 0x60($s3)
    ctx->pc = 0x141ca0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 96)));
label_141ca4:
    // 0x141ca4: 0xc661004c  lwc1        $f1, 0x4C($s3)
    ctx->pc = 0x141ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141ca8:
    // 0x141ca8: 0x86620074  lh          $v0, 0x74($s3)
    ctx->pc = 0x141ca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 116)));
label_141cac:
    // 0x141cac: 0x25299008  addiu       $t1, $t1, -0x6FF8
    ctx->pc = 0x141cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294938632));
label_141cb0:
    // 0x141cb0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x141cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_141cb4:
    // 0x141cb4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x141cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_141cb8:
    // 0x141cb8: 0x0  nop
    ctx->pc = 0x141cb8u;
    // NOP
label_141cbc:
    // 0x141cbc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x141cbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_141cc0:
    // 0x141cc0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x141cc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_141cc4:
    // 0x141cc4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x141cc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_141cc8:
    // 0x141cc8: 0xe7a102e0  swc1        $f1, 0x2E0($sp)
    ctx->pc = 0x141cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
label_141ccc:
    // 0x141ccc: 0x96690062  lhu         $t1, 0x62($s3)
    ctx->pc = 0x141cccu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 98)));
label_141cd0:
    // 0x141cd0: 0xc661004c  lwc1        $f1, 0x4C($s3)
    ctx->pc = 0x141cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141cd4:
    // 0x141cd4: 0x86620076  lh          $v0, 0x76($s3)
    ctx->pc = 0x141cd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 118)));
label_141cd8:
    // 0x141cd8: 0x25298708  addiu       $t1, $t1, -0x78F8
    ctx->pc = 0x141cd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294936328));
label_141cdc:
    // 0x141cdc: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x141cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_141ce0:
    // 0x141ce0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x141ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_141ce4:
    // 0x141ce4: 0x0  nop
    ctx->pc = 0x141ce4u;
    // NOP
label_141ce8:
    // 0x141ce8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x141ce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_141cec:
    // 0x141cec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x141cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_141cf0:
    // 0x141cf0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x141cf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_141cf4:
    // 0x141cf4: 0xe7a002e4  swc1        $f0, 0x2E4($sp)
    ctx->pc = 0x141cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 740), bits); }
label_141cf8:
    // 0x141cf8: 0xfe880000  sd          $t0, 0x0($s4)
    ctx->pc = 0x141cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 8));
label_141cfc:
    // 0x141cfc: 0xae870008  sw          $a3, 0x8($s4)
    ctx->pc = 0x141cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 7));
label_141d00:
    // 0x141d00: 0xae86000c  sw          $a2, 0xC($s4)
    ctx->pc = 0x141d00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 6));
label_141d04:
    // 0x141d04: 0xfe850010  sd          $a1, 0x10($s4)
    ctx->pc = 0x141d04u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 5));
label_141d08:
    // 0x141d08: 0xfe840018  sd          $a0, 0x18($s4)
    ctx->pc = 0x141d08u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 4));
label_141d0c:
    // 0x141d0c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x141d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_141d10:
    // 0x141d10: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x141d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_141d14:
    // 0x141d14: 0xdfb202b0  ld          $s2, 0x2B0($sp)
    ctx->pc = 0x141d14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_141d18:
    // 0x141d18: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x141d18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_141d1c:
    // 0x141d1c: 0xae820038  sw          $v0, 0x38($s4)
    ctx->pc = 0x141d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
label_141d20:
    // 0x141d20: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x141d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_141d24:
    // 0x141d24: 0xfe920028  sd          $s2, 0x28($s4)
    ctx->pc = 0x141d24u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 18));
label_141d28:
    // 0x141d28: 0xde710028  ld          $s1, 0x28($s3)
    ctx->pc = 0x141d28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 40)));
label_141d2c:
    // 0x141d2c: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x141d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141d30:
    // 0x141d30: 0xdfb002c0  ld          $s0, 0x2C0($sp)
    ctx->pc = 0x141d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_141d34:
    // 0x141d34: 0xde6f0038  ld          $t7, 0x38($s3)
    ctx->pc = 0x141d34u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 19), 56)));
label_141d38:
    // 0x141d38: 0xfe910030  sd          $s1, 0x30($s4)
    ctx->pc = 0x141d38u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 17));
label_141d3c:
    // 0x141d3c: 0xe681003c  swc1        $f1, 0x3C($s4)
    ctx->pc = 0x141d3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
label_141d40:
    // 0x141d40: 0xfe900040  sd          $s0, 0x40($s4)
    ctx->pc = 0x141d40u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 16));
label_141d44:
    // 0x141d44: 0xfe8f0048  sd          $t7, 0x48($s4)
    ctx->pc = 0x141d44u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 15));
label_141d48:
    // 0x141d48: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x141d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141d4c:
    // 0x141d4c: 0xdfb202d0  ld          $s2, 0x2D0($sp)
    ctx->pc = 0x141d4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 720)));
label_141d50:
    // 0x141d50: 0xde710050  ld          $s1, 0x50($s3)
    ctx->pc = 0x141d50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 80)));
label_141d54:
    // 0x141d54: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x141d54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_141d58:
    // 0x141d58: 0xe6810054  swc1        $f1, 0x54($s4)
    ctx->pc = 0x141d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
label_141d5c:
    // 0x141d5c: 0xc661004c  lwc1        $f1, 0x4C($s3)
    ctx->pc = 0x141d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141d60:
    // 0x141d60: 0xde6f0060  ld          $t7, 0x60($s3)
    ctx->pc = 0x141d60u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 19), 96)));
label_141d64:
    // 0x141d64: 0xdfb002e0  ld          $s0, 0x2E0($sp)
    ctx->pc = 0x141d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 736)));
label_141d68:
    // 0x141d68: 0xfe920058  sd          $s2, 0x58($s4)
    ctx->pc = 0x141d68u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 18));
label_141d6c:
    // 0x141d6c: 0xfe910060  sd          $s1, 0x60($s4)
    ctx->pc = 0x141d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 17));
label_141d70:
    // 0x141d70: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x141d70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_141d74:
    // 0x141d74: 0xe681006c  swc1        $f1, 0x6C($s4)
    ctx->pc = 0x141d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 108), bits); }
label_141d78:
    // 0x141d78: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x141d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_141d7c:
    // 0x141d7c: 0xfe900070  sd          $s0, 0x70($s4)
    ctx->pc = 0x141d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 16));
label_141d80:
    // 0x141d80: 0xfe8f0078  sd          $t7, 0x78($s4)
    ctx->pc = 0x141d80u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 15));
label_141d84:
    // 0x141d84: 0x26940080  addiu       $s4, $s4, 0x80
    ctx->pc = 0x141d84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_141d88:
    // 0x141d88: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x141d88u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_141d8c:
    // 0x141d8c: 0xfe990008  sd          $t9, 0x8($s4)
    ctx->pc = 0x141d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 25));
label_141d90:
    // 0x141d90: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x141d90u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_141d94:
    // 0x141d94: 0x8c22f014  lw          $v0, -0xFEC($at)
    ctx->pc = 0x141d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
label_141d98:
    // 0x141d98: 0xdc420040  ld          $v0, 0x40($v0)
    ctx->pc = 0x141d98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 64)));
label_141d9c:
    // 0x141d9c: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x141d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_141da0:
    // 0x141da0: 0xfe9e0028  sd          $fp, 0x28($s4)
    ctx->pc = 0x141da0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 30));
label_141da4:
    // 0x141da4: 0xfe800020  sd          $zero, 0x20($s4)
    ctx->pc = 0x141da4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 0));
label_141da8:
    // 0x141da8: 0x1000046d  b           . + 4 + (0x46D << 2)
label_141dac:
    if (ctx->pc == 0x141DACu) {
        ctx->pc = 0x141DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141DA8u;
        // 0x141dac: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141DB0u;
        goto label_141db0;
    }
    ctx->pc = 0x141DA8u;
    {
        const bool branch_taken_0x141da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141DA8u;
        // 0x141dac: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141da8) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x141DB0u;
label_141db0:
    // 0x141db0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x141db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_141db4:
    // 0x141db4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x141db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_141db8:
    // 0x141db8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x141db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_141dbc:
    // 0x141dbc: 0x34028011  ori         $v0, $zero, 0x8011
    ctx->pc = 0x141dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32785);
label_141dc0:
    // 0x141dc0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x141dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_141dc4:
    // 0x141dc4: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x141dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_141dc8:
    // 0x141dc8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x141dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_141dcc:
    // 0x141dcc: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x141dccu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
label_141dd0:
    // 0x141dd0: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x141dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_141dd4:
    // 0x141dd4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x141dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_141dd8:
    // 0x141dd8: 0xfe830018  sd          $v1, 0x18($s4)
    ctx->pc = 0x141dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 3));
label_141ddc:
    // 0x141ddc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x141ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_141de0:
    // 0x141de0: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x141de0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_141de4:
    // 0x141de4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x141de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_141de8:
    // 0x141de8: 0xfe820028  sd          $v0, 0x28($s4)
    ctx->pc = 0x141de8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 2));
label_141dec:
    // 0x141dec: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x141decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
label_141df0:
    // 0x141df0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x141df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_141df4:
    // 0x141df4: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x141df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
label_141df8:
    // 0x141df8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x141df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_141dfc:
    // 0x141dfc: 0xfe820020  sd          $v0, 0x20($s4)
    ctx->pc = 0x141dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 2));
label_141e00:
    // 0x141e00: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x141e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_141e04:
    // 0x141e04: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x141e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_141e08:
    // 0x141e08: 0xfe830038  sd          $v1, 0x38($s4)
    ctx->pc = 0x141e08u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 56), GPR_U64(ctx, 3));
label_141e0c:
    // 0x141e0c: 0x34421001  ori         $v0, $v0, 0x1001
    ctx->pc = 0x141e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
label_141e10:
    // 0x141e10: 0xfe820030  sd          $v0, 0x30($s4)
    ctx->pc = 0x141e10u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 2));
label_141e14:
    // 0x141e14: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x141e14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954660)));
label_141e18:
    // 0x141e18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_141e1c:
    if (ctx->pc == 0x141E1Cu) {
        ctx->pc = 0x141E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E18u;
        // 0x141e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141E20u;
        goto label_141e20;
    }
    ctx->pc = 0x141E18u;
    {
        const bool branch_taken_0x141e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E18u;
        // 0x141e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141e18) {
            ctx->pc = 0x141E28u;
            goto label_141e28;
        }
    }
    ctx->pc = 0x141E20u;
label_141e20:
    // 0x141e20: 0x10000003  b           . + 4 + (0x3 << 2)
label_141e24:
    if (ctx->pc == 0x141E24u) {
        ctx->pc = 0x141E28u;
        goto label_141e28;
    }
    ctx->pc = 0x141E20u;
    {
        const bool branch_taken_0x141e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141e20) {
            ctx->pc = 0x141E30u;
            goto label_141e30;
        }
    }
    ctx->pc = 0x141E28u;
label_141e28:
    // 0x141e28: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x141e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_141e2c:
    // 0x141e2c: 0x0  nop
    ctx->pc = 0x141e2cu;
    // NOP
label_141e30:
    // 0x141e30: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x141e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_141e34:
    // 0x141e34: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x141e34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_141e38:
    // 0x141e38: 0xfe830048  sd          $v1, 0x48($s4)
    ctx->pc = 0x141e38u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 3));
label_141e3c:
    // 0x141e3c: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x141e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
label_141e40:
    // 0x141e40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x141e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_141e44:
    // 0x141e44: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x141e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_141e48:
    // 0x141e48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x141e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_141e4c:
    // 0x141e4c: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x141e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_141e50:
    // 0x141e50: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x141e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_141e54:
    // 0x141e54: 0xfe830040  sd          $v1, 0x40($s4)
    ctx->pc = 0x141e54u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 3));
label_141e58:
    // 0x141e58: 0x2402037c  addiu       $v0, $zero, 0x37C
    ctx->pc = 0x141e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
label_141e5c:
    // 0x141e5c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x141e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_141e60:
    // 0x141e60: 0xfe840058  sd          $a0, 0x58($s4)
    ctx->pc = 0x141e60u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 4));
label_141e64:
    // 0x141e64: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x141e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_141e68:
    // 0x141e68: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x141e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_141e6c:
    // 0x141e6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x141e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_141e70:
    // 0x141e70: 0xfe820050  sd          $v0, 0x50($s4)
    ctx->pc = 0x141e70u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 2));
label_141e74:
    // 0x141e74: 0x96650028  lhu         $a1, 0x28($s3)
    ctx->pc = 0x141e74u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
label_141e78:
    // 0x141e78: 0x86640068  lh          $a0, 0x68($s3)
    ctx->pc = 0x141e78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 104)));
label_141e7c:
    // 0x141e7c: 0x96630038  lhu         $v1, 0x38($s3)
    ctx->pc = 0x141e7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_141e80:
    // 0x141e80: 0x8662006c  lh          $v0, 0x6C($s3)
    ctx->pc = 0x141e80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 108)));
label_141e84:
    // 0x141e84: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x141e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_141e88:
    // 0x141e88: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x141e88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_141e8c:
    // 0x141e8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x141e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_141e90:
    // 0x141e90: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x141e90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_141e94:
    // 0x141e94: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_141e98:
    if (ctx->pc == 0x141E98u) {
        ctx->pc = 0x141E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E94u;
        // 0x141e98: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141E9Cu;
        goto label_141e9c;
    }
    ctx->pc = 0x141E94u;
    {
        const bool branch_taken_0x141e94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x141E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E94u;
        // 0x141e98: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141e94) {
            ctx->pc = 0x141EA0u;
            goto label_141ea0;
        }
    }
    ctx->pc = 0x141E9Cu;
label_141e9c:
    // 0x141e9c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x141e9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_141ea0:
    // 0x141ea0: 0x96660050  lhu         $a2, 0x50($s3)
    ctx->pc = 0x141ea0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
label_141ea4:
    // 0x141ea4: 0x86630070  lh          $v1, 0x70($s3)
    ctx->pc = 0x141ea4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 112)));
label_141ea8:
    // 0x141ea8: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x141ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_141eac:
    // 0x141eac: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x141eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_141eb0:
    // 0x141eb0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x141eb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_141eb4:
    // 0x141eb4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_141eb8:
    if (ctx->pc == 0x141EB8u) {
        ctx->pc = 0x141EBCu;
        goto label_141ebc;
    }
    ctx->pc = 0x141EB4u;
    {
        const bool branch_taken_0x141eb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141eb4) {
            ctx->pc = 0x141EC0u;
            goto label_141ec0;
        }
    }
    ctx->pc = 0x141EBCu;
label_141ebc:
    // 0x141ebc: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x141ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_141ec0:
    // 0x141ec0: 0x96660060  lhu         $a2, 0x60($s3)
    ctx->pc = 0x141ec0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 96)));
label_141ec4:
    // 0x141ec4: 0x86630074  lh          $v1, 0x74($s3)
    ctx->pc = 0x141ec4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 116)));
label_141ec8:
    // 0x141ec8: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x141ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_141ecc:
    // 0x141ecc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x141eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_141ed0:
    // 0x141ed0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x141ed0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_141ed4:
    // 0x141ed4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_141ed8:
    if (ctx->pc == 0x141ED8u) {
        ctx->pc = 0x141EDCu;
        goto label_141edc;
    }
    ctx->pc = 0x141ED4u;
    {
        const bool branch_taken_0x141ed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141ed4) {
            ctx->pc = 0x141EE0u;
            goto label_141ee0;
        }
    }
    ctx->pc = 0x141EDCu;
label_141edc:
    // 0x141edc: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x141edcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_141ee0:
    // 0x141ee0: 0x96660038  lhu         $a2, 0x38($s3)
    ctx->pc = 0x141ee0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_141ee4:
    // 0x141ee4: 0x8663006c  lh          $v1, 0x6C($s3)
    ctx->pc = 0x141ee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 108)));
label_141ee8:
    // 0x141ee8: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x141ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_141eec:
    // 0x141eec: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x141eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_141ef0:
    // 0x141ef0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x141ef0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_141ef4:
    // 0x141ef4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_141ef8:
    if (ctx->pc == 0x141EF8u) {
        ctx->pc = 0x141EFCu;
        goto label_141efc;
    }
    ctx->pc = 0x141EF4u;
    {
        const bool branch_taken_0x141ef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141ef4) {
            ctx->pc = 0x141F00u;
            goto label_141f00;
        }
    }
    ctx->pc = 0x141EFCu;
label_141efc:
    // 0x141efc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x141efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_141f00:
    // 0x141f00: 0x96660050  lhu         $a2, 0x50($s3)
    ctx->pc = 0x141f00u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
label_141f04:
    // 0x141f04: 0x86630070  lh          $v1, 0x70($s3)
    ctx->pc = 0x141f04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 112)));
label_141f08:
    // 0x141f08: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x141f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_141f0c:
    // 0x141f0c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x141f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_141f10:
    // 0x141f10: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x141f10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_141f14:
    // 0x141f14: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_141f18:
    if (ctx->pc == 0x141F18u) {
        ctx->pc = 0x141F1Cu;
        goto label_141f1c;
    }
    ctx->pc = 0x141F14u;
    {
        const bool branch_taken_0x141f14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141f14) {
            ctx->pc = 0x141F20u;
            goto label_141f20;
        }
    }
    ctx->pc = 0x141F1Cu;
label_141f1c:
    // 0x141f1c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x141f1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_141f20:
    // 0x141f20: 0x96660060  lhu         $a2, 0x60($s3)
    ctx->pc = 0x141f20u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 96)));
label_141f24:
    // 0x141f24: 0x86630074  lh          $v1, 0x74($s3)
    ctx->pc = 0x141f24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 116)));
label_141f28:
    // 0x141f28: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x141f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_141f2c:
    // 0x141f2c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x141f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_141f30:
    // 0x141f30: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x141f30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_141f34:
    // 0x141f34: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_141f38:
    if (ctx->pc == 0x141F38u) {
        ctx->pc = 0x141F3Cu;
        goto label_141f3c;
    }
    ctx->pc = 0x141F34u;
    {
        const bool branch_taken_0x141f34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141f34) {
            ctx->pc = 0x141F40u;
            goto label_141f40;
        }
    }
    ctx->pc = 0x141F3Cu;
label_141f3c:
    // 0x141f3c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x141f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_141f40:
    // 0x141f40: 0x9667002a  lhu         $a3, 0x2A($s3)
    ctx->pc = 0x141f40u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 42)));
label_141f44:
    // 0x141f44: 0x8663006a  lh          $v1, 0x6A($s3)
    ctx->pc = 0x141f44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 106)));
label_141f48:
    // 0x141f48: 0x9666003a  lhu         $a2, 0x3A($s3)
    ctx->pc = 0x141f48u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
label_141f4c:
    // 0x141f4c: 0x8662006e  lh          $v0, 0x6E($s3)
    ctx->pc = 0x141f4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 110)));
label_141f50:
    // 0x141f50: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x141f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_141f54:
    // 0x141f54: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x141f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_141f58:
    // 0x141f58: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x141f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_141f5c:
    // 0x141f5c: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x141f5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_141f60:
    // 0x141f60: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_141f64:
    if (ctx->pc == 0x141F64u) {
        ctx->pc = 0x141F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F60u;
        // 0x141f64: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141F68u;
        goto label_141f68;
    }
    ctx->pc = 0x141F60u;
    {
        const bool branch_taken_0x141f60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x141F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F60u;
        // 0x141f64: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f60) {
            ctx->pc = 0x141F70u;
            goto label_141f70;
        }
    }
    ctx->pc = 0x141F68u;
label_141f68:
    // 0x141f68: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x141f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_141f6c:
    // 0x141f6c: 0x0  nop
    ctx->pc = 0x141f6cu;
    // NOP
label_141f70:
    // 0x141f70: 0x96680052  lhu         $t0, 0x52($s3)
    ctx->pc = 0x141f70u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 82)));
label_141f74:
    // 0x141f74: 0x86670072  lh          $a3, 0x72($s3)
    ctx->pc = 0x141f74u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 114)));
label_141f78:
    // 0x141f78: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x141f78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_141f7c:
    // 0x141f7c: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x141f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_141f80:
    // 0x141f80: 0xe6082a  slt         $at, $a3, $a2
    ctx->pc = 0x141f80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_141f84:
    // 0x141f84: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_141f88:
    if (ctx->pc == 0x141F88u) {
        ctx->pc = 0x141F8Cu;
        goto label_141f8c;
    }
    ctx->pc = 0x141F84u;
    {
        const bool branch_taken_0x141f84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141f84) {
            ctx->pc = 0x141F90u;
            goto label_141f90;
        }
    }
    ctx->pc = 0x141F8Cu;
label_141f8c:
    // 0x141f8c: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x141f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_141f90:
    // 0x141f90: 0x96680062  lhu         $t0, 0x62($s3)
    ctx->pc = 0x141f90u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 98)));
label_141f94:
    // 0x141f94: 0x86670076  lh          $a3, 0x76($s3)
    ctx->pc = 0x141f94u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 118)));
label_141f98:
    // 0x141f98: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x141f98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_141f9c:
    // 0x141f9c: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x141f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_141fa0:
    // 0x141fa0: 0xe6082a  slt         $at, $a3, $a2
    ctx->pc = 0x141fa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_141fa4:
    // 0x141fa4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_141fa8:
    if (ctx->pc == 0x141FA8u) {
        ctx->pc = 0x141FACu;
        goto label_141fac;
    }
    ctx->pc = 0x141FA4u;
    {
        const bool branch_taken_0x141fa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141fa4) {
            ctx->pc = 0x141FB0u;
            goto label_141fb0;
        }
    }
    ctx->pc = 0x141FACu;
label_141fac:
    // 0x141fac: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x141facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_141fb0:
    // 0x141fb0: 0x9668003a  lhu         $t0, 0x3A($s3)
    ctx->pc = 0x141fb0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
label_141fb4:
    // 0x141fb4: 0x8667006e  lh          $a3, 0x6E($s3)
    ctx->pc = 0x141fb4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 110)));
label_141fb8:
    // 0x141fb8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x141fb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_141fbc:
    // 0x141fbc: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x141fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_141fc0:
    // 0x141fc0: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x141fc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_141fc4:
    // 0x141fc4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_141fc8:
    if (ctx->pc == 0x141FC8u) {
        ctx->pc = 0x141FCCu;
        goto label_141fcc;
    }
    ctx->pc = 0x141FC4u;
    {
        const bool branch_taken_0x141fc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141fc4) {
            ctx->pc = 0x141FD0u;
            goto label_141fd0;
        }
    }
    ctx->pc = 0x141FCCu;
label_141fcc:
    // 0x141fcc: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x141fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_141fd0:
    // 0x141fd0: 0x96680052  lhu         $t0, 0x52($s3)
    ctx->pc = 0x141fd0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 82)));
label_141fd4:
    // 0x141fd4: 0x86670072  lh          $a3, 0x72($s3)
    ctx->pc = 0x141fd4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 114)));
label_141fd8:
    // 0x141fd8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x141fd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_141fdc:
    // 0x141fdc: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x141fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_141fe0:
    // 0x141fe0: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x141fe0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_141fe4:
    // 0x141fe4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_141fe8:
    if (ctx->pc == 0x141FE8u) {
        ctx->pc = 0x141FECu;
        goto label_141fec;
    }
    ctx->pc = 0x141FE4u;
    {
        const bool branch_taken_0x141fe4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141fe4) {
            ctx->pc = 0x141FF0u;
            goto label_141ff0;
        }
    }
    ctx->pc = 0x141FECu;
label_141fec:
    // 0x141fec: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x141fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_141ff0:
    // 0x141ff0: 0x96680062  lhu         $t0, 0x62($s3)
    ctx->pc = 0x141ff0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 98)));
label_141ff4:
    // 0x141ff4: 0x86670076  lh          $a3, 0x76($s3)
    ctx->pc = 0x141ff4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 118)));
label_141ff8:
    // 0x141ff8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x141ff8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_141ffc:
    // 0x141ffc: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x141ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_142000:
    // 0x142000: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x142000u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_142004:
    // 0x142004: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_142008:
    if (ctx->pc == 0x142008u) {
        ctx->pc = 0x14200Cu;
        goto label_14200c;
    }
    ctx->pc = 0x142004u;
    {
        const bool branch_taken_0x142004 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x142004) {
            ctx->pc = 0x142010u;
            goto label_142010;
        }
    }
    ctx->pc = 0x14200Cu;
label_14200c:
    // 0x14200c: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x14200cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_142010:
    // 0x142010: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x142010u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_142014:
    // 0x142014: 0x28c17000  slti        $at, $a2, 0x7000
    ctx->pc = 0x142014u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)28672) ? 1 : 0);
label_142018:
    // 0x142018: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_14201c:
    if (ctx->pc == 0x14201Cu) {
        ctx->pc = 0x142020u;
        goto label_142020;
    }
    ctx->pc = 0x142018u;
    {
        const bool branch_taken_0x142018 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x142018) {
            ctx->pc = 0x142028u;
            goto label_142028;
        }
    }
    ctx->pc = 0x142020u;
label_142020:
    // 0x142020: 0x64057000  daddiu      $a1, $zero, 0x7000
    ctx->pc = 0x142020u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)28672);
label_142024:
    // 0x142024: 0x0  nop
    ctx->pc = 0x142024u;
    // NOP
label_142028:
    // 0x142028: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x142028u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_14202c:
    // 0x14202c: 0x28c17000  slti        $at, $a2, 0x7000
    ctx->pc = 0x14202cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)28672) ? 1 : 0);
label_142030:
    // 0x142030: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_142034:
    if (ctx->pc == 0x142034u) {
        ctx->pc = 0x142038u;
        goto label_142038;
    }
    ctx->pc = 0x142030u;
    {
        const bool branch_taken_0x142030 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x142030) {
            ctx->pc = 0x142040u;
            goto label_142040;
        }
    }
    ctx->pc = 0x142038u;
label_142038:
    // 0x142038: 0x64047000  daddiu      $a0, $zero, 0x7000
    ctx->pc = 0x142038u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)28672);
label_14203c:
    // 0x14203c: 0x0  nop
    ctx->pc = 0x14203cu;
    // NOP
label_142040:
    // 0x142040: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x142040u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_142044:
    // 0x142044: 0x34018ff1  ori         $at, $zero, 0x8FF1
    ctx->pc = 0x142044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36849);
label_142048:
    // 0x142048: 0xc1082a  slt         $at, $a2, $at
    ctx->pc = 0x142048u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_14204c:
    // 0x14204c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_142050:
    if (ctx->pc == 0x142050u) {
        ctx->pc = 0x142054u;
        goto label_142054;
    }
    ctx->pc = 0x14204Cu;
    {
        const bool branch_taken_0x14204c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14204c) {
            ctx->pc = 0x142060u;
            goto label_142060;
        }
    }
    ctx->pc = 0x142054u;
label_142054:
    // 0x142054: 0x34058ff0  ori         $a1, $zero, 0x8FF0
    ctx->pc = 0x142054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36848);
label_142058:
    // 0x142058: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x142058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_14205c:
    // 0x14205c: 0x0  nop
    ctx->pc = 0x14205cu;
    // NOP
label_142060:
    // 0x142060: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x142060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_142064:
    // 0x142064: 0x34018ff1  ori         $at, $zero, 0x8FF1
    ctx->pc = 0x142064u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36849);
label_142068:
    // 0x142068: 0xc1082a  slt         $at, $a2, $at
    ctx->pc = 0x142068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_14206c:
    // 0x14206c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_142070:
    if (ctx->pc == 0x142070u) {
        ctx->pc = 0x142074u;
        goto label_142074;
    }
    ctx->pc = 0x14206Cu;
    {
        const bool branch_taken_0x14206c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14206c) {
            ctx->pc = 0x142080u;
            goto label_142080;
        }
    }
    ctx->pc = 0x142074u;
label_142074:
    // 0x142074: 0x34048ff0  ori         $a0, $zero, 0x8FF0
    ctx->pc = 0x142074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36848);
label_142078:
    // 0x142078: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x142078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_14207c:
    // 0x14207c: 0x0  nop
    ctx->pc = 0x14207cu;
    // NOP
label_142080:
    // 0x142080: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x142080u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_142084:
    // 0x142084: 0x28c17900  slti        $at, $a2, 0x7900
    ctx->pc = 0x142084u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)30976) ? 1 : 0);
label_142088:
    // 0x142088: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_14208c:
    if (ctx->pc == 0x14208Cu) {
        ctx->pc = 0x142090u;
        goto label_142090;
    }
    ctx->pc = 0x142088u;
    {
        const bool branch_taken_0x142088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x142088) {
            ctx->pc = 0x142098u;
            goto label_142098;
        }
    }
    ctx->pc = 0x142090u;
label_142090:
    // 0x142090: 0x64037900  daddiu      $v1, $zero, 0x7900
    ctx->pc = 0x142090u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)30976);
label_142094:
    // 0x142094: 0x0  nop
    ctx->pc = 0x142094u;
    // NOP
label_142098:
    // 0x142098: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x142098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14209c:
    // 0x14209c: 0x28c17900  slti        $at, $a2, 0x7900
    ctx->pc = 0x14209cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)30976) ? 1 : 0);
label_1420a0:
    // 0x1420a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1420a4:
    if (ctx->pc == 0x1420A4u) {
        ctx->pc = 0x1420A8u;
        goto label_1420a8;
    }
    ctx->pc = 0x1420A0u;
    {
        const bool branch_taken_0x1420a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1420a0) {
            ctx->pc = 0x1420B0u;
            goto label_1420b0;
        }
    }
    ctx->pc = 0x1420A8u;
label_1420a8:
    // 0x1420a8: 0x64027900  daddiu      $v0, $zero, 0x7900
    ctx->pc = 0x1420a8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)30976);
label_1420ac:
    // 0x1420ac: 0x0  nop
    ctx->pc = 0x1420acu;
    // NOP
label_1420b0:
    // 0x1420b0: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x1420b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1420b4:
    // 0x1420b4: 0x340186f1  ori         $at, $zero, 0x86F1
    ctx->pc = 0x1420b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34545);
label_1420b8:
    // 0x1420b8: 0xc1082a  slt         $at, $a2, $at
    ctx->pc = 0x1420b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_1420bc:
    // 0x1420bc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1420c0:
    if (ctx->pc == 0x1420C0u) {
        ctx->pc = 0x1420C4u;
        goto label_1420c4;
    }
    ctx->pc = 0x1420BCu;
    {
        const bool branch_taken_0x1420bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1420bc) {
            ctx->pc = 0x1420D0u;
            goto label_1420d0;
        }
    }
    ctx->pc = 0x1420C4u;
label_1420c4:
    // 0x1420c4: 0x340386f0  ori         $v1, $zero, 0x86F0
    ctx->pc = 0x1420c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34544);
label_1420c8:
    // 0x1420c8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1420c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1420cc:
    // 0x1420cc: 0x0  nop
    ctx->pc = 0x1420ccu;
    // NOP
label_1420d0:
    // 0x1420d0: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1420d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1420d4:
    // 0x1420d4: 0x340186f1  ori         $at, $zero, 0x86F1
    ctx->pc = 0x1420d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34545);
label_1420d8:
    // 0x1420d8: 0xc1082a  slt         $at, $a2, $at
    ctx->pc = 0x1420d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_1420dc:
    // 0x1420dc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1420e0:
    if (ctx->pc == 0x1420E0u) {
        ctx->pc = 0x1420E4u;
        goto label_1420e4;
    }
    ctx->pc = 0x1420DCu;
    {
        const bool branch_taken_0x1420dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1420dc) {
            ctx->pc = 0x1420F0u;
            goto label_1420f0;
        }
    }
    ctx->pc = 0x1420E4u;
label_1420e4:
    // 0x1420e4: 0x340286f0  ori         $v0, $zero, 0x86F0
    ctx->pc = 0x1420e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34544);
label_1420e8:
    // 0x1420e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1420e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1420ec:
    // 0x1420ec: 0x0  nop
    ctx->pc = 0x1420ecu;
    // NOP
label_1420f0:
    // 0x1420f0: 0x24849000  addiu       $a0, $a0, -0x7000
    ctx->pc = 0x1420f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938624));
label_1420f4:
    // 0x1420f4: 0x24a59000  addiu       $a1, $a1, -0x7000
    ctx->pc = 0x1420f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938624));
label_1420f8:
    // 0x1420f8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1420f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1420fc:
    // 0x1420fc: 0x24638700  addiu       $v1, $v1, -0x7900
    ctx->pc = 0x1420fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_142100:
    // 0x142100: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x142100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_142104:
    // 0x142104: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x142104u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_142108:
    // 0x142108: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x142108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_14210c:
    // 0x14210c: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x14210cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
label_142110:
    // 0x142110: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x142110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_142114:
    // 0x142114: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x142114u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_142118:
    // 0x142118: 0x24428700  addiu       $v0, $v0, -0x7900
    ctx->pc = 0x142118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
label_14211c:
    // 0x14211c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x14211cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_142120:
    // 0x142120: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x142120u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_142124:
    // 0x142124: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x142124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_142128:
    // 0x142128: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x142128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14212c:
    // 0x14212c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x14212cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_142130:
    // 0x142130: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x142130u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_142134:
    // 0x142134: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x142134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_142138:
    // 0x142138: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x142138u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_14213c:
    // 0x14213c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x14213cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_142140:
    // 0x142140: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x142140u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_142144:
    // 0x142144: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x142144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_142148:
    // 0x142148: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x142148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_14214c:
    // 0x14214c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x14214cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_142150:
    // 0x142150: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x142150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_142154:
    // 0x142154: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x142154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_142158:
    // 0x142158: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x142158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_14215c:
    // 0x14215c: 0xfe830068  sd          $v1, 0x68($s4)
    ctx->pc = 0x14215cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 104), GPR_U64(ctx, 3));
label_142160:
    // 0x142160: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x142160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_142164:
    // 0x142164: 0xfe840060  sd          $a0, 0x60($s4)
    ctx->pc = 0x142164u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 4));
label_142168:
    // 0x142168: 0x24050116  addiu       $a1, $zero, 0x116
    ctx->pc = 0x142168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
label_14216c:
    // 0x14216c: 0x24047900  addiu       $a0, $zero, 0x7900
    ctx->pc = 0x14216cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
label_142170:
    // 0x142170: 0xfe820078  sd          $v0, 0x78($s4)
    ctx->pc = 0x142170u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 2));
label_142174:
    // 0x142174: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x142174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_142178:
    // 0x142178: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x142178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14217c:
    // 0x14217c: 0x24047000  addiu       $a0, $zero, 0x7000
    ctx->pc = 0x14217cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_142180:
    // 0x142180: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x142180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_142184:
    // 0x142184: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x142184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_142188:
    // 0x142188: 0xfe840070  sd          $a0, 0x70($s4)
    ctx->pc = 0x142188u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 4));
label_14218c:
    // 0x14218c: 0xfe800088  sd          $zero, 0x88($s4)
    ctx->pc = 0x14218cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 136), GPR_U64(ctx, 0));
label_142190:
    // 0x142190: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x142190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
label_142194:
    // 0x142194: 0xfe850080  sd          $a1, 0x80($s4)
    ctx->pc = 0x142194u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 128), GPR_U64(ctx, 5));
label_142198:
    // 0x142198: 0x34868080  ori         $a2, $a0, 0x8080
    ctx->pc = 0x142198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
label_14219c:
    // 0x14219c: 0xfe870098  sd          $a3, 0x98($s4)
    ctx->pc = 0x14219cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 152), GPR_U64(ctx, 7));
label_1421a0:
    // 0x1421a0: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x1421a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
label_1421a4:
    // 0x1421a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1421a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1421a8:
    // 0x1421a8: 0xfe860090  sd          $a2, 0x90($s4)
    ctx->pc = 0x1421a8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 144), GPR_U64(ctx, 6));
label_1421ac:
    // 0x1421ac: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1421acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_1421b0:
    // 0x1421b0: 0xfe8500a8  sd          $a1, 0xA8($s4)
    ctx->pc = 0x1421b0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 168), GPR_U64(ctx, 5));
label_1421b4:
    // 0x1421b4: 0xfe8400a0  sd          $a0, 0xA0($s4)
    ctx->pc = 0x1421b4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 160), GPR_U64(ctx, 4));
label_1421b8:
    // 0x1421b8: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x1421b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1421bc:
    // 0x1421bc: 0xfe8700b8  sd          $a3, 0xB8($s4)
    ctx->pc = 0x1421bcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 184), GPR_U64(ctx, 7));
label_1421c0:
    // 0x1421c0: 0x3c040e08  lui         $a0, 0xE08
    ctx->pc = 0x1421c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3592 << 16));
label_1421c4:
    // 0x1421c4: 0xfe8700b0  sd          $a3, 0xB0($s4)
    ctx->pc = 0x1421c4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 176), GPR_U64(ctx, 7));
label_1421c8:
    // 0x1421c8: 0x34862008  ori         $a2, $a0, 0x2008
    ctx->pc = 0x1421c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8200);
label_1421cc:
    // 0x1421cc: 0xfe8500c8  sd          $a1, 0xC8($s4)
    ctx->pc = 0x1421ccu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 200), GPR_U64(ctx, 5));
label_1421d0:
    // 0x1421d0: 0x3c0400df  lui         $a0, 0xDF
    ctx->pc = 0x1421d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)223 << 16));
label_1421d4:
    // 0x1421d4: 0xfe8600c0  sd          $a2, 0xC0($s4)
    ctx->pc = 0x1421d4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 192), GPR_U64(ctx, 6));
label_1421d8:
    // 0x1421d8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1421d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_1421dc:
    // 0x1421dc: 0xfe8700d8  sd          $a3, 0xD8($s4)
    ctx->pc = 0x1421dcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 216), GPR_U64(ctx, 7));
label_1421e0:
    // 0x1421e0: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x1421e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
label_1421e4:
    // 0x1421e4: 0xfe8700d0  sd          $a3, 0xD0($s4)
    ctx->pc = 0x1421e4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 208), GPR_U64(ctx, 7));
label_1421e8:
    // 0x1421e8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1421e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1421ec:
    // 0x1421ec: 0xfe8300e8  sd          $v1, 0xE8($s4)
    ctx->pc = 0x1421ecu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 232), GPR_U64(ctx, 3));
label_1421f0:
    // 0x1421f0: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1421f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1421f4:
    // 0x1421f4: 0xfe8400e0  sd          $a0, 0xE0($s4)
    ctx->pc = 0x1421f4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 224), GPR_U64(ctx, 4));
label_1421f8:
    // 0x1421f8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1421f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1421fc:
    // 0x1421fc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1421fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_142200:
    // 0x142200: 0xfe8500f8  sd          $a1, 0xF8($s4)
    ctx->pc = 0x142200u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 248), GPR_U64(ctx, 5));
label_142204:
    // 0x142204: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x142204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_142208:
    // 0x142208: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x142208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_14220c:
    // 0x14220c: 0xfe8400f0  sd          $a0, 0xF0($s4)
    ctx->pc = 0x14220cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 240), GPR_U64(ctx, 4));
label_142210:
    // 0x142210: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x142210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_142214:
    // 0x142214: 0xfe830108  sd          $v1, 0x108($s4)
    ctx->pc = 0x142214u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 264), GPR_U64(ctx, 3));
label_142218:
    // 0x142218: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x142218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_14221c:
    // 0x14221c: 0xfe840100  sd          $a0, 0x100($s4)
    ctx->pc = 0x14221cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 256), GPR_U64(ctx, 4));
label_142220:
    // 0x142220: 0x3c03e400  lui         $v1, 0xE400
    ctx->pc = 0x142220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58368 << 16));
label_142224:
    // 0x142224: 0xfe820118  sd          $v0, 0x118($s4)
    ctx->pc = 0x142224u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 280), GPR_U64(ctx, 2));
label_142228:
    // 0x142228: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x142228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_14222c:
    // 0x14222c: 0x8c26f014  lw          $a2, -0xFEC($at)
    ctx->pc = 0x14222cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
label_142230:
    // 0x142230: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x142230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_142234:
    // 0x142234: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142238:
    // 0x142238: 0x70022b89  pcpyld      $a1, $zero, $v0
    ctx->pc = 0x142238u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_14223c:
    // 0x14223c: 0x121942  srl         $v1, $s2, 5
    ctx->pc = 0x14223cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
label_142240:
    // 0x142240: 0x3c024214  lui         $v0, 0x4214
    ctx->pc = 0x142240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16916 << 16));
label_142244:
    // 0x142244: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x142244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_142248:
    // 0x142248: 0x34422160  ori         $v0, $v0, 0x2160
    ctx->pc = 0x142248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8544);
label_14224c:
    // 0x14224c: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x14224cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_142250:
    // 0x142250: 0xdcc60040  ld          $a2, 0x40($a2)
    ctx->pc = 0x142250u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 6), 64)));
label_142254:
    // 0x142254: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x142254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_142258:
    // 0x142258: 0x34431421  ori         $v1, $v0, 0x1421
    ctx->pc = 0x142258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5153);
label_14225c:
    // 0x14225c: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x14225cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_142260:
    // 0x142260: 0xfe860110  sd          $a2, 0x110($s4)
    ctx->pc = 0x142260u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 272), GPR_U64(ctx, 6));
label_142264:
    // 0x142264: 0x26940120  addiu       $s4, $s4, 0x120
    ctx->pc = 0x142264u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
label_142268:
    // 0x142268: 0xfe850000  sd          $a1, 0x0($s4)
    ctx->pc = 0x142268u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 5));
label_14226c:
    // 0x14226c: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x14226cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
label_142270:
    // 0x142270: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x142270u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
label_142274:
    // 0x142274: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x142274u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_142278:
    // 0x142278: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x142278u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_14227c:
    // 0x14227c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x14227cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_142280:
    // 0x142280: 0xc04cfd8  jal         func_133F60
label_142284:
    if (ctx->pc == 0x142284u) {
        ctx->pc = 0x142284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142280u;
        // 0x142284: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142288u;
        goto label_142288;
    }
    ctx->pc = 0x142280u;
    SET_GPR_U32(ctx, 31, 0x142288u);
    ctx->pc = 0x142284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142280u;
    // 0x142284: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x142280u, 0x142288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142288u;
label_142288:
    // 0x142288: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x142288u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_14228c:
    // 0x14228c: 0x3c0f8000  lui         $t7, 0x8000
    ctx->pc = 0x14228cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32768 << 16));
label_142290:
    // 0x142290: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x142290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_142294:
    // 0x142294: 0xde750018  ld          $s5, 0x18($s3)
    ctx->pc = 0x142294u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_142298:
    // 0x142298: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x142298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_14229c:
    // 0x14229c: 0x34048007  ori         $a0, $zero, 0x8007
    ctx->pc = 0x14229cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32775);
label_1422a0:
    // 0x1422a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1422a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1422a4:
    // 0x1422a4: 0x34178002  ori         $s7, $zero, 0x8002
    ctx->pc = 0x1422a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
label_1422a8:
    // 0x1422a8: 0x827025  or          $t6, $a0, $v0
    ctx->pc = 0x1422a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1422ac:
    // 0x1422ac: 0x324307ff  andi        $v1, $s2, 0x7FF
    ctx->pc = 0x1422acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_1422b0:
    // 0x1422b0: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x1422b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
label_1422b4:
    // 0x1422b4: 0x2e2c025  or          $t8, $s7, $v0
    ctx->pc = 0x1422b4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
label_1422b8:
    // 0x1422b8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1422b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1422bc:
    // 0x1422bc: 0x2419000e  addiu       $t9, $zero, 0xE
    ctx->pc = 0x1422bcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1422c0:
    // 0x1422c0: 0xae8f0020  sw          $t7, 0x20($s4)
    ctx->pc = 0x1422c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 15));
label_1422c4:
    // 0x1422c4: 0x70046b89  pcpyld      $t5, $zero, $a0
    ctx->pc = 0x1422c4u;
    SET_GPR_VEC(ctx, 13, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
label_1422c8:
    // 0x1422c8: 0xae8f0038  sw          $t7, 0x38($s4)
    ctx->pc = 0x1422c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 15));
label_1422cc:
    // 0x1422cc: 0x3c0400df  lui         $a0, 0xDF
    ctx->pc = 0x1422ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)223 << 16));
label_1422d0:
    // 0x1422d0: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x1422d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_1422d4:
    // 0x1422d4: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1422d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_1422d8:
    // 0x1422d8: 0xfe950028  sd          $s5, 0x28($s4)
    ctx->pc = 0x1422d8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 21));
label_1422dc:
    // 0x1422dc: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x1422dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
label_1422e0:
    // 0x1422e0: 0xde720028  ld          $s2, 0x28($s3)
    ctx->pc = 0x1422e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 19), 40)));
label_1422e4:
    // 0x1422e4: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x1422e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1422e8:
    // 0x1422e8: 0xde710030  ld          $s1, 0x30($s3)
    ctx->pc = 0x1422e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 48)));
label_1422ec:
    // 0x1422ec: 0x856025  or          $t4, $a0, $a1
    ctx->pc = 0x1422ecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1422f0:
    // 0x1422f0: 0xde700038  ld          $s0, 0x38($s3)
    ctx->pc = 0x1422f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 56)));
label_1422f4:
    // 0x1422f4: 0x2404037c  addiu       $a0, $zero, 0x37C
    ctx->pc = 0x1422f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
label_1422f8:
    // 0x1422f8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1422f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_1422fc:
    // 0x1422fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1422fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_142300:
    // 0x142300: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x142300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_142304:
    // 0x142304: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x142304u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_142308:
    // 0x142308: 0x3484c00a  ori         $a0, $a0, 0xC00A
    ctx->pc = 0x142308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49162);
label_14230c:
    // 0x14230c: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x14230cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_142310:
    // 0x142310: 0x855825  or          $t3, $a0, $a1
    ctx->pc = 0x142310u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_142314:
    // 0x142314: 0x24057900  addiu       $a1, $zero, 0x7900
    ctx->pc = 0x142314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
label_142318:
    // 0x142318: 0x24047000  addiu       $a0, $zero, 0x7000
    ctx->pc = 0x142318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_14231c:
    // 0x14231c: 0xfe920030  sd          $s2, 0x30($s4)
    ctx->pc = 0x14231cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 18));
label_142320:
    // 0x142320: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x142320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_142324:
    // 0x142324: 0xe680003c  swc1        $f0, 0x3C($s4)
    ctx->pc = 0x142324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
label_142328:
    // 0x142328: 0x855025  or          $t2, $a0, $a1
    ctx->pc = 0x142328u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_14232c:
    // 0x14232c: 0xfe910040  sd          $s1, 0x40($s4)
    ctx->pc = 0x14232cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 17));
label_142330:
    // 0x142330: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x142330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
label_142334:
    // 0x142334: 0xfe900048  sd          $s0, 0x48($s4)
    ctx->pc = 0x142334u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 16));
label_142338:
    // 0x142338: 0x348917fd  ori         $t1, $a0, 0x17FD
    ctx->pc = 0x142338u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6141);
label_14233c:
    // 0x14233c: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x14233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_142340:
    // 0x142340: 0xde750040  ld          $s5, 0x40($s3)
    ctx->pc = 0x142340u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 19), 64)));
label_142344:
    // 0x142344: 0xde720050  ld          $s2, 0x50($s3)
    ctx->pc = 0x142344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 19), 80)));
label_142348:
    // 0x142348: 0x3c043900  lui         $a0, 0x3900
    ctx->pc = 0x142348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14592 << 16));
label_14234c:
    // 0x14234c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14234cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_142350:
    // 0x142350: 0x3c04e400  lui         $a0, 0xE400
    ctx->pc = 0x142350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58368 << 16));
label_142354:
    // 0x142354: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x142354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_142358:
    // 0x142358: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x142358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_14235c:
    // 0x14235c: 0xae8f0050  sw          $t7, 0x50($s4)
    ctx->pc = 0x14235cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 15));
label_142360:
    // 0x142360: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x142360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_142364:
    // 0x142364: 0xe6810054  swc1        $f1, 0x54($s4)
    ctx->pc = 0x142364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
label_142368:
    // 0x142368: 0x3c044214  lui         $a0, 0x4214
    ctx->pc = 0x142368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16916 << 16));
label_14236c:
    // 0x14236c: 0xc661004c  lwc1        $f1, 0x4C($s3)
    ctx->pc = 0x14236cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_142370:
    // 0x142370: 0xde710058  ld          $s1, 0x58($s3)
    ctx->pc = 0x142370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 88)));
label_142374:
    // 0x142374: 0xde700060  ld          $s0, 0x60($s3)
    ctx->pc = 0x142374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 96)));
label_142378:
    // 0x142378: 0x34862160  ori         $a2, $a0, 0x2160
    ctx->pc = 0x142378u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8544);
label_14237c:
    // 0x14237c: 0x70053b89  pcpyld      $a3, $zero, $a1
    ctx->pc = 0x14237cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
label_142380:
    // 0x142380: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x142380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
label_142384:
    // 0x142384: 0x34851421  ori         $a1, $a0, 0x1421
    ctx->pc = 0x142384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5153);
label_142388:
    // 0x142388: 0x2404fdf7  addiu       $a0, $zero, -0x209
    ctx->pc = 0x142388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966775));
label_14238c:
    // 0x14238c: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x14238cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
label_142390:
    // 0x142390: 0xfe950058  sd          $s5, 0x58($s4)
    ctx->pc = 0x142390u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 21));
label_142394:
    // 0x142394: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x142394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_142398:
    // 0x142398: 0xfe920060  sd          $s2, 0x60($s4)
    ctx->pc = 0x142398u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 18));
label_14239c:
    // 0x14239c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x14239cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1423a0:
    // 0x1423a0: 0xae8f0068  sw          $t7, 0x68($s4)
    ctx->pc = 0x1423a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 15));
label_1423a4:
    // 0x1423a4: 0x3b03c  dsll32      $s6, $v1, 0
    ctx->pc = 0x1423a4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) << (32 + 0));
label_1423a8:
    // 0x1423a8: 0xe681006c  swc1        $f1, 0x6C($s4)
    ctx->pc = 0x1423a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 108), bits); }
label_1423ac:
    // 0x1423ac: 0x3c036402  lui         $v1, 0x6402
    ctx->pc = 0x1423acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25602 << 16));
label_1423b0:
    // 0x1423b0: 0xfe910070  sd          $s1, 0x70($s4)
    ctx->pc = 0x1423b0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 17));
label_1423b4:
    // 0x1423b4: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1423b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_1423b8:
    // 0x1423b8: 0xfe900078  sd          $s0, 0x78($s4)
    ctx->pc = 0x1423b8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 16));
label_1423bc:
    // 0x1423bc: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x1423bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
label_1423c0:
    // 0x1423c0: 0x96820030  lhu         $v0, 0x30($s4)
    ctx->pc = 0x1423c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
label_1423c4:
    // 0x1423c4: 0x96900048  lhu         $s0, 0x48($s4)
    ctx->pc = 0x1423c4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 72)));
label_1423c8:
    // 0x1423c8: 0x968f0060  lhu         $t7, 0x60($s4)
    ctx->pc = 0x1423c8u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 96)));
label_1423cc:
    // 0x1423cc: 0x96960078  lhu         $s6, 0x78($s4)
    ctx->pc = 0x1423ccu;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 120)));
label_1423d0:
    // 0x1423d0: 0x96950032  lhu         $s5, 0x32($s4)
    ctx->pc = 0x1423d0u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 50)));
label_1423d4:
    // 0x1423d4: 0x9692004a  lhu         $s2, 0x4A($s4)
    ctx->pc = 0x1423d4u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 74)));
label_1423d8:
    // 0x1423d8: 0x96910062  lhu         $s1, 0x62($s4)
    ctx->pc = 0x1423d8u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 98)));
label_1423dc:
    // 0x1423dc: 0x50b821  addu        $s7, $v0, $s0
    ctx->pc = 0x1423dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1423e0:
    // 0x1423e0: 0x1f7b821  addu        $s7, $t7, $s7
    ctx->pc = 0x1423e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 23)));
label_1423e4:
    // 0x1423e4: 0x9690007a  lhu         $s0, 0x7A($s4)
    ctx->pc = 0x1423e4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 122)));
label_1423e8:
    // 0x1423e8: 0x2d7b021  addu        $s6, $s6, $s7
    ctx->pc = 0x1423e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
label_1423ec:
    // 0x1423ec: 0x866f0068  lh          $t7, 0x68($s3)
    ctx->pc = 0x1423ecu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 104)));
label_1423f0:
    // 0x1423f0: 0x16b083  sra         $s6, $s6, 2
    ctx->pc = 0x1423f0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 22), 2));
label_1423f4:
    // 0x1423f4: 0x2b2a821  addu        $s5, $s5, $s2
    ctx->pc = 0x1423f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_1423f8:
    // 0x1423f8: 0x569023  subu        $s2, $v0, $s6
    ctx->pc = 0x1423f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1423fc:
    // 0x1423fc: 0x2358821  addu        $s1, $s1, $s5
    ctx->pc = 0x1423fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_142400:
    // 0x142400: 0x129103  sra         $s2, $s2, 4
    ctx->pc = 0x142400u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 4));
label_142404:
    // 0x142404: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x142404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_142408:
    // 0x142408: 0x1f28821  addu        $s1, $t7, $s2
    ctx->pc = 0x142408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
label_14240c:
    // 0x14240c: 0x107883  sra         $t7, $s0, 2
    ctx->pc = 0x14240cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 16), 2));
label_142410:
    // 0x142410: 0x3230ffff  andi        $s0, $s1, 0xFFFF
    ctx->pc = 0x142410u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_142414:
    // 0x142414: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x142414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_142418:
    // 0x142418: 0xa6820030  sh          $v0, 0x30($s4)
    ctx->pc = 0x142418u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 48), (uint16_t)GPR_U32(ctx, 2));
label_14241c:
    // 0x14241c: 0x96820032  lhu         $v0, 0x32($s4)
    ctx->pc = 0x14241cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 50)));
label_142420:
    // 0x142420: 0x8670006a  lh          $s0, 0x6A($s3)
    ctx->pc = 0x142420u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 106)));
label_142424:
    // 0x142424: 0x4f8823  subu        $s1, $v0, $t7
    ctx->pc = 0x142424u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_142428:
    // 0x142428: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x142428u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
label_14242c:
    // 0x14242c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x14242cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_142430:
    // 0x142430: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x142430u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_142434:
    // 0x142434: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x142434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_142438:
    // 0x142438: 0xa6820032  sh          $v0, 0x32($s4)
    ctx->pc = 0x142438u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 50), (uint16_t)GPR_U32(ctx, 2));
label_14243c:
    // 0x14243c: 0x96820048  lhu         $v0, 0x48($s4)
    ctx->pc = 0x14243cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 72)));
label_142440:
    // 0x142440: 0x8670006c  lh          $s0, 0x6C($s3)
    ctx->pc = 0x142440u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 108)));
label_142444:
    // 0x142444: 0x568823  subu        $s1, $v0, $s6
    ctx->pc = 0x142444u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_142448:
    // 0x142448: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x142448u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
label_14244c:
    // 0x14244c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x14244cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_142450:
    // 0x142450: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x142450u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_142454:
    // 0x142454: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x142454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_142458:
    // 0x142458: 0xa6820048  sh          $v0, 0x48($s4)
    ctx->pc = 0x142458u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 72), (uint16_t)GPR_U32(ctx, 2));
label_14245c:
    // 0x14245c: 0x9682004a  lhu         $v0, 0x4A($s4)
    ctx->pc = 0x14245cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 74)));
label_142460:
    // 0x142460: 0x8670006e  lh          $s0, 0x6E($s3)
    ctx->pc = 0x142460u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 110)));
label_142464:
    // 0x142464: 0x4f8823  subu        $s1, $v0, $t7
    ctx->pc = 0x142464u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_142468:
    // 0x142468: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x142468u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
label_14246c:
    // 0x14246c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x14246cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_142470:
    // 0x142470: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x142470u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_142474:
    // 0x142474: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x142474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_142478:
    // 0x142478: 0xa682004a  sh          $v0, 0x4A($s4)
    ctx->pc = 0x142478u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 74), (uint16_t)GPR_U32(ctx, 2));
label_14247c:
    // 0x14247c: 0x96820060  lhu         $v0, 0x60($s4)
    ctx->pc = 0x14247cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 96)));
label_142480:
    // 0x142480: 0x86700070  lh          $s0, 0x70($s3)
    ctx->pc = 0x142480u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 112)));
label_142484:
    // 0x142484: 0x568823  subu        $s1, $v0, $s6
    ctx->pc = 0x142484u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_142488:
    // 0x142488: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x142488u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
label_14248c:
    // 0x14248c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x14248cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_142490:
    // 0x142490: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x142490u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_142494:
    // 0x142494: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x142494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_142498:
    // 0x142498: 0xa6820060  sh          $v0, 0x60($s4)
    ctx->pc = 0x142498u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 96), (uint16_t)GPR_U32(ctx, 2));
label_14249c:
    // 0x14249c: 0x96820062  lhu         $v0, 0x62($s4)
    ctx->pc = 0x14249cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 98)));
label_1424a0:
    // 0x1424a0: 0x86700072  lh          $s0, 0x72($s3)
    ctx->pc = 0x1424a0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 114)));
label_1424a4:
    // 0x1424a4: 0x4f8823  subu        $s1, $v0, $t7
    ctx->pc = 0x1424a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_1424a8:
    // 0x1424a8: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x1424a8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
label_1424ac:
    // 0x1424ac: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1424acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1424b0:
    // 0x1424b0: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x1424b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1424b4:
    // 0x1424b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1424b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1424b8:
    // 0x1424b8: 0xa6820062  sh          $v0, 0x62($s4)
    ctx->pc = 0x1424b8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 98), (uint16_t)GPR_U32(ctx, 2));
label_1424bc:
    // 0x1424bc: 0x96820078  lhu         $v0, 0x78($s4)
    ctx->pc = 0x1424bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 120)));
label_1424c0:
    // 0x1424c0: 0x86700074  lh          $s0, 0x74($s3)
    ctx->pc = 0x1424c0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 116)));
label_1424c4:
    // 0x1424c4: 0x568823  subu        $s1, $v0, $s6
    ctx->pc = 0x1424c4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1424c8:
    // 0x1424c8: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x1424c8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
label_1424cc:
    // 0x1424cc: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1424ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1424d0:
    // 0x1424d0: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x1424d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1424d4:
    // 0x1424d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1424d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1424d8:
    // 0x1424d8: 0xa6820078  sh          $v0, 0x78($s4)
    ctx->pc = 0x1424d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 120), (uint16_t)GPR_U32(ctx, 2));
label_1424dc:
    // 0x1424dc: 0x9682007a  lhu         $v0, 0x7A($s4)
    ctx->pc = 0x1424dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 122)));
label_1424e0:
    // 0x1424e0: 0x86700076  lh          $s0, 0x76($s3)
    ctx->pc = 0x1424e0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 118)));
label_1424e4:
    // 0x1424e4: 0x4f7823  subu        $t7, $v0, $t7
    ctx->pc = 0x1424e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_1424e8:
    // 0x1424e8: 0xf7903  sra         $t7, $t7, 4
    ctx->pc = 0x1424e8u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 4));
label_1424ec:
    // 0x1424ec: 0x20f7821  addu        $t7, $s0, $t7
    ctx->pc = 0x1424ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
label_1424f0:
    // 0x1424f0: 0x31efffff  andi        $t7, $t7, 0xFFFF
    ctx->pc = 0x1424f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
label_1424f4:
    // 0x1424f4: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x1424f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_1424f8:
    // 0x1424f8: 0xa682007a  sh          $v0, 0x7A($s4)
    ctx->pc = 0x1424f8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 122), (uint16_t)GPR_U32(ctx, 2));
label_1424fc:
    // 0x1424fc: 0x26940080  addiu       $s4, $s4, 0x80
    ctx->pc = 0x1424fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_142500:
    // 0x142500: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x142500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_142504:
    // 0x142504: 0xfe8e0000  sd          $t6, 0x0($s4)
    ctx->pc = 0x142504u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 14));
label_142508:
    // 0x142508: 0xfe990008  sd          $t9, 0x8($s4)
    ctx->pc = 0x142508u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 25));
label_14250c:
    // 0x14250c: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x14250cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_142510:
    // 0x142510: 0x8c22f014  lw          $v0, -0xFEC($at)
    ctx->pc = 0x142510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
label_142514:
    // 0x142514: 0xdc420020  ld          $v0, 0x20($v0)
    ctx->pc = 0x142514u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 32)));
label_142518:
    // 0x142518: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x142518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_14251c:
    // 0x14251c: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x14251cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_142520:
    // 0x142520: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x142520u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_142524:
    // 0x142524: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x142524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_142528:
    // 0x142528: 0xfe820028  sd          $v0, 0x28($s4)
    ctx->pc = 0x142528u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 2));
label_14252c:
    // 0x14252c: 0xfe8c0020  sd          $t4, 0x20($s4)
    ctx->pc = 0x14252cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 12));
label_142530:
    // 0x142530: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x142530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_142534:
    // 0x142534: 0xfe820038  sd          $v0, 0x38($s4)
    ctx->pc = 0x142534u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 56), GPR_U64(ctx, 2));
label_142538:
    // 0x142538: 0xfe800030  sd          $zero, 0x30($s4)
    ctx->pc = 0x142538u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 0));
label_14253c:
    // 0x14253c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x14253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_142540:
    // 0x142540: 0xfe9e0048  sd          $fp, 0x48($s4)
    ctx->pc = 0x142540u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 30));
label_142544:
    // 0x142544: 0xfe8b0040  sd          $t3, 0x40($s4)
    ctx->pc = 0x142544u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 11));
label_142548:
    // 0x142548: 0xfe820058  sd          $v0, 0x58($s4)
    ctx->pc = 0x142548u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 2));
label_14254c:
    // 0x14254c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x14254cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_142550:
    // 0x142550: 0xfe820050  sd          $v0, 0x50($s4)
    ctx->pc = 0x142550u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 2));
label_142554:
    // 0x142554: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x142554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_142558:
    // 0x142558: 0xfe820068  sd          $v0, 0x68($s4)
    ctx->pc = 0x142558u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 104), GPR_U64(ctx, 2));
label_14255c:
    // 0x14255c: 0xfe8a0060  sd          $t2, 0x60($s4)
    ctx->pc = 0x14255cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 10));
label_142560:
    // 0x142560: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x142560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_142564:
    // 0x142564: 0xfe820078  sd          $v0, 0x78($s4)
    ctx->pc = 0x142564u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 2));
label_142568:
    // 0x142568: 0xfe890070  sd          $t1, 0x70($s4)
    ctx->pc = 0x142568u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 9));
label_14256c:
    // 0x14256c: 0xae68004c  sw          $t0, 0x4C($s3)
    ctx->pc = 0x14256cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 8));
label_142570:
    // 0x142570: 0x26940080  addiu       $s4, $s4, 0x80
    ctx->pc = 0x142570u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_142574:
    // 0x142574: 0xae680048  sw          $t0, 0x48($s3)
    ctx->pc = 0x142574u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 8));
label_142578:
    // 0x142578: 0xae680024  sw          $t0, 0x24($s3)
    ctx->pc = 0x142578u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 8));
label_14257c:
    // 0x14257c: 0xae680020  sw          $t0, 0x20($s3)
    ctx->pc = 0x14257cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 8));
label_142580:
    // 0x142580: 0x96680028  lhu         $t0, 0x28($s3)
    ctx->pc = 0x142580u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
label_142584:
    // 0x142584: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x142584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_142588:
    // 0x142588: 0x86620068  lh          $v0, 0x68($s3)
    ctx->pc = 0x142588u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 104)));
label_14258c:
    // 0x14258c: 0x25089008  addiu       $t0, $t0, -0x6FF8
    ctx->pc = 0x14258cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938632));
label_142590:
    // 0x142590: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x142590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_142594:
    // 0x142594: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x142594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_142598:
    // 0x142598: 0x0  nop
    ctx->pc = 0x142598u;
    // NOP
label_14259c:
    // 0x14259c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x14259cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1425a0:
    // 0x1425a0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1425a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1425a4:
    // 0x1425a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1425a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1425a8:
    // 0x1425a8: 0xe7a10270  swc1        $f1, 0x270($sp)
    ctx->pc = 0x1425a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_1425ac:
    // 0x1425ac: 0x9668002a  lhu         $t0, 0x2A($s3)
    ctx->pc = 0x1425acu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 42)));
label_1425b0:
    // 0x1425b0: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x1425b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1425b4:
    // 0x1425b4: 0x8662006a  lh          $v0, 0x6A($s3)
    ctx->pc = 0x1425b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 106)));
label_1425b8:
    // 0x1425b8: 0x25088708  addiu       $t0, $t0, -0x78F8
    ctx->pc = 0x1425b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936328));
label_1425bc:
    // 0x1425bc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1425bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1425c0:
    // 0x1425c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1425c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1425c4:
    // 0x1425c4: 0x0  nop
    ctx->pc = 0x1425c4u;
    // NOP
label_1425c8:
    // 0x1425c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1425c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1425cc:
    // 0x1425cc: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1425ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1425d0:
    // 0x1425d0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1425d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1425d4:
    // 0x1425d4: 0xe7a10274  swc1        $f1, 0x274($sp)
    ctx->pc = 0x1425d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_1425d8:
    // 0x1425d8: 0x96680038  lhu         $t0, 0x38($s3)
    ctx->pc = 0x1425d8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_1425dc:
    // 0x1425dc: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x1425dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1425e0:
    // 0x1425e0: 0x8662006c  lh          $v0, 0x6C($s3)
    ctx->pc = 0x1425e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 108)));
label_1425e4:
    // 0x1425e4: 0x25089008  addiu       $t0, $t0, -0x6FF8
    ctx->pc = 0x1425e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938632));
label_1425e8:
    // 0x1425e8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1425e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1425ec:
    // 0x1425ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1425ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1425f0:
    // 0x1425f0: 0x0  nop
    ctx->pc = 0x1425f0u;
    // NOP
label_1425f4:
    // 0x1425f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1425f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1425f8:
    // 0x1425f8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1425f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1425fc:
    // 0x1425fc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1425fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_142600:
    // 0x142600: 0xe7a10280  swc1        $f1, 0x280($sp)
    ctx->pc = 0x142600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_142604:
    // 0x142604: 0x9668003a  lhu         $t0, 0x3A($s3)
    ctx->pc = 0x142604u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
label_142608:
    // 0x142608: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x142608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14260c:
    // 0x14260c: 0x8662006e  lh          $v0, 0x6E($s3)
    ctx->pc = 0x14260cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 110)));
label_142610:
    // 0x142610: 0x25088708  addiu       $t0, $t0, -0x78F8
    ctx->pc = 0x142610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936328));
label_142614:
    // 0x142614: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x142614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_142618:
    // 0x142618: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x142618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14261c:
    // 0x14261c: 0x0  nop
    ctx->pc = 0x14261cu;
    // NOP
label_142620:
    // 0x142620: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x142620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_142624:
    // 0x142624: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x142624u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_142628:
    // 0x142628: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x142628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_14262c:
    // 0x14262c: 0xe7a10284  swc1        $f1, 0x284($sp)
    ctx->pc = 0x14262cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_142630:
    // 0x142630: 0x96680050  lhu         $t0, 0x50($s3)
    ctx->pc = 0x142630u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
label_142634:
    // 0x142634: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x142634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_142638:
    // 0x142638: 0x86620070  lh          $v0, 0x70($s3)
    ctx->pc = 0x142638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 112)));
label_14263c:
    // 0x14263c: 0x25089008  addiu       $t0, $t0, -0x6FF8
    ctx->pc = 0x14263cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938632));
label_142640:
    // 0x142640: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x142640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_142644:
    // 0x142644: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x142644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_142648:
    // 0x142648: 0x0  nop
    ctx->pc = 0x142648u;
    // NOP
label_14264c:
    // 0x14264c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x14264cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_142650:
    // 0x142650: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x142650u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_142654:
    // 0x142654: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x142654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_142658:
    // 0x142658: 0xe7a10290  swc1        $f1, 0x290($sp)
    ctx->pc = 0x142658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_14265c:
    // 0x14265c: 0x96680052  lhu         $t0, 0x52($s3)
    ctx->pc = 0x14265cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 82)));
label_142660:
    // 0x142660: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x142660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_142664:
    // 0x142664: 0x86620072  lh          $v0, 0x72($s3)
    ctx->pc = 0x142664u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 114)));
label_142668:
    // 0x142668: 0x25088708  addiu       $t0, $t0, -0x78F8
    ctx->pc = 0x142668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936328));
label_14266c:
    // 0x14266c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x14266cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_142670:
    // 0x142670: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x142670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_142674:
    // 0x142674: 0x0  nop
    ctx->pc = 0x142674u;
    // NOP
label_142678:
    // 0x142678: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x142678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_14267c:
    // 0x14267c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x14267cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_142680:
    // 0x142680: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x142680u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_142684:
    // 0x142684: 0xe7a10294  swc1        $f1, 0x294($sp)
    ctx->pc = 0x142684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
label_142688:
    // 0x142688: 0x96680060  lhu         $t0, 0x60($s3)
    ctx->pc = 0x142688u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 96)));
label_14268c:
    // 0x14268c: 0xc661004c  lwc1        $f1, 0x4C($s3)
    ctx->pc = 0x14268cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_142690:
    // 0x142690: 0x86620074  lh          $v0, 0x74($s3)
    ctx->pc = 0x142690u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 116)));
label_142694:
    // 0x142694: 0x25089008  addiu       $t0, $t0, -0x6FF8
    ctx->pc = 0x142694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938632));
label_142698:
    // 0x142698: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x142698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_14269c:
    // 0x14269c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14269cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1426a0:
    // 0x1426a0: 0x0  nop
    ctx->pc = 0x1426a0u;
    // NOP
label_1426a4:
    // 0x1426a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1426a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1426a8:
    // 0x1426a8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1426a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1426ac:
    // 0x1426ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1426acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1426b0:
    // 0x1426b0: 0xe7a102a0  swc1        $f1, 0x2A0($sp)
    ctx->pc = 0x1426b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_1426b4:
    // 0x1426b4: 0x96680062  lhu         $t0, 0x62($s3)
    ctx->pc = 0x1426b4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 98)));
label_1426b8:
    // 0x1426b8: 0xc661004c  lwc1        $f1, 0x4C($s3)
    ctx->pc = 0x1426b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1426bc:
    // 0x1426bc: 0x86620076  lh          $v0, 0x76($s3)
    ctx->pc = 0x1426bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 118)));
label_1426c0:
    // 0x1426c0: 0x25088708  addiu       $t0, $t0, -0x78F8
    ctx->pc = 0x1426c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936328));
label_1426c4:
    // 0x1426c4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1426c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1426c8:
    // 0x1426c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1426c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1426cc:
    // 0x1426cc: 0x0  nop
    ctx->pc = 0x1426ccu;
    // NOP
label_1426d0:
    // 0x1426d0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1426d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1426d4:
    // 0x1426d4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1426d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1426d8:
    // 0x1426d8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1426d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1426dc:
    // 0x1426dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1426dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1426e0:
    // 0x1426e0: 0xe7a002a4  swc1        $f0, 0x2A4($sp)
    ctx->pc = 0x1426e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_1426e4:
    // 0x1426e4: 0xfe870000  sd          $a3, 0x0($s4)
    ctx->pc = 0x1426e4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 7));
label_1426e8:
    // 0x1426e8: 0xae860008  sw          $a2, 0x8($s4)
    ctx->pc = 0x1426e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
label_1426ec:
    // 0x1426ec: 0xae85000c  sw          $a1, 0xC($s4)
    ctx->pc = 0x1426ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 5));
label_1426f0:
    // 0x1426f0: 0xfe840010  sd          $a0, 0x10($s4)
    ctx->pc = 0x1426f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 4));
label_1426f4:
    // 0x1426f4: 0xfe830018  sd          $v1, 0x18($s4)
    ctx->pc = 0x1426f4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 3));
label_1426f8:
    // 0x1426f8: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1426f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1426fc:
    // 0x1426fc: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1426fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_142700:
    // 0x142700: 0xdfb50270  ld          $s5, 0x270($sp)
    ctx->pc = 0x142700u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_142704:
    // 0x142704: 0xae8f0020  sw          $t7, 0x20($s4)
    ctx->pc = 0x142704u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 15));
label_142708:
    // 0x142708: 0xae8f0038  sw          $t7, 0x38($s4)
    ctx->pc = 0x142708u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 15));
label_14270c:
    // 0x14270c: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x14270cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_142710:
    // 0x142710: 0xfe950028  sd          $s5, 0x28($s4)
    ctx->pc = 0x142710u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 21));
label_142714:
    // 0x142714: 0xde720028  ld          $s2, 0x28($s3)
    ctx->pc = 0x142714u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 19), 40)));
label_142718:
    // 0x142718: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x142718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14271c:
    // 0x14271c: 0xdfb10280  ld          $s1, 0x280($sp)
    ctx->pc = 0x14271cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_142720:
    // 0x142720: 0xde700038  ld          $s0, 0x38($s3)
    ctx->pc = 0x142720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 56)));
label_142724:
    // 0x142724: 0xfe920030  sd          $s2, 0x30($s4)
    ctx->pc = 0x142724u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 18));
label_142728:
    // 0x142728: 0xe680003c  swc1        $f0, 0x3C($s4)
    ctx->pc = 0x142728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
label_14272c:
    // 0x14272c: 0xfe910040  sd          $s1, 0x40($s4)
    ctx->pc = 0x14272cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 17));
label_142730:
    // 0x142730: 0xfe900048  sd          $s0, 0x48($s4)
    ctx->pc = 0x142730u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 16));
label_142734:
    // 0x142734: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x142734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_142738:
    // 0x142738: 0xdfb50290  ld          $s5, 0x290($sp)
    ctx->pc = 0x142738u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_14273c:
    // 0x14273c: 0xde720050  ld          $s2, 0x50($s3)
    ctx->pc = 0x14273cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 19), 80)));
label_142740:
    // 0x142740: 0xae8f0050  sw          $t7, 0x50($s4)
    ctx->pc = 0x142740u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 15));
label_142744:
    // 0x142744: 0xe6810054  swc1        $f1, 0x54($s4)
    ctx->pc = 0x142744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
label_142748:
    // 0x142748: 0xc661004c  lwc1        $f1, 0x4C($s3)
    ctx->pc = 0x142748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14274c:
    // 0x14274c: 0xde700060  ld          $s0, 0x60($s3)
    ctx->pc = 0x14274cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 96)));
label_142750:
    // 0x142750: 0xdfb102a0  ld          $s1, 0x2A0($sp)
    ctx->pc = 0x142750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_142754:
    // 0x142754: 0xfe950058  sd          $s5, 0x58($s4)
    ctx->pc = 0x142754u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 21));
label_142758:
    // 0x142758: 0xfe920060  sd          $s2, 0x60($s4)
    ctx->pc = 0x142758u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 18));
label_14275c:
    // 0x14275c: 0xae8f0068  sw          $t7, 0x68($s4)
    ctx->pc = 0x14275cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 15));
label_142760:
    // 0x142760: 0xe681006c  swc1        $f1, 0x6C($s4)
    ctx->pc = 0x142760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 108), bits); }
label_142764:
    // 0x142764: 0xfe910070  sd          $s1, 0x70($s4)
    ctx->pc = 0x142764u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 17));
label_142768:
    // 0x142768: 0xfe900078  sd          $s0, 0x78($s4)
    ctx->pc = 0x142768u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 16));
label_14276c:
    // 0x14276c: 0x26940080  addiu       $s4, $s4, 0x80
    ctx->pc = 0x14276cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_142770:
    // 0x142770: 0xfe980000  sd          $t8, 0x0($s4)
    ctx->pc = 0x142770u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 24));
label_142774:
    // 0x142774: 0xfe990008  sd          $t9, 0x8($s4)
    ctx->pc = 0x142774u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 25));
label_142778:
    // 0x142778: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x142778u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_14277c:
    // 0x14277c: 0x8c22f014  lw          $v0, -0xFEC($at)
    ctx->pc = 0x14277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
label_142780:
    // 0x142780: 0xdc420040  ld          $v0, 0x40($v0)
    ctx->pc = 0x142780u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 64)));
label_142784:
    // 0x142784: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x142784u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_142788:
    // 0x142788: 0xfe9e0028  sd          $fp, 0x28($s4)
    ctx->pc = 0x142788u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 30));
label_14278c:
    // 0x14278c: 0xfe800020  sd          $zero, 0x20($s4)
    ctx->pc = 0x14278cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 0));
label_142790:
    // 0x142790: 0x100001f3  b           . + 4 + (0x1F3 << 2)
label_142794:
    if (ctx->pc == 0x142794u) {
        ctx->pc = 0x142794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142790u;
        // 0x142794: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142798u;
        goto label_142798;
    }
    ctx->pc = 0x142790u;
    {
        const bool branch_taken_0x142790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142790u;
        // 0x142794: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142790) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x142798u;
label_142798:
    // 0x142798: 0x3c029400  lui         $v0, 0x9400
    ctx->pc = 0x142798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37888 << 16));
label_14279c:
    // 0x14279c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x14279cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1427a0:
    // 0x1427a0: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1427a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_1427a4:
    // 0x1427a4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1427a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1427a8:
    // 0x1427a8: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1427a8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_1427ac:
    // 0x1427ac: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1427acu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1427b0:
    // 0x1427b0: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x1427b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
label_1427b4:
    // 0x1427b4: 0x3c033434  lui         $v1, 0x3434
    ctx->pc = 0x1427b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13364 << 16));
label_1427b8:
    // 0x1427b8: 0x30450010  andi        $a1, $v0, 0x10
    ctx->pc = 0x1427b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1427bc:
    // 0x1427bc: 0x34643160  ori         $a0, $v1, 0x3160
    ctx->pc = 0x1427bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12640);
label_1427c0:
    // 0x1427c0: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x1427c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_1427c4:
    // 0x1427c4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1427c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1427c8:
    // 0x1427c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1427c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1427cc:
    // 0x1427cc: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x1427ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
label_1427d0:
    // 0x1427d0: 0xa683000c  sh          $v1, 0xC($s4)
    ctx->pc = 0x1427d0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 3));
label_1427d4:
    // 0x1427d4: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x1427d4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_1427d8:
    // 0x1427d8: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x1427d8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_1427dc:
    // 0x1427dc: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x1427dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1427e0:
    // 0x1427e0: 0xc04cfd8  jal         func_133F60
label_1427e4:
    if (ctx->pc == 0x1427E4u) {
        ctx->pc = 0x1427E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427E0u;
        // 0x1427e4: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1427E8u;
        goto label_1427e8;
    }
    ctx->pc = 0x1427E0u;
    SET_GPR_U32(ctx, 31, 0x1427E8u);
    ctx->pc = 0x1427E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1427E0u;
    // 0x1427e4: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x1427E0u, 0x1427E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1427E8u;
label_1427e8:
    // 0x1427e8: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x1427e8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_1427ec:
    // 0x1427ec: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1427ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1427f0:
    // 0x1427f0: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x1427f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_1427f4:
    // 0x1427f4: 0xde650020  ld          $a1, 0x20($s3)
    ctx->pc = 0x1427f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 32)));
label_1427f8:
    // 0x1427f8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x1427f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1427fc:
    // 0x1427fc: 0xae840020  sw          $a0, 0x20($s4)
    ctx->pc = 0x1427fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 4));
label_142800:
    // 0x142800: 0xae830028  sw          $v1, 0x28($s4)
    ctx->pc = 0x142800u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
label_142804:
    // 0x142804: 0xfe850030  sd          $a1, 0x30($s4)
    ctx->pc = 0x142804u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 5));
label_142808:
    // 0x142808: 0xae820038  sw          $v0, 0x38($s4)
    ctx->pc = 0x142808u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
label_14280c:
    // 0x14280c: 0xde620028  ld          $v0, 0x28($s3)
    ctx->pc = 0x14280cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 40)));
label_142810:
    // 0x142810: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x142810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_142814:
    // 0x142814: 0xde650038  ld          $a1, 0x38($s3)
    ctx->pc = 0x142814u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 56)));
label_142818:
    // 0x142818: 0xfe820040  sd          $v0, 0x40($s4)
    ctx->pc = 0x142818u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 2));
label_14281c:
    // 0x14281c: 0xae840048  sw          $a0, 0x48($s4)
    ctx->pc = 0x14281cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 4));
label_142820:
    // 0x142820: 0xfe850050  sd          $a1, 0x50($s4)
    ctx->pc = 0x142820u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 5));
label_142824:
    // 0x142824: 0x100001ce  b           . + 4 + (0x1CE << 2)
label_142828:
    if (ctx->pc == 0x142828u) {
        ctx->pc = 0x142828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142824u;
        // 0x142828: 0x26940060  addiu       $s4, $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14282Cu;
        goto label_14282c;
    }
    ctx->pc = 0x142824u;
    {
        const bool branch_taken_0x142824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142824u;
        // 0x142828: 0x26940060  addiu       $s4, $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142824) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x14282Cu;
label_14282c:
    // 0x14282c: 0x0  nop
    ctx->pc = 0x14282cu;
    // NOP
label_142830:
    // 0x142830: 0x3c02b400  lui         $v0, 0xB400
    ctx->pc = 0x142830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46080 << 16));
label_142834:
    // 0x142834: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x142834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_142838:
    // 0x142838: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x142838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_14283c:
    // 0x14283c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x14283cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142840:
    // 0x142840: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x142840u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_142844:
    // 0x142844: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x142844u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_142848:
    // 0x142848: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x142848u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
label_14284c:
    // 0x14284c: 0x3c033434  lui         $v1, 0x3434
    ctx->pc = 0x14284cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13364 << 16));
label_142850:
    // 0x142850: 0x30450010  andi        $a1, $v0, 0x10
    ctx->pc = 0x142850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_142854:
    // 0x142854: 0x34643160  ori         $a0, $v1, 0x3160
    ctx->pc = 0x142854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12640);
label_142858:
    // 0x142858: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x142858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_14285c:
    // 0x14285c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x14285cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_142860:
    // 0x142860: 0x24030434  addiu       $v1, $zero, 0x434
    ctx->pc = 0x142860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1076));
label_142864:
    // 0x142864: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x142864u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
label_142868:
    // 0x142868: 0xa683000c  sh          $v1, 0xC($s4)
    ctx->pc = 0x142868u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 3));
label_14286c:
    // 0x14286c: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x14286cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_142870:
    // 0x142870: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x142870u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_142874:
    // 0x142874: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x142874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_142878:
    // 0x142878: 0xc04cfd8  jal         func_133F60
label_14287c:
    if (ctx->pc == 0x14287Cu) {
        ctx->pc = 0x14287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142878u;
        // 0x14287c: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142880u;
        goto label_142880;
    }
    ctx->pc = 0x142878u;
    SET_GPR_U32(ctx, 31, 0x142880u);
    ctx->pc = 0x14287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142878u;
    // 0x14287c: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x142878u, 0x142880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142880u;
label_142880:
    // 0x142880: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x142880u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_142884:
    // 0x142884: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x142884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_142888:
    // 0x142888: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x142888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_14288c:
    // 0x14288c: 0xde650020  ld          $a1, 0x20($s3)
    ctx->pc = 0x14288cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 32)));
label_142890:
    // 0x142890: 0xae830020  sw          $v1, 0x20($s4)
    ctx->pc = 0x142890u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
label_142894:
    // 0x142894: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x142894u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_142898:
    // 0x142898: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x142898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_14289c:
    // 0x14289c: 0xde640028  ld          $a0, 0x28($s3)
    ctx->pc = 0x14289cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 40)));
label_1428a0:
    // 0x1428a0: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x1428a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_1428a4:
    // 0x1428a4: 0xfe850030  sd          $a1, 0x30($s4)
    ctx->pc = 0x1428a4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 5));
label_1428a8:
    // 0x1428a8: 0xae830038  sw          $v1, 0x38($s4)
    ctx->pc = 0x1428a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 3));
label_1428ac:
    // 0x1428ac: 0xfe840040  sd          $a0, 0x40($s4)
    ctx->pc = 0x1428acu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 4));
label_1428b0:
    // 0x1428b0: 0xae820048  sw          $v0, 0x48($s4)
    ctx->pc = 0x1428b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 2));
label_1428b4:
    // 0x1428b4: 0xde650038  ld          $a1, 0x38($s3)
    ctx->pc = 0x1428b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 56)));
label_1428b8:
    // 0x1428b8: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x1428b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_1428bc:
    // 0x1428bc: 0xde640040  ld          $a0, 0x40($s3)
    ctx->pc = 0x1428bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 64)));
label_1428c0:
    // 0x1428c0: 0xfe850050  sd          $a1, 0x50($s4)
    ctx->pc = 0x1428c0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 5));
label_1428c4:
    // 0x1428c4: 0xae830058  sw          $v1, 0x58($s4)
    ctx->pc = 0x1428c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 3));
label_1428c8:
    // 0x1428c8: 0xfe840060  sd          $a0, 0x60($s4)
    ctx->pc = 0x1428c8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 4));
label_1428cc:
    // 0x1428cc: 0x100001a4  b           . + 4 + (0x1A4 << 2)
label_1428d0:
    if (ctx->pc == 0x1428D0u) {
        ctx->pc = 0x1428D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428CCu;
        // 0x1428d0: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1428D4u;
        goto label_1428d4;
    }
    ctx->pc = 0x1428CCu;
    {
        const bool branch_taken_0x1428cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1428D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428CCu;
        // 0x1428d0: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428cc) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x1428D4u;
label_1428d4:
    // 0x1428d4: 0x0  nop
    ctx->pc = 0x1428d4u;
    // NOP
label_1428d8:
    // 0x1428d8: 0x3c02b400  lui         $v0, 0xB400
    ctx->pc = 0x1428d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46080 << 16));
label_1428dc:
    // 0x1428dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1428dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1428e0:
    // 0x1428e0: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1428e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_1428e4:
    // 0x1428e4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1428e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1428e8:
    // 0x1428e8: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1428e8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_1428ec:
    // 0x1428ec: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1428ecu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1428f0:
    // 0x1428f0: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x1428f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
label_1428f4:
    // 0x1428f4: 0x3c034314  lui         $v1, 0x4314
    ctx->pc = 0x1428f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17172 << 16));
label_1428f8:
    // 0x1428f8: 0x30450010  andi        $a1, $v0, 0x10
    ctx->pc = 0x1428f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1428fc:
    // 0x1428fc: 0x34643160  ori         $a0, $v1, 0x3160
    ctx->pc = 0x1428fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12640);
label_142900:
    // 0x142900: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x142900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_142904:
    // 0x142904: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x142904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_142908:
    // 0x142908: 0x24030431  addiu       $v1, $zero, 0x431
    ctx->pc = 0x142908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1073));
label_14290c:
    // 0x14290c: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x14290cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
label_142910:
    // 0x142910: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x142910u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
label_142914:
    // 0x142914: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x142914u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_142918:
    // 0x142918: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x142918u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_14291c:
    // 0x14291c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x14291cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_142920:
    // 0x142920: 0xc04cfd8  jal         func_133F60
label_142924:
    if (ctx->pc == 0x142924u) {
        ctx->pc = 0x142924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142920u;
        // 0x142924: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142928u;
        goto label_142928;
    }
    ctx->pc = 0x142920u;
    SET_GPR_U32(ctx, 31, 0x142928u);
    ctx->pc = 0x142924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142920u;
    // 0x142924: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x142920u, 0x142928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142928u;
label_142928:
    // 0x142928: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x142928u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_14292c:
    // 0x14292c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x14292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_142930:
    // 0x142930: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x142930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_142934:
    // 0x142934: 0xde660020  ld          $a2, 0x20($s3)
    ctx->pc = 0x142934u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 32)));
label_142938:
    // 0x142938: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x142938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_14293c:
    // 0x14293c: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x14293cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_142940:
    // 0x142940: 0xae840028  sw          $a0, 0x28($s4)
    ctx->pc = 0x142940u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 4));
label_142944:
    // 0x142944: 0xfe860030  sd          $a2, 0x30($s4)
    ctx->pc = 0x142944u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 6));
label_142948:
    // 0x142948: 0xae830038  sw          $v1, 0x38($s4)
    ctx->pc = 0x142948u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 3));
label_14294c:
    // 0x14294c: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x14294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_142950:
    // 0x142950: 0xde660030  ld          $a2, 0x30($s3)
    ctx->pc = 0x142950u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 48)));
label_142954:
    // 0x142954: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x142954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_142958:
    // 0x142958: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x142958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_14295c:
    // 0x14295c: 0xde650040  ld          $a1, 0x40($s3)
    ctx->pc = 0x14295cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 64)));
label_142960:
    // 0x142960: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x142960u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
label_142964:
    // 0x142964: 0xfe860048  sd          $a2, 0x48($s4)
    ctx->pc = 0x142964u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 6));
label_142968:
    // 0x142968: 0xae840050  sw          $a0, 0x50($s4)
    ctx->pc = 0x142968u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 4));
label_14296c:
    // 0x14296c: 0xae830058  sw          $v1, 0x58($s4)
    ctx->pc = 0x14296cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 3));
label_142970:
    // 0x142970: 0xfe850060  sd          $a1, 0x60($s4)
    ctx->pc = 0x142970u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 5));
label_142974:
    // 0x142974: 0x1000017a  b           . + 4 + (0x17A << 2)
label_142978:
    if (ctx->pc == 0x142978u) {
        ctx->pc = 0x142978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142974u;
        // 0x142978: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14297Cu;
        goto label_14297c;
    }
    ctx->pc = 0x142974u;
    {
        const bool branch_taken_0x142974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142974u;
        // 0x142978: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142974) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x14297Cu;
label_14297c:
    // 0x14297c: 0x0  nop
    ctx->pc = 0x14297cu;
    // NOP
label_142980:
    // 0x142980: 0x3c02e400  lui         $v0, 0xE400
    ctx->pc = 0x142980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58368 << 16));
label_142984:
    // 0x142984: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x142984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_142988:
    // 0x142988: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x142988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_14298c:
    // 0x14298c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x14298cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142990:
    // 0x142990: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x142990u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_142994:
    // 0x142994: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x142994u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_142998:
    // 0x142998: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x142998u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
label_14299c:
    // 0x14299c: 0x3c034314  lui         $v1, 0x4314
    ctx->pc = 0x14299cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17172 << 16));
label_1429a0:
    // 0x1429a0: 0x30450010  andi        $a1, $v0, 0x10
    ctx->pc = 0x1429a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1429a4:
    // 0x1429a4: 0x34643160  ori         $a0, $v1, 0x3160
    ctx->pc = 0x1429a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12640);
label_1429a8:
    // 0x1429a8: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x1429a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_1429ac:
    // 0x1429ac: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1429acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_1429b0:
    // 0x1429b0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1429b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1429b4:
    // 0x1429b4: 0x34631431  ori         $v1, $v1, 0x1431
    ctx->pc = 0x1429b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5169);
label_1429b8:
    // 0x1429b8: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x1429b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
label_1429bc:
    // 0x1429bc: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x1429bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
label_1429c0:
    // 0x1429c0: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x1429c0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_1429c4:
    // 0x1429c4: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x1429c4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_1429c8:
    // 0x1429c8: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x1429c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1429cc:
    // 0x1429cc: 0xc04cfd8  jal         func_133F60
label_1429d0:
    if (ctx->pc == 0x1429D0u) {
        ctx->pc = 0x1429D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1429CCu;
        // 0x1429d0: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1429D4u;
        goto label_1429d4;
    }
    ctx->pc = 0x1429CCu;
    SET_GPR_U32(ctx, 31, 0x1429D4u);
    ctx->pc = 0x1429D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1429CCu;
    // 0x1429d0: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x1429CCu, 0x1429D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1429D4u;
label_1429d4:
    // 0x1429d4: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x1429d4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_1429d8:
    // 0x1429d8: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x1429d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_1429dc:
    // 0x1429dc: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1429dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1429e0:
    // 0x1429e0: 0xde650020  ld          $a1, 0x20($s3)
    ctx->pc = 0x1429e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 32)));
label_1429e4:
    // 0x1429e4: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x1429e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_1429e8:
    // 0x1429e8: 0xae840020  sw          $a0, 0x20($s4)
    ctx->pc = 0x1429e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 4));
label_1429ec:
    // 0x1429ec: 0xae830028  sw          $v1, 0x28($s4)
    ctx->pc = 0x1429ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
label_1429f0:
    // 0x1429f0: 0xfe850030  sd          $a1, 0x30($s4)
    ctx->pc = 0x1429f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 5));
label_1429f4:
    // 0x1429f4: 0xae820038  sw          $v0, 0x38($s4)
    ctx->pc = 0x1429f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
label_1429f8:
    // 0x1429f8: 0x9e64002c  lwu         $a0, 0x2C($s3)
    ctx->pc = 0x1429f8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1429fc:
    // 0x1429fc: 0xde650030  ld          $a1, 0x30($s3)
    ctx->pc = 0x1429fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 48)));
label_142a00:
    // 0x142a00: 0x9e630038  lwu         $v1, 0x38($s3)
    ctx->pc = 0x142a00u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_142a04:
    // 0x142a04: 0x9e62003c  lwu         $v0, 0x3C($s3)
    ctx->pc = 0x142a04u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_142a08:
    // 0x142a08: 0xfe840040  sd          $a0, 0x40($s4)
    ctx->pc = 0x142a08u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 4));
label_142a0c:
    // 0x142a0c: 0xfe850048  sd          $a1, 0x48($s4)
    ctx->pc = 0x142a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 5));
label_142a10:
    // 0x142a10: 0xfe830050  sd          $v1, 0x50($s4)
    ctx->pc = 0x142a10u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 3));
label_142a14:
    // 0x142a14: 0xfe820058  sd          $v0, 0x58($s4)
    ctx->pc = 0x142a14u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 2));
label_142a18:
    // 0x142a18: 0xde650040  ld          $a1, 0x40($s3)
    ctx->pc = 0x142a18u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 64)));
label_142a1c:
    // 0x142a1c: 0x9e640048  lwu         $a0, 0x48($s3)
    ctx->pc = 0x142a1cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_142a20:
    // 0x142a20: 0x9e63004c  lwu         $v1, 0x4C($s3)
    ctx->pc = 0x142a20u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_142a24:
    // 0x142a24: 0xde620050  ld          $v0, 0x50($s3)
    ctx->pc = 0x142a24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 80)));
label_142a28:
    // 0x142a28: 0xfe850060  sd          $a1, 0x60($s4)
    ctx->pc = 0x142a28u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 5));
label_142a2c:
    // 0x142a2c: 0xfe840068  sd          $a0, 0x68($s4)
    ctx->pc = 0x142a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 104), GPR_U64(ctx, 4));
label_142a30:
    // 0x142a30: 0xfe830070  sd          $v1, 0x70($s4)
    ctx->pc = 0x142a30u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 3));
label_142a34:
    // 0x142a34: 0xfe820078  sd          $v0, 0x78($s4)
    ctx->pc = 0x142a34u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 120), GPR_U64(ctx, 2));
label_142a38:
    // 0x142a38: 0x10000149  b           . + 4 + (0x149 << 2)
label_142a3c:
    if (ctx->pc == 0x142A3Cu) {
        ctx->pc = 0x142A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A38u;
        // 0x142a3c: 0x26940080  addiu       $s4, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142A40u;
        goto label_142a40;
    }
    ctx->pc = 0x142A38u;
    {
        const bool branch_taken_0x142a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A38u;
        // 0x142a3c: 0x26940080  addiu       $s4, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a38) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x142A40u;
label_142a40:
    // 0x142a40: 0x3c035400  lui         $v1, 0x5400
    ctx->pc = 0x142a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21504 << 16));
label_142a44:
    // 0x142a44: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x142a44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_142a48:
    // 0x142a48: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x142a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_142a4c:
    // 0x142a4c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x142a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_142a50:
    // 0x142a50: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x142a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_142a54:
    // 0x142a54: 0x34631410  ori         $v1, $v1, 0x1410
    ctx->pc = 0x142a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5136);
label_142a58:
    // 0x142a58: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x142a58u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
label_142a5c:
    // 0x142a5c: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x142a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_142a60:
    // 0x142a60: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x142a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_142a64:
    // 0x142a64: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x142a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_142a68:
    // 0x142a68: 0xde660010  ld          $a2, 0x10($s3)
    ctx->pc = 0x142a68u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 16)));
label_142a6c:
    // 0x142a6c: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x142a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_142a70:
    // 0x142a70: 0xde650018  ld          $a1, 0x18($s3)
    ctx->pc = 0x142a70u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_142a74:
    // 0x142a74: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x142a74u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_142a78:
    // 0x142a78: 0xae840018  sw          $a0, 0x18($s4)
    ctx->pc = 0x142a78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 4));
label_142a7c:
    // 0x142a7c: 0xfe860020  sd          $a2, 0x20($s4)
    ctx->pc = 0x142a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 6));
label_142a80:
    // 0x142a80: 0xae830028  sw          $v1, 0x28($s4)
    ctx->pc = 0x142a80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
label_142a84:
    // 0x142a84: 0xfe850030  sd          $a1, 0x30($s4)
    ctx->pc = 0x142a84u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 5));
label_142a88:
    // 0x142a88: 0x10000135  b           . + 4 + (0x135 << 2)
label_142a8c:
    if (ctx->pc == 0x142A8Cu) {
        ctx->pc = 0x142A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A88u;
        // 0x142a8c: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142A90u;
        goto label_142a90;
    }
    ctx->pc = 0x142A88u;
    {
        const bool branch_taken_0x142a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A88u;
        // 0x142a8c: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a88) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x142A90u;
label_142a90:
    // 0x142a90: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x142a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
label_142a94:
    // 0x142a94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x142a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_142a98:
    // 0x142a98: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x142a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_142a9c:
    // 0x142a9c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x142a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142aa0:
    // 0x142aa0: 0x3c020414  lui         $v0, 0x414
    ctx->pc = 0x142aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1044 << 16));
label_142aa4:
    // 0x142aa4: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x142aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_142aa8:
    // 0x142aa8: 0x34421410  ori         $v0, $v0, 0x1410
    ctx->pc = 0x142aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5136);
label_142aac:
    // 0x142aac: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x142aacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_142ab0:
    // 0x142ab0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x142ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_142ab4:
    // 0x142ab4: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x142ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_142ab8:
    // 0x142ab8: 0xde650018  ld          $a1, 0x18($s3)
    ctx->pc = 0x142ab8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_142abc:
    // 0x142abc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x142abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_142ac0:
    // 0x142ac0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x142ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_142ac4:
    // 0x142ac4: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x142ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_142ac8:
    // 0x142ac8: 0xae840018  sw          $a0, 0x18($s4)
    ctx->pc = 0x142ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 4));
label_142acc:
    // 0x142acc: 0xfe850020  sd          $a1, 0x20($s4)
    ctx->pc = 0x142accu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 5));
label_142ad0:
    // 0x142ad0: 0xae830028  sw          $v1, 0x28($s4)
    ctx->pc = 0x142ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
label_142ad4:
    // 0x142ad4: 0xde650020  ld          $a1, 0x20($s3)
    ctx->pc = 0x142ad4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 32)));
label_142ad8:
    // 0x142ad8: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x142ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_142adc:
    // 0x142adc: 0xde620028  ld          $v0, 0x28($s3)
    ctx->pc = 0x142adcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 40)));
label_142ae0:
    // 0x142ae0: 0xfe850030  sd          $a1, 0x30($s4)
    ctx->pc = 0x142ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 5));
label_142ae4:
    // 0x142ae4: 0xae840038  sw          $a0, 0x38($s4)
    ctx->pc = 0x142ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 4));
label_142ae8:
    // 0x142ae8: 0xfe820040  sd          $v0, 0x40($s4)
    ctx->pc = 0x142ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 2));
label_142aec:
    // 0x142aec: 0x1000011c  b           . + 4 + (0x11C << 2)
label_142af0:
    if (ctx->pc == 0x142AF0u) {
        ctx->pc = 0x142AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142AECu;
        // 0x142af0: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142AF4u;
        goto label_142af4;
    }
    ctx->pc = 0x142AECu;
    {
        const bool branch_taken_0x142aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142AECu;
        // 0x142af0: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142aec) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x142AF4u;
label_142af4:
    // 0x142af4: 0x0  nop
    ctx->pc = 0x142af4u;
    // NOP
label_142af8:
    // 0x142af8: 0x3c029400  lui         $v0, 0x9400
    ctx->pc = 0x142af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37888 << 16));
label_142afc:
    // 0x142afc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x142afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_142b00:
    // 0x142b00: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x142b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_142b04:
    // 0x142b04: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x142b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142b08:
    // 0x142b08: 0x3c021414  lui         $v0, 0x1414
    ctx->pc = 0x142b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5140 << 16));
label_142b0c:
    // 0x142b0c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x142b0cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_142b10:
    // 0x142b10: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x142b10u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_142b14:
    // 0x142b14: 0x34421410  ori         $v0, $v0, 0x1410
    ctx->pc = 0x142b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5136);
label_142b18:
    // 0x142b18: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x142b18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_142b1c:
    // 0x142b1c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x142b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_142b20:
    // 0x142b20: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x142b20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_142b24:
    // 0x142b24: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x142b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_142b28:
    // 0x142b28: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x142b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_142b2c:
    // 0x142b2c: 0xde660018  ld          $a2, 0x18($s3)
    ctx->pc = 0x142b2cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_142b30:
    // 0x142b30: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x142b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_142b34:
    // 0x142b34: 0xde650020  ld          $a1, 0x20($s3)
    ctx->pc = 0x142b34u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 32)));
label_142b38:
    // 0x142b38: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x142b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_142b3c:
    // 0x142b3c: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x142b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_142b40:
    // 0x142b40: 0xae840018  sw          $a0, 0x18($s4)
    ctx->pc = 0x142b40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 4));
label_142b44:
    // 0x142b44: 0xfe860020  sd          $a2, 0x20($s4)
    ctx->pc = 0x142b44u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 6));
label_142b48:
    // 0x142b48: 0xae830028  sw          $v1, 0x28($s4)
    ctx->pc = 0x142b48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
label_142b4c:
    // 0x142b4c: 0xfe850030  sd          $a1, 0x30($s4)
    ctx->pc = 0x142b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 5));
label_142b50:
    // 0x142b50: 0x8e640028  lw          $a0, 0x28($s3)
    ctx->pc = 0x142b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_142b54:
    // 0x142b54: 0xde660030  ld          $a2, 0x30($s3)
    ctx->pc = 0x142b54u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 48)));
label_142b58:
    // 0x142b58: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x142b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_142b5c:
    // 0x142b5c: 0xde650038  ld          $a1, 0x38($s3)
    ctx->pc = 0x142b5cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 56)));
label_142b60:
    // 0x142b60: 0xae840038  sw          $a0, 0x38($s4)
    ctx->pc = 0x142b60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 4));
label_142b64:
    // 0x142b64: 0xfe860040  sd          $a2, 0x40($s4)
    ctx->pc = 0x142b64u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 6));
label_142b68:
    // 0x142b68: 0xae830048  sw          $v1, 0x48($s4)
    ctx->pc = 0x142b68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 3));
label_142b6c:
    // 0x142b6c: 0xfe850050  sd          $a1, 0x50($s4)
    ctx->pc = 0x142b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 5));
label_142b70:
    // 0x142b70: 0x100000fb  b           . + 4 + (0xFB << 2)
label_142b74:
    if (ctx->pc == 0x142B74u) {
        ctx->pc = 0x142B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B70u;
        // 0x142b74: 0x26940060  addiu       $s4, $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142B78u;
        goto label_142b78;
    }
    ctx->pc = 0x142B70u;
    {
        const bool branch_taken_0x142b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B70u;
        // 0x142b74: 0x26940060  addiu       $s4, $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b70) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x142B78u;
label_142b78:
    // 0x142b78: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x142b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_142b7c:
    // 0x142b7c: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x142b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
label_142b80:
    // 0x142b80: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x142b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_142b84:
    // 0x142b84: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x142b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_142b88:
    // 0x142b88: 0x324407ff  andi        $a0, $s2, 0x7FF
    ctx->pc = 0x142b88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_142b8c:
    // 0x142b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142b90:
    // 0x142b90: 0x26690010  addiu       $t1, $s3, 0x10
    ctx->pc = 0x142b90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_142b94:
    // 0x142b94: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x142b94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142b98:
    // 0x142b98: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x142b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
label_142b9c:
    // 0x142b9c: 0x3045007f  andi        $a1, $v0, 0x7F
    ctx->pc = 0x142b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_142ba0:
    // 0x142ba0: 0xfe880000  sd          $t0, 0x0($s4)
    ctx->pc = 0x142ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 8));
label_142ba4:
    // 0x142ba4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x142ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_142ba8:
    // 0x142ba8: 0xa6870008  sh          $a3, 0x8($s4)
    ctx->pc = 0x142ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 7));
label_142bac:
    // 0x142bac: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x142bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142bb0:
    // 0x142bb0: 0xfe840010  sd          $a0, 0x10($s4)
    ctx->pc = 0x142bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 4));
label_142bb4:
    // 0x142bb4: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x142bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_142bb8:
    // 0x142bb8: 0xae860018  sw          $a2, 0x18($s4)
    ctx->pc = 0x142bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 6));
label_142bbc:
    // 0x142bbc: 0x240200f5  addiu       $v0, $zero, 0xF5
    ctx->pc = 0x142bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
label_142bc0:
    // 0x142bc0: 0xfe830020  sd          $v1, 0x20($s4)
    ctx->pc = 0x142bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 3));
label_142bc4:
    // 0x142bc4: 0xa6820028  sh          $v0, 0x28($s4)
    ctx->pc = 0x142bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 40), (uint16_t)GPR_U32(ctx, 2));
label_142bc8:
    // 0x142bc8: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x142bc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_142bcc:
    // 0x142bcc: 0x0  nop
    ctx->pc = 0x142bccu;
    // NOP
label_142bd0:
    // 0x142bd0: 0xdd220000  ld          $v0, 0x0($t1)
    ctx->pc = 0x142bd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 0)));
label_142bd4:
    // 0x142bd4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x142bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_142bd8:
    // 0x142bd8: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x142bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_142bdc:
    // 0x142bdc: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x142bdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_142be0:
    // 0x142be0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x142be0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_142be4:
    // 0x142be4: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
label_142be8:
    if (ctx->pc == 0x142BE8u) {
        ctx->pc = 0x142BECu;
        goto label_142bec;
    }
    ctx->pc = 0x142BE4u;
    {
        const bool branch_taken_0x142be4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x142be4) {
            ctx->pc = 0x142BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142bd0;
        }
    }
    ctx->pc = 0x142BECu;
label_142bec:
    // 0x142bec: 0x100000dc  b           . + 4 + (0xDC << 2)
label_142bf0:
    if (ctx->pc == 0x142BF0u) {
        ctx->pc = 0x142BF4u;
        goto label_142bf4;
    }
    ctx->pc = 0x142BECu;
    {
        const bool branch_taken_0x142bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142bec) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x142BF4u;
label_142bf4:
    // 0x142bf4: 0x0  nop
    ctx->pc = 0x142bf4u;
    // NOP
label_142bf8:
    // 0x142bf8: 0x3c032400  lui         $v1, 0x2400
    ctx->pc = 0x142bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9216 << 16));
label_142bfc:
    // 0x142bfc: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x142bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_142c00:
    // 0x142c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142c04:
    // 0x142c04: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x142c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_142c08:
    // 0x142c08: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x142c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_142c0c:
    // 0x142c0c: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x142c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_142c10:
    // 0x142c10: 0x324307ff  andi        $v1, $s2, 0x7FF
    ctx->pc = 0x142c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_142c14:
    // 0x142c14: 0xa6840008  sh          $a0, 0x8($s4)
    ctx->pc = 0x142c14u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 4));
label_142c18:
    // 0x142c18: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x142c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
label_142c1c:
    // 0x142c1c: 0x3044007f  andi        $a0, $v0, 0x7F
    ctx->pc = 0x142c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_142c20:
    // 0x142c20: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x142c20u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
label_142c24:
    // 0x142c24: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x142c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_142c28:
    // 0x142c28: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x142c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_142c2c:
    // 0x142c2c: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x142c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_142c30:
    // 0x142c30: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x142c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_142c34:
    // 0x142c34: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x142c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_142c38:
    // 0x142c38: 0xfe830020  sd          $v1, 0x20($s4)
    ctx->pc = 0x142c38u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 3));
label_142c3c:
    // 0x142c3c: 0xa6820028  sh          $v0, 0x28($s4)
    ctx->pc = 0x142c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 40), (uint16_t)GPR_U32(ctx, 2));
label_142c40:
    // 0x142c40: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x142c40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_142c44:
    // 0x142c44: 0x0  nop
    ctx->pc = 0x142c44u;
    // NOP
label_142c48:
    // 0x142c48: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x142c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_142c4c:
    // 0x142c4c: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x142c4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_142c50:
    // 0x142c50: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x142c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_142c54:
    // 0x142c54: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x142c54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_142c58:
    // 0x142c58: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x142c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_142c5c:
    // 0x142c5c: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x142c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
label_142c60:
    // 0x142c60: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_142c64:
    if (ctx->pc == 0x142C64u) {
        ctx->pc = 0x142C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C60u;
        // 0x142c64: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142C68u;
        goto label_142c68;
    }
    ctx->pc = 0x142C60u;
    {
        const bool branch_taken_0x142c60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x142C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C60u;
        // 0x142c64: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c60) {
            ctx->pc = 0x142C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142c48;
        }
    }
    ctx->pc = 0x142C68u;
label_142c68:
    // 0x142c68: 0x100000bd  b           . + 4 + (0xBD << 2)
label_142c6c:
    if (ctx->pc == 0x142C6Cu) {
        ctx->pc = 0x142C70u;
        goto label_142c70;
    }
    ctx->pc = 0x142C68u;
    {
        const bool branch_taken_0x142c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142c68) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x142C70u;
label_142c70:
    // 0x142c70: 0x3c023400  lui         $v0, 0x3400
    ctx->pc = 0x142c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13312 << 16));
label_142c74:
    // 0x142c74: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x142c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_142c78:
    // 0x142c78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142c7c:
    // 0x142c7c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x142c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142c80:
    // 0x142c80: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x142c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
label_142c84:
    // 0x142c84: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x142c84u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_142c88:
    // 0x142c88: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x142c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_142c8c:
    // 0x142c8c: 0x34430160  ori         $v1, $v0, 0x160
    ctx->pc = 0x142c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)352);
label_142c90:
    // 0x142c90: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x142c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_142c94:
    // 0x142c94: 0xa6830008  sh          $v1, 0x8($s4)
    ctx->pc = 0x142c94u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 3));
label_142c98:
    // 0x142c98: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x142c98u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_142c9c:
    // 0x142c9c: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x142c9cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_142ca0:
    // 0x142ca0: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x142ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_142ca4:
    // 0x142ca4: 0xc04cfd8  jal         func_133F60
label_142ca8:
    if (ctx->pc == 0x142CA8u) {
        ctx->pc = 0x142CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CA4u;
        // 0x142ca8: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142CACu;
        goto label_142cac;
    }
    ctx->pc = 0x142CA4u;
    SET_GPR_U32(ctx, 31, 0x142CACu);
    ctx->pc = 0x142CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142CA4u;
    // 0x142ca8: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x142CA4u, 0x142CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CACu;
label_142cac:
    // 0x142cac: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x142cacu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_142cb0:
    // 0x142cb0: 0x26660018  addiu       $a2, $s3, 0x18
    ctx->pc = 0x142cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_142cb4:
    // 0x142cb4: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x142cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
label_142cb8:
    // 0x142cb8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x142cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_142cbc:
    // 0x142cbc: 0x3045007f  andi        $a1, $v0, 0x7F
    ctx->pc = 0x142cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_142cc0:
    // 0x142cc0: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x142cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
label_142cc4:
    // 0x142cc4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x142cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_142cc8:
    // 0x142cc8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x142cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_142ccc:
    // 0x142ccc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x142cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142cd0:
    // 0x142cd0: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x142cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_142cd4:
    // 0x142cd4: 0xae840020  sw          $a0, 0x20($s4)
    ctx->pc = 0x142cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 4));
label_142cd8:
    // 0x142cd8: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x142cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_142cdc:
    // 0x142cdc: 0xfe830030  sd          $v1, 0x30($s4)
    ctx->pc = 0x142cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 3));
label_142ce0:
    // 0x142ce0: 0xa6820038  sh          $v0, 0x38($s4)
    ctx->pc = 0x142ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 56), (uint16_t)GPR_U32(ctx, 2));
label_142ce4:
    // 0x142ce4: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x142ce4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_142ce8:
    // 0x142ce8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x142ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_142cec:
    // 0x142cec: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x142cecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_142cf0:
    // 0x142cf0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x142cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_142cf4:
    // 0x142cf4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x142cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_142cf8:
    // 0x142cf8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x142cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_142cfc:
    // 0x142cfc: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x142cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
label_142d00:
    // 0x142d00: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
label_142d04:
    if (ctx->pc == 0x142D04u) {
        ctx->pc = 0x142D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D00u;
        // 0x142d04: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142D08u;
        goto label_142d08;
    }
    ctx->pc = 0x142D00u;
    {
        const bool branch_taken_0x142d00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x142D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D00u;
        // 0x142d04: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142d00) {
            ctx->pc = 0x142CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142ce8;
        }
    }
    ctx->pc = 0x142D08u;
label_142d08:
    // 0x142d08: 0x10000095  b           . + 4 + (0x95 << 2)
label_142d0c:
    if (ctx->pc == 0x142D0Cu) {
        ctx->pc = 0x142D10u;
        goto label_142d10;
    }
    ctx->pc = 0x142D08u;
    {
        const bool branch_taken_0x142d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142d08) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x142D10u;
label_142d10:
    // 0x142d10: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x142d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
label_142d14:
    // 0x142d14: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x142d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_142d18:
    // 0x142d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142d1c:
    // 0x142d1c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x142d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142d20:
    // 0x142d20: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x142d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
label_142d24:
    // 0x142d24: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x142d24u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_142d28:
    // 0x142d28: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x142d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_142d2c:
    // 0x142d2c: 0x34430060  ori         $v1, $v0, 0x60
    ctx->pc = 0x142d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
label_142d30:
    // 0x142d30: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x142d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_142d34:
    // 0x142d34: 0xa6830008  sh          $v1, 0x8($s4)
    ctx->pc = 0x142d34u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 3));
label_142d38:
    // 0x142d38: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x142d38u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_142d3c:
    // 0x142d3c: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x142d3cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_142d40:
    // 0x142d40: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x142d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_142d44:
    // 0x142d44: 0xc04cfd8  jal         func_133F60
label_142d48:
    if (ctx->pc == 0x142D48u) {
        ctx->pc = 0x142D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D44u;
        // 0x142d48: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142D4Cu;
        goto label_142d4c;
    }
    ctx->pc = 0x142D44u;
    SET_GPR_U32(ctx, 31, 0x142D4Cu);
    ctx->pc = 0x142D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D44u;
    // 0x142d48: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x142D44u, 0x142D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D4Cu;
label_142d4c:
    // 0x142d4c: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x142d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_142d50:
    // 0x142d50: 0x26670018  addiu       $a3, $s3, 0x18
    ctx->pc = 0x142d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_142d54:
    // 0x142d54: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x142d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
label_142d58:
    // 0x142d58: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x142d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_142d5c:
    // 0x142d5c: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x142d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_142d60:
    // 0x142d60: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x142d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
label_142d64:
    // 0x142d64: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x142d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_142d68:
    // 0x142d68: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x142d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
label_142d6c:
    // 0x142d6c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x142d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_142d70:
    // 0x142d70: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x142d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_142d74:
    // 0x142d74: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x142d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142d78:
    // 0x142d78: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x142d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_142d7c:
    // 0x142d7c: 0x3402f521  ori         $v0, $zero, 0xF521
    ctx->pc = 0x142d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62753);
label_142d80:
    // 0x142d80: 0xfe830020  sd          $v1, 0x20($s4)
    ctx->pc = 0x142d80u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 3));
label_142d84:
    // 0x142d84: 0xa6820028  sh          $v0, 0x28($s4)
    ctx->pc = 0x142d84u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 40), (uint16_t)GPR_U32(ctx, 2));
label_142d88:
    // 0x142d88: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x142d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_142d8c:
    // 0x142d8c: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x142d8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_142d90:
    // 0x142d90: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x142d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_142d94:
    // 0x142d94: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x142d94u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
label_142d98:
    // 0x142d98: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x142d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_142d9c:
    // 0x142d9c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x142d9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_142da0:
    // 0x142da0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x142da0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_142da4:
    // 0x142da4: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x142da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_142da8:
    // 0x142da8: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x142da8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_142dac:
    // 0x142dac: 0xfe860008  sd          $a2, 0x8($s4)
    ctx->pc = 0x142dacu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 6));
label_142db0:
    // 0x142db0: 0xfe840010  sd          $a0, 0x10($s4)
    ctx->pc = 0x142db0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 4));
label_142db4:
    // 0x142db4: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
label_142db8:
    if (ctx->pc == 0x142DB8u) {
        ctx->pc = 0x142DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142DB4u;
        // 0x142db8: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142DBCu;
        goto label_142dbc;
    }
    ctx->pc = 0x142DB4u;
    {
        const bool branch_taken_0x142db4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x142DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142DB4u;
        // 0x142db8: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142db4) {
            ctx->pc = 0x142D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142d90;
        }
    }
    ctx->pc = 0x142DBCu;
label_142dbc:
    // 0x142dbc: 0x10000068  b           . + 4 + (0x68 << 2)
label_142dc0:
    if (ctx->pc == 0x142DC0u) {
        ctx->pc = 0x142DC4u;
        goto label_142dc4;
    }
    ctx->pc = 0x142DBCu;
    {
        const bool branch_taken_0x142dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142dbc) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x142DC4u;
label_142dc4:
    // 0x142dc4: 0x0  nop
    ctx->pc = 0x142dc4u;
    // NOP
label_142dc8:
    // 0x142dc8: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x142dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
label_142dcc:
    // 0x142dcc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x142dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_142dd0:
    // 0x142dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142dd4:
    // 0x142dd4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x142dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142dd8:
    // 0x142dd8: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x142dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
label_142ddc:
    // 0x142ddc: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x142ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_142de0:
    // 0x142de0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x142de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_142de4:
    // 0x142de4: 0x34430060  ori         $v1, $v0, 0x60
    ctx->pc = 0x142de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
label_142de8:
    // 0x142de8: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x142de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_142dec:
    // 0x142dec: 0xa6830008  sh          $v1, 0x8($s4)
    ctx->pc = 0x142decu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 3));
label_142df0:
    // 0x142df0: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x142df0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_142df4:
    // 0x142df4: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x142df4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_142df8:
    // 0x142df8: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x142df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_142dfc:
    // 0x142dfc: 0xc04cfd8  jal         func_133F60
label_142e00:
    if (ctx->pc == 0x142E00u) {
        ctx->pc = 0x142E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142DFCu;
        // 0x142e00: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142E04u;
        goto label_142e04;
    }
    ctx->pc = 0x142DFCu;
    SET_GPR_U32(ctx, 31, 0x142E04u);
    ctx->pc = 0x142E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142DFCu;
    // 0x142e00: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x142DFCu, 0x142E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E04u;
label_142e04:
    // 0x142e04: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x142e04u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_142e08:
    // 0x142e08: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x142e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_142e0c:
    // 0x142e0c: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x142e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
label_142e10:
    // 0x142e10: 0x26670018  addiu       $a3, $s3, 0x18
    ctx->pc = 0x142e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_142e14:
    // 0x142e14: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x142e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_142e18:
    // 0x142e18: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x142e18u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_142e1c:
    // 0x142e1c: 0x3c023400  lui         $v0, 0x3400
    ctx->pc = 0x142e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13312 << 16));
label_142e20:
    // 0x142e20: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x142e20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
label_142e24:
    // 0x142e24: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x142e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_142e28:
    // 0x142e28: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x142e28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_142e2c:
    // 0x142e2c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x142e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_142e30:
    // 0x142e30: 0x24020513  addiu       $v0, $zero, 0x513
    ctx->pc = 0x142e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1299));
label_142e34:
    // 0x142e34: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x142e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_142e38:
    // 0x142e38: 0xfe830020  sd          $v1, 0x20($s4)
    ctx->pc = 0x142e38u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 3));
label_142e3c:
    // 0x142e3c: 0xa6820028  sh          $v0, 0x28($s4)
    ctx->pc = 0x142e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 40), (uint16_t)GPR_U32(ctx, 2));
label_142e40:
    // 0x142e40: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x142e40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_142e44:
    // 0x142e44: 0x0  nop
    ctx->pc = 0x142e44u;
    // NOP
label_142e48:
    // 0x142e48: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x142e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_142e4c:
    // 0x142e4c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x142e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_142e50:
    // 0x142e50: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x142e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_142e54:
    // 0x142e54: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x142e54u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_142e58:
    // 0x142e58: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x142e58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_142e5c:
    // 0x142e5c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x142e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_142e60:
    // 0x142e60: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x142e60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_142e64:
    // 0x142e64: 0xfe840010  sd          $a0, 0x10($s4)
    ctx->pc = 0x142e64u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 4));
label_142e68:
    // 0x142e68: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
label_142e6c:
    if (ctx->pc == 0x142E6Cu) {
        ctx->pc = 0x142E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E68u;
        // 0x142e6c: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142E70u;
        goto label_142e70;
    }
    ctx->pc = 0x142E68u;
    {
        const bool branch_taken_0x142e68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x142E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E68u;
        // 0x142e6c: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e68) {
            ctx->pc = 0x142E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142e48;
        }
    }
    ctx->pc = 0x142E70u;
label_142e70:
    // 0x142e70: 0x2683000f  addiu       $v1, $s4, 0xF
    ctx->pc = 0x142e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 15));
label_142e74:
    // 0x142e74: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x142e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_142e78:
    // 0x142e78: 0x10000039  b           . + 4 + (0x39 << 2)
label_142e7c:
    if (ctx->pc == 0x142E7Cu) {
        ctx->pc = 0x142E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E78u;
        // 0x142e7c: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142E80u;
        goto label_142e80;
    }
    ctx->pc = 0x142E78u;
    {
        const bool branch_taken_0x142e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E78u;
        // 0x142e7c: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e78) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x142E80u;
label_142e80:
    // 0x142e80: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x142e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
label_142e84:
    // 0x142e84: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x142e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_142e88:
    // 0x142e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142e8c:
    // 0x142e8c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x142e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142e90:
    // 0x142e90: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x142e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
label_142e94:
    // 0x142e94: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x142e94u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_142e98:
    // 0x142e98: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x142e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_142e9c:
    // 0x142e9c: 0x34430060  ori         $v1, $v0, 0x60
    ctx->pc = 0x142e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
label_142ea0:
    // 0x142ea0: 0x324207ff  andi        $v0, $s2, 0x7FF
    ctx->pc = 0x142ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
label_142ea4:
    // 0x142ea4: 0xa6830008  sh          $v1, 0x8($s4)
    ctx->pc = 0x142ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 3));
label_142ea8:
    // 0x142ea8: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x142ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_142eac:
    // 0x142eac: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x142eacu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_142eb0:
    // 0x142eb0: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x142eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_142eb4:
    // 0x142eb4: 0xc04cfd8  jal         func_133F60
label_142eb8:
    if (ctx->pc == 0x142EB8u) {
        ctx->pc = 0x142EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142EB4u;
        // 0x142eb8: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142EBCu;
        goto label_142ebc;
    }
    ctx->pc = 0x142EB4u;
    SET_GPR_U32(ctx, 31, 0x142EBCu);
    ctx->pc = 0x142EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142EB4u;
    // 0x142eb8: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x142EB4u, 0x142EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142EBCu;
label_142ebc:
    // 0x142ebc: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x142ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
label_142ec0:
    // 0x142ec0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x142ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_142ec4:
    // 0x142ec4: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x142ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
label_142ec8:
    // 0x142ec8: 0x26670018  addiu       $a3, $s3, 0x18
    ctx->pc = 0x142ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_142ecc:
    // 0x142ecc: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x142eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_142ed0:
    // 0x142ed0: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x142ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_142ed4:
    // 0x142ed4: 0x3c023400  lui         $v0, 0x3400
    ctx->pc = 0x142ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13312 << 16));
label_142ed8:
    // 0x142ed8: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x142ed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
label_142edc:
    // 0x142edc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x142edcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_142ee0:
    // 0x142ee0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x142ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_142ee4:
    // 0x142ee4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x142ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_142ee8:
    // 0x142ee8: 0x24020521  addiu       $v0, $zero, 0x521
    ctx->pc = 0x142ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
label_142eec:
    // 0x142eec: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x142eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_142ef0:
    // 0x142ef0: 0xfe830020  sd          $v1, 0x20($s4)
    ctx->pc = 0x142ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 3));
label_142ef4:
    // 0x142ef4: 0xa6820028  sh          $v0, 0x28($s4)
    ctx->pc = 0x142ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 40), (uint16_t)GPR_U32(ctx, 2));
label_142ef8:
    // 0x142ef8: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x142ef8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_142efc:
    // 0x142efc: 0x0  nop
    ctx->pc = 0x142efcu;
    // NOP
label_142f00:
    // 0x142f00: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x142f00u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_142f04:
    // 0x142f04: 0xdce30010  ld          $v1, 0x10($a3)
    ctx->pc = 0x142f04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 16)));
label_142f08:
    // 0x142f08: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x142f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_142f0c:
    // 0x142f0c: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x142f0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_142f10:
    // 0x142f10: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x142f10u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
label_142f14:
    // 0x142f14: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x142f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_142f18:
    // 0x142f18: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x142f18u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
label_142f1c:
    // 0x142f1c: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x142f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
label_142f20:
    // 0x142f20: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
label_142f24:
    if (ctx->pc == 0x142F24u) {
        ctx->pc = 0x142F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F20u;
        // 0x142f24: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142F28u;
        goto label_142f28;
    }
    ctx->pc = 0x142F20u;
    {
        const bool branch_taken_0x142f20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x142F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F20u;
        // 0x142f24: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f20) {
            ctx->pc = 0x142F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142f00;
        }
    }
    ctx->pc = 0x142F28u;
label_142f28:
    // 0x142f28: 0x2683000f  addiu       $v1, $s4, 0xF
    ctx->pc = 0x142f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 15));
label_142f2c:
    // 0x142f2c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x142f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_142f30:
    // 0x142f30: 0x1000000b  b           . + 4 + (0xB << 2)
label_142f34:
    if (ctx->pc == 0x142F34u) {
        ctx->pc = 0x142F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F30u;
        // 0x142f34: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142F38u;
        goto label_142f38;
    }
    ctx->pc = 0x142F30u;
    {
        const bool branch_taken_0x142f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F30u;
        // 0x142f34: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f30) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x142F38u;
label_142f38:
    // 0x142f38: 0x121682  srl         $v0, $s2, 26
    ctx->pc = 0x142f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 26));
label_142f3c:
    // 0x142f3c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x142f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_142f40:
    // 0x142f40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x142f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_142f44:
    // 0x142f44: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x142f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_142f48:
    // 0x142f48: 0x2442a988  addiu       $v0, $v0, -0x5678
    ctx->pc = 0x142f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945160));
label_142f4c:
    // 0x142f4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_142f50:
    // 0x142f50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x142f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_142f54:
    // 0x142f54: 0x40f809  jalr        $v0
label_142f58:
    if (ctx->pc == 0x142F58u) {
        ctx->pc = 0x142F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F54u;
        // 0x142f58: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142F5Cu;
        goto label_142f5c;
    }
    ctx->pc = 0x142F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x142F5Cu);
        ctx->pc = 0x142F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F54u;
        // 0x142f58: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142F54u, 0x142F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142F5Cu;
label_142f5c:
    // 0x142f5c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x142f5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_142f60:
    // 0x142f60: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x142f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_142f64:
    // 0x142f64: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x142f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
label_142f68:
    // 0x142f68: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x142f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
label_142f6c:
    // 0x142f6c: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x142f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
label_142f70:
    // 0x142f70: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x142f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_142f74:
    // 0x142f74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_142f78:
    if (ctx->pc == 0x142F78u) {
        ctx->pc = 0x142F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F74u;
        // 0x142f78: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142F7Cu;
        goto label_142f7c;
    }
    ctx->pc = 0x142F74u;
    {
        const bool branch_taken_0x142f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F74u;
        // 0x142f78: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f74) {
            ctx->pc = 0x142F88u;
            goto label_142f88;
        }
    }
    ctx->pc = 0x142F7Cu;
label_142f7c:
    // 0x142f7c: 0x1000f016  b           . + 4 + (-0xFEA << 2)
label_142f80:
    if (ctx->pc == 0x142F80u) {
        ctx->pc = 0x142F84u;
        goto label_142f84;
    }
    ctx->pc = 0x142F7Cu;
    {
        const bool branch_taken_0x142f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f7c) {
            ctx->pc = 0x13EFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13efd8;
        }
    }
    ctx->pc = 0x142F84u;
label_142f84:
    // 0x142f84: 0x0  nop
    ctx->pc = 0x142f84u;
    // NOP
label_142f88:
    // 0x142f88: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x142f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_142f8c:
    // 0x142f8c: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x142f8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_142f90:
    // 0x142f90: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_142f94:
    if (ctx->pc == 0x142F94u) {
        ctx->pc = 0x142F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F90u;
        // 0x142f94: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142F98u;
        goto label_142f98;
    }
    ctx->pc = 0x142F90u;
    {
        const bool branch_taken_0x142f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F90u;
        // 0x142f94: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f90) {
            ctx->pc = 0x142FF0u;
            goto label_142ff0;
        }
    }
    ctx->pc = 0x142F98u;
label_142f98:
    // 0x142f98: 0x34028002  ori         $v0, $zero, 0x8002
    ctx->pc = 0x142f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
label_142f9c:
    // 0x142f9c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x142f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_142fa0:
    // 0x142fa0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x142fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_142fa4:
    // 0x142fa4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142fa8:
    // 0x142fa8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x142fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_142fac:
    // 0x142fac: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x142facu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_142fb0:
    // 0x142fb0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x142fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_142fb4:
    // 0x142fb4: 0xa6840008  sh          $a0, 0x8($s4)
    ctx->pc = 0x142fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 4));
label_142fb8:
    // 0x142fb8: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x142fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_142fbc:
    // 0x142fbc: 0x8c24f014  lw          $a0, -0xFEC($at)
    ctx->pc = 0x142fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
label_142fc0:
    // 0x142fc0: 0xdc840040  ld          $a0, 0x40($a0)
    ctx->pc = 0x142fc0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 64)));
label_142fc4:
    // 0x142fc4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x142fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_142fc8:
    // 0x142fc8: 0xfe840010  sd          $a0, 0x10($s4)
    ctx->pc = 0x142fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 4));
label_142fcc:
    // 0x142fcc: 0xfe830018  sd          $v1, 0x18($s4)
    ctx->pc = 0x142fccu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 3));
label_142fd0:
    // 0x142fd0: 0x8c23f014  lw          $v1, -0xFEC($at)
    ctx->pc = 0x142fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
label_142fd4:
    // 0x142fd4: 0xdc630040  ld          $v1, 0x40($v1)
    ctx->pc = 0x142fd4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 64)));
label_142fd8:
    // 0x142fd8: 0xfe830020  sd          $v1, 0x20($s4)
    ctx->pc = 0x142fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 3));
label_142fdc:
    // 0x142fdc: 0xfe820028  sd          $v0, 0x28($s4)
    ctx->pc = 0x142fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 2));
label_142fe0:
    // 0x142fe0: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x142fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_142fe4:
    // 0x142fe4: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x142fe4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_142fe8:
    // 0x142fe8: 0xa4400010  sh          $zero, 0x10($v0)
    ctx->pc = 0x142fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 0));
label_142fec:
    // 0x142fec: 0x0  nop
    ctx->pc = 0x142fecu;
    // NOP
label_142ff0:
    // 0x142ff0: 0x8fa5024c  lw          $a1, 0x24C($sp)
    ctx->pc = 0x142ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_142ff4:
    // 0x142ff4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x142ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_142ff8:
    // 0x142ff8: 0xc050c14  jal         func_143050
label_142ffc:
    if (ctx->pc == 0x142FFCu) {
        ctx->pc = 0x142FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142FF8u;
        // 0x142ffc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143000u;
        goto label_143000;
    }
    ctx->pc = 0x142FF8u;
    SET_GPR_U32(ctx, 31, 0x143000u);
    ctx->pc = 0x142FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142FF8u;
    // 0x142ffc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143050u, 0x142FF8u, 0x143000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143000u;
label_143000:
    // 0x143000: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x143000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_143004:
    // 0x143004: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x143004u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_143008:
    // 0x143008: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x143008u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_14300c:
    // 0x14300c: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x14300cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_143010:
    // 0x143010: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x143010u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_143014:
    // 0x143014: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x143014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_143018:
    // 0x143018: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x143018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14301c:
    // 0x14301c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14301cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_143020:
    // 0x143020: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x143020u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_143024:
    // 0x143024: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x143024u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_143028:
    // 0x143028: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x143028u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14302c:
    // 0x14302c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14302cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_143030:
    // 0x143030: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x143030u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_143034:
    // 0x143034: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x143034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_143038:
    // 0x143038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14303c:
    // 0x14303c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14303cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_143040:
    // 0x143040: 0x3e00008  jr          $ra
label_143044:
    if (ctx->pc == 0x143044u) {
        ctx->pc = 0x143044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143040u;
        // 0x143044: 0x27bd03d0  addiu       $sp, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143048u;
        goto label_fallthrough_0x143040;
    }
    ctx->pc = 0x143040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143040u;
        // 0x143044: 0x27bd03d0  addiu       $sp, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x143040:
    ctx->pc = 0x143048u;
}
