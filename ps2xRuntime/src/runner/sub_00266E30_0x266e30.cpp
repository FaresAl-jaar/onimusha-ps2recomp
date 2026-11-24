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

// Function: sub_00266E30
// Address: 0x266e30 - 0x269390
void sub_00266E30_0x266e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266E30_0x266e30");
#endif

    switch (ctx->pc) {
        case 0x266e30u: goto label_266e30;
        case 0x266e34u: goto label_266e34;
        case 0x266e38u: goto label_266e38;
        case 0x266e3cu: goto label_266e3c;
        case 0x266e40u: goto label_266e40;
        case 0x266e44u: goto label_266e44;
        case 0x266e48u: goto label_266e48;
        case 0x266e4cu: goto label_266e4c;
        case 0x266e50u: goto label_266e50;
        case 0x266e54u: goto label_266e54;
        case 0x266e58u: goto label_266e58;
        case 0x266e5cu: goto label_266e5c;
        case 0x266e60u: goto label_266e60;
        case 0x266e64u: goto label_266e64;
        case 0x266e68u: goto label_266e68;
        case 0x266e6cu: goto label_266e6c;
        case 0x266e70u: goto label_266e70;
        case 0x266e74u: goto label_266e74;
        case 0x266e78u: goto label_266e78;
        case 0x266e7cu: goto label_266e7c;
        case 0x266e80u: goto label_266e80;
        case 0x266e84u: goto label_266e84;
        case 0x266e88u: goto label_266e88;
        case 0x266e8cu: goto label_266e8c;
        case 0x266e90u: goto label_266e90;
        case 0x266e94u: goto label_266e94;
        case 0x266e98u: goto label_266e98;
        case 0x266e9cu: goto label_266e9c;
        case 0x266ea0u: goto label_266ea0;
        case 0x266ea4u: goto label_266ea4;
        case 0x266ea8u: goto label_266ea8;
        case 0x266eacu: goto label_266eac;
        case 0x266eb0u: goto label_266eb0;
        case 0x266eb4u: goto label_266eb4;
        case 0x266eb8u: goto label_266eb8;
        case 0x266ebcu: goto label_266ebc;
        case 0x266ec0u: goto label_266ec0;
        case 0x266ec4u: goto label_266ec4;
        case 0x266ec8u: goto label_266ec8;
        case 0x266eccu: goto label_266ecc;
        case 0x266ed0u: goto label_266ed0;
        case 0x266ed4u: goto label_266ed4;
        case 0x266ed8u: goto label_266ed8;
        case 0x266edcu: goto label_266edc;
        case 0x266ee0u: goto label_266ee0;
        case 0x266ee4u: goto label_266ee4;
        case 0x266ee8u: goto label_266ee8;
        case 0x266eecu: goto label_266eec;
        case 0x266ef0u: goto label_266ef0;
        case 0x266ef4u: goto label_266ef4;
        case 0x266ef8u: goto label_266ef8;
        case 0x266efcu: goto label_266efc;
        case 0x266f00u: goto label_266f00;
        case 0x266f04u: goto label_266f04;
        case 0x266f08u: goto label_266f08;
        case 0x266f0cu: goto label_266f0c;
        case 0x266f10u: goto label_266f10;
        case 0x266f14u: goto label_266f14;
        case 0x266f18u: goto label_266f18;
        case 0x266f1cu: goto label_266f1c;
        case 0x266f20u: goto label_266f20;
        case 0x266f24u: goto label_266f24;
        case 0x266f28u: goto label_266f28;
        case 0x266f2cu: goto label_266f2c;
        case 0x266f30u: goto label_266f30;
        case 0x266f34u: goto label_266f34;
        case 0x266f38u: goto label_266f38;
        case 0x266f3cu: goto label_266f3c;
        case 0x266f40u: goto label_266f40;
        case 0x266f44u: goto label_266f44;
        case 0x266f48u: goto label_266f48;
        case 0x266f4cu: goto label_266f4c;
        case 0x266f50u: goto label_266f50;
        case 0x266f54u: goto label_266f54;
        case 0x266f58u: goto label_266f58;
        case 0x266f5cu: goto label_266f5c;
        case 0x266f60u: goto label_266f60;
        case 0x266f64u: goto label_266f64;
        case 0x266f68u: goto label_266f68;
        case 0x266f6cu: goto label_266f6c;
        case 0x266f70u: goto label_266f70;
        case 0x266f74u: goto label_266f74;
        case 0x266f78u: goto label_266f78;
        case 0x266f7cu: goto label_266f7c;
        case 0x266f80u: goto label_266f80;
        case 0x266f84u: goto label_266f84;
        case 0x266f88u: goto label_266f88;
        case 0x266f8cu: goto label_266f8c;
        case 0x266f90u: goto label_266f90;
        case 0x266f94u: goto label_266f94;
        case 0x266f98u: goto label_266f98;
        case 0x266f9cu: goto label_266f9c;
        case 0x266fa0u: goto label_266fa0;
        case 0x266fa4u: goto label_266fa4;
        case 0x266fa8u: goto label_266fa8;
        case 0x266facu: goto label_266fac;
        case 0x266fb0u: goto label_266fb0;
        case 0x266fb4u: goto label_266fb4;
        case 0x266fb8u: goto label_266fb8;
        case 0x266fbcu: goto label_266fbc;
        case 0x266fc0u: goto label_266fc0;
        case 0x266fc4u: goto label_266fc4;
        case 0x266fc8u: goto label_266fc8;
        case 0x266fccu: goto label_266fcc;
        case 0x266fd0u: goto label_266fd0;
        case 0x266fd4u: goto label_266fd4;
        case 0x266fd8u: goto label_266fd8;
        case 0x266fdcu: goto label_266fdc;
        case 0x266fe0u: goto label_266fe0;
        case 0x266fe4u: goto label_266fe4;
        case 0x266fe8u: goto label_266fe8;
        case 0x266fecu: goto label_266fec;
        case 0x266ff0u: goto label_266ff0;
        case 0x266ff4u: goto label_266ff4;
        case 0x266ff8u: goto label_266ff8;
        case 0x266ffcu: goto label_266ffc;
        case 0x267000u: goto label_267000;
        case 0x267004u: goto label_267004;
        case 0x267008u: goto label_267008;
        case 0x26700cu: goto label_26700c;
        case 0x267010u: goto label_267010;
        case 0x267014u: goto label_267014;
        case 0x267018u: goto label_267018;
        case 0x26701cu: goto label_26701c;
        case 0x267020u: goto label_267020;
        case 0x267024u: goto label_267024;
        case 0x267028u: goto label_267028;
        case 0x26702cu: goto label_26702c;
        case 0x267030u: goto label_267030;
        case 0x267034u: goto label_267034;
        case 0x267038u: goto label_267038;
        case 0x26703cu: goto label_26703c;
        case 0x267040u: goto label_267040;
        case 0x267044u: goto label_267044;
        case 0x267048u: goto label_267048;
        case 0x26704cu: goto label_26704c;
        case 0x267050u: goto label_267050;
        case 0x267054u: goto label_267054;
        case 0x267058u: goto label_267058;
        case 0x26705cu: goto label_26705c;
        case 0x267060u: goto label_267060;
        case 0x267064u: goto label_267064;
        case 0x267068u: goto label_267068;
        case 0x26706cu: goto label_26706c;
        case 0x267070u: goto label_267070;
        case 0x267074u: goto label_267074;
        case 0x267078u: goto label_267078;
        case 0x26707cu: goto label_26707c;
        case 0x267080u: goto label_267080;
        case 0x267084u: goto label_267084;
        case 0x267088u: goto label_267088;
        case 0x26708cu: goto label_26708c;
        case 0x267090u: goto label_267090;
        case 0x267094u: goto label_267094;
        case 0x267098u: goto label_267098;
        case 0x26709cu: goto label_26709c;
        case 0x2670a0u: goto label_2670a0;
        case 0x2670a4u: goto label_2670a4;
        case 0x2670a8u: goto label_2670a8;
        case 0x2670acu: goto label_2670ac;
        case 0x2670b0u: goto label_2670b0;
        case 0x2670b4u: goto label_2670b4;
        case 0x2670b8u: goto label_2670b8;
        case 0x2670bcu: goto label_2670bc;
        case 0x2670c0u: goto label_2670c0;
        case 0x2670c4u: goto label_2670c4;
        case 0x2670c8u: goto label_2670c8;
        case 0x2670ccu: goto label_2670cc;
        case 0x2670d0u: goto label_2670d0;
        case 0x2670d4u: goto label_2670d4;
        case 0x2670d8u: goto label_2670d8;
        case 0x2670dcu: goto label_2670dc;
        case 0x2670e0u: goto label_2670e0;
        case 0x2670e4u: goto label_2670e4;
        case 0x2670e8u: goto label_2670e8;
        case 0x2670ecu: goto label_2670ec;
        case 0x2670f0u: goto label_2670f0;
        case 0x2670f4u: goto label_2670f4;
        case 0x2670f8u: goto label_2670f8;
        case 0x2670fcu: goto label_2670fc;
        case 0x267100u: goto label_267100;
        case 0x267104u: goto label_267104;
        case 0x267108u: goto label_267108;
        case 0x26710cu: goto label_26710c;
        case 0x267110u: goto label_267110;
        case 0x267114u: goto label_267114;
        case 0x267118u: goto label_267118;
        case 0x26711cu: goto label_26711c;
        case 0x267120u: goto label_267120;
        case 0x267124u: goto label_267124;
        case 0x267128u: goto label_267128;
        case 0x26712cu: goto label_26712c;
        case 0x267130u: goto label_267130;
        case 0x267134u: goto label_267134;
        case 0x267138u: goto label_267138;
        case 0x26713cu: goto label_26713c;
        case 0x267140u: goto label_267140;
        case 0x267144u: goto label_267144;
        case 0x267148u: goto label_267148;
        case 0x26714cu: goto label_26714c;
        case 0x267150u: goto label_267150;
        case 0x267154u: goto label_267154;
        case 0x267158u: goto label_267158;
        case 0x26715cu: goto label_26715c;
        case 0x267160u: goto label_267160;
        case 0x267164u: goto label_267164;
        case 0x267168u: goto label_267168;
        case 0x26716cu: goto label_26716c;
        case 0x267170u: goto label_267170;
        case 0x267174u: goto label_267174;
        case 0x267178u: goto label_267178;
        case 0x26717cu: goto label_26717c;
        case 0x267180u: goto label_267180;
        case 0x267184u: goto label_267184;
        case 0x267188u: goto label_267188;
        case 0x26718cu: goto label_26718c;
        case 0x267190u: goto label_267190;
        case 0x267194u: goto label_267194;
        case 0x267198u: goto label_267198;
        case 0x26719cu: goto label_26719c;
        case 0x2671a0u: goto label_2671a0;
        case 0x2671a4u: goto label_2671a4;
        case 0x2671a8u: goto label_2671a8;
        case 0x2671acu: goto label_2671ac;
        case 0x2671b0u: goto label_2671b0;
        case 0x2671b4u: goto label_2671b4;
        case 0x2671b8u: goto label_2671b8;
        case 0x2671bcu: goto label_2671bc;
        case 0x2671c0u: goto label_2671c0;
        case 0x2671c4u: goto label_2671c4;
        case 0x2671c8u: goto label_2671c8;
        case 0x2671ccu: goto label_2671cc;
        case 0x2671d0u: goto label_2671d0;
        case 0x2671d4u: goto label_2671d4;
        case 0x2671d8u: goto label_2671d8;
        case 0x2671dcu: goto label_2671dc;
        case 0x2671e0u: goto label_2671e0;
        case 0x2671e4u: goto label_2671e4;
        case 0x2671e8u: goto label_2671e8;
        case 0x2671ecu: goto label_2671ec;
        case 0x2671f0u: goto label_2671f0;
        case 0x2671f4u: goto label_2671f4;
        case 0x2671f8u: goto label_2671f8;
        case 0x2671fcu: goto label_2671fc;
        case 0x267200u: goto label_267200;
        case 0x267204u: goto label_267204;
        case 0x267208u: goto label_267208;
        case 0x26720cu: goto label_26720c;
        case 0x267210u: goto label_267210;
        case 0x267214u: goto label_267214;
        case 0x267218u: goto label_267218;
        case 0x26721cu: goto label_26721c;
        case 0x267220u: goto label_267220;
        case 0x267224u: goto label_267224;
        case 0x267228u: goto label_267228;
        case 0x26722cu: goto label_26722c;
        case 0x267230u: goto label_267230;
        case 0x267234u: goto label_267234;
        case 0x267238u: goto label_267238;
        case 0x26723cu: goto label_26723c;
        case 0x267240u: goto label_267240;
        case 0x267244u: goto label_267244;
        case 0x267248u: goto label_267248;
        case 0x26724cu: goto label_26724c;
        case 0x267250u: goto label_267250;
        case 0x267254u: goto label_267254;
        case 0x267258u: goto label_267258;
        case 0x26725cu: goto label_26725c;
        case 0x267260u: goto label_267260;
        case 0x267264u: goto label_267264;
        case 0x267268u: goto label_267268;
        case 0x26726cu: goto label_26726c;
        case 0x267270u: goto label_267270;
        case 0x267274u: goto label_267274;
        case 0x267278u: goto label_267278;
        case 0x26727cu: goto label_26727c;
        case 0x267280u: goto label_267280;
        case 0x267284u: goto label_267284;
        case 0x267288u: goto label_267288;
        case 0x26728cu: goto label_26728c;
        case 0x267290u: goto label_267290;
        case 0x267294u: goto label_267294;
        case 0x267298u: goto label_267298;
        case 0x26729cu: goto label_26729c;
        case 0x2672a0u: goto label_2672a0;
        case 0x2672a4u: goto label_2672a4;
        case 0x2672a8u: goto label_2672a8;
        case 0x2672acu: goto label_2672ac;
        case 0x2672b0u: goto label_2672b0;
        case 0x2672b4u: goto label_2672b4;
        case 0x2672b8u: goto label_2672b8;
        case 0x2672bcu: goto label_2672bc;
        case 0x2672c0u: goto label_2672c0;
        case 0x2672c4u: goto label_2672c4;
        case 0x2672c8u: goto label_2672c8;
        case 0x2672ccu: goto label_2672cc;
        case 0x2672d0u: goto label_2672d0;
        case 0x2672d4u: goto label_2672d4;
        case 0x2672d8u: goto label_2672d8;
        case 0x2672dcu: goto label_2672dc;
        case 0x2672e0u: goto label_2672e0;
        case 0x2672e4u: goto label_2672e4;
        case 0x2672e8u: goto label_2672e8;
        case 0x2672ecu: goto label_2672ec;
        case 0x2672f0u: goto label_2672f0;
        case 0x2672f4u: goto label_2672f4;
        case 0x2672f8u: goto label_2672f8;
        case 0x2672fcu: goto label_2672fc;
        case 0x267300u: goto label_267300;
        case 0x267304u: goto label_267304;
        case 0x267308u: goto label_267308;
        case 0x26730cu: goto label_26730c;
        case 0x267310u: goto label_267310;
        case 0x267314u: goto label_267314;
        case 0x267318u: goto label_267318;
        case 0x26731cu: goto label_26731c;
        case 0x267320u: goto label_267320;
        case 0x267324u: goto label_267324;
        case 0x267328u: goto label_267328;
        case 0x26732cu: goto label_26732c;
        case 0x267330u: goto label_267330;
        case 0x267334u: goto label_267334;
        case 0x267338u: goto label_267338;
        case 0x26733cu: goto label_26733c;
        case 0x267340u: goto label_267340;
        case 0x267344u: goto label_267344;
        case 0x267348u: goto label_267348;
        case 0x26734cu: goto label_26734c;
        case 0x267350u: goto label_267350;
        case 0x267354u: goto label_267354;
        case 0x267358u: goto label_267358;
        case 0x26735cu: goto label_26735c;
        case 0x267360u: goto label_267360;
        case 0x267364u: goto label_267364;
        case 0x267368u: goto label_267368;
        case 0x26736cu: goto label_26736c;
        case 0x267370u: goto label_267370;
        case 0x267374u: goto label_267374;
        case 0x267378u: goto label_267378;
        case 0x26737cu: goto label_26737c;
        case 0x267380u: goto label_267380;
        case 0x267384u: goto label_267384;
        case 0x267388u: goto label_267388;
        case 0x26738cu: goto label_26738c;
        case 0x267390u: goto label_267390;
        case 0x267394u: goto label_267394;
        case 0x267398u: goto label_267398;
        case 0x26739cu: goto label_26739c;
        case 0x2673a0u: goto label_2673a0;
        case 0x2673a4u: goto label_2673a4;
        case 0x2673a8u: goto label_2673a8;
        case 0x2673acu: goto label_2673ac;
        case 0x2673b0u: goto label_2673b0;
        case 0x2673b4u: goto label_2673b4;
        case 0x2673b8u: goto label_2673b8;
        case 0x2673bcu: goto label_2673bc;
        case 0x2673c0u: goto label_2673c0;
        case 0x2673c4u: goto label_2673c4;
        case 0x2673c8u: goto label_2673c8;
        case 0x2673ccu: goto label_2673cc;
        case 0x2673d0u: goto label_2673d0;
        case 0x2673d4u: goto label_2673d4;
        case 0x2673d8u: goto label_2673d8;
        case 0x2673dcu: goto label_2673dc;
        case 0x2673e0u: goto label_2673e0;
        case 0x2673e4u: goto label_2673e4;
        case 0x2673e8u: goto label_2673e8;
        case 0x2673ecu: goto label_2673ec;
        case 0x2673f0u: goto label_2673f0;
        case 0x2673f4u: goto label_2673f4;
        case 0x2673f8u: goto label_2673f8;
        case 0x2673fcu: goto label_2673fc;
        case 0x267400u: goto label_267400;
        case 0x267404u: goto label_267404;
        case 0x267408u: goto label_267408;
        case 0x26740cu: goto label_26740c;
        case 0x267410u: goto label_267410;
        case 0x267414u: goto label_267414;
        case 0x267418u: goto label_267418;
        case 0x26741cu: goto label_26741c;
        case 0x267420u: goto label_267420;
        case 0x267424u: goto label_267424;
        case 0x267428u: goto label_267428;
        case 0x26742cu: goto label_26742c;
        case 0x267430u: goto label_267430;
        case 0x267434u: goto label_267434;
        case 0x267438u: goto label_267438;
        case 0x26743cu: goto label_26743c;
        case 0x267440u: goto label_267440;
        case 0x267444u: goto label_267444;
        case 0x267448u: goto label_267448;
        case 0x26744cu: goto label_26744c;
        case 0x267450u: goto label_267450;
        case 0x267454u: goto label_267454;
        case 0x267458u: goto label_267458;
        case 0x26745cu: goto label_26745c;
        case 0x267460u: goto label_267460;
        case 0x267464u: goto label_267464;
        case 0x267468u: goto label_267468;
        case 0x26746cu: goto label_26746c;
        case 0x267470u: goto label_267470;
        case 0x267474u: goto label_267474;
        case 0x267478u: goto label_267478;
        case 0x26747cu: goto label_26747c;
        case 0x267480u: goto label_267480;
        case 0x267484u: goto label_267484;
        case 0x267488u: goto label_267488;
        case 0x26748cu: goto label_26748c;
        case 0x267490u: goto label_267490;
        case 0x267494u: goto label_267494;
        case 0x267498u: goto label_267498;
        case 0x26749cu: goto label_26749c;
        case 0x2674a0u: goto label_2674a0;
        case 0x2674a4u: goto label_2674a4;
        case 0x2674a8u: goto label_2674a8;
        case 0x2674acu: goto label_2674ac;
        case 0x2674b0u: goto label_2674b0;
        case 0x2674b4u: goto label_2674b4;
        case 0x2674b8u: goto label_2674b8;
        case 0x2674bcu: goto label_2674bc;
        case 0x2674c0u: goto label_2674c0;
        case 0x2674c4u: goto label_2674c4;
        case 0x2674c8u: goto label_2674c8;
        case 0x2674ccu: goto label_2674cc;
        case 0x2674d0u: goto label_2674d0;
        case 0x2674d4u: goto label_2674d4;
        case 0x2674d8u: goto label_2674d8;
        case 0x2674dcu: goto label_2674dc;
        case 0x2674e0u: goto label_2674e0;
        case 0x2674e4u: goto label_2674e4;
        case 0x2674e8u: goto label_2674e8;
        case 0x2674ecu: goto label_2674ec;
        case 0x2674f0u: goto label_2674f0;
        case 0x2674f4u: goto label_2674f4;
        case 0x2674f8u: goto label_2674f8;
        case 0x2674fcu: goto label_2674fc;
        case 0x267500u: goto label_267500;
        case 0x267504u: goto label_267504;
        case 0x267508u: goto label_267508;
        case 0x26750cu: goto label_26750c;
        case 0x267510u: goto label_267510;
        case 0x267514u: goto label_267514;
        case 0x267518u: goto label_267518;
        case 0x26751cu: goto label_26751c;
        case 0x267520u: goto label_267520;
        case 0x267524u: goto label_267524;
        case 0x267528u: goto label_267528;
        case 0x26752cu: goto label_26752c;
        case 0x267530u: goto label_267530;
        case 0x267534u: goto label_267534;
        case 0x267538u: goto label_267538;
        case 0x26753cu: goto label_26753c;
        case 0x267540u: goto label_267540;
        case 0x267544u: goto label_267544;
        case 0x267548u: goto label_267548;
        case 0x26754cu: goto label_26754c;
        case 0x267550u: goto label_267550;
        case 0x267554u: goto label_267554;
        case 0x267558u: goto label_267558;
        case 0x26755cu: goto label_26755c;
        case 0x267560u: goto label_267560;
        case 0x267564u: goto label_267564;
        case 0x267568u: goto label_267568;
        case 0x26756cu: goto label_26756c;
        case 0x267570u: goto label_267570;
        case 0x267574u: goto label_267574;
        case 0x267578u: goto label_267578;
        case 0x26757cu: goto label_26757c;
        case 0x267580u: goto label_267580;
        case 0x267584u: goto label_267584;
        case 0x267588u: goto label_267588;
        case 0x26758cu: goto label_26758c;
        case 0x267590u: goto label_267590;
        case 0x267594u: goto label_267594;
        case 0x267598u: goto label_267598;
        case 0x26759cu: goto label_26759c;
        case 0x2675a0u: goto label_2675a0;
        case 0x2675a4u: goto label_2675a4;
        case 0x2675a8u: goto label_2675a8;
        case 0x2675acu: goto label_2675ac;
        case 0x2675b0u: goto label_2675b0;
        case 0x2675b4u: goto label_2675b4;
        case 0x2675b8u: goto label_2675b8;
        case 0x2675bcu: goto label_2675bc;
        case 0x2675c0u: goto label_2675c0;
        case 0x2675c4u: goto label_2675c4;
        case 0x2675c8u: goto label_2675c8;
        case 0x2675ccu: goto label_2675cc;
        case 0x2675d0u: goto label_2675d0;
        case 0x2675d4u: goto label_2675d4;
        case 0x2675d8u: goto label_2675d8;
        case 0x2675dcu: goto label_2675dc;
        case 0x2675e0u: goto label_2675e0;
        case 0x2675e4u: goto label_2675e4;
        case 0x2675e8u: goto label_2675e8;
        case 0x2675ecu: goto label_2675ec;
        case 0x2675f0u: goto label_2675f0;
        case 0x2675f4u: goto label_2675f4;
        case 0x2675f8u: goto label_2675f8;
        case 0x2675fcu: goto label_2675fc;
        case 0x267600u: goto label_267600;
        case 0x267604u: goto label_267604;
        case 0x267608u: goto label_267608;
        case 0x26760cu: goto label_26760c;
        case 0x267610u: goto label_267610;
        case 0x267614u: goto label_267614;
        case 0x267618u: goto label_267618;
        case 0x26761cu: goto label_26761c;
        case 0x267620u: goto label_267620;
        case 0x267624u: goto label_267624;
        case 0x267628u: goto label_267628;
        case 0x26762cu: goto label_26762c;
        case 0x267630u: goto label_267630;
        case 0x267634u: goto label_267634;
        case 0x267638u: goto label_267638;
        case 0x26763cu: goto label_26763c;
        case 0x267640u: goto label_267640;
        case 0x267644u: goto label_267644;
        case 0x267648u: goto label_267648;
        case 0x26764cu: goto label_26764c;
        case 0x267650u: goto label_267650;
        case 0x267654u: goto label_267654;
        case 0x267658u: goto label_267658;
        case 0x26765cu: goto label_26765c;
        case 0x267660u: goto label_267660;
        case 0x267664u: goto label_267664;
        case 0x267668u: goto label_267668;
        case 0x26766cu: goto label_26766c;
        case 0x267670u: goto label_267670;
        case 0x267674u: goto label_267674;
        case 0x267678u: goto label_267678;
        case 0x26767cu: goto label_26767c;
        case 0x267680u: goto label_267680;
        case 0x267684u: goto label_267684;
        case 0x267688u: goto label_267688;
        case 0x26768cu: goto label_26768c;
        case 0x267690u: goto label_267690;
        case 0x267694u: goto label_267694;
        case 0x267698u: goto label_267698;
        case 0x26769cu: goto label_26769c;
        case 0x2676a0u: goto label_2676a0;
        case 0x2676a4u: goto label_2676a4;
        case 0x2676a8u: goto label_2676a8;
        case 0x2676acu: goto label_2676ac;
        case 0x2676b0u: goto label_2676b0;
        case 0x2676b4u: goto label_2676b4;
        case 0x2676b8u: goto label_2676b8;
        case 0x2676bcu: goto label_2676bc;
        case 0x2676c0u: goto label_2676c0;
        case 0x2676c4u: goto label_2676c4;
        case 0x2676c8u: goto label_2676c8;
        case 0x2676ccu: goto label_2676cc;
        case 0x2676d0u: goto label_2676d0;
        case 0x2676d4u: goto label_2676d4;
        case 0x2676d8u: goto label_2676d8;
        case 0x2676dcu: goto label_2676dc;
        case 0x2676e0u: goto label_2676e0;
        case 0x2676e4u: goto label_2676e4;
        case 0x2676e8u: goto label_2676e8;
        case 0x2676ecu: goto label_2676ec;
        case 0x2676f0u: goto label_2676f0;
        case 0x2676f4u: goto label_2676f4;
        case 0x2676f8u: goto label_2676f8;
        case 0x2676fcu: goto label_2676fc;
        case 0x267700u: goto label_267700;
        case 0x267704u: goto label_267704;
        case 0x267708u: goto label_267708;
        case 0x26770cu: goto label_26770c;
        case 0x267710u: goto label_267710;
        case 0x267714u: goto label_267714;
        case 0x267718u: goto label_267718;
        case 0x26771cu: goto label_26771c;
        case 0x267720u: goto label_267720;
        case 0x267724u: goto label_267724;
        case 0x267728u: goto label_267728;
        case 0x26772cu: goto label_26772c;
        case 0x267730u: goto label_267730;
        case 0x267734u: goto label_267734;
        case 0x267738u: goto label_267738;
        case 0x26773cu: goto label_26773c;
        case 0x267740u: goto label_267740;
        case 0x267744u: goto label_267744;
        case 0x267748u: goto label_267748;
        case 0x26774cu: goto label_26774c;
        case 0x267750u: goto label_267750;
        case 0x267754u: goto label_267754;
        case 0x267758u: goto label_267758;
        case 0x26775cu: goto label_26775c;
        case 0x267760u: goto label_267760;
        case 0x267764u: goto label_267764;
        case 0x267768u: goto label_267768;
        case 0x26776cu: goto label_26776c;
        case 0x267770u: goto label_267770;
        case 0x267774u: goto label_267774;
        case 0x267778u: goto label_267778;
        case 0x26777cu: goto label_26777c;
        case 0x267780u: goto label_267780;
        case 0x267784u: goto label_267784;
        case 0x267788u: goto label_267788;
        case 0x26778cu: goto label_26778c;
        case 0x267790u: goto label_267790;
        case 0x267794u: goto label_267794;
        case 0x267798u: goto label_267798;
        case 0x26779cu: goto label_26779c;
        case 0x2677a0u: goto label_2677a0;
        case 0x2677a4u: goto label_2677a4;
        case 0x2677a8u: goto label_2677a8;
        case 0x2677acu: goto label_2677ac;
        case 0x2677b0u: goto label_2677b0;
        case 0x2677b4u: goto label_2677b4;
        case 0x2677b8u: goto label_2677b8;
        case 0x2677bcu: goto label_2677bc;
        case 0x2677c0u: goto label_2677c0;
        case 0x2677c4u: goto label_2677c4;
        case 0x2677c8u: goto label_2677c8;
        case 0x2677ccu: goto label_2677cc;
        case 0x2677d0u: goto label_2677d0;
        case 0x2677d4u: goto label_2677d4;
        case 0x2677d8u: goto label_2677d8;
        case 0x2677dcu: goto label_2677dc;
        case 0x2677e0u: goto label_2677e0;
        case 0x2677e4u: goto label_2677e4;
        case 0x2677e8u: goto label_2677e8;
        case 0x2677ecu: goto label_2677ec;
        case 0x2677f0u: goto label_2677f0;
        case 0x2677f4u: goto label_2677f4;
        case 0x2677f8u: goto label_2677f8;
        case 0x2677fcu: goto label_2677fc;
        case 0x267800u: goto label_267800;
        case 0x267804u: goto label_267804;
        case 0x267808u: goto label_267808;
        case 0x26780cu: goto label_26780c;
        case 0x267810u: goto label_267810;
        case 0x267814u: goto label_267814;
        case 0x267818u: goto label_267818;
        case 0x26781cu: goto label_26781c;
        case 0x267820u: goto label_267820;
        case 0x267824u: goto label_267824;
        case 0x267828u: goto label_267828;
        case 0x26782cu: goto label_26782c;
        case 0x267830u: goto label_267830;
        case 0x267834u: goto label_267834;
        case 0x267838u: goto label_267838;
        case 0x26783cu: goto label_26783c;
        case 0x267840u: goto label_267840;
        case 0x267844u: goto label_267844;
        case 0x267848u: goto label_267848;
        case 0x26784cu: goto label_26784c;
        case 0x267850u: goto label_267850;
        case 0x267854u: goto label_267854;
        case 0x267858u: goto label_267858;
        case 0x26785cu: goto label_26785c;
        case 0x267860u: goto label_267860;
        case 0x267864u: goto label_267864;
        case 0x267868u: goto label_267868;
        case 0x26786cu: goto label_26786c;
        case 0x267870u: goto label_267870;
        case 0x267874u: goto label_267874;
        case 0x267878u: goto label_267878;
        case 0x26787cu: goto label_26787c;
        case 0x267880u: goto label_267880;
        case 0x267884u: goto label_267884;
        case 0x267888u: goto label_267888;
        case 0x26788cu: goto label_26788c;
        case 0x267890u: goto label_267890;
        case 0x267894u: goto label_267894;
        case 0x267898u: goto label_267898;
        case 0x26789cu: goto label_26789c;
        case 0x2678a0u: goto label_2678a0;
        case 0x2678a4u: goto label_2678a4;
        case 0x2678a8u: goto label_2678a8;
        case 0x2678acu: goto label_2678ac;
        case 0x2678b0u: goto label_2678b0;
        case 0x2678b4u: goto label_2678b4;
        case 0x2678b8u: goto label_2678b8;
        case 0x2678bcu: goto label_2678bc;
        case 0x2678c0u: goto label_2678c0;
        case 0x2678c4u: goto label_2678c4;
        case 0x2678c8u: goto label_2678c8;
        case 0x2678ccu: goto label_2678cc;
        case 0x2678d0u: goto label_2678d0;
        case 0x2678d4u: goto label_2678d4;
        case 0x2678d8u: goto label_2678d8;
        case 0x2678dcu: goto label_2678dc;
        case 0x2678e0u: goto label_2678e0;
        case 0x2678e4u: goto label_2678e4;
        case 0x2678e8u: goto label_2678e8;
        case 0x2678ecu: goto label_2678ec;
        case 0x2678f0u: goto label_2678f0;
        case 0x2678f4u: goto label_2678f4;
        case 0x2678f8u: goto label_2678f8;
        case 0x2678fcu: goto label_2678fc;
        case 0x267900u: goto label_267900;
        case 0x267904u: goto label_267904;
        case 0x267908u: goto label_267908;
        case 0x26790cu: goto label_26790c;
        case 0x267910u: goto label_267910;
        case 0x267914u: goto label_267914;
        case 0x267918u: goto label_267918;
        case 0x26791cu: goto label_26791c;
        case 0x267920u: goto label_267920;
        case 0x267924u: goto label_267924;
        case 0x267928u: goto label_267928;
        case 0x26792cu: goto label_26792c;
        case 0x267930u: goto label_267930;
        case 0x267934u: goto label_267934;
        case 0x267938u: goto label_267938;
        case 0x26793cu: goto label_26793c;
        case 0x267940u: goto label_267940;
        case 0x267944u: goto label_267944;
        case 0x267948u: goto label_267948;
        case 0x26794cu: goto label_26794c;
        case 0x267950u: goto label_267950;
        case 0x267954u: goto label_267954;
        case 0x267958u: goto label_267958;
        case 0x26795cu: goto label_26795c;
        case 0x267960u: goto label_267960;
        case 0x267964u: goto label_267964;
        case 0x267968u: goto label_267968;
        case 0x26796cu: goto label_26796c;
        case 0x267970u: goto label_267970;
        case 0x267974u: goto label_267974;
        case 0x267978u: goto label_267978;
        case 0x26797cu: goto label_26797c;
        case 0x267980u: goto label_267980;
        case 0x267984u: goto label_267984;
        case 0x267988u: goto label_267988;
        case 0x26798cu: goto label_26798c;
        case 0x267990u: goto label_267990;
        case 0x267994u: goto label_267994;
        case 0x267998u: goto label_267998;
        case 0x26799cu: goto label_26799c;
        case 0x2679a0u: goto label_2679a0;
        case 0x2679a4u: goto label_2679a4;
        case 0x2679a8u: goto label_2679a8;
        case 0x2679acu: goto label_2679ac;
        case 0x2679b0u: goto label_2679b0;
        case 0x2679b4u: goto label_2679b4;
        case 0x2679b8u: goto label_2679b8;
        case 0x2679bcu: goto label_2679bc;
        case 0x2679c0u: goto label_2679c0;
        case 0x2679c4u: goto label_2679c4;
        case 0x2679c8u: goto label_2679c8;
        case 0x2679ccu: goto label_2679cc;
        case 0x2679d0u: goto label_2679d0;
        case 0x2679d4u: goto label_2679d4;
        case 0x2679d8u: goto label_2679d8;
        case 0x2679dcu: goto label_2679dc;
        case 0x2679e0u: goto label_2679e0;
        case 0x2679e4u: goto label_2679e4;
        case 0x2679e8u: goto label_2679e8;
        case 0x2679ecu: goto label_2679ec;
        case 0x2679f0u: goto label_2679f0;
        case 0x2679f4u: goto label_2679f4;
        case 0x2679f8u: goto label_2679f8;
        case 0x2679fcu: goto label_2679fc;
        case 0x267a00u: goto label_267a00;
        case 0x267a04u: goto label_267a04;
        case 0x267a08u: goto label_267a08;
        case 0x267a0cu: goto label_267a0c;
        case 0x267a10u: goto label_267a10;
        case 0x267a14u: goto label_267a14;
        case 0x267a18u: goto label_267a18;
        case 0x267a1cu: goto label_267a1c;
        case 0x267a20u: goto label_267a20;
        case 0x267a24u: goto label_267a24;
        case 0x267a28u: goto label_267a28;
        case 0x267a2cu: goto label_267a2c;
        case 0x267a30u: goto label_267a30;
        case 0x267a34u: goto label_267a34;
        case 0x267a38u: goto label_267a38;
        case 0x267a3cu: goto label_267a3c;
        case 0x267a40u: goto label_267a40;
        case 0x267a44u: goto label_267a44;
        case 0x267a48u: goto label_267a48;
        case 0x267a4cu: goto label_267a4c;
        case 0x267a50u: goto label_267a50;
        case 0x267a54u: goto label_267a54;
        case 0x267a58u: goto label_267a58;
        case 0x267a5cu: goto label_267a5c;
        case 0x267a60u: goto label_267a60;
        case 0x267a64u: goto label_267a64;
        case 0x267a68u: goto label_267a68;
        case 0x267a6cu: goto label_267a6c;
        case 0x267a70u: goto label_267a70;
        case 0x267a74u: goto label_267a74;
        case 0x267a78u: goto label_267a78;
        case 0x267a7cu: goto label_267a7c;
        case 0x267a80u: goto label_267a80;
        case 0x267a84u: goto label_267a84;
        case 0x267a88u: goto label_267a88;
        case 0x267a8cu: goto label_267a8c;
        case 0x267a90u: goto label_267a90;
        case 0x267a94u: goto label_267a94;
        case 0x267a98u: goto label_267a98;
        case 0x267a9cu: goto label_267a9c;
        case 0x267aa0u: goto label_267aa0;
        case 0x267aa4u: goto label_267aa4;
        case 0x267aa8u: goto label_267aa8;
        case 0x267aacu: goto label_267aac;
        case 0x267ab0u: goto label_267ab0;
        case 0x267ab4u: goto label_267ab4;
        case 0x267ab8u: goto label_267ab8;
        case 0x267abcu: goto label_267abc;
        case 0x267ac0u: goto label_267ac0;
        case 0x267ac4u: goto label_267ac4;
        case 0x267ac8u: goto label_267ac8;
        case 0x267accu: goto label_267acc;
        case 0x267ad0u: goto label_267ad0;
        case 0x267ad4u: goto label_267ad4;
        case 0x267ad8u: goto label_267ad8;
        case 0x267adcu: goto label_267adc;
        case 0x267ae0u: goto label_267ae0;
        case 0x267ae4u: goto label_267ae4;
        case 0x267ae8u: goto label_267ae8;
        case 0x267aecu: goto label_267aec;
        case 0x267af0u: goto label_267af0;
        case 0x267af4u: goto label_267af4;
        case 0x267af8u: goto label_267af8;
        case 0x267afcu: goto label_267afc;
        case 0x267b00u: goto label_267b00;
        case 0x267b04u: goto label_267b04;
        case 0x267b08u: goto label_267b08;
        case 0x267b0cu: goto label_267b0c;
        case 0x267b10u: goto label_267b10;
        case 0x267b14u: goto label_267b14;
        case 0x267b18u: goto label_267b18;
        case 0x267b1cu: goto label_267b1c;
        case 0x267b20u: goto label_267b20;
        case 0x267b24u: goto label_267b24;
        case 0x267b28u: goto label_267b28;
        case 0x267b2cu: goto label_267b2c;
        case 0x267b30u: goto label_267b30;
        case 0x267b34u: goto label_267b34;
        case 0x267b38u: goto label_267b38;
        case 0x267b3cu: goto label_267b3c;
        case 0x267b40u: goto label_267b40;
        case 0x267b44u: goto label_267b44;
        case 0x267b48u: goto label_267b48;
        case 0x267b4cu: goto label_267b4c;
        case 0x267b50u: goto label_267b50;
        case 0x267b54u: goto label_267b54;
        case 0x267b58u: goto label_267b58;
        case 0x267b5cu: goto label_267b5c;
        case 0x267b60u: goto label_267b60;
        case 0x267b64u: goto label_267b64;
        case 0x267b68u: goto label_267b68;
        case 0x267b6cu: goto label_267b6c;
        case 0x267b70u: goto label_267b70;
        case 0x267b74u: goto label_267b74;
        case 0x267b78u: goto label_267b78;
        case 0x267b7cu: goto label_267b7c;
        case 0x267b80u: goto label_267b80;
        case 0x267b84u: goto label_267b84;
        case 0x267b88u: goto label_267b88;
        case 0x267b8cu: goto label_267b8c;
        case 0x267b90u: goto label_267b90;
        case 0x267b94u: goto label_267b94;
        case 0x267b98u: goto label_267b98;
        case 0x267b9cu: goto label_267b9c;
        case 0x267ba0u: goto label_267ba0;
        case 0x267ba4u: goto label_267ba4;
        case 0x267ba8u: goto label_267ba8;
        case 0x267bacu: goto label_267bac;
        case 0x267bb0u: goto label_267bb0;
        case 0x267bb4u: goto label_267bb4;
        case 0x267bb8u: goto label_267bb8;
        case 0x267bbcu: goto label_267bbc;
        case 0x267bc0u: goto label_267bc0;
        case 0x267bc4u: goto label_267bc4;
        case 0x267bc8u: goto label_267bc8;
        case 0x267bccu: goto label_267bcc;
        case 0x267bd0u: goto label_267bd0;
        case 0x267bd4u: goto label_267bd4;
        case 0x267bd8u: goto label_267bd8;
        case 0x267bdcu: goto label_267bdc;
        case 0x267be0u: goto label_267be0;
        case 0x267be4u: goto label_267be4;
        case 0x267be8u: goto label_267be8;
        case 0x267becu: goto label_267bec;
        case 0x267bf0u: goto label_267bf0;
        case 0x267bf4u: goto label_267bf4;
        case 0x267bf8u: goto label_267bf8;
        case 0x267bfcu: goto label_267bfc;
        case 0x267c00u: goto label_267c00;
        case 0x267c04u: goto label_267c04;
        case 0x267c08u: goto label_267c08;
        case 0x267c0cu: goto label_267c0c;
        case 0x267c10u: goto label_267c10;
        case 0x267c14u: goto label_267c14;
        case 0x267c18u: goto label_267c18;
        case 0x267c1cu: goto label_267c1c;
        case 0x267c20u: goto label_267c20;
        case 0x267c24u: goto label_267c24;
        case 0x267c28u: goto label_267c28;
        case 0x267c2cu: goto label_267c2c;
        case 0x267c30u: goto label_267c30;
        case 0x267c34u: goto label_267c34;
        case 0x267c38u: goto label_267c38;
        case 0x267c3cu: goto label_267c3c;
        case 0x267c40u: goto label_267c40;
        case 0x267c44u: goto label_267c44;
        case 0x267c48u: goto label_267c48;
        case 0x267c4cu: goto label_267c4c;
        case 0x267c50u: goto label_267c50;
        case 0x267c54u: goto label_267c54;
        case 0x267c58u: goto label_267c58;
        case 0x267c5cu: goto label_267c5c;
        case 0x267c60u: goto label_267c60;
        case 0x267c64u: goto label_267c64;
        case 0x267c68u: goto label_267c68;
        case 0x267c6cu: goto label_267c6c;
        case 0x267c70u: goto label_267c70;
        case 0x267c74u: goto label_267c74;
        case 0x267c78u: goto label_267c78;
        case 0x267c7cu: goto label_267c7c;
        case 0x267c80u: goto label_267c80;
        case 0x267c84u: goto label_267c84;
        case 0x267c88u: goto label_267c88;
        case 0x267c8cu: goto label_267c8c;
        case 0x267c90u: goto label_267c90;
        case 0x267c94u: goto label_267c94;
        case 0x267c98u: goto label_267c98;
        case 0x267c9cu: goto label_267c9c;
        case 0x267ca0u: goto label_267ca0;
        case 0x267ca4u: goto label_267ca4;
        case 0x267ca8u: goto label_267ca8;
        case 0x267cacu: goto label_267cac;
        case 0x267cb0u: goto label_267cb0;
        case 0x267cb4u: goto label_267cb4;
        case 0x267cb8u: goto label_267cb8;
        case 0x267cbcu: goto label_267cbc;
        case 0x267cc0u: goto label_267cc0;
        case 0x267cc4u: goto label_267cc4;
        case 0x267cc8u: goto label_267cc8;
        case 0x267cccu: goto label_267ccc;
        case 0x267cd0u: goto label_267cd0;
        case 0x267cd4u: goto label_267cd4;
        case 0x267cd8u: goto label_267cd8;
        case 0x267cdcu: goto label_267cdc;
        case 0x267ce0u: goto label_267ce0;
        case 0x267ce4u: goto label_267ce4;
        case 0x267ce8u: goto label_267ce8;
        case 0x267cecu: goto label_267cec;
        case 0x267cf0u: goto label_267cf0;
        case 0x267cf4u: goto label_267cf4;
        case 0x267cf8u: goto label_267cf8;
        case 0x267cfcu: goto label_267cfc;
        case 0x267d00u: goto label_267d00;
        case 0x267d04u: goto label_267d04;
        case 0x267d08u: goto label_267d08;
        case 0x267d0cu: goto label_267d0c;
        case 0x267d10u: goto label_267d10;
        case 0x267d14u: goto label_267d14;
        case 0x267d18u: goto label_267d18;
        case 0x267d1cu: goto label_267d1c;
        case 0x267d20u: goto label_267d20;
        case 0x267d24u: goto label_267d24;
        case 0x267d28u: goto label_267d28;
        case 0x267d2cu: goto label_267d2c;
        case 0x267d30u: goto label_267d30;
        case 0x267d34u: goto label_267d34;
        case 0x267d38u: goto label_267d38;
        case 0x267d3cu: goto label_267d3c;
        case 0x267d40u: goto label_267d40;
        case 0x267d44u: goto label_267d44;
        case 0x267d48u: goto label_267d48;
        case 0x267d4cu: goto label_267d4c;
        case 0x267d50u: goto label_267d50;
        case 0x267d54u: goto label_267d54;
        case 0x267d58u: goto label_267d58;
        case 0x267d5cu: goto label_267d5c;
        case 0x267d60u: goto label_267d60;
        case 0x267d64u: goto label_267d64;
        case 0x267d68u: goto label_267d68;
        case 0x267d6cu: goto label_267d6c;
        case 0x267d70u: goto label_267d70;
        case 0x267d74u: goto label_267d74;
        case 0x267d78u: goto label_267d78;
        case 0x267d7cu: goto label_267d7c;
        case 0x267d80u: goto label_267d80;
        case 0x267d84u: goto label_267d84;
        case 0x267d88u: goto label_267d88;
        case 0x267d8cu: goto label_267d8c;
        case 0x267d90u: goto label_267d90;
        case 0x267d94u: goto label_267d94;
        case 0x267d98u: goto label_267d98;
        case 0x267d9cu: goto label_267d9c;
        case 0x267da0u: goto label_267da0;
        case 0x267da4u: goto label_267da4;
        case 0x267da8u: goto label_267da8;
        case 0x267dacu: goto label_267dac;
        case 0x267db0u: goto label_267db0;
        case 0x267db4u: goto label_267db4;
        case 0x267db8u: goto label_267db8;
        case 0x267dbcu: goto label_267dbc;
        case 0x267dc0u: goto label_267dc0;
        case 0x267dc4u: goto label_267dc4;
        case 0x267dc8u: goto label_267dc8;
        case 0x267dccu: goto label_267dcc;
        case 0x267dd0u: goto label_267dd0;
        case 0x267dd4u: goto label_267dd4;
        case 0x267dd8u: goto label_267dd8;
        case 0x267ddcu: goto label_267ddc;
        case 0x267de0u: goto label_267de0;
        case 0x267de4u: goto label_267de4;
        case 0x267de8u: goto label_267de8;
        case 0x267decu: goto label_267dec;
        case 0x267df0u: goto label_267df0;
        case 0x267df4u: goto label_267df4;
        case 0x267df8u: goto label_267df8;
        case 0x267dfcu: goto label_267dfc;
        case 0x267e00u: goto label_267e00;
        case 0x267e04u: goto label_267e04;
        case 0x267e08u: goto label_267e08;
        case 0x267e0cu: goto label_267e0c;
        case 0x267e10u: goto label_267e10;
        case 0x267e14u: goto label_267e14;
        case 0x267e18u: goto label_267e18;
        case 0x267e1cu: goto label_267e1c;
        case 0x267e20u: goto label_267e20;
        case 0x267e24u: goto label_267e24;
        case 0x267e28u: goto label_267e28;
        case 0x267e2cu: goto label_267e2c;
        case 0x267e30u: goto label_267e30;
        case 0x267e34u: goto label_267e34;
        case 0x267e38u: goto label_267e38;
        case 0x267e3cu: goto label_267e3c;
        case 0x267e40u: goto label_267e40;
        case 0x267e44u: goto label_267e44;
        case 0x267e48u: goto label_267e48;
        case 0x267e4cu: goto label_267e4c;
        case 0x267e50u: goto label_267e50;
        case 0x267e54u: goto label_267e54;
        case 0x267e58u: goto label_267e58;
        case 0x267e5cu: goto label_267e5c;
        case 0x267e60u: goto label_267e60;
        case 0x267e64u: goto label_267e64;
        case 0x267e68u: goto label_267e68;
        case 0x267e6cu: goto label_267e6c;
        case 0x267e70u: goto label_267e70;
        case 0x267e74u: goto label_267e74;
        case 0x267e78u: goto label_267e78;
        case 0x267e7cu: goto label_267e7c;
        case 0x267e80u: goto label_267e80;
        case 0x267e84u: goto label_267e84;
        case 0x267e88u: goto label_267e88;
        case 0x267e8cu: goto label_267e8c;
        case 0x267e90u: goto label_267e90;
        case 0x267e94u: goto label_267e94;
        case 0x267e98u: goto label_267e98;
        case 0x267e9cu: goto label_267e9c;
        case 0x267ea0u: goto label_267ea0;
        case 0x267ea4u: goto label_267ea4;
        case 0x267ea8u: goto label_267ea8;
        case 0x267eacu: goto label_267eac;
        case 0x267eb0u: goto label_267eb0;
        case 0x267eb4u: goto label_267eb4;
        case 0x267eb8u: goto label_267eb8;
        case 0x267ebcu: goto label_267ebc;
        case 0x267ec0u: goto label_267ec0;
        case 0x267ec4u: goto label_267ec4;
        case 0x267ec8u: goto label_267ec8;
        case 0x267eccu: goto label_267ecc;
        case 0x267ed0u: goto label_267ed0;
        case 0x267ed4u: goto label_267ed4;
        case 0x267ed8u: goto label_267ed8;
        case 0x267edcu: goto label_267edc;
        case 0x267ee0u: goto label_267ee0;
        case 0x267ee4u: goto label_267ee4;
        case 0x267ee8u: goto label_267ee8;
        case 0x267eecu: goto label_267eec;
        case 0x267ef0u: goto label_267ef0;
        case 0x267ef4u: goto label_267ef4;
        case 0x267ef8u: goto label_267ef8;
        case 0x267efcu: goto label_267efc;
        case 0x267f00u: goto label_267f00;
        case 0x267f04u: goto label_267f04;
        case 0x267f08u: goto label_267f08;
        case 0x267f0cu: goto label_267f0c;
        case 0x267f10u: goto label_267f10;
        case 0x267f14u: goto label_267f14;
        case 0x267f18u: goto label_267f18;
        case 0x267f1cu: goto label_267f1c;
        case 0x267f20u: goto label_267f20;
        case 0x267f24u: goto label_267f24;
        case 0x267f28u: goto label_267f28;
        case 0x267f2cu: goto label_267f2c;
        case 0x267f30u: goto label_267f30;
        case 0x267f34u: goto label_267f34;
        case 0x267f38u: goto label_267f38;
        case 0x267f3cu: goto label_267f3c;
        case 0x267f40u: goto label_267f40;
        case 0x267f44u: goto label_267f44;
        case 0x267f48u: goto label_267f48;
        case 0x267f4cu: goto label_267f4c;
        case 0x267f50u: goto label_267f50;
        case 0x267f54u: goto label_267f54;
        case 0x267f58u: goto label_267f58;
        case 0x267f5cu: goto label_267f5c;
        case 0x267f60u: goto label_267f60;
        case 0x267f64u: goto label_267f64;
        case 0x267f68u: goto label_267f68;
        case 0x267f6cu: goto label_267f6c;
        case 0x267f70u: goto label_267f70;
        case 0x267f74u: goto label_267f74;
        case 0x267f78u: goto label_267f78;
        case 0x267f7cu: goto label_267f7c;
        case 0x267f80u: goto label_267f80;
        case 0x267f84u: goto label_267f84;
        case 0x267f88u: goto label_267f88;
        case 0x267f8cu: goto label_267f8c;
        case 0x267f90u: goto label_267f90;
        case 0x267f94u: goto label_267f94;
        case 0x267f98u: goto label_267f98;
        case 0x267f9cu: goto label_267f9c;
        case 0x267fa0u: goto label_267fa0;
        case 0x267fa4u: goto label_267fa4;
        case 0x267fa8u: goto label_267fa8;
        case 0x267facu: goto label_267fac;
        case 0x267fb0u: goto label_267fb0;
        case 0x267fb4u: goto label_267fb4;
        case 0x267fb8u: goto label_267fb8;
        case 0x267fbcu: goto label_267fbc;
        case 0x267fc0u: goto label_267fc0;
        case 0x267fc4u: goto label_267fc4;
        case 0x267fc8u: goto label_267fc8;
        case 0x267fccu: goto label_267fcc;
        case 0x267fd0u: goto label_267fd0;
        case 0x267fd4u: goto label_267fd4;
        case 0x267fd8u: goto label_267fd8;
        case 0x267fdcu: goto label_267fdc;
        case 0x267fe0u: goto label_267fe0;
        case 0x267fe4u: goto label_267fe4;
        case 0x267fe8u: goto label_267fe8;
        case 0x267fecu: goto label_267fec;
        case 0x267ff0u: goto label_267ff0;
        case 0x267ff4u: goto label_267ff4;
        case 0x267ff8u: goto label_267ff8;
        case 0x267ffcu: goto label_267ffc;
        case 0x268000u: goto label_268000;
        case 0x268004u: goto label_268004;
        case 0x268008u: goto label_268008;
        case 0x26800cu: goto label_26800c;
        case 0x268010u: goto label_268010;
        case 0x268014u: goto label_268014;
        case 0x268018u: goto label_268018;
        case 0x26801cu: goto label_26801c;
        case 0x268020u: goto label_268020;
        case 0x268024u: goto label_268024;
        case 0x268028u: goto label_268028;
        case 0x26802cu: goto label_26802c;
        case 0x268030u: goto label_268030;
        case 0x268034u: goto label_268034;
        case 0x268038u: goto label_268038;
        case 0x26803cu: goto label_26803c;
        case 0x268040u: goto label_268040;
        case 0x268044u: goto label_268044;
        case 0x268048u: goto label_268048;
        case 0x26804cu: goto label_26804c;
        case 0x268050u: goto label_268050;
        case 0x268054u: goto label_268054;
        case 0x268058u: goto label_268058;
        case 0x26805cu: goto label_26805c;
        case 0x268060u: goto label_268060;
        case 0x268064u: goto label_268064;
        case 0x268068u: goto label_268068;
        case 0x26806cu: goto label_26806c;
        case 0x268070u: goto label_268070;
        case 0x268074u: goto label_268074;
        case 0x268078u: goto label_268078;
        case 0x26807cu: goto label_26807c;
        case 0x268080u: goto label_268080;
        case 0x268084u: goto label_268084;
        case 0x268088u: goto label_268088;
        case 0x26808cu: goto label_26808c;
        case 0x268090u: goto label_268090;
        case 0x268094u: goto label_268094;
        case 0x268098u: goto label_268098;
        case 0x26809cu: goto label_26809c;
        case 0x2680a0u: goto label_2680a0;
        case 0x2680a4u: goto label_2680a4;
        case 0x2680a8u: goto label_2680a8;
        case 0x2680acu: goto label_2680ac;
        case 0x2680b0u: goto label_2680b0;
        case 0x2680b4u: goto label_2680b4;
        case 0x2680b8u: goto label_2680b8;
        case 0x2680bcu: goto label_2680bc;
        case 0x2680c0u: goto label_2680c0;
        case 0x2680c4u: goto label_2680c4;
        case 0x2680c8u: goto label_2680c8;
        case 0x2680ccu: goto label_2680cc;
        case 0x2680d0u: goto label_2680d0;
        case 0x2680d4u: goto label_2680d4;
        case 0x2680d8u: goto label_2680d8;
        case 0x2680dcu: goto label_2680dc;
        case 0x2680e0u: goto label_2680e0;
        case 0x2680e4u: goto label_2680e4;
        case 0x2680e8u: goto label_2680e8;
        case 0x2680ecu: goto label_2680ec;
        case 0x2680f0u: goto label_2680f0;
        case 0x2680f4u: goto label_2680f4;
        case 0x2680f8u: goto label_2680f8;
        case 0x2680fcu: goto label_2680fc;
        case 0x268100u: goto label_268100;
        case 0x268104u: goto label_268104;
        case 0x268108u: goto label_268108;
        case 0x26810cu: goto label_26810c;
        case 0x268110u: goto label_268110;
        case 0x268114u: goto label_268114;
        case 0x268118u: goto label_268118;
        case 0x26811cu: goto label_26811c;
        case 0x268120u: goto label_268120;
        case 0x268124u: goto label_268124;
        case 0x268128u: goto label_268128;
        case 0x26812cu: goto label_26812c;
        case 0x268130u: goto label_268130;
        case 0x268134u: goto label_268134;
        case 0x268138u: goto label_268138;
        case 0x26813cu: goto label_26813c;
        case 0x268140u: goto label_268140;
        case 0x268144u: goto label_268144;
        case 0x268148u: goto label_268148;
        case 0x26814cu: goto label_26814c;
        case 0x268150u: goto label_268150;
        case 0x268154u: goto label_268154;
        case 0x268158u: goto label_268158;
        case 0x26815cu: goto label_26815c;
        case 0x268160u: goto label_268160;
        case 0x268164u: goto label_268164;
        case 0x268168u: goto label_268168;
        case 0x26816cu: goto label_26816c;
        case 0x268170u: goto label_268170;
        case 0x268174u: goto label_268174;
        case 0x268178u: goto label_268178;
        case 0x26817cu: goto label_26817c;
        case 0x268180u: goto label_268180;
        case 0x268184u: goto label_268184;
        case 0x268188u: goto label_268188;
        case 0x26818cu: goto label_26818c;
        case 0x268190u: goto label_268190;
        case 0x268194u: goto label_268194;
        case 0x268198u: goto label_268198;
        case 0x26819cu: goto label_26819c;
        case 0x2681a0u: goto label_2681a0;
        case 0x2681a4u: goto label_2681a4;
        case 0x2681a8u: goto label_2681a8;
        case 0x2681acu: goto label_2681ac;
        case 0x2681b0u: goto label_2681b0;
        case 0x2681b4u: goto label_2681b4;
        case 0x2681b8u: goto label_2681b8;
        case 0x2681bcu: goto label_2681bc;
        case 0x2681c0u: goto label_2681c0;
        case 0x2681c4u: goto label_2681c4;
        case 0x2681c8u: goto label_2681c8;
        case 0x2681ccu: goto label_2681cc;
        case 0x2681d0u: goto label_2681d0;
        case 0x2681d4u: goto label_2681d4;
        case 0x2681d8u: goto label_2681d8;
        case 0x2681dcu: goto label_2681dc;
        case 0x2681e0u: goto label_2681e0;
        case 0x2681e4u: goto label_2681e4;
        case 0x2681e8u: goto label_2681e8;
        case 0x2681ecu: goto label_2681ec;
        case 0x2681f0u: goto label_2681f0;
        case 0x2681f4u: goto label_2681f4;
        case 0x2681f8u: goto label_2681f8;
        case 0x2681fcu: goto label_2681fc;
        case 0x268200u: goto label_268200;
        case 0x268204u: goto label_268204;
        case 0x268208u: goto label_268208;
        case 0x26820cu: goto label_26820c;
        case 0x268210u: goto label_268210;
        case 0x268214u: goto label_268214;
        case 0x268218u: goto label_268218;
        case 0x26821cu: goto label_26821c;
        case 0x268220u: goto label_268220;
        case 0x268224u: goto label_268224;
        case 0x268228u: goto label_268228;
        case 0x26822cu: goto label_26822c;
        case 0x268230u: goto label_268230;
        case 0x268234u: goto label_268234;
        case 0x268238u: goto label_268238;
        case 0x26823cu: goto label_26823c;
        case 0x268240u: goto label_268240;
        case 0x268244u: goto label_268244;
        case 0x268248u: goto label_268248;
        case 0x26824cu: goto label_26824c;
        case 0x268250u: goto label_268250;
        case 0x268254u: goto label_268254;
        case 0x268258u: goto label_268258;
        case 0x26825cu: goto label_26825c;
        case 0x268260u: goto label_268260;
        case 0x268264u: goto label_268264;
        case 0x268268u: goto label_268268;
        case 0x26826cu: goto label_26826c;
        case 0x268270u: goto label_268270;
        case 0x268274u: goto label_268274;
        case 0x268278u: goto label_268278;
        case 0x26827cu: goto label_26827c;
        case 0x268280u: goto label_268280;
        case 0x268284u: goto label_268284;
        case 0x268288u: goto label_268288;
        case 0x26828cu: goto label_26828c;
        case 0x268290u: goto label_268290;
        case 0x268294u: goto label_268294;
        case 0x268298u: goto label_268298;
        case 0x26829cu: goto label_26829c;
        case 0x2682a0u: goto label_2682a0;
        case 0x2682a4u: goto label_2682a4;
        case 0x2682a8u: goto label_2682a8;
        case 0x2682acu: goto label_2682ac;
        case 0x2682b0u: goto label_2682b0;
        case 0x2682b4u: goto label_2682b4;
        case 0x2682b8u: goto label_2682b8;
        case 0x2682bcu: goto label_2682bc;
        case 0x2682c0u: goto label_2682c0;
        case 0x2682c4u: goto label_2682c4;
        case 0x2682c8u: goto label_2682c8;
        case 0x2682ccu: goto label_2682cc;
        case 0x2682d0u: goto label_2682d0;
        case 0x2682d4u: goto label_2682d4;
        case 0x2682d8u: goto label_2682d8;
        case 0x2682dcu: goto label_2682dc;
        case 0x2682e0u: goto label_2682e0;
        case 0x2682e4u: goto label_2682e4;
        case 0x2682e8u: goto label_2682e8;
        case 0x2682ecu: goto label_2682ec;
        case 0x2682f0u: goto label_2682f0;
        case 0x2682f4u: goto label_2682f4;
        case 0x2682f8u: goto label_2682f8;
        case 0x2682fcu: goto label_2682fc;
        case 0x268300u: goto label_268300;
        case 0x268304u: goto label_268304;
        case 0x268308u: goto label_268308;
        case 0x26830cu: goto label_26830c;
        case 0x268310u: goto label_268310;
        case 0x268314u: goto label_268314;
        case 0x268318u: goto label_268318;
        case 0x26831cu: goto label_26831c;
        case 0x268320u: goto label_268320;
        case 0x268324u: goto label_268324;
        case 0x268328u: goto label_268328;
        case 0x26832cu: goto label_26832c;
        case 0x268330u: goto label_268330;
        case 0x268334u: goto label_268334;
        case 0x268338u: goto label_268338;
        case 0x26833cu: goto label_26833c;
        case 0x268340u: goto label_268340;
        case 0x268344u: goto label_268344;
        case 0x268348u: goto label_268348;
        case 0x26834cu: goto label_26834c;
        case 0x268350u: goto label_268350;
        case 0x268354u: goto label_268354;
        case 0x268358u: goto label_268358;
        case 0x26835cu: goto label_26835c;
        case 0x268360u: goto label_268360;
        case 0x268364u: goto label_268364;
        case 0x268368u: goto label_268368;
        case 0x26836cu: goto label_26836c;
        case 0x268370u: goto label_268370;
        case 0x268374u: goto label_268374;
        case 0x268378u: goto label_268378;
        case 0x26837cu: goto label_26837c;
        case 0x268380u: goto label_268380;
        case 0x268384u: goto label_268384;
        case 0x268388u: goto label_268388;
        case 0x26838cu: goto label_26838c;
        case 0x268390u: goto label_268390;
        case 0x268394u: goto label_268394;
        case 0x268398u: goto label_268398;
        case 0x26839cu: goto label_26839c;
        case 0x2683a0u: goto label_2683a0;
        case 0x2683a4u: goto label_2683a4;
        case 0x2683a8u: goto label_2683a8;
        case 0x2683acu: goto label_2683ac;
        case 0x2683b0u: goto label_2683b0;
        case 0x2683b4u: goto label_2683b4;
        case 0x2683b8u: goto label_2683b8;
        case 0x2683bcu: goto label_2683bc;
        case 0x2683c0u: goto label_2683c0;
        case 0x2683c4u: goto label_2683c4;
        case 0x2683c8u: goto label_2683c8;
        case 0x2683ccu: goto label_2683cc;
        case 0x2683d0u: goto label_2683d0;
        case 0x2683d4u: goto label_2683d4;
        case 0x2683d8u: goto label_2683d8;
        case 0x2683dcu: goto label_2683dc;
        case 0x2683e0u: goto label_2683e0;
        case 0x2683e4u: goto label_2683e4;
        case 0x2683e8u: goto label_2683e8;
        case 0x2683ecu: goto label_2683ec;
        case 0x2683f0u: goto label_2683f0;
        case 0x2683f4u: goto label_2683f4;
        case 0x2683f8u: goto label_2683f8;
        case 0x2683fcu: goto label_2683fc;
        case 0x268400u: goto label_268400;
        case 0x268404u: goto label_268404;
        case 0x268408u: goto label_268408;
        case 0x26840cu: goto label_26840c;
        case 0x268410u: goto label_268410;
        case 0x268414u: goto label_268414;
        case 0x268418u: goto label_268418;
        case 0x26841cu: goto label_26841c;
        case 0x268420u: goto label_268420;
        case 0x268424u: goto label_268424;
        case 0x268428u: goto label_268428;
        case 0x26842cu: goto label_26842c;
        case 0x268430u: goto label_268430;
        case 0x268434u: goto label_268434;
        case 0x268438u: goto label_268438;
        case 0x26843cu: goto label_26843c;
        case 0x268440u: goto label_268440;
        case 0x268444u: goto label_268444;
        case 0x268448u: goto label_268448;
        case 0x26844cu: goto label_26844c;
        case 0x268450u: goto label_268450;
        case 0x268454u: goto label_268454;
        case 0x268458u: goto label_268458;
        case 0x26845cu: goto label_26845c;
        case 0x268460u: goto label_268460;
        case 0x268464u: goto label_268464;
        case 0x268468u: goto label_268468;
        case 0x26846cu: goto label_26846c;
        case 0x268470u: goto label_268470;
        case 0x268474u: goto label_268474;
        case 0x268478u: goto label_268478;
        case 0x26847cu: goto label_26847c;
        case 0x268480u: goto label_268480;
        case 0x268484u: goto label_268484;
        case 0x268488u: goto label_268488;
        case 0x26848cu: goto label_26848c;
        case 0x268490u: goto label_268490;
        case 0x268494u: goto label_268494;
        case 0x268498u: goto label_268498;
        case 0x26849cu: goto label_26849c;
        case 0x2684a0u: goto label_2684a0;
        case 0x2684a4u: goto label_2684a4;
        case 0x2684a8u: goto label_2684a8;
        case 0x2684acu: goto label_2684ac;
        case 0x2684b0u: goto label_2684b0;
        case 0x2684b4u: goto label_2684b4;
        case 0x2684b8u: goto label_2684b8;
        case 0x2684bcu: goto label_2684bc;
        case 0x2684c0u: goto label_2684c0;
        case 0x2684c4u: goto label_2684c4;
        case 0x2684c8u: goto label_2684c8;
        case 0x2684ccu: goto label_2684cc;
        case 0x2684d0u: goto label_2684d0;
        case 0x2684d4u: goto label_2684d4;
        case 0x2684d8u: goto label_2684d8;
        case 0x2684dcu: goto label_2684dc;
        case 0x2684e0u: goto label_2684e0;
        case 0x2684e4u: goto label_2684e4;
        case 0x2684e8u: goto label_2684e8;
        case 0x2684ecu: goto label_2684ec;
        case 0x2684f0u: goto label_2684f0;
        case 0x2684f4u: goto label_2684f4;
        case 0x2684f8u: goto label_2684f8;
        case 0x2684fcu: goto label_2684fc;
        case 0x268500u: goto label_268500;
        case 0x268504u: goto label_268504;
        case 0x268508u: goto label_268508;
        case 0x26850cu: goto label_26850c;
        case 0x268510u: goto label_268510;
        case 0x268514u: goto label_268514;
        case 0x268518u: goto label_268518;
        case 0x26851cu: goto label_26851c;
        case 0x268520u: goto label_268520;
        case 0x268524u: goto label_268524;
        case 0x268528u: goto label_268528;
        case 0x26852cu: goto label_26852c;
        case 0x268530u: goto label_268530;
        case 0x268534u: goto label_268534;
        case 0x268538u: goto label_268538;
        case 0x26853cu: goto label_26853c;
        case 0x268540u: goto label_268540;
        case 0x268544u: goto label_268544;
        case 0x268548u: goto label_268548;
        case 0x26854cu: goto label_26854c;
        case 0x268550u: goto label_268550;
        case 0x268554u: goto label_268554;
        case 0x268558u: goto label_268558;
        case 0x26855cu: goto label_26855c;
        case 0x268560u: goto label_268560;
        case 0x268564u: goto label_268564;
        case 0x268568u: goto label_268568;
        case 0x26856cu: goto label_26856c;
        case 0x268570u: goto label_268570;
        case 0x268574u: goto label_268574;
        case 0x268578u: goto label_268578;
        case 0x26857cu: goto label_26857c;
        case 0x268580u: goto label_268580;
        case 0x268584u: goto label_268584;
        case 0x268588u: goto label_268588;
        case 0x26858cu: goto label_26858c;
        case 0x268590u: goto label_268590;
        case 0x268594u: goto label_268594;
        case 0x268598u: goto label_268598;
        case 0x26859cu: goto label_26859c;
        case 0x2685a0u: goto label_2685a0;
        case 0x2685a4u: goto label_2685a4;
        case 0x2685a8u: goto label_2685a8;
        case 0x2685acu: goto label_2685ac;
        case 0x2685b0u: goto label_2685b0;
        case 0x2685b4u: goto label_2685b4;
        case 0x2685b8u: goto label_2685b8;
        case 0x2685bcu: goto label_2685bc;
        case 0x2685c0u: goto label_2685c0;
        case 0x2685c4u: goto label_2685c4;
        case 0x2685c8u: goto label_2685c8;
        case 0x2685ccu: goto label_2685cc;
        case 0x2685d0u: goto label_2685d0;
        case 0x2685d4u: goto label_2685d4;
        case 0x2685d8u: goto label_2685d8;
        case 0x2685dcu: goto label_2685dc;
        case 0x2685e0u: goto label_2685e0;
        case 0x2685e4u: goto label_2685e4;
        case 0x2685e8u: goto label_2685e8;
        case 0x2685ecu: goto label_2685ec;
        case 0x2685f0u: goto label_2685f0;
        case 0x2685f4u: goto label_2685f4;
        case 0x2685f8u: goto label_2685f8;
        case 0x2685fcu: goto label_2685fc;
        case 0x268600u: goto label_268600;
        case 0x268604u: goto label_268604;
        case 0x268608u: goto label_268608;
        case 0x26860cu: goto label_26860c;
        case 0x268610u: goto label_268610;
        case 0x268614u: goto label_268614;
        case 0x268618u: goto label_268618;
        case 0x26861cu: goto label_26861c;
        case 0x268620u: goto label_268620;
        case 0x268624u: goto label_268624;
        case 0x268628u: goto label_268628;
        case 0x26862cu: goto label_26862c;
        case 0x268630u: goto label_268630;
        case 0x268634u: goto label_268634;
        case 0x268638u: goto label_268638;
        case 0x26863cu: goto label_26863c;
        case 0x268640u: goto label_268640;
        case 0x268644u: goto label_268644;
        case 0x268648u: goto label_268648;
        case 0x26864cu: goto label_26864c;
        case 0x268650u: goto label_268650;
        case 0x268654u: goto label_268654;
        case 0x268658u: goto label_268658;
        case 0x26865cu: goto label_26865c;
        case 0x268660u: goto label_268660;
        case 0x268664u: goto label_268664;
        case 0x268668u: goto label_268668;
        case 0x26866cu: goto label_26866c;
        case 0x268670u: goto label_268670;
        case 0x268674u: goto label_268674;
        case 0x268678u: goto label_268678;
        case 0x26867cu: goto label_26867c;
        case 0x268680u: goto label_268680;
        case 0x268684u: goto label_268684;
        case 0x268688u: goto label_268688;
        case 0x26868cu: goto label_26868c;
        case 0x268690u: goto label_268690;
        case 0x268694u: goto label_268694;
        case 0x268698u: goto label_268698;
        case 0x26869cu: goto label_26869c;
        case 0x2686a0u: goto label_2686a0;
        case 0x2686a4u: goto label_2686a4;
        case 0x2686a8u: goto label_2686a8;
        case 0x2686acu: goto label_2686ac;
        case 0x2686b0u: goto label_2686b0;
        case 0x2686b4u: goto label_2686b4;
        case 0x2686b8u: goto label_2686b8;
        case 0x2686bcu: goto label_2686bc;
        case 0x2686c0u: goto label_2686c0;
        case 0x2686c4u: goto label_2686c4;
        case 0x2686c8u: goto label_2686c8;
        case 0x2686ccu: goto label_2686cc;
        case 0x2686d0u: goto label_2686d0;
        case 0x2686d4u: goto label_2686d4;
        case 0x2686d8u: goto label_2686d8;
        case 0x2686dcu: goto label_2686dc;
        case 0x2686e0u: goto label_2686e0;
        case 0x2686e4u: goto label_2686e4;
        case 0x2686e8u: goto label_2686e8;
        case 0x2686ecu: goto label_2686ec;
        case 0x2686f0u: goto label_2686f0;
        case 0x2686f4u: goto label_2686f4;
        case 0x2686f8u: goto label_2686f8;
        case 0x2686fcu: goto label_2686fc;
        case 0x268700u: goto label_268700;
        case 0x268704u: goto label_268704;
        case 0x268708u: goto label_268708;
        case 0x26870cu: goto label_26870c;
        case 0x268710u: goto label_268710;
        case 0x268714u: goto label_268714;
        case 0x268718u: goto label_268718;
        case 0x26871cu: goto label_26871c;
        case 0x268720u: goto label_268720;
        case 0x268724u: goto label_268724;
        case 0x268728u: goto label_268728;
        case 0x26872cu: goto label_26872c;
        case 0x268730u: goto label_268730;
        case 0x268734u: goto label_268734;
        case 0x268738u: goto label_268738;
        case 0x26873cu: goto label_26873c;
        case 0x268740u: goto label_268740;
        case 0x268744u: goto label_268744;
        case 0x268748u: goto label_268748;
        case 0x26874cu: goto label_26874c;
        case 0x268750u: goto label_268750;
        case 0x268754u: goto label_268754;
        case 0x268758u: goto label_268758;
        case 0x26875cu: goto label_26875c;
        case 0x268760u: goto label_268760;
        case 0x268764u: goto label_268764;
        case 0x268768u: goto label_268768;
        case 0x26876cu: goto label_26876c;
        case 0x268770u: goto label_268770;
        case 0x268774u: goto label_268774;
        case 0x268778u: goto label_268778;
        case 0x26877cu: goto label_26877c;
        case 0x268780u: goto label_268780;
        case 0x268784u: goto label_268784;
        case 0x268788u: goto label_268788;
        case 0x26878cu: goto label_26878c;
        case 0x268790u: goto label_268790;
        case 0x268794u: goto label_268794;
        case 0x268798u: goto label_268798;
        case 0x26879cu: goto label_26879c;
        case 0x2687a0u: goto label_2687a0;
        case 0x2687a4u: goto label_2687a4;
        case 0x2687a8u: goto label_2687a8;
        case 0x2687acu: goto label_2687ac;
        case 0x2687b0u: goto label_2687b0;
        case 0x2687b4u: goto label_2687b4;
        case 0x2687b8u: goto label_2687b8;
        case 0x2687bcu: goto label_2687bc;
        case 0x2687c0u: goto label_2687c0;
        case 0x2687c4u: goto label_2687c4;
        case 0x2687c8u: goto label_2687c8;
        case 0x2687ccu: goto label_2687cc;
        case 0x2687d0u: goto label_2687d0;
        case 0x2687d4u: goto label_2687d4;
        case 0x2687d8u: goto label_2687d8;
        case 0x2687dcu: goto label_2687dc;
        case 0x2687e0u: goto label_2687e0;
        case 0x2687e4u: goto label_2687e4;
        case 0x2687e8u: goto label_2687e8;
        case 0x2687ecu: goto label_2687ec;
        case 0x2687f0u: goto label_2687f0;
        case 0x2687f4u: goto label_2687f4;
        case 0x2687f8u: goto label_2687f8;
        case 0x2687fcu: goto label_2687fc;
        case 0x268800u: goto label_268800;
        case 0x268804u: goto label_268804;
        case 0x268808u: goto label_268808;
        case 0x26880cu: goto label_26880c;
        case 0x268810u: goto label_268810;
        case 0x268814u: goto label_268814;
        case 0x268818u: goto label_268818;
        case 0x26881cu: goto label_26881c;
        case 0x268820u: goto label_268820;
        case 0x268824u: goto label_268824;
        case 0x268828u: goto label_268828;
        case 0x26882cu: goto label_26882c;
        case 0x268830u: goto label_268830;
        case 0x268834u: goto label_268834;
        case 0x268838u: goto label_268838;
        case 0x26883cu: goto label_26883c;
        case 0x268840u: goto label_268840;
        case 0x268844u: goto label_268844;
        case 0x268848u: goto label_268848;
        case 0x26884cu: goto label_26884c;
        case 0x268850u: goto label_268850;
        case 0x268854u: goto label_268854;
        case 0x268858u: goto label_268858;
        case 0x26885cu: goto label_26885c;
        case 0x268860u: goto label_268860;
        case 0x268864u: goto label_268864;
        case 0x268868u: goto label_268868;
        case 0x26886cu: goto label_26886c;
        case 0x268870u: goto label_268870;
        case 0x268874u: goto label_268874;
        case 0x268878u: goto label_268878;
        case 0x26887cu: goto label_26887c;
        case 0x268880u: goto label_268880;
        case 0x268884u: goto label_268884;
        case 0x268888u: goto label_268888;
        case 0x26888cu: goto label_26888c;
        case 0x268890u: goto label_268890;
        case 0x268894u: goto label_268894;
        case 0x268898u: goto label_268898;
        case 0x26889cu: goto label_26889c;
        case 0x2688a0u: goto label_2688a0;
        case 0x2688a4u: goto label_2688a4;
        case 0x2688a8u: goto label_2688a8;
        case 0x2688acu: goto label_2688ac;
        case 0x2688b0u: goto label_2688b0;
        case 0x2688b4u: goto label_2688b4;
        case 0x2688b8u: goto label_2688b8;
        case 0x2688bcu: goto label_2688bc;
        case 0x2688c0u: goto label_2688c0;
        case 0x2688c4u: goto label_2688c4;
        case 0x2688c8u: goto label_2688c8;
        case 0x2688ccu: goto label_2688cc;
        case 0x2688d0u: goto label_2688d0;
        case 0x2688d4u: goto label_2688d4;
        case 0x2688d8u: goto label_2688d8;
        case 0x2688dcu: goto label_2688dc;
        case 0x2688e0u: goto label_2688e0;
        case 0x2688e4u: goto label_2688e4;
        case 0x2688e8u: goto label_2688e8;
        case 0x2688ecu: goto label_2688ec;
        case 0x2688f0u: goto label_2688f0;
        case 0x2688f4u: goto label_2688f4;
        case 0x2688f8u: goto label_2688f8;
        case 0x2688fcu: goto label_2688fc;
        case 0x268900u: goto label_268900;
        case 0x268904u: goto label_268904;
        case 0x268908u: goto label_268908;
        case 0x26890cu: goto label_26890c;
        case 0x268910u: goto label_268910;
        case 0x268914u: goto label_268914;
        case 0x268918u: goto label_268918;
        case 0x26891cu: goto label_26891c;
        case 0x268920u: goto label_268920;
        case 0x268924u: goto label_268924;
        case 0x268928u: goto label_268928;
        case 0x26892cu: goto label_26892c;
        case 0x268930u: goto label_268930;
        case 0x268934u: goto label_268934;
        case 0x268938u: goto label_268938;
        case 0x26893cu: goto label_26893c;
        case 0x268940u: goto label_268940;
        case 0x268944u: goto label_268944;
        case 0x268948u: goto label_268948;
        case 0x26894cu: goto label_26894c;
        case 0x268950u: goto label_268950;
        case 0x268954u: goto label_268954;
        case 0x268958u: goto label_268958;
        case 0x26895cu: goto label_26895c;
        case 0x268960u: goto label_268960;
        case 0x268964u: goto label_268964;
        case 0x268968u: goto label_268968;
        case 0x26896cu: goto label_26896c;
        case 0x268970u: goto label_268970;
        case 0x268974u: goto label_268974;
        case 0x268978u: goto label_268978;
        case 0x26897cu: goto label_26897c;
        case 0x268980u: goto label_268980;
        case 0x268984u: goto label_268984;
        case 0x268988u: goto label_268988;
        case 0x26898cu: goto label_26898c;
        case 0x268990u: goto label_268990;
        case 0x268994u: goto label_268994;
        case 0x268998u: goto label_268998;
        case 0x26899cu: goto label_26899c;
        case 0x2689a0u: goto label_2689a0;
        case 0x2689a4u: goto label_2689a4;
        case 0x2689a8u: goto label_2689a8;
        case 0x2689acu: goto label_2689ac;
        case 0x2689b0u: goto label_2689b0;
        case 0x2689b4u: goto label_2689b4;
        case 0x2689b8u: goto label_2689b8;
        case 0x2689bcu: goto label_2689bc;
        case 0x2689c0u: goto label_2689c0;
        case 0x2689c4u: goto label_2689c4;
        case 0x2689c8u: goto label_2689c8;
        case 0x2689ccu: goto label_2689cc;
        case 0x2689d0u: goto label_2689d0;
        case 0x2689d4u: goto label_2689d4;
        case 0x2689d8u: goto label_2689d8;
        case 0x2689dcu: goto label_2689dc;
        case 0x2689e0u: goto label_2689e0;
        case 0x2689e4u: goto label_2689e4;
        case 0x2689e8u: goto label_2689e8;
        case 0x2689ecu: goto label_2689ec;
        case 0x2689f0u: goto label_2689f0;
        case 0x2689f4u: goto label_2689f4;
        case 0x2689f8u: goto label_2689f8;
        case 0x2689fcu: goto label_2689fc;
        case 0x268a00u: goto label_268a00;
        case 0x268a04u: goto label_268a04;
        case 0x268a08u: goto label_268a08;
        case 0x268a0cu: goto label_268a0c;
        case 0x268a10u: goto label_268a10;
        case 0x268a14u: goto label_268a14;
        case 0x268a18u: goto label_268a18;
        case 0x268a1cu: goto label_268a1c;
        case 0x268a20u: goto label_268a20;
        case 0x268a24u: goto label_268a24;
        case 0x268a28u: goto label_268a28;
        case 0x268a2cu: goto label_268a2c;
        case 0x268a30u: goto label_268a30;
        case 0x268a34u: goto label_268a34;
        case 0x268a38u: goto label_268a38;
        case 0x268a3cu: goto label_268a3c;
        case 0x268a40u: goto label_268a40;
        case 0x268a44u: goto label_268a44;
        case 0x268a48u: goto label_268a48;
        case 0x268a4cu: goto label_268a4c;
        case 0x268a50u: goto label_268a50;
        case 0x268a54u: goto label_268a54;
        case 0x268a58u: goto label_268a58;
        case 0x268a5cu: goto label_268a5c;
        case 0x268a60u: goto label_268a60;
        case 0x268a64u: goto label_268a64;
        case 0x268a68u: goto label_268a68;
        case 0x268a6cu: goto label_268a6c;
        case 0x268a70u: goto label_268a70;
        case 0x268a74u: goto label_268a74;
        case 0x268a78u: goto label_268a78;
        case 0x268a7cu: goto label_268a7c;
        case 0x268a80u: goto label_268a80;
        case 0x268a84u: goto label_268a84;
        case 0x268a88u: goto label_268a88;
        case 0x268a8cu: goto label_268a8c;
        case 0x268a90u: goto label_268a90;
        case 0x268a94u: goto label_268a94;
        case 0x268a98u: goto label_268a98;
        case 0x268a9cu: goto label_268a9c;
        case 0x268aa0u: goto label_268aa0;
        case 0x268aa4u: goto label_268aa4;
        case 0x268aa8u: goto label_268aa8;
        case 0x268aacu: goto label_268aac;
        case 0x268ab0u: goto label_268ab0;
        case 0x268ab4u: goto label_268ab4;
        case 0x268ab8u: goto label_268ab8;
        case 0x268abcu: goto label_268abc;
        case 0x268ac0u: goto label_268ac0;
        case 0x268ac4u: goto label_268ac4;
        case 0x268ac8u: goto label_268ac8;
        case 0x268accu: goto label_268acc;
        case 0x268ad0u: goto label_268ad0;
        case 0x268ad4u: goto label_268ad4;
        case 0x268ad8u: goto label_268ad8;
        case 0x268adcu: goto label_268adc;
        case 0x268ae0u: goto label_268ae0;
        case 0x268ae4u: goto label_268ae4;
        case 0x268ae8u: goto label_268ae8;
        case 0x268aecu: goto label_268aec;
        case 0x268af0u: goto label_268af0;
        case 0x268af4u: goto label_268af4;
        case 0x268af8u: goto label_268af8;
        case 0x268afcu: goto label_268afc;
        case 0x268b00u: goto label_268b00;
        case 0x268b04u: goto label_268b04;
        case 0x268b08u: goto label_268b08;
        case 0x268b0cu: goto label_268b0c;
        case 0x268b10u: goto label_268b10;
        case 0x268b14u: goto label_268b14;
        case 0x268b18u: goto label_268b18;
        case 0x268b1cu: goto label_268b1c;
        case 0x268b20u: goto label_268b20;
        case 0x268b24u: goto label_268b24;
        case 0x268b28u: goto label_268b28;
        case 0x268b2cu: goto label_268b2c;
        case 0x268b30u: goto label_268b30;
        case 0x268b34u: goto label_268b34;
        case 0x268b38u: goto label_268b38;
        case 0x268b3cu: goto label_268b3c;
        case 0x268b40u: goto label_268b40;
        case 0x268b44u: goto label_268b44;
        case 0x268b48u: goto label_268b48;
        case 0x268b4cu: goto label_268b4c;
        case 0x268b50u: goto label_268b50;
        case 0x268b54u: goto label_268b54;
        case 0x268b58u: goto label_268b58;
        case 0x268b5cu: goto label_268b5c;
        case 0x268b60u: goto label_268b60;
        case 0x268b64u: goto label_268b64;
        case 0x268b68u: goto label_268b68;
        case 0x268b6cu: goto label_268b6c;
        case 0x268b70u: goto label_268b70;
        case 0x268b74u: goto label_268b74;
        case 0x268b78u: goto label_268b78;
        case 0x268b7cu: goto label_268b7c;
        case 0x268b80u: goto label_268b80;
        case 0x268b84u: goto label_268b84;
        case 0x268b88u: goto label_268b88;
        case 0x268b8cu: goto label_268b8c;
        case 0x268b90u: goto label_268b90;
        case 0x268b94u: goto label_268b94;
        case 0x268b98u: goto label_268b98;
        case 0x268b9cu: goto label_268b9c;
        case 0x268ba0u: goto label_268ba0;
        case 0x268ba4u: goto label_268ba4;
        case 0x268ba8u: goto label_268ba8;
        case 0x268bacu: goto label_268bac;
        case 0x268bb0u: goto label_268bb0;
        case 0x268bb4u: goto label_268bb4;
        case 0x268bb8u: goto label_268bb8;
        case 0x268bbcu: goto label_268bbc;
        case 0x268bc0u: goto label_268bc0;
        case 0x268bc4u: goto label_268bc4;
        case 0x268bc8u: goto label_268bc8;
        case 0x268bccu: goto label_268bcc;
        case 0x268bd0u: goto label_268bd0;
        case 0x268bd4u: goto label_268bd4;
        case 0x268bd8u: goto label_268bd8;
        case 0x268bdcu: goto label_268bdc;
        case 0x268be0u: goto label_268be0;
        case 0x268be4u: goto label_268be4;
        case 0x268be8u: goto label_268be8;
        case 0x268becu: goto label_268bec;
        case 0x268bf0u: goto label_268bf0;
        case 0x268bf4u: goto label_268bf4;
        case 0x268bf8u: goto label_268bf8;
        case 0x268bfcu: goto label_268bfc;
        case 0x268c00u: goto label_268c00;
        case 0x268c04u: goto label_268c04;
        case 0x268c08u: goto label_268c08;
        case 0x268c0cu: goto label_268c0c;
        case 0x268c10u: goto label_268c10;
        case 0x268c14u: goto label_268c14;
        case 0x268c18u: goto label_268c18;
        case 0x268c1cu: goto label_268c1c;
        case 0x268c20u: goto label_268c20;
        case 0x268c24u: goto label_268c24;
        case 0x268c28u: goto label_268c28;
        case 0x268c2cu: goto label_268c2c;
        case 0x268c30u: goto label_268c30;
        case 0x268c34u: goto label_268c34;
        case 0x268c38u: goto label_268c38;
        case 0x268c3cu: goto label_268c3c;
        case 0x268c40u: goto label_268c40;
        case 0x268c44u: goto label_268c44;
        case 0x268c48u: goto label_268c48;
        case 0x268c4cu: goto label_268c4c;
        case 0x268c50u: goto label_268c50;
        case 0x268c54u: goto label_268c54;
        case 0x268c58u: goto label_268c58;
        case 0x268c5cu: goto label_268c5c;
        case 0x268c60u: goto label_268c60;
        case 0x268c64u: goto label_268c64;
        case 0x268c68u: goto label_268c68;
        case 0x268c6cu: goto label_268c6c;
        case 0x268c70u: goto label_268c70;
        case 0x268c74u: goto label_268c74;
        case 0x268c78u: goto label_268c78;
        case 0x268c7cu: goto label_268c7c;
        case 0x268c80u: goto label_268c80;
        case 0x268c84u: goto label_268c84;
        case 0x268c88u: goto label_268c88;
        case 0x268c8cu: goto label_268c8c;
        case 0x268c90u: goto label_268c90;
        case 0x268c94u: goto label_268c94;
        case 0x268c98u: goto label_268c98;
        case 0x268c9cu: goto label_268c9c;
        case 0x268ca0u: goto label_268ca0;
        case 0x268ca4u: goto label_268ca4;
        case 0x268ca8u: goto label_268ca8;
        case 0x268cacu: goto label_268cac;
        case 0x268cb0u: goto label_268cb0;
        case 0x268cb4u: goto label_268cb4;
        case 0x268cb8u: goto label_268cb8;
        case 0x268cbcu: goto label_268cbc;
        case 0x268cc0u: goto label_268cc0;
        case 0x268cc4u: goto label_268cc4;
        case 0x268cc8u: goto label_268cc8;
        case 0x268cccu: goto label_268ccc;
        case 0x268cd0u: goto label_268cd0;
        case 0x268cd4u: goto label_268cd4;
        case 0x268cd8u: goto label_268cd8;
        case 0x268cdcu: goto label_268cdc;
        case 0x268ce0u: goto label_268ce0;
        case 0x268ce4u: goto label_268ce4;
        case 0x268ce8u: goto label_268ce8;
        case 0x268cecu: goto label_268cec;
        case 0x268cf0u: goto label_268cf0;
        case 0x268cf4u: goto label_268cf4;
        case 0x268cf8u: goto label_268cf8;
        case 0x268cfcu: goto label_268cfc;
        case 0x268d00u: goto label_268d00;
        case 0x268d04u: goto label_268d04;
        case 0x268d08u: goto label_268d08;
        case 0x268d0cu: goto label_268d0c;
        case 0x268d10u: goto label_268d10;
        case 0x268d14u: goto label_268d14;
        case 0x268d18u: goto label_268d18;
        case 0x268d1cu: goto label_268d1c;
        case 0x268d20u: goto label_268d20;
        case 0x268d24u: goto label_268d24;
        case 0x268d28u: goto label_268d28;
        case 0x268d2cu: goto label_268d2c;
        case 0x268d30u: goto label_268d30;
        case 0x268d34u: goto label_268d34;
        case 0x268d38u: goto label_268d38;
        case 0x268d3cu: goto label_268d3c;
        case 0x268d40u: goto label_268d40;
        case 0x268d44u: goto label_268d44;
        case 0x268d48u: goto label_268d48;
        case 0x268d4cu: goto label_268d4c;
        case 0x268d50u: goto label_268d50;
        case 0x268d54u: goto label_268d54;
        case 0x268d58u: goto label_268d58;
        case 0x268d5cu: goto label_268d5c;
        case 0x268d60u: goto label_268d60;
        case 0x268d64u: goto label_268d64;
        case 0x268d68u: goto label_268d68;
        case 0x268d6cu: goto label_268d6c;
        case 0x268d70u: goto label_268d70;
        case 0x268d74u: goto label_268d74;
        case 0x268d78u: goto label_268d78;
        case 0x268d7cu: goto label_268d7c;
        case 0x268d80u: goto label_268d80;
        case 0x268d84u: goto label_268d84;
        case 0x268d88u: goto label_268d88;
        case 0x268d8cu: goto label_268d8c;
        case 0x268d90u: goto label_268d90;
        case 0x268d94u: goto label_268d94;
        case 0x268d98u: goto label_268d98;
        case 0x268d9cu: goto label_268d9c;
        case 0x268da0u: goto label_268da0;
        case 0x268da4u: goto label_268da4;
        case 0x268da8u: goto label_268da8;
        case 0x268dacu: goto label_268dac;
        case 0x268db0u: goto label_268db0;
        case 0x268db4u: goto label_268db4;
        case 0x268db8u: goto label_268db8;
        case 0x268dbcu: goto label_268dbc;
        case 0x268dc0u: goto label_268dc0;
        case 0x268dc4u: goto label_268dc4;
        case 0x268dc8u: goto label_268dc8;
        case 0x268dccu: goto label_268dcc;
        case 0x268dd0u: goto label_268dd0;
        case 0x268dd4u: goto label_268dd4;
        case 0x268dd8u: goto label_268dd8;
        case 0x268ddcu: goto label_268ddc;
        case 0x268de0u: goto label_268de0;
        case 0x268de4u: goto label_268de4;
        case 0x268de8u: goto label_268de8;
        case 0x268decu: goto label_268dec;
        case 0x268df0u: goto label_268df0;
        case 0x268df4u: goto label_268df4;
        case 0x268df8u: goto label_268df8;
        case 0x268dfcu: goto label_268dfc;
        case 0x268e00u: goto label_268e00;
        case 0x268e04u: goto label_268e04;
        case 0x268e08u: goto label_268e08;
        case 0x268e0cu: goto label_268e0c;
        case 0x268e10u: goto label_268e10;
        case 0x268e14u: goto label_268e14;
        case 0x268e18u: goto label_268e18;
        case 0x268e1cu: goto label_268e1c;
        case 0x268e20u: goto label_268e20;
        case 0x268e24u: goto label_268e24;
        case 0x268e28u: goto label_268e28;
        case 0x268e2cu: goto label_268e2c;
        case 0x268e30u: goto label_268e30;
        case 0x268e34u: goto label_268e34;
        case 0x268e38u: goto label_268e38;
        case 0x268e3cu: goto label_268e3c;
        case 0x268e40u: goto label_268e40;
        case 0x268e44u: goto label_268e44;
        case 0x268e48u: goto label_268e48;
        case 0x268e4cu: goto label_268e4c;
        case 0x268e50u: goto label_268e50;
        case 0x268e54u: goto label_268e54;
        case 0x268e58u: goto label_268e58;
        case 0x268e5cu: goto label_268e5c;
        case 0x268e60u: goto label_268e60;
        case 0x268e64u: goto label_268e64;
        case 0x268e68u: goto label_268e68;
        case 0x268e6cu: goto label_268e6c;
        case 0x268e70u: goto label_268e70;
        case 0x268e74u: goto label_268e74;
        case 0x268e78u: goto label_268e78;
        case 0x268e7cu: goto label_268e7c;
        case 0x268e80u: goto label_268e80;
        case 0x268e84u: goto label_268e84;
        case 0x268e88u: goto label_268e88;
        case 0x268e8cu: goto label_268e8c;
        case 0x268e90u: goto label_268e90;
        case 0x268e94u: goto label_268e94;
        case 0x268e98u: goto label_268e98;
        case 0x268e9cu: goto label_268e9c;
        case 0x268ea0u: goto label_268ea0;
        case 0x268ea4u: goto label_268ea4;
        case 0x268ea8u: goto label_268ea8;
        case 0x268eacu: goto label_268eac;
        case 0x268eb0u: goto label_268eb0;
        case 0x268eb4u: goto label_268eb4;
        case 0x268eb8u: goto label_268eb8;
        case 0x268ebcu: goto label_268ebc;
        case 0x268ec0u: goto label_268ec0;
        case 0x268ec4u: goto label_268ec4;
        case 0x268ec8u: goto label_268ec8;
        case 0x268eccu: goto label_268ecc;
        case 0x268ed0u: goto label_268ed0;
        case 0x268ed4u: goto label_268ed4;
        case 0x268ed8u: goto label_268ed8;
        case 0x268edcu: goto label_268edc;
        case 0x268ee0u: goto label_268ee0;
        case 0x268ee4u: goto label_268ee4;
        case 0x268ee8u: goto label_268ee8;
        case 0x268eecu: goto label_268eec;
        case 0x268ef0u: goto label_268ef0;
        case 0x268ef4u: goto label_268ef4;
        case 0x268ef8u: goto label_268ef8;
        case 0x268efcu: goto label_268efc;
        case 0x268f00u: goto label_268f00;
        case 0x268f04u: goto label_268f04;
        case 0x268f08u: goto label_268f08;
        case 0x268f0cu: goto label_268f0c;
        case 0x268f10u: goto label_268f10;
        case 0x268f14u: goto label_268f14;
        case 0x268f18u: goto label_268f18;
        case 0x268f1cu: goto label_268f1c;
        case 0x268f20u: goto label_268f20;
        case 0x268f24u: goto label_268f24;
        case 0x268f28u: goto label_268f28;
        case 0x268f2cu: goto label_268f2c;
        case 0x268f30u: goto label_268f30;
        case 0x268f34u: goto label_268f34;
        case 0x268f38u: goto label_268f38;
        case 0x268f3cu: goto label_268f3c;
        case 0x268f40u: goto label_268f40;
        case 0x268f44u: goto label_268f44;
        case 0x268f48u: goto label_268f48;
        case 0x268f4cu: goto label_268f4c;
        case 0x268f50u: goto label_268f50;
        case 0x268f54u: goto label_268f54;
        case 0x268f58u: goto label_268f58;
        case 0x268f5cu: goto label_268f5c;
        case 0x268f60u: goto label_268f60;
        case 0x268f64u: goto label_268f64;
        case 0x268f68u: goto label_268f68;
        case 0x268f6cu: goto label_268f6c;
        case 0x268f70u: goto label_268f70;
        case 0x268f74u: goto label_268f74;
        case 0x268f78u: goto label_268f78;
        case 0x268f7cu: goto label_268f7c;
        case 0x268f80u: goto label_268f80;
        case 0x268f84u: goto label_268f84;
        case 0x268f88u: goto label_268f88;
        case 0x268f8cu: goto label_268f8c;
        case 0x268f90u: goto label_268f90;
        case 0x268f94u: goto label_268f94;
        case 0x268f98u: goto label_268f98;
        case 0x268f9cu: goto label_268f9c;
        case 0x268fa0u: goto label_268fa0;
        case 0x268fa4u: goto label_268fa4;
        case 0x268fa8u: goto label_268fa8;
        case 0x268facu: goto label_268fac;
        case 0x268fb0u: goto label_268fb0;
        case 0x268fb4u: goto label_268fb4;
        case 0x268fb8u: goto label_268fb8;
        case 0x268fbcu: goto label_268fbc;
        case 0x268fc0u: goto label_268fc0;
        case 0x268fc4u: goto label_268fc4;
        case 0x268fc8u: goto label_268fc8;
        case 0x268fccu: goto label_268fcc;
        case 0x268fd0u: goto label_268fd0;
        case 0x268fd4u: goto label_268fd4;
        case 0x268fd8u: goto label_268fd8;
        case 0x268fdcu: goto label_268fdc;
        case 0x268fe0u: goto label_268fe0;
        case 0x268fe4u: goto label_268fe4;
        case 0x268fe8u: goto label_268fe8;
        case 0x268fecu: goto label_268fec;
        case 0x268ff0u: goto label_268ff0;
        case 0x268ff4u: goto label_268ff4;
        case 0x268ff8u: goto label_268ff8;
        case 0x268ffcu: goto label_268ffc;
        case 0x269000u: goto label_269000;
        case 0x269004u: goto label_269004;
        case 0x269008u: goto label_269008;
        case 0x26900cu: goto label_26900c;
        case 0x269010u: goto label_269010;
        case 0x269014u: goto label_269014;
        case 0x269018u: goto label_269018;
        case 0x26901cu: goto label_26901c;
        case 0x269020u: goto label_269020;
        case 0x269024u: goto label_269024;
        case 0x269028u: goto label_269028;
        case 0x26902cu: goto label_26902c;
        case 0x269030u: goto label_269030;
        case 0x269034u: goto label_269034;
        case 0x269038u: goto label_269038;
        case 0x26903cu: goto label_26903c;
        case 0x269040u: goto label_269040;
        case 0x269044u: goto label_269044;
        case 0x269048u: goto label_269048;
        case 0x26904cu: goto label_26904c;
        case 0x269050u: goto label_269050;
        case 0x269054u: goto label_269054;
        case 0x269058u: goto label_269058;
        case 0x26905cu: goto label_26905c;
        case 0x269060u: goto label_269060;
        case 0x269064u: goto label_269064;
        case 0x269068u: goto label_269068;
        case 0x26906cu: goto label_26906c;
        case 0x269070u: goto label_269070;
        case 0x269074u: goto label_269074;
        case 0x269078u: goto label_269078;
        case 0x26907cu: goto label_26907c;
        case 0x269080u: goto label_269080;
        case 0x269084u: goto label_269084;
        case 0x269088u: goto label_269088;
        case 0x26908cu: goto label_26908c;
        case 0x269090u: goto label_269090;
        case 0x269094u: goto label_269094;
        case 0x269098u: goto label_269098;
        case 0x26909cu: goto label_26909c;
        case 0x2690a0u: goto label_2690a0;
        case 0x2690a4u: goto label_2690a4;
        case 0x2690a8u: goto label_2690a8;
        case 0x2690acu: goto label_2690ac;
        case 0x2690b0u: goto label_2690b0;
        case 0x2690b4u: goto label_2690b4;
        case 0x2690b8u: goto label_2690b8;
        case 0x2690bcu: goto label_2690bc;
        case 0x2690c0u: goto label_2690c0;
        case 0x2690c4u: goto label_2690c4;
        case 0x2690c8u: goto label_2690c8;
        case 0x2690ccu: goto label_2690cc;
        case 0x2690d0u: goto label_2690d0;
        case 0x2690d4u: goto label_2690d4;
        case 0x2690d8u: goto label_2690d8;
        case 0x2690dcu: goto label_2690dc;
        case 0x2690e0u: goto label_2690e0;
        case 0x2690e4u: goto label_2690e4;
        case 0x2690e8u: goto label_2690e8;
        case 0x2690ecu: goto label_2690ec;
        case 0x2690f0u: goto label_2690f0;
        case 0x2690f4u: goto label_2690f4;
        case 0x2690f8u: goto label_2690f8;
        case 0x2690fcu: goto label_2690fc;
        case 0x269100u: goto label_269100;
        case 0x269104u: goto label_269104;
        case 0x269108u: goto label_269108;
        case 0x26910cu: goto label_26910c;
        case 0x269110u: goto label_269110;
        case 0x269114u: goto label_269114;
        case 0x269118u: goto label_269118;
        case 0x26911cu: goto label_26911c;
        case 0x269120u: goto label_269120;
        case 0x269124u: goto label_269124;
        case 0x269128u: goto label_269128;
        case 0x26912cu: goto label_26912c;
        case 0x269130u: goto label_269130;
        case 0x269134u: goto label_269134;
        case 0x269138u: goto label_269138;
        case 0x26913cu: goto label_26913c;
        case 0x269140u: goto label_269140;
        case 0x269144u: goto label_269144;
        case 0x269148u: goto label_269148;
        case 0x26914cu: goto label_26914c;
        case 0x269150u: goto label_269150;
        case 0x269154u: goto label_269154;
        case 0x269158u: goto label_269158;
        case 0x26915cu: goto label_26915c;
        case 0x269160u: goto label_269160;
        case 0x269164u: goto label_269164;
        case 0x269168u: goto label_269168;
        case 0x26916cu: goto label_26916c;
        case 0x269170u: goto label_269170;
        case 0x269174u: goto label_269174;
        case 0x269178u: goto label_269178;
        case 0x26917cu: goto label_26917c;
        case 0x269180u: goto label_269180;
        case 0x269184u: goto label_269184;
        case 0x269188u: goto label_269188;
        case 0x26918cu: goto label_26918c;
        case 0x269190u: goto label_269190;
        case 0x269194u: goto label_269194;
        case 0x269198u: goto label_269198;
        case 0x26919cu: goto label_26919c;
        case 0x2691a0u: goto label_2691a0;
        case 0x2691a4u: goto label_2691a4;
        case 0x2691a8u: goto label_2691a8;
        case 0x2691acu: goto label_2691ac;
        case 0x2691b0u: goto label_2691b0;
        case 0x2691b4u: goto label_2691b4;
        case 0x2691b8u: goto label_2691b8;
        case 0x2691bcu: goto label_2691bc;
        case 0x2691c0u: goto label_2691c0;
        case 0x2691c4u: goto label_2691c4;
        case 0x2691c8u: goto label_2691c8;
        case 0x2691ccu: goto label_2691cc;
        case 0x2691d0u: goto label_2691d0;
        case 0x2691d4u: goto label_2691d4;
        case 0x2691d8u: goto label_2691d8;
        case 0x2691dcu: goto label_2691dc;
        case 0x2691e0u: goto label_2691e0;
        case 0x2691e4u: goto label_2691e4;
        case 0x2691e8u: goto label_2691e8;
        case 0x2691ecu: goto label_2691ec;
        case 0x2691f0u: goto label_2691f0;
        case 0x2691f4u: goto label_2691f4;
        case 0x2691f8u: goto label_2691f8;
        case 0x2691fcu: goto label_2691fc;
        case 0x269200u: goto label_269200;
        case 0x269204u: goto label_269204;
        case 0x269208u: goto label_269208;
        case 0x26920cu: goto label_26920c;
        case 0x269210u: goto label_269210;
        case 0x269214u: goto label_269214;
        case 0x269218u: goto label_269218;
        case 0x26921cu: goto label_26921c;
        case 0x269220u: goto label_269220;
        case 0x269224u: goto label_269224;
        case 0x269228u: goto label_269228;
        case 0x26922cu: goto label_26922c;
        case 0x269230u: goto label_269230;
        case 0x269234u: goto label_269234;
        case 0x269238u: goto label_269238;
        case 0x26923cu: goto label_26923c;
        case 0x269240u: goto label_269240;
        case 0x269244u: goto label_269244;
        case 0x269248u: goto label_269248;
        case 0x26924cu: goto label_26924c;
        case 0x269250u: goto label_269250;
        case 0x269254u: goto label_269254;
        case 0x269258u: goto label_269258;
        case 0x26925cu: goto label_26925c;
        case 0x269260u: goto label_269260;
        case 0x269264u: goto label_269264;
        case 0x269268u: goto label_269268;
        case 0x26926cu: goto label_26926c;
        case 0x269270u: goto label_269270;
        case 0x269274u: goto label_269274;
        case 0x269278u: goto label_269278;
        case 0x26927cu: goto label_26927c;
        case 0x269280u: goto label_269280;
        case 0x269284u: goto label_269284;
        case 0x269288u: goto label_269288;
        case 0x26928cu: goto label_26928c;
        case 0x269290u: goto label_269290;
        case 0x269294u: goto label_269294;
        case 0x269298u: goto label_269298;
        case 0x26929cu: goto label_26929c;
        case 0x2692a0u: goto label_2692a0;
        case 0x2692a4u: goto label_2692a4;
        case 0x2692a8u: goto label_2692a8;
        case 0x2692acu: goto label_2692ac;
        case 0x2692b0u: goto label_2692b0;
        case 0x2692b4u: goto label_2692b4;
        case 0x2692b8u: goto label_2692b8;
        case 0x2692bcu: goto label_2692bc;
        case 0x2692c0u: goto label_2692c0;
        case 0x2692c4u: goto label_2692c4;
        case 0x2692c8u: goto label_2692c8;
        case 0x2692ccu: goto label_2692cc;
        case 0x2692d0u: goto label_2692d0;
        case 0x2692d4u: goto label_2692d4;
        case 0x2692d8u: goto label_2692d8;
        case 0x2692dcu: goto label_2692dc;
        case 0x2692e0u: goto label_2692e0;
        case 0x2692e4u: goto label_2692e4;
        case 0x2692e8u: goto label_2692e8;
        case 0x2692ecu: goto label_2692ec;
        case 0x2692f0u: goto label_2692f0;
        case 0x2692f4u: goto label_2692f4;
        case 0x2692f8u: goto label_2692f8;
        case 0x2692fcu: goto label_2692fc;
        case 0x269300u: goto label_269300;
        case 0x269304u: goto label_269304;
        case 0x269308u: goto label_269308;
        case 0x26930cu: goto label_26930c;
        case 0x269310u: goto label_269310;
        case 0x269314u: goto label_269314;
        case 0x269318u: goto label_269318;
        case 0x26931cu: goto label_26931c;
        case 0x269320u: goto label_269320;
        case 0x269324u: goto label_269324;
        case 0x269328u: goto label_269328;
        case 0x26932cu: goto label_26932c;
        case 0x269330u: goto label_269330;
        case 0x269334u: goto label_269334;
        case 0x269338u: goto label_269338;
        case 0x26933cu: goto label_26933c;
        case 0x269340u: goto label_269340;
        case 0x269344u: goto label_269344;
        case 0x269348u: goto label_269348;
        case 0x26934cu: goto label_26934c;
        case 0x269350u: goto label_269350;
        case 0x269354u: goto label_269354;
        case 0x269358u: goto label_269358;
        case 0x26935cu: goto label_26935c;
        case 0x269360u: goto label_269360;
        case 0x269364u: goto label_269364;
        case 0x269368u: goto label_269368;
        case 0x26936cu: goto label_26936c;
        case 0x269370u: goto label_269370;
        case 0x269374u: goto label_269374;
        case 0x269378u: goto label_269378;
        case 0x26937cu: goto label_26937c;
        case 0x269380u: goto label_269380;
        case 0x269384u: goto label_269384;
        case 0x269388u: goto label_269388;
        case 0x26938cu: goto label_26938c;
        default: break;
    }

    ctx->pc = 0x266e30u;

label_266e30:
    // 0x266e30: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x266e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_266e34:
    // 0x266e34: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x266e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_266e38:
    // 0x266e38: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x266e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_266e3c:
    // 0x266e3c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x266e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_266e40:
    // 0x266e40: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x266e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_266e44:
    // 0x266e44: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x266e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_266e48:
    // 0x266e48: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x266e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_266e4c:
    // 0x266e4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x266e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_266e50:
    // 0x266e50: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x266e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_266e54:
    // 0x266e54: 0x12220932  beq         $s1, $v0, . + 4 + (0x932 << 2)
label_266e58:
    if (ctx->pc == 0x266E58u) {
        ctx->pc = 0x266E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E54u;
        // 0x266e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266E5Cu;
        goto label_266e5c;
    }
    ctx->pc = 0x266E54u;
    {
        const bool branch_taken_0x266e54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E54u;
        // 0x266e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e54) {
            ctx->pc = 0x269320u;
            goto label_269320;
        }
    }
    ctx->pc = 0x266E5Cu;
label_266e5c:
    // 0x266e5c: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x266e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_266e60:
    // 0x266e60: 0x1222090b  beq         $s1, $v0, . + 4 + (0x90B << 2)
label_266e64:
    if (ctx->pc == 0x266E64u) {
        ctx->pc = 0x266E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E60u;
        // 0x266e64: 0x240200f9  addiu       $v0, $zero, 0xF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266E68u;
        goto label_266e68;
    }
    ctx->pc = 0x266E60u;
    {
        const bool branch_taken_0x266e60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E60u;
        // 0x266e64: 0x240200f9  addiu       $v0, $zero, 0xF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e60) {
            ctx->pc = 0x269290u;
            goto label_269290;
        }
    }
    ctx->pc = 0x266E68u;
label_266e68:
    // 0x266e68: 0x122208f1  beq         $s1, $v0, . + 4 + (0x8F1 << 2)
label_266e6c:
    if (ctx->pc == 0x266E6Cu) {
        ctx->pc = 0x266E70u;
        goto label_266e70;
    }
    ctx->pc = 0x266E68u;
    {
        const bool branch_taken_0x266e68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266e68) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x266E70u;
label_266e70:
    // 0x266e70: 0x240200f8  addiu       $v0, $zero, 0xF8
    ctx->pc = 0x266e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_266e74:
    // 0x266e74: 0x122208c8  beq         $s1, $v0, . + 4 + (0x8C8 << 2)
label_266e78:
    if (ctx->pc == 0x266E78u) {
        ctx->pc = 0x266E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E74u;
        // 0x266e78: 0x240200f4  addiu       $v0, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266E7Cu;
        goto label_266e7c;
    }
    ctx->pc = 0x266E74u;
    {
        const bool branch_taken_0x266e74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E74u;
        // 0x266e78: 0x240200f4  addiu       $v0, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e74) {
            ctx->pc = 0x269198u;
            goto label_269198;
        }
    }
    ctx->pc = 0x266E7Cu;
label_266e7c:
    // 0x266e7c: 0x122208b2  beq         $s1, $v0, . + 4 + (0x8B2 << 2)
label_266e80:
    if (ctx->pc == 0x266E80u) {
        ctx->pc = 0x266E84u;
        goto label_266e84;
    }
    ctx->pc = 0x266E7Cu;
    {
        const bool branch_taken_0x266e7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266e7c) {
            ctx->pc = 0x269148u;
            goto label_269148;
        }
    }
    ctx->pc = 0x266E84u;
label_266e84:
    // 0x266e84: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x266e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_266e88:
    // 0x266e88: 0x122208a9  beq         $s1, $v0, . + 4 + (0x8A9 << 2)
label_266e8c:
    if (ctx->pc == 0x266E8Cu) {
        ctx->pc = 0x266E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E88u;
        // 0x266e8c: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266E90u;
        goto label_266e90;
    }
    ctx->pc = 0x266E88u;
    {
        const bool branch_taken_0x266e88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E88u;
        // 0x266e8c: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e88) {
            ctx->pc = 0x269130u;
            goto label_269130;
        }
    }
    ctx->pc = 0x266E90u;
label_266e90:
    // 0x266e90: 0x1222087b  beq         $s1, $v0, . + 4 + (0x87B << 2)
label_266e94:
    if (ctx->pc == 0x266E94u) {
        ctx->pc = 0x266E98u;
        goto label_266e98;
    }
    ctx->pc = 0x266E90u;
    {
        const bool branch_taken_0x266e90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266e90) {
            ctx->pc = 0x269080u;
            goto label_269080;
        }
    }
    ctx->pc = 0x266E98u;
label_266e98:
    // 0x266e98: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x266e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_266e9c:
    // 0x266e9c: 0x12220846  beq         $s1, $v0, . + 4 + (0x846 << 2)
label_266ea0:
    if (ctx->pc == 0x266EA0u) {
        ctx->pc = 0x266EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E9Cu;
        // 0x266ea0: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266EA4u;
        goto label_266ea4;
    }
    ctx->pc = 0x266E9Cu;
    {
        const bool branch_taken_0x266e9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E9Cu;
        // 0x266ea0: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e9c) {
            ctx->pc = 0x268FB8u;
            goto label_268fb8;
        }
    }
    ctx->pc = 0x266EA4u;
label_266ea4:
    // 0x266ea4: 0x12220814  beq         $s1, $v0, . + 4 + (0x814 << 2)
label_266ea8:
    if (ctx->pc == 0x266EA8u) {
        ctx->pc = 0x266EACu;
        goto label_266eac;
    }
    ctx->pc = 0x266EA4u;
    {
        const bool branch_taken_0x266ea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266ea4) {
            ctx->pc = 0x268EF8u;
            goto label_268ef8;
        }
    }
    ctx->pc = 0x266EACu;
label_266eac:
    // 0x266eac: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x266eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_266eb0:
    // 0x266eb0: 0x122207e1  beq         $s1, $v0, . + 4 + (0x7E1 << 2)
label_266eb4:
    if (ctx->pc == 0x266EB4u) {
        ctx->pc = 0x266EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EB0u;
        // 0x266eb4: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266EB8u;
        goto label_266eb8;
    }
    ctx->pc = 0x266EB0u;
    {
        const bool branch_taken_0x266eb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EB0u;
        // 0x266eb4: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266eb0) {
            ctx->pc = 0x268E38u;
            goto label_268e38;
        }
    }
    ctx->pc = 0x266EB8u;
label_266eb8:
    // 0x266eb8: 0x122207cb  beq         $s1, $v0, . + 4 + (0x7CB << 2)
label_266ebc:
    if (ctx->pc == 0x266EBCu) {
        ctx->pc = 0x266EC0u;
        goto label_266ec0;
    }
    ctx->pc = 0x266EB8u;
    {
        const bool branch_taken_0x266eb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266eb8) {
            ctx->pc = 0x268DE8u;
            goto label_268de8;
        }
    }
    ctx->pc = 0x266EC0u;
label_266ec0:
    // 0x266ec0: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x266ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_266ec4:
    // 0x266ec4: 0x122207b6  beq         $s1, $v0, . + 4 + (0x7B6 << 2)
label_266ec8:
    if (ctx->pc == 0x266EC8u) {
        ctx->pc = 0x266EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EC4u;
        // 0x266ec8: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266ECCu;
        goto label_266ecc;
    }
    ctx->pc = 0x266EC4u;
    {
        const bool branch_taken_0x266ec4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EC4u;
        // 0x266ec8: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ec4) {
            ctx->pc = 0x268DA0u;
            goto label_268da0;
        }
    }
    ctx->pc = 0x266ECCu;
label_266ecc:
    // 0x266ecc: 0x12220792  beq         $s1, $v0, . + 4 + (0x792 << 2)
label_266ed0:
    if (ctx->pc == 0x266ED0u) {
        ctx->pc = 0x266ED4u;
        goto label_266ed4;
    }
    ctx->pc = 0x266ECCu;
    {
        const bool branch_taken_0x266ecc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266ecc) {
            ctx->pc = 0x268D18u;
            goto label_268d18;
        }
    }
    ctx->pc = 0x266ED4u;
label_266ed4:
    // 0x266ed4: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x266ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_266ed8:
    // 0x266ed8: 0x1222076d  beq         $s1, $v0, . + 4 + (0x76D << 2)
label_266edc:
    if (ctx->pc == 0x266EDCu) {
        ctx->pc = 0x266EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266ED8u;
        // 0x266edc: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266EE0u;
        goto label_266ee0;
    }
    ctx->pc = 0x266ED8u;
    {
        const bool branch_taken_0x266ed8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266ED8u;
        // 0x266edc: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ed8) {
            ctx->pc = 0x268C90u;
            goto label_268c90;
        }
    }
    ctx->pc = 0x266EE0u;
label_266ee0:
    // 0x266ee0: 0x1222072f  beq         $s1, $v0, . + 4 + (0x72F << 2)
label_266ee4:
    if (ctx->pc == 0x266EE4u) {
        ctx->pc = 0x266EE8u;
        goto label_266ee8;
    }
    ctx->pc = 0x266EE0u;
    {
        const bool branch_taken_0x266ee0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266ee0) {
            ctx->pc = 0x268BA0u;
            goto label_268ba0;
        }
    }
    ctx->pc = 0x266EE8u;
label_266ee8:
    // 0x266ee8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x266ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_266eec:
    // 0x266eec: 0x122206e6  beq         $s1, $v0, . + 4 + (0x6E6 << 2)
label_266ef0:
    if (ctx->pc == 0x266EF0u) {
        ctx->pc = 0x266EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EECu;
        // 0x266ef0: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266EF4u;
        goto label_266ef4;
    }
    ctx->pc = 0x266EECu;
    {
        const bool branch_taken_0x266eec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EECu;
        // 0x266ef0: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266eec) {
            ctx->pc = 0x268A88u;
            goto label_268a88;
        }
    }
    ctx->pc = 0x266EF4u;
label_266ef4:
    // 0x266ef4: 0x122206c8  beq         $s1, $v0, . + 4 + (0x6C8 << 2)
label_266ef8:
    if (ctx->pc == 0x266EF8u) {
        ctx->pc = 0x266EFCu;
        goto label_266efc;
    }
    ctx->pc = 0x266EF4u;
    {
        const bool branch_taken_0x266ef4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266ef4) {
            ctx->pc = 0x268A18u;
            goto label_268a18;
        }
    }
    ctx->pc = 0x266EFCu;
label_266efc:
    // 0x266efc: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x266efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_266f00:
    // 0x266f00: 0x122206b9  beq         $s1, $v0, . + 4 + (0x6B9 << 2)
label_266f04:
    if (ctx->pc == 0x266F04u) {
        ctx->pc = 0x266F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F00u;
        // 0x266f04: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F08u;
        goto label_266f08;
    }
    ctx->pc = 0x266F00u;
    {
        const bool branch_taken_0x266f00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F00u;
        // 0x266f04: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f00) {
            ctx->pc = 0x2689E8u;
            goto label_2689e8;
        }
    }
    ctx->pc = 0x266F08u;
label_266f08:
    // 0x266f08: 0x1222069b  beq         $s1, $v0, . + 4 + (0x69B << 2)
label_266f0c:
    if (ctx->pc == 0x266F0Cu) {
        ctx->pc = 0x266F10u;
        goto label_266f10;
    }
    ctx->pc = 0x266F08u;
    {
        const bool branch_taken_0x266f08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266f08) {
            ctx->pc = 0x268978u;
            goto label_268978;
        }
    }
    ctx->pc = 0x266F10u;
label_266f10:
    // 0x266f10: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x266f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_266f14:
    // 0x266f14: 0x12220686  beq         $s1, $v0, . + 4 + (0x686 << 2)
label_266f18:
    if (ctx->pc == 0x266F18u) {
        ctx->pc = 0x266F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F14u;
        // 0x266f18: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F1Cu;
        goto label_266f1c;
    }
    ctx->pc = 0x266F14u;
    {
        const bool branch_taken_0x266f14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F14u;
        // 0x266f18: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f14) {
            ctx->pc = 0x268930u;
            goto label_268930;
        }
    }
    ctx->pc = 0x266F1Cu;
label_266f1c:
    // 0x266f1c: 0x1222063a  beq         $s1, $v0, . + 4 + (0x63A << 2)
label_266f20:
    if (ctx->pc == 0x266F20u) {
        ctx->pc = 0x266F24u;
        goto label_266f24;
    }
    ctx->pc = 0x266F1Cu;
    {
        const bool branch_taken_0x266f1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266f1c) {
            ctx->pc = 0x268808u;
            goto label_268808;
        }
    }
    ctx->pc = 0x266F24u;
label_266f24:
    // 0x266f24: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x266f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_266f28:
    // 0x266f28: 0x12220623  beq         $s1, $v0, . + 4 + (0x623 << 2)
label_266f2c:
    if (ctx->pc == 0x266F2Cu) {
        ctx->pc = 0x266F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F28u;
        // 0x266f2c: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F30u;
        goto label_266f30;
    }
    ctx->pc = 0x266F28u;
    {
        const bool branch_taken_0x266f28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F28u;
        // 0x266f2c: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f28) {
            ctx->pc = 0x2687B8u;
            goto label_2687b8;
        }
    }
    ctx->pc = 0x266F30u;
label_266f30:
    // 0x266f30: 0x1222060b  beq         $s1, $v0, . + 4 + (0x60B << 2)
label_266f34:
    if (ctx->pc == 0x266F34u) {
        ctx->pc = 0x266F38u;
        goto label_266f38;
    }
    ctx->pc = 0x266F30u;
    {
        const bool branch_taken_0x266f30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266f30) {
            ctx->pc = 0x268760u;
            goto label_268760;
        }
    }
    ctx->pc = 0x266F38u;
label_266f38:
    // 0x266f38: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x266f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_266f3c:
    // 0x266f3c: 0x12220600  beq         $s1, $v0, . + 4 + (0x600 << 2)
label_266f40:
    if (ctx->pc == 0x266F40u) {
        ctx->pc = 0x266F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F3Cu;
        // 0x266f40: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F44u;
        goto label_266f44;
    }
    ctx->pc = 0x266F3Cu;
    {
        const bool branch_taken_0x266f3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F3Cu;
        // 0x266f40: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f3c) {
            ctx->pc = 0x268740u;
            goto label_268740;
        }
    }
    ctx->pc = 0x266F44u;
label_266f44:
    // 0x266f44: 0x122205e6  beq         $s1, $v0, . + 4 + (0x5E6 << 2)
label_266f48:
    if (ctx->pc == 0x266F48u) {
        ctx->pc = 0x266F4Cu;
        goto label_266f4c;
    }
    ctx->pc = 0x266F44u;
    {
        const bool branch_taken_0x266f44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266f44) {
            ctx->pc = 0x2686E0u;
            goto label_2686e0;
        }
    }
    ctx->pc = 0x266F4Cu;
label_266f4c:
    // 0x266f4c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x266f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_266f50:
    // 0x266f50: 0x122205c3  beq         $s1, $v0, . + 4 + (0x5C3 << 2)
label_266f54:
    if (ctx->pc == 0x266F54u) {
        ctx->pc = 0x266F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F50u;
        // 0x266f54: 0x24020088  addiu       $v0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F58u;
        goto label_266f58;
    }
    ctx->pc = 0x266F50u;
    {
        const bool branch_taken_0x266f50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F50u;
        // 0x266f54: 0x24020088  addiu       $v0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f50) {
            ctx->pc = 0x268660u;
            goto label_268660;
        }
    }
    ctx->pc = 0x266F58u;
label_266f58:
    // 0x266f58: 0x122205b5  beq         $s1, $v0, . + 4 + (0x5B5 << 2)
label_266f5c:
    if (ctx->pc == 0x266F5Cu) {
        ctx->pc = 0x266F60u;
        goto label_266f60;
    }
    ctx->pc = 0x266F58u;
    {
        const bool branch_taken_0x266f58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266f58) {
            ctx->pc = 0x268630u;
            goto label_268630;
        }
    }
    ctx->pc = 0x266F60u;
label_266f60:
    // 0x266f60: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x266f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_266f64:
    // 0x266f64: 0x122205a0  beq         $s1, $v0, . + 4 + (0x5A0 << 2)
label_266f68:
    if (ctx->pc == 0x266F68u) {
        ctx->pc = 0x266F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F64u;
        // 0x266f68: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F6Cu;
        goto label_266f6c;
    }
    ctx->pc = 0x266F64u;
    {
        const bool branch_taken_0x266f64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F64u;
        // 0x266f68: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f64) {
            ctx->pc = 0x2685E8u;
            goto label_2685e8;
        }
    }
    ctx->pc = 0x266F6Cu;
label_266f6c:
    // 0x266f6c: 0x1222058e  beq         $s1, $v0, . + 4 + (0x58E << 2)
label_266f70:
    if (ctx->pc == 0x266F70u) {
        ctx->pc = 0x266F74u;
        goto label_266f74;
    }
    ctx->pc = 0x266F6Cu;
    {
        const bool branch_taken_0x266f6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266f6c) {
            ctx->pc = 0x2685A8u;
            goto label_2685a8;
        }
    }
    ctx->pc = 0x266F74u;
label_266f74:
    // 0x266f74: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x266f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_266f78:
    // 0x266f78: 0x12220581  beq         $s1, $v0, . + 4 + (0x581 << 2)
label_266f7c:
    if (ctx->pc == 0x266F7Cu) {
        ctx->pc = 0x266F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F78u;
        // 0x266f7c: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F80u;
        goto label_266f80;
    }
    ctx->pc = 0x266F78u;
    {
        const bool branch_taken_0x266f78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F78u;
        // 0x266f7c: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f78) {
            ctx->pc = 0x268580u;
            goto label_268580;
        }
    }
    ctx->pc = 0x266F80u;
label_266f80:
    // 0x266f80: 0x12220571  beq         $s1, $v0, . + 4 + (0x571 << 2)
label_266f84:
    if (ctx->pc == 0x266F84u) {
        ctx->pc = 0x266F88u;
        goto label_266f88;
    }
    ctx->pc = 0x266F80u;
    {
        const bool branch_taken_0x266f80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266f80) {
            ctx->pc = 0x268548u;
            goto label_268548;
        }
    }
    ctx->pc = 0x266F88u;
label_266f88:
    // 0x266f88: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x266f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
label_266f8c:
    // 0x266f8c: 0x12220552  beq         $s1, $v0, . + 4 + (0x552 << 2)
label_266f90:
    if (ctx->pc == 0x266F90u) {
        ctx->pc = 0x266F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F8Cu;
        // 0x266f90: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266F94u;
        goto label_266f94;
    }
    ctx->pc = 0x266F8Cu;
    {
        const bool branch_taken_0x266f8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F8Cu;
        // 0x266f90: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f8c) {
            ctx->pc = 0x2684D8u;
            goto label_2684d8;
        }
    }
    ctx->pc = 0x266F94u;
label_266f94:
    // 0x266f94: 0x1222052a  beq         $s1, $v0, . + 4 + (0x52A << 2)
label_266f98:
    if (ctx->pc == 0x266F98u) {
        ctx->pc = 0x266F9Cu;
        goto label_266f9c;
    }
    ctx->pc = 0x266F94u;
    {
        const bool branch_taken_0x266f94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266f94) {
            ctx->pc = 0x268440u;
            goto label_268440;
        }
    }
    ctx->pc = 0x266F9Cu;
label_266f9c:
    // 0x266f9c: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x266f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
label_266fa0:
    // 0x266fa0: 0x1222051f  beq         $s1, $v0, . + 4 + (0x51F << 2)
label_266fa4:
    if (ctx->pc == 0x266FA4u) {
        ctx->pc = 0x266FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FA0u;
        // 0x266fa4: 0x24020057  addiu       $v0, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266FA8u;
        goto label_266fa8;
    }
    ctx->pc = 0x266FA0u;
    {
        const bool branch_taken_0x266fa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FA0u;
        // 0x266fa4: 0x24020057  addiu       $v0, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266fa0) {
            ctx->pc = 0x268420u;
            goto label_268420;
        }
    }
    ctx->pc = 0x266FA8u;
label_266fa8:
    // 0x266fa8: 0x12220511  beq         $s1, $v0, . + 4 + (0x511 << 2)
label_266fac:
    if (ctx->pc == 0x266FACu) {
        ctx->pc = 0x266FB0u;
        goto label_266fb0;
    }
    ctx->pc = 0x266FA8u;
    {
        const bool branch_taken_0x266fa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266fa8) {
            ctx->pc = 0x2683F0u;
            goto label_2683f0;
        }
    }
    ctx->pc = 0x266FB0u;
label_266fb0:
    // 0x266fb0: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x266fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_266fb4:
    // 0x266fb4: 0x122204d6  beq         $s1, $v0, . + 4 + (0x4D6 << 2)
label_266fb8:
    if (ctx->pc == 0x266FB8u) {
        ctx->pc = 0x266FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FB4u;
        // 0x266fb8: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266FBCu;
        goto label_266fbc;
    }
    ctx->pc = 0x266FB4u;
    {
        const bool branch_taken_0x266fb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FB4u;
        // 0x266fb8: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266fb4) {
            ctx->pc = 0x268310u;
            goto label_268310;
        }
    }
    ctx->pc = 0x266FBCu;
label_266fbc:
    // 0x266fbc: 0x122204c8  beq         $s1, $v0, . + 4 + (0x4C8 << 2)
label_266fc0:
    if (ctx->pc == 0x266FC0u) {
        ctx->pc = 0x266FC4u;
        goto label_266fc4;
    }
    ctx->pc = 0x266FBCu;
    {
        const bool branch_taken_0x266fbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266fbc) {
            ctx->pc = 0x2682E0u;
            goto label_2682e0;
        }
    }
    ctx->pc = 0x266FC4u;
label_266fc4:
    // 0x266fc4: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x266fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_266fc8:
    // 0x266fc8: 0x122204c1  beq         $s1, $v0, . + 4 + (0x4C1 << 2)
label_266fcc:
    if (ctx->pc == 0x266FCCu) {
        ctx->pc = 0x266FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FC8u;
        // 0x266fcc: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266FD0u;
        goto label_266fd0;
    }
    ctx->pc = 0x266FC8u;
    {
        const bool branch_taken_0x266fc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FC8u;
        // 0x266fcc: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266fc8) {
            ctx->pc = 0x2682D0u;
            goto label_2682d0;
        }
    }
    ctx->pc = 0x266FD0u;
label_266fd0:
    // 0x266fd0: 0x122204b7  beq         $s1, $v0, . + 4 + (0x4B7 << 2)
label_266fd4:
    if (ctx->pc == 0x266FD4u) {
        ctx->pc = 0x266FD8u;
        goto label_266fd8;
    }
    ctx->pc = 0x266FD0u;
    {
        const bool branch_taken_0x266fd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266fd0) {
            ctx->pc = 0x2682B0u;
            goto label_2682b0;
        }
    }
    ctx->pc = 0x266FD8u;
label_266fd8:
    // 0x266fd8: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x266fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_266fdc:
    // 0x266fdc: 0x122204ae  beq         $s1, $v0, . + 4 + (0x4AE << 2)
label_266fe0:
    if (ctx->pc == 0x266FE0u) {
        ctx->pc = 0x266FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FDCu;
        // 0x266fe0: 0x2402005e  addiu       $v0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266FE4u;
        goto label_266fe4;
    }
    ctx->pc = 0x266FDCu;
    {
        const bool branch_taken_0x266fdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FDCu;
        // 0x266fe0: 0x2402005e  addiu       $v0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266fdc) {
            ctx->pc = 0x268298u;
            goto label_268298;
        }
    }
    ctx->pc = 0x266FE4u;
label_266fe4:
    // 0x266fe4: 0x1222048e  beq         $s1, $v0, . + 4 + (0x48E << 2)
label_266fe8:
    if (ctx->pc == 0x266FE8u) {
        ctx->pc = 0x266FECu;
        goto label_266fec;
    }
    ctx->pc = 0x266FE4u;
    {
        const bool branch_taken_0x266fe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266fe4) {
            ctx->pc = 0x268220u;
            goto label_268220;
        }
    }
    ctx->pc = 0x266FECu;
label_266fec:
    // 0x266fec: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x266fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_266ff0:
    // 0x266ff0: 0x1222047d  beq         $s1, $v0, . + 4 + (0x47D << 2)
label_266ff4:
    if (ctx->pc == 0x266FF4u) {
        ctx->pc = 0x266FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FF0u;
        // 0x266ff4: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266FF8u;
        goto label_266ff8;
    }
    ctx->pc = 0x266FF0u;
    {
        const bool branch_taken_0x266ff0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x266FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FF0u;
        // 0x266ff4: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ff0) {
            ctx->pc = 0x2681E8u;
            goto label_2681e8;
        }
    }
    ctx->pc = 0x266FF8u;
label_266ff8:
    // 0x266ff8: 0x1222045f  beq         $s1, $v0, . + 4 + (0x45F << 2)
label_266ffc:
    if (ctx->pc == 0x266FFCu) {
        ctx->pc = 0x267000u;
        goto label_267000;
    }
    ctx->pc = 0x266FF8u;
    {
        const bool branch_taken_0x266ff8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x266ff8) {
            ctx->pc = 0x268178u;
            goto label_268178;
        }
    }
    ctx->pc = 0x267000u;
label_267000:
    // 0x267000: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x267000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_267004:
    // 0x267004: 0x12220446  beq         $s1, $v0, . + 4 + (0x446 << 2)
label_267008:
    if (ctx->pc == 0x267008u) {
        ctx->pc = 0x267008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267004u;
        // 0x267008: 0x24020054  addiu       $v0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26700Cu;
        goto label_26700c;
    }
    ctx->pc = 0x267004u;
    {
        const bool branch_taken_0x267004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x267008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267004u;
        // 0x267008: 0x24020054  addiu       $v0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267004) {
            ctx->pc = 0x268120u;
            goto label_268120;
        }
    }
    ctx->pc = 0x26700Cu;
label_26700c:
    // 0x26700c: 0x12220420  beq         $s1, $v0, . + 4 + (0x420 << 2)
label_267010:
    if (ctx->pc == 0x267010u) {
        ctx->pc = 0x267014u;
        goto label_267014;
    }
    ctx->pc = 0x26700Cu;
    {
        const bool branch_taken_0x26700c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x26700c) {
            ctx->pc = 0x268090u;
            goto label_268090;
        }
    }
    ctx->pc = 0x267014u;
label_267014:
    // 0x267014: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x267014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_267018:
    // 0x267018: 0x122208d3  beq         $s1, $v0, . + 4 + (0x8D3 << 2)
label_26701c:
    if (ctx->pc == 0x26701Cu) {
        ctx->pc = 0x26701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267018u;
        // 0x26701c: 0x24020052  addiu       $v0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267020u;
        goto label_267020;
    }
    ctx->pc = 0x267018u;
    {
        const bool branch_taken_0x267018 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x26701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267018u;
        // 0x26701c: 0x24020052  addiu       $v0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267018) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267020u;
label_267020:
    // 0x267020: 0x12220413  beq         $s1, $v0, . + 4 + (0x413 << 2)
label_267024:
    if (ctx->pc == 0x267024u) {
        ctx->pc = 0x267028u;
        goto label_267028;
    }
    ctx->pc = 0x267020u;
    {
        const bool branch_taken_0x267020 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x267020) {
            ctx->pc = 0x268070u;
            goto label_268070;
        }
    }
    ctx->pc = 0x267028u;
label_267028:
    // 0x267028: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x267028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_26702c:
    // 0x26702c: 0x1222040c  beq         $s1, $v0, . + 4 + (0x40C << 2)
label_267030:
    if (ctx->pc == 0x267030u) {
        ctx->pc = 0x267030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26702Cu;
        // 0x267030: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267034u;
        goto label_267034;
    }
    ctx->pc = 0x26702Cu;
    {
        const bool branch_taken_0x26702c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x267030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26702Cu;
        // 0x267030: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26702c) {
            ctx->pc = 0x268060u;
            goto label_268060;
        }
    }
    ctx->pc = 0x267034u;
label_267034:
    // 0x267034: 0x122203d8  beq         $s1, $v0, . + 4 + (0x3D8 << 2)
label_267038:
    if (ctx->pc == 0x267038u) {
        ctx->pc = 0x26703Cu;
        goto label_26703c;
    }
    ctx->pc = 0x267034u;
    {
        const bool branch_taken_0x267034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x267034) {
            ctx->pc = 0x267F98u;
            goto label_267f98;
        }
    }
    ctx->pc = 0x26703Cu;
label_26703c:
    // 0x26703c: 0x24020099  addiu       $v0, $zero, 0x99
    ctx->pc = 0x26703cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_267040:
    // 0x267040: 0x122203bf  beq         $s1, $v0, . + 4 + (0x3BF << 2)
label_267044:
    if (ctx->pc == 0x267044u) {
        ctx->pc = 0x267044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267040u;
        // 0x267044: 0x24020098  addiu       $v0, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267048u;
        goto label_267048;
    }
    ctx->pc = 0x267040u;
    {
        const bool branch_taken_0x267040 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x267044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267040u;
        // 0x267044: 0x24020098  addiu       $v0, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267040) {
            ctx->pc = 0x267F40u;
            goto label_267f40;
        }
    }
    ctx->pc = 0x267048u;
label_267048:
    // 0x267048: 0x122203af  beq         $s1, $v0, . + 4 + (0x3AF << 2)
label_26704c:
    if (ctx->pc == 0x26704Cu) {
        ctx->pc = 0x267050u;
        goto label_267050;
    }
    ctx->pc = 0x267048u;
    {
        const bool branch_taken_0x267048 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x267048) {
            ctx->pc = 0x267F08u;
            goto label_267f08;
        }
    }
    ctx->pc = 0x267050u;
label_267050:
    // 0x267050: 0x240200a9  addiu       $v0, $zero, 0xA9
    ctx->pc = 0x267050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
label_267054:
    // 0x267054: 0x122203a0  beq         $s1, $v0, . + 4 + (0x3A0 << 2)
label_267058:
    if (ctx->pc == 0x267058u) {
        ctx->pc = 0x267058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267054u;
        // 0x267058: 0x240200a8  addiu       $v0, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26705Cu;
        goto label_26705c;
    }
    ctx->pc = 0x267054u;
    {
        const bool branch_taken_0x267054 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x267058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267054u;
        // 0x267058: 0x240200a8  addiu       $v0, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267054) {
            ctx->pc = 0x267ED8u;
            goto label_267ed8;
        }
    }
    ctx->pc = 0x26705Cu;
label_26705c:
    // 0x26705c: 0x1222039a  beq         $s1, $v0, . + 4 + (0x39A << 2)
label_267060:
    if (ctx->pc == 0x267060u) {
        ctx->pc = 0x267064u;
        goto label_267064;
    }
    ctx->pc = 0x26705Cu;
    {
        const bool branch_taken_0x26705c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x26705c) {
            ctx->pc = 0x267EC8u;
            goto label_267ec8;
        }
    }
    ctx->pc = 0x267064u;
label_267064:
    // 0x267064: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x267064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_267068:
    // 0x267068: 0x122202f9  beq         $s1, $v0, . + 4 + (0x2F9 << 2)
label_26706c:
    if (ctx->pc == 0x26706Cu) {
        ctx->pc = 0x26706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267068u;
        // 0x26706c: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267070u;
        goto label_267070;
    }
    ctx->pc = 0x267068u;
    {
        const bool branch_taken_0x267068 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x26706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267068u;
        // 0x26706c: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267068) {
            ctx->pc = 0x267C50u;
            goto label_267c50;
        }
    }
    ctx->pc = 0x267070u;
label_267070:
    // 0x267070: 0x122202f3  beq         $s1, $v0, . + 4 + (0x2F3 << 2)
label_267074:
    if (ctx->pc == 0x267074u) {
        ctx->pc = 0x267078u;
        goto label_267078;
    }
    ctx->pc = 0x267070u;
    {
        const bool branch_taken_0x267070 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x267070) {
            ctx->pc = 0x267C40u;
            goto label_267c40;
        }
    }
    ctx->pc = 0x267078u;
label_267078:
    // 0x267078: 0x240200c3  addiu       $v0, $zero, 0xC3
    ctx->pc = 0x267078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
label_26707c:
    // 0x26707c: 0x122202ec  beq         $s1, $v0, . + 4 + (0x2EC << 2)
label_267080:
    if (ctx->pc == 0x267080u) {
        ctx->pc = 0x267080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26707Cu;
        // 0x267080: 0x240200c2  addiu       $v0, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267084u;
        goto label_267084;
    }
    ctx->pc = 0x26707Cu;
    {
        const bool branch_taken_0x26707c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x267080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26707Cu;
        // 0x267080: 0x240200c2  addiu       $v0, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26707c) {
            ctx->pc = 0x267C30u;
            goto label_267c30;
        }
    }
    ctx->pc = 0x267084u;
label_267084:
    // 0x267084: 0x122202de  beq         $s1, $v0, . + 4 + (0x2DE << 2)
label_267088:
    if (ctx->pc == 0x267088u) {
        ctx->pc = 0x26708Cu;
        goto label_26708c;
    }
    ctx->pc = 0x267084u;
    {
        const bool branch_taken_0x267084 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x267084) {
            ctx->pc = 0x267C00u;
            goto label_267c00;
        }
    }
    ctx->pc = 0x26708Cu;
label_26708c:
    // 0x26708c: 0x240200c1  addiu       $v0, $zero, 0xC1
    ctx->pc = 0x26708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_267090:
    // 0x267090: 0x122202a5  beq         $s1, $v0, . + 4 + (0x2A5 << 2)
label_267094:
    if (ctx->pc == 0x267094u) {
        ctx->pc = 0x267094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267090u;
        // 0x267094: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267098u;
        goto label_267098;
    }
    ctx->pc = 0x267090u;
    {
        const bool branch_taken_0x267090 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x267094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267090u;
        // 0x267094: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267090) {
            ctx->pc = 0x267B28u;
            goto label_267b28;
        }
    }
    ctx->pc = 0x267098u;
label_267098:
    // 0x267098: 0x1222026d  beq         $s1, $v0, . + 4 + (0x26D << 2)
label_26709c:
    if (ctx->pc == 0x26709Cu) {
        ctx->pc = 0x2670A0u;
        goto label_2670a0;
    }
    ctx->pc = 0x267098u;
    {
        const bool branch_taken_0x267098 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x267098) {
            ctx->pc = 0x267A50u;
            goto label_267a50;
        }
    }
    ctx->pc = 0x2670A0u;
label_2670a0:
    // 0x2670a0: 0x240200b9  addiu       $v0, $zero, 0xB9
    ctx->pc = 0x2670a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
label_2670a4:
    // 0x2670a4: 0x12220260  beq         $s1, $v0, . + 4 + (0x260 << 2)
label_2670a8:
    if (ctx->pc == 0x2670A8u) {
        ctx->pc = 0x2670A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670A4u;
        // 0x2670a8: 0x240200b8  addiu       $v0, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2670ACu;
        goto label_2670ac;
    }
    ctx->pc = 0x2670A4u;
    {
        const bool branch_taken_0x2670a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2670A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670A4u;
        // 0x2670a8: 0x240200b8  addiu       $v0, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670a4) {
            ctx->pc = 0x267A28u;
            goto label_267a28;
        }
    }
    ctx->pc = 0x2670ACu;
label_2670ac:
    // 0x2670ac: 0x12220254  beq         $s1, $v0, . + 4 + (0x254 << 2)
label_2670b0:
    if (ctx->pc == 0x2670B0u) {
        ctx->pc = 0x2670B4u;
        goto label_2670b4;
    }
    ctx->pc = 0x2670ACu;
    {
        const bool branch_taken_0x2670ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2670ac) {
            ctx->pc = 0x267A00u;
            goto label_267a00;
        }
    }
    ctx->pc = 0x2670B4u;
label_2670b4:
    // 0x2670b4: 0x240200b1  addiu       $v0, $zero, 0xB1
    ctx->pc = 0x2670b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
label_2670b8:
    // 0x2670b8: 0x12220233  beq         $s1, $v0, . + 4 + (0x233 << 2)
label_2670bc:
    if (ctx->pc == 0x2670BCu) {
        ctx->pc = 0x2670BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670B8u;
        // 0x2670bc: 0x240200b0  addiu       $v0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2670C0u;
        goto label_2670c0;
    }
    ctx->pc = 0x2670B8u;
    {
        const bool branch_taken_0x2670b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2670BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670B8u;
        // 0x2670bc: 0x240200b0  addiu       $v0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670b8) {
            ctx->pc = 0x267988u;
            goto label_267988;
        }
    }
    ctx->pc = 0x2670C0u;
label_2670c0:
    // 0x2670c0: 0x122201df  beq         $s1, $v0, . + 4 + (0x1DF << 2)
label_2670c4:
    if (ctx->pc == 0x2670C4u) {
        ctx->pc = 0x2670C8u;
        goto label_2670c8;
    }
    ctx->pc = 0x2670C0u;
    {
        const bool branch_taken_0x2670c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2670c0) {
            ctx->pc = 0x267840u;
            goto label_267840;
        }
    }
    ctx->pc = 0x2670C8u;
label_2670c8:
    // 0x2670c8: 0x240200d5  addiu       $v0, $zero, 0xD5
    ctx->pc = 0x2670c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
label_2670cc:
    // 0x2670cc: 0x122201ba  beq         $s1, $v0, . + 4 + (0x1BA << 2)
label_2670d0:
    if (ctx->pc == 0x2670D0u) {
        ctx->pc = 0x2670D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670CCu;
        // 0x2670d0: 0x240200d4  addiu       $v0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2670D4u;
        goto label_2670d4;
    }
    ctx->pc = 0x2670CCu;
    {
        const bool branch_taken_0x2670cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2670D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670CCu;
        // 0x2670d0: 0x240200d4  addiu       $v0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670cc) {
            ctx->pc = 0x2677B8u;
            goto label_2677b8;
        }
    }
    ctx->pc = 0x2670D4u;
label_2670d4:
    // 0x2670d4: 0x122201aa  beq         $s1, $v0, . + 4 + (0x1AA << 2)
label_2670d8:
    if (ctx->pc == 0x2670D8u) {
        ctx->pc = 0x2670DCu;
        goto label_2670dc;
    }
    ctx->pc = 0x2670D4u;
    {
        const bool branch_taken_0x2670d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2670d4) {
            ctx->pc = 0x267780u;
            goto label_267780;
        }
    }
    ctx->pc = 0x2670DCu;
label_2670dc:
    // 0x2670dc: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x2670dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_2670e0:
    // 0x2670e0: 0x12220167  beq         $s1, $v0, . + 4 + (0x167 << 2)
label_2670e4:
    if (ctx->pc == 0x2670E4u) {
        ctx->pc = 0x2670E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670E0u;
        // 0x2670e4: 0x240200db  addiu       $v0, $zero, 0xDB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2670E8u;
        goto label_2670e8;
    }
    ctx->pc = 0x2670E0u;
    {
        const bool branch_taken_0x2670e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2670E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670E0u;
        // 0x2670e4: 0x240200db  addiu       $v0, $zero, 0xDB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670e0) {
            ctx->pc = 0x267680u;
            goto label_267680;
        }
    }
    ctx->pc = 0x2670E8u;
label_2670e8:
    // 0x2670e8: 0x12220125  beq         $s1, $v0, . + 4 + (0x125 << 2)
label_2670ec:
    if (ctx->pc == 0x2670ECu) {
        ctx->pc = 0x2670F0u;
        goto label_2670f0;
    }
    ctx->pc = 0x2670E8u;
    {
        const bool branch_taken_0x2670e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2670e8) {
            ctx->pc = 0x267580u;
            goto label_267580;
        }
    }
    ctx->pc = 0x2670F0u;
label_2670f0:
    // 0x2670f0: 0x240200da  addiu       $v0, $zero, 0xDA
    ctx->pc = 0x2670f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
label_2670f4:
    // 0x2670f4: 0x122200e2  beq         $s1, $v0, . + 4 + (0xE2 << 2)
label_2670f8:
    if (ctx->pc == 0x2670F8u) {
        ctx->pc = 0x2670F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670F4u;
        // 0x2670f8: 0x240200d9  addiu       $v0, $zero, 0xD9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2670FCu;
        goto label_2670fc;
    }
    ctx->pc = 0x2670F4u;
    {
        const bool branch_taken_0x2670f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2670F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670F4u;
        // 0x2670f8: 0x240200d9  addiu       $v0, $zero, 0xD9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670f4) {
            ctx->pc = 0x267480u;
            goto label_267480;
        }
    }
    ctx->pc = 0x2670FCu;
label_2670fc:
    // 0x2670fc: 0x122200dc  beq         $s1, $v0, . + 4 + (0xDC << 2)
label_267100:
    if (ctx->pc == 0x267100u) {
        ctx->pc = 0x267104u;
        goto label_267104;
    }
    ctx->pc = 0x2670FCu;
    {
        const bool branch_taken_0x2670fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2670fc) {
            ctx->pc = 0x267470u;
            goto label_267470;
        }
    }
    ctx->pc = 0x267104u;
label_267104:
    // 0x267104: 0x240200d8  addiu       $v0, $zero, 0xD8
    ctx->pc = 0x267104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
label_267108:
    // 0x267108: 0x122200d5  beq         $s1, $v0, . + 4 + (0xD5 << 2)
label_26710c:
    if (ctx->pc == 0x26710Cu) {
        ctx->pc = 0x26710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267108u;
        // 0x26710c: 0x240200d2  addiu       $v0, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267110u;
        goto label_267110;
    }
    ctx->pc = 0x267108u;
    {
        const bool branch_taken_0x267108 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x26710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267108u;
        // 0x26710c: 0x240200d2  addiu       $v0, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267108) {
            ctx->pc = 0x267460u;
            goto label_267460;
        }
    }
    ctx->pc = 0x267110u;
label_267110:
    // 0x267110: 0x122200c9  beq         $s1, $v0, . + 4 + (0xC9 << 2)
label_267114:
    if (ctx->pc == 0x267114u) {
        ctx->pc = 0x267118u;
        goto label_267118;
    }
    ctx->pc = 0x267110u;
    {
        const bool branch_taken_0x267110 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x267110) {
            ctx->pc = 0x267438u;
            goto label_267438;
        }
    }
    ctx->pc = 0x267118u;
label_267118:
    // 0x267118: 0x240200d1  addiu       $v0, $zero, 0xD1
    ctx->pc = 0x267118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
label_26711c:
    // 0x26711c: 0x122200b4  beq         $s1, $v0, . + 4 + (0xB4 << 2)
label_267120:
    if (ctx->pc == 0x267120u) {
        ctx->pc = 0x267120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26711Cu;
        // 0x267120: 0x240200d0  addiu       $v0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267124u;
        goto label_267124;
    }
    ctx->pc = 0x26711Cu;
    {
        const bool branch_taken_0x26711c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x267120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26711Cu;
        // 0x267120: 0x240200d0  addiu       $v0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26711c) {
            ctx->pc = 0x2673F0u;
            goto label_2673f0;
        }
    }
    ctx->pc = 0x267124u;
label_267124:
    // 0x267124: 0x1222009e  beq         $s1, $v0, . + 4 + (0x9E << 2)
label_267128:
    if (ctx->pc == 0x267128u) {
        ctx->pc = 0x26712Cu;
        goto label_26712c;
    }
    ctx->pc = 0x267124u;
    {
        const bool branch_taken_0x267124 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x267124) {
            ctx->pc = 0x2673A0u;
            goto label_2673a0;
        }
    }
    ctx->pc = 0x26712Cu;
label_26712c:
    // 0x26712c: 0x240200e4  addiu       $v0, $zero, 0xE4
    ctx->pc = 0x26712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_267130:
    // 0x267130: 0x1222008d  beq         $s1, $v0, . + 4 + (0x8D << 2)
label_267134:
    if (ctx->pc == 0x267134u) {
        ctx->pc = 0x267134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267130u;
        // 0x267134: 0x240200e8  addiu       $v0, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267138u;
        goto label_267138;
    }
    ctx->pc = 0x267130u;
    {
        const bool branch_taken_0x267130 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x267134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267130u;
        // 0x267134: 0x240200e8  addiu       $v0, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267130) {
            ctx->pc = 0x267368u;
            goto label_267368;
        }
    }
    ctx->pc = 0x267138u;
label_267138:
    // 0x267138: 0x1222007d  beq         $s1, $v0, . + 4 + (0x7D << 2)
label_26713c:
    if (ctx->pc == 0x26713Cu) {
        ctx->pc = 0x267140u;
        goto label_267140;
    }
    ctx->pc = 0x267138u;
    {
        const bool branch_taken_0x267138 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x267138) {
            ctx->pc = 0x267330u;
            goto label_267330;
        }
    }
    ctx->pc = 0x267140u;
label_267140:
    // 0x267140: 0x240200e3  addiu       $v0, $zero, 0xE3
    ctx->pc = 0x267140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
label_267144:
    // 0x267144: 0x12220070  beq         $s1, $v0, . + 4 + (0x70 << 2)
label_267148:
    if (ctx->pc == 0x267148u) {
        ctx->pc = 0x267148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267144u;
        // 0x267148: 0x240200e2  addiu       $v0, $zero, 0xE2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26714Cu;
        goto label_26714c;
    }
    ctx->pc = 0x267144u;
    {
        const bool branch_taken_0x267144 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x267148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267144u;
        // 0x267148: 0x240200e2  addiu       $v0, $zero, 0xE2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267144) {
            ctx->pc = 0x267308u;
            goto label_267308;
        }
    }
    ctx->pc = 0x26714Cu;
label_26714c:
    // 0x26714c: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
label_267150:
    if (ctx->pc == 0x267150u) {
        ctx->pc = 0x267154u;
        goto label_267154;
    }
    ctx->pc = 0x26714Cu;
    {
        const bool branch_taken_0x26714c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x26714c) {
            ctx->pc = 0x267168u;
            goto label_267168;
        }
    }
    ctx->pc = 0x267154u;
label_267154:
    // 0x267154: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x267154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_267158:
    // 0x267158: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_26715c:
    if (ctx->pc == 0x26715Cu) {
        ctx->pc = 0x267160u;
        goto label_267160;
    }
    ctx->pc = 0x267158u;
    {
        const bool branch_taken_0x267158 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x267158) {
            ctx->pc = 0x267168u;
            goto label_267168;
        }
    }
    ctx->pc = 0x267160u;
label_267160:
    // 0x267160: 0x1000087b  b           . + 4 + (0x87B << 2)
label_267164:
    if (ctx->pc == 0x267164u) {
        ctx->pc = 0x267168u;
        goto label_267168;
    }
    ctx->pc = 0x267160u;
    {
        const bool branch_taken_0x267160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267160) {
            ctx->pc = 0x269350u;
            goto label_269350;
        }
    }
    ctx->pc = 0x267168u;
label_267168:
    // 0x267168: 0x96020048  lhu         $v0, 0x48($s0)
    ctx->pc = 0x267168u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
label_26716c:
    // 0x26716c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x26716cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_267170:
    // 0x267170: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_267174:
    if (ctx->pc == 0x267174u) {
        ctx->pc = 0x267178u;
        goto label_267178;
    }
    ctx->pc = 0x267170u;
    {
        const bool branch_taken_0x267170 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x267170) {
            ctx->pc = 0x2671A0u;
            goto label_2671a0;
        }
    }
    ctx->pc = 0x267178u;
label_267178:
    // 0x267178: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x267178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26717c:
    // 0x26717c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x26717cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_267180:
    // 0x267180: 0xc049522  jal         func_125488
label_267184:
    if (ctx->pc == 0x267184u) {
        ctx->pc = 0x267184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267180u;
        // 0x267184: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267188u;
        goto label_267188;
    }
    ctx->pc = 0x267180u;
    SET_GPR_U32(ctx, 31, 0x267188u);
    ctx->pc = 0x267184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267180u;
    // 0x267184: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x267180u, 0x267188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267188u;
label_267188:
    // 0x267188: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x267188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26718c:
    // 0x26718c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x26718cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_267190:
    // 0x267190: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x267190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
label_267194:
    // 0x267194: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x267194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_267198:
    // 0x267198: 0x10000009  b           . + 4 + (0x9 << 2)
label_26719c:
    if (ctx->pc == 0x26719Cu) {
        ctx->pc = 0x26719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267198u;
        // 0x26719c: 0xa7a20156  sh          $v0, 0x156($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 342), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2671A0u;
        goto label_2671a0;
    }
    ctx->pc = 0x267198u;
    {
        const bool branch_taken_0x267198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267198u;
        // 0x26719c: 0xa7a20156  sh          $v0, 0x156($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 342), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267198) {
            ctx->pc = 0x2671C0u;
            goto label_2671c0;
        }
    }
    ctx->pc = 0x2671A0u;
label_2671a0:
    // 0x2671a0: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2671a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2671a4:
    // 0x2671a4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2671a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2671a8:
    // 0x2671a8: 0xc049522  jal         func_125488
label_2671ac:
    if (ctx->pc == 0x2671ACu) {
        ctx->pc = 0x2671ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2671A8u;
        // 0x2671ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2671B0u;
        goto label_2671b0;
    }
    ctx->pc = 0x2671A8u;
    SET_GPR_U32(ctx, 31, 0x2671B0u);
    ctx->pc = 0x2671ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2671A8u;
    // 0x2671ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2671A8u, 0x2671B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2671B0u;
label_2671b0:
    // 0x2671b0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2671b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2671b4:
    // 0x2671b4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2671b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2671b8:
    // 0x2671b8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2671b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2671bc:
    // 0x2671bc: 0x0  nop
    ctx->pc = 0x2671bcu;
    // NOP
label_2671c0:
    // 0x2671c0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2671c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2671c4:
    // 0x2671c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2671c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2671c8:
    // 0x2671c8: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
label_2671cc:
    if (ctx->pc == 0x2671CCu) {
        ctx->pc = 0x2671CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2671C8u;
        // 0x2671cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2671D0u;
        goto label_2671d0;
    }
    ctx->pc = 0x2671C8u;
    {
        const bool branch_taken_0x2671c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2671CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2671C8u;
        // 0x2671cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2671c8) {
            ctx->pc = 0x2672F8u;
            goto label_2672f8;
        }
    }
    ctx->pc = 0x2671D0u;
label_2671d0:
    // 0x2671d0: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
label_2671d4:
    if (ctx->pc == 0x2671D4u) {
        ctx->pc = 0x2671D8u;
        goto label_2671d8;
    }
    ctx->pc = 0x2671D0u;
    {
        const bool branch_taken_0x2671d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2671d0) {
            ctx->pc = 0x2672D8u;
            goto label_2672d8;
        }
    }
    ctx->pc = 0x2671D8u;
label_2671d8:
    // 0x2671d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2671dc:
    if (ctx->pc == 0x2671DCu) {
        ctx->pc = 0x2671E0u;
        goto label_2671e0;
    }
    ctx->pc = 0x2671D8u;
    {
        const bool branch_taken_0x2671d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2671d8) {
            ctx->pc = 0x2671E8u;
            goto label_2671e8;
        }
    }
    ctx->pc = 0x2671E0u;
label_2671e0:
    // 0x2671e0: 0x10000861  b           . + 4 + (0x861 << 2)
label_2671e4:
    if (ctx->pc == 0x2671E4u) {
        ctx->pc = 0x2671E8u;
        goto label_2671e8;
    }
    ctx->pc = 0x2671E0u;
    {
        const bool branch_taken_0x2671e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2671e0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2671E8u;
label_2671e8:
    // 0x2671e8: 0x240200e2  addiu       $v0, $zero, 0xE2
    ctx->pc = 0x2671e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
label_2671ec:
    // 0x2671ec: 0x16220012  bne         $s1, $v0, . + 4 + (0x12 << 2)
label_2671f0:
    if (ctx->pc == 0x2671F0u) {
        ctx->pc = 0x2671F4u;
        goto label_2671f4;
    }
    ctx->pc = 0x2671ECu;
    {
        const bool branch_taken_0x2671ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2671ec) {
            ctx->pc = 0x267238u;
            goto label_267238;
        }
    }
    ctx->pc = 0x2671F4u;
label_2671f4:
    // 0x2671f4: 0xc0d8e60  jal         func_363980
label_2671f8:
    if (ctx->pc == 0x2671F8u) {
        ctx->pc = 0x2671FCu;
        goto label_2671fc;
    }
    ctx->pc = 0x2671F4u;
    SET_GPR_U32(ctx, 31, 0x2671FCu);
    ctx->pc = 0x363980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363980u, 0x2671F4u, 0x2671FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2671FCu;
label_2671fc:
    // 0x2671fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_267200:
    if (ctx->pc == 0x267200u) {
        ctx->pc = 0x267204u;
        goto label_267204;
    }
    ctx->pc = 0x2671FCu;
    {
        const bool branch_taken_0x2671fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2671fc) {
            ctx->pc = 0x267228u;
            goto label_267228;
        }
    }
    ctx->pc = 0x267204u;
label_267204:
    // 0x267204: 0xc0d8d20  jal         func_363480
label_267208:
    if (ctx->pc == 0x267208u) {
        ctx->pc = 0x26720Cu;
        goto label_26720c;
    }
    ctx->pc = 0x267204u;
    SET_GPR_U32(ctx, 31, 0x26720Cu);
    ctx->pc = 0x363480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363480u, 0x267204u, 0x26720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26720Cu;
label_26720c:
    // 0x26720c: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x26720cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
label_267210:
    // 0x267210: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_267214:
    if (ctx->pc == 0x267214u) {
        ctx->pc = 0x267218u;
        goto label_267218;
    }
    ctx->pc = 0x267210u;
    {
        const bool branch_taken_0x267210 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x267210) {
            ctx->pc = 0x267238u;
            goto label_267238;
        }
    }
    ctx->pc = 0x267218u;
label_267218:
    // 0x267218: 0x97a20150  lhu         $v0, 0x150($sp)
    ctx->pc = 0x267218u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_26721c:
    // 0x26721c: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x26721cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_267220:
    // 0x267220: 0x10000005  b           . + 4 + (0x5 << 2)
label_267224:
    if (ctx->pc == 0x267224u) {
        ctx->pc = 0x267224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267220u;
        // 0x267224: 0xa7a20150  sh          $v0, 0x150($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 336), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267228u;
        goto label_267228;
    }
    ctx->pc = 0x267220u;
    {
        const bool branch_taken_0x267220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267220u;
        // 0x267224: 0xa7a20150  sh          $v0, 0x150($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 336), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267220) {
            ctx->pc = 0x267238u;
            goto label_267238;
        }
    }
    ctx->pc = 0x267228u;
label_267228:
    // 0x267228: 0x97a30150  lhu         $v1, 0x150($sp)
    ctx->pc = 0x267228u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_26722c:
    // 0x26722c: 0x9782887c  lhu         $v0, -0x7784($gp)
    ctx->pc = 0x26722cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936700)));
label_267230:
    // 0x267230: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x267230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_267234:
    // 0x267234: 0xa7a20150  sh          $v0, 0x150($sp)
    ctx->pc = 0x267234u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 336), (uint16_t)GPR_U32(ctx, 2));
label_267238:
    // 0x267238: 0xc09a518  jal         func_269460
label_26723c:
    if (ctx->pc == 0x26723Cu) {
        ctx->pc = 0x26723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267238u;
        // 0x26723c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267240u;
        goto label_267240;
    }
    ctx->pc = 0x267238u;
    SET_GPR_U32(ctx, 31, 0x267240u);
    ctx->pc = 0x26723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267238u;
    // 0x26723c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269460u, 0x267238u, 0x267240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267240u;
label_267240:
    // 0x267240: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x267240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_267244:
    // 0x267244: 0xc0a4724  jal         func_291C90
label_267248:
    if (ctx->pc == 0x267248u) {
        ctx->pc = 0x267248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267244u;
        // 0x267248: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26724Cu;
        goto label_26724c;
    }
    ctx->pc = 0x267244u;
    SET_GPR_U32(ctx, 31, 0x26724Cu);
    ctx->pc = 0x267248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267244u;
    // 0x267248: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291C90u, 0x267244u, 0x26724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26724Cu;
label_26724c:
    // 0x26724c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26724cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_267250:
    // 0x267250: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_267254:
    if (ctx->pc == 0x267254u) {
        ctx->pc = 0x267258u;
        goto label_267258;
    }
    ctx->pc = 0x267250u;
    {
        const bool branch_taken_0x267250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267250) {
            ctx->pc = 0x267268u;
            goto label_267268;
        }
    }
    ctx->pc = 0x267258u;
label_267258:
    // 0x267258: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x267258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26725c:
    // 0x26725c: 0x1000000e  b           . + 4 + (0xE << 2)
label_267260:
    if (ctx->pc == 0x267260u) {
        ctx->pc = 0x267260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26725Cu;
        // 0x267260: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267264u;
        goto label_267264;
    }
    ctx->pc = 0x26725Cu;
    {
        const bool branch_taken_0x26725c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26725Cu;
        // 0x267260: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26725c) {
            ctx->pc = 0x267298u;
            goto label_267298;
        }
    }
    ctx->pc = 0x267264u;
label_267264:
    // 0x267264: 0x0  nop
    ctx->pc = 0x267264u;
    // NOP
label_267268:
    // 0x267268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26726c:
    // 0x26726c: 0xc0a468c  jal         func_291A30
label_267270:
    if (ctx->pc == 0x267270u) {
        ctx->pc = 0x267270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26726Cu;
        // 0x267270: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267274u;
        goto label_267274;
    }
    ctx->pc = 0x26726Cu;
    SET_GPR_U32(ctx, 31, 0x267274u);
    ctx->pc = 0x267270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26726Cu;
    // 0x267270: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291A30u, 0x26726Cu, 0x267274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267274u;
label_267274:
    // 0x267274: 0x97a60156  lhu         $a2, 0x156($sp)
    ctx->pc = 0x267274u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 342)));
label_267278:
    // 0x267278: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x267278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_26727c:
    // 0x26727c: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
label_267280:
    if (ctx->pc == 0x267280u) {
        ctx->pc = 0x267280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26727Cu;
        // 0x267280: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267284u;
        goto label_267284;
    }
    ctx->pc = 0x26727Cu;
    {
        const bool branch_taken_0x26727c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x267280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26727Cu;
        // 0x267280: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26727c) {
            ctx->pc = 0x267298u;
            goto label_267298;
        }
    }
    ctx->pc = 0x267284u;
label_267284:
    // 0x267284: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x267284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267288:
    // 0x267288: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x267288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
label_26728c:
    // 0x26728c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26728cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267290:
    // 0x267290: 0xc0c2d58  jal         func_30B560
label_267294:
    if (ctx->pc == 0x267294u) {
        ctx->pc = 0x267294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267290u;
        // 0x267294: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267298u;
        goto label_267298;
    }
    ctx->pc = 0x267290u;
    SET_GPR_U32(ctx, 31, 0x267298u);
    ctx->pc = 0x267294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267290u;
    // 0x267294: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B560u, 0x267290u, 0x267298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267298u;
label_267298:
    // 0x267298: 0x96020048  lhu         $v0, 0x48($s0)
    ctx->pc = 0x267298u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
label_26729c:
    // 0x26729c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x26729cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2672a0:
    // 0x2672a0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_2672a4:
    if (ctx->pc == 0x2672A4u) {
        ctx->pc = 0x2672A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672A0u;
        // 0x2672a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2672A8u;
        goto label_2672a8;
    }
    ctx->pc = 0x2672A0u;
    {
        const bool branch_taken_0x2672a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2672A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672A0u;
        // 0x2672a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2672a0) {
            ctx->pc = 0x2672B8u;
            goto label_2672b8;
        }
    }
    ctx->pc = 0x2672A8u;
label_2672a8:
    // 0x2672a8: 0xc099afc  jal         func_266BF0
label_2672ac:
    if (ctx->pc == 0x2672ACu) {
        ctx->pc = 0x2672ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672A8u;
        // 0x2672ac: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2672B0u;
        goto label_2672b0;
    }
    ctx->pc = 0x2672A8u;
    SET_GPR_U32(ctx, 31, 0x2672B0u);
    ctx->pc = 0x2672ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2672A8u;
    // 0x2672ac: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266BF0u, 0x2672A8u, 0x2672B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2672B0u;
label_2672b0:
    // 0x2672b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2672b4:
    if (ctx->pc == 0x2672B4u) {
        ctx->pc = 0x2672B8u;
        goto label_2672b8;
    }
    ctx->pc = 0x2672B0u;
    {
        const bool branch_taken_0x2672b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2672b0) {
            ctx->pc = 0x2672C8u;
            goto label_2672c8;
        }
    }
    ctx->pc = 0x2672B8u;
label_2672b8:
    // 0x2672b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2672b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2672bc:
    // 0x2672bc: 0xc099afc  jal         func_266BF0
label_2672c0:
    if (ctx->pc == 0x2672C0u) {
        ctx->pc = 0x2672C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672BCu;
        // 0x2672c0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2672C4u;
        goto label_2672c4;
    }
    ctx->pc = 0x2672BCu;
    SET_GPR_U32(ctx, 31, 0x2672C4u);
    ctx->pc = 0x2672C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2672BCu;
    // 0x2672c0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266BF0u, 0x2672BCu, 0x2672C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2672C4u;
label_2672c4:
    // 0x2672c4: 0x0  nop
    ctx->pc = 0x2672c4u;
    // NOP
label_2672c8:
    // 0x2672c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2672c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2672cc:
    // 0x2672cc: 0xa3828874  sb          $v0, -0x778C($gp)
    ctx->pc = 0x2672ccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936692), (uint8_t)GPR_U32(ctx, 2));
label_2672d0:
    // 0x2672d0: 0x10000827  b           . + 4 + (0x827 << 2)
label_2672d4:
    if (ctx->pc == 0x2672D4u) {
        ctx->pc = 0x2672D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672D0u;
        // 0x2672d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2672D8u;
        goto label_2672d8;
    }
    ctx->pc = 0x2672D0u;
    {
        const bool branch_taken_0x2672d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2672D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672D0u;
        // 0x2672d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2672d0) {
            ctx->pc = 0x269370u;
            goto label_269370;
        }
    }
    ctx->pc = 0x2672D8u;
label_2672d8:
    // 0x2672d8: 0xc0a46a0  jal         func_291A80
label_2672dc:
    if (ctx->pc == 0x2672DCu) {
        ctx->pc = 0x2672E0u;
        goto label_2672e0;
    }
    ctx->pc = 0x2672D8u;
    SET_GPR_U32(ctx, 31, 0x2672E0u);
    ctx->pc = 0x291A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291A80u, 0x2672D8u, 0x2672E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2672E0u;
label_2672e0:
    // 0x2672e0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2672e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
label_2672e4:
    // 0x2672e4: 0xc095154  jal         func_254550
label_2672e8:
    if (ctx->pc == 0x2672E8u) {
        ctx->pc = 0x2672E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672E4u;
        // 0x2672e8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2672ECu;
        goto label_2672ec;
    }
    ctx->pc = 0x2672E4u;
    SET_GPR_U32(ctx, 31, 0x2672ECu);
    ctx->pc = 0x2672E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2672E4u;
    // 0x2672e8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x2672E4u, 0x2672ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2672ECu;
label_2672ec:
    // 0x2672ec: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2672ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_2672f0:
    // 0x2672f0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2672f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_2672f4:
    // 0x2672f4: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x2672f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_2672f8:
    // 0x2672f8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2672f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_2672fc:
    // 0x2672fc: 0x1000081c  b           . + 4 + (0x81C << 2)
label_267300:
    if (ctx->pc == 0x267300u) {
        ctx->pc = 0x267300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672FCu;
        // 0x267300: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267304u;
        goto label_267304;
    }
    ctx->pc = 0x2672FCu;
    {
        const bool branch_taken_0x2672fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672FCu;
        // 0x267300: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2672fc) {
            ctx->pc = 0x269370u;
            goto label_269370;
        }
    }
    ctx->pc = 0x267304u;
label_267304:
    // 0x267304: 0x0  nop
    ctx->pc = 0x267304u;
    // NOP
label_267308:
    // 0x267308: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x267308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26730c:
    // 0x26730c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x26730cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_267310:
    // 0x267310: 0xc049522  jal         func_125488
label_267314:
    if (ctx->pc == 0x267314u) {
        ctx->pc = 0x267314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267310u;
        // 0x267314: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267318u;
        goto label_267318;
    }
    ctx->pc = 0x267310u;
    SET_GPR_U32(ctx, 31, 0x267318u);
    ctx->pc = 0x267314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267310u;
    // 0x267314: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x267310u, 0x267318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267318u;
label_267318:
    // 0x267318: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x267318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26731c:
    // 0x26731c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x26731cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_267320:
    // 0x267320: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x267320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_267324:
    // 0x267324: 0x97a20150  lhu         $v0, 0x150($sp)
    ctx->pc = 0x267324u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_267328:
    // 0x267328: 0x1000080f  b           . + 4 + (0x80F << 2)
label_26732c:
    if (ctx->pc == 0x26732Cu) {
        ctx->pc = 0x26732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267328u;
        // 0x26732c: 0xa782887c  sh          $v0, -0x7784($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936700), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267330u;
        goto label_267330;
    }
    ctx->pc = 0x267328u;
    {
        const bool branch_taken_0x267328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267328u;
        // 0x26732c: 0xa782887c  sh          $v0, -0x7784($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936700), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267328) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267330u;
label_267330:
    // 0x267330: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x267330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267334:
    // 0x267334: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x267334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_267338:
    // 0x267338: 0xc049522  jal         func_125488
label_26733c:
    if (ctx->pc == 0x26733Cu) {
        ctx->pc = 0x26733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267338u;
        // 0x26733c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267340u;
        goto label_267340;
    }
    ctx->pc = 0x267338u;
    SET_GPR_U32(ctx, 31, 0x267340u);
    ctx->pc = 0x26733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267338u;
    // 0x26733c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x267338u, 0x267340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267340u;
label_267340:
    // 0x267340: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x267340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267344:
    // 0x267344: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x267344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_267348:
    // 0x267348: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x267348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26734c:
    // 0x26734c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x26734cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_267350:
    // 0x267350: 0x93a50150  lbu         $a1, 0x150($sp)
    ctx->pc = 0x267350u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_267354:
    // 0x267354: 0xc0ce694  jal         func_339A50
label_267358:
    if (ctx->pc == 0x267358u) {
        ctx->pc = 0x267358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267354u;
        // 0x267358: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26735Cu;
        goto label_26735c;
    }
    ctx->pc = 0x267354u;
    SET_GPR_U32(ctx, 31, 0x26735Cu);
    ctx->pc = 0x267358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267354u;
    // 0x267358: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339A50u, 0x267354u, 0x26735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26735Cu;
label_26735c:
    // 0x26735c: 0x10000802  b           . + 4 + (0x802 << 2)
label_267360:
    if (ctx->pc == 0x267360u) {
        ctx->pc = 0x267364u;
        goto label_267364;
    }
    ctx->pc = 0x26735Cu;
    {
        const bool branch_taken_0x26735c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26735c) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267364u;
label_267364:
    // 0x267364: 0x0  nop
    ctx->pc = 0x267364u;
    // NOP
label_267368:
    // 0x267368: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x267368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26736c:
    // 0x26736c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x26736cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_267370:
    // 0x267370: 0xc049522  jal         func_125488
label_267374:
    if (ctx->pc == 0x267374u) {
        ctx->pc = 0x267374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267370u;
        // 0x267374: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267378u;
        goto label_267378;
    }
    ctx->pc = 0x267370u;
    SET_GPR_U32(ctx, 31, 0x267378u);
    ctx->pc = 0x267374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267370u;
    // 0x267374: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x267370u, 0x267378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267378u;
label_267378:
    // 0x267378: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x267378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26737c:
    // 0x26737c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x26737cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_267380:
    // 0x267380: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x267380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_267384:
    // 0x267384: 0x97a50152  lhu         $a1, 0x152($sp)
    ctx->pc = 0x267384u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 338)));
label_267388:
    // 0x267388: 0x93a60151  lbu         $a2, 0x151($sp)
    ctx->pc = 0x267388u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 337)));
label_26738c:
    // 0x26738c: 0xc0a3b58  jal         func_28ED60
label_267390:
    if (ctx->pc == 0x267390u) {
        ctx->pc = 0x267390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26738Cu;
        // 0x267390: 0x93a40150  lbu         $a0, 0x150($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267394u;
        goto label_267394;
    }
    ctx->pc = 0x26738Cu;
    SET_GPR_U32(ctx, 31, 0x267394u);
    ctx->pc = 0x267390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26738Cu;
    // 0x267390: 0x93a40150  lbu         $a0, 0x150($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ED60u, 0x26738Cu, 0x267394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267394u;
label_267394:
    // 0x267394: 0x100007f4  b           . + 4 + (0x7F4 << 2)
label_267398:
    if (ctx->pc == 0x267398u) {
        ctx->pc = 0x26739Cu;
        goto label_26739c;
    }
    ctx->pc = 0x267394u;
    {
        const bool branch_taken_0x267394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267394) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26739Cu;
label_26739c:
    // 0x26739c: 0x0  nop
    ctx->pc = 0x26739cu;
    // NOP
label_2673a0:
    // 0x2673a0: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2673a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2673a4:
    // 0x2673a4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2673a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2673a8:
    // 0x2673a8: 0xc049522  jal         func_125488
label_2673ac:
    if (ctx->pc == 0x2673ACu) {
        ctx->pc = 0x2673ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673A8u;
        // 0x2673ac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2673B0u;
        goto label_2673b0;
    }
    ctx->pc = 0x2673A8u;
    SET_GPR_U32(ctx, 31, 0x2673B0u);
    ctx->pc = 0x2673ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2673A8u;
    // 0x2673ac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2673A8u, 0x2673B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2673B0u;
label_2673b0:
    // 0x2673b0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2673b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2673b4:
    // 0x2673b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2673b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2673b8:
    // 0x2673b8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2673b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2673bc:
    // 0x2673bc: 0x9202004b  lbu         $v0, 0x4B($s0)
    ctx->pc = 0x2673bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
label_2673c0:
    // 0x2673c0: 0x144007e9  bnez        $v0, . + 4 + (0x7E9 << 2)
label_2673c4:
    if (ctx->pc == 0x2673C4u) {
        ctx->pc = 0x2673C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673C0u;
        // 0x2673c4: 0x27b10152  addiu       $s1, $sp, 0x152 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 338));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2673C8u;
        goto label_2673c8;
    }
    ctx->pc = 0x2673C0u;
    {
        const bool branch_taken_0x2673c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2673C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673C0u;
        // 0x2673c4: 0x27b10152  addiu       $s1, $sp, 0x152 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 338));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2673c0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2673C8u;
label_2673c8:
    // 0x2673c8: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x2673c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2673cc:
    // 0x2673cc: 0xc07c950  jal         func_1F2540
label_2673d0:
    if (ctx->pc == 0x2673D0u) {
        ctx->pc = 0x2673D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673CCu;
        // 0x2673d0: 0x93a40150  lbu         $a0, 0x150($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2673D4u;
        goto label_2673d4;
    }
    ctx->pc = 0x2673CCu;
    SET_GPR_U32(ctx, 31, 0x2673D4u);
    ctx->pc = 0x2673D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2673CCu;
    // 0x2673d0: 0x93a40150  lbu         $a0, 0x150($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2540u, 0x2673CCu, 0x2673D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2673D4u;
label_2673d4:
    // 0x2673d4: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x2673d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
label_2673d8:
    // 0x2673d8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2673d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2673dc:
    // 0x2673dc: 0x104007e2  beqz        $v0, . + 4 + (0x7E2 << 2)
label_2673e0:
    if (ctx->pc == 0x2673E0u) {
        ctx->pc = 0x2673E4u;
        goto label_2673e4;
    }
    ctx->pc = 0x2673DCu;
    {
        const bool branch_taken_0x2673dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2673dc) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2673E4u;
label_2673e4:
    // 0x2673e4: 0x100007e2  b           . + 4 + (0x7E2 << 2)
label_2673e8:
    if (ctx->pc == 0x2673E8u) {
        ctx->pc = 0x2673E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673E4u;
        // 0x2673e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2673ECu;
        goto label_2673ec;
    }
    ctx->pc = 0x2673E4u;
    {
        const bool branch_taken_0x2673e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2673E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673E4u;
        // 0x2673e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2673e4) {
            ctx->pc = 0x269370u;
            goto label_269370;
        }
    }
    ctx->pc = 0x2673ECu;
label_2673ec:
    // 0x2673ec: 0x0  nop
    ctx->pc = 0x2673ecu;
    // NOP
label_2673f0:
    // 0x2673f0: 0x9202004b  lbu         $v0, 0x4B($s0)
    ctx->pc = 0x2673f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
label_2673f4:
    // 0x2673f4: 0x144007dc  bnez        $v0, . + 4 + (0x7DC << 2)
label_2673f8:
    if (ctx->pc == 0x2673F8u) {
        ctx->pc = 0x2673FCu;
        goto label_2673fc;
    }
    ctx->pc = 0x2673F4u;
    {
        const bool branch_taken_0x2673f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2673f4) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2673FCu;
label_2673fc:
    // 0x2673fc: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x2673fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_267400:
    // 0x267400: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x267400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
label_267404:
    // 0x267404: 0xc07cc2c  jal         func_1F30B0
label_267408:
    if (ctx->pc == 0x267408u) {
        ctx->pc = 0x267408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267404u;
        // 0x267408: 0x248414c0  addiu       $a0, $a0, 0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26740Cu;
        goto label_26740c;
    }
    ctx->pc = 0x267404u;
    SET_GPR_U32(ctx, 31, 0x26740Cu);
    ctx->pc = 0x267408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267404u;
    // 0x267408: 0x248414c0  addiu       $a0, $a0, 0x14C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F30B0u, 0x267404u, 0x26740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26740Cu;
label_26740c:
    // 0x26740c: 0x104007d6  beqz        $v0, . + 4 + (0x7D6 << 2)
label_267410:
    if (ctx->pc == 0x267410u) {
        ctx->pc = 0x267414u;
        goto label_267414;
    }
    ctx->pc = 0x26740Cu;
    {
        const bool branch_taken_0x26740c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26740c) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267414u;
label_267414:
    // 0x267414: 0x90430036  lbu         $v1, 0x36($v0)
    ctx->pc = 0x267414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 54)));
label_267418:
    // 0x267418: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x267418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26741c:
    // 0x26741c: 0x106207d2  beq         $v1, $v0, . + 4 + (0x7D2 << 2)
label_267420:
    if (ctx->pc == 0x267420u) {
        ctx->pc = 0x267424u;
        goto label_267424;
    }
    ctx->pc = 0x26741Cu;
    {
        const bool branch_taken_0x26741c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26741c) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267424u;
label_267424:
    // 0x267424: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x267424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267428:
    // 0x267428: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x267428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26742c:
    // 0x26742c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26742cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_267430:
    // 0x267430: 0x100007cf  b           . + 4 + (0x7CF << 2)
label_267434:
    if (ctx->pc == 0x267434u) {
        ctx->pc = 0x267434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267430u;
        // 0x267434: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267438u;
        goto label_267438;
    }
    ctx->pc = 0x267430u;
    {
        const bool branch_taken_0x267430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267430u;
        // 0x267434: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267430) {
            ctx->pc = 0x269370u;
            goto label_269370;
        }
    }
    ctx->pc = 0x267438u;
label_267438:
    // 0x267438: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x267438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_26743c:
    // 0x26743c: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x26743cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
label_267440:
    // 0x267440: 0xc07cc2c  jal         func_1F30B0
label_267444:
    if (ctx->pc == 0x267444u) {
        ctx->pc = 0x267444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267440u;
        // 0x267444: 0x248414c0  addiu       $a0, $a0, 0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267448u;
        goto label_267448;
    }
    ctx->pc = 0x267440u;
    SET_GPR_U32(ctx, 31, 0x267448u);
    ctx->pc = 0x267444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267440u;
    // 0x267444: 0x248414c0  addiu       $a0, $a0, 0x14C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F30B0u, 0x267440u, 0x267448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267448u;
label_267448:
    // 0x267448: 0x104007c7  beqz        $v0, . + 4 + (0x7C7 << 2)
label_26744c:
    if (ctx->pc == 0x26744Cu) {
        ctx->pc = 0x26744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267448u;
        // 0x26744c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267450u;
        goto label_267450;
    }
    ctx->pc = 0x267448u;
    {
        const bool branch_taken_0x267448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267448u;
        // 0x26744c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267448) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267450u;
label_267450:
    // 0x267450: 0xc07c7d0  jal         func_1F1F40
label_267454:
    if (ctx->pc == 0x267454u) {
        ctx->pc = 0x267458u;
        goto label_267458;
    }
    ctx->pc = 0x267450u;
    SET_GPR_U32(ctx, 31, 0x267458u);
    ctx->pc = 0x1F1F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1F40u, 0x267450u, 0x267458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267458u;
label_267458:
    // 0x267458: 0x100007c3  b           . + 4 + (0x7C3 << 2)
label_26745c:
    if (ctx->pc == 0x26745Cu) {
        ctx->pc = 0x267460u;
        goto label_267460;
    }
    ctx->pc = 0x267458u;
    {
        const bool branch_taken_0x267458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267458) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267460u;
label_267460:
    // 0x267460: 0xc0b2bc8  jal         func_2CAF20
label_267464:
    if (ctx->pc == 0x267464u) {
        ctx->pc = 0x267464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267460u;
        // 0x267464: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267468u;
        goto label_267468;
    }
    ctx->pc = 0x267460u;
    SET_GPR_U32(ctx, 31, 0x267468u);
    ctx->pc = 0x267464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267460u;
    // 0x267464: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF20u, 0x267460u, 0x267468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267468u;
label_267468:
    // 0x267468: 0x100007bf  b           . + 4 + (0x7BF << 2)
label_26746c:
    if (ctx->pc == 0x26746Cu) {
        ctx->pc = 0x267470u;
        goto label_267470;
    }
    ctx->pc = 0x267468u;
    {
        const bool branch_taken_0x267468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267468) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267470u;
label_267470:
    // 0x267470: 0xc0b2bc8  jal         func_2CAF20
label_267474:
    if (ctx->pc == 0x267474u) {
        ctx->pc = 0x267474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267470u;
        // 0x267474: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267478u;
        goto label_267478;
    }
    ctx->pc = 0x267470u;
    SET_GPR_U32(ctx, 31, 0x267478u);
    ctx->pc = 0x267474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267470u;
    // 0x267474: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF20u, 0x267470u, 0x267478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267478u;
label_267478:
    // 0x267478: 0x100007bb  b           . + 4 + (0x7BB << 2)
label_26747c:
    if (ctx->pc == 0x26747Cu) {
        ctx->pc = 0x267480u;
        goto label_267480;
    }
    ctx->pc = 0x267478u;
    {
        const bool branch_taken_0x267478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267478) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267480u;
label_267480:
    // 0x267480: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x267480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267484:
    // 0x267484: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x267484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_267488:
    // 0x267488: 0xc049522  jal         func_125488
label_26748c:
    if (ctx->pc == 0x26748Cu) {
        ctx->pc = 0x26748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267488u;
        // 0x26748c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267490u;
        goto label_267490;
    }
    ctx->pc = 0x267488u;
    SET_GPR_U32(ctx, 31, 0x267490u);
    ctx->pc = 0x26748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267488u;
    // 0x26748c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x267488u, 0x267490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267490u;
label_267490:
    // 0x267490: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x267490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267494:
    // 0x267494: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x267494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_267498:
    // 0x267498: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x267498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_26749c:
    // 0x26749c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x26749cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2674a0:
    // 0x2674a0: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x2674a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_2674a4:
    // 0x2674a4: 0xc07cce0  jal         func_1F3380
label_2674a8:
    if (ctx->pc == 0x2674A8u) {
        ctx->pc = 0x2674A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674A4u;
        // 0x2674a8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2674ACu;
        goto label_2674ac;
    }
    ctx->pc = 0x2674A4u;
    SET_GPR_U32(ctx, 31, 0x2674ACu);
    ctx->pc = 0x2674A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2674A4u;
    // 0x2674a8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2674A4u, 0x2674ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2674ACu;
label_2674ac:
    // 0x2674ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2674acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2674b0:
    // 0x2674b0: 0x120007ad  beqz        $s0, . + 4 + (0x7AD << 2)
label_2674b4:
    if (ctx->pc == 0x2674B4u) {
        ctx->pc = 0x2674B8u;
        goto label_2674b8;
    }
    ctx->pc = 0x2674B0u;
    {
        const bool branch_taken_0x2674b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2674b0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2674B8u;
label_2674b8:
    // 0x2674b8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2674b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2674bc:
    // 0x2674bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2674bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2674c0:
    // 0x2674c0: 0x146207a9  bne         $v1, $v0, . + 4 + (0x7A9 << 2)
label_2674c4:
    if (ctx->pc == 0x2674C4u) {
        ctx->pc = 0x2674C8u;
        goto label_2674c8;
    }
    ctx->pc = 0x2674C0u;
    {
        const bool branch_taken_0x2674c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2674c0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2674C8u;
label_2674c8:
    // 0x2674c8: 0x97a20150  lhu         $v0, 0x150($sp)
    ctx->pc = 0x2674c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_2674cc:
    // 0x2674cc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_2674d0:
    if (ctx->pc == 0x2674D0u) {
        ctx->pc = 0x2674D4u;
        goto label_2674d4;
    }
    ctx->pc = 0x2674CCu;
    {
        const bool branch_taken_0x2674cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2674cc) {
            ctx->pc = 0x267568u;
            goto label_267568;
        }
    }
    ctx->pc = 0x2674D4u;
label_2674d4:
    // 0x2674d4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2674d8:
    if (ctx->pc == 0x2674D8u) {
        ctx->pc = 0x2674D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674D4u;
        // 0x2674d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2674DCu;
        goto label_2674dc;
    }
    ctx->pc = 0x2674D4u;
    {
        const bool branch_taken_0x2674d4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2674D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674D4u;
        // 0x2674d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2674d4) {
            ctx->pc = 0x2674E8u;
            goto label_2674e8;
        }
    }
    ctx->pc = 0x2674DCu;
label_2674dc:
    // 0x2674dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2674dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2674e0:
    // 0x2674e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2674e4:
    if (ctx->pc == 0x2674E4u) {
        ctx->pc = 0x2674E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674E0u;
        // 0x2674e4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2674E8u;
        goto label_2674e8;
    }
    ctx->pc = 0x2674E0u;
    {
        const bool branch_taken_0x2674e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2674E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674E0u;
        // 0x2674e4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2674e0) {
            ctx->pc = 0x267500u;
            goto label_267500;
        }
    }
    ctx->pc = 0x2674E8u;
label_2674e8:
    // 0x2674e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2674e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2674ec:
    // 0x2674ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2674ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2674f0:
    // 0x2674f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2674f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2674f4:
    // 0x2674f4: 0x0  nop
    ctx->pc = 0x2674f4u;
    // NOP
label_2674f8:
    // 0x2674f8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2674f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_2674fc:
    // 0x2674fc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2674fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_267500:
    // 0x267500: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x267500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_267504:
    // 0x267504: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x267504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_267508:
    // 0x267508: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x267508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_26750c:
    // 0x26750c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x26750cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_267510:
    // 0x267510: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x267510u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_267514:
    // 0x267514: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_267518:
    // 0x267518: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x267518u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_26751c:
    // 0x26751c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x26751cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_267520:
    // 0x267520: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x267520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_267524:
    // 0x267524: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_267528:
    if (ctx->pc == 0x267528u) {
        ctx->pc = 0x26752Cu;
        goto label_26752c;
    }
    ctx->pc = 0x267524u;
    {
        const bool branch_taken_0x267524 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x267524) {
            ctx->pc = 0x26753Cu;
            goto label_26753c;
        }
    }
    ctx->pc = 0x26752Cu;
label_26752c:
    // 0x26752c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26752cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_267530:
    // 0x267530: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x267530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_267534:
    // 0x267534: 0x10000008  b           . + 4 + (0x8 << 2)
label_267538:
    if (ctx->pc == 0x267538u) {
        ctx->pc = 0x267538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267534u;
        // 0x267538: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26753Cu;
        goto label_26753c;
    }
    ctx->pc = 0x267534u;
    {
        const bool branch_taken_0x267534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267534u;
        // 0x267538: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267534) {
            ctx->pc = 0x267558u;
            goto label_267558;
        }
    }
    ctx->pc = 0x26753Cu;
label_26753c:
    // 0x26753c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26753cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_267540:
    // 0x267540: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x267540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_267544:
    // 0x267544: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x267544u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_267548:
    // 0x267548: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x267548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_26754c:
    // 0x26754c: 0x0  nop
    ctx->pc = 0x26754cu;
    // NOP
label_267550:
    // 0x267550: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x267550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_267554:
    // 0x267554: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x267554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267558:
    // 0x267558: 0xc096974  jal         func_25A5D0
label_26755c:
    if (ctx->pc == 0x26755Cu) {
        ctx->pc = 0x267560u;
        goto label_267560;
    }
    ctx->pc = 0x267558u;
    SET_GPR_U32(ctx, 31, 0x267560u);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x267558u, 0x267560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267560u;
label_267560:
    // 0x267560: 0x10000003  b           . + 4 + (0x3 << 2)
label_267564:
    if (ctx->pc == 0x267564u) {
        ctx->pc = 0x267568u;
        goto label_267568;
    }
    ctx->pc = 0x267560u;
    {
        const bool branch_taken_0x267560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267560) {
            ctx->pc = 0x267570u;
            goto label_267570;
        }
    }
    ctx->pc = 0x267568u;
label_267568:
    // 0x267568: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x267568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26756c:
    // 0x26756c: 0x0  nop
    ctx->pc = 0x26756cu;
    // NOP
label_267570:
    // 0x267570: 0xa2002ab6  sb          $zero, 0x2AB6($s0)
    ctx->pc = 0x267570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10934), (uint8_t)GPR_U32(ctx, 0));
label_267574:
    // 0x267574: 0x1000077c  b           . + 4 + (0x77C << 2)
label_267578:
    if (ctx->pc == 0x267578u) {
        ctx->pc = 0x267578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267574u;
        // 0x267578: 0xa6022ab4  sh          $v0, 0x2AB4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10932), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26757Cu;
        goto label_26757c;
    }
    ctx->pc = 0x267574u;
    {
        const bool branch_taken_0x267574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267574u;
        // 0x267578: 0xa6022ab4  sh          $v0, 0x2AB4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10932), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267574) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26757Cu;
label_26757c:
    // 0x26757c: 0x0  nop
    ctx->pc = 0x26757cu;
    // NOP
label_267580:
    // 0x267580: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x267580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267584:
    // 0x267584: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x267584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_267588:
    // 0x267588: 0xc049522  jal         func_125488
label_26758c:
    if (ctx->pc == 0x26758Cu) {
        ctx->pc = 0x26758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267588u;
        // 0x26758c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267590u;
        goto label_267590;
    }
    ctx->pc = 0x267588u;
    SET_GPR_U32(ctx, 31, 0x267590u);
    ctx->pc = 0x26758Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267588u;
    // 0x26758c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x267588u, 0x267590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267590u;
label_267590:
    // 0x267590: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x267590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267594:
    // 0x267594: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x267594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_267598:
    // 0x267598: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x267598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_26759c:
    // 0x26759c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x26759cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2675a0:
    // 0x2675a0: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x2675a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_2675a4:
    // 0x2675a4: 0xc07cce0  jal         func_1F3380
label_2675a8:
    if (ctx->pc == 0x2675A8u) {
        ctx->pc = 0x2675A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675A4u;
        // 0x2675a8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2675ACu;
        goto label_2675ac;
    }
    ctx->pc = 0x2675A4u;
    SET_GPR_U32(ctx, 31, 0x2675ACu);
    ctx->pc = 0x2675A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2675A4u;
    // 0x2675a8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2675A4u, 0x2675ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2675ACu;
label_2675ac:
    // 0x2675ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2675acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2675b0:
    // 0x2675b0: 0x1200076d  beqz        $s0, . + 4 + (0x76D << 2)
label_2675b4:
    if (ctx->pc == 0x2675B4u) {
        ctx->pc = 0x2675B8u;
        goto label_2675b8;
    }
    ctx->pc = 0x2675B0u;
    {
        const bool branch_taken_0x2675b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2675b0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2675B8u;
label_2675b8:
    // 0x2675b8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2675b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2675bc:
    // 0x2675bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2675bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2675c0:
    // 0x2675c0: 0x14620769  bne         $v1, $v0, . + 4 + (0x769 << 2)
label_2675c4:
    if (ctx->pc == 0x2675C4u) {
        ctx->pc = 0x2675C8u;
        goto label_2675c8;
    }
    ctx->pc = 0x2675C0u;
    {
        const bool branch_taken_0x2675c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2675c0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2675C8u;
label_2675c8:
    // 0x2675c8: 0x97a20150  lhu         $v0, 0x150($sp)
    ctx->pc = 0x2675c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_2675cc:
    // 0x2675cc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_2675d0:
    if (ctx->pc == 0x2675D0u) {
        ctx->pc = 0x2675D4u;
        goto label_2675d4;
    }
    ctx->pc = 0x2675CCu;
    {
        const bool branch_taken_0x2675cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2675cc) {
            ctx->pc = 0x267668u;
            goto label_267668;
        }
    }
    ctx->pc = 0x2675D4u;
label_2675d4:
    // 0x2675d4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2675d8:
    if (ctx->pc == 0x2675D8u) {
        ctx->pc = 0x2675D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675D4u;
        // 0x2675d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2675DCu;
        goto label_2675dc;
    }
    ctx->pc = 0x2675D4u;
    {
        const bool branch_taken_0x2675d4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2675D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675D4u;
        // 0x2675d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675d4) {
            ctx->pc = 0x2675E8u;
            goto label_2675e8;
        }
    }
    ctx->pc = 0x2675DCu;
label_2675dc:
    // 0x2675dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2675dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2675e0:
    // 0x2675e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2675e4:
    if (ctx->pc == 0x2675E4u) {
        ctx->pc = 0x2675E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675E0u;
        // 0x2675e4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2675E8u;
        goto label_2675e8;
    }
    ctx->pc = 0x2675E0u;
    {
        const bool branch_taken_0x2675e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2675E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675E0u;
        // 0x2675e4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675e0) {
            ctx->pc = 0x267600u;
            goto label_267600;
        }
    }
    ctx->pc = 0x2675E8u;
label_2675e8:
    // 0x2675e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2675e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2675ec:
    // 0x2675ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2675ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2675f0:
    // 0x2675f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2675f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2675f4:
    // 0x2675f4: 0x0  nop
    ctx->pc = 0x2675f4u;
    // NOP
label_2675f8:
    // 0x2675f8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2675f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_2675fc:
    // 0x2675fc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2675fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_267600:
    // 0x267600: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x267600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_267604:
    // 0x267604: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x267604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_267608:
    // 0x267608: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x267608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_26760c:
    // 0x26760c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x26760cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_267610:
    // 0x267610: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x267610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_267614:
    // 0x267614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_267618:
    // 0x267618: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x267618u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_26761c:
    // 0x26761c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x26761cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_267620:
    // 0x267620: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x267620u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_267624:
    // 0x267624: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_267628:
    if (ctx->pc == 0x267628u) {
        ctx->pc = 0x26762Cu;
        goto label_26762c;
    }
    ctx->pc = 0x267624u;
    {
        const bool branch_taken_0x267624 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x267624) {
            ctx->pc = 0x26763Cu;
            goto label_26763c;
        }
    }
    ctx->pc = 0x26762Cu;
label_26762c:
    // 0x26762c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26762cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_267630:
    // 0x267630: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x267630u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_267634:
    // 0x267634: 0x10000008  b           . + 4 + (0x8 << 2)
label_267638:
    if (ctx->pc == 0x267638u) {
        ctx->pc = 0x267638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267634u;
        // 0x267638: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26763Cu;
        goto label_26763c;
    }
    ctx->pc = 0x267634u;
    {
        const bool branch_taken_0x267634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267634u;
        // 0x267638: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267634) {
            ctx->pc = 0x267658u;
            goto label_267658;
        }
    }
    ctx->pc = 0x26763Cu;
label_26763c:
    // 0x26763c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26763cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_267640:
    // 0x267640: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x267640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_267644:
    // 0x267644: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x267644u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_267648:
    // 0x267648: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x267648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_26764c:
    // 0x26764c: 0x0  nop
    ctx->pc = 0x26764cu;
    // NOP
label_267650:
    // 0x267650: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x267650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_267654:
    // 0x267654: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x267654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267658:
    // 0x267658: 0xc096974  jal         func_25A5D0
label_26765c:
    if (ctx->pc == 0x26765Cu) {
        ctx->pc = 0x267660u;
        goto label_267660;
    }
    ctx->pc = 0x267658u;
    SET_GPR_U32(ctx, 31, 0x267660u);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x267658u, 0x267660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267660u;
label_267660:
    // 0x267660: 0x10000003  b           . + 4 + (0x3 << 2)
label_267664:
    if (ctx->pc == 0x267664u) {
        ctx->pc = 0x267668u;
        goto label_267668;
    }
    ctx->pc = 0x267660u;
    {
        const bool branch_taken_0x267660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267660) {
            ctx->pc = 0x267670u;
            goto label_267670;
        }
    }
    ctx->pc = 0x267668u;
label_267668:
    // 0x267668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x267668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26766c:
    // 0x26766c: 0x0  nop
    ctx->pc = 0x26766cu;
    // NOP
label_267670:
    // 0x267670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x267670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267674:
    // 0x267674: 0xa2032ab6  sb          $v1, 0x2AB6($s0)
    ctx->pc = 0x267674u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10934), (uint8_t)GPR_U32(ctx, 3));
label_267678:
    // 0x267678: 0x1000073b  b           . + 4 + (0x73B << 2)
label_26767c:
    if (ctx->pc == 0x26767Cu) {
        ctx->pc = 0x26767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267678u;
        // 0x26767c: 0xa6022ab4  sh          $v0, 0x2AB4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10932), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267680u;
        goto label_267680;
    }
    ctx->pc = 0x267678u;
    {
        const bool branch_taken_0x267678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267678u;
        // 0x26767c: 0xa6022ab4  sh          $v0, 0x2AB4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10932), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267678) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267680u;
label_267680:
    // 0x267680: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x267680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267684:
    // 0x267684: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x267684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_267688:
    // 0x267688: 0xc049522  jal         func_125488
label_26768c:
    if (ctx->pc == 0x26768Cu) {
        ctx->pc = 0x26768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267688u;
        // 0x26768c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267690u;
        goto label_267690;
    }
    ctx->pc = 0x267688u;
    SET_GPR_U32(ctx, 31, 0x267690u);
    ctx->pc = 0x26768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267688u;
    // 0x26768c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x267688u, 0x267690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267690u;
label_267690:
    // 0x267690: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x267690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267694:
    // 0x267694: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x267694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_267698:
    // 0x267698: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x267698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_26769c:
    // 0x26769c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x26769cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2676a0:
    // 0x2676a0: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x2676a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_2676a4:
    // 0x2676a4: 0xc07cce0  jal         func_1F3380
label_2676a8:
    if (ctx->pc == 0x2676A8u) {
        ctx->pc = 0x2676A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676A4u;
        // 0x2676a8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2676ACu;
        goto label_2676ac;
    }
    ctx->pc = 0x2676A4u;
    SET_GPR_U32(ctx, 31, 0x2676ACu);
    ctx->pc = 0x2676A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2676A4u;
    // 0x2676a8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2676A4u, 0x2676ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2676ACu;
label_2676ac:
    // 0x2676ac: 0x1040072e  beqz        $v0, . + 4 + (0x72E << 2)
label_2676b0:
    if (ctx->pc == 0x2676B0u) {
        ctx->pc = 0x2676B4u;
        goto label_2676b4;
    }
    ctx->pc = 0x2676ACu;
    {
        const bool branch_taken_0x2676ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2676ac) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2676B4u;
label_2676b4:
    // 0x2676b4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2676b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2676b8:
    // 0x2676b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2676b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2676bc:
    // 0x2676bc: 0x1483072a  bne         $a0, $v1, . + 4 + (0x72A << 2)
label_2676c0:
    if (ctx->pc == 0x2676C0u) {
        ctx->pc = 0x2676C4u;
        goto label_2676c4;
    }
    ctx->pc = 0x2676BCu;
    {
        const bool branch_taken_0x2676bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2676bc) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2676C4u;
label_2676c4:
    // 0x2676c4: 0x97a30150  lhu         $v1, 0x150($sp)
    ctx->pc = 0x2676c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_2676c8:
    // 0x2676c8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_2676cc:
    if (ctx->pc == 0x2676CCu) {
        ctx->pc = 0x2676CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676C8u;
        // 0x2676cc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2676D0u;
        goto label_2676d0;
    }
    ctx->pc = 0x2676C8u;
    {
        const bool branch_taken_0x2676c8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2676CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676C8u;
        // 0x2676cc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676c8) {
            ctx->pc = 0x2676DCu;
            goto label_2676dc;
        }
    }
    ctx->pc = 0x2676D0u;
label_2676d0:
    // 0x2676d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2676d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2676d4:
    // 0x2676d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2676d8:
    if (ctx->pc == 0x2676D8u) {
        ctx->pc = 0x2676D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676D4u;
        // 0x2676d8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2676DCu;
        goto label_2676dc;
    }
    ctx->pc = 0x2676D4u;
    {
        const bool branch_taken_0x2676d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2676D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676D4u;
        // 0x2676d8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676d4) {
            ctx->pc = 0x2676F4u;
            goto label_2676f4;
        }
    }
    ctx->pc = 0x2676DCu;
label_2676dc:
    // 0x2676dc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2676dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2676e0:
    // 0x2676e0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2676e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2676e4:
    // 0x2676e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2676e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2676e8:
    // 0x2676e8: 0x0  nop
    ctx->pc = 0x2676e8u;
    // NOP
label_2676ec:
    // 0x2676ec: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2676ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_2676f0:
    // 0x2676f0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2676f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2676f4:
    // 0x2676f4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2676f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2676f8:
    // 0x2676f8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2676f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_2676fc:
    // 0x2676fc: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2676fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_267700:
    // 0x267700: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x267700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_267704:
    // 0x267704: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x267704u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_267708:
    // 0x267708: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x267708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26770c:
    // 0x26770c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x26770cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_267710:
    // 0x267710: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x267710u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_267714:
    // 0x267714: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x267714u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_267718:
    // 0x267718: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_26771c:
    if (ctx->pc == 0x26771Cu) {
        ctx->pc = 0x267720u;
        goto label_267720;
    }
    ctx->pc = 0x267718u;
    {
        const bool branch_taken_0x267718 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x267718) {
            ctx->pc = 0x267730u;
            goto label_267730;
        }
    }
    ctx->pc = 0x267720u;
label_267720:
    // 0x267720: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x267720u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_267724:
    // 0x267724: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x267724u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_267728:
    // 0x267728: 0x10000008  b           . + 4 + (0x8 << 2)
label_26772c:
    if (ctx->pc == 0x26772Cu) {
        ctx->pc = 0x26772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267728u;
        // 0x26772c: 0x2c810002  sltiu       $at, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x267730u;
        goto label_267730;
    }
    ctx->pc = 0x267728u;
    {
        const bool branch_taken_0x267728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267728u;
        // 0x26772c: 0x2c810002  sltiu       $at, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267728) {
            ctx->pc = 0x26774Cu;
            goto label_26774c;
        }
    }
    ctx->pc = 0x267730u;
label_267730:
    // 0x267730: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x267730u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_267734:
    // 0x267734: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x267734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_267738:
    // 0x267738: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x267738u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_26773c:
    // 0x26773c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x26773cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_267740:
    // 0x267740: 0x0  nop
    ctx->pc = 0x267740u;
    // NOP
label_267744:
    // 0x267744: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x267744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_267748:
    // 0x267748: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x267748u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_26774c:
    // 0x26774c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_267750:
    if (ctx->pc == 0x267750u) {
        ctx->pc = 0x267754u;
        goto label_267754;
    }
    ctx->pc = 0x26774Cu;
    {
        const bool branch_taken_0x26774c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26774c) {
            ctx->pc = 0x267770u;
            goto label_267770;
        }
    }
    ctx->pc = 0x267754u;
label_267754:
    // 0x267754: 0x8c5904d4  lw          $t9, 0x4D4($v0)
    ctx->pc = 0x267754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1236)));
label_267758:
    // 0x267758: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x267758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_26775c:
    // 0x26775c: 0x320f809  jalr        $t9
label_267760:
    if (ctx->pc == 0x267760u) {
        ctx->pc = 0x267760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26775Cu;
        // 0x267760: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267764u;
        goto label_267764;
    }
    ctx->pc = 0x26775Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x267764u);
        ctx->pc = 0x267760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26775Cu;
        // 0x267760: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26775Cu, 0x267764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267764u;
label_267764:
    // 0x267764: 0x10000700  b           . + 4 + (0x700 << 2)
label_267768:
    if (ctx->pc == 0x267768u) {
        ctx->pc = 0x26776Cu;
        goto label_26776c;
    }
    ctx->pc = 0x267764u;
    {
        const bool branch_taken_0x267764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267764) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26776Cu;
label_26776c:
    // 0x26776c: 0x0  nop
    ctx->pc = 0x26776cu;
    // NOP
label_267770:
    // 0x267770: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x267770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_267774:
    // 0x267774: 0xa0432ab6  sb          $v1, 0x2AB6($v0)
    ctx->pc = 0x267774u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10934), (uint8_t)GPR_U32(ctx, 3));
label_267778:
    // 0x267778: 0x100006fb  b           . + 4 + (0x6FB << 2)
label_26777c:
    if (ctx->pc == 0x26777Cu) {
        ctx->pc = 0x26777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267778u;
        // 0x26777c: 0xa4442ab4  sh          $a0, 0x2AB4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10932), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267780u;
        goto label_267780;
    }
    ctx->pc = 0x267778u;
    {
        const bool branch_taken_0x267778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267778u;
        // 0x26777c: 0xa4442ab4  sh          $a0, 0x2AB4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10932), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267778) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267780u;
label_267780:
    // 0x267780: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x267780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267784:
    // 0x267784: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x267784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_267788:
    // 0x267788: 0xc049522  jal         func_125488
label_26778c:
    if (ctx->pc == 0x26778Cu) {
        ctx->pc = 0x26778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267788u;
        // 0x26778c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267790u;
        goto label_267790;
    }
    ctx->pc = 0x267788u;
    SET_GPR_U32(ctx, 31, 0x267790u);
    ctx->pc = 0x26778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267788u;
    // 0x26778c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x267788u, 0x267790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267790u;
label_267790:
    // 0x267790: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x267790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267794:
    // 0x267794: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x267794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_267798:
    // 0x267798: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x267798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_26779c:
    // 0x26779c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x26779cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2677a0:
    // 0x2677a0: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x2677a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2677a4:
    // 0x2677a4: 0x8fa60154  lw          $a2, 0x154($sp)
    ctx->pc = 0x2677a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_2677a8:
    // 0x2677a8: 0xc0ce5d0  jal         func_339740
label_2677ac:
    if (ctx->pc == 0x2677ACu) {
        ctx->pc = 0x2677ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677A8u;
        // 0x2677ac: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2677B0u;
        goto label_2677b0;
    }
    ctx->pc = 0x2677A8u;
    SET_GPR_U32(ctx, 31, 0x2677B0u);
    ctx->pc = 0x2677ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2677A8u;
    // 0x2677ac: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339740u, 0x2677A8u, 0x2677B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2677B0u;
label_2677b0:
    // 0x2677b0: 0x100006ed  b           . + 4 + (0x6ED << 2)
label_2677b4:
    if (ctx->pc == 0x2677B4u) {
        ctx->pc = 0x2677B8u;
        goto label_2677b8;
    }
    ctx->pc = 0x2677B0u;
    {
        const bool branch_taken_0x2677b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2677b0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2677B8u;
label_2677b8:
    // 0x2677b8: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2677b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2677bc:
    // 0x2677bc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2677bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2677c0:
    // 0x2677c0: 0xc049522  jal         func_125488
label_2677c4:
    if (ctx->pc == 0x2677C4u) {
        ctx->pc = 0x2677C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677C0u;
        // 0x2677c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2677C8u;
        goto label_2677c8;
    }
    ctx->pc = 0x2677C0u;
    SET_GPR_U32(ctx, 31, 0x2677C8u);
    ctx->pc = 0x2677C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2677C0u;
    // 0x2677c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2677C0u, 0x2677C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2677C8u;
label_2677c8:
    // 0x2677c8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2677c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2677cc:
    // 0x2677cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2677ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2677d0:
    // 0x2677d0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2677d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2677d4:
    // 0x2677d4: 0x8fa60150  lw          $a2, 0x150($sp)
    ctx->pc = 0x2677d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2677d8:
    // 0x2677d8: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x2677d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2677dc:
    // 0x2677dc: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_2677e0:
    if (ctx->pc == 0x2677E0u) {
        ctx->pc = 0x2677E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677DCu;
        // 0x2677e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2677E4u;
        goto label_2677e4;
    }
    ctx->pc = 0x2677DCu;
    {
        const bool branch_taken_0x2677dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2677E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677DCu;
        // 0x2677e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677dc) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x2677E4u;
label_2677e4:
    // 0x2677e4: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x2677e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2677e8:
    // 0x2677e8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2677e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2677ec:
    // 0x2677ec: 0x1242000e  beq         $s2, $v0, . + 4 + (0xE << 2)
label_2677f0:
    if (ctx->pc == 0x2677F0u) {
        ctx->pc = 0x2677F4u;
        goto label_2677f4;
    }
    ctx->pc = 0x2677ECu;
    {
        const bool branch_taken_0x2677ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2677ec) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x2677F4u;
label_2677f4:
    // 0x2677f4: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2677f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2677f8:
    // 0x2677f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2677f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2677fc:
    // 0x2677fc: 0xc049522  jal         func_125488
label_267800:
    if (ctx->pc == 0x267800u) {
        ctx->pc = 0x267800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677FCu;
        // 0x267800: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267804u;
        goto label_267804;
    }
    ctx->pc = 0x2677FCu;
    SET_GPR_U32(ctx, 31, 0x267804u);
    ctx->pc = 0x267800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2677FCu;
    // 0x267800: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2677FCu, 0x267804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267804u;
label_267804:
    // 0x267804: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x267804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267808:
    // 0x267808: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x267808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_26780c:
    // 0x26780c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x26780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_267810:
    // 0x267810: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x267810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_267814:
    // 0x267814: 0x8fa60150  lw          $a2, 0x150($sp)
    ctx->pc = 0x267814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_267818:
    // 0x267818: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x267818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_26781c:
    // 0x26781c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_267820:
    if (ctx->pc == 0x267820u) {
        ctx->pc = 0x267820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26781Cu;
        // 0x267820: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267824u;
        goto label_267824;
    }
    ctx->pc = 0x26781Cu;
    {
        const bool branch_taken_0x26781c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26781Cu;
        // 0x267820: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26781c) {
            ctx->pc = 0x2677E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2677e8;
        }
    }
    ctx->pc = 0x267824u;
label_267824:
    // 0x267824: 0x0  nop
    ctx->pc = 0x267824u;
    // NOP
label_267828:
    // 0x267828: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x267828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_26782c:
    // 0x26782c: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x26782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
label_267830:
    // 0x267830: 0xc0ce5d8  jal         func_339760
label_267834:
    if (ctx->pc == 0x267834u) {
        ctx->pc = 0x267834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267830u;
        // 0x267834: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267838u;
        goto label_267838;
    }
    ctx->pc = 0x267830u;
    SET_GPR_U32(ctx, 31, 0x267838u);
    ctx->pc = 0x267834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267830u;
    // 0x267834: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339760u, 0x267830u, 0x267838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267838u;
label_267838:
    // 0x267838: 0x100006cb  b           . + 4 + (0x6CB << 2)
label_26783c:
    if (ctx->pc == 0x26783Cu) {
        ctx->pc = 0x267840u;
        goto label_267840;
    }
    ctx->pc = 0x267838u;
    {
        const bool branch_taken_0x267838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267838) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267840u;
label_267840:
    // 0x267840: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x267840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267844:
    // 0x267844: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x267844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_267848:
    // 0x267848: 0xc049522  jal         func_125488
label_26784c:
    if (ctx->pc == 0x26784Cu) {
        ctx->pc = 0x26784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267848u;
        // 0x26784c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267850u;
        goto label_267850;
    }
    ctx->pc = 0x267848u;
    SET_GPR_U32(ctx, 31, 0x267850u);
    ctx->pc = 0x26784Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267848u;
    // 0x26784c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x267848u, 0x267850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267850u;
label_267850:
    // 0x267850: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x267850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267854:
    // 0x267854: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x267854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_267858:
    // 0x267858: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x267858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_26785c:
    // 0x26785c: 0x9202004b  lbu         $v0, 0x4B($s0)
    ctx->pc = 0x26785cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
label_267860:
    // 0x267860: 0x144006c1  bnez        $v0, . + 4 + (0x6C1 << 2)
label_267864:
    if (ctx->pc == 0x267864u) {
        ctx->pc = 0x267868u;
        goto label_267868;
    }
    ctx->pc = 0x267860u;
    {
        const bool branch_taken_0x267860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267860) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267868u;
label_267868:
    // 0x267868: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x267868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_26786c:
    // 0x26786c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_267870:
    if (ctx->pc == 0x267870u) {
        ctx->pc = 0x267874u;
        goto label_267874;
    }
    ctx->pc = 0x26786Cu;
    {
        const bool branch_taken_0x26786c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26786c) {
            ctx->pc = 0x2678A8u;
            goto label_2678a8;
        }
    }
    ctx->pc = 0x267874u;
label_267874:
    // 0x267874: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x267874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_267878:
    // 0x267878: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x267878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26787c:
    // 0x26787c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26787cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267880:
    // 0x267880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x267880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267884:
    // 0x267884: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x267884u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_267888:
    // 0x267888: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x267888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26788c:
    // 0x26788c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x26788cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_267890:
    // 0x267890: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x267890u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
label_267894:
    // 0x267894: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x267894u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
label_267898:
    // 0x267898: 0xc063e1c  jal         func_18F870
label_26789c:
    if (ctx->pc == 0x26789Cu) {
        ctx->pc = 0x26789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267898u;
        // 0x26789c: 0x46006446  mov.s       $f17, $f12 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2678A0u;
        goto label_2678a0;
    }
    ctx->pc = 0x267898u;
    SET_GPR_U32(ctx, 31, 0x2678A0u);
    ctx->pc = 0x26789Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267898u;
    // 0x26789c: 0x46006446  mov.s       $f17, $f12 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F870u, 0x267898u, 0x2678A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2678A0u;
label_2678a0:
    // 0x2678a0: 0x100006b1  b           . + 4 + (0x6B1 << 2)
label_2678a4:
    if (ctx->pc == 0x2678A4u) {
        ctx->pc = 0x2678A8u;
        goto label_2678a8;
    }
    ctx->pc = 0x2678A0u;
    {
        const bool branch_taken_0x2678a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2678a0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2678A8u;
label_2678a8:
    // 0x2678a8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_2678ac:
    if (ctx->pc == 0x2678ACu) {
        ctx->pc = 0x2678B0u;
        goto label_2678b0;
    }
    ctx->pc = 0x2678A8u;
    {
        const bool branch_taken_0x2678a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2678a8) {
            ctx->pc = 0x267948u;
            goto label_267948;
        }
    }
    ctx->pc = 0x2678B0u;
label_2678b0:
    // 0x2678b0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2678b4:
    if (ctx->pc == 0x2678B4u) {
        ctx->pc = 0x2678B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678B0u;
        // 0x2678b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2678B8u;
        goto label_2678b8;
    }
    ctx->pc = 0x2678B0u;
    {
        const bool branch_taken_0x2678b0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2678B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678B0u;
        // 0x2678b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2678b0) {
            ctx->pc = 0x2678C4u;
            goto label_2678c4;
        }
    }
    ctx->pc = 0x2678B8u;
label_2678b8:
    // 0x2678b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2678b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2678bc:
    // 0x2678bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_2678c0:
    if (ctx->pc == 0x2678C0u) {
        ctx->pc = 0x2678C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678BCu;
        // 0x2678c0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2678C4u;
        goto label_2678c4;
    }
    ctx->pc = 0x2678BCu;
    {
        const bool branch_taken_0x2678bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2678C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678BCu;
        // 0x2678c0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2678bc) {
            ctx->pc = 0x2678DCu;
            goto label_2678dc;
        }
    }
    ctx->pc = 0x2678C4u;
label_2678c4:
    // 0x2678c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2678c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2678c8:
    // 0x2678c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2678c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2678cc:
    // 0x2678cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2678ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2678d0:
    // 0x2678d0: 0x0  nop
    ctx->pc = 0x2678d0u;
    // NOP
label_2678d4:
    // 0x2678d4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2678d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_2678d8:
    // 0x2678d8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2678d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2678dc:
    // 0x2678dc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2678dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2678e0:
    // 0x2678e0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2678e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_2678e4:
    // 0x2678e4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2678e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_2678e8:
    // 0x2678e8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2678e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2678ec:
    // 0x2678ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2678ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2678f0:
    // 0x2678f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2678f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2678f4:
    // 0x2678f4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2678f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2678f8:
    // 0x2678f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2678f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2678fc:
    // 0x2678fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2678fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_267900:
    // 0x267900: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_267904:
    if (ctx->pc == 0x267904u) {
        ctx->pc = 0x267908u;
        goto label_267908;
    }
    ctx->pc = 0x267900u;
    {
        const bool branch_taken_0x267900 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x267900) {
            ctx->pc = 0x267918u;
            goto label_267918;
        }
    }
    ctx->pc = 0x267908u;
label_267908:
    // 0x267908: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x267908u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_26790c:
    // 0x26790c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x26790cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_267910:
    // 0x267910: 0x10000008  b           . + 4 + (0x8 << 2)
label_267914:
    if (ctx->pc == 0x267914u) {
        ctx->pc = 0x267914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267910u;
        // 0x267914: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267918u;
        goto label_267918;
    }
    ctx->pc = 0x267910u;
    {
        const bool branch_taken_0x267910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267910u;
        // 0x267914: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267910) {
            ctx->pc = 0x267934u;
            goto label_267934;
        }
    }
    ctx->pc = 0x267918u;
label_267918:
    // 0x267918: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x267918u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26791c:
    // 0x26791c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26791cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_267920:
    // 0x267920: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x267920u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_267924:
    // 0x267924: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x267924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_267928:
    // 0x267928: 0x0  nop
    ctx->pc = 0x267928u;
    // NOP
label_26792c:
    // 0x26792c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x26792cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_267930:
    // 0x267930: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x267930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267934:
    // 0x267934: 0xc096974  jal         func_25A5D0
label_267938:
    if (ctx->pc == 0x267938u) {
        ctx->pc = 0x26793Cu;
        goto label_26793c;
    }
    ctx->pc = 0x267934u;
    SET_GPR_U32(ctx, 31, 0x26793Cu);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x267934u, 0x26793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26793Cu;
label_26793c:
    // 0x26793c: 0x10000004  b           . + 4 + (0x4 << 2)
label_267940:
    if (ctx->pc == 0x267940u) {
        ctx->pc = 0x267944u;
        goto label_267944;
    }
    ctx->pc = 0x26793Cu;
    {
        const bool branch_taken_0x26793c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26793c) {
            ctx->pc = 0x267950u;
            goto label_267950;
        }
    }
    ctx->pc = 0x267944u;
label_267944:
    // 0x267944: 0x0  nop
    ctx->pc = 0x267944u;
    // NOP
label_267948:
    // 0x267948: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x267948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26794c:
    // 0x26794c: 0x0  nop
    ctx->pc = 0x26794cu;
    // NOP
label_267950:
    // 0x267950: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x267950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_267954:
    // 0x267954: 0xc7ac0158  lwc1        $f12, 0x158($sp)
    ctx->pc = 0x267954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_267958:
    // 0x267958: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x267958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26795c:
    // 0x26795c: 0xc7ad015c  lwc1        $f13, 0x15C($sp)
    ctx->pc = 0x26795cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_267960:
    // 0x267960: 0x27a50154  addiu       $a1, $sp, 0x154
    ctx->pc = 0x267960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_267964:
    // 0x267964: 0xc7ae0160  lwc1        $f14, 0x160($sp)
    ctx->pc = 0x267964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_267968:
    // 0x267968: 0xc7af0164  lwc1        $f15, 0x164($sp)
    ctx->pc = 0x267968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_26796c:
    // 0x26796c: 0xc7b00168  lwc1        $f16, 0x168($sp)
    ctx->pc = 0x26796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_267970:
    // 0x267970: 0xc7b1016c  lwc1        $f17, 0x16C($sp)
    ctx->pc = 0x267970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_267974:
    // 0x267974: 0xc063e1c  jal         func_18F870
label_267978:
    if (ctx->pc == 0x267978u) {
        ctx->pc = 0x267978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267974u;
        // 0x267978: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26797Cu;
        goto label_26797c;
    }
    ctx->pc = 0x267974u;
    SET_GPR_U32(ctx, 31, 0x26797Cu);
    ctx->pc = 0x267978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267974u;
    // 0x267978: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F870u, 0x267974u, 0x26797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26797Cu;
label_26797c:
    // 0x26797c: 0x1000067a  b           . + 4 + (0x67A << 2)
label_267980:
    if (ctx->pc == 0x267980u) {
        ctx->pc = 0x267984u;
        goto label_267984;
    }
    ctx->pc = 0x26797Cu;
    {
        const bool branch_taken_0x26797c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26797c) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267984u;
label_267984:
    // 0x267984: 0x0  nop
    ctx->pc = 0x267984u;
    // NOP
label_267988:
    // 0x267988: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x267988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26798c:
    // 0x26798c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x26798cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_267990:
    // 0x267990: 0xc049522  jal         func_125488
label_267994:
    if (ctx->pc == 0x267994u) {
        ctx->pc = 0x267994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267990u;
        // 0x267994: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267998u;
        goto label_267998;
    }
    ctx->pc = 0x267990u;
    SET_GPR_U32(ctx, 31, 0x267998u);
    ctx->pc = 0x267994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267990u;
    // 0x267994: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x267990u, 0x267998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267998u;
label_267998:
    // 0x267998: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x267998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26799c:
    // 0x26799c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26799cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2679a0:
    // 0x2679a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2679a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2679a4:
    // 0x2679a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2679a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2679a8:
    // 0x2679a8: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x2679a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_2679ac:
    // 0x2679ac: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2679acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2679b0:
    // 0x2679b0: 0x97a20150  lhu         $v0, 0x150($sp)
    ctx->pc = 0x2679b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_2679b4:
    // 0x2679b4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2679b8:
    if (ctx->pc == 0x2679B8u) {
        ctx->pc = 0x2679B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679B4u;
        // 0x2679b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2679BCu;
        goto label_2679bc;
    }
    ctx->pc = 0x2679B4u;
    {
        const bool branch_taken_0x2679b4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2679B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679B4u;
        // 0x2679b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679b4) {
            ctx->pc = 0x2679C8u;
            goto label_2679c8;
        }
    }
    ctx->pc = 0x2679BCu;
label_2679bc:
    // 0x2679bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2679bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2679c0:
    // 0x2679c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2679c4:
    if (ctx->pc == 0x2679C4u) {
        ctx->pc = 0x2679C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679C0u;
        // 0x2679c4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2679C8u;
        goto label_2679c8;
    }
    ctx->pc = 0x2679C0u;
    {
        const bool branch_taken_0x2679c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2679C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679C0u;
        // 0x2679c4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679c0) {
            ctx->pc = 0x2679E0u;
            goto label_2679e0;
        }
    }
    ctx->pc = 0x2679C8u;
label_2679c8:
    // 0x2679c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2679c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2679cc:
    // 0x2679cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2679ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2679d0:
    // 0x2679d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2679d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2679d4:
    // 0x2679d4: 0x0  nop
    ctx->pc = 0x2679d4u;
    // NOP
label_2679d8:
    // 0x2679d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2679d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2679dc:
    // 0x2679dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2679dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2679e0:
    // 0x2679e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2679e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2679e4:
    // 0x2679e4: 0x3c023bb6  lui         $v0, 0x3BB6
    ctx->pc = 0x2679e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15286 << 16));
label_2679e8:
    // 0x2679e8: 0x34420b61  ori         $v0, $v0, 0xB61
    ctx->pc = 0x2679e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2913);
label_2679ec:
    // 0x2679ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2679ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2679f0:
    // 0x2679f0: 0xc064140  jal         func_190500
label_2679f4:
    if (ctx->pc == 0x2679F4u) {
        ctx->pc = 0x2679F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679F0u;
        // 0x2679f4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2679F8u;
        goto label_2679f8;
    }
    ctx->pc = 0x2679F0u;
    SET_GPR_U32(ctx, 31, 0x2679F8u);
    ctx->pc = 0x2679F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2679F0u;
    // 0x2679f4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x190500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190500u, 0x2679F0u, 0x2679F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2679F8u;
label_2679f8:
    // 0x2679f8: 0x1000065b  b           . + 4 + (0x65B << 2)
label_2679fc:
    if (ctx->pc == 0x2679FCu) {
        ctx->pc = 0x267A00u;
        goto label_267a00;
    }
    ctx->pc = 0x2679F8u;
    {
        const bool branch_taken_0x2679f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2679f8) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267A00u;
label_267a00:
    // 0x267a00: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x267a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_267a04:
    // 0x267a04: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x267a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
label_267a08:
    // 0x267a08: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x267a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_267a0c:
    // 0x267a0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x267a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267a10:
    // 0x267a10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x267a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267a14:
    // 0x267a14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x267a14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267a18:
    // 0x267a18: 0xc063c70  jal         func_18F1C0
label_267a1c:
    if (ctx->pc == 0x267A1Cu) {
        ctx->pc = 0x267A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A18u;
        // 0x267a1c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A20u;
        goto label_267a20;
    }
    ctx->pc = 0x267A18u;
    SET_GPR_U32(ctx, 31, 0x267A20u);
    ctx->pc = 0x267A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267A18u;
    // 0x267a1c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x267A18u, 0x267A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267A20u;
label_267a20:
    // 0x267a20: 0x10000651  b           . + 4 + (0x651 << 2)
label_267a24:
    if (ctx->pc == 0x267A24u) {
        ctx->pc = 0x267A28u;
        goto label_267a28;
    }
    ctx->pc = 0x267A20u;
    {
        const bool branch_taken_0x267a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267a20) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267A28u;
label_267a28:
    // 0x267a28: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x267a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_267a2c:
    // 0x267a2c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x267a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
label_267a30:
    // 0x267a30: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x267a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_267a34:
    // 0x267a34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x267a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267a38:
    // 0x267a38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x267a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267a3c:
    // 0x267a3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x267a3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267a40:
    // 0x267a40: 0xc063cd0  jal         func_18F340
label_267a44:
    if (ctx->pc == 0x267A44u) {
        ctx->pc = 0x267A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A40u;
        // 0x267a44: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A48u;
        goto label_267a48;
    }
    ctx->pc = 0x267A40u;
    SET_GPR_U32(ctx, 31, 0x267A48u);
    ctx->pc = 0x267A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267A40u;
    // 0x267a44: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x267A40u, 0x267A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267A48u;
label_267a48:
    // 0x267a48: 0x10000647  b           . + 4 + (0x647 << 2)
label_267a4c:
    if (ctx->pc == 0x267A4Cu) {
        ctx->pc = 0x267A50u;
        goto label_267a50;
    }
    ctx->pc = 0x267A48u;
    {
        const bool branch_taken_0x267a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267a48) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267A50u;
label_267a50:
    // 0x267a50: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x267a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267a54:
    // 0x267a54: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x267a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_267a58:
    // 0x267a58: 0xc049522  jal         func_125488
label_267a5c:
    if (ctx->pc == 0x267A5Cu) {
        ctx->pc = 0x267A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A58u;
        // 0x267a5c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A60u;
        goto label_267a60;
    }
    ctx->pc = 0x267A58u;
    SET_GPR_U32(ctx, 31, 0x267A60u);
    ctx->pc = 0x267A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267A58u;
    // 0x267a5c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x267A58u, 0x267A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267A60u;
label_267a60:
    // 0x267a60: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x267a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267a64:
    // 0x267a64: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x267a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_267a68:
    // 0x267a68: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x267a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_267a6c:
    // 0x267a6c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x267a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_267a70:
    // 0x267a70: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_267a74:
    if (ctx->pc == 0x267A74u) {
        ctx->pc = 0x267A78u;
        goto label_267a78;
    }
    ctx->pc = 0x267A70u;
    {
        const bool branch_taken_0x267a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267a70) {
            ctx->pc = 0x267B10u;
            goto label_267b10;
        }
    }
    ctx->pc = 0x267A78u;
label_267a78:
    // 0x267a78: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_267a7c:
    if (ctx->pc == 0x267A7Cu) {
        ctx->pc = 0x267A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A78u;
        // 0x267a7c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A80u;
        goto label_267a80;
    }
    ctx->pc = 0x267A78u;
    {
        const bool branch_taken_0x267a78 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x267A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A78u;
        // 0x267a7c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a78) {
            ctx->pc = 0x267A8Cu;
            goto label_267a8c;
        }
    }
    ctx->pc = 0x267A80u;
label_267a80:
    // 0x267a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_267a84:
    // 0x267a84: 0x10000007  b           . + 4 + (0x7 << 2)
label_267a88:
    if (ctx->pc == 0x267A88u) {
        ctx->pc = 0x267A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A84u;
        // 0x267a88: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A8Cu;
        goto label_267a8c;
    }
    ctx->pc = 0x267A84u;
    {
        const bool branch_taken_0x267a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A84u;
        // 0x267a88: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a84) {
            ctx->pc = 0x267AA4u;
            goto label_267aa4;
        }
    }
    ctx->pc = 0x267A8Cu;
label_267a8c:
    // 0x267a8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x267a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_267a90:
    // 0x267a90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x267a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_267a94:
    // 0x267a94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x267a94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_267a98:
    // 0x267a98: 0x0  nop
    ctx->pc = 0x267a98u;
    // NOP
label_267a9c:
    // 0x267a9c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x267a9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_267aa0:
    // 0x267aa0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x267aa0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_267aa4:
    // 0x267aa4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x267aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_267aa8:
    // 0x267aa8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x267aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_267aac:
    // 0x267aac: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x267aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_267ab0:
    // 0x267ab0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x267ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_267ab4:
    // 0x267ab4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x267ab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_267ab8:
    // 0x267ab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_267abc:
    // 0x267abc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x267abcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_267ac0:
    // 0x267ac0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x267ac0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_267ac4:
    // 0x267ac4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x267ac4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_267ac8:
    // 0x267ac8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_267acc:
    if (ctx->pc == 0x267ACCu) {
        ctx->pc = 0x267AD0u;
        goto label_267ad0;
    }
    ctx->pc = 0x267AC8u;
    {
        const bool branch_taken_0x267ac8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x267ac8) {
            ctx->pc = 0x267AE0u;
            goto label_267ae0;
        }
    }
    ctx->pc = 0x267AD0u;
label_267ad0:
    // 0x267ad0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x267ad0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_267ad4:
    // 0x267ad4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x267ad4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_267ad8:
    // 0x267ad8: 0x10000008  b           . + 4 + (0x8 << 2)
label_267adc:
    if (ctx->pc == 0x267ADCu) {
        ctx->pc = 0x267ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AD8u;
        // 0x267adc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267AE0u;
        goto label_267ae0;
    }
    ctx->pc = 0x267AD8u;
    {
        const bool branch_taken_0x267ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AD8u;
        // 0x267adc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ad8) {
            ctx->pc = 0x267AFCu;
            goto label_267afc;
        }
    }
    ctx->pc = 0x267AE0u;
label_267ae0:
    // 0x267ae0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x267ae0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_267ae4:
    // 0x267ae4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x267ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_267ae8:
    // 0x267ae8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x267ae8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_267aec:
    // 0x267aec: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x267aecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_267af0:
    // 0x267af0: 0x0  nop
    ctx->pc = 0x267af0u;
    // NOP
label_267af4:
    // 0x267af4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x267af4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_267af8:
    // 0x267af8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x267af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267afc:
    // 0x267afc: 0xc096974  jal         func_25A5D0
label_267b00:
    if (ctx->pc == 0x267B00u) {
        ctx->pc = 0x267B04u;
        goto label_267b04;
    }
    ctx->pc = 0x267AFCu;
    SET_GPR_U32(ctx, 31, 0x267B04u);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x267AFCu, 0x267B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B04u;
label_267b04:
    // 0x267b04: 0x10000004  b           . + 4 + (0x4 << 2)
label_267b08:
    if (ctx->pc == 0x267B08u) {
        ctx->pc = 0x267B0Cu;
        goto label_267b0c;
    }
    ctx->pc = 0x267B04u;
    {
        const bool branch_taken_0x267b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267b04) {
            ctx->pc = 0x267B18u;
            goto label_267b18;
        }
    }
    ctx->pc = 0x267B0Cu;
label_267b0c:
    // 0x267b0c: 0x0  nop
    ctx->pc = 0x267b0cu;
    // NOP
label_267b10:
    // 0x267b10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x267b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267b14:
    // 0x267b14: 0x0  nop
    ctx->pc = 0x267b14u;
    // NOP
label_267b18:
    // 0x267b18: 0xc0b2d94  jal         func_2CB650
label_267b1c:
    if (ctx->pc == 0x267B1Cu) {
        ctx->pc = 0x267B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B18u;
        // 0x267b1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B20u;
        goto label_267b20;
    }
    ctx->pc = 0x267B18u;
    SET_GPR_U32(ctx, 31, 0x267B20u);
    ctx->pc = 0x267B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267B18u;
    // 0x267b1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB650u, 0x267B18u, 0x267B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B20u;
label_267b20:
    // 0x267b20: 0x10000611  b           . + 4 + (0x611 << 2)
label_267b24:
    if (ctx->pc == 0x267B24u) {
        ctx->pc = 0x267B28u;
        goto label_267b28;
    }
    ctx->pc = 0x267B20u;
    {
        const bool branch_taken_0x267b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267b20) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267B28u;
label_267b28:
    // 0x267b28: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x267b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267b2c:
    // 0x267b2c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x267b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_267b30:
    // 0x267b30: 0xc049522  jal         func_125488
label_267b34:
    if (ctx->pc == 0x267B34u) {
        ctx->pc = 0x267B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B30u;
        // 0x267b34: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B38u;
        goto label_267b38;
    }
    ctx->pc = 0x267B30u;
    SET_GPR_U32(ctx, 31, 0x267B38u);
    ctx->pc = 0x267B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267B30u;
    // 0x267b34: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x267B30u, 0x267B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B38u;
label_267b38:
    // 0x267b38: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x267b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267b3c:
    // 0x267b3c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x267b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_267b40:
    // 0x267b40: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x267b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_267b44:
    // 0x267b44: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x267b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_267b48:
    // 0x267b48: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_267b4c:
    if (ctx->pc == 0x267B4Cu) {
        ctx->pc = 0x267B50u;
        goto label_267b50;
    }
    ctx->pc = 0x267B48u;
    {
        const bool branch_taken_0x267b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267b48) {
            ctx->pc = 0x267BE8u;
            goto label_267be8;
        }
    }
    ctx->pc = 0x267B50u;
label_267b50:
    // 0x267b50: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_267b54:
    if (ctx->pc == 0x267B54u) {
        ctx->pc = 0x267B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B50u;
        // 0x267b54: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B58u;
        goto label_267b58;
    }
    ctx->pc = 0x267B50u;
    {
        const bool branch_taken_0x267b50 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x267B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B50u;
        // 0x267b54: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b50) {
            ctx->pc = 0x267B64u;
            goto label_267b64;
        }
    }
    ctx->pc = 0x267B58u;
label_267b58:
    // 0x267b58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_267b5c:
    // 0x267b5c: 0x10000007  b           . + 4 + (0x7 << 2)
label_267b60:
    if (ctx->pc == 0x267B60u) {
        ctx->pc = 0x267B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B5Cu;
        // 0x267b60: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B64u;
        goto label_267b64;
    }
    ctx->pc = 0x267B5Cu;
    {
        const bool branch_taken_0x267b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B5Cu;
        // 0x267b60: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b5c) {
            ctx->pc = 0x267B7Cu;
            goto label_267b7c;
        }
    }
    ctx->pc = 0x267B64u;
label_267b64:
    // 0x267b64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x267b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_267b68:
    // 0x267b68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x267b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_267b6c:
    // 0x267b6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x267b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_267b70:
    // 0x267b70: 0x0  nop
    ctx->pc = 0x267b70u;
    // NOP
label_267b74:
    // 0x267b74: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x267b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_267b78:
    // 0x267b78: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x267b78u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_267b7c:
    // 0x267b7c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x267b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_267b80:
    // 0x267b80: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x267b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_267b84:
    // 0x267b84: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x267b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_267b88:
    // 0x267b88: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x267b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_267b8c:
    // 0x267b8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x267b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_267b90:
    // 0x267b90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_267b94:
    // 0x267b94: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x267b94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_267b98:
    // 0x267b98: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x267b98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_267b9c:
    // 0x267b9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x267b9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_267ba0:
    // 0x267ba0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_267ba4:
    if (ctx->pc == 0x267BA4u) {
        ctx->pc = 0x267BA8u;
        goto label_267ba8;
    }
    ctx->pc = 0x267BA0u;
    {
        const bool branch_taken_0x267ba0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x267ba0) {
            ctx->pc = 0x267BB8u;
            goto label_267bb8;
        }
    }
    ctx->pc = 0x267BA8u;
label_267ba8:
    // 0x267ba8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x267ba8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_267bac:
    // 0x267bac: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x267bacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_267bb0:
    // 0x267bb0: 0x10000008  b           . + 4 + (0x8 << 2)
label_267bb4:
    if (ctx->pc == 0x267BB4u) {
        ctx->pc = 0x267BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BB0u;
        // 0x267bb4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267BB8u;
        goto label_267bb8;
    }
    ctx->pc = 0x267BB0u;
    {
        const bool branch_taken_0x267bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BB0u;
        // 0x267bb4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267bb0) {
            ctx->pc = 0x267BD4u;
            goto label_267bd4;
        }
    }
    ctx->pc = 0x267BB8u;
label_267bb8:
    // 0x267bb8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x267bb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_267bbc:
    // 0x267bbc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x267bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_267bc0:
    // 0x267bc0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x267bc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_267bc4:
    // 0x267bc4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x267bc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_267bc8:
    // 0x267bc8: 0x0  nop
    ctx->pc = 0x267bc8u;
    // NOP
label_267bcc:
    // 0x267bcc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x267bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_267bd0:
    // 0x267bd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x267bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267bd4:
    // 0x267bd4: 0xc096974  jal         func_25A5D0
label_267bd8:
    if (ctx->pc == 0x267BD8u) {
        ctx->pc = 0x267BDCu;
        goto label_267bdc;
    }
    ctx->pc = 0x267BD4u;
    SET_GPR_U32(ctx, 31, 0x267BDCu);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x267BD4u, 0x267BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267BDCu;
label_267bdc:
    // 0x267bdc: 0x10000004  b           . + 4 + (0x4 << 2)
label_267be0:
    if (ctx->pc == 0x267BE0u) {
        ctx->pc = 0x267BE4u;
        goto label_267be4;
    }
    ctx->pc = 0x267BDCu;
    {
        const bool branch_taken_0x267bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267bdc) {
            ctx->pc = 0x267BF0u;
            goto label_267bf0;
        }
    }
    ctx->pc = 0x267BE4u;
label_267be4:
    // 0x267be4: 0x0  nop
    ctx->pc = 0x267be4u;
    // NOP
label_267be8:
    // 0x267be8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x267be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267bec:
    // 0x267bec: 0x0  nop
    ctx->pc = 0x267becu;
    // NOP
label_267bf0:
    // 0x267bf0: 0xc0b2dd0  jal         func_2CB740
label_267bf4:
    if (ctx->pc == 0x267BF4u) {
        ctx->pc = 0x267BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BF0u;
        // 0x267bf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267BF8u;
        goto label_267bf8;
    }
    ctx->pc = 0x267BF0u;
    SET_GPR_U32(ctx, 31, 0x267BF8u);
    ctx->pc = 0x267BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267BF0u;
    // 0x267bf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB740u, 0x267BF0u, 0x267BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267BF8u;
label_267bf8:
    // 0x267bf8: 0x100005db  b           . + 4 + (0x5DB << 2)
label_267bfc:
    if (ctx->pc == 0x267BFCu) {
        ctx->pc = 0x267C00u;
        goto label_267c00;
    }
    ctx->pc = 0x267BF8u;
    {
        const bool branch_taken_0x267bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267bf8) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267C00u;
label_267c00:
    // 0x267c00: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x267c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267c04:
    // 0x267c04: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x267c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_267c08:
    // 0x267c08: 0xc049522  jal         func_125488
label_267c0c:
    if (ctx->pc == 0x267C0Cu) {
        ctx->pc = 0x267C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C08u;
        // 0x267c0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C10u;
        goto label_267c10;
    }
    ctx->pc = 0x267C08u;
    SET_GPR_U32(ctx, 31, 0x267C10u);
    ctx->pc = 0x267C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C08u;
    // 0x267c0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x267C08u, 0x267C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C10u;
label_267c10:
    // 0x267c10: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x267c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267c14:
    // 0x267c14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x267c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_267c18:
    // 0x267c18: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x267c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_267c1c:
    // 0x267c1c: 0xc0b3628  jal         func_2CD8A0
label_267c20:
    if (ctx->pc == 0x267C20u) {
        ctx->pc = 0x267C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C1Cu;
        // 0x267c20: 0x93a40150  lbu         $a0, 0x150($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C24u;
        goto label_267c24;
    }
    ctx->pc = 0x267C1Cu;
    SET_GPR_U32(ctx, 31, 0x267C24u);
    ctx->pc = 0x267C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C1Cu;
    // 0x267c20: 0x93a40150  lbu         $a0, 0x150($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD8A0u, 0x267C1Cu, 0x267C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C24u;
label_267c24:
    // 0x267c24: 0x100005d0  b           . + 4 + (0x5D0 << 2)
label_267c28:
    if (ctx->pc == 0x267C28u) {
        ctx->pc = 0x267C2Cu;
        goto label_267c2c;
    }
    ctx->pc = 0x267C24u;
    {
        const bool branch_taken_0x267c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267c24) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267C2Cu;
label_267c2c:
    // 0x267c2c: 0x0  nop
    ctx->pc = 0x267c2cu;
    // NOP
label_267c30:
    // 0x267c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267c34:
    // 0x267c34: 0x100005cc  b           . + 4 + (0x5CC << 2)
label_267c38:
    if (ctx->pc == 0x267C38u) {
        ctx->pc = 0x267C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C34u;
        // 0x267c38: 0xa202004a  sb          $v0, 0x4A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C3Cu;
        goto label_267c3c;
    }
    ctx->pc = 0x267C34u;
    {
        const bool branch_taken_0x267c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C34u;
        // 0x267c38: 0xa202004a  sb          $v0, 0x4A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c34) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267C3Cu;
label_267c3c:
    // 0x267c3c: 0x0  nop
    ctx->pc = 0x267c3cu;
    // NOP
label_267c40:
    // 0x267c40: 0xa200004a  sb          $zero, 0x4A($s0)
    ctx->pc = 0x267c40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 0));
label_267c44:
    // 0x267c44: 0x100005c8  b           . + 4 + (0x5C8 << 2)
label_267c48:
    if (ctx->pc == 0x267C48u) {
        ctx->pc = 0x267C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C44u;
        // 0x267c48: 0xa200004b  sb          $zero, 0x4B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C4Cu;
        goto label_267c4c;
    }
    ctx->pc = 0x267C44u;
    {
        const bool branch_taken_0x267c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C44u;
        // 0x267c48: 0xa200004b  sb          $zero, 0x4B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c44) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267C4Cu;
label_267c4c:
    // 0x267c4c: 0x0  nop
    ctx->pc = 0x267c4cu;
    // NOP
label_267c50:
    // 0x267c50: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x267c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267c54:
    // 0x267c54: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x267c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_267c58:
    // 0x267c58: 0xc049522  jal         func_125488
label_267c5c:
    if (ctx->pc == 0x267C5Cu) {
        ctx->pc = 0x267C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C58u;
        // 0x267c5c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C60u;
        goto label_267c60;
    }
    ctx->pc = 0x267C58u;
    SET_GPR_U32(ctx, 31, 0x267C60u);
    ctx->pc = 0x267C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C58u;
    // 0x267c5c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x267C58u, 0x267C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C60u;
label_267c60:
    // 0x267c60: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x267c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267c64:
    // 0x267c64: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x267c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_267c68:
    // 0x267c68: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x267c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_267c6c:
    // 0x267c6c: 0x93a30150  lbu         $v1, 0x150($sp)
    ctx->pc = 0x267c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_267c70:
    // 0x267c70: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_267c74:
    if (ctx->pc == 0x267C74u) {
        ctx->pc = 0x267C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C70u;
        // 0x267c74: 0x2611004c  addiu       $s1, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C78u;
        goto label_267c78;
    }
    ctx->pc = 0x267C70u;
    {
        const bool branch_taken_0x267c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x267C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C70u;
        // 0x267c74: 0x2611004c  addiu       $s1, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c70) {
            ctx->pc = 0x267C80u;
            goto label_267c80;
        }
    }
    ctx->pc = 0x267C78u;
label_267c78:
    // 0x267c78: 0x1000000f  b           . + 4 + (0xF << 2)
label_267c7c:
    if (ctx->pc == 0x267C7Cu) {
        ctx->pc = 0x267C80u;
        goto label_267c80;
    }
    ctx->pc = 0x267C78u;
    {
        const bool branch_taken_0x267c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267c78) {
            ctx->pc = 0x267CB8u;
            goto label_267cb8;
        }
    }
    ctx->pc = 0x267C80u;
label_267c80:
    // 0x267c80: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x267c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
label_267c84:
    // 0x267c84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_267c88:
    if (ctx->pc == 0x267C88u) {
        ctx->pc = 0x267C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C84u;
        // 0x267c88: 0x2462ff80  addiu       $v0, $v1, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C8Cu;
        goto label_267c8c;
    }
    ctx->pc = 0x267C84u;
    {
        const bool branch_taken_0x267c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C84u;
        // 0x267c88: 0x2462ff80  addiu       $v0, $v1, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c84) {
            ctx->pc = 0x267CA0u;
            goto label_267ca0;
        }
    }
    ctx->pc = 0x267C8Cu;
label_267c8c:
    // 0x267c8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x267c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_267c90:
    // 0x267c90: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x267c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_267c94:
    // 0x267c94: 0x10000008  b           . + 4 + (0x8 << 2)
label_267c98:
    if (ctx->pc == 0x267C98u) {
        ctx->pc = 0x267C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C94u;
        // 0x267c98: 0x2451004c  addiu       $s1, $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C9Cu;
        goto label_267c9c;
    }
    ctx->pc = 0x267C94u;
    {
        const bool branch_taken_0x267c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C94u;
        // 0x267c98: 0x2451004c  addiu       $s1, $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c94) {
            ctx->pc = 0x267CB8u;
            goto label_267cb8;
        }
    }
    ctx->pc = 0x267C9Cu;
label_267c9c:
    // 0x267c9c: 0x0  nop
    ctx->pc = 0x267c9cu;
    // NOP
label_267ca0:
    // 0x267ca0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x267ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_267ca4:
    // 0x267ca4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x267ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_267ca8:
    // 0x267ca8: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x267ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
label_267cac:
    // 0x267cac: 0x2442f8b0  addiu       $v0, $v0, -0x750
    ctx->pc = 0x267cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965424));
label_267cb0:
    // 0x267cb0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x267cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_267cb4:
    // 0x267cb4: 0x0  nop
    ctx->pc = 0x267cb4u;
    // NOP
label_267cb8:
    // 0x267cb8: 0x93a30151  lbu         $v1, 0x151($sp)
    ctx->pc = 0x267cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 337)));
label_267cbc:
    // 0x267cbc: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x267cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_267cc0:
    // 0x267cc0: 0x1062005b  beq         $v1, $v0, . + 4 + (0x5B << 2)
label_267cc4:
    if (ctx->pc == 0x267CC4u) {
        ctx->pc = 0x267CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CC0u;
        // 0x267cc4: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267CC8u;
        goto label_267cc8;
    }
    ctx->pc = 0x267CC0u;
    {
        const bool branch_taken_0x267cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x267CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CC0u;
        // 0x267cc4: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267cc0) {
            ctx->pc = 0x267E30u;
            goto label_267e30;
        }
    }
    ctx->pc = 0x267CC8u;
label_267cc8:
    // 0x267cc8: 0x106205a7  beq         $v1, $v0, . + 4 + (0x5A7 << 2)
label_267ccc:
    if (ctx->pc == 0x267CCCu) {
        ctx->pc = 0x267CD0u;
        goto label_267cd0;
    }
    ctx->pc = 0x267CC8u;
    {
        const bool branch_taken_0x267cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x267cc8) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267CD0u;
label_267cd0:
    // 0x267cd0: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x267cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_267cd4:
    // 0x267cd4: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
label_267cd8:
    if (ctx->pc == 0x267CD8u) {
        ctx->pc = 0x267CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CD4u;
        // 0x267cd8: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267CDCu;
        goto label_267cdc;
    }
    ctx->pc = 0x267CD4u;
    {
        const bool branch_taken_0x267cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x267CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CD4u;
        // 0x267cd8: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267cd4) {
            ctx->pc = 0x267E18u;
            goto label_267e18;
        }
    }
    ctx->pc = 0x267CDCu;
label_267cdc:
    // 0x267cdc: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
label_267ce0:
    if (ctx->pc == 0x267CE0u) {
        ctx->pc = 0x267CE4u;
        goto label_267ce4;
    }
    ctx->pc = 0x267CDCu;
    {
        const bool branch_taken_0x267cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x267cdc) {
            ctx->pc = 0x267E00u;
            goto label_267e00;
        }
    }
    ctx->pc = 0x267CE4u;
label_267ce4:
    // 0x267ce4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x267ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_267ce8:
    // 0x267ce8: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
label_267cec:
    if (ctx->pc == 0x267CECu) {
        ctx->pc = 0x267CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CE8u;
        // 0x267cec: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267CF0u;
        goto label_267cf0;
    }
    ctx->pc = 0x267CE8u;
    {
        const bool branch_taken_0x267ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x267CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CE8u;
        // 0x267cec: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ce8) {
            ctx->pc = 0x267DF0u;
            goto label_267df0;
        }
    }
    ctx->pc = 0x267CF0u;
label_267cf0:
    // 0x267cf0: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
label_267cf4:
    if (ctx->pc == 0x267CF4u) {
        ctx->pc = 0x267CF8u;
        goto label_267cf8;
    }
    ctx->pc = 0x267CF0u;
    {
        const bool branch_taken_0x267cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x267cf0) {
            ctx->pc = 0x267DD8u;
            goto label_267dd8;
        }
    }
    ctx->pc = 0x267CF8u;
label_267cf8:
    // 0x267cf8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x267cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_267cfc:
    // 0x267cfc: 0x1062059a  beq         $v1, $v0, . + 4 + (0x59A << 2)
label_267d00:
    if (ctx->pc == 0x267D00u) {
        ctx->pc = 0x267D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CFCu;
        // 0x267d00: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D04u;
        goto label_267d04;
    }
    ctx->pc = 0x267CFCu;
    {
        const bool branch_taken_0x267cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x267D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CFCu;
        // 0x267d00: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267cfc) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267D04u;
label_267d04:
    // 0x267d04: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
label_267d08:
    if (ctx->pc == 0x267D08u) {
        ctx->pc = 0x267D0Cu;
        goto label_267d0c;
    }
    ctx->pc = 0x267D04u;
    {
        const bool branch_taken_0x267d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x267d04) {
            ctx->pc = 0x267DC0u;
            goto label_267dc0;
        }
    }
    ctx->pc = 0x267D0Cu;
label_267d0c:
    // 0x267d0c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x267d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_267d10:
    // 0x267d10: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
label_267d14:
    if (ctx->pc == 0x267D14u) {
        ctx->pc = 0x267D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D10u;
        // 0x267d14: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D18u;
        goto label_267d18;
    }
    ctx->pc = 0x267D10u;
    {
        const bool branch_taken_0x267d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x267D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D10u;
        // 0x267d14: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d10) {
            ctx->pc = 0x267DB0u;
            goto label_267db0;
        }
    }
    ctx->pc = 0x267D18u;
label_267d18:
    // 0x267d18: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_267d1c:
    if (ctx->pc == 0x267D1Cu) {
        ctx->pc = 0x267D20u;
        goto label_267d20;
    }
    ctx->pc = 0x267D18u;
    {
        const bool branch_taken_0x267d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x267d18) {
            ctx->pc = 0x267D88u;
            goto label_267d88;
        }
    }
    ctx->pc = 0x267D20u;
label_267d20:
    // 0x267d20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x267d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_267d24:
    // 0x267d24: 0x10620590  beq         $v1, $v0, . + 4 + (0x590 << 2)
label_267d28:
    if (ctx->pc == 0x267D28u) {
        ctx->pc = 0x267D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D24u;
        // 0x267d28: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D2Cu;
        goto label_267d2c;
    }
    ctx->pc = 0x267D24u;
    {
        const bool branch_taken_0x267d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x267D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D24u;
        // 0x267d28: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d24) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267D2Cu;
label_267d2c:
    // 0x267d2c: 0x1062058e  beq         $v1, $v0, . + 4 + (0x58E << 2)
label_267d30:
    if (ctx->pc == 0x267D30u) {
        ctx->pc = 0x267D34u;
        goto label_267d34;
    }
    ctx->pc = 0x267D2Cu;
    {
        const bool branch_taken_0x267d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x267d2c) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267D34u;
label_267d34:
    // 0x267d34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x267d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_267d38:
    // 0x267d38: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_267d3c:
    if (ctx->pc == 0x267D3Cu) {
        ctx->pc = 0x267D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D38u;
        // 0x267d3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D40u;
        goto label_267d40;
    }
    ctx->pc = 0x267D38u;
    {
        const bool branch_taken_0x267d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x267D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D38u;
        // 0x267d3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d38) {
            ctx->pc = 0x267D60u;
            goto label_267d60;
        }
    }
    ctx->pc = 0x267D40u;
label_267d40:
    // 0x267d40: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_267d44:
    if (ctx->pc == 0x267D44u) {
        ctx->pc = 0x267D48u;
        goto label_267d48;
    }
    ctx->pc = 0x267D40u;
    {
        const bool branch_taken_0x267d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x267d40) {
            ctx->pc = 0x267D50u;
            goto label_267d50;
        }
    }
    ctx->pc = 0x267D48u;
label_267d48:
    // 0x267d48: 0x10000587  b           . + 4 + (0x587 << 2)
label_267d4c:
    if (ctx->pc == 0x267D4Cu) {
        ctx->pc = 0x267D50u;
        goto label_267d50;
    }
    ctx->pc = 0x267D48u;
    {
        const bool branch_taken_0x267d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267d48) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267D50u;
label_267d50:
    // 0x267d50: 0xc0d8d2c  jal         func_3634B0
label_267d54:
    if (ctx->pc == 0x267D54u) {
        ctx->pc = 0x267D58u;
        goto label_267d58;
    }
    ctx->pc = 0x267D50u;
    SET_GPR_U32(ctx, 31, 0x267D58u);
    ctx->pc = 0x3634B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3634B0u, 0x267D50u, 0x267D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D58u;
label_267d58:
    // 0x267d58: 0x10000583  b           . + 4 + (0x583 << 2)
label_267d5c:
    if (ctx->pc == 0x267D5Cu) {
        ctx->pc = 0x267D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D58u;
        // 0x267d5c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D60u;
        goto label_267d60;
    }
    ctx->pc = 0x267D58u;
    {
        const bool branch_taken_0x267d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D58u;
        // 0x267d5c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d58) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267D60u;
label_267d60:
    // 0x267d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_267d64:
    // 0x267d64: 0xc099b04  jal         func_266C10
label_267d68:
    if (ctx->pc == 0x267D68u) {
        ctx->pc = 0x267D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D64u;
        // 0x267d68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D6Cu;
        goto label_267d6c;
    }
    ctx->pc = 0x267D64u;
    SET_GPR_U32(ctx, 31, 0x267D6Cu);
    ctx->pc = 0x267D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267D64u;
    // 0x267d68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x267D64u, 0x267D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D6Cu;
label_267d6c:
    // 0x267d6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_267d70:
    if (ctx->pc == 0x267D70u) {
        ctx->pc = 0x267D74u;
        goto label_267d74;
    }
    ctx->pc = 0x267D6Cu;
    {
        const bool branch_taken_0x267d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267d6c) {
            ctx->pc = 0x267D80u;
            goto label_267d80;
        }
    }
    ctx->pc = 0x267D74u;
label_267d74:
    // 0x267d74: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x267d74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_267d78:
    // 0x267d78: 0x1000057b  b           . + 4 + (0x57B << 2)
label_267d7c:
    if (ctx->pc == 0x267D7Cu) {
        ctx->pc = 0x267D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D78u;
        // 0x267d7c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D80u;
        goto label_267d80;
    }
    ctx->pc = 0x267D78u;
    {
        const bool branch_taken_0x267d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D78u;
        // 0x267d7c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d78) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267D80u;
label_267d80:
    // 0x267d80: 0x10000579  b           . + 4 + (0x579 << 2)
label_267d84:
    if (ctx->pc == 0x267D84u) {
        ctx->pc = 0x267D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D80u;
        // 0x267d84: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D88u;
        goto label_267d88;
    }
    ctx->pc = 0x267D80u;
    {
        const bool branch_taken_0x267d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D80u;
        // 0x267d84: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d80) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267D88u;
label_267d88:
    // 0x267d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_267d8c:
    // 0x267d8c: 0xc099b04  jal         func_266C10
label_267d90:
    if (ctx->pc == 0x267D90u) {
        ctx->pc = 0x267D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D8Cu;
        // 0x267d90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D94u;
        goto label_267d94;
    }
    ctx->pc = 0x267D8Cu;
    SET_GPR_U32(ctx, 31, 0x267D94u);
    ctx->pc = 0x267D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267D8Cu;
    // 0x267d90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x267D8Cu, 0x267D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D94u;
label_267d94:
    // 0x267d94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_267d98:
    if (ctx->pc == 0x267D98u) {
        ctx->pc = 0x267D9Cu;
        goto label_267d9c;
    }
    ctx->pc = 0x267D94u;
    {
        const bool branch_taken_0x267d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267d94) {
            ctx->pc = 0x267DA8u;
            goto label_267da8;
        }
    }
    ctx->pc = 0x267D9Cu;
label_267d9c:
    // 0x267d9c: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x267d9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_267da0:
    // 0x267da0: 0x10000571  b           . + 4 + (0x571 << 2)
label_267da4:
    if (ctx->pc == 0x267DA4u) {
        ctx->pc = 0x267DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DA0u;
        // 0x267da4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267DA8u;
        goto label_267da8;
    }
    ctx->pc = 0x267DA0u;
    {
        const bool branch_taken_0x267da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DA0u;
        // 0x267da4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267da0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267DA8u;
label_267da8:
    // 0x267da8: 0x1000056f  b           . + 4 + (0x56F << 2)
label_267dac:
    if (ctx->pc == 0x267DACu) {
        ctx->pc = 0x267DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DA8u;
        // 0x267dac: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267DB0u;
        goto label_267db0;
    }
    ctx->pc = 0x267DA8u;
    {
        const bool branch_taken_0x267da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DA8u;
        // 0x267dac: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267da8) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267DB0u;
label_267db0:
    // 0x267db0: 0xc0d8d30  jal         func_3634C0
label_267db4:
    if (ctx->pc == 0x267DB4u) {
        ctx->pc = 0x267DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DB0u;
        // 0x267db4: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x267DB8u;
        goto label_267db8;
    }
    ctx->pc = 0x267DB0u;
    SET_GPR_U32(ctx, 31, 0x267DB8u);
    ctx->pc = 0x267DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267DB0u;
    // 0x267db4: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3634C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3634C0u, 0x267DB0u, 0x267DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267DB8u;
label_267db8:
    // 0x267db8: 0x1000056b  b           . + 4 + (0x56B << 2)
label_267dbc:
    if (ctx->pc == 0x267DBCu) {
        ctx->pc = 0x267DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DB8u;
        // 0x267dbc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267DC0u;
        goto label_267dc0;
    }
    ctx->pc = 0x267DB8u;
    {
        const bool branch_taken_0x267db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DB8u;
        // 0x267dbc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267db8) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267DC0u;
label_267dc0:
    // 0x267dc0: 0xc0d8df4  jal         func_3637D0
label_267dc4:
    if (ctx->pc == 0x267DC4u) {
        ctx->pc = 0x267DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DC0u;
        // 0x267dc4: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x267DC8u;
        goto label_267dc8;
    }
    ctx->pc = 0x267DC0u;
    SET_GPR_U32(ctx, 31, 0x267DC8u);
    ctx->pc = 0x267DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267DC0u;
    // 0x267dc4: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3637D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3637D0u, 0x267DC0u, 0x267DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267DC8u;
label_267dc8:
    // 0x267dc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x267dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_267dcc:
    // 0x267dcc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x267dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_267dd0:
    // 0x267dd0: 0x10000565  b           . + 4 + (0x565 << 2)
label_267dd4:
    if (ctx->pc == 0x267DD4u) {
        ctx->pc = 0x267DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DD0u;
        // 0x267dd4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267DD8u;
        goto label_267dd8;
    }
    ctx->pc = 0x267DD0u;
    {
        const bool branch_taken_0x267dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DD0u;
        // 0x267dd4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267dd0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267DD8u;
label_267dd8:
    // 0x267dd8: 0xc0d8df4  jal         func_3637D0
label_267ddc:
    if (ctx->pc == 0x267DDCu) {
        ctx->pc = 0x267DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DD8u;
        // 0x267ddc: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x267DE0u;
        goto label_267de0;
    }
    ctx->pc = 0x267DD8u;
    SET_GPR_U32(ctx, 31, 0x267DE0u);
    ctx->pc = 0x267DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267DD8u;
    // 0x267ddc: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3637D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3637D0u, 0x267DD8u, 0x267DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267DE0u;
label_267de0:
    // 0x267de0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x267de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_267de4:
    // 0x267de4: 0x10000560  b           . + 4 + (0x560 << 2)
label_267de8:
    if (ctx->pc == 0x267DE8u) {
        ctx->pc = 0x267DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DE4u;
        // 0x267de8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267DECu;
        goto label_267dec;
    }
    ctx->pc = 0x267DE4u;
    {
        const bool branch_taken_0x267de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DE4u;
        // 0x267de8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267de4) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267DECu;
label_267dec:
    // 0x267dec: 0x0  nop
    ctx->pc = 0x267decu;
    // NOP
label_267df0:
    // 0x267df0: 0xc0d8d1c  jal         func_363470
label_267df4:
    if (ctx->pc == 0x267DF4u) {
        ctx->pc = 0x267DF8u;
        goto label_267df8;
    }
    ctx->pc = 0x267DF0u;
    SET_GPR_U32(ctx, 31, 0x267DF8u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x267DF0u, 0x267DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267DF8u;
label_267df8:
    // 0x267df8: 0x1000055b  b           . + 4 + (0x55B << 2)
label_267dfc:
    if (ctx->pc == 0x267DFCu) {
        ctx->pc = 0x267DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DF8u;
        // 0x267dfc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267E00u;
        goto label_267e00;
    }
    ctx->pc = 0x267DF8u;
    {
        const bool branch_taken_0x267df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DF8u;
        // 0x267dfc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267df8) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267E00u;
label_267e00:
    // 0x267e00: 0xc0d8e60  jal         func_363980
label_267e04:
    if (ctx->pc == 0x267E04u) {
        ctx->pc = 0x267E08u;
        goto label_267e08;
    }
    ctx->pc = 0x267E00u;
    SET_GPR_U32(ctx, 31, 0x267E08u);
    ctx->pc = 0x363980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363980u, 0x267E00u, 0x267E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267E08u;
label_267e08:
    // 0x267e08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x267e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_267e0c:
    // 0x267e0c: 0x10000556  b           . + 4 + (0x556 << 2)
label_267e10:
    if (ctx->pc == 0x267E10u) {
        ctx->pc = 0x267E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E0Cu;
        // 0x267e10: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267E14u;
        goto label_267e14;
    }
    ctx->pc = 0x267E0Cu;
    {
        const bool branch_taken_0x267e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E0Cu;
        // 0x267e10: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e0c) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267E14u;
label_267e14:
    // 0x267e14: 0x0  nop
    ctx->pc = 0x267e14u;
    // NOP
label_267e18:
    // 0x267e18: 0xc0d8e20  jal         func_363880
label_267e1c:
    if (ctx->pc == 0x267E1Cu) {
        ctx->pc = 0x267E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E18u;
        // 0x267e1c: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x267E20u;
        goto label_267e20;
    }
    ctx->pc = 0x267E18u;
    SET_GPR_U32(ctx, 31, 0x267E20u);
    ctx->pc = 0x267E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267E18u;
    // 0x267e1c: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x363880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363880u, 0x267E18u, 0x267E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267E20u;
label_267e20:
    // 0x267e20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x267e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_267e24:
    // 0x267e24: 0x10000550  b           . + 4 + (0x550 << 2)
label_267e28:
    if (ctx->pc == 0x267E28u) {
        ctx->pc = 0x267E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E24u;
        // 0x267e28: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267E2Cu;
        goto label_267e2c;
    }
    ctx->pc = 0x267E24u;
    {
        const bool branch_taken_0x267e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E24u;
        // 0x267e28: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e24) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267E2Cu;
label_267e2c:
    // 0x267e2c: 0x0  nop
    ctx->pc = 0x267e2cu;
    // NOP
label_267e30:
    // 0x267e30: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x267e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_267e34:
    // 0x267e34: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x267e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
label_267e38:
    // 0x267e38: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x267e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_267e3c:
    // 0x267e3c: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x267e3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
label_267e40:
    // 0x267e40: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x267e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_267e44:
    // 0x267e44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x267e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_267e48:
    // 0x267e48: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x267e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_267e4c:
    // 0x267e4c: 0x10a00546  beqz        $a1, . + 4 + (0x546 << 2)
label_267e50:
    if (ctx->pc == 0x267E50u) {
        ctx->pc = 0x267E54u;
        goto label_267e54;
    }
    ctx->pc = 0x267E4Cu;
    {
        const bool branch_taken_0x267e4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x267e4c) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267E54u;
label_267e54:
    // 0x267e54: 0x8ca229c0  lw          $v0, 0x29C0($a1)
    ctx->pc = 0x267e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10688)));
label_267e58:
    // 0x267e58: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x267e58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_267e5c:
    // 0x267e5c: 0x10400542  beqz        $v0, . + 4 + (0x542 << 2)
label_267e60:
    if (ctx->pc == 0x267E60u) {
        ctx->pc = 0x267E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E5Cu;
        // 0x267e60: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x267E64u;
        goto label_267e64;
    }
    ctx->pc = 0x267E5Cu;
    {
        const bool branch_taken_0x267e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E5Cu;
        // 0x267e60: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e5c) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267E64u;
label_267e64:
    // 0x267e64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x267e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_267e68:
    // 0x267e68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x267e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_267e6c:
    // 0x267e6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x267e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_267e70:
    // 0x267e70: 0x1080053d  beqz        $a0, . + 4 + (0x53D << 2)
label_267e74:
    if (ctx->pc == 0x267E74u) {
        ctx->pc = 0x267E78u;
        goto label_267e78;
    }
    ctx->pc = 0x267E70u;
    {
        const bool branch_taken_0x267e70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x267e70) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267E78u;
label_267e78:
    // 0x267e78: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x267e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
label_267e7c:
    // 0x267e7c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x267e7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_267e80:
    // 0x267e80: 0x10400539  beqz        $v0, . + 4 + (0x539 << 2)
label_267e84:
    if (ctx->pc == 0x267E84u) {
        ctx->pc = 0x267E88u;
        goto label_267e88;
    }
    ctx->pc = 0x267E80u;
    {
        const bool branch_taken_0x267e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267e80) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267E88u;
label_267e88:
    // 0x267e88: 0x90a2065c  lbu         $v0, 0x65C($a1)
    ctx->pc = 0x267e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1628)));
label_267e8c:
    // 0x267e8c: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x267e8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_267e90:
    // 0x267e90: 0x10200535  beqz        $at, . + 4 + (0x535 << 2)
label_267e94:
    if (ctx->pc == 0x267E94u) {
        ctx->pc = 0x267E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E90u;
        // 0x267e94: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267E98u;
        goto label_267e98;
    }
    ctx->pc = 0x267E90u;
    {
        const bool branch_taken_0x267e90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x267E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E90u;
        // 0x267e94: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e90) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267E98u;
label_267e98:
    // 0x267e98: 0x10430533  beq         $v0, $v1, . + 4 + (0x533 << 2)
label_267e9c:
    if (ctx->pc == 0x267E9Cu) {
        ctx->pc = 0x267EA0u;
        goto label_267ea0;
    }
    ctx->pc = 0x267E98u;
    {
        const bool branch_taken_0x267e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x267e98) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267EA0u;
label_267ea0:
    // 0x267ea0: 0x9082065c  lbu         $v0, 0x65C($a0)
    ctx->pc = 0x267ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
label_267ea4:
    // 0x267ea4: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x267ea4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_267ea8:
    // 0x267ea8: 0x1020052f  beqz        $at, . + 4 + (0x52F << 2)
label_267eac:
    if (ctx->pc == 0x267EACu) {
        ctx->pc = 0x267EB0u;
        goto label_267eb0;
    }
    ctx->pc = 0x267EA8u;
    {
        const bool branch_taken_0x267ea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x267ea8) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267EB0u;
label_267eb0:
    // 0x267eb0: 0x1043052d  beq         $v0, $v1, . + 4 + (0x52D << 2)
label_267eb4:
    if (ctx->pc == 0x267EB4u) {
        ctx->pc = 0x267EB8u;
        goto label_267eb8;
    }
    ctx->pc = 0x267EB0u;
    {
        const bool branch_taken_0x267eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x267eb0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267EB8u;
label_267eb8:
    // 0x267eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267ebc:
    // 0x267ebc: 0x1000052a  b           . + 4 + (0x52A << 2)
label_267ec0:
    if (ctx->pc == 0x267EC0u) {
        ctx->pc = 0x267EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EBCu;
        // 0x267ec0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267EC4u;
        goto label_267ec4;
    }
    ctx->pc = 0x267EBCu;
    {
        const bool branch_taken_0x267ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EBCu;
        // 0x267ec0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ebc) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267EC4u;
label_267ec4:
    // 0x267ec4: 0x0  nop
    ctx->pc = 0x267ec4u;
    // NOP
label_267ec8:
    // 0x267ec8: 0xc0d8dd8  jal         func_363760
label_267ecc:
    if (ctx->pc == 0x267ECCu) {
        ctx->pc = 0x267ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EC8u;
        // 0x267ecc: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x267ED0u;
        goto label_267ed0;
    }
    ctx->pc = 0x267EC8u;
    SET_GPR_U32(ctx, 31, 0x267ED0u);
    ctx->pc = 0x267ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267EC8u;
    // 0x267ecc: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x363760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363760u, 0x267EC8u, 0x267ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267ED0u;
label_267ed0:
    // 0x267ed0: 0x10000525  b           . + 4 + (0x525 << 2)
label_267ed4:
    if (ctx->pc == 0x267ED4u) {
        ctx->pc = 0x267ED8u;
        goto label_267ed8;
    }
    ctx->pc = 0x267ED0u;
    {
        const bool branch_taken_0x267ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267ed0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267ED8u;
label_267ed8:
    // 0x267ed8: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x267ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267edc:
    // 0x267edc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x267edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_267ee0:
    // 0x267ee0: 0xc049522  jal         func_125488
label_267ee4:
    if (ctx->pc == 0x267EE4u) {
        ctx->pc = 0x267EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EE0u;
        // 0x267ee4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267EE8u;
        goto label_267ee8;
    }
    ctx->pc = 0x267EE0u;
    SET_GPR_U32(ctx, 31, 0x267EE8u);
    ctx->pc = 0x267EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267EE0u;
    // 0x267ee4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x267EE0u, 0x267EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267EE8u;
label_267ee8:
    // 0x267ee8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x267ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267eec:
    // 0x267eec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x267eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_267ef0:
    // 0x267ef0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x267ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_267ef4:
    // 0x267ef4: 0xc0d8d0c  jal         func_363430
label_267ef8:
    if (ctx->pc == 0x267EF8u) {
        ctx->pc = 0x267EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EF4u;
        // 0x267ef8: 0x8fa40150  lw          $a0, 0x150($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267EFCu;
        goto label_267efc;
    }
    ctx->pc = 0x267EF4u;
    SET_GPR_U32(ctx, 31, 0x267EFCu);
    ctx->pc = 0x267EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267EF4u;
    // 0x267ef8: 0x8fa40150  lw          $a0, 0x150($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363430u, 0x267EF4u, 0x267EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267EFCu;
label_267efc:
    // 0x267efc: 0x1000051a  b           . + 4 + (0x51A << 2)
label_267f00:
    if (ctx->pc == 0x267F00u) {
        ctx->pc = 0x267F04u;
        goto label_267f04;
    }
    ctx->pc = 0x267EFCu;
    {
        const bool branch_taken_0x267efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267efc) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267F04u;
label_267f04:
    // 0x267f04: 0x0  nop
    ctx->pc = 0x267f04u;
    // NOP
label_267f08:
    // 0x267f08: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x267f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267f0c:
    // 0x267f0c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x267f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_267f10:
    // 0x267f10: 0xc049522  jal         func_125488
label_267f14:
    if (ctx->pc == 0x267F14u) {
        ctx->pc = 0x267F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F10u;
        // 0x267f14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267F18u;
        goto label_267f18;
    }
    ctx->pc = 0x267F10u;
    SET_GPR_U32(ctx, 31, 0x267F18u);
    ctx->pc = 0x267F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267F10u;
    // 0x267f14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x267F10u, 0x267F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267F18u;
label_267f18:
    // 0x267f18: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x267f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267f1c:
    // 0x267f1c: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x267f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
label_267f20:
    // 0x267f20: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x267f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
label_267f24:
    // 0x267f24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x267f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_267f28:
    // 0x267f28: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x267f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_267f2c:
    // 0x267f2c: 0x93a20150  lbu         $v0, 0x150($sp)
    ctx->pc = 0x267f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_267f30:
    // 0x267f30: 0xc056e04  jal         func_15B810
label_267f34:
    if (ctx->pc == 0x267F34u) {
        ctx->pc = 0x267F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F30u;
        // 0x267f34: 0x24453100  addiu       $a1, $v0, 0x3100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267F38u;
        goto label_267f38;
    }
    ctx->pc = 0x267F30u;
    SET_GPR_U32(ctx, 31, 0x267F38u);
    ctx->pc = 0x267F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267F30u;
    // 0x267f34: 0x24453100  addiu       $a1, $v0, 0x3100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x267F30u, 0x267F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267F38u;
label_267f38:
    // 0x267f38: 0x1000050b  b           . + 4 + (0x50B << 2)
label_267f3c:
    if (ctx->pc == 0x267F3Cu) {
        ctx->pc = 0x267F40u;
        goto label_267f40;
    }
    ctx->pc = 0x267F38u;
    {
        const bool branch_taken_0x267f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267f38) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267F40u;
label_267f40:
    // 0x267f40: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x267f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267f44:
    // 0x267f44: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x267f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_267f48:
    // 0x267f48: 0xc049522  jal         func_125488
label_267f4c:
    if (ctx->pc == 0x267F4Cu) {
        ctx->pc = 0x267F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F48u;
        // 0x267f4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267F50u;
        goto label_267f50;
    }
    ctx->pc = 0x267F48u;
    SET_GPR_U32(ctx, 31, 0x267F50u);
    ctx->pc = 0x267F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267F48u;
    // 0x267f4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x267F48u, 0x267F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267F50u;
label_267f50:
    // 0x267f50: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x267f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267f54:
    // 0x267f54: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x267f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
label_267f58:
    // 0x267f58: 0x24420fe0  addiu       $v0, $v0, 0xFE0
    ctx->pc = 0x267f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
label_267f5c:
    // 0x267f5c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x267f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_267f60:
    // 0x267f60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x267f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_267f64:
    // 0x267f64: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x267f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_267f68:
    // 0x267f68: 0x93a30150  lbu         $v1, 0x150($sp)
    ctx->pc = 0x267f68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_267f6c:
    // 0x267f6c: 0x24633100  addiu       $v1, $v1, 0x3100
    ctx->pc = 0x267f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12544));
label_267f70:
    // 0x267f70: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x267f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_267f74:
    // 0x267f74: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x267f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_267f78:
    // 0x267f78: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x267f78u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_267f7c:
    // 0x267f7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x267f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_267f80:
    // 0x267f80: 0x802027  not         $a0, $a0
    ctx->pc = 0x267f80u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_267f84:
    // 0x267f84: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x267f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_267f88:
    // 0x267f88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x267f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_267f8c:
    // 0x267f8c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x267f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_267f90:
    // 0x267f90: 0x100004f5  b           . + 4 + (0x4F5 << 2)
label_267f94:
    if (ctx->pc == 0x267F94u) {
        ctx->pc = 0x267F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F90u;
        // 0x267f94: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267F98u;
        goto label_267f98;
    }
    ctx->pc = 0x267F90u;
    {
        const bool branch_taken_0x267f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F90u;
        // 0x267f94: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f90) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x267F98u;
label_267f98:
    // 0x267f98: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x267f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267f9c:
    // 0x267f9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x267f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_267fa0:
    // 0x267fa0: 0x90a2000a  lbu         $v0, 0xA($a1)
    ctx->pc = 0x267fa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
label_267fa4:
    // 0x267fa4: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
label_267fa8:
    if (ctx->pc == 0x267FA8u) {
        ctx->pc = 0x267FACu;
        goto label_267fac;
    }
    ctx->pc = 0x267FA4u;
    {
        const bool branch_taken_0x267fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x267fa4) {
            ctx->pc = 0x268020u;
            goto label_268020;
        }
    }
    ctx->pc = 0x267FACu;
label_267fac:
    // 0x267fac: 0x90a2000b  lbu         $v0, 0xB($a1)
    ctx->pc = 0x267facu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
label_267fb0:
    // 0x267fb0: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
label_267fb4:
    if (ctx->pc == 0x267FB4u) {
        ctx->pc = 0x267FB8u;
        goto label_267fb8;
    }
    ctx->pc = 0x267FB0u;
    {
        const bool branch_taken_0x267fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x267fb0) {
            ctx->pc = 0x268020u;
            goto label_268020;
        }
    }
    ctx->pc = 0x267FB8u;
label_267fb8:
    // 0x267fb8: 0x90a2000c  lbu         $v0, 0xC($a1)
    ctx->pc = 0x267fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
label_267fbc:
    // 0x267fbc: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
label_267fc0:
    if (ctx->pc == 0x267FC0u) {
        ctx->pc = 0x267FC4u;
        goto label_267fc4;
    }
    ctx->pc = 0x267FBCu;
    {
        const bool branch_taken_0x267fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x267fbc) {
            ctx->pc = 0x268020u;
            goto label_268020;
        }
    }
    ctx->pc = 0x267FC4u;
label_267fc4:
    // 0x267fc4: 0x90a2000d  lbu         $v0, 0xD($a1)
    ctx->pc = 0x267fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13)));
label_267fc8:
    // 0x267fc8: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
label_267fcc:
    if (ctx->pc == 0x267FCCu) {
        ctx->pc = 0x267FD0u;
        goto label_267fd0;
    }
    ctx->pc = 0x267FC8u;
    {
        const bool branch_taken_0x267fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x267fc8) {
            ctx->pc = 0x268020u;
            goto label_268020;
        }
    }
    ctx->pc = 0x267FD0u;
label_267fd0:
    // 0x267fd0: 0x90a2000e  lbu         $v0, 0xE($a1)
    ctx->pc = 0x267fd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 14)));
label_267fd4:
    // 0x267fd4: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_267fd8:
    if (ctx->pc == 0x267FD8u) {
        ctx->pc = 0x267FDCu;
        goto label_267fdc;
    }
    ctx->pc = 0x267FD4u;
    {
        const bool branch_taken_0x267fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x267fd4) {
            ctx->pc = 0x268020u;
            goto label_268020;
        }
    }
    ctx->pc = 0x267FDCu;
label_267fdc:
    // 0x267fdc: 0x90a2000f  lbu         $v0, 0xF($a1)
    ctx->pc = 0x267fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 15)));
label_267fe0:
    // 0x267fe0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_267fe4:
    if (ctx->pc == 0x267FE4u) {
        ctx->pc = 0x267FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FE0u;
        // 0x267fe4: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267FE8u;
        goto label_267fe8;
    }
    ctx->pc = 0x267FE0u;
    {
        const bool branch_taken_0x267fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x267FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FE0u;
        // 0x267fe4: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267fe0) {
            ctx->pc = 0x268020u;
            goto label_268020;
        }
    }
    ctx->pc = 0x267FE8u;
label_267fe8:
    // 0x267fe8: 0xc049522  jal         func_125488
label_267fec:
    if (ctx->pc == 0x267FECu) {
        ctx->pc = 0x267FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FE8u;
        // 0x267fec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267FF0u;
        goto label_267ff0;
    }
    ctx->pc = 0x267FE8u;
    SET_GPR_U32(ctx, 31, 0x267FF0u);
    ctx->pc = 0x267FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267FE8u;
    // 0x267fec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x267FE8u, 0x267FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267FF0u;
label_267ff0:
    // 0x267ff0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x267ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_267ff4:
    // 0x267ff4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x267ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_267ff8:
    // 0x267ff8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x267ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_267ffc:
    // 0x267ffc: 0x97a50154  lhu         $a1, 0x154($sp)
    ctx->pc = 0x267ffcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 340)));
label_268000:
    // 0x268000: 0x97a60152  lhu         $a2, 0x152($sp)
    ctx->pc = 0x268000u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 338)));
label_268004:
    // 0x268004: 0x93a70157  lbu         $a3, 0x157($sp)
    ctx->pc = 0x268004u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 343)));
label_268008:
    // 0x268008: 0x93a80156  lbu         $t0, 0x156($sp)
    ctx->pc = 0x268008u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 342)));
label_26800c:
    // 0x26800c: 0x97a90158  lhu         $t1, 0x158($sp)
    ctx->pc = 0x26800cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 344)));
label_268010:
    // 0x268010: 0xc09cf10  jal         func_273C40
label_268014:
    if (ctx->pc == 0x268014u) {
        ctx->pc = 0x268014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268010u;
        // 0x268014: 0x97a40150  lhu         $a0, 0x150($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268018u;
        goto label_268018;
    }
    ctx->pc = 0x268010u;
    SET_GPR_U32(ctx, 31, 0x268018u);
    ctx->pc = 0x268014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268010u;
    // 0x268014: 0x97a40150  lhu         $a0, 0x150($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273C40u, 0x268010u, 0x268018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268018u;
label_268018:
    // 0x268018: 0x1000000f  b           . + 4 + (0xF << 2)
label_26801c:
    if (ctx->pc == 0x26801Cu) {
        ctx->pc = 0x268020u;
        goto label_268020;
    }
    ctx->pc = 0x268018u;
    {
        const bool branch_taken_0x268018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268018) {
            ctx->pc = 0x268058u;
            goto label_268058;
        }
    }
    ctx->pc = 0x268020u;
label_268020:
    // 0x268020: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268024:
    // 0x268024: 0xc049522  jal         func_125488
label_268028:
    if (ctx->pc == 0x268028u) {
        ctx->pc = 0x268028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268024u;
        // 0x268028: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26802Cu;
        goto label_26802c;
    }
    ctx->pc = 0x268024u;
    SET_GPR_U32(ctx, 31, 0x26802Cu);
    ctx->pc = 0x268028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268024u;
    // 0x268028: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268024u, 0x26802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26802Cu;
label_26802c:
    // 0x26802c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x26802cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268030:
    // 0x268030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268034:
    // 0x268034: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x268034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268038:
    // 0x268038: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x268038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26803c:
    // 0x26803c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x26803cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_268040:
    // 0x268040: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268044:
    // 0x268044: 0x97a40150  lhu         $a0, 0x150($sp)
    ctx->pc = 0x268044u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_268048:
    // 0x268048: 0x97a50154  lhu         $a1, 0x154($sp)
    ctx->pc = 0x268048u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 340)));
label_26804c:
    // 0x26804c: 0xc09cf10  jal         func_273C40
label_268050:
    if (ctx->pc == 0x268050u) {
        ctx->pc = 0x268050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26804Cu;
        // 0x268050: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268054u;
        goto label_268054;
    }
    ctx->pc = 0x26804Cu;
    SET_GPR_U32(ctx, 31, 0x268054u);
    ctx->pc = 0x268050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26804Cu;
    // 0x268050: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273C40u, 0x26804Cu, 0x268054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268054u;
label_268054:
    // 0x268054: 0x0  nop
    ctx->pc = 0x268054u;
    // NOP
label_268058:
    // 0x268058: 0x100004c5  b           . + 4 + (0x4C5 << 2)
label_26805c:
    if (ctx->pc == 0x26805Cu) {
        ctx->pc = 0x26805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268058u;
        // 0x26805c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268060u;
        goto label_268060;
    }
    ctx->pc = 0x268058u;
    {
        const bool branch_taken_0x268058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268058u;
        // 0x26805c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268058) {
            ctx->pc = 0x269370u;
            goto label_269370;
        }
    }
    ctx->pc = 0x268060u;
label_268060:
    // 0x268060: 0xc09cfa4  jal         func_273E90
label_268064:
    if (ctx->pc == 0x268064u) {
        ctx->pc = 0x268068u;
        goto label_268068;
    }
    ctx->pc = 0x268060u;
    SET_GPR_U32(ctx, 31, 0x268068u);
    ctx->pc = 0x273E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273E90u, 0x268060u, 0x268068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268068u;
label_268068:
    // 0x268068: 0x100004bf  b           . + 4 + (0x4BF << 2)
label_26806c:
    if (ctx->pc == 0x26806Cu) {
        ctx->pc = 0x268070u;
        goto label_268070;
    }
    ctx->pc = 0x268068u;
    {
        const bool branch_taken_0x268068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268068) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268070u;
label_268070:
    // 0x268070: 0xc09cfd4  jal         func_273F50
label_268074:
    if (ctx->pc == 0x268074u) {
        ctx->pc = 0x268078u;
        goto label_268078;
    }
    ctx->pc = 0x268070u;
    SET_GPR_U32(ctx, 31, 0x268078u);
    ctx->pc = 0x273F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273F50u, 0x268070u, 0x268078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268078u;
label_268078:
    // 0x268078: 0x104004bb  beqz        $v0, . + 4 + (0x4BB << 2)
label_26807c:
    if (ctx->pc == 0x26807Cu) {
        ctx->pc = 0x26807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268078u;
        // 0x26807c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268080u;
        goto label_268080;
    }
    ctx->pc = 0x268078u;
    {
        const bool branch_taken_0x268078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268078u;
        // 0x26807c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268078) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268080u;
label_268080:
    // 0x268080: 0xc099afc  jal         func_266BF0
label_268084:
    if (ctx->pc == 0x268084u) {
        ctx->pc = 0x268084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268080u;
        // 0x268084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268088u;
        goto label_268088;
    }
    ctx->pc = 0x268080u;
    SET_GPR_U32(ctx, 31, 0x268088u);
    ctx->pc = 0x268084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268080u;
    // 0x268084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266BF0u, 0x268080u, 0x268088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268088u;
label_268088:
    // 0x268088: 0x100004b9  b           . + 4 + (0x4B9 << 2)
label_26808c:
    if (ctx->pc == 0x26808Cu) {
        ctx->pc = 0x26808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268088u;
        // 0x26808c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268090u;
        goto label_268090;
    }
    ctx->pc = 0x268088u;
    {
        const bool branch_taken_0x268088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268088u;
        // 0x26808c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268088) {
            ctx->pc = 0x269370u;
            goto label_269370;
        }
    }
    ctx->pc = 0x268090u;
label_268090:
    // 0x268090: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268094:
    // 0x268094: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268098:
    // 0x268098: 0xc049522  jal         func_125488
label_26809c:
    if (ctx->pc == 0x26809Cu) {
        ctx->pc = 0x26809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268098u;
        // 0x26809c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2680A0u;
        goto label_2680a0;
    }
    ctx->pc = 0x268098u;
    SET_GPR_U32(ctx, 31, 0x2680A0u);
    ctx->pc = 0x26809Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268098u;
    // 0x26809c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268098u, 0x2680A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2680A0u;
label_2680a0:
    // 0x2680a0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2680a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2680a4:
    // 0x2680a4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2680a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_2680a8:
    // 0x2680a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2680a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2680ac:
    // 0x2680ac: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2680acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2680b0:
    // 0x2680b0: 0x97a5015c  lhu         $a1, 0x15C($sp)
    ctx->pc = 0x2680b0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 348)));
label_2680b4:
    // 0x2680b4: 0xc0ce208  jal         func_338820
label_2680b8:
    if (ctx->pc == 0x2680B8u) {
        ctx->pc = 0x2680B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680B4u;
        // 0x2680b8: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2680BCu;
        goto label_2680bc;
    }
    ctx->pc = 0x2680B4u;
    SET_GPR_U32(ctx, 31, 0x2680BCu);
    ctx->pc = 0x2680B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2680B4u;
    // 0x2680b8: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338820u, 0x2680B4u, 0x2680BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2680BCu;
label_2680bc:
    // 0x2680bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2680bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2680c0:
    // 0x2680c0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2680c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2680c4:
    // 0x2680c4: 0x106204a8  beq         $v1, $v0, . + 4 + (0x4A8 << 2)
label_2680c8:
    if (ctx->pc == 0x2680C8u) {
        ctx->pc = 0x2680C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680C4u;
        // 0x2680c8: 0x27a300f0  addiu       $v1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2680CCu;
        goto label_2680cc;
    }
    ctx->pc = 0x2680C4u;
    {
        const bool branch_taken_0x2680c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2680C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680C4u;
        // 0x2680c8: 0x27a300f0  addiu       $v1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680c4) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2680CCu;
label_2680cc:
    // 0x2680cc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2680d0:
    if (ctx->pc == 0x2680D0u) {
        ctx->pc = 0x2680D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680CCu;
        // 0x2680d0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2680D4u;
        goto label_2680d4;
    }
    ctx->pc = 0x2680CCu;
    {
        const bool branch_taken_0x2680cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2680D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680CCu;
        // 0x2680d0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680cc) {
            ctx->pc = 0x2680F0u;
            goto label_2680f0;
        }
    }
    ctx->pc = 0x2680D4u;
label_2680d4:
    // 0x2680d4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2680d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2680d8:
    // 0x2680d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2680d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2680dc:
    // 0x2680dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2680dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2680e0:
    // 0x2680e0: 0x0  nop
    ctx->pc = 0x2680e0u;
    // NOP
label_2680e4:
    // 0x2680e4: 0x0  nop
    ctx->pc = 0x2680e4u;
    // NOP
label_2680e8:
    // 0x2680e8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2680ec:
    if (ctx->pc == 0x2680ECu) {
        ctx->pc = 0x2680F0u;
        goto label_2680f0;
    }
    ctx->pc = 0x2680E8u;
    {
        const bool branch_taken_0x2680e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2680e8) {
            ctx->pc = 0x2680D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2680d4;
        }
    }
    ctx->pc = 0x2680F0u;
label_2680f0:
    // 0x2680f0: 0xc7a20150  lwc1        $f2, 0x150($sp)
    ctx->pc = 0x2680f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2680f4:
    // 0x2680f4: 0x87a5015e  lh          $a1, 0x15E($sp)
    ctx->pc = 0x2680f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 350)));
label_2680f8:
    // 0x2680f8: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x2680f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2680fc:
    // 0x2680fc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2680fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_268100:
    // 0x268100: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x268100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268104:
    // 0x268104: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x268104u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_268108:
    // 0x268108: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x268108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_26810c:
    // 0x26810c: 0xc09d040  jal         func_274100
label_268110:
    if (ctx->pc == 0x268110u) {
        ctx->pc = 0x268110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26810Cu;
        // 0x268110: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x268114u;
        goto label_268114;
    }
    ctx->pc = 0x26810Cu;
    SET_GPR_U32(ctx, 31, 0x268114u);
    ctx->pc = 0x268110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26810Cu;
    // 0x268110: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x274100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274100u, 0x26810Cu, 0x268114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268114u;
label_268114:
    // 0x268114: 0x10000494  b           . + 4 + (0x494 << 2)
label_268118:
    if (ctx->pc == 0x268118u) {
        ctx->pc = 0x26811Cu;
        goto label_26811c;
    }
    ctx->pc = 0x268114u;
    {
        const bool branch_taken_0x268114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268114) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26811Cu;
label_26811c:
    // 0x26811c: 0x0  nop
    ctx->pc = 0x26811cu;
    // NOP
label_268120:
    // 0x268120: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268124:
    // 0x268124: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268128:
    // 0x268128: 0xc049522  jal         func_125488
label_26812c:
    if (ctx->pc == 0x26812Cu) {
        ctx->pc = 0x26812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268128u;
        // 0x26812c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268130u;
        goto label_268130;
    }
    ctx->pc = 0x268128u;
    SET_GPR_U32(ctx, 31, 0x268130u);
    ctx->pc = 0x26812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268128u;
    // 0x26812c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268128u, 0x268130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268130u;
label_268130:
    // 0x268130: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268134:
    // 0x268134: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x268134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_268138:
    // 0x268138: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x268138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_26813c:
    // 0x26813c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x26813cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268140:
    // 0x268140: 0x97a50150  lhu         $a1, 0x150($sp)
    ctx->pc = 0x268140u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_268144:
    // 0x268144: 0xc0ce208  jal         func_338820
label_268148:
    if (ctx->pc == 0x268148u) {
        ctx->pc = 0x268148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268144u;
        // 0x268148: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26814Cu;
        goto label_26814c;
    }
    ctx->pc = 0x268144u;
    SET_GPR_U32(ctx, 31, 0x26814Cu);
    ctx->pc = 0x268148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268144u;
    // 0x268148: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338820u, 0x268144u, 0x26814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26814Cu;
label_26814c:
    // 0x26814c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26814cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_268150:
    // 0x268150: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x268150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_268154:
    // 0x268154: 0x14620484  bne         $v1, $v0, . + 4 + (0x484 << 2)
label_268158:
    if (ctx->pc == 0x268158u) {
        ctx->pc = 0x26815Cu;
        goto label_26815c;
    }
    ctx->pc = 0x268154u;
    {
        const bool branch_taken_0x268154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x268154) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26815Cu;
label_26815c:
    // 0x26815c: 0x87a50152  lh          $a1, 0x152($sp)
    ctx->pc = 0x26815cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 338)));
label_268160:
    // 0x268160: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x268160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_268164:
    // 0x268164: 0x248428b0  addiu       $a0, $a0, 0x28B0
    ctx->pc = 0x268164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
label_268168:
    // 0x268168: 0xc0e360c  jal         func_38D830
label_26816c:
    if (ctx->pc == 0x26816Cu) {
        ctx->pc = 0x26816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268168u;
        // 0x26816c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268170u;
        goto label_268170;
    }
    ctx->pc = 0x268168u;
    SET_GPR_U32(ctx, 31, 0x268170u);
    ctx->pc = 0x26816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268168u;
    // 0x26816c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x268168u, 0x268170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268170u;
label_268170:
    // 0x268170: 0x1000047d  b           . + 4 + (0x47D << 2)
label_268174:
    if (ctx->pc == 0x268174u) {
        ctx->pc = 0x268178u;
        goto label_268178;
    }
    ctx->pc = 0x268170u;
    {
        const bool branch_taken_0x268170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268170) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268178u;
label_268178:
    // 0x268178: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26817c:
    // 0x26817c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x26817cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268180:
    // 0x268180: 0xc049522  jal         func_125488
label_268184:
    if (ctx->pc == 0x268184u) {
        ctx->pc = 0x268184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268180u;
        // 0x268184: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268188u;
        goto label_268188;
    }
    ctx->pc = 0x268180u;
    SET_GPR_U32(ctx, 31, 0x268188u);
    ctx->pc = 0x268184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268180u;
    // 0x268184: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268180u, 0x268188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268188u;
label_268188:
    // 0x268188: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26818c:
    // 0x26818c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x26818cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_268190:
    // 0x268190: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268194:
    // 0x268194: 0x97a3015a  lhu         $v1, 0x15A($sp)
    ctx->pc = 0x268194u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 346)));
label_268198:
    // 0x268198: 0x87a2015c  lh          $v0, 0x15C($sp)
    ctx->pc = 0x268198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 348)));
label_26819c:
    // 0x26819c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26819cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2681a0:
    // 0x2681a0: 0x93a2015e  lbu         $v0, 0x15E($sp)
    ctx->pc = 0x2681a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 350)));
label_2681a4:
    // 0x2681a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2681a8:
    if (ctx->pc == 0x2681A8u) {
        ctx->pc = 0x2681A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681A4u;
        // 0x2681a8: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2681ACu;
        goto label_2681ac;
    }
    ctx->pc = 0x2681A4u;
    {
        const bool branch_taken_0x2681a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2681A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681A4u;
        // 0x2681a8: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2681a4) {
            ctx->pc = 0x2681B4u;
            goto label_2681b4;
        }
    }
    ctx->pc = 0x2681ACu;
label_2681ac:
    // 0x2681ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_2681b0:
    if (ctx->pc == 0x2681B0u) {
        ctx->pc = 0x2681B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681ACu;
        // 0x2681b0: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2681B4u;
        goto label_2681b4;
    }
    ctx->pc = 0x2681ACu;
    {
        const bool branch_taken_0x2681ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2681B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681ACu;
        // 0x2681b0: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2681ac) {
            ctx->pc = 0x2681B8u;
            goto label_2681b8;
        }
    }
    ctx->pc = 0x2681B4u;
label_2681b4:
    // 0x2681b4: 0x93a20154  lbu         $v0, 0x154($sp)
    ctx->pc = 0x2681b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 340)));
label_2681b8:
    // 0x2681b8: 0x93a40150  lbu         $a0, 0x150($sp)
    ctx->pc = 0x2681b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_2681bc:
    // 0x2681bc: 0x93a50151  lbu         $a1, 0x151($sp)
    ctx->pc = 0x2681bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 337)));
label_2681c0:
    // 0x2681c0: 0x93a60152  lbu         $a2, 0x152($sp)
    ctx->pc = 0x2681c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 338)));
label_2681c4:
    // 0x2681c4: 0x97a70156  lhu         $a3, 0x156($sp)
    ctx->pc = 0x2681c4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 342)));
label_2681c8:
    // 0x2681c8: 0x93a80153  lbu         $t0, 0x153($sp)
    ctx->pc = 0x2681c8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 339)));
label_2681cc:
    // 0x2681cc: 0x97aa0158  lhu         $t2, 0x158($sp)
    ctx->pc = 0x2681ccu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 344)));
label_2681d0:
    // 0x2681d0: 0x83ab0155  lb          $t3, 0x155($sp)
    ctx->pc = 0x2681d0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 341)));
label_2681d4:
    // 0x2681d4: 0xc0b8648  jal         func_2E1920
label_2681d8:
    if (ctx->pc == 0x2681D8u) {
        ctx->pc = 0x2681D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681D4u;
        // 0x2681d8: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2681DCu;
        goto label_2681dc;
    }
    ctx->pc = 0x2681D4u;
    SET_GPR_U32(ctx, 31, 0x2681DCu);
    ctx->pc = 0x2681D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2681D4u;
    // 0x2681d8: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1920u, 0x2681D4u, 0x2681DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681DCu;
label_2681dc:
    // 0x2681dc: 0x10000462  b           . + 4 + (0x462 << 2)
label_2681e0:
    if (ctx->pc == 0x2681E0u) {
        ctx->pc = 0x2681E4u;
        goto label_2681e4;
    }
    ctx->pc = 0x2681DCu;
    {
        const bool branch_taken_0x2681dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2681dc) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2681E4u;
label_2681e4:
    // 0x2681e4: 0x0  nop
    ctx->pc = 0x2681e4u;
    // NOP
label_2681e8:
    // 0x2681e8: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2681e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2681ec:
    // 0x2681ec: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2681ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2681f0:
    // 0x2681f0: 0xc049522  jal         func_125488
label_2681f4:
    if (ctx->pc == 0x2681F4u) {
        ctx->pc = 0x2681F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681F0u;
        // 0x2681f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2681F8u;
        goto label_2681f8;
    }
    ctx->pc = 0x2681F0u;
    SET_GPR_U32(ctx, 31, 0x2681F8u);
    ctx->pc = 0x2681F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2681F0u;
    // 0x2681f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2681F0u, 0x2681F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681F8u;
label_2681f8:
    // 0x2681f8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2681f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2681fc:
    // 0x2681fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2681fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_268200:
    // 0x268200: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268204:
    // 0x268204: 0x8f828ab0  lw          $v0, -0x7550($gp)
    ctx->pc = 0x268204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
label_268208:
    // 0x268208: 0x10400457  beqz        $v0, . + 4 + (0x457 << 2)
label_26820c:
    if (ctx->pc == 0x26820Cu) {
        ctx->pc = 0x268210u;
        goto label_268210;
    }
    ctx->pc = 0x268208u;
    {
        const bool branch_taken_0x268208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268208) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268210u;
label_268210:
    // 0x268210: 0xc0b88e4  jal         func_2E2390
label_268214:
    if (ctx->pc == 0x268214u) {
        ctx->pc = 0x268214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268210u;
        // 0x268214: 0x8fa40150  lw          $a0, 0x150($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268218u;
        goto label_268218;
    }
    ctx->pc = 0x268210u;
    SET_GPR_U32(ctx, 31, 0x268218u);
    ctx->pc = 0x268214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268210u;
    // 0x268214: 0x8fa40150  lw          $a0, 0x150($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2390u, 0x268210u, 0x268218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268218u;
label_268218:
    // 0x268218: 0x10000453  b           . + 4 + (0x453 << 2)
label_26821c:
    if (ctx->pc == 0x26821Cu) {
        ctx->pc = 0x268220u;
        goto label_268220;
    }
    ctx->pc = 0x268218u;
    {
        const bool branch_taken_0x268218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268218) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268220u;
label_268220:
    // 0x268220: 0x96020048  lhu         $v0, 0x48($s0)
    ctx->pc = 0x268220u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
label_268224:
    // 0x268224: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x268224u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_268228:
    // 0x268228: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_26822c:
    if (ctx->pc == 0x26822Cu) {
        ctx->pc = 0x268230u;
        goto label_268230;
    }
    ctx->pc = 0x268228u;
    {
        const bool branch_taken_0x268228 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x268228) {
            ctx->pc = 0x268258u;
            goto label_268258;
        }
    }
    ctx->pc = 0x268230u;
label_268230:
    // 0x268230: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268234:
    // 0x268234: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268238:
    // 0x268238: 0xc049522  jal         func_125488
label_26823c:
    if (ctx->pc == 0x26823Cu) {
        ctx->pc = 0x26823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268238u;
        // 0x26823c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268240u;
        goto label_268240;
    }
    ctx->pc = 0x268238u;
    SET_GPR_U32(ctx, 31, 0x268240u);
    ctx->pc = 0x26823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268238u;
    // 0x26823c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268238u, 0x268240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268240u;
label_268240:
    // 0x268240: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268244:
    // 0x268244: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x268244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_268248:
    // 0x268248: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_26824c:
    // 0x26824c: 0x1000000a  b           . + 4 + (0xA << 2)
label_268250:
    if (ctx->pc == 0x268250u) {
        ctx->pc = 0x268250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26824Cu;
        // 0x268250: 0xafa00168  sw          $zero, 0x168($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268254u;
        goto label_268254;
    }
    ctx->pc = 0x26824Cu;
    {
        const bool branch_taken_0x26824c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26824Cu;
        // 0x268250: 0xafa00168  sw          $zero, 0x168($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26824c) {
            ctx->pc = 0x268278u;
            goto label_268278;
        }
    }
    ctx->pc = 0x268254u;
label_268254:
    // 0x268254: 0x0  nop
    ctx->pc = 0x268254u;
    // NOP
label_268258:
    // 0x268258: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26825c:
    // 0x26825c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x26825cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268260:
    // 0x268260: 0xc049522  jal         func_125488
label_268264:
    if (ctx->pc == 0x268264u) {
        ctx->pc = 0x268264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268260u;
        // 0x268264: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268268u;
        goto label_268268;
    }
    ctx->pc = 0x268260u;
    SET_GPR_U32(ctx, 31, 0x268268u);
    ctx->pc = 0x268264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268260u;
    // 0x268264: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268260u, 0x268268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268268u;
label_268268:
    // 0x268268: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26826c:
    // 0x26826c: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x26826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_268270:
    // 0x268270: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268274:
    // 0x268274: 0x0  nop
    ctx->pc = 0x268274u;
    // NOP
label_268278:
    // 0x268278: 0x8f828ab0  lw          $v0, -0x7550($gp)
    ctx->pc = 0x268278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
label_26827c:
    // 0x26827c: 0x1040043a  beqz        $v0, . + 4 + (0x43A << 2)
label_268280:
    if (ctx->pc == 0x268280u) {
        ctx->pc = 0x268280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26827Cu;
        // 0x268280: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268284u;
        goto label_268284;
    }
    ctx->pc = 0x26827Cu;
    {
        const bool branch_taken_0x26827c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26827Cu;
        // 0x268280: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26827c) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268284u;
label_268284:
    // 0x268284: 0xc0b8918  jal         func_2E2460
label_268288:
    if (ctx->pc == 0x268288u) {
        ctx->pc = 0x26828Cu;
        goto label_26828c;
    }
    ctx->pc = 0x268284u;
    SET_GPR_U32(ctx, 31, 0x26828Cu);
    ctx->pc = 0x2E2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2460u, 0x268284u, 0x26828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26828Cu;
label_26828c:
    // 0x26828c: 0x10000436  b           . + 4 + (0x436 << 2)
label_268290:
    if (ctx->pc == 0x268290u) {
        ctx->pc = 0x268294u;
        goto label_268294;
    }
    ctx->pc = 0x26828Cu;
    {
        const bool branch_taken_0x26828c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26828c) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268294u;
label_268294:
    // 0x268294: 0x0  nop
    ctx->pc = 0x268294u;
    // NOP
label_268298:
    // 0x268298: 0xc0b879c  jal         func_2E1E70
label_26829c:
    if (ctx->pc == 0x26829Cu) {
        ctx->pc = 0x2682A0u;
        goto label_2682a0;
    }
    ctx->pc = 0x268298u;
    SET_GPR_U32(ctx, 31, 0x2682A0u);
    ctx->pc = 0x2E1E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1E70u, 0x268298u, 0x2682A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2682A0u;
label_2682a0:
    // 0x2682a0: 0xc0b8628  jal         func_2E18A0
label_2682a4:
    if (ctx->pc == 0x2682A4u) {
        ctx->pc = 0x2682A8u;
        goto label_2682a8;
    }
    ctx->pc = 0x2682A0u;
    SET_GPR_U32(ctx, 31, 0x2682A8u);
    ctx->pc = 0x2E18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E18A0u, 0x2682A0u, 0x2682A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2682A8u;
label_2682a8:
    // 0x2682a8: 0x1000042f  b           . + 4 + (0x42F << 2)
label_2682ac:
    if (ctx->pc == 0x2682ACu) {
        ctx->pc = 0x2682B0u;
        goto label_2682b0;
    }
    ctx->pc = 0x2682A8u;
    {
        const bool branch_taken_0x2682a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2682a8) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2682B0u;
label_2682b0:
    // 0x2682b0: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2682b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2682b4:
    // 0x2682b4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2682b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2682b8:
    // 0x2682b8: 0xc049522  jal         func_125488
label_2682bc:
    if (ctx->pc == 0x2682BCu) {
        ctx->pc = 0x2682BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682B8u;
        // 0x2682bc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2682C0u;
        goto label_2682c0;
    }
    ctx->pc = 0x2682B8u;
    SET_GPR_U32(ctx, 31, 0x2682C0u);
    ctx->pc = 0x2682BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2682B8u;
    // 0x2682bc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2682B8u, 0x2682C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2682C0u;
label_2682c0:
    // 0x2682c0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2682c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2682c4:
    // 0x2682c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2682c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2682c8:
    // 0x2682c8: 0x10000427  b           . + 4 + (0x427 << 2)
label_2682cc:
    if (ctx->pc == 0x2682CCu) {
        ctx->pc = 0x2682CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682C8u;
        // 0x2682cc: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2682D0u;
        goto label_2682d0;
    }
    ctx->pc = 0x2682C8u;
    {
        const bool branch_taken_0x2682c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2682CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682C8u;
        // 0x2682cc: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2682c8) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2682D0u;
label_2682d0:
    // 0x2682d0: 0xc0b87a4  jal         func_2E1E90
label_2682d4:
    if (ctx->pc == 0x2682D4u) {
        ctx->pc = 0x2682D8u;
        goto label_2682d8;
    }
    ctx->pc = 0x2682D0u;
    SET_GPR_U32(ctx, 31, 0x2682D8u);
    ctx->pc = 0x2E1E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1E90u, 0x2682D0u, 0x2682D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2682D8u;
label_2682d8:
    // 0x2682d8: 0x10000423  b           . + 4 + (0x423 << 2)
label_2682dc:
    if (ctx->pc == 0x2682DCu) {
        ctx->pc = 0x2682E0u;
        goto label_2682e0;
    }
    ctx->pc = 0x2682D8u;
    {
        const bool branch_taken_0x2682d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2682d8) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2682E0u;
label_2682e0:
    // 0x2682e0: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2682e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2682e4:
    // 0x2682e4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2682e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2682e8:
    // 0x2682e8: 0xc049522  jal         func_125488
label_2682ec:
    if (ctx->pc == 0x2682ECu) {
        ctx->pc = 0x2682ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682E8u;
        // 0x2682ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2682F0u;
        goto label_2682f0;
    }
    ctx->pc = 0x2682E8u;
    SET_GPR_U32(ctx, 31, 0x2682F0u);
    ctx->pc = 0x2682ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2682E8u;
    // 0x2682ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2682E8u, 0x2682F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2682F0u;
label_2682f0:
    // 0x2682f0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2682f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2682f4:
    // 0x2682f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2682f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2682f8:
    // 0x2682f8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2682f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2682fc:
    // 0x2682fc: 0xc0b87c0  jal         func_2E1F00
label_268300:
    if (ctx->pc == 0x268300u) {
        ctx->pc = 0x268300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682FCu;
        // 0x268300: 0x93a40150  lbu         $a0, 0x150($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268304u;
        goto label_268304;
    }
    ctx->pc = 0x2682FCu;
    SET_GPR_U32(ctx, 31, 0x268304u);
    ctx->pc = 0x268300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2682FCu;
    // 0x268300: 0x93a40150  lbu         $a0, 0x150($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1F00u, 0x2682FCu, 0x268304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268304u;
label_268304:
    // 0x268304: 0x10000418  b           . + 4 + (0x418 << 2)
label_268308:
    if (ctx->pc == 0x268308u) {
        ctx->pc = 0x26830Cu;
        goto label_26830c;
    }
    ctx->pc = 0x268304u;
    {
        const bool branch_taken_0x268304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268304) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26830Cu;
label_26830c:
    // 0x26830c: 0x0  nop
    ctx->pc = 0x26830cu;
    // NOP
label_268310:
    // 0x268310: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268314:
    // 0x268314: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268318:
    // 0x268318: 0xc049522  jal         func_125488
label_26831c:
    if (ctx->pc == 0x26831Cu) {
        ctx->pc = 0x26831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268318u;
        // 0x26831c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268320u;
        goto label_268320;
    }
    ctx->pc = 0x268318u;
    SET_GPR_U32(ctx, 31, 0x268320u);
    ctx->pc = 0x26831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268318u;
    // 0x26831c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268318u, 0x268320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268320u;
label_268320:
    // 0x268320: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268324:
    // 0x268324: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x268324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_268328:
    // 0x268328: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_26832c:
    // 0x26832c: 0x97a20152  lhu         $v0, 0x152($sp)
    ctx->pc = 0x26832cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 338)));
label_268330:
    // 0x268330: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_268334:
    if (ctx->pc == 0x268334u) {
        ctx->pc = 0x268338u;
        goto label_268338;
    }
    ctx->pc = 0x268330u;
    {
        const bool branch_taken_0x268330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268330) {
            ctx->pc = 0x2683D0u;
            goto label_2683d0;
        }
    }
    ctx->pc = 0x268338u;
label_268338:
    // 0x268338: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_26833c:
    if (ctx->pc == 0x26833Cu) {
        ctx->pc = 0x26833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268338u;
        // 0x26833c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268340u;
        goto label_268340;
    }
    ctx->pc = 0x268338u;
    {
        const bool branch_taken_0x268338 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x26833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268338u;
        // 0x26833c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268338) {
            ctx->pc = 0x26834Cu;
            goto label_26834c;
        }
    }
    ctx->pc = 0x268340u;
label_268340:
    // 0x268340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_268344:
    // 0x268344: 0x10000007  b           . + 4 + (0x7 << 2)
label_268348:
    if (ctx->pc == 0x268348u) {
        ctx->pc = 0x268348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268344u;
        // 0x268348: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26834Cu;
        goto label_26834c;
    }
    ctx->pc = 0x268344u;
    {
        const bool branch_taken_0x268344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268344u;
        // 0x268348: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x268344) {
            ctx->pc = 0x268364u;
            goto label_268364;
        }
    }
    ctx->pc = 0x26834Cu;
label_26834c:
    // 0x26834c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26834cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_268350:
    // 0x268350: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x268350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_268354:
    // 0x268354: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x268354u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_268358:
    // 0x268358: 0x0  nop
    ctx->pc = 0x268358u;
    // NOP
label_26835c:
    // 0x26835c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x26835cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_268360:
    // 0x268360: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x268360u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_268364:
    // 0x268364: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x268364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_268368:
    // 0x268368: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x268368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_26836c:
    // 0x26836c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x26836cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_268370:
    // 0x268370: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x268370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_268374:
    // 0x268374: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x268374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_268378:
    // 0x268378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26837c:
    // 0x26837c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x26837cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_268380:
    // 0x268380: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x268380u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_268384:
    // 0x268384: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x268384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_268388:
    // 0x268388: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_26838c:
    if (ctx->pc == 0x26838Cu) {
        ctx->pc = 0x268390u;
        goto label_268390;
    }
    ctx->pc = 0x268388u;
    {
        const bool branch_taken_0x268388 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x268388) {
            ctx->pc = 0x2683A0u;
            goto label_2683a0;
        }
    }
    ctx->pc = 0x268390u;
label_268390:
    // 0x268390: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x268390u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_268394:
    // 0x268394: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x268394u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_268398:
    // 0x268398: 0x10000008  b           . + 4 + (0x8 << 2)
label_26839c:
    if (ctx->pc == 0x26839Cu) {
        ctx->pc = 0x26839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268398u;
        // 0x26839c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2683A0u;
        goto label_2683a0;
    }
    ctx->pc = 0x268398u;
    {
        const bool branch_taken_0x268398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268398u;
        // 0x26839c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268398) {
            ctx->pc = 0x2683BCu;
            goto label_2683bc;
        }
    }
    ctx->pc = 0x2683A0u;
label_2683a0:
    // 0x2683a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2683a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2683a4:
    // 0x2683a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2683a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2683a8:
    // 0x2683a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2683a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2683ac:
    // 0x2683ac: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2683acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2683b0:
    // 0x2683b0: 0x0  nop
    ctx->pc = 0x2683b0u;
    // NOP
label_2683b4:
    // 0x2683b4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2683b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2683b8:
    // 0x2683b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2683b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2683bc:
    // 0x2683bc: 0xc096974  jal         func_25A5D0
label_2683c0:
    if (ctx->pc == 0x2683C0u) {
        ctx->pc = 0x2683C4u;
        goto label_2683c4;
    }
    ctx->pc = 0x2683BCu;
    SET_GPR_U32(ctx, 31, 0x2683C4u);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2683BCu, 0x2683C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2683C4u;
label_2683c4:
    // 0x2683c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2683c8:
    if (ctx->pc == 0x2683C8u) {
        ctx->pc = 0x2683CCu;
        goto label_2683cc;
    }
    ctx->pc = 0x2683C4u;
    {
        const bool branch_taken_0x2683c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2683c4) {
            ctx->pc = 0x2683D8u;
            goto label_2683d8;
        }
    }
    ctx->pc = 0x2683CCu;
label_2683cc:
    // 0x2683cc: 0x0  nop
    ctx->pc = 0x2683ccu;
    // NOP
label_2683d0:
    // 0x2683d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2683d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2683d4:
    // 0x2683d4: 0x0  nop
    ctx->pc = 0x2683d4u;
    // NOP
label_2683d8:
    // 0x2683d8: 0x93a40150  lbu         $a0, 0x150($sp)
    ctx->pc = 0x2683d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_2683dc:
    // 0x2683dc: 0xc0b8838  jal         func_2E20E0
label_2683e0:
    if (ctx->pc == 0x2683E0u) {
        ctx->pc = 0x2683E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683DCu;
        // 0x2683e0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2683E4u;
        goto label_2683e4;
    }
    ctx->pc = 0x2683DCu;
    SET_GPR_U32(ctx, 31, 0x2683E4u);
    ctx->pc = 0x2683E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2683DCu;
    // 0x2683e0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E20E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E20E0u, 0x2683DCu, 0x2683E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2683E4u;
label_2683e4:
    // 0x2683e4: 0x100003e0  b           . + 4 + (0x3E0 << 2)
label_2683e8:
    if (ctx->pc == 0x2683E8u) {
        ctx->pc = 0x2683ECu;
        goto label_2683ec;
    }
    ctx->pc = 0x2683E4u;
    {
        const bool branch_taken_0x2683e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2683e4) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2683ECu;
label_2683ec:
    // 0x2683ec: 0x0  nop
    ctx->pc = 0x2683ecu;
    // NOP
label_2683f0:
    // 0x2683f0: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2683f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2683f4:
    // 0x2683f4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2683f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2683f8:
    // 0x2683f8: 0xc049522  jal         func_125488
label_2683fc:
    if (ctx->pc == 0x2683FCu) {
        ctx->pc = 0x2683FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683F8u;
        // 0x2683fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268400u;
        goto label_268400;
    }
    ctx->pc = 0x2683F8u;
    SET_GPR_U32(ctx, 31, 0x268400u);
    ctx->pc = 0x2683FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2683F8u;
    // 0x2683fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2683F8u, 0x268400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268400u;
label_268400:
    // 0x268400: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268404:
    // 0x268404: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x268404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_268408:
    // 0x268408: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_26840c:
    // 0x26840c: 0xc0b8894  jal         func_2E2250
label_268410:
    if (ctx->pc == 0x268410u) {
        ctx->pc = 0x268410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26840Cu;
        // 0x268410: 0x93a40150  lbu         $a0, 0x150($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268414u;
        goto label_268414;
    }
    ctx->pc = 0x26840Cu;
    SET_GPR_U32(ctx, 31, 0x268414u);
    ctx->pc = 0x268410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26840Cu;
    // 0x268410: 0x93a40150  lbu         $a0, 0x150($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2250u, 0x26840Cu, 0x268414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268414u;
label_268414:
    // 0x268414: 0x100003d4  b           . + 4 + (0x3D4 << 2)
label_268418:
    if (ctx->pc == 0x268418u) {
        ctx->pc = 0x26841Cu;
        goto label_26841c;
    }
    ctx->pc = 0x268414u;
    {
        const bool branch_taken_0x268414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268414) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26841Cu;
label_26841c:
    // 0x26841c: 0x0  nop
    ctx->pc = 0x26841cu;
    // NOP
label_268420:
    // 0x268420: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x268420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
label_268424:
    // 0x268424: 0x106003d0  beqz        $v1, . + 4 + (0x3D0 << 2)
label_268428:
    if (ctx->pc == 0x268428u) {
        ctx->pc = 0x26842Cu;
        goto label_26842c;
    }
    ctx->pc = 0x268424u;
    {
        const bool branch_taken_0x268424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x268424) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26842Cu;
label_26842c:
    // 0x26842c: 0x90620033  lbu         $v0, 0x33($v1)
    ctx->pc = 0x26842cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 51)));
label_268430:
    // 0x268430: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x268430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_268434:
    // 0x268434: 0x100003cc  b           . + 4 + (0x3CC << 2)
label_268438:
    if (ctx->pc == 0x268438u) {
        ctx->pc = 0x268438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268434u;
        // 0x268438: 0xa0620033  sb          $v0, 0x33($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 51), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26843Cu;
        goto label_26843c;
    }
    ctx->pc = 0x268434u;
    {
        const bool branch_taken_0x268434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268434u;
        // 0x268438: 0xa0620033  sb          $v0, 0x33($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 51), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268434) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26843Cu;
label_26843c:
    // 0x26843c: 0x0  nop
    ctx->pc = 0x26843cu;
    // NOP
label_268440:
    // 0x268440: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268444:
    // 0x268444: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268448:
    // 0x268448: 0xc049522  jal         func_125488
label_26844c:
    if (ctx->pc == 0x26844Cu) {
        ctx->pc = 0x26844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268448u;
        // 0x26844c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268450u;
        goto label_268450;
    }
    ctx->pc = 0x268448u;
    SET_GPR_U32(ctx, 31, 0x268450u);
    ctx->pc = 0x26844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268448u;
    // 0x26844c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268448u, 0x268450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268450u;
label_268450:
    // 0x268450: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268454:
    // 0x268454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268458:
    // 0x268458: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x268458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_26845c:
    // 0x26845c: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x26845cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_268460:
    // 0x268460: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x268460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_268464:
    // 0x268464: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268468:
    // 0x268468: 0xc7a50154  lwc1        $f5, 0x154($sp)
    ctx->pc = 0x268468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_26846c:
    // 0x26846c: 0x97a40150  lhu         $a0, 0x150($sp)
    ctx->pc = 0x26846cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_268470:
    // 0x268470: 0xc7a40158  lwc1        $f4, 0x158($sp)
    ctx->pc = 0x268470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_268474:
    // 0x268474: 0xc7a3015c  lwc1        $f3, 0x15C($sp)
    ctx->pc = 0x268474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_268478:
    // 0x268478: 0xc7a20160  lwc1        $f2, 0x160($sp)
    ctx->pc = 0x268478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26847c:
    // 0x26847c: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x26847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_268480:
    // 0x268480: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x268480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268484:
    // 0x268484: 0xe7a500e0  swc1        $f5, 0xE0($sp)
    ctx->pc = 0x268484u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_268488:
    // 0x268488: 0xe7a400e4  swc1        $f4, 0xE4($sp)
    ctx->pc = 0x268488u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_26848c:
    // 0x26848c: 0xe7a300e8  swc1        $f3, 0xE8($sp)
    ctx->pc = 0x26848cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_268490:
    // 0x268490: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x268490u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_268494:
    // 0x268494: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x268494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_268498:
    // 0x268498: 0xc099ab4  jal         func_266AD0
label_26849c:
    if (ctx->pc == 0x26849Cu) {
        ctx->pc = 0x26849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268498u;
        // 0x26849c: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2684A0u;
        goto label_2684a0;
    }
    ctx->pc = 0x268498u;
    SET_GPR_U32(ctx, 31, 0x2684A0u);
    ctx->pc = 0x26849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268498u;
    // 0x26849c: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x266AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266AD0u, 0x268498u, 0x2684A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2684A0u;
label_2684a0:
    // 0x2684a0: 0x104003b1  beqz        $v0, . + 4 + (0x3B1 << 2)
label_2684a4:
    if (ctx->pc == 0x2684A4u) {
        ctx->pc = 0x2684A8u;
        goto label_2684a8;
    }
    ctx->pc = 0x2684A0u;
    {
        const bool branch_taken_0x2684a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2684a0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2684A8u;
label_2684a8:
    // 0x2684a8: 0x97a40152  lhu         $a0, 0x152($sp)
    ctx->pc = 0x2684a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 338)));
label_2684ac:
    // 0x2684ac: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2684acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2684b0:
    // 0x2684b0: 0x108303ad  beq         $a0, $v1, . + 4 + (0x3AD << 2)
label_2684b4:
    if (ctx->pc == 0x2684B4u) {
        ctx->pc = 0x2684B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684B0u;
        // 0x2684b4: 0x28810010  slti        $at, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2684B8u;
        goto label_2684b8;
    }
    ctx->pc = 0x2684B0u;
    {
        const bool branch_taken_0x2684b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2684B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684B0u;
        // 0x2684b4: 0x28810010  slti        $at, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2684b0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2684B8u;
label_2684b8:
    // 0x2684b8: 0x102003ab  beqz        $at, . + 4 + (0x3AB << 2)
label_2684bc:
    if (ctx->pc == 0x2684BCu) {
        ctx->pc = 0x2684BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684B8u;
        // 0x2684bc: 0x3c03008c  lui         $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2684C0u;
        goto label_2684c0;
    }
    ctx->pc = 0x2684B8u;
    {
        const bool branch_taken_0x2684b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2684BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684B8u;
        // 0x2684bc: 0x3c03008c  lui         $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2684b8) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2684C0u;
label_2684c0:
    // 0x2684c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2684c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2684c4:
    // 0x2684c4: 0x24630470  addiu       $v1, $v1, 0x470
    ctx->pc = 0x2684c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1136));
label_2684c8:
    // 0x2684c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2684c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2684cc:
    // 0x2684cc: 0x100003a6  b           . + 4 + (0x3A6 << 2)
label_2684d0:
    if (ctx->pc == 0x2684D0u) {
        ctx->pc = 0x2684D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684CCu;
        // 0x2684d0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2684D4u;
        goto label_2684d4;
    }
    ctx->pc = 0x2684CCu;
    {
        const bool branch_taken_0x2684cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2684D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684CCu;
        // 0x2684d0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2684cc) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2684D4u;
label_2684d4:
    // 0x2684d4: 0x0  nop
    ctx->pc = 0x2684d4u;
    // NOP
label_2684d8:
    // 0x2684d8: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2684d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2684dc:
    // 0x2684dc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2684dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2684e0:
    // 0x2684e0: 0xc049522  jal         func_125488
label_2684e4:
    if (ctx->pc == 0x2684E4u) {
        ctx->pc = 0x2684E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684E0u;
        // 0x2684e4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2684E8u;
        goto label_2684e8;
    }
    ctx->pc = 0x2684E0u;
    SET_GPR_U32(ctx, 31, 0x2684E8u);
    ctx->pc = 0x2684E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2684E0u;
    // 0x2684e4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2684E0u, 0x2684E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2684E8u;
label_2684e8:
    // 0x2684e8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2684e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2684ec:
    // 0x2684ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2684ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2684f0:
    // 0x2684f0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2684f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_2684f4:
    // 0x2684f4: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2684f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_2684f8:
    // 0x2684f8: 0x97a30150  lhu         $v1, 0x150($sp)
    ctx->pc = 0x2684f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_2684fc:
    // 0x2684fc: 0x1062039a  beq         $v1, $v0, . + 4 + (0x39A << 2)
label_268500:
    if (ctx->pc == 0x268500u) {
        ctx->pc = 0x268500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684FCu;
        // 0x268500: 0x28610010  slti        $at, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x268504u;
        goto label_268504;
    }
    ctx->pc = 0x2684FCu;
    {
        const bool branch_taken_0x2684fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684FCu;
        // 0x268500: 0x28610010  slti        $at, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2684fc) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268504u;
label_268504:
    // 0x268504: 0x10200398  beqz        $at, . + 4 + (0x398 << 2)
label_268508:
    if (ctx->pc == 0x268508u) {
        ctx->pc = 0x268508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268504u;
        // 0x268508: 0x3c02008c  lui         $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26850Cu;
        goto label_26850c;
    }
    ctx->pc = 0x268504u;
    {
        const bool branch_taken_0x268504 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x268508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268504u;
        // 0x268508: 0x3c02008c  lui         $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268504) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26850Cu;
label_26850c:
    // 0x26850c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26850cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_268510:
    // 0x268510: 0x24420470  addiu       $v0, $v0, 0x470
    ctx->pc = 0x268510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
label_268514:
    // 0x268514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_268518:
    // 0x268518: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x268518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26851c:
    // 0x26851c: 0x10800392  beqz        $a0, . + 4 + (0x392 << 2)
label_268520:
    if (ctx->pc == 0x268520u) {
        ctx->pc = 0x268524u;
        goto label_268524;
    }
    ctx->pc = 0x26851Cu;
    {
        const bool branch_taken_0x26851c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26851c) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268524u;
label_268524:
    // 0x268524: 0xc096c3c  jal         func_25B0F0
label_268528:
    if (ctx->pc == 0x268528u) {
        ctx->pc = 0x26852Cu;
        goto label_26852c;
    }
    ctx->pc = 0x268524u;
    SET_GPR_U32(ctx, 31, 0x26852Cu);
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x268524u, 0x26852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26852Cu;
label_26852c:
    // 0x26852c: 0x97a30150  lhu         $v1, 0x150($sp)
    ctx->pc = 0x26852cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_268530:
    // 0x268530: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x268530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
label_268534:
    // 0x268534: 0x24420470  addiu       $v0, $v0, 0x470
    ctx->pc = 0x268534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
label_268538:
    // 0x268538: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x268538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_26853c:
    // 0x26853c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26853cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_268540:
    // 0x268540: 0x10000389  b           . + 4 + (0x389 << 2)
label_268544:
    if (ctx->pc == 0x268544u) {
        ctx->pc = 0x268544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268540u;
        // 0x268544: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268548u;
        goto label_268548;
    }
    ctx->pc = 0x268540u;
    {
        const bool branch_taken_0x268540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268540u;
        // 0x268544: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268540) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268548u;
label_268548:
    // 0x268548: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26854c:
    // 0x26854c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x26854cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268550:
    // 0x268550: 0xc049522  jal         func_125488
label_268554:
    if (ctx->pc == 0x268554u) {
        ctx->pc = 0x268554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268550u;
        // 0x268554: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268558u;
        goto label_268558;
    }
    ctx->pc = 0x268550u;
    SET_GPR_U32(ctx, 31, 0x268558u);
    ctx->pc = 0x268554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268550u;
    // 0x268554: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268550u, 0x268558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268558u;
label_268558:
    // 0x268558: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26855c:
    // 0x26855c: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x26855cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
label_268560:
    // 0x268560: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x268560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_268564:
    // 0x268564: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268568:
    // 0x268568: 0x93a50150  lbu         $a1, 0x150($sp)
    ctx->pc = 0x268568u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_26856c:
    // 0x26856c: 0x93a60152  lbu         $a2, 0x152($sp)
    ctx->pc = 0x26856cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 338)));
label_268570:
    // 0x268570: 0xc05d6a0  jal         func_175A80
label_268574:
    if (ctx->pc == 0x268574u) {
        ctx->pc = 0x268574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268570u;
        // 0x268574: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268578u;
        goto label_268578;
    }
    ctx->pc = 0x268570u;
    SET_GPR_U32(ctx, 31, 0x268578u);
    ctx->pc = 0x268574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268570u;
    // 0x268574: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A80u, 0x268570u, 0x268578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268578u;
label_268578:
    // 0x268578: 0x1000037b  b           . + 4 + (0x37B << 2)
label_26857c:
    if (ctx->pc == 0x26857Cu) {
        ctx->pc = 0x268580u;
        goto label_268580;
    }
    ctx->pc = 0x268578u;
    {
        const bool branch_taken_0x268578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268578) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268580u;
label_268580:
    // 0x268580: 0xc09d968  jal         func_2765A0
label_268584:
    if (ctx->pc == 0x268584u) {
        ctx->pc = 0x268588u;
        goto label_268588;
    }
    ctx->pc = 0x268580u;
    SET_GPR_U32(ctx, 31, 0x268588u);
    ctx->pc = 0x2765A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2765A0u, 0x268580u, 0x268588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268588u;
label_268588:
    // 0x268588: 0x10400377  beqz        $v0, . + 4 + (0x377 << 2)
label_26858c:
    if (ctx->pc == 0x26858Cu) {
        ctx->pc = 0x268590u;
        goto label_268590;
    }
    ctx->pc = 0x268588u;
    {
        const bool branch_taken_0x268588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268588) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268590u;
label_268590:
    // 0x268590: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x268590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268594:
    // 0x268594: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x268594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_268598:
    // 0x268598: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x268598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_26859c:
    // 0x26859c: 0x10000374  b           . + 4 + (0x374 << 2)
label_2685a0:
    if (ctx->pc == 0x2685A0u) {
        ctx->pc = 0x2685A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26859Cu;
        // 0x2685a0: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2685A4u;
        goto label_2685a4;
    }
    ctx->pc = 0x26859Cu;
    {
        const bool branch_taken_0x26859c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2685A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26859Cu;
        // 0x2685a0: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26859c) {
            ctx->pc = 0x269370u;
            goto label_269370;
        }
    }
    ctx->pc = 0x2685A4u;
label_2685a4:
    // 0x2685a4: 0x0  nop
    ctx->pc = 0x2685a4u;
    // NOP
label_2685a8:
    // 0x2685a8: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2685a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2685ac:
    // 0x2685ac: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2685acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2685b0:
    // 0x2685b0: 0xc049522  jal         func_125488
label_2685b4:
    if (ctx->pc == 0x2685B4u) {
        ctx->pc = 0x2685B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685B0u;
        // 0x2685b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2685B8u;
        goto label_2685b8;
    }
    ctx->pc = 0x2685B0u;
    SET_GPR_U32(ctx, 31, 0x2685B8u);
    ctx->pc = 0x2685B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2685B0u;
    // 0x2685b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2685B0u, 0x2685B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2685B8u;
label_2685b8:
    // 0x2685b8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2685b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2685bc:
    // 0x2685bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2685bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2685c0:
    // 0x2685c0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2685c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2685c4:
    // 0x2685c4: 0xc0d36d4  jal         func_34DB50
label_2685c8:
    if (ctx->pc == 0x2685C8u) {
        ctx->pc = 0x2685C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685C4u;
        // 0x2685c8: 0x93a40150  lbu         $a0, 0x150($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2685CCu;
        goto label_2685cc;
    }
    ctx->pc = 0x2685C4u;
    SET_GPR_U32(ctx, 31, 0x2685CCu);
    ctx->pc = 0x2685C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2685C4u;
    // 0x2685c8: 0x93a40150  lbu         $a0, 0x150($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DB50u, 0x2685C4u, 0x2685CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2685CCu;
label_2685cc:
    // 0x2685cc: 0x10400366  beqz        $v0, . + 4 + (0x366 << 2)
label_2685d0:
    if (ctx->pc == 0x2685D0u) {
        ctx->pc = 0x2685D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685CCu;
        // 0x2685d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2685D4u;
        goto label_2685d4;
    }
    ctx->pc = 0x2685CCu;
    {
        const bool branch_taken_0x2685cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2685D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685CCu;
        // 0x2685d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2685cc) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2685D4u;
label_2685d4:
    // 0x2685d4: 0xc099afc  jal         func_266BF0
label_2685d8:
    if (ctx->pc == 0x2685D8u) {
        ctx->pc = 0x2685D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685D4u;
        // 0x2685d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2685DCu;
        goto label_2685dc;
    }
    ctx->pc = 0x2685D4u;
    SET_GPR_U32(ctx, 31, 0x2685DCu);
    ctx->pc = 0x2685D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2685D4u;
    // 0x2685d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266BF0u, 0x2685D4u, 0x2685DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2685DCu;
label_2685dc:
    // 0x2685dc: 0x10000364  b           . + 4 + (0x364 << 2)
label_2685e0:
    if (ctx->pc == 0x2685E0u) {
        ctx->pc = 0x2685E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685DCu;
        // 0x2685e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2685E4u;
        goto label_2685e4;
    }
    ctx->pc = 0x2685DCu;
    {
        const bool branch_taken_0x2685dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2685E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685DCu;
        // 0x2685e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2685dc) {
            ctx->pc = 0x269370u;
            goto label_269370;
        }
    }
    ctx->pc = 0x2685E4u;
label_2685e4:
    // 0x2685e4: 0x0  nop
    ctx->pc = 0x2685e4u;
    // NOP
label_2685e8:
    // 0x2685e8: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2685e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2685ec:
    // 0x2685ec: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2685ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2685f0:
    // 0x2685f0: 0xc049522  jal         func_125488
label_2685f4:
    if (ctx->pc == 0x2685F4u) {
        ctx->pc = 0x2685F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685F0u;
        // 0x2685f4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2685F8u;
        goto label_2685f8;
    }
    ctx->pc = 0x2685F0u;
    SET_GPR_U32(ctx, 31, 0x2685F8u);
    ctx->pc = 0x2685F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2685F0u;
    // 0x2685f4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2685F0u, 0x2685F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2685F8u;
label_2685f8:
    // 0x2685f8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2685f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2685fc:
    // 0x2685fc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2685fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_268600:
    // 0x268600: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x268600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_268604:
    // 0x268604: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268608:
    // 0x268608: 0x93a50151  lbu         $a1, 0x151($sp)
    ctx->pc = 0x268608u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 337)));
label_26860c:
    // 0x26860c: 0x97a20152  lhu         $v0, 0x152($sp)
    ctx->pc = 0x26860cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 338)));
label_268610:
    // 0x268610: 0x93a40150  lbu         $a0, 0x150($sp)
    ctx->pc = 0x268610u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_268614:
    // 0x268614: 0x8fa60154  lw          $a2, 0x154($sp)
    ctx->pc = 0x268614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_268618:
    // 0x268618: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x268618u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_26861c:
    // 0x26861c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x26861cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_268620:
    // 0x268620: 0xc0d35d4  jal         func_34D750
label_268624:
    if (ctx->pc == 0x268624u) {
        ctx->pc = 0x268624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268620u;
        // 0x268624: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268628u;
        goto label_268628;
    }
    ctx->pc = 0x268620u;
    SET_GPR_U32(ctx, 31, 0x268628u);
    ctx->pc = 0x268624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268620u;
    // 0x268624: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D750u, 0x268620u, 0x268628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268628u;
label_268628:
    // 0x268628: 0x1000034f  b           . + 4 + (0x34F << 2)
label_26862c:
    if (ctx->pc == 0x26862Cu) {
        ctx->pc = 0x268630u;
        goto label_268630;
    }
    ctx->pc = 0x268628u;
    {
        const bool branch_taken_0x268628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268628) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268630u;
label_268630:
    // 0x268630: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268634:
    // 0x268634: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268638:
    // 0x268638: 0xc049522  jal         func_125488
label_26863c:
    if (ctx->pc == 0x26863Cu) {
        ctx->pc = 0x26863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268638u;
        // 0x26863c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268640u;
        goto label_268640;
    }
    ctx->pc = 0x268638u;
    SET_GPR_U32(ctx, 31, 0x268640u);
    ctx->pc = 0x26863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268638u;
    // 0x26863c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268638u, 0x268640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268640u;
label_268640:
    // 0x268640: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268644:
    // 0x268644: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x268644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_268648:
    // 0x268648: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x268648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_26864c:
    // 0x26864c: 0xc0f5738  jal         func_3D5CE0
label_268650:
    if (ctx->pc == 0x268650u) {
        ctx->pc = 0x268650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26864Cu;
        // 0x268650: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268654u;
        goto label_268654;
    }
    ctx->pc = 0x26864Cu;
    SET_GPR_U32(ctx, 31, 0x268654u);
    ctx->pc = 0x268650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26864Cu;
    // 0x268650: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5CE0u, 0x26864Cu, 0x268654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268654u;
label_268654:
    // 0x268654: 0x10000344  b           . + 4 + (0x344 << 2)
label_268658:
    if (ctx->pc == 0x268658u) {
        ctx->pc = 0x26865Cu;
        goto label_26865c;
    }
    ctx->pc = 0x268654u;
    {
        const bool branch_taken_0x268654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268654) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26865Cu;
label_26865c:
    // 0x26865c: 0x0  nop
    ctx->pc = 0x26865cu;
    // NOP
label_268660:
    // 0x268660: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268664:
    // 0x268664: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268668:
    // 0x268668: 0xc049522  jal         func_125488
label_26866c:
    if (ctx->pc == 0x26866Cu) {
        ctx->pc = 0x26866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268668u;
        // 0x26866c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268670u;
        goto label_268670;
    }
    ctx->pc = 0x268668u;
    SET_GPR_U32(ctx, 31, 0x268670u);
    ctx->pc = 0x26866Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268668u;
    // 0x26866c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268668u, 0x268670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268670u;
label_268670:
    // 0x268670: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268674:
    // 0x268674: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x268674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_268678:
    // 0x268678: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x268678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_26867c:
    // 0x26867c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x26867cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268680:
    // 0x268680: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x268680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268684:
    // 0x268684: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x268684u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_268688:
    // 0x268688: 0x45000337  bc1f        . + 4 + (0x337 << 2)
label_26868c:
    if (ctx->pc == 0x26868Cu) {
        ctx->pc = 0x26868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268688u;
        // 0x26868c: 0x27b20154  addiu       $s2, $sp, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268690u;
        goto label_268690;
    }
    ctx->pc = 0x268688u;
    {
        const bool branch_taken_0x268688 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268688u;
        // 0x26868c: 0x27b20154  addiu       $s2, $sp, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268688) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268690u;
label_268690:
    // 0x268690: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x268690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268694:
    // 0x268694: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x268694u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_268698:
    // 0x268698: 0x45000333  bc1f        . + 4 + (0x333 << 2)
label_26869c:
    if (ctx->pc == 0x26869Cu) {
        ctx->pc = 0x26869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268698u;
        // 0x26869c: 0x27b10158  addiu       $s1, $sp, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2686A0u;
        goto label_2686a0;
    }
    ctx->pc = 0x268698u;
    {
        const bool branch_taken_0x268698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268698u;
        // 0x26869c: 0x27b10158  addiu       $s1, $sp, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268698) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2686A0u;
label_2686a0:
    // 0x2686a0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2686a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2686a4:
    // 0x2686a4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2686a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2686a8:
    // 0x2686a8: 0x4500032f  bc1f        . + 4 + (0x32F << 2)
label_2686ac:
    if (ctx->pc == 0x2686ACu) {
        ctx->pc = 0x2686ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686A8u;
        // 0x2686ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2686B0u;
        goto label_2686b0;
    }
    ctx->pc = 0x2686A8u;
    {
        const bool branch_taken_0x2686a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2686ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686A8u;
        // 0x2686ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2686a8) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2686B0u;
label_2686b0:
    // 0x2686b0: 0xc099b04  jal         func_266C10
label_2686b4:
    if (ctx->pc == 0x2686B4u) {
        ctx->pc = 0x2686B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686B0u;
        // 0x2686b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2686B8u;
        goto label_2686b8;
    }
    ctx->pc = 0x2686B0u;
    SET_GPR_U32(ctx, 31, 0x2686B8u);
    ctx->pc = 0x2686B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2686B0u;
    // 0x2686b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x2686B0u, 0x2686B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2686B8u;
label_2686b8:
    // 0x2686b8: 0x1040032b  beqz        $v0, . + 4 + (0x32B << 2)
label_2686bc:
    if (ctx->pc == 0x2686BCu) {
        ctx->pc = 0x2686C0u;
        goto label_2686c0;
    }
    ctx->pc = 0x2686B8u;
    {
        const bool branch_taken_0x2686b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2686b8) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2686C0u;
label_2686c0:
    // 0x2686c0: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2686c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2686c4:
    // 0x2686c4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x2686c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_2686c8:
    // 0x2686c8: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2686c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2686cc:
    // 0x2686cc: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2686ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2686d0:
    // 0x2686d0: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2686d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2686d4:
    // 0x2686d4: 0x10000324  b           . + 4 + (0x324 << 2)
label_2686d8:
    if (ctx->pc == 0x2686D8u) {
        ctx->pc = 0x2686D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686D4u;
        // 0x2686d8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2686DCu;
        goto label_2686dc;
    }
    ctx->pc = 0x2686D4u;
    {
        const bool branch_taken_0x2686d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2686D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686D4u;
        // 0x2686d8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2686d4) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2686DCu;
label_2686dc:
    // 0x2686dc: 0x0  nop
    ctx->pc = 0x2686dcu;
    // NOP
label_2686e0:
    // 0x2686e0: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2686e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2686e4:
    // 0x2686e4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2686e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2686e8:
    // 0x2686e8: 0xc049522  jal         func_125488
label_2686ec:
    if (ctx->pc == 0x2686ECu) {
        ctx->pc = 0x2686ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686E8u;
        // 0x2686ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2686F0u;
        goto label_2686f0;
    }
    ctx->pc = 0x2686E8u;
    SET_GPR_U32(ctx, 31, 0x2686F0u);
    ctx->pc = 0x2686ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2686E8u;
    // 0x2686ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2686E8u, 0x2686F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2686F0u;
label_2686f0:
    // 0x2686f0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2686f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2686f4:
    // 0x2686f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2686f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2686f8:
    // 0x2686f8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2686f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_2686fc:
    // 0x2686fc: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2686fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_268700:
    // 0x268700: 0x93a30150  lbu         $v1, 0x150($sp)
    ctx->pc = 0x268700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_268704:
    // 0x268704: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_268708:
    if (ctx->pc == 0x268708u) {
        ctx->pc = 0x26870Cu;
        goto label_26870c;
    }
    ctx->pc = 0x268704u;
    {
        const bool branch_taken_0x268704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x268704) {
            ctx->pc = 0x268728u;
            goto label_268728;
        }
    }
    ctx->pc = 0x26870Cu;
label_26870c:
    // 0x26870c: 0x93a20151  lbu         $v0, 0x151($sp)
    ctx->pc = 0x26870cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 337)));
label_268710:
    // 0x268710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268714:
    // 0x268714: 0xc099b48  jal         func_266D20
label_268718:
    if (ctx->pc == 0x268718u) {
        ctx->pc = 0x268718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268714u;
        // 0x268718: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26871Cu;
        goto label_26871c;
    }
    ctx->pc = 0x268714u;
    SET_GPR_U32(ctx, 31, 0x26871Cu);
    ctx->pc = 0x268718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268714u;
    // 0x268718: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D20u, 0x268714u, 0x26871Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26871Cu;
label_26871c:
    // 0x26871c: 0x10000312  b           . + 4 + (0x312 << 2)
label_268720:
    if (ctx->pc == 0x268720u) {
        ctx->pc = 0x268724u;
        goto label_268724;
    }
    ctx->pc = 0x26871Cu;
    {
        const bool branch_taken_0x26871c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26871c) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268724u;
label_268724:
    // 0x268724: 0x0  nop
    ctx->pc = 0x268724u;
    // NOP
label_268728:
    // 0x268728: 0x93a20151  lbu         $v0, 0x151($sp)
    ctx->pc = 0x268728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 337)));
label_26872c:
    // 0x26872c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26872cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268730:
    // 0x268730: 0xc099b48  jal         func_266D20
label_268734:
    if (ctx->pc == 0x268734u) {
        ctx->pc = 0x268734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268730u;
        // 0x268734: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268738u;
        goto label_268738;
    }
    ctx->pc = 0x268730u;
    SET_GPR_U32(ctx, 31, 0x268738u);
    ctx->pc = 0x268734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268730u;
    // 0x268734: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D20u, 0x268730u, 0x268738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268738u;
label_268738:
    // 0x268738: 0x1000030b  b           . + 4 + (0x30B << 2)
label_26873c:
    if (ctx->pc == 0x26873Cu) {
        ctx->pc = 0x268740u;
        goto label_268740;
    }
    ctx->pc = 0x268738u;
    {
        const bool branch_taken_0x268738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268738) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268740u;
label_268740:
    // 0x268740: 0xc049f18  jal         func_127C60
label_268744:
    if (ctx->pc == 0x268744u) {
        ctx->pc = 0x268744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268740u;
        // 0x268744: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268748u;
        goto label_268748;
    }
    ctx->pc = 0x268740u;
    SET_GPR_U32(ctx, 31, 0x268748u);
    ctx->pc = 0x268744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268740u;
    // 0x268744: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x268740u, 0x268748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268748u;
label_268748:
    // 0x268748: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x268748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26874c:
    // 0x26874c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x26874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268750:
    // 0x268750: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_268754:
    // 0x268754: 0x10000304  b           . + 4 + (0x304 << 2)
label_268758:
    if (ctx->pc == 0x268758u) {
        ctx->pc = 0x268758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268754u;
        // 0x268758: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26875Cu;
        goto label_26875c;
    }
    ctx->pc = 0x268754u;
    {
        const bool branch_taken_0x268754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268754u;
        // 0x268758: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268754) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26875Cu;
label_26875c:
    // 0x26875c: 0x0  nop
    ctx->pc = 0x26875cu;
    // NOP
label_268760:
    // 0x268760: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268764:
    // 0x268764: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268768:
    // 0x268768: 0xc049522  jal         func_125488
label_26876c:
    if (ctx->pc == 0x26876Cu) {
        ctx->pc = 0x26876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268768u;
        // 0x26876c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268770u;
        goto label_268770;
    }
    ctx->pc = 0x268768u;
    SET_GPR_U32(ctx, 31, 0x268770u);
    ctx->pc = 0x26876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268768u;
    // 0x26876c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268768u, 0x268770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268770u;
label_268770:
    // 0x268770: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268774:
    // 0x268774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268778:
    // 0x268778: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26877c:
    // 0x26877c: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x26877cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_268780:
    // 0x268780: 0xc099b04  jal         func_266C10
label_268784:
    if (ctx->pc == 0x268784u) {
        ctx->pc = 0x268784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268780u;
        // 0x268784: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268788u;
        goto label_268788;
    }
    ctx->pc = 0x268780u;
    SET_GPR_U32(ctx, 31, 0x268788u);
    ctx->pc = 0x268784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268780u;
    // 0x268784: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x268780u, 0x268788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268788u;
label_268788:
    // 0x268788: 0x104002f7  beqz        $v0, . + 4 + (0x2F7 << 2)
label_26878c:
    if (ctx->pc == 0x26878Cu) {
        ctx->pc = 0x268790u;
        goto label_268790;
    }
    ctx->pc = 0x268788u;
    {
        const bool branch_taken_0x268788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268788) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268790u;
label_268790:
    // 0x268790: 0x8e080044  lw          $t0, 0x44($s0)
    ctx->pc = 0x268790u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_268794:
    // 0x268794: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x268794u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
label_268798:
    // 0x268798: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x268798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26879c:
    // 0x26879c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x26879cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2687a0:
    // 0x2687a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2687a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2687a4:
    // 0x2687a4: 0xc0ab36c  jal         func_2ACDB0
label_2687a8:
    if (ctx->pc == 0x2687A8u) {
        ctx->pc = 0x2687A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687A4u;
        // 0x2687a8: 0x24e7eea0  addiu       $a3, $a3, -0x1160 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2687ACu;
        goto label_2687ac;
    }
    ctx->pc = 0x2687A4u;
    SET_GPR_U32(ctx, 31, 0x2687ACu);
    ctx->pc = 0x2687A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2687A4u;
    // 0x2687a8: 0x24e7eea0  addiu       $a3, $a3, -0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDB0u, 0x2687A4u, 0x2687ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2687ACu;
label_2687ac:
    // 0x2687ac: 0x100002ee  b           . + 4 + (0x2EE << 2)
label_2687b0:
    if (ctx->pc == 0x2687B0u) {
        ctx->pc = 0x2687B4u;
        goto label_2687b4;
    }
    ctx->pc = 0x2687ACu;
    {
        const bool branch_taken_0x2687ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2687ac) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2687B4u;
label_2687b4:
    // 0x2687b4: 0x0  nop
    ctx->pc = 0x2687b4u;
    // NOP
label_2687b8:
    // 0x2687b8: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2687b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2687bc:
    // 0x2687bc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2687bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2687c0:
    // 0x2687c0: 0xc049522  jal         func_125488
label_2687c4:
    if (ctx->pc == 0x2687C4u) {
        ctx->pc = 0x2687C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687C0u;
        // 0x2687c4: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2687C8u;
        goto label_2687c8;
    }
    ctx->pc = 0x2687C0u;
    SET_GPR_U32(ctx, 31, 0x2687C8u);
    ctx->pc = 0x2687C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2687C0u;
    // 0x2687c4: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2687C0u, 0x2687C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2687C8u;
label_2687c8:
    // 0x2687c8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2687c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2687cc:
    // 0x2687cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2687ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2687d0:
    // 0x2687d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2687d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2687d4:
    // 0x2687d4: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x2687d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_2687d8:
    // 0x2687d8: 0xc099b04  jal         func_266C10
label_2687dc:
    if (ctx->pc == 0x2687DCu) {
        ctx->pc = 0x2687DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687D8u;
        // 0x2687dc: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2687E0u;
        goto label_2687e0;
    }
    ctx->pc = 0x2687D8u;
    SET_GPR_U32(ctx, 31, 0x2687E0u);
    ctx->pc = 0x2687DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2687D8u;
    // 0x2687dc: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x2687D8u, 0x2687E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2687E0u;
label_2687e0:
    // 0x2687e0: 0x104002e1  beqz        $v0, . + 4 + (0x2E1 << 2)
label_2687e4:
    if (ctx->pc == 0x2687E4u) {
        ctx->pc = 0x2687E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687E0u;
        // 0x2687e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2687E8u;
        goto label_2687e8;
    }
    ctx->pc = 0x2687E0u;
    {
        const bool branch_taken_0x2687e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2687E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687E0u;
        // 0x2687e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2687e0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2687E8u;
label_2687e8:
    // 0x2687e8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2687e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2687ec:
    // 0x2687ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2687ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2687f0:
    // 0x2687f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2687f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2687f4:
    // 0x2687f4: 0xc0ab36c  jal         func_2ACDB0
label_2687f8:
    if (ctx->pc == 0x2687F8u) {
        ctx->pc = 0x2687F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687F4u;
        // 0x2687f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2687FCu;
        goto label_2687fc;
    }
    ctx->pc = 0x2687F4u;
    SET_GPR_U32(ctx, 31, 0x2687FCu);
    ctx->pc = 0x2687F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2687F4u;
    // 0x2687f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDB0u, 0x2687F4u, 0x2687FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2687FCu;
label_2687fc:
    // 0x2687fc: 0x100002da  b           . + 4 + (0x2DA << 2)
label_268800:
    if (ctx->pc == 0x268800u) {
        ctx->pc = 0x268804u;
        goto label_268804;
    }
    ctx->pc = 0x2687FCu;
    {
        const bool branch_taken_0x2687fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2687fc) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268804u;
label_268804:
    // 0x268804: 0x0  nop
    ctx->pc = 0x268804u;
    // NOP
label_268808:
    // 0x268808: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26880c:
    // 0x26880c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x26880cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268810:
    // 0x268810: 0xc049522  jal         func_125488
label_268814:
    if (ctx->pc == 0x268814u) {
        ctx->pc = 0x268814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268810u;
        // 0x268814: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268818u;
        goto label_268818;
    }
    ctx->pc = 0x268810u;
    SET_GPR_U32(ctx, 31, 0x268818u);
    ctx->pc = 0x268814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268810u;
    // 0x268814: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268810u, 0x268818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268818u;
label_268818:
    // 0x268818: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26881c:
    // 0x26881c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26881cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_268820:
    // 0x268820: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268824:
    // 0x268824: 0x93a30150  lbu         $v1, 0x150($sp)
    ctx->pc = 0x268824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_268828:
    // 0x268828: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_26882c:
    if (ctx->pc == 0x26882Cu) {
        ctx->pc = 0x268830u;
        goto label_268830;
    }
    ctx->pc = 0x268828u;
    {
        const bool branch_taken_0x268828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x268828) {
            ctx->pc = 0x268880u;
            goto label_268880;
        }
    }
    ctx->pc = 0x268830u;
label_268830:
    // 0x268830: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268834:
    // 0x268834: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x268834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_268838:
    // 0x268838: 0xc049522  jal         func_125488
label_26883c:
    if (ctx->pc == 0x26883Cu) {
        ctx->pc = 0x26883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268838u;
        // 0x26883c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268840u;
        goto label_268840;
    }
    ctx->pc = 0x268838u;
    SET_GPR_U32(ctx, 31, 0x268840u);
    ctx->pc = 0x26883Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268838u;
    // 0x26883c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268838u, 0x268840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268840u;
label_268840:
    // 0x268840: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268844:
    // 0x268844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268848:
    // 0x268848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26884c:
    // 0x26884c: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x26884cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_268850:
    // 0x268850: 0xc099b04  jal         func_266C10
label_268854:
    if (ctx->pc == 0x268854u) {
        ctx->pc = 0x268854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268850u;
        // 0x268854: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268858u;
        goto label_268858;
    }
    ctx->pc = 0x268850u;
    SET_GPR_U32(ctx, 31, 0x268858u);
    ctx->pc = 0x268854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268850u;
    // 0x268854: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x268850u, 0x268858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268858u;
label_268858:
    // 0x268858: 0x104002c3  beqz        $v0, . + 4 + (0x2C3 << 2)
label_26885c:
    if (ctx->pc == 0x26885Cu) {
        ctx->pc = 0x26885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268858u;
        // 0x26885c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268860u;
        goto label_268860;
    }
    ctx->pc = 0x268858u;
    {
        const bool branch_taken_0x268858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268858u;
        // 0x26885c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268858) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268860u;
label_268860:
    // 0x268860: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x268860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_268864:
    // 0x268864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268868:
    // 0x268868: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x268868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26886c:
    // 0x26886c: 0xc0ab36c  jal         func_2ACDB0
label_268870:
    if (ctx->pc == 0x268870u) {
        ctx->pc = 0x268870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26886Cu;
        // 0x268870: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268874u;
        goto label_268874;
    }
    ctx->pc = 0x26886Cu;
    SET_GPR_U32(ctx, 31, 0x268874u);
    ctx->pc = 0x268870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26886Cu;
    // 0x268870: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDB0u, 0x26886Cu, 0x268874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268874u;
label_268874:
    // 0x268874: 0x100002bc  b           . + 4 + (0x2BC << 2)
label_268878:
    if (ctx->pc == 0x268878u) {
        ctx->pc = 0x26887Cu;
        goto label_26887c;
    }
    ctx->pc = 0x268874u;
    {
        const bool branch_taken_0x268874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268874) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26887Cu;
label_26887c:
    // 0x26887c: 0x0  nop
    ctx->pc = 0x26887cu;
    // NOP
label_268880:
    // 0x268880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268884:
    // 0x268884: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_268888:
    if (ctx->pc == 0x268888u) {
        ctx->pc = 0x26888Cu;
        goto label_26888c;
    }
    ctx->pc = 0x268884u;
    {
        const bool branch_taken_0x268884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x268884) {
            ctx->pc = 0x2688D0u;
            goto label_2688d0;
        }
    }
    ctx->pc = 0x26888Cu;
label_26888c:
    // 0x26888c: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x26888cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268890:
    // 0x268890: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x268890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_268894:
    // 0x268894: 0xc049522  jal         func_125488
label_268898:
    if (ctx->pc == 0x268898u) {
        ctx->pc = 0x268898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268894u;
        // 0x268898: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26889Cu;
        goto label_26889c;
    }
    ctx->pc = 0x268894u;
    SET_GPR_U32(ctx, 31, 0x26889Cu);
    ctx->pc = 0x268898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268894u;
    // 0x268898: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268894u, 0x26889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26889Cu;
label_26889c:
    // 0x26889c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x26889cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2688a0:
    // 0x2688a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2688a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2688a4:
    // 0x2688a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2688a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2688a8:
    // 0x2688a8: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x2688a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2688ac:
    // 0x2688ac: 0xc099b04  jal         func_266C10
label_2688b0:
    if (ctx->pc == 0x2688B0u) {
        ctx->pc = 0x2688B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688ACu;
        // 0x2688b0: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2688B4u;
        goto label_2688b4;
    }
    ctx->pc = 0x2688ACu;
    SET_GPR_U32(ctx, 31, 0x2688B4u);
    ctx->pc = 0x2688B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2688ACu;
    // 0x2688b0: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x2688ACu, 0x2688B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2688B4u;
label_2688b4:
    // 0x2688b4: 0x104002ac  beqz        $v0, . + 4 + (0x2AC << 2)
label_2688b8:
    if (ctx->pc == 0x2688B8u) {
        ctx->pc = 0x2688B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688B4u;
        // 0x2688b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2688BCu;
        goto label_2688bc;
    }
    ctx->pc = 0x2688B4u;
    {
        const bool branch_taken_0x2688b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2688B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688B4u;
        // 0x2688b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688b4) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2688BCu;
label_2688bc:
    // 0x2688bc: 0xc0d0070  jal         func_3401C0
label_2688c0:
    if (ctx->pc == 0x2688C0u) {
        ctx->pc = 0x2688C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688BCu;
        // 0x2688c0: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2688C4u;
        goto label_2688c4;
    }
    ctx->pc = 0x2688BCu;
    SET_GPR_U32(ctx, 31, 0x2688C4u);
    ctx->pc = 0x2688C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2688BCu;
    // 0x2688c0: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3401C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3401C0u, 0x2688BCu, 0x2688C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2688C4u;
label_2688c4:
    // 0x2688c4: 0x100002a8  b           . + 4 + (0x2A8 << 2)
label_2688c8:
    if (ctx->pc == 0x2688C8u) {
        ctx->pc = 0x2688CCu;
        goto label_2688cc;
    }
    ctx->pc = 0x2688C4u;
    {
        const bool branch_taken_0x2688c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2688c4) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2688CCu;
label_2688cc:
    // 0x2688cc: 0x0  nop
    ctx->pc = 0x2688ccu;
    // NOP
label_2688d0:
    // 0x2688d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2688d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2688d4:
    // 0x2688d4: 0x146202a4  bne         $v1, $v0, . + 4 + (0x2A4 << 2)
label_2688d8:
    if (ctx->pc == 0x2688D8u) {
        ctx->pc = 0x2688DCu;
        goto label_2688dc;
    }
    ctx->pc = 0x2688D4u;
    {
        const bool branch_taken_0x2688d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2688d4) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2688DCu;
label_2688dc:
    // 0x2688dc: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2688dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2688e0:
    // 0x2688e0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2688e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2688e4:
    // 0x2688e4: 0xc049522  jal         func_125488
label_2688e8:
    if (ctx->pc == 0x2688E8u) {
        ctx->pc = 0x2688E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688E4u;
        // 0x2688e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2688ECu;
        goto label_2688ec;
    }
    ctx->pc = 0x2688E4u;
    SET_GPR_U32(ctx, 31, 0x2688ECu);
    ctx->pc = 0x2688E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2688E4u;
    // 0x2688e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2688E4u, 0x2688ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2688ECu;
label_2688ec:
    // 0x2688ec: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2688ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2688f0:
    // 0x2688f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2688f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2688f4:
    // 0x2688f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2688f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2688f8:
    // 0x2688f8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2688f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2688fc:
    // 0x2688fc: 0xc099b04  jal         func_266C10
label_268900:
    if (ctx->pc == 0x268900u) {
        ctx->pc = 0x268900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688FCu;
        // 0x268900: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268904u;
        goto label_268904;
    }
    ctx->pc = 0x2688FCu;
    SET_GPR_U32(ctx, 31, 0x268904u);
    ctx->pc = 0x268900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2688FCu;
    // 0x268900: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x2688FCu, 0x268904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268904u;
label_268904:
    // 0x268904: 0x10400298  beqz        $v0, . + 4 + (0x298 << 2)
label_268908:
    if (ctx->pc == 0x268908u) {
        ctx->pc = 0x26890Cu;
        goto label_26890c;
    }
    ctx->pc = 0x268904u;
    {
        const bool branch_taken_0x268904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268904) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26890Cu;
label_26890c:
    // 0x26890c: 0xc7ac0120  lwc1        $f12, 0x120($sp)
    ctx->pc = 0x26890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_268910:
    // 0x268910: 0xc7ad0124  lwc1        $f13, 0x124($sp)
    ctx->pc = 0x268910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_268914:
    // 0x268914: 0xc7ae0128  lwc1        $f14, 0x128($sp)
    ctx->pc = 0x268914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_268918:
    // 0x268918: 0xc7af012c  lwc1        $f15, 0x12C($sp)
    ctx->pc = 0x268918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_26891c:
    // 0x26891c: 0xc0ab1ac  jal         func_2AC6B0
label_268920:
    if (ctx->pc == 0x268920u) {
        ctx->pc = 0x268920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26891Cu;
        // 0x268920: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268924u;
        goto label_268924;
    }
    ctx->pc = 0x26891Cu;
    SET_GPR_U32(ctx, 31, 0x268924u);
    ctx->pc = 0x268920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26891Cu;
    // 0x268920: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC6B0u, 0x26891Cu, 0x268924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268924u;
label_268924:
    // 0x268924: 0x10000290  b           . + 4 + (0x290 << 2)
label_268928:
    if (ctx->pc == 0x268928u) {
        ctx->pc = 0x26892Cu;
        goto label_26892c;
    }
    ctx->pc = 0x268924u;
    {
        const bool branch_taken_0x268924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268924) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26892Cu;
label_26892c:
    // 0x26892c: 0x0  nop
    ctx->pc = 0x26892cu;
    // NOP
label_268930:
    // 0x268930: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268934:
    // 0x268934: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268938:
    // 0x268938: 0xc049522  jal         func_125488
label_26893c:
    if (ctx->pc == 0x26893Cu) {
        ctx->pc = 0x26893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268938u;
        // 0x26893c: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268940u;
        goto label_268940;
    }
    ctx->pc = 0x268938u;
    SET_GPR_U32(ctx, 31, 0x268940u);
    ctx->pc = 0x26893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268938u;
    // 0x26893c: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268938u, 0x268940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268940u;
label_268940:
    // 0x268940: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268944:
    // 0x268944: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x268944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_268948:
    // 0x268948: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x268948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_26894c:
    // 0x26894c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x26894cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268950:
    // 0x268950: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x268950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_268954:
    // 0x268954: 0xc07cce0  jal         func_1F3380
label_268958:
    if (ctx->pc == 0x268958u) {
        ctx->pc = 0x268958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268954u;
        // 0x268958: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26895Cu;
        goto label_26895c;
    }
    ctx->pc = 0x268954u;
    SET_GPR_U32(ctx, 31, 0x26895Cu);
    ctx->pc = 0x268958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268954u;
    // 0x268958: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x268954u, 0x26895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26895Cu;
label_26895c:
    // 0x26895c: 0x10400282  beqz        $v0, . + 4 + (0x282 << 2)
label_268960:
    if (ctx->pc == 0x268960u) {
        ctx->pc = 0x268960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26895Cu;
        // 0x268960: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268964u;
        goto label_268964;
    }
    ctx->pc = 0x26895Cu;
    {
        const bool branch_taken_0x26895c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26895Cu;
        // 0x268960: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26895c) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268964u;
label_268964:
    // 0x268964: 0xc09a52c  jal         func_2694B0
label_268968:
    if (ctx->pc == 0x268968u) {
        ctx->pc = 0x268968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268964u;
        // 0x268968: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26896Cu;
        goto label_26896c;
    }
    ctx->pc = 0x268964u;
    SET_GPR_U32(ctx, 31, 0x26896Cu);
    ctx->pc = 0x268968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268964u;
    // 0x268968: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2694B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2694B0u, 0x268964u, 0x26896Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26896Cu;
label_26896c:
    // 0x26896c: 0x1000027e  b           . + 4 + (0x27E << 2)
label_268970:
    if (ctx->pc == 0x268970u) {
        ctx->pc = 0x268974u;
        goto label_268974;
    }
    ctx->pc = 0x26896Cu;
    {
        const bool branch_taken_0x26896c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26896c) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268974u;
label_268974:
    // 0x268974: 0x0  nop
    ctx->pc = 0x268974u;
    // NOP
label_268978:
    // 0x268978: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26897c:
    // 0x26897c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x26897cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268980:
    // 0x268980: 0xc049522  jal         func_125488
label_268984:
    if (ctx->pc == 0x268984u) {
        ctx->pc = 0x268984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268980u;
        // 0x268984: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268988u;
        goto label_268988;
    }
    ctx->pc = 0x268980u;
    SET_GPR_U32(ctx, 31, 0x268988u);
    ctx->pc = 0x268984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268980u;
    // 0x268984: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268980u, 0x268988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268988u;
label_268988:
    // 0x268988: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26898c:
    // 0x26898c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x26898cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_268990:
    // 0x268990: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268994:
    // 0x268994: 0x8f828ab0  lw          $v0, -0x7550($gp)
    ctx->pc = 0x268994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
label_268998:
    // 0x268998: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_26899c:
    if (ctx->pc == 0x26899Cu) {
        ctx->pc = 0x2689A0u;
        goto label_2689a0;
    }
    ctx->pc = 0x268998u;
    {
        const bool branch_taken_0x268998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268998) {
            ctx->pc = 0x2689B8u;
            goto label_2689b8;
        }
    }
    ctx->pc = 0x2689A0u;
label_2689a0:
    // 0x2689a0: 0x93a50150  lbu         $a1, 0x150($sp)
    ctx->pc = 0x2689a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_2689a4:
    // 0x2689a4: 0x93a60151  lbu         $a2, 0x151($sp)
    ctx->pc = 0x2689a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 337)));
label_2689a8:
    // 0x2689a8: 0xc0b878c  jal         func_2E1E30
label_2689ac:
    if (ctx->pc == 0x2689ACu) {
        ctx->pc = 0x2689ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2689A8u;
        // 0x2689ac: 0x9204009c  lbu         $a0, 0x9C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2689B0u;
        goto label_2689b0;
    }
    ctx->pc = 0x2689A8u;
    SET_GPR_U32(ctx, 31, 0x2689B0u);
    ctx->pc = 0x2689ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2689A8u;
    // 0x2689ac: 0x9204009c  lbu         $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1E30u, 0x2689A8u, 0x2689B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2689B0u;
label_2689b0:
    // 0x2689b0: 0x1000026d  b           . + 4 + (0x26D << 2)
label_2689b4:
    if (ctx->pc == 0x2689B4u) {
        ctx->pc = 0x2689B8u;
        goto label_2689b8;
    }
    ctx->pc = 0x2689B0u;
    {
        const bool branch_taken_0x2689b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2689b0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2689B8u;
label_2689b8:
    // 0x2689b8: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x2689b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_2689bc:
    // 0x2689bc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2689bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_2689c0:
    // 0x2689c0: 0xc07cce0  jal         func_1F3380
label_2689c4:
    if (ctx->pc == 0x2689C4u) {
        ctx->pc = 0x2689C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2689C0u;
        // 0x2689c4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2689C8u;
        goto label_2689c8;
    }
    ctx->pc = 0x2689C0u;
    SET_GPR_U32(ctx, 31, 0x2689C8u);
    ctx->pc = 0x2689C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2689C0u;
    // 0x2689c4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2689C0u, 0x2689C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2689C8u;
label_2689c8:
    // 0x2689c8: 0x10400267  beqz        $v0, . + 4 + (0x267 << 2)
label_2689cc:
    if (ctx->pc == 0x2689CCu) {
        ctx->pc = 0x2689D0u;
        goto label_2689d0;
    }
    ctx->pc = 0x2689C8u;
    {
        const bool branch_taken_0x2689c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2689c8) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2689D0u;
label_2689d0:
    // 0x2689d0: 0x93a50150  lbu         $a1, 0x150($sp)
    ctx->pc = 0x2689d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_2689d4:
    // 0x2689d4: 0x93a60151  lbu         $a2, 0x151($sp)
    ctx->pc = 0x2689d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 337)));
label_2689d8:
    // 0x2689d8: 0xc0a685c  jal         func_29A170
label_2689dc:
    if (ctx->pc == 0x2689DCu) {
        ctx->pc = 0x2689DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2689D8u;
        // 0x2689dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2689E0u;
        goto label_2689e0;
    }
    ctx->pc = 0x2689D8u;
    SET_GPR_U32(ctx, 31, 0x2689E0u);
    ctx->pc = 0x2689DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2689D8u;
    // 0x2689dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A170u, 0x2689D8u, 0x2689E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2689E0u;
label_2689e0:
    // 0x2689e0: 0x10000261  b           . + 4 + (0x261 << 2)
label_2689e4:
    if (ctx->pc == 0x2689E4u) {
        ctx->pc = 0x2689E8u;
        goto label_2689e8;
    }
    ctx->pc = 0x2689E0u;
    {
        const bool branch_taken_0x2689e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2689e0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x2689E8u;
label_2689e8:
    // 0x2689e8: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2689e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2689ec:
    // 0x2689ec: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2689ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2689f0:
    // 0x2689f0: 0xc049522  jal         func_125488
label_2689f4:
    if (ctx->pc == 0x2689F4u) {
        ctx->pc = 0x2689F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2689F0u;
        // 0x2689f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2689F8u;
        goto label_2689f8;
    }
    ctx->pc = 0x2689F0u;
    SET_GPR_U32(ctx, 31, 0x2689F8u);
    ctx->pc = 0x2689F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2689F0u;
    // 0x2689f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2689F0u, 0x2689F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2689F8u;
label_2689f8:
    // 0x2689f8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2689f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2689fc:
    // 0x2689fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2689fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_268a00:
    // 0x268a00: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268a04:
    // 0x268a04: 0x93a50152  lbu         $a1, 0x152($sp)
    ctx->pc = 0x268a04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 338)));
label_268a08:
    // 0x268a08: 0xc054048  jal         func_150120
label_268a0c:
    if (ctx->pc == 0x268A0Cu) {
        ctx->pc = 0x268A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A08u;
        // 0x268a0c: 0x97a40150  lhu         $a0, 0x150($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268A10u;
        goto label_268a10;
    }
    ctx->pc = 0x268A08u;
    SET_GPR_U32(ctx, 31, 0x268A10u);
    ctx->pc = 0x268A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A08u;
    // 0x268a0c: 0x97a40150  lhu         $a0, 0x150($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150120u, 0x268A08u, 0x268A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A10u;
label_268a10:
    // 0x268a10: 0x10000255  b           . + 4 + (0x255 << 2)
label_268a14:
    if (ctx->pc == 0x268A14u) {
        ctx->pc = 0x268A18u;
        goto label_268a18;
    }
    ctx->pc = 0x268A10u;
    {
        const bool branch_taken_0x268a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268a10) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268A18u;
label_268a18:
    // 0x268a18: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268a1c:
    // 0x268a1c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268a20:
    // 0x268a20: 0xc049522  jal         func_125488
label_268a24:
    if (ctx->pc == 0x268A24u) {
        ctx->pc = 0x268A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A20u;
        // 0x268a24: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268A28u;
        goto label_268a28;
    }
    ctx->pc = 0x268A20u;
    SET_GPR_U32(ctx, 31, 0x268A28u);
    ctx->pc = 0x268A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A20u;
    // 0x268a24: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268A20u, 0x268A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A28u;
label_268a28:
    // 0x268a28: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x268a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268a2c:
    // 0x268a2c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x268a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_268a30:
    // 0x268a30: 0x24020861  addiu       $v0, $zero, 0x861
    ctx->pc = 0x268a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2145));
label_268a34:
    // 0x268a34: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x268a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_268a38:
    // 0x268a38: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x268a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_268a3c:
    // 0x268a3c: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x268a3cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_268a40:
    // 0x268a40: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_268a44:
    if (ctx->pc == 0x268A44u) {
        ctx->pc = 0x268A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A40u;
        // 0x268a44: 0x24020863  addiu       $v0, $zero, 0x863 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2147));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268A48u;
        goto label_268a48;
    }
    ctx->pc = 0x268A40u;
    {
        const bool branch_taken_0x268a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A40u;
        // 0x268a44: 0x24020863  addiu       $v0, $zero, 0x863 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2147));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a40) {
            ctx->pc = 0x268A50u;
            goto label_268a50;
        }
    }
    ctx->pc = 0x268A48u;
label_268a48:
    // 0x268a48: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_268a4c:
    if (ctx->pc == 0x268A4Cu) {
        ctx->pc = 0x268A50u;
        goto label_268a50;
    }
    ctx->pc = 0x268A48u;
    {
        const bool branch_taken_0x268a48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x268a48) {
            ctx->pc = 0x268A68u;
            goto label_268a68;
        }
    }
    ctx->pc = 0x268A50u;
label_268a50:
    // 0x268a50: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x268a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_268a54:
    // 0x268a54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x268a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_268a58:
    // 0x268a58: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_268a5c:
    if (ctx->pc == 0x268A5Cu) {
        ctx->pc = 0x268A60u;
        goto label_268a60;
    }
    ctx->pc = 0x268A58u;
    {
        const bool branch_taken_0x268a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x268a58) {
            ctx->pc = 0x268A68u;
            goto label_268a68;
        }
    }
    ctx->pc = 0x268A60u;
label_268a60:
    // 0x268a60: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x268a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_268a64:
    // 0x268a64: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x268a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_268a68:
    // 0x268a68: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x268a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_268a6c:
    // 0x268a6c: 0x83a60150  lb          $a2, 0x150($sp)
    ctx->pc = 0x268a6cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_268a70:
    // 0x268a70: 0x8fa70154  lw          $a3, 0x154($sp)
    ctx->pc = 0x268a70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_268a74:
    // 0x268a74: 0x8fa80158  lw          $t0, 0x158($sp)
    ctx->pc = 0x268a74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_268a78:
    // 0x268a78: 0xc0d8f04  jal         func_363C10
label_268a7c:
    if (ctx->pc == 0x268A7Cu) {
        ctx->pc = 0x268A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A78u;
        // 0x268a7c: 0x80256ac8  lb          $a1, 0x6AC8($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 27336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268A80u;
        goto label_268a80;
    }
    ctx->pc = 0x268A78u;
    SET_GPR_U32(ctx, 31, 0x268A80u);
    ctx->pc = 0x268A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A78u;
    // 0x268a7c: 0x80256ac8  lb          $a1, 0x6AC8($at) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 27336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363C10u, 0x268A78u, 0x268A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A80u;
label_268a80:
    // 0x268a80: 0x10000239  b           . + 4 + (0x239 << 2)
label_268a84:
    if (ctx->pc == 0x268A84u) {
        ctx->pc = 0x268A88u;
        goto label_268a88;
    }
    ctx->pc = 0x268A80u;
    {
        const bool branch_taken_0x268a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268a80) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268A88u;
label_268a88:
    // 0x268a88: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268a8c:
    // 0x268a8c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268a90:
    // 0x268a90: 0xc049522  jal         func_125488
label_268a94:
    if (ctx->pc == 0x268A94u) {
        ctx->pc = 0x268A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A90u;
        // 0x268a94: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268A98u;
        goto label_268a98;
    }
    ctx->pc = 0x268A90u;
    SET_GPR_U32(ctx, 31, 0x268A98u);
    ctx->pc = 0x268A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A90u;
    // 0x268a94: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268A90u, 0x268A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A98u;
label_268a98:
    // 0x268a98: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x268a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268a9c:
    // 0x268a9c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x268a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_268aa0:
    // 0x268aa0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x268aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_268aa4:
    // 0x268aa4: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x268aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_268aa8:
    // 0x268aa8: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x268aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_268aac:
    // 0x268aac: 0x8c23cee4  lw          $v1, -0x311C($at)
    ctx->pc = 0x268aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954724)));
label_268ab0:
    // 0x268ab0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x268ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_268ab4:
    // 0x268ab4: 0x1440022c  bnez        $v0, . + 4 + (0x22C << 2)
label_268ab8:
    if (ctx->pc == 0x268AB8u) {
        ctx->pc = 0x268ABCu;
        goto label_268abc;
    }
    ctx->pc = 0x268AB4u;
    {
        const bool branch_taken_0x268ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268ab4) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268ABCu;
label_268abc:
    // 0x268abc: 0x93a30150  lbu         $v1, 0x150($sp)
    ctx->pc = 0x268abcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_268ac0:
    // 0x268ac0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x268ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_268ac4:
    // 0x268ac4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_268ac8:
    if (ctx->pc == 0x268AC8u) {
        ctx->pc = 0x268AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AC4u;
        // 0x268ac8: 0x27b00151  addiu       $s0, $sp, 0x151 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 337));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268ACCu;
        goto label_268acc;
    }
    ctx->pc = 0x268AC4u;
    {
        const bool branch_taken_0x268ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x268AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AC4u;
        // 0x268ac8: 0x27b00151  addiu       $s0, $sp, 0x151 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 337));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ac4) {
            ctx->pc = 0x268AF0u;
            goto label_268af0;
        }
    }
    ctx->pc = 0x268ACCu;
label_268acc:
    // 0x268acc: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x268accu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_268ad0:
    // 0x268ad0: 0x28810010  slti        $at, $a0, 0x10
    ctx->pc = 0x268ad0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
label_268ad4:
    // 0x268ad4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_268ad8:
    if (ctx->pc == 0x268AD8u) {
        ctx->pc = 0x268ADCu;
        goto label_268adc;
    }
    ctx->pc = 0x268AD4u;
    {
        const bool branch_taken_0x268ad4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x268ad4) {
            ctx->pc = 0x268AF0u;
            goto label_268af0;
        }
    }
    ctx->pc = 0x268ADCu;
label_268adc:
    // 0x268adc: 0xc0b2e10  jal         func_2CB840
label_268ae0:
    if (ctx->pc == 0x268AE0u) {
        ctx->pc = 0x268AE4u;
        goto label_268ae4;
    }
    ctx->pc = 0x268ADCu;
    SET_GPR_U32(ctx, 31, 0x268AE4u);
    ctx->pc = 0x2CB840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB840u, 0x268ADCu, 0x268AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268AE4u;
label_268ae4:
    // 0x268ae4: 0x10000004  b           . + 4 + (0x4 << 2)
label_268ae8:
    if (ctx->pc == 0x268AE8u) {
        ctx->pc = 0x268AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AE4u;
        // 0x268ae8: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x268AECu;
        goto label_268aec;
    }
    ctx->pc = 0x268AE4u;
    {
        const bool branch_taken_0x268ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AE4u;
        // 0x268ae8: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ae4) {
            ctx->pc = 0x268AF8u;
            goto label_268af8;
        }
    }
    ctx->pc = 0x268AECu;
label_268aec:
    // 0x268aec: 0x0  nop
    ctx->pc = 0x268aecu;
    // NOP
label_268af0:
    // 0x268af0: 0x27b00151  addiu       $s0, $sp, 0x151
    ctx->pc = 0x268af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 337));
label_268af4:
    // 0x268af4: 0x92110000  lbu         $s1, 0x0($s0)
    ctx->pc = 0x268af4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_268af8:
    // 0x268af8: 0x93a40150  lbu         $a0, 0x150($sp)
    ctx->pc = 0x268af8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_268afc:
    // 0x268afc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x268afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_268b00:
    // 0x268b00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268b04:
    // 0x268b04: 0xc0b30a4  jal         func_2CC290
label_268b08:
    if (ctx->pc == 0x268B08u) {
        ctx->pc = 0x268B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B04u;
        // 0x268b08: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268B0Cu;
        goto label_268b0c;
    }
    ctx->pc = 0x268B04u;
    SET_GPR_U32(ctx, 31, 0x268B0Cu);
    ctx->pc = 0x268B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268B04u;
    // 0x268b08: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC290u, 0x268B04u, 0x268B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B0Cu;
label_268b0c:
    // 0x268b0c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x268b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_268b10:
    // 0x268b10: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x268b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_268b14:
    // 0x268b14: 0x244211b0  addiu       $v0, $v0, 0x11B0
    ctx->pc = 0x268b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4528));
label_268b18:
    // 0x268b18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x268b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_268b1c:
    // 0x268b1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_268b20:
    // 0x268b20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x268b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_268b24:
    // 0x268b24: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_268b28:
    if (ctx->pc == 0x268B28u) {
        ctx->pc = 0x268B2Cu;
        goto label_268b2c;
    }
    ctx->pc = 0x268B24u;
    {
        const bool branch_taken_0x268b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268b24) {
            ctx->pc = 0x268B68u;
            goto label_268b68;
        }
    }
    ctx->pc = 0x268B2Cu;
label_268b2c:
    // 0x268b2c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x268b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_268b30:
    // 0x268b30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_268b34:
    if (ctx->pc == 0x268B34u) {
        ctx->pc = 0x268B38u;
        goto label_268b38;
    }
    ctx->pc = 0x268B30u;
    {
        const bool branch_taken_0x268b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268b30) {
            ctx->pc = 0x268B68u;
            goto label_268b68;
        }
    }
    ctx->pc = 0x268B38u;
label_268b38:
    // 0x268b38: 0x93a40150  lbu         $a0, 0x150($sp)
    ctx->pc = 0x268b38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_268b3c:
    // 0x268b3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x268b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_268b40:
    // 0x268b40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268b44:
    // 0x268b44: 0xc0b3104  jal         func_2CC410
label_268b48:
    if (ctx->pc == 0x268B48u) {
        ctx->pc = 0x268B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B44u;
        // 0x268b48: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268B4Cu;
        goto label_268b4c;
    }
    ctx->pc = 0x268B44u;
    SET_GPR_U32(ctx, 31, 0x268B4Cu);
    ctx->pc = 0x268B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268B44u;
    // 0x268b48: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC410u, 0x268B44u, 0x268B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B4Cu;
label_268b4c:
    // 0x268b4c: 0x10000006  b           . + 4 + (0x6 << 2)
label_268b50:
    if (ctx->pc == 0x268B50u) {
        ctx->pc = 0x268B54u;
        goto label_268b54;
    }
    ctx->pc = 0x268B4Cu;
    {
        const bool branch_taken_0x268b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268b4c) {
            ctx->pc = 0x268B68u;
            goto label_268b68;
        }
    }
    ctx->pc = 0x268B54u;
label_268b54:
    // 0x268b54: 0x0  nop
    ctx->pc = 0x268b54u;
    // NOP
label_268b58:
    // 0x268b58: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x268b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_268b5c:
    // 0x268b5c: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x268b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
label_268b60:
    // 0x268b60: 0xc04c918  jal         func_132460
label_268b64:
    if (ctx->pc == 0x268B64u) {
        ctx->pc = 0x268B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B60u;
        // 0x268b64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268B68u;
        goto label_268b68;
    }
    ctx->pc = 0x268B60u;
    SET_GPR_U32(ctx, 31, 0x268B68u);
    ctx->pc = 0x268B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268B60u;
    // 0x268b64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x268B60u, 0x268B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B68u;
label_268b68:
    // 0x268b68: 0xc0554f4  jal         func_1553D0
label_268b6c:
    if (ctx->pc == 0x268B6Cu) {
        ctx->pc = 0x268B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B68u;
        // 0x268b6c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268B70u;
        goto label_268b70;
    }
    ctx->pc = 0x268B68u;
    SET_GPR_U32(ctx, 31, 0x268B70u);
    ctx->pc = 0x268B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268B68u;
    // 0x268b6c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x268B68u, 0x268B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B70u;
label_268b70:
    // 0x268b70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_268b74:
    if (ctx->pc == 0x268B74u) {
        ctx->pc = 0x268B78u;
        goto label_268b78;
    }
    ctx->pc = 0x268B70u;
    {
        const bool branch_taken_0x268b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268b70) {
            ctx->pc = 0x268B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268b58;
        }
    }
    ctx->pc = 0x268B78u;
label_268b78:
    // 0x268b78: 0x92070000  lbu         $a3, 0x0($s0)
    ctx->pc = 0x268b78u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_268b7c:
    // 0x268b7c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x268b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_268b80:
    // 0x268b80: 0x93a60150  lbu         $a2, 0x150($sp)
    ctx->pc = 0x268b80u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_268b84:
    // 0x268b84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x268b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_268b88:
    // 0x268b88: 0x93a80152  lbu         $t0, 0x152($sp)
    ctx->pc = 0x268b88u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 338)));
label_268b8c:
    // 0x268b8c: 0xc09a4e4  jal         func_269390
label_268b90:
    if (ctx->pc == 0x268B90u) {
        ctx->pc = 0x268B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B8Cu;
        // 0x268b90: 0x24a55820  addiu       $a1, $a1, 0x5820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268B94u;
        goto label_268b94;
    }
    ctx->pc = 0x268B8Cu;
    SET_GPR_U32(ctx, 31, 0x268B94u);
    ctx->pc = 0x268B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268B8Cu;
    // 0x268b90: 0x24a55820  addiu       $a1, $a1, 0x5820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269390u, 0x268B8Cu, 0x268B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B94u;
label_268b94:
    // 0x268b94: 0x100001f4  b           . + 4 + (0x1F4 << 2)
label_268b98:
    if (ctx->pc == 0x268B98u) {
        ctx->pc = 0x268B9Cu;
        goto label_268b9c;
    }
    ctx->pc = 0x268B94u;
    {
        const bool branch_taken_0x268b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268b94) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268B9Cu;
label_268b9c:
    // 0x268b9c: 0x0  nop
    ctx->pc = 0x268b9cu;
    // NOP
label_268ba0:
    // 0x268ba0: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268ba4:
    // 0x268ba4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268ba8:
    // 0x268ba8: 0xc049522  jal         func_125488
label_268bac:
    if (ctx->pc == 0x268BACu) {
        ctx->pc = 0x268BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BA8u;
        // 0x268bac: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268BB0u;
        goto label_268bb0;
    }
    ctx->pc = 0x268BA8u;
    SET_GPR_U32(ctx, 31, 0x268BB0u);
    ctx->pc = 0x268BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268BA8u;
    // 0x268bac: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268BA8u, 0x268BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268BB0u;
label_268bb0:
    // 0x268bb0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268bb4:
    // 0x268bb4: 0x27b10158  addiu       $s1, $sp, 0x158
    ctx->pc = 0x268bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_268bb8:
    // 0x268bb8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x268bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_268bbc:
    // 0x268bbc: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x268bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_268bc0:
    // 0x268bc0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268bc4:
    // 0x268bc4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x268bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268bc8:
    // 0x268bc8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x268bc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_268bcc:
    // 0x268bcc: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_268bd0:
    if (ctx->pc == 0x268BD0u) {
        ctx->pc = 0x268BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BCCu;
        // 0x268bd0: 0x27b3015c  addiu       $s3, $sp, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268BD4u;
        goto label_268bd4;
    }
    ctx->pc = 0x268BCCu;
    {
        const bool branch_taken_0x268bcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x268BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BCCu;
        // 0x268bd0: 0x27b3015c  addiu       $s3, $sp, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268bcc) {
            ctx->pc = 0x268C20u;
            goto label_268c20;
        }
    }
    ctx->pc = 0x268BD4u;
label_268bd4:
    // 0x268bd4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x268bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268bd8:
    // 0x268bd8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x268bd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_268bdc:
    // 0x268bdc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_268be0:
    if (ctx->pc == 0x268BE0u) {
        ctx->pc = 0x268BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BDCu;
        // 0x268be0: 0x27b20160  addiu       $s2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268BE4u;
        goto label_268be4;
    }
    ctx->pc = 0x268BDCu;
    {
        const bool branch_taken_0x268bdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x268BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BDCu;
        // 0x268be0: 0x27b20160  addiu       $s2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268bdc) {
            ctx->pc = 0x268C20u;
            goto label_268c20;
        }
    }
    ctx->pc = 0x268BE4u;
label_268be4:
    // 0x268be4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x268be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268be8:
    // 0x268be8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x268be8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_268bec:
    // 0x268bec: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_268bf0:
    if (ctx->pc == 0x268BF0u) {
        ctx->pc = 0x268BF4u;
        goto label_268bf4;
    }
    ctx->pc = 0x268BECu;
    {
        const bool branch_taken_0x268bec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x268bec) {
            ctx->pc = 0x268C20u;
            goto label_268c20;
        }
    }
    ctx->pc = 0x268BF4u;
label_268bf4:
    // 0x268bf4: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x268bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_268bf8:
    // 0x268bf8: 0xc099b44  jal         func_266D10
label_268bfc:
    if (ctx->pc == 0x268BFCu) {
        ctx->pc = 0x268BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BF8u;
        // 0x268bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268C00u;
        goto label_268c00;
    }
    ctx->pc = 0x268BF8u;
    SET_GPR_U32(ctx, 31, 0x268C00u);
    ctx->pc = 0x268BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268BF8u;
    // 0x268bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D10u, 0x268BF8u, 0x268C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268C00u;
label_268c00:
    // 0x268c00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_268c04:
    if (ctx->pc == 0x268C04u) {
        ctx->pc = 0x268C08u;
        goto label_268c08;
    }
    ctx->pc = 0x268C00u;
    {
        const bool branch_taken_0x268c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268c00) {
            ctx->pc = 0x268C20u;
            goto label_268c20;
        }
    }
    ctx->pc = 0x268C08u;
label_268c08:
    // 0x268c08: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x268c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268c0c:
    // 0x268c0c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x268c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_268c10:
    // 0x268c10: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x268c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268c14:
    // 0x268c14: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x268c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_268c18:
    // 0x268c18: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x268c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268c1c:
    // 0x268c1c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x268c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_268c20:
    // 0x268c20: 0x8f828ab0  lw          $v0, -0x7550($gp)
    ctx->pc = 0x268c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
label_268c24:
    // 0x268c24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_268c28:
    if (ctx->pc == 0x268C28u) {
        ctx->pc = 0x268C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C24u;
        // 0x268c28: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268C2Cu;
        goto label_268c2c;
    }
    ctx->pc = 0x268C24u;
    {
        const bool branch_taken_0x268c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C24u;
        // 0x268c28: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c24) {
            ctx->pc = 0x268C40u;
            goto label_268c40;
        }
    }
    ctx->pc = 0x268C2Cu;
label_268c2c:
    // 0x268c2c: 0xc0b86f0  jal         func_2E1BC0
label_268c30:
    if (ctx->pc == 0x268C30u) {
        ctx->pc = 0x268C34u;
        goto label_268c34;
    }
    ctx->pc = 0x268C2Cu;
    SET_GPR_U32(ctx, 31, 0x268C34u);
    ctx->pc = 0x2E1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1BC0u, 0x268C2Cu, 0x268C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268C34u;
label_268c34:
    // 0x268c34: 0x100001cc  b           . + 4 + (0x1CC << 2)
label_268c38:
    if (ctx->pc == 0x268C38u) {
        ctx->pc = 0x268C3Cu;
        goto label_268c3c;
    }
    ctx->pc = 0x268C34u;
    {
        const bool branch_taken_0x268c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268c34) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268C3Cu;
label_268c3c:
    // 0x268c3c: 0x0  nop
    ctx->pc = 0x268c3cu;
    // NOP
label_268c40:
    // 0x268c40: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268c44:
    // 0x268c44: 0xc09a5a0  jal         func_269680
label_268c48:
    if (ctx->pc == 0x268C48u) {
        ctx->pc = 0x268C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C44u;
        // 0x268c48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268C4Cu;
        goto label_268c4c;
    }
    ctx->pc = 0x268C44u;
    SET_GPR_U32(ctx, 31, 0x268C4Cu);
    ctx->pc = 0x268C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268C44u;
    // 0x268c48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269680u, 0x268C44u, 0x268C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268C4Cu;
label_268c4c:
    // 0x268c4c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_268c50:
    if (ctx->pc == 0x268C50u) {
        ctx->pc = 0x268C54u;
        goto label_268c54;
    }
    ctx->pc = 0x268C4Cu;
    {
        const bool branch_taken_0x268c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268c4c) {
            ctx->pc = 0x268C88u;
            goto label_268c88;
        }
    }
    ctx->pc = 0x268C54u;
label_268c54:
    // 0x268c54: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x268c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_268c58:
    // 0x268c58: 0x27a50154  addiu       $a1, $sp, 0x154
    ctx->pc = 0x268c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_268c5c:
    // 0x268c5c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x268c5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_268c60:
    // 0x268c60: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x268c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
label_268c64:
    // 0x268c64: 0x24420430  addiu       $v0, $v0, 0x430
    ctx->pc = 0x268c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
label_268c68:
    // 0x268c68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x268c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_268c6c:
    // 0x268c6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_268c70:
    // 0x268c70: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x268c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_268c74:
    // 0x268c74: 0xae040090  sw          $a0, 0x90($s0)
    ctx->pc = 0x268c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 4));
label_268c78:
    // 0x268c78: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x268c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_268c7c:
    // 0x268c7c: 0x100001ba  b           . + 4 + (0x1BA << 2)
label_268c80:
    if (ctx->pc == 0x268C80u) {
        ctx->pc = 0x268C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C7Cu;
        // 0x268c80: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268C84u;
        goto label_268c84;
    }
    ctx->pc = 0x268C7Cu;
    {
        const bool branch_taken_0x268c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C7Cu;
        // 0x268c80: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c7c) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268C84u;
label_268c84:
    // 0x268c84: 0x0  nop
    ctx->pc = 0x268c84u;
    // NOP
label_268c88:
    // 0x268c88: 0x100001b7  b           . + 4 + (0x1B7 << 2)
label_268c8c:
    if (ctx->pc == 0x268C8Cu) {
        ctx->pc = 0x268C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C88u;
        // 0x268c8c: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268C90u;
        goto label_268c90;
    }
    ctx->pc = 0x268C88u;
    {
        const bool branch_taken_0x268c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C88u;
        // 0x268c8c: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c88) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268C90u;
label_268c90:
    // 0x268c90: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268c94:
    // 0x268c94: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268c98:
    // 0x268c98: 0xc049522  jal         func_125488
label_268c9c:
    if (ctx->pc == 0x268C9Cu) {
        ctx->pc = 0x268C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C98u;
        // 0x268c9c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268CA0u;
        goto label_268ca0;
    }
    ctx->pc = 0x268C98u;
    SET_GPR_U32(ctx, 31, 0x268CA0u);
    ctx->pc = 0x268C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268C98u;
    // 0x268c9c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268C98u, 0x268CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268CA0u;
label_268ca0:
    // 0x268ca0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268ca4:
    // 0x268ca4: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x268ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_268ca8:
    // 0x268ca8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268cac:
    // 0x268cac: 0x8f828ab0  lw          $v0, -0x7550($gp)
    ctx->pc = 0x268cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
label_268cb0:
    // 0x268cb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_268cb4:
    if (ctx->pc == 0x268CB4u) {
        ctx->pc = 0x268CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CB0u;
        // 0x268cb4: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268CB8u;
        goto label_268cb8;
    }
    ctx->pc = 0x268CB0u;
    {
        const bool branch_taken_0x268cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CB0u;
        // 0x268cb4: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268cb0) {
            ctx->pc = 0x268CC8u;
            goto label_268cc8;
        }
    }
    ctx->pc = 0x268CB8u;
label_268cb8:
    // 0x268cb8: 0xc0b8720  jal         func_2E1C80
label_268cbc:
    if (ctx->pc == 0x268CBCu) {
        ctx->pc = 0x268CC0u;
        goto label_268cc0;
    }
    ctx->pc = 0x268CB8u;
    SET_GPR_U32(ctx, 31, 0x268CC0u);
    ctx->pc = 0x2E1C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1C80u, 0x268CB8u, 0x268CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268CC0u;
label_268cc0:
    // 0x268cc0: 0x100001a9  b           . + 4 + (0x1A9 << 2)
label_268cc4:
    if (ctx->pc == 0x268CC4u) {
        ctx->pc = 0x268CC8u;
        goto label_268cc8;
    }
    ctx->pc = 0x268CC0u;
    {
        const bool branch_taken_0x268cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268cc0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268CC8u;
label_268cc8:
    // 0x268cc8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268ccc:
    // 0x268ccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x268cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268cd0:
    // 0x268cd0: 0xc09a8f0  jal         func_26A3C0
label_268cd4:
    if (ctx->pc == 0x268CD4u) {
        ctx->pc = 0x268CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CD0u;
        // 0x268cd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268CD8u;
        goto label_268cd8;
    }
    ctx->pc = 0x268CD0u;
    SET_GPR_U32(ctx, 31, 0x268CD8u);
    ctx->pc = 0x268CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268CD0u;
    // 0x268cd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A3C0u, 0x268CD0u, 0x268CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268CD8u;
label_268cd8:
    // 0x268cd8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_268cdc:
    if (ctx->pc == 0x268CDCu) {
        ctx->pc = 0x268CE0u;
        goto label_268ce0;
    }
    ctx->pc = 0x268CD8u;
    {
        const bool branch_taken_0x268cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268cd8) {
            ctx->pc = 0x268D10u;
            goto label_268d10;
        }
    }
    ctx->pc = 0x268CE0u;
label_268ce0:
    // 0x268ce0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x268ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_268ce4:
    // 0x268ce4: 0x27a50154  addiu       $a1, $sp, 0x154
    ctx->pc = 0x268ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_268ce8:
    // 0x268ce8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x268ce8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_268cec:
    // 0x268cec: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x268cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
label_268cf0:
    // 0x268cf0: 0x24420430  addiu       $v0, $v0, 0x430
    ctx->pc = 0x268cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
label_268cf4:
    // 0x268cf4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x268cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_268cf8:
    // 0x268cf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_268cfc:
    // 0x268cfc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x268cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_268d00:
    // 0x268d00: 0xae040090  sw          $a0, 0x90($s0)
    ctx->pc = 0x268d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 4));
label_268d04:
    // 0x268d04: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x268d04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_268d08:
    // 0x268d08: 0x10000197  b           . + 4 + (0x197 << 2)
label_268d0c:
    if (ctx->pc == 0x268D0Cu) {
        ctx->pc = 0x268D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D08u;
        // 0x268d0c: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268D10u;
        goto label_268d10;
    }
    ctx->pc = 0x268D08u;
    {
        const bool branch_taken_0x268d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D08u;
        // 0x268d0c: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d08) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268D10u;
label_268d10:
    // 0x268d10: 0x10000195  b           . + 4 + (0x195 << 2)
label_268d14:
    if (ctx->pc == 0x268D14u) {
        ctx->pc = 0x268D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D10u;
        // 0x268d14: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268D18u;
        goto label_268d18;
    }
    ctx->pc = 0x268D10u;
    {
        const bool branch_taken_0x268d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D10u;
        // 0x268d14: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d10) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268D18u;
label_268d18:
    // 0x268d18: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268d1c:
    // 0x268d1c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268d20:
    // 0x268d20: 0xc049522  jal         func_125488
label_268d24:
    if (ctx->pc == 0x268D24u) {
        ctx->pc = 0x268D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D20u;
        // 0x268d24: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268D28u;
        goto label_268d28;
    }
    ctx->pc = 0x268D20u;
    SET_GPR_U32(ctx, 31, 0x268D28u);
    ctx->pc = 0x268D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268D20u;
    // 0x268d24: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268D20u, 0x268D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268D28u;
label_268d28:
    // 0x268d28: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268d2c:
    // 0x268d2c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x268d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_268d30:
    // 0x268d30: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268d34:
    // 0x268d34: 0x8f828ab0  lw          $v0, -0x7550($gp)
    ctx->pc = 0x268d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
label_268d38:
    // 0x268d38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_268d3c:
    if (ctx->pc == 0x268D3Cu) {
        ctx->pc = 0x268D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D38u;
        // 0x268d3c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268D40u;
        goto label_268d40;
    }
    ctx->pc = 0x268D38u;
    {
        const bool branch_taken_0x268d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D38u;
        // 0x268d3c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d38) {
            ctx->pc = 0x268D50u;
            goto label_268d50;
        }
    }
    ctx->pc = 0x268D40u;
label_268d40:
    // 0x268d40: 0xc0b8758  jal         func_2E1D60
label_268d44:
    if (ctx->pc == 0x268D44u) {
        ctx->pc = 0x268D48u;
        goto label_268d48;
    }
    ctx->pc = 0x268D40u;
    SET_GPR_U32(ctx, 31, 0x268D48u);
    ctx->pc = 0x2E1D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1D60u, 0x268D40u, 0x268D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268D48u;
label_268d48:
    // 0x268d48: 0x10000187  b           . + 4 + (0x187 << 2)
label_268d4c:
    if (ctx->pc == 0x268D4Cu) {
        ctx->pc = 0x268D50u;
        goto label_268d50;
    }
    ctx->pc = 0x268D48u;
    {
        const bool branch_taken_0x268d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268d48) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268D50u;
label_268d50:
    // 0x268d50: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268d54:
    // 0x268d54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x268d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268d58:
    // 0x268d58: 0xc09ab8c  jal         func_26AE30
label_268d5c:
    if (ctx->pc == 0x268D5Cu) {
        ctx->pc = 0x268D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D58u;
        // 0x268d5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268D60u;
        goto label_268d60;
    }
    ctx->pc = 0x268D58u;
    SET_GPR_U32(ctx, 31, 0x268D60u);
    ctx->pc = 0x268D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268D58u;
    // 0x268d5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AE30u, 0x268D58u, 0x268D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268D60u;
label_268d60:
    // 0x268d60: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_268d64:
    if (ctx->pc == 0x268D64u) {
        ctx->pc = 0x268D68u;
        goto label_268d68;
    }
    ctx->pc = 0x268D60u;
    {
        const bool branch_taken_0x268d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268d60) {
            ctx->pc = 0x268D98u;
            goto label_268d98;
        }
    }
    ctx->pc = 0x268D68u;
label_268d68:
    // 0x268d68: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x268d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_268d6c:
    // 0x268d6c: 0x27a50154  addiu       $a1, $sp, 0x154
    ctx->pc = 0x268d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_268d70:
    // 0x268d70: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x268d70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_268d74:
    // 0x268d74: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x268d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
label_268d78:
    // 0x268d78: 0x24420430  addiu       $v0, $v0, 0x430
    ctx->pc = 0x268d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
label_268d7c:
    // 0x268d7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x268d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_268d80:
    // 0x268d80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_268d84:
    // 0x268d84: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x268d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_268d88:
    // 0x268d88: 0xae040090  sw          $a0, 0x90($s0)
    ctx->pc = 0x268d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 4));
label_268d8c:
    // 0x268d8c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x268d8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_268d90:
    // 0x268d90: 0x10000175  b           . + 4 + (0x175 << 2)
label_268d94:
    if (ctx->pc == 0x268D94u) {
        ctx->pc = 0x268D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D90u;
        // 0x268d94: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268D98u;
        goto label_268d98;
    }
    ctx->pc = 0x268D90u;
    {
        const bool branch_taken_0x268d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D90u;
        // 0x268d94: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d90) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268D98u;
label_268d98:
    // 0x268d98: 0x10000173  b           . + 4 + (0x173 << 2)
label_268d9c:
    if (ctx->pc == 0x268D9Cu) {
        ctx->pc = 0x268D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D98u;
        // 0x268d9c: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268DA0u;
        goto label_268da0;
    }
    ctx->pc = 0x268D98u;
    {
        const bool branch_taken_0x268d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D98u;
        // 0x268d9c: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d98) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268DA0u;
label_268da0:
    // 0x268da0: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268da4:
    // 0x268da4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268da8:
    // 0x268da8: 0xc049522  jal         func_125488
label_268dac:
    if (ctx->pc == 0x268DACu) {
        ctx->pc = 0x268DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DA8u;
        // 0x268dac: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268DB0u;
        goto label_268db0;
    }
    ctx->pc = 0x268DA8u;
    SET_GPR_U32(ctx, 31, 0x268DB0u);
    ctx->pc = 0x268DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268DA8u;
    // 0x268dac: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268DA8u, 0x268DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268DB0u;
label_268db0:
    // 0x268db0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268db4:
    // 0x268db4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x268db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_268db8:
    // 0x268db8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268dbc:
    // 0x268dbc: 0x93a20150  lbu         $v0, 0x150($sp)
    ctx->pc = 0x268dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_268dc0:
    // 0x268dc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_268dc4:
    if (ctx->pc == 0x268DC4u) {
        ctx->pc = 0x268DC8u;
        goto label_268dc8;
    }
    ctx->pc = 0x268DC0u;
    {
        const bool branch_taken_0x268dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268dc0) {
            ctx->pc = 0x268DD8u;
            goto label_268dd8;
        }
    }
    ctx->pc = 0x268DC8u;
label_268dc8:
    // 0x268dc8: 0x93a20151  lbu         $v0, 0x151($sp)
    ctx->pc = 0x268dc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 337)));
label_268dcc:
    // 0x268dcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x268dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_268dd0:
    // 0x268dd0: 0x10000165  b           . + 4 + (0x165 << 2)
label_268dd4:
    if (ctx->pc == 0x268DD4u) {
        ctx->pc = 0x268DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DD0u;
        // 0x268dd4: 0xa3828a58  sb          $v0, -0x75A8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937176), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268DD8u;
        goto label_268dd8;
    }
    ctx->pc = 0x268DD0u;
    {
        const bool branch_taken_0x268dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DD0u;
        // 0x268dd4: 0xa3828a58  sb          $v0, -0x75A8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937176), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268dd0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268DD8u;
label_268dd8:
    // 0x268dd8: 0x93a20151  lbu         $v0, 0x151($sp)
    ctx->pc = 0x268dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 337)));
label_268ddc:
    // 0x268ddc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x268ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_268de0:
    // 0x268de0: 0x10000161  b           . + 4 + (0x161 << 2)
label_268de4:
    if (ctx->pc == 0x268DE4u) {
        ctx->pc = 0x268DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DE0u;
        // 0x268de4: 0xa3828a59  sb          $v0, -0x75A7($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937177), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268DE8u;
        goto label_268de8;
    }
    ctx->pc = 0x268DE0u;
    {
        const bool branch_taken_0x268de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DE0u;
        // 0x268de4: 0xa3828a59  sb          $v0, -0x75A7($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937177), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268de0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268DE8u;
label_268de8:
    // 0x268de8: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268dec:
    // 0x268dec: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268df0:
    // 0x268df0: 0xc049522  jal         func_125488
label_268df4:
    if (ctx->pc == 0x268DF4u) {
        ctx->pc = 0x268DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DF0u;
        // 0x268df4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268DF8u;
        goto label_268df8;
    }
    ctx->pc = 0x268DF0u;
    SET_GPR_U32(ctx, 31, 0x268DF8u);
    ctx->pc = 0x268DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268DF0u;
    // 0x268df4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268DF0u, 0x268DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268DF8u;
label_268df8:
    // 0x268df8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268dfc:
    // 0x268dfc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x268dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_268e00:
    // 0x268e00: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268e04:
    // 0x268e04: 0x93a50150  lbu         $a1, 0x150($sp)
    ctx->pc = 0x268e04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_268e08:
    // 0x268e08: 0xc099b04  jal         func_266C10
label_268e0c:
    if (ctx->pc == 0x268E0Cu) {
        ctx->pc = 0x268E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E08u;
        // 0x268e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268E10u;
        goto label_268e10;
    }
    ctx->pc = 0x268E08u;
    SET_GPR_U32(ctx, 31, 0x268E10u);
    ctx->pc = 0x268E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268E08u;
    // 0x268e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x268E08u, 0x268E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E10u;
label_268e10:
    // 0x268e10: 0x10400155  beqz        $v0, . + 4 + (0x155 << 2)
label_268e14:
    if (ctx->pc == 0x268E14u) {
        ctx->pc = 0x268E18u;
        goto label_268e18;
    }
    ctx->pc = 0x268E10u;
    {
        const bool branch_taken_0x268e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268e10) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268E18u;
label_268e18:
    // 0x268e18: 0x93a60152  lbu         $a2, 0x152($sp)
    ctx->pc = 0x268e18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 338)));
label_268e1c:
    // 0x268e1c: 0x24440530  addiu       $a0, $v0, 0x530
    ctx->pc = 0x268e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1328));
label_268e20:
    // 0x268e20: 0x93a70151  lbu         $a3, 0x151($sp)
    ctx->pc = 0x268e20u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 337)));
label_268e24:
    // 0x268e24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x268e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268e28:
    // 0x268e28: 0xc0b273c  jal         func_2C9CF0
label_268e2c:
    if (ctx->pc == 0x268E2Cu) {
        ctx->pc = 0x268E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E28u;
        // 0x268e2c: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268E30u;
        goto label_268e30;
    }
    ctx->pc = 0x268E28u;
    SET_GPR_U32(ctx, 31, 0x268E30u);
    ctx->pc = 0x268E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268E28u;
    // 0x268e2c: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9CF0u, 0x268E28u, 0x268E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E30u;
label_268e30:
    // 0x268e30: 0x1000014d  b           . + 4 + (0x14D << 2)
label_268e34:
    if (ctx->pc == 0x268E34u) {
        ctx->pc = 0x268E38u;
        goto label_268e38;
    }
    ctx->pc = 0x268E30u;
    {
        const bool branch_taken_0x268e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268e30) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268E38u;
label_268e38:
    // 0x268e38: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268e3c:
    // 0x268e3c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268e40:
    // 0x268e40: 0xc049522  jal         func_125488
label_268e44:
    if (ctx->pc == 0x268E44u) {
        ctx->pc = 0x268E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E40u;
        // 0x268e44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268E48u;
        goto label_268e48;
    }
    ctx->pc = 0x268E40u;
    SET_GPR_U32(ctx, 31, 0x268E48u);
    ctx->pc = 0x268E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268E40u;
    // 0x268e44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268E40u, 0x268E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E48u;
label_268e48:
    // 0x268e48: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x268e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268e4c:
    // 0x268e4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x268e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_268e50:
    // 0x268e50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x268e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_268e54:
    // 0x268e54: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x268e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_268e58:
    // 0x268e58: 0x93a50150  lbu         $a1, 0x150($sp)
    ctx->pc = 0x268e58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_268e5c:
    // 0x268e5c: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
label_268e60:
    if (ctx->pc == 0x268E60u) {
        ctx->pc = 0x268E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E5Cu;
        // 0x268e60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268E64u;
        goto label_268e64;
    }
    ctx->pc = 0x268E5Cu;
    {
        const bool branch_taken_0x268e5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x268E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E5Cu;
        // 0x268e60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e5c) {
            ctx->pc = 0x268E90u;
            goto label_268e90;
        }
    }
    ctx->pc = 0x268E64u;
label_268e64:
    // 0x268e64: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
label_268e68:
    if (ctx->pc == 0x268E68u) {
        ctx->pc = 0x268E6Cu;
        goto label_268e6c;
    }
    ctx->pc = 0x268E64u;
    {
        const bool branch_taken_0x268e64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x268e64) {
            ctx->pc = 0x268E78u;
            goto label_268e78;
        }
    }
    ctx->pc = 0x268E6Cu;
label_268e6c:
    // 0x268e6c: 0x1000000e  b           . + 4 + (0xE << 2)
label_268e70:
    if (ctx->pc == 0x268E70u) {
        ctx->pc = 0x268E74u;
        goto label_268e74;
    }
    ctx->pc = 0x268E6Cu;
    {
        const bool branch_taken_0x268e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268e6c) {
            ctx->pc = 0x268EA8u;
            goto label_268ea8;
        }
    }
    ctx->pc = 0x268E74u;
label_268e74:
    // 0x268e74: 0x0  nop
    ctx->pc = 0x268e74u;
    // NOP
label_268e78:
    // 0x268e78: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x268e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_268e7c:
    // 0x268e7c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x268e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_268e80:
    // 0x268e80: 0xc07cce0  jal         func_1F3380
label_268e84:
    if (ctx->pc == 0x268E84u) {
        ctx->pc = 0x268E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E80u;
        // 0x268e84: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268E88u;
        goto label_268e88;
    }
    ctx->pc = 0x268E80u;
    SET_GPR_U32(ctx, 31, 0x268E88u);
    ctx->pc = 0x268E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268E80u;
    // 0x268e84: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x268E80u, 0x268E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E88u;
label_268e88:
    // 0x268e88: 0x10000009  b           . + 4 + (0x9 << 2)
label_268e8c:
    if (ctx->pc == 0x268E8Cu) {
        ctx->pc = 0x268E90u;
        goto label_268e90;
    }
    ctx->pc = 0x268E88u;
    {
        const bool branch_taken_0x268e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268e88) {
            ctx->pc = 0x268EB0u;
            goto label_268eb0;
        }
    }
    ctx->pc = 0x268E90u;
label_268e90:
    // 0x268e90: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x268e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_268e94:
    // 0x268e94: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x268e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_268e98:
    // 0x268e98: 0xc07cce0  jal         func_1F3380
label_268e9c:
    if (ctx->pc == 0x268E9Cu) {
        ctx->pc = 0x268E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E98u;
        // 0x268e9c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268EA0u;
        goto label_268ea0;
    }
    ctx->pc = 0x268E98u;
    SET_GPR_U32(ctx, 31, 0x268EA0u);
    ctx->pc = 0x268E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268E98u;
    // 0x268e9c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x268E98u, 0x268EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268EA0u;
label_268ea0:
    // 0x268ea0: 0x10000003  b           . + 4 + (0x3 << 2)
label_268ea4:
    if (ctx->pc == 0x268EA4u) {
        ctx->pc = 0x268EA8u;
        goto label_268ea8;
    }
    ctx->pc = 0x268EA0u;
    {
        const bool branch_taken_0x268ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268ea0) {
            ctx->pc = 0x268EB0u;
            goto label_268eb0;
        }
    }
    ctx->pc = 0x268EA8u;
label_268ea8:
    // 0x268ea8: 0xc099b04  jal         func_266C10
label_268eac:
    if (ctx->pc == 0x268EACu) {
        ctx->pc = 0x268EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EA8u;
        // 0x268eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268EB0u;
        goto label_268eb0;
    }
    ctx->pc = 0x268EA8u;
    SET_GPR_U32(ctx, 31, 0x268EB0u);
    ctx->pc = 0x268EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268EA8u;
    // 0x268eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x268EA8u, 0x268EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268EB0u;
label_268eb0:
    // 0x268eb0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_268eb4:
    if (ctx->pc == 0x268EB4u) {
        ctx->pc = 0x268EB8u;
        goto label_268eb8;
    }
    ctx->pc = 0x268EB0u;
    {
        const bool branch_taken_0x268eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268eb0) {
            ctx->pc = 0x268EE8u;
            goto label_268ee8;
        }
    }
    ctx->pc = 0x268EB8u;
label_268eb8:
    // 0x268eb8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x268eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_268ebc:
    // 0x268ebc: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x268ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_268ec0:
    // 0x268ec0: 0x93a30150  lbu         $v1, 0x150($sp)
    ctx->pc = 0x268ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_268ec4:
    // 0x268ec4: 0x2862000d  slti        $v0, $v1, 0xD
    ctx->pc = 0x268ec4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
label_268ec8:
    // 0x268ec8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_268ecc:
    if (ctx->pc == 0x268ECCu) {
        ctx->pc = 0x268ED0u;
        goto label_268ed0;
    }
    ctx->pc = 0x268EC8u;
    {
        const bool branch_taken_0x268ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268ec8) {
            ctx->pc = 0x268EE0u;
            goto label_268ee0;
        }
    }
    ctx->pc = 0x268ED0u;
label_268ed0:
    // 0x268ed0: 0x2462fff3  addiu       $v0, $v1, -0xD
    ctx->pc = 0x268ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967283));
label_268ed4:
    // 0x268ed4: 0x10000124  b           . + 4 + (0x124 << 2)
label_268ed8:
    if (ctx->pc == 0x268ED8u) {
        ctx->pc = 0x268ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268ED4u;
        // 0x268ed8: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268EDCu;
        goto label_268edc;
    }
    ctx->pc = 0x268ED4u;
    {
        const bool branch_taken_0x268ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268ED4u;
        // 0x268ed8: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ed4) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268EDCu;
label_268edc:
    // 0x268edc: 0x0  nop
    ctx->pc = 0x268edcu;
    // NOP
label_268ee0:
    // 0x268ee0: 0x10000121  b           . + 4 + (0x121 << 2)
label_268ee4:
    if (ctx->pc == 0x268EE4u) {
        ctx->pc = 0x268EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EE0u;
        // 0x268ee4: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268EE8u;
        goto label_268ee8;
    }
    ctx->pc = 0x268EE0u;
    {
        const bool branch_taken_0x268ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EE0u;
        // 0x268ee4: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ee0) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268EE8u;
label_268ee8:
    // 0x268ee8: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x268ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_268eec:
    // 0x268eec: 0x1000011e  b           . + 4 + (0x11E << 2)
label_268ef0:
    if (ctx->pc == 0x268EF0u) {
        ctx->pc = 0x268EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EECu;
        // 0x268ef0: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268EF4u;
        goto label_268ef4;
    }
    ctx->pc = 0x268EECu;
    {
        const bool branch_taken_0x268eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EECu;
        // 0x268ef0: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268eec) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268EF4u;
label_268ef4:
    // 0x268ef4: 0x0  nop
    ctx->pc = 0x268ef4u;
    // NOP
label_268ef8:
    // 0x268ef8: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268efc:
    // 0x268efc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268f00:
    // 0x268f00: 0xc049522  jal         func_125488
label_268f04:
    if (ctx->pc == 0x268F04u) {
        ctx->pc = 0x268F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F00u;
        // 0x268f04: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268F08u;
        goto label_268f08;
    }
    ctx->pc = 0x268F00u;
    SET_GPR_U32(ctx, 31, 0x268F08u);
    ctx->pc = 0x268F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268F00u;
    // 0x268f04: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268F00u, 0x268F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F08u;
label_268f08:
    // 0x268f08: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268f0c:
    // 0x268f0c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x268f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_268f10:
    // 0x268f10: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268f14:
    // 0x268f14: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x268f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_268f18:
    // 0x268f18: 0xc099b44  jal         func_266D10
label_268f1c:
    if (ctx->pc == 0x268F1Cu) {
        ctx->pc = 0x268F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F18u;
        // 0x268f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268F20u;
        goto label_268f20;
    }
    ctx->pc = 0x268F18u;
    SET_GPR_U32(ctx, 31, 0x268F20u);
    ctx->pc = 0x268F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268F18u;
    // 0x268f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D10u, 0x268F18u, 0x268F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F20u;
label_268f20:
    // 0x268f20: 0x10400111  beqz        $v0, . + 4 + (0x111 << 2)
label_268f24:
    if (ctx->pc == 0x268F24u) {
        ctx->pc = 0x268F28u;
        goto label_268f28;
    }
    ctx->pc = 0x268F20u;
    {
        const bool branch_taken_0x268f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268f20) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268F28u;
label_268f28:
    // 0x268f28: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x268f28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_268f2c:
    // 0x268f2c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x268f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_268f30:
    // 0x268f30: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x268f30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_268f34:
    // 0x268f34: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_268f38:
    if (ctx->pc == 0x268F38u) {
        ctx->pc = 0x268F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F34u;
        // 0x268f38: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x268F3Cu;
        goto label_268f3c;
    }
    ctx->pc = 0x268F34u;
    {
        const bool branch_taken_0x268f34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x268F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F34u;
        // 0x268f38: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f34) {
            ctx->pc = 0x268F40u;
            goto label_268f40;
        }
    }
    ctx->pc = 0x268F3Cu;
label_268f3c:
    // 0x268f3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x268f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268f40:
    // 0x268f40: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_268f44:
    if (ctx->pc == 0x268F44u) {
        ctx->pc = 0x268F48u;
        goto label_268f48;
    }
    ctx->pc = 0x268F40u;
    {
        const bool branch_taken_0x268f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x268f40) {
            ctx->pc = 0x268F90u;
            goto label_268f90;
        }
    }
    ctx->pc = 0x268F48u;
label_268f48:
    // 0x268f48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x268f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268f4c:
    // 0x268f4c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x268f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_268f50:
    // 0x268f50: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x268f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_268f54:
    // 0x268f54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x268f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268f58:
    // 0x268f58: 0x244215b0  addiu       $v0, $v0, 0x15B0
    ctx->pc = 0x268f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5552));
label_268f5c:
    // 0x268f5c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x268f5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_268f60:
    // 0x268f60: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x268f60u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_268f64:
    // 0x268f64: 0xc7a20150  lwc1        $f2, 0x150($sp)
    ctx->pc = 0x268f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_268f68:
    // 0x268f68: 0x87a6015c  lh          $a2, 0x15C($sp)
    ctx->pc = 0x268f68u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 348)));
label_268f6c:
    // 0x268f6c: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x268f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_268f70:
    // 0x268f70: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x268f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268f74:
    // 0x268f74: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x268f74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_268f78:
    // 0x268f78: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x268f78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_268f7c:
    // 0x268f7c: 0xc0a68b8  jal         func_29A2E0
label_268f80:
    if (ctx->pc == 0x268F80u) {
        ctx->pc = 0x268F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F7Cu;
        // 0x268f80: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x268F84u;
        goto label_268f84;
    }
    ctx->pc = 0x268F7Cu;
    SET_GPR_U32(ctx, 31, 0x268F84u);
    ctx->pc = 0x268F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268F7Cu;
    // 0x268f80: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A2E0u, 0x268F7Cu, 0x268F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F84u;
label_268f84:
    // 0x268f84: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_268f88:
    if (ctx->pc == 0x268F88u) {
        ctx->pc = 0x268F8Cu;
        goto label_268f8c;
    }
    ctx->pc = 0x268F84u;
    {
        const bool branch_taken_0x268f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268f84) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268F8Cu;
label_268f8c:
    // 0x268f8c: 0x0  nop
    ctx->pc = 0x268f8cu;
    // NOP
label_268f90:
    // 0x268f90: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x268f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268f94:
    // 0x268f94: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x268f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_268f98:
    // 0x268f98: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x268f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268f9c:
    // 0x268f9c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x268f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_268fa0:
    // 0x268fa0: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x268fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268fa4:
    // 0x268fa4: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x268fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_268fa8:
    // 0x268fa8: 0x87a3015c  lh          $v1, 0x15C($sp)
    ctx->pc = 0x268fa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 348)));
label_268fac:
    // 0x268fac: 0x100000ee  b           . + 4 + (0xEE << 2)
label_268fb0:
    if (ctx->pc == 0x268FB0u) {
        ctx->pc = 0x268FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FACu;
        // 0x268fb0: 0xa44300c2  sh          $v1, 0xC2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 194), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268FB4u;
        goto label_268fb4;
    }
    ctx->pc = 0x268FACu;
    {
        const bool branch_taken_0x268fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FACu;
        // 0x268fb0: 0xa44300c2  sh          $v1, 0xC2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 194), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268fac) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x268FB4u;
label_268fb4:
    // 0x268fb4: 0x0  nop
    ctx->pc = 0x268fb4u;
    // NOP
label_268fb8:
    // 0x268fb8: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x268fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268fbc:
    // 0x268fbc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x268fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_268fc0:
    // 0x268fc0: 0xc049522  jal         func_125488
label_268fc4:
    if (ctx->pc == 0x268FC4u) {
        ctx->pc = 0x268FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FC0u;
        // 0x268fc4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268FC8u;
        goto label_268fc8;
    }
    ctx->pc = 0x268FC0u;
    SET_GPR_U32(ctx, 31, 0x268FC8u);
    ctx->pc = 0x268FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268FC0u;
    // 0x268fc4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x268FC0u, 0x268FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268FC8u;
label_268fc8:
    // 0x268fc8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x268fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_268fcc:
    // 0x268fcc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x268fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_268fd0:
    // 0x268fd0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x268fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_268fd4:
    // 0x268fd4: 0x93a30150  lbu         $v1, 0x150($sp)
    ctx->pc = 0x268fd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_268fd8:
    // 0x268fd8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_268fdc:
    if (ctx->pc == 0x268FDCu) {
        ctx->pc = 0x268FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FD8u;
        // 0x268fdc: 0x2607004c  addiu       $a3, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268FE0u;
        goto label_268fe0;
    }
    ctx->pc = 0x268FD8u;
    {
        const bool branch_taken_0x268fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x268FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FD8u;
        // 0x268fdc: 0x2607004c  addiu       $a3, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268fd8) {
            ctx->pc = 0x268FE8u;
            goto label_268fe8;
        }
    }
    ctx->pc = 0x268FE0u;
label_268fe0:
    // 0x268fe0: 0x1000000f  b           . + 4 + (0xF << 2)
label_268fe4:
    if (ctx->pc == 0x268FE4u) {
        ctx->pc = 0x268FE8u;
        goto label_268fe8;
    }
    ctx->pc = 0x268FE0u;
    {
        const bool branch_taken_0x268fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268fe0) {
            ctx->pc = 0x269020u;
            goto label_269020;
        }
    }
    ctx->pc = 0x268FE8u;
label_268fe8:
    // 0x268fe8: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x268fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
label_268fec:
    // 0x268fec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_268ff0:
    if (ctx->pc == 0x268FF0u) {
        ctx->pc = 0x268FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FECu;
        // 0x268ff0: 0x2462ff80  addiu       $v0, $v1, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268FF4u;
        goto label_268ff4;
    }
    ctx->pc = 0x268FECu;
    {
        const bool branch_taken_0x268fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FECu;
        // 0x268ff0: 0x2462ff80  addiu       $v0, $v1, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268fec) {
            ctx->pc = 0x269008u;
            goto label_269008;
        }
    }
    ctx->pc = 0x268FF4u;
label_268ff4:
    // 0x268ff4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x268ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_268ff8:
    // 0x268ff8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x268ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_268ffc:
    // 0x268ffc: 0x10000008  b           . + 4 + (0x8 << 2)
label_269000:
    if (ctx->pc == 0x269000u) {
        ctx->pc = 0x269000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FFCu;
        // 0x269000: 0x2447004c  addiu       $a3, $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269004u;
        goto label_269004;
    }
    ctx->pc = 0x268FFCu;
    {
        const bool branch_taken_0x268ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FFCu;
        // 0x269000: 0x2447004c  addiu       $a3, $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ffc) {
            ctx->pc = 0x269020u;
            goto label_269020;
        }
    }
    ctx->pc = 0x269004u;
label_269004:
    // 0x269004: 0x0  nop
    ctx->pc = 0x269004u;
    // NOP
label_269008:
    // 0x269008: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x269008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_26900c:
    // 0x26900c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x26900cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_269010:
    // 0x269010: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x269010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
label_269014:
    // 0x269014: 0x2442f8b0  addiu       $v0, $v0, -0x750
    ctx->pc = 0x269014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965424));
label_269018:
    // 0x269018: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x269018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26901c:
    // 0x26901c: 0x0  nop
    ctx->pc = 0x26901cu;
    // NOP
label_269020:
    // 0x269020: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x269020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_269024:
    // 0x269024: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x269024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
label_269028:
    // 0x269028: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x269028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
label_26902c:
    // 0x26902c: 0x3443a9e5  ori         $v1, $v0, 0xA9E5
    ctx->pc = 0x26902cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
label_269030:
    // 0x269030: 0x8fa60154  lw          $a2, 0x154($sp)
    ctx->pc = 0x269030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_269034:
    // 0x269034: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x269034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_269038:
    // 0x269038: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x269038u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_26903c:
    // 0x26903c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26903cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_269040:
    // 0x269040: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x269040u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_269044:
    // 0x269044: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x269044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_269048:
    // 0x269048: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x269048u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_26904c:
    // 0x26904c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26904cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_269050:
    // 0x269050: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x269050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_269054:
    // 0x269054: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x269054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_269058:
    // 0x269058: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x269058u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
label_26905c:
    // 0x26905c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x26905cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_269060:
    // 0x269060: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x269060u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_269064:
    // 0x269064: 0x0  nop
    ctx->pc = 0x269064u;
    // NOP
label_269068:
    // 0x269068: 0x0  nop
    ctx->pc = 0x269068u;
    // NOP
label_26906c:
    // 0x26906c: 0x1010  mfhi        $v0
    ctx->pc = 0x26906cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_269070:
    // 0x269070: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x269070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_269074:
    // 0x269074: 0x100000bc  b           . + 4 + (0xBC << 2)
label_269078:
    if (ctx->pc == 0x269078u) {
        ctx->pc = 0x269078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269074u;
        // 0x269078: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26907Cu;
        goto label_26907c;
    }
    ctx->pc = 0x269074u;
    {
        const bool branch_taken_0x269074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269074u;
        // 0x269078: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269074) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26907Cu;
label_26907c:
    // 0x26907c: 0x0  nop
    ctx->pc = 0x26907cu;
    // NOP
label_269080:
    // 0x269080: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x269080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_269084:
    // 0x269084: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x269084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_269088:
    // 0x269088: 0xc049522  jal         func_125488
label_26908c:
    if (ctx->pc == 0x26908Cu) {
        ctx->pc = 0x26908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269088u;
        // 0x26908c: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269090u;
        goto label_269090;
    }
    ctx->pc = 0x269088u;
    SET_GPR_U32(ctx, 31, 0x269090u);
    ctx->pc = 0x26908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269088u;
    // 0x26908c: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x269088u, 0x269090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269090u;
label_269090:
    // 0x269090: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x269090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_269094:
    // 0x269094: 0x3c11008c  lui         $s1, 0x8C
    ctx->pc = 0x269094u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)140 << 16));
label_269098:
    // 0x269098: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x269098u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26909c:
    // 0x26909c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26909cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2690a0:
    // 0x2690a0: 0x27b20150  addiu       $s2, $sp, 0x150
    ctx->pc = 0x2690a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2690a4:
    // 0x2690a4: 0x263104b0  addiu       $s1, $s1, 0x4B0
    ctx->pc = 0x2690a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
label_2690a8:
    // 0x2690a8: 0x24420011  addiu       $v0, $v0, 0x11
    ctx->pc = 0x2690a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
label_2690ac:
    // 0x2690ac: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2690acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2690b0:
    // 0x2690b0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x2690b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2690b4:
    // 0x2690b4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2690b8:
    if (ctx->pc == 0x2690B8u) {
        ctx->pc = 0x2690BCu;
        goto label_2690bc;
    }
    ctx->pc = 0x2690B4u;
    {
        const bool branch_taken_0x2690b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2690b4) {
            ctx->pc = 0x2690E0u;
            goto label_2690e0;
        }
    }
    ctx->pc = 0x2690BCu;
label_2690bc:
    // 0x2690bc: 0xc0b2dfc  jal         func_2CB7F0
label_2690c0:
    if (ctx->pc == 0x2690C0u) {
        ctx->pc = 0x2690C4u;
        goto label_2690c4;
    }
    ctx->pc = 0x2690BCu;
    SET_GPR_U32(ctx, 31, 0x2690C4u);
    ctx->pc = 0x2CB7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB7F0u, 0x2690BCu, 0x2690C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2690C4u;
label_2690c4:
    // 0x2690c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2690c8:
    if (ctx->pc == 0x2690C8u) {
        ctx->pc = 0x2690CCu;
        goto label_2690cc;
    }
    ctx->pc = 0x2690C4u;
    {
        const bool branch_taken_0x2690c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2690c4) {
            ctx->pc = 0x2690E0u;
            goto label_2690e0;
        }
    }
    ctx->pc = 0x2690CCu;
label_2690cc:
    // 0x2690cc: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x2690ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2690d0:
    // 0x2690d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2690d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2690d4:
    // 0x2690d4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2690d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2690d8:
    // 0x2690d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2690d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2690dc:
    // 0x2690dc: 0x0  nop
    ctx->pc = 0x2690dcu;
    // NOP
label_2690e0:
    // 0x2690e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2690e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2690e4:
    // 0x2690e4: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x2690e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
label_2690e8:
    // 0x2690e8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_2690ec:
    if (ctx->pc == 0x2690ECu) {
        ctx->pc = 0x2690ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690E8u;
        // 0x2690ec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2690F0u;
        goto label_2690f0;
    }
    ctx->pc = 0x2690E8u;
    {
        const bool branch_taken_0x2690e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2690ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690E8u;
        // 0x2690ec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690e8) {
            ctx->pc = 0x2690B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2690b0;
        }
    }
    ctx->pc = 0x2690F0u;
label_2690f0:
    // 0x2690f0: 0xc0969c8  jal         func_25A720
label_2690f4:
    if (ctx->pc == 0x2690F4u) {
        ctx->pc = 0x2690F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690F0u;
        // 0x2690f4: 0x2684ffff  addiu       $a0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2690F8u;
        goto label_2690f8;
    }
    ctx->pc = 0x2690F0u;
    SET_GPR_U32(ctx, 31, 0x2690F8u);
    ctx->pc = 0x2690F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2690F0u;
    // 0x2690f4: 0x2684ffff  addiu       $a0, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x2690F0u, 0x2690F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2690F8u;
label_2690f8:
    // 0x2690f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2690f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2690fc:
    // 0x2690fc: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x2690fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
label_269100:
    // 0x269100: 0x244204b0  addiu       $v0, $v0, 0x4B0
    ctx->pc = 0x269100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
label_269104:
    // 0x269104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_269108:
    // 0x269108: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x269108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_26910c:
    // 0x26910c: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
label_269110:
    if (ctx->pc == 0x269110u) {
        ctx->pc = 0x269114u;
        goto label_269114;
    }
    ctx->pc = 0x26910Cu;
    {
        const bool branch_taken_0x26910c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26910c) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x269114u;
label_269114:
    // 0x269114: 0x93a40150  lbu         $a0, 0x150($sp)
    ctx->pc = 0x269114u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_269118:
    // 0x269118: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x269118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26911c:
    // 0x26911c: 0xc0b2e04  jal         func_2CB810
label_269120:
    if (ctx->pc == 0x269120u) {
        ctx->pc = 0x269120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26911Cu;
        // 0x269120: 0x3302b  sltu        $a2, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x269124u;
        goto label_269124;
    }
    ctx->pc = 0x26911Cu;
    SET_GPR_U32(ctx, 31, 0x269124u);
    ctx->pc = 0x269120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26911Cu;
    // 0x269120: 0x3302b  sltu        $a2, $zero, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB810u, 0x26911Cu, 0x269124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269124u;
label_269124:
    // 0x269124: 0x10000090  b           . + 4 + (0x90 << 2)
label_269128:
    if (ctx->pc == 0x269128u) {
        ctx->pc = 0x26912Cu;
        goto label_26912c;
    }
    ctx->pc = 0x269124u;
    {
        const bool branch_taken_0x269124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269124) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26912Cu;
label_26912c:
    // 0x26912c: 0x0  nop
    ctx->pc = 0x26912cu;
    // NOP
label_269130:
    // 0x269130: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x269130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_269134:
    // 0x269134: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x269134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_269138:
    // 0x269138: 0xc0b34e0  jal         func_2CD380
label_26913c:
    if (ctx->pc == 0x26913Cu) {
        ctx->pc = 0x26913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269138u;
        // 0x26913c: 0x24846ca0  addiu       $a0, $a0, 0x6CA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269140u;
        goto label_269140;
    }
    ctx->pc = 0x269138u;
    SET_GPR_U32(ctx, 31, 0x269140u);
    ctx->pc = 0x26913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269138u;
    // 0x26913c: 0x24846ca0  addiu       $a0, $a0, 0x6CA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD380u, 0x269138u, 0x269140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269140u;
label_269140:
    // 0x269140: 0x10000089  b           . + 4 + (0x89 << 2)
label_269144:
    if (ctx->pc == 0x269144u) {
        ctx->pc = 0x269148u;
        goto label_269148;
    }
    ctx->pc = 0x269140u;
    {
        const bool branch_taken_0x269140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269140) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x269148u;
label_269148:
    // 0x269148: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x269148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26914c:
    // 0x26914c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x26914cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_269150:
    // 0x269150: 0xc049522  jal         func_125488
label_269154:
    if (ctx->pc == 0x269154u) {
        ctx->pc = 0x269154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269150u;
        // 0x269154: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269158u;
        goto label_269158;
    }
    ctx->pc = 0x269150u;
    SET_GPR_U32(ctx, 31, 0x269158u);
    ctx->pc = 0x269154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269150u;
    // 0x269154: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x269150u, 0x269158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269158u;
label_269158:
    // 0x269158: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x269158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26915c:
    // 0x26915c: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x26915cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
label_269160:
    // 0x269160: 0x240322b0  addiu       $v1, $zero, 0x22B0
    ctx->pc = 0x269160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8880));
label_269164:
    // 0x269164: 0x244295c0  addiu       $v0, $v0, -0x6A40
    ctx->pc = 0x269164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940096));
label_269168:
    // 0x269168: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x269168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_26916c:
    // 0x26916c: 0xae040030  sw          $a0, 0x30($s0)
    ctx->pc = 0x26916cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
label_269170:
    // 0x269170: 0x97a50150  lhu         $a1, 0x150($sp)
    ctx->pc = 0x269170u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_269174:
    // 0x269174: 0x93a60152  lbu         $a2, 0x152($sp)
    ctx->pc = 0x269174u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 338)));
label_269178:
    // 0x269178: 0x523c3  sra         $a0, $a1, 15
    ctx->pc = 0x269178u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 15));
label_26917c:
    // 0x26917c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x26917cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_269180:
    // 0x269180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_269184:
    // 0x269184: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x269184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_269188:
    // 0x269188: 0xc0a8edc  jal         func_2A3B70
label_26918c:
    if (ctx->pc == 0x26918Cu) {
        ctx->pc = 0x26918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269188u;
        // 0x26918c: 0x30a57fff  andi        $a1, $a1, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        ctx->pc = 0x269190u;
        goto label_269190;
    }
    ctx->pc = 0x269188u;
    SET_GPR_U32(ctx, 31, 0x269190u);
    ctx->pc = 0x26918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269188u;
    // 0x26918c: 0x30a57fff  andi        $a1, $a1, 0x7FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x269188u, 0x269190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269190u;
label_269190:
    // 0x269190: 0x10000075  b           . + 4 + (0x75 << 2)
label_269194:
    if (ctx->pc == 0x269194u) {
        ctx->pc = 0x269198u;
        goto label_269198;
    }
    ctx->pc = 0x269190u;
    {
        const bool branch_taken_0x269190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269190) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x269198u;
label_269198:
    // 0x269198: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x269198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26919c:
    // 0x26919c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x26919cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2691a0:
    // 0x2691a0: 0xc049522  jal         func_125488
label_2691a4:
    if (ctx->pc == 0x2691A4u) {
        ctx->pc = 0x2691A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691A0u;
        // 0x2691a4: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2691A8u;
        goto label_2691a8;
    }
    ctx->pc = 0x2691A0u;
    SET_GPR_U32(ctx, 31, 0x2691A8u);
    ctx->pc = 0x2691A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2691A0u;
    // 0x2691a4: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2691A0u, 0x2691A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691A8u;
label_2691a8:
    // 0x2691a8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2691a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2691ac:
    // 0x2691ac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2691acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2691b0:
    // 0x2691b0: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x2691b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2691b4:
    // 0x2691b4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2691b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2691b8:
    // 0x2691b8: 0xc7a50150  lwc1        $f5, 0x150($sp)
    ctx->pc = 0x2691b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2691bc:
    // 0x2691bc: 0x87a20172  lh          $v0, 0x172($sp)
    ctx->pc = 0x2691bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 370)));
label_2691c0:
    // 0x2691c0: 0xc7a40154  lwc1        $f4, 0x154($sp)
    ctx->pc = 0x2691c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2691c4:
    // 0x2691c4: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x2691c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_2691c8:
    // 0x2691c8: 0xc7a30158  lwc1        $f3, 0x158($sp)
    ctx->pc = 0x2691c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2691cc:
    // 0x2691cc: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x2691ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_2691d0:
    // 0x2691d0: 0xc7a2015c  lwc1        $f2, 0x15C($sp)
    ctx->pc = 0x2691d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2691d4:
    // 0x2691d4: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x2691d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2691d8:
    // 0x2691d8: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x2691d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2691dc:
    // 0x2691dc: 0xe7a500c0  swc1        $f5, 0xC0($sp)
    ctx->pc = 0x2691dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2691e0:
    // 0x2691e0: 0xe7a400c4  swc1        $f4, 0xC4($sp)
    ctx->pc = 0x2691e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2691e4:
    // 0x2691e4: 0xe7a300c8  swc1        $f3, 0xC8($sp)
    ctx->pc = 0x2691e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2691e8:
    // 0x2691e8: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x2691e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2691ec:
    // 0x2691ec: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x2691ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_2691f0:
    // 0x2691f0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2691f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2691f4:
    // 0x2691f4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2691f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2691f8:
    // 0x2691f8: 0x87a20174  lh          $v0, 0x174($sp)
    ctx->pc = 0x2691f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 372)));
label_2691fc:
    // 0x2691fc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2691fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_269200:
    // 0x269200: 0x87a20176  lh          $v0, 0x176($sp)
    ctx->pc = 0x269200u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 374)));
label_269204:
    // 0x269204: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x269204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_269208:
    // 0x269208: 0x87a60168  lh          $a2, 0x168($sp)
    ctx->pc = 0x269208u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 360)));
label_26920c:
    // 0x26920c: 0x97a7016a  lhu         $a3, 0x16A($sp)
    ctx->pc = 0x26920cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 362)));
label_269210:
    // 0x269210: 0x93a8016c  lbu         $t0, 0x16C($sp)
    ctx->pc = 0x269210u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 364)));
label_269214:
    // 0x269214: 0x93a9016d  lbu         $t1, 0x16D($sp)
    ctx->pc = 0x269214u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 365)));
label_269218:
    // 0x269218: 0x87aa016e  lh          $t2, 0x16E($sp)
    ctx->pc = 0x269218u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 366)));
label_26921c:
    // 0x26921c: 0x87ab0170  lh          $t3, 0x170($sp)
    ctx->pc = 0x26921cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 368)));
label_269220:
    // 0x269220: 0xc0fc47c  jal         func_3F11F0
label_269224:
    if (ctx->pc == 0x269224u) {
        ctx->pc = 0x269224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269220u;
        // 0x269224: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269228u;
        goto label_269228;
    }
    ctx->pc = 0x269220u;
    SET_GPR_U32(ctx, 31, 0x269228u);
    ctx->pc = 0x269224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269220u;
    // 0x269224: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F11F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F11F0u, 0x269220u, 0x269228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269228u;
label_269228:
    // 0x269228: 0x1000004f  b           . + 4 + (0x4F << 2)
label_26922c:
    if (ctx->pc == 0x26922Cu) {
        ctx->pc = 0x269230u;
        goto label_269230;
    }
    ctx->pc = 0x269228u;
    {
        const bool branch_taken_0x269228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269228) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x269230u;
label_269230:
    // 0x269230: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x269230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_269234:
    // 0x269234: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x269234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_269238:
    // 0x269238: 0xc049522  jal         func_125488
label_26923c:
    if (ctx->pc == 0x26923Cu) {
        ctx->pc = 0x26923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269238u;
        // 0x26923c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269240u;
        goto label_269240;
    }
    ctx->pc = 0x269238u;
    SET_GPR_U32(ctx, 31, 0x269240u);
    ctx->pc = 0x26923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269238u;
    // 0x26923c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x269238u, 0x269240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269240u;
label_269240:
    // 0x269240: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x269240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_269244:
    // 0x269244: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x269244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_269248:
    // 0x269248: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x269248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_26924c:
    // 0x26924c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x26924cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_269250:
    // 0x269250: 0xc7a20154  lwc1        $f2, 0x154($sp)
    ctx->pc = 0x269250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_269254:
    // 0x269254: 0x87a50150  lh          $a1, 0x150($sp)
    ctx->pc = 0x269254u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_269258:
    // 0x269258: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x269258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26925c:
    // 0x26925c: 0x93a60152  lbu         $a2, 0x152($sp)
    ctx->pc = 0x26925cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 338)));
label_269260:
    // 0x269260: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x269260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_269264:
    // 0x269264: 0x87a70160  lh          $a3, 0x160($sp)
    ctx->pc = 0x269264u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 352)));
label_269268:
    // 0x269268: 0x87a80162  lh          $t0, 0x162($sp)
    ctx->pc = 0x269268u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 354)));
label_26926c:
    // 0x26926c: 0x87a90164  lh          $t1, 0x164($sp)
    ctx->pc = 0x26926cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 356)));
label_269270:
    // 0x269270: 0x87aa0166  lh          $t2, 0x166($sp)
    ctx->pc = 0x269270u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 358)));
label_269274:
    // 0x269274: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x269274u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_269278:
    // 0x269278: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x269278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_26927c:
    // 0x26927c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x26927cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_269280:
    // 0x269280: 0xc0fc5a0  jal         func_3F1680
label_269284:
    if (ctx->pc == 0x269284u) {
        ctx->pc = 0x269284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269280u;
        // 0x269284: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x269288u;
        goto label_269288;
    }
    ctx->pc = 0x269280u;
    SET_GPR_U32(ctx, 31, 0x269288u);
    ctx->pc = 0x269284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269280u;
    // 0x269284: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1680u, 0x269280u, 0x269288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269288u;
label_269288:
    // 0x269288: 0x10000037  b           . + 4 + (0x37 << 2)
label_26928c:
    if (ctx->pc == 0x26928Cu) {
        ctx->pc = 0x269290u;
        goto label_269290;
    }
    ctx->pc = 0x269288u;
    {
        const bool branch_taken_0x269288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269288) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x269290u;
label_269290:
    // 0x269290: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x269290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_269294:
    // 0x269294: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x269294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_269298:
    // 0x269298: 0xc049522  jal         func_125488
label_26929c:
    if (ctx->pc == 0x26929Cu) {
        ctx->pc = 0x26929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269298u;
        // 0x26929c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2692A0u;
        goto label_2692a0;
    }
    ctx->pc = 0x269298u;
    SET_GPR_U32(ctx, 31, 0x2692A0u);
    ctx->pc = 0x26929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269298u;
    // 0x26929c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x269298u, 0x2692A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2692A0u;
label_2692a0:
    // 0x2692a0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2692a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2692a4:
    // 0x2692a4: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x2692a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2692a8:
    // 0x2692a8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2692a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2692ac:
    // 0x2692ac: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2692acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_2692b0:
    // 0x2692b0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2692b4:
    if (ctx->pc == 0x2692B4u) {
        ctx->pc = 0x2692B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692B0u;
        // 0x2692b4: 0xae040030  sw          $a0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2692B8u;
        goto label_2692b8;
    }
    ctx->pc = 0x2692B0u;
    {
        const bool branch_taken_0x2692b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2692B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692B0u;
        // 0x2692b4: 0xae040030  sw          $a0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2692b0) {
            ctx->pc = 0x2692D4u;
            goto label_2692d4;
        }
    }
    ctx->pc = 0x2692B8u;
label_2692b8:
    // 0x2692b8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2692b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2692bc:
    // 0x2692bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2692bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2692c0:
    // 0x2692c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2692c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2692c4:
    // 0x2692c4: 0x0  nop
    ctx->pc = 0x2692c4u;
    // NOP
label_2692c8:
    // 0x2692c8: 0x0  nop
    ctx->pc = 0x2692c8u;
    // NOP
label_2692cc:
    // 0x2692cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2692d0:
    if (ctx->pc == 0x2692D0u) {
        ctx->pc = 0x2692D4u;
        goto label_2692d4;
    }
    ctx->pc = 0x2692CCu;
    {
        const bool branch_taken_0x2692cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2692cc) {
            ctx->pc = 0x2692B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2692b8;
        }
    }
    ctx->pc = 0x2692D4u;
label_2692d4:
    // 0x2692d4: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x2692d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2692d8:
    // 0x2692d8: 0xc7a20154  lwc1        $f2, 0x154($sp)
    ctx->pc = 0x2692d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2692dc:
    // 0x2692dc: 0x8f828880  lw          $v0, -0x7780($gp)
    ctx->pc = 0x2692dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936704)));
label_2692e0:
    // 0x2692e0: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x2692e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2692e4:
    // 0x2692e4: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x2692e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2692e8:
    // 0x2692e8: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x2692e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
label_2692ec:
    // 0x2692ec: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x2692ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
label_2692f0:
    // 0x2692f0: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2692f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2692f4:
    // 0x2692f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2692f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2692f8:
    // 0x2692f8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2692f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_2692fc:
    // 0x2692fc: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x2692fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_269300:
    // 0x269300: 0x3465000d  ori         $a1, $v1, 0xD
    ctx->pc = 0x269300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
label_269304:
    // 0x269304: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x269304u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_269308:
    // 0x269308: 0xaf868880  sw          $a2, -0x7780($gp)
    ctx->pc = 0x269308u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936704), GPR_U32(ctx, 6));
label_26930c:
    // 0x26930c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x26930cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_269310:
    // 0x269310: 0xc0c99d0  jal         func_326740
label_269314:
    if (ctx->pc == 0x269314u) {
        ctx->pc = 0x269314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269310u;
        // 0x269314: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x269318u;
        goto label_269318;
    }
    ctx->pc = 0x269310u;
    SET_GPR_U32(ctx, 31, 0x269318u);
    ctx->pc = 0x269314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269310u;
    // 0x269314: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x269310u, 0x269318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269318u;
label_269318:
    // 0x269318: 0x10000013  b           . + 4 + (0x13 << 2)
label_26931c:
    if (ctx->pc == 0x26931Cu) {
        ctx->pc = 0x269320u;
        goto label_269320;
    }
    ctx->pc = 0x269318u;
    {
        const bool branch_taken_0x269318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269318) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x269320u;
label_269320:
    // 0x269320: 0xc0ed2ac  jal         func_3B4AB0
label_269324:
    if (ctx->pc == 0x269324u) {
        ctx->pc = 0x269328u;
        goto label_269328;
    }
    ctx->pc = 0x269320u;
    SET_GPR_U32(ctx, 31, 0x269328u);
    ctx->pc = 0x3B4AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4AB0u, 0x269320u, 0x269328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269328u;
label_269328:
    // 0x269328: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_26932c:
    if (ctx->pc == 0x26932Cu) {
        ctx->pc = 0x26932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269328u;
        // 0x26932c: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269330u;
        goto label_269330;
    }
    ctx->pc = 0x269328u;
    {
        const bool branch_taken_0x269328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269328u;
        // 0x26932c: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269328) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x269330u;
label_269330:
    // 0x269330: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x269330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_269334:
    // 0x269334: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x269334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
label_269338:
    // 0x269338: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x269338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26933c:
    // 0x26933c: 0xc0bd35c  jal         func_2F4D70
label_269340:
    if (ctx->pc == 0x269340u) {
        ctx->pc = 0x269340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26933Cu;
        // 0x269340: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269344u;
        goto label_269344;
    }
    ctx->pc = 0x26933Cu;
    SET_GPR_U32(ctx, 31, 0x269344u);
    ctx->pc = 0x269340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26933Cu;
    // 0x269340: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x26933Cu, 0x269344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269344u;
label_269344:
    // 0x269344: 0x10000008  b           . + 4 + (0x8 << 2)
label_269348:
    if (ctx->pc == 0x269348u) {
        ctx->pc = 0x26934Cu;
        goto label_26934c;
    }
    ctx->pc = 0x269344u;
    {
        const bool branch_taken_0x269344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269344) {
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26934Cu;
label_26934c:
    // 0x26934c: 0x0  nop
    ctx->pc = 0x26934cu;
    // NOP
label_269350:
    // 0x269350: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x269350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_269354:
    // 0x269354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x269354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269358:
    // 0x269358: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x269358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_26935c:
    // 0x26935c: 0x10000004  b           . + 4 + (0x4 << 2)
label_269360:
    if (ctx->pc == 0x269360u) {
        ctx->pc = 0x269360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26935Cu;
        // 0x269360: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269364u;
        goto label_269364;
    }
    ctx->pc = 0x26935Cu;
    {
        const bool branch_taken_0x26935c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26935Cu;
        // 0x269360: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26935c) {
            ctx->pc = 0x269370u;
            goto label_269370;
        }
    }
    ctx->pc = 0x269364u;
label_269364:
    // 0x269364: 0x0  nop
    ctx->pc = 0x269364u;
    // NOP
label_269368:
    // 0x269368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26936c:
    // 0x26936c: 0x0  nop
    ctx->pc = 0x26936cu;
    // NOP
label_269370:
    // 0x269370: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x269370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_269374:
    // 0x269374: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x269374u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_269378:
    // 0x269378: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x269378u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26937c:
    // 0x26937c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x26937cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_269380:
    // 0x269380: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x269380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_269384:
    // 0x269384: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x269384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_269388:
    // 0x269388: 0x3e00008  jr          $ra
label_26938c:
    if (ctx->pc == 0x26938Cu) {
        ctx->pc = 0x26938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269388u;
        // 0x26938c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269390u;
        goto label_fallthrough_0x269388;
    }
    ctx->pc = 0x269388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269388u;
        // 0x26938c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x269388:
    ctx->pc = 0x269390u;
}
