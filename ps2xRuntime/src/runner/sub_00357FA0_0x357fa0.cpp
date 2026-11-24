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

// Function: sub_00357FA0
// Address: 0x357fa0 - 0x358bdc
void sub_00357FA0_0x357fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357FA0_0x357fa0");
#endif

    switch (ctx->pc) {
        case 0x357fa0u: goto label_357fa0;
        case 0x357fa4u: goto label_357fa4;
        case 0x357fa8u: goto label_357fa8;
        case 0x357facu: goto label_357fac;
        case 0x357fb0u: goto label_357fb0;
        case 0x357fb4u: goto label_357fb4;
        case 0x357fb8u: goto label_357fb8;
        case 0x357fbcu: goto label_357fbc;
        case 0x357fc0u: goto label_357fc0;
        case 0x357fc4u: goto label_357fc4;
        case 0x357fc8u: goto label_357fc8;
        case 0x357fccu: goto label_357fcc;
        case 0x357fd0u: goto label_357fd0;
        case 0x357fd4u: goto label_357fd4;
        case 0x357fd8u: goto label_357fd8;
        case 0x357fdcu: goto label_357fdc;
        case 0x357fe0u: goto label_357fe0;
        case 0x357fe4u: goto label_357fe4;
        case 0x357fe8u: goto label_357fe8;
        case 0x357fecu: goto label_357fec;
        case 0x357ff0u: goto label_357ff0;
        case 0x357ff4u: goto label_357ff4;
        case 0x357ff8u: goto label_357ff8;
        case 0x357ffcu: goto label_357ffc;
        case 0x358000u: goto label_358000;
        case 0x358004u: goto label_358004;
        case 0x358008u: goto label_358008;
        case 0x35800cu: goto label_35800c;
        case 0x358010u: goto label_358010;
        case 0x358014u: goto label_358014;
        case 0x358018u: goto label_358018;
        case 0x35801cu: goto label_35801c;
        case 0x358020u: goto label_358020;
        case 0x358024u: goto label_358024;
        case 0x358028u: goto label_358028;
        case 0x35802cu: goto label_35802c;
        case 0x358030u: goto label_358030;
        case 0x358034u: goto label_358034;
        case 0x358038u: goto label_358038;
        case 0x35803cu: goto label_35803c;
        case 0x358040u: goto label_358040;
        case 0x358044u: goto label_358044;
        case 0x358048u: goto label_358048;
        case 0x35804cu: goto label_35804c;
        case 0x358050u: goto label_358050;
        case 0x358054u: goto label_358054;
        case 0x358058u: goto label_358058;
        case 0x35805cu: goto label_35805c;
        case 0x358060u: goto label_358060;
        case 0x358064u: goto label_358064;
        case 0x358068u: goto label_358068;
        case 0x35806cu: goto label_35806c;
        case 0x358070u: goto label_358070;
        case 0x358074u: goto label_358074;
        case 0x358078u: goto label_358078;
        case 0x35807cu: goto label_35807c;
        case 0x358080u: goto label_358080;
        case 0x358084u: goto label_358084;
        case 0x358088u: goto label_358088;
        case 0x35808cu: goto label_35808c;
        case 0x358090u: goto label_358090;
        case 0x358094u: goto label_358094;
        case 0x358098u: goto label_358098;
        case 0x35809cu: goto label_35809c;
        case 0x3580a0u: goto label_3580a0;
        case 0x3580a4u: goto label_3580a4;
        case 0x3580a8u: goto label_3580a8;
        case 0x3580acu: goto label_3580ac;
        case 0x3580b0u: goto label_3580b0;
        case 0x3580b4u: goto label_3580b4;
        case 0x3580b8u: goto label_3580b8;
        case 0x3580bcu: goto label_3580bc;
        case 0x3580c0u: goto label_3580c0;
        case 0x3580c4u: goto label_3580c4;
        case 0x3580c8u: goto label_3580c8;
        case 0x3580ccu: goto label_3580cc;
        case 0x3580d0u: goto label_3580d0;
        case 0x3580d4u: goto label_3580d4;
        case 0x3580d8u: goto label_3580d8;
        case 0x3580dcu: goto label_3580dc;
        case 0x3580e0u: goto label_3580e0;
        case 0x3580e4u: goto label_3580e4;
        case 0x3580e8u: goto label_3580e8;
        case 0x3580ecu: goto label_3580ec;
        case 0x3580f0u: goto label_3580f0;
        case 0x3580f4u: goto label_3580f4;
        case 0x3580f8u: goto label_3580f8;
        case 0x3580fcu: goto label_3580fc;
        case 0x358100u: goto label_358100;
        case 0x358104u: goto label_358104;
        case 0x358108u: goto label_358108;
        case 0x35810cu: goto label_35810c;
        case 0x358110u: goto label_358110;
        case 0x358114u: goto label_358114;
        case 0x358118u: goto label_358118;
        case 0x35811cu: goto label_35811c;
        case 0x358120u: goto label_358120;
        case 0x358124u: goto label_358124;
        case 0x358128u: goto label_358128;
        case 0x35812cu: goto label_35812c;
        case 0x358130u: goto label_358130;
        case 0x358134u: goto label_358134;
        case 0x358138u: goto label_358138;
        case 0x35813cu: goto label_35813c;
        case 0x358140u: goto label_358140;
        case 0x358144u: goto label_358144;
        case 0x358148u: goto label_358148;
        case 0x35814cu: goto label_35814c;
        case 0x358150u: goto label_358150;
        case 0x358154u: goto label_358154;
        case 0x358158u: goto label_358158;
        case 0x35815cu: goto label_35815c;
        case 0x358160u: goto label_358160;
        case 0x358164u: goto label_358164;
        case 0x358168u: goto label_358168;
        case 0x35816cu: goto label_35816c;
        case 0x358170u: goto label_358170;
        case 0x358174u: goto label_358174;
        case 0x358178u: goto label_358178;
        case 0x35817cu: goto label_35817c;
        case 0x358180u: goto label_358180;
        case 0x358184u: goto label_358184;
        case 0x358188u: goto label_358188;
        case 0x35818cu: goto label_35818c;
        case 0x358190u: goto label_358190;
        case 0x358194u: goto label_358194;
        case 0x358198u: goto label_358198;
        case 0x35819cu: goto label_35819c;
        case 0x3581a0u: goto label_3581a0;
        case 0x3581a4u: goto label_3581a4;
        case 0x3581a8u: goto label_3581a8;
        case 0x3581acu: goto label_3581ac;
        case 0x3581b0u: goto label_3581b0;
        case 0x3581b4u: goto label_3581b4;
        case 0x3581b8u: goto label_3581b8;
        case 0x3581bcu: goto label_3581bc;
        case 0x3581c0u: goto label_3581c0;
        case 0x3581c4u: goto label_3581c4;
        case 0x3581c8u: goto label_3581c8;
        case 0x3581ccu: goto label_3581cc;
        case 0x3581d0u: goto label_3581d0;
        case 0x3581d4u: goto label_3581d4;
        case 0x3581d8u: goto label_3581d8;
        case 0x3581dcu: goto label_3581dc;
        case 0x3581e0u: goto label_3581e0;
        case 0x3581e4u: goto label_3581e4;
        case 0x3581e8u: goto label_3581e8;
        case 0x3581ecu: goto label_3581ec;
        case 0x3581f0u: goto label_3581f0;
        case 0x3581f4u: goto label_3581f4;
        case 0x3581f8u: goto label_3581f8;
        case 0x3581fcu: goto label_3581fc;
        case 0x358200u: goto label_358200;
        case 0x358204u: goto label_358204;
        case 0x358208u: goto label_358208;
        case 0x35820cu: goto label_35820c;
        case 0x358210u: goto label_358210;
        case 0x358214u: goto label_358214;
        case 0x358218u: goto label_358218;
        case 0x35821cu: goto label_35821c;
        case 0x358220u: goto label_358220;
        case 0x358224u: goto label_358224;
        case 0x358228u: goto label_358228;
        case 0x35822cu: goto label_35822c;
        case 0x358230u: goto label_358230;
        case 0x358234u: goto label_358234;
        case 0x358238u: goto label_358238;
        case 0x35823cu: goto label_35823c;
        case 0x358240u: goto label_358240;
        case 0x358244u: goto label_358244;
        case 0x358248u: goto label_358248;
        case 0x35824cu: goto label_35824c;
        case 0x358250u: goto label_358250;
        case 0x358254u: goto label_358254;
        case 0x358258u: goto label_358258;
        case 0x35825cu: goto label_35825c;
        case 0x358260u: goto label_358260;
        case 0x358264u: goto label_358264;
        case 0x358268u: goto label_358268;
        case 0x35826cu: goto label_35826c;
        case 0x358270u: goto label_358270;
        case 0x358274u: goto label_358274;
        case 0x358278u: goto label_358278;
        case 0x35827cu: goto label_35827c;
        case 0x358280u: goto label_358280;
        case 0x358284u: goto label_358284;
        case 0x358288u: goto label_358288;
        case 0x35828cu: goto label_35828c;
        case 0x358290u: goto label_358290;
        case 0x358294u: goto label_358294;
        case 0x358298u: goto label_358298;
        case 0x35829cu: goto label_35829c;
        case 0x3582a0u: goto label_3582a0;
        case 0x3582a4u: goto label_3582a4;
        case 0x3582a8u: goto label_3582a8;
        case 0x3582acu: goto label_3582ac;
        case 0x3582b0u: goto label_3582b0;
        case 0x3582b4u: goto label_3582b4;
        case 0x3582b8u: goto label_3582b8;
        case 0x3582bcu: goto label_3582bc;
        case 0x3582c0u: goto label_3582c0;
        case 0x3582c4u: goto label_3582c4;
        case 0x3582c8u: goto label_3582c8;
        case 0x3582ccu: goto label_3582cc;
        case 0x3582d0u: goto label_3582d0;
        case 0x3582d4u: goto label_3582d4;
        case 0x3582d8u: goto label_3582d8;
        case 0x3582dcu: goto label_3582dc;
        case 0x3582e0u: goto label_3582e0;
        case 0x3582e4u: goto label_3582e4;
        case 0x3582e8u: goto label_3582e8;
        case 0x3582ecu: goto label_3582ec;
        case 0x3582f0u: goto label_3582f0;
        case 0x3582f4u: goto label_3582f4;
        case 0x3582f8u: goto label_3582f8;
        case 0x3582fcu: goto label_3582fc;
        case 0x358300u: goto label_358300;
        case 0x358304u: goto label_358304;
        case 0x358308u: goto label_358308;
        case 0x35830cu: goto label_35830c;
        case 0x358310u: goto label_358310;
        case 0x358314u: goto label_358314;
        case 0x358318u: goto label_358318;
        case 0x35831cu: goto label_35831c;
        case 0x358320u: goto label_358320;
        case 0x358324u: goto label_358324;
        case 0x358328u: goto label_358328;
        case 0x35832cu: goto label_35832c;
        case 0x358330u: goto label_358330;
        case 0x358334u: goto label_358334;
        case 0x358338u: goto label_358338;
        case 0x35833cu: goto label_35833c;
        case 0x358340u: goto label_358340;
        case 0x358344u: goto label_358344;
        case 0x358348u: goto label_358348;
        case 0x35834cu: goto label_35834c;
        case 0x358350u: goto label_358350;
        case 0x358354u: goto label_358354;
        case 0x358358u: goto label_358358;
        case 0x35835cu: goto label_35835c;
        case 0x358360u: goto label_358360;
        case 0x358364u: goto label_358364;
        case 0x358368u: goto label_358368;
        case 0x35836cu: goto label_35836c;
        case 0x358370u: goto label_358370;
        case 0x358374u: goto label_358374;
        case 0x358378u: goto label_358378;
        case 0x35837cu: goto label_35837c;
        case 0x358380u: goto label_358380;
        case 0x358384u: goto label_358384;
        case 0x358388u: goto label_358388;
        case 0x35838cu: goto label_35838c;
        case 0x358390u: goto label_358390;
        case 0x358394u: goto label_358394;
        case 0x358398u: goto label_358398;
        case 0x35839cu: goto label_35839c;
        case 0x3583a0u: goto label_3583a0;
        case 0x3583a4u: goto label_3583a4;
        case 0x3583a8u: goto label_3583a8;
        case 0x3583acu: goto label_3583ac;
        case 0x3583b0u: goto label_3583b0;
        case 0x3583b4u: goto label_3583b4;
        case 0x3583b8u: goto label_3583b8;
        case 0x3583bcu: goto label_3583bc;
        case 0x3583c0u: goto label_3583c0;
        case 0x3583c4u: goto label_3583c4;
        case 0x3583c8u: goto label_3583c8;
        case 0x3583ccu: goto label_3583cc;
        case 0x3583d0u: goto label_3583d0;
        case 0x3583d4u: goto label_3583d4;
        case 0x3583d8u: goto label_3583d8;
        case 0x3583dcu: goto label_3583dc;
        case 0x3583e0u: goto label_3583e0;
        case 0x3583e4u: goto label_3583e4;
        case 0x3583e8u: goto label_3583e8;
        case 0x3583ecu: goto label_3583ec;
        case 0x3583f0u: goto label_3583f0;
        case 0x3583f4u: goto label_3583f4;
        case 0x3583f8u: goto label_3583f8;
        case 0x3583fcu: goto label_3583fc;
        case 0x358400u: goto label_358400;
        case 0x358404u: goto label_358404;
        case 0x358408u: goto label_358408;
        case 0x35840cu: goto label_35840c;
        case 0x358410u: goto label_358410;
        case 0x358414u: goto label_358414;
        case 0x358418u: goto label_358418;
        case 0x35841cu: goto label_35841c;
        case 0x358420u: goto label_358420;
        case 0x358424u: goto label_358424;
        case 0x358428u: goto label_358428;
        case 0x35842cu: goto label_35842c;
        case 0x358430u: goto label_358430;
        case 0x358434u: goto label_358434;
        case 0x358438u: goto label_358438;
        case 0x35843cu: goto label_35843c;
        case 0x358440u: goto label_358440;
        case 0x358444u: goto label_358444;
        case 0x358448u: goto label_358448;
        case 0x35844cu: goto label_35844c;
        case 0x358450u: goto label_358450;
        case 0x358454u: goto label_358454;
        case 0x358458u: goto label_358458;
        case 0x35845cu: goto label_35845c;
        case 0x358460u: goto label_358460;
        case 0x358464u: goto label_358464;
        case 0x358468u: goto label_358468;
        case 0x35846cu: goto label_35846c;
        case 0x358470u: goto label_358470;
        case 0x358474u: goto label_358474;
        case 0x358478u: goto label_358478;
        case 0x35847cu: goto label_35847c;
        case 0x358480u: goto label_358480;
        case 0x358484u: goto label_358484;
        case 0x358488u: goto label_358488;
        case 0x35848cu: goto label_35848c;
        case 0x358490u: goto label_358490;
        case 0x358494u: goto label_358494;
        case 0x358498u: goto label_358498;
        case 0x35849cu: goto label_35849c;
        case 0x3584a0u: goto label_3584a0;
        case 0x3584a4u: goto label_3584a4;
        case 0x3584a8u: goto label_3584a8;
        case 0x3584acu: goto label_3584ac;
        case 0x3584b0u: goto label_3584b0;
        case 0x3584b4u: goto label_3584b4;
        case 0x3584b8u: goto label_3584b8;
        case 0x3584bcu: goto label_3584bc;
        case 0x3584c0u: goto label_3584c0;
        case 0x3584c4u: goto label_3584c4;
        case 0x3584c8u: goto label_3584c8;
        case 0x3584ccu: goto label_3584cc;
        case 0x3584d0u: goto label_3584d0;
        case 0x3584d4u: goto label_3584d4;
        case 0x3584d8u: goto label_3584d8;
        case 0x3584dcu: goto label_3584dc;
        case 0x3584e0u: goto label_3584e0;
        case 0x3584e4u: goto label_3584e4;
        case 0x3584e8u: goto label_3584e8;
        case 0x3584ecu: goto label_3584ec;
        case 0x3584f0u: goto label_3584f0;
        case 0x3584f4u: goto label_3584f4;
        case 0x3584f8u: goto label_3584f8;
        case 0x3584fcu: goto label_3584fc;
        case 0x358500u: goto label_358500;
        case 0x358504u: goto label_358504;
        case 0x358508u: goto label_358508;
        case 0x35850cu: goto label_35850c;
        case 0x358510u: goto label_358510;
        case 0x358514u: goto label_358514;
        case 0x358518u: goto label_358518;
        case 0x35851cu: goto label_35851c;
        case 0x358520u: goto label_358520;
        case 0x358524u: goto label_358524;
        case 0x358528u: goto label_358528;
        case 0x35852cu: goto label_35852c;
        case 0x358530u: goto label_358530;
        case 0x358534u: goto label_358534;
        case 0x358538u: goto label_358538;
        case 0x35853cu: goto label_35853c;
        case 0x358540u: goto label_358540;
        case 0x358544u: goto label_358544;
        case 0x358548u: goto label_358548;
        case 0x35854cu: goto label_35854c;
        case 0x358550u: goto label_358550;
        case 0x358554u: goto label_358554;
        case 0x358558u: goto label_358558;
        case 0x35855cu: goto label_35855c;
        case 0x358560u: goto label_358560;
        case 0x358564u: goto label_358564;
        case 0x358568u: goto label_358568;
        case 0x35856cu: goto label_35856c;
        case 0x358570u: goto label_358570;
        case 0x358574u: goto label_358574;
        case 0x358578u: goto label_358578;
        case 0x35857cu: goto label_35857c;
        case 0x358580u: goto label_358580;
        case 0x358584u: goto label_358584;
        case 0x358588u: goto label_358588;
        case 0x35858cu: goto label_35858c;
        case 0x358590u: goto label_358590;
        case 0x358594u: goto label_358594;
        case 0x358598u: goto label_358598;
        case 0x35859cu: goto label_35859c;
        case 0x3585a0u: goto label_3585a0;
        case 0x3585a4u: goto label_3585a4;
        case 0x3585a8u: goto label_3585a8;
        case 0x3585acu: goto label_3585ac;
        case 0x3585b0u: goto label_3585b0;
        case 0x3585b4u: goto label_3585b4;
        case 0x3585b8u: goto label_3585b8;
        case 0x3585bcu: goto label_3585bc;
        case 0x3585c0u: goto label_3585c0;
        case 0x3585c4u: goto label_3585c4;
        case 0x3585c8u: goto label_3585c8;
        case 0x3585ccu: goto label_3585cc;
        case 0x3585d0u: goto label_3585d0;
        case 0x3585d4u: goto label_3585d4;
        case 0x3585d8u: goto label_3585d8;
        case 0x3585dcu: goto label_3585dc;
        case 0x3585e0u: goto label_3585e0;
        case 0x3585e4u: goto label_3585e4;
        case 0x3585e8u: goto label_3585e8;
        case 0x3585ecu: goto label_3585ec;
        case 0x3585f0u: goto label_3585f0;
        case 0x3585f4u: goto label_3585f4;
        case 0x3585f8u: goto label_3585f8;
        case 0x3585fcu: goto label_3585fc;
        case 0x358600u: goto label_358600;
        case 0x358604u: goto label_358604;
        case 0x358608u: goto label_358608;
        case 0x35860cu: goto label_35860c;
        case 0x358610u: goto label_358610;
        case 0x358614u: goto label_358614;
        case 0x358618u: goto label_358618;
        case 0x35861cu: goto label_35861c;
        case 0x358620u: goto label_358620;
        case 0x358624u: goto label_358624;
        case 0x358628u: goto label_358628;
        case 0x35862cu: goto label_35862c;
        case 0x358630u: goto label_358630;
        case 0x358634u: goto label_358634;
        case 0x358638u: goto label_358638;
        case 0x35863cu: goto label_35863c;
        case 0x358640u: goto label_358640;
        case 0x358644u: goto label_358644;
        case 0x358648u: goto label_358648;
        case 0x35864cu: goto label_35864c;
        case 0x358650u: goto label_358650;
        case 0x358654u: goto label_358654;
        case 0x358658u: goto label_358658;
        case 0x35865cu: goto label_35865c;
        case 0x358660u: goto label_358660;
        case 0x358664u: goto label_358664;
        case 0x358668u: goto label_358668;
        case 0x35866cu: goto label_35866c;
        case 0x358670u: goto label_358670;
        case 0x358674u: goto label_358674;
        case 0x358678u: goto label_358678;
        case 0x35867cu: goto label_35867c;
        case 0x358680u: goto label_358680;
        case 0x358684u: goto label_358684;
        case 0x358688u: goto label_358688;
        case 0x35868cu: goto label_35868c;
        case 0x358690u: goto label_358690;
        case 0x358694u: goto label_358694;
        case 0x358698u: goto label_358698;
        case 0x35869cu: goto label_35869c;
        case 0x3586a0u: goto label_3586a0;
        case 0x3586a4u: goto label_3586a4;
        case 0x3586a8u: goto label_3586a8;
        case 0x3586acu: goto label_3586ac;
        case 0x3586b0u: goto label_3586b0;
        case 0x3586b4u: goto label_3586b4;
        case 0x3586b8u: goto label_3586b8;
        case 0x3586bcu: goto label_3586bc;
        case 0x3586c0u: goto label_3586c0;
        case 0x3586c4u: goto label_3586c4;
        case 0x3586c8u: goto label_3586c8;
        case 0x3586ccu: goto label_3586cc;
        case 0x3586d0u: goto label_3586d0;
        case 0x3586d4u: goto label_3586d4;
        case 0x3586d8u: goto label_3586d8;
        case 0x3586dcu: goto label_3586dc;
        case 0x3586e0u: goto label_3586e0;
        case 0x3586e4u: goto label_3586e4;
        case 0x3586e8u: goto label_3586e8;
        case 0x3586ecu: goto label_3586ec;
        case 0x3586f0u: goto label_3586f0;
        case 0x3586f4u: goto label_3586f4;
        case 0x3586f8u: goto label_3586f8;
        case 0x3586fcu: goto label_3586fc;
        case 0x358700u: goto label_358700;
        case 0x358704u: goto label_358704;
        case 0x358708u: goto label_358708;
        case 0x35870cu: goto label_35870c;
        case 0x358710u: goto label_358710;
        case 0x358714u: goto label_358714;
        case 0x358718u: goto label_358718;
        case 0x35871cu: goto label_35871c;
        case 0x358720u: goto label_358720;
        case 0x358724u: goto label_358724;
        case 0x358728u: goto label_358728;
        case 0x35872cu: goto label_35872c;
        case 0x358730u: goto label_358730;
        case 0x358734u: goto label_358734;
        case 0x358738u: goto label_358738;
        case 0x35873cu: goto label_35873c;
        case 0x358740u: goto label_358740;
        case 0x358744u: goto label_358744;
        case 0x358748u: goto label_358748;
        case 0x35874cu: goto label_35874c;
        case 0x358750u: goto label_358750;
        case 0x358754u: goto label_358754;
        case 0x358758u: goto label_358758;
        case 0x35875cu: goto label_35875c;
        case 0x358760u: goto label_358760;
        case 0x358764u: goto label_358764;
        case 0x358768u: goto label_358768;
        case 0x35876cu: goto label_35876c;
        case 0x358770u: goto label_358770;
        case 0x358774u: goto label_358774;
        case 0x358778u: goto label_358778;
        case 0x35877cu: goto label_35877c;
        case 0x358780u: goto label_358780;
        case 0x358784u: goto label_358784;
        case 0x358788u: goto label_358788;
        case 0x35878cu: goto label_35878c;
        case 0x358790u: goto label_358790;
        case 0x358794u: goto label_358794;
        case 0x358798u: goto label_358798;
        case 0x35879cu: goto label_35879c;
        case 0x3587a0u: goto label_3587a0;
        case 0x3587a4u: goto label_3587a4;
        case 0x3587a8u: goto label_3587a8;
        case 0x3587acu: goto label_3587ac;
        case 0x3587b0u: goto label_3587b0;
        case 0x3587b4u: goto label_3587b4;
        case 0x3587b8u: goto label_3587b8;
        case 0x3587bcu: goto label_3587bc;
        case 0x3587c0u: goto label_3587c0;
        case 0x3587c4u: goto label_3587c4;
        case 0x3587c8u: goto label_3587c8;
        case 0x3587ccu: goto label_3587cc;
        case 0x3587d0u: goto label_3587d0;
        case 0x3587d4u: goto label_3587d4;
        case 0x3587d8u: goto label_3587d8;
        case 0x3587dcu: goto label_3587dc;
        case 0x3587e0u: goto label_3587e0;
        case 0x3587e4u: goto label_3587e4;
        case 0x3587e8u: goto label_3587e8;
        case 0x3587ecu: goto label_3587ec;
        case 0x3587f0u: goto label_3587f0;
        case 0x3587f4u: goto label_3587f4;
        case 0x3587f8u: goto label_3587f8;
        case 0x3587fcu: goto label_3587fc;
        case 0x358800u: goto label_358800;
        case 0x358804u: goto label_358804;
        case 0x358808u: goto label_358808;
        case 0x35880cu: goto label_35880c;
        case 0x358810u: goto label_358810;
        case 0x358814u: goto label_358814;
        case 0x358818u: goto label_358818;
        case 0x35881cu: goto label_35881c;
        case 0x358820u: goto label_358820;
        case 0x358824u: goto label_358824;
        case 0x358828u: goto label_358828;
        case 0x35882cu: goto label_35882c;
        case 0x358830u: goto label_358830;
        case 0x358834u: goto label_358834;
        case 0x358838u: goto label_358838;
        case 0x35883cu: goto label_35883c;
        case 0x358840u: goto label_358840;
        case 0x358844u: goto label_358844;
        case 0x358848u: goto label_358848;
        case 0x35884cu: goto label_35884c;
        case 0x358850u: goto label_358850;
        case 0x358854u: goto label_358854;
        case 0x358858u: goto label_358858;
        case 0x35885cu: goto label_35885c;
        case 0x358860u: goto label_358860;
        case 0x358864u: goto label_358864;
        case 0x358868u: goto label_358868;
        case 0x35886cu: goto label_35886c;
        case 0x358870u: goto label_358870;
        case 0x358874u: goto label_358874;
        case 0x358878u: goto label_358878;
        case 0x35887cu: goto label_35887c;
        case 0x358880u: goto label_358880;
        case 0x358884u: goto label_358884;
        case 0x358888u: goto label_358888;
        case 0x35888cu: goto label_35888c;
        case 0x358890u: goto label_358890;
        case 0x358894u: goto label_358894;
        case 0x358898u: goto label_358898;
        case 0x35889cu: goto label_35889c;
        case 0x3588a0u: goto label_3588a0;
        case 0x3588a4u: goto label_3588a4;
        case 0x3588a8u: goto label_3588a8;
        case 0x3588acu: goto label_3588ac;
        case 0x3588b0u: goto label_3588b0;
        case 0x3588b4u: goto label_3588b4;
        case 0x3588b8u: goto label_3588b8;
        case 0x3588bcu: goto label_3588bc;
        case 0x3588c0u: goto label_3588c0;
        case 0x3588c4u: goto label_3588c4;
        case 0x3588c8u: goto label_3588c8;
        case 0x3588ccu: goto label_3588cc;
        case 0x3588d0u: goto label_3588d0;
        case 0x3588d4u: goto label_3588d4;
        case 0x3588d8u: goto label_3588d8;
        case 0x3588dcu: goto label_3588dc;
        case 0x3588e0u: goto label_3588e0;
        case 0x3588e4u: goto label_3588e4;
        case 0x3588e8u: goto label_3588e8;
        case 0x3588ecu: goto label_3588ec;
        case 0x3588f0u: goto label_3588f0;
        case 0x3588f4u: goto label_3588f4;
        case 0x3588f8u: goto label_3588f8;
        case 0x3588fcu: goto label_3588fc;
        case 0x358900u: goto label_358900;
        case 0x358904u: goto label_358904;
        case 0x358908u: goto label_358908;
        case 0x35890cu: goto label_35890c;
        case 0x358910u: goto label_358910;
        case 0x358914u: goto label_358914;
        case 0x358918u: goto label_358918;
        case 0x35891cu: goto label_35891c;
        case 0x358920u: goto label_358920;
        case 0x358924u: goto label_358924;
        case 0x358928u: goto label_358928;
        case 0x35892cu: goto label_35892c;
        case 0x358930u: goto label_358930;
        case 0x358934u: goto label_358934;
        case 0x358938u: goto label_358938;
        case 0x35893cu: goto label_35893c;
        case 0x358940u: goto label_358940;
        case 0x358944u: goto label_358944;
        case 0x358948u: goto label_358948;
        case 0x35894cu: goto label_35894c;
        case 0x358950u: goto label_358950;
        case 0x358954u: goto label_358954;
        case 0x358958u: goto label_358958;
        case 0x35895cu: goto label_35895c;
        case 0x358960u: goto label_358960;
        case 0x358964u: goto label_358964;
        case 0x358968u: goto label_358968;
        case 0x35896cu: goto label_35896c;
        case 0x358970u: goto label_358970;
        case 0x358974u: goto label_358974;
        case 0x358978u: goto label_358978;
        case 0x35897cu: goto label_35897c;
        case 0x358980u: goto label_358980;
        case 0x358984u: goto label_358984;
        case 0x358988u: goto label_358988;
        case 0x35898cu: goto label_35898c;
        case 0x358990u: goto label_358990;
        case 0x358994u: goto label_358994;
        case 0x358998u: goto label_358998;
        case 0x35899cu: goto label_35899c;
        case 0x3589a0u: goto label_3589a0;
        case 0x3589a4u: goto label_3589a4;
        case 0x3589a8u: goto label_3589a8;
        case 0x3589acu: goto label_3589ac;
        case 0x3589b0u: goto label_3589b0;
        case 0x3589b4u: goto label_3589b4;
        case 0x3589b8u: goto label_3589b8;
        case 0x3589bcu: goto label_3589bc;
        case 0x3589c0u: goto label_3589c0;
        case 0x3589c4u: goto label_3589c4;
        case 0x3589c8u: goto label_3589c8;
        case 0x3589ccu: goto label_3589cc;
        case 0x3589d0u: goto label_3589d0;
        case 0x3589d4u: goto label_3589d4;
        case 0x3589d8u: goto label_3589d8;
        case 0x3589dcu: goto label_3589dc;
        case 0x3589e0u: goto label_3589e0;
        case 0x3589e4u: goto label_3589e4;
        case 0x3589e8u: goto label_3589e8;
        case 0x3589ecu: goto label_3589ec;
        case 0x3589f0u: goto label_3589f0;
        case 0x3589f4u: goto label_3589f4;
        case 0x3589f8u: goto label_3589f8;
        case 0x3589fcu: goto label_3589fc;
        case 0x358a00u: goto label_358a00;
        case 0x358a04u: goto label_358a04;
        case 0x358a08u: goto label_358a08;
        case 0x358a0cu: goto label_358a0c;
        case 0x358a10u: goto label_358a10;
        case 0x358a14u: goto label_358a14;
        case 0x358a18u: goto label_358a18;
        case 0x358a1cu: goto label_358a1c;
        case 0x358a20u: goto label_358a20;
        case 0x358a24u: goto label_358a24;
        case 0x358a28u: goto label_358a28;
        case 0x358a2cu: goto label_358a2c;
        case 0x358a30u: goto label_358a30;
        case 0x358a34u: goto label_358a34;
        case 0x358a38u: goto label_358a38;
        case 0x358a3cu: goto label_358a3c;
        case 0x358a40u: goto label_358a40;
        case 0x358a44u: goto label_358a44;
        case 0x358a48u: goto label_358a48;
        case 0x358a4cu: goto label_358a4c;
        case 0x358a50u: goto label_358a50;
        case 0x358a54u: goto label_358a54;
        case 0x358a58u: goto label_358a58;
        case 0x358a5cu: goto label_358a5c;
        case 0x358a60u: goto label_358a60;
        case 0x358a64u: goto label_358a64;
        case 0x358a68u: goto label_358a68;
        case 0x358a6cu: goto label_358a6c;
        case 0x358a70u: goto label_358a70;
        case 0x358a74u: goto label_358a74;
        case 0x358a78u: goto label_358a78;
        case 0x358a7cu: goto label_358a7c;
        case 0x358a80u: goto label_358a80;
        case 0x358a84u: goto label_358a84;
        case 0x358a88u: goto label_358a88;
        case 0x358a8cu: goto label_358a8c;
        case 0x358a90u: goto label_358a90;
        case 0x358a94u: goto label_358a94;
        case 0x358a98u: goto label_358a98;
        case 0x358a9cu: goto label_358a9c;
        case 0x358aa0u: goto label_358aa0;
        case 0x358aa4u: goto label_358aa4;
        case 0x358aa8u: goto label_358aa8;
        case 0x358aacu: goto label_358aac;
        case 0x358ab0u: goto label_358ab0;
        case 0x358ab4u: goto label_358ab4;
        case 0x358ab8u: goto label_358ab8;
        case 0x358abcu: goto label_358abc;
        case 0x358ac0u: goto label_358ac0;
        case 0x358ac4u: goto label_358ac4;
        case 0x358ac8u: goto label_358ac8;
        case 0x358accu: goto label_358acc;
        case 0x358ad0u: goto label_358ad0;
        case 0x358ad4u: goto label_358ad4;
        case 0x358ad8u: goto label_358ad8;
        case 0x358adcu: goto label_358adc;
        case 0x358ae0u: goto label_358ae0;
        case 0x358ae4u: goto label_358ae4;
        case 0x358ae8u: goto label_358ae8;
        case 0x358aecu: goto label_358aec;
        case 0x358af0u: goto label_358af0;
        case 0x358af4u: goto label_358af4;
        case 0x358af8u: goto label_358af8;
        case 0x358afcu: goto label_358afc;
        case 0x358b00u: goto label_358b00;
        case 0x358b04u: goto label_358b04;
        case 0x358b08u: goto label_358b08;
        case 0x358b0cu: goto label_358b0c;
        case 0x358b10u: goto label_358b10;
        case 0x358b14u: goto label_358b14;
        case 0x358b18u: goto label_358b18;
        case 0x358b1cu: goto label_358b1c;
        case 0x358b20u: goto label_358b20;
        case 0x358b24u: goto label_358b24;
        case 0x358b28u: goto label_358b28;
        case 0x358b2cu: goto label_358b2c;
        case 0x358b30u: goto label_358b30;
        case 0x358b34u: goto label_358b34;
        case 0x358b38u: goto label_358b38;
        case 0x358b3cu: goto label_358b3c;
        case 0x358b40u: goto label_358b40;
        case 0x358b44u: goto label_358b44;
        case 0x358b48u: goto label_358b48;
        case 0x358b4cu: goto label_358b4c;
        case 0x358b50u: goto label_358b50;
        case 0x358b54u: goto label_358b54;
        case 0x358b58u: goto label_358b58;
        case 0x358b5cu: goto label_358b5c;
        case 0x358b60u: goto label_358b60;
        case 0x358b64u: goto label_358b64;
        case 0x358b68u: goto label_358b68;
        case 0x358b6cu: goto label_358b6c;
        case 0x358b70u: goto label_358b70;
        case 0x358b74u: goto label_358b74;
        case 0x358b78u: goto label_358b78;
        case 0x358b7cu: goto label_358b7c;
        case 0x358b80u: goto label_358b80;
        case 0x358b84u: goto label_358b84;
        case 0x358b88u: goto label_358b88;
        case 0x358b8cu: goto label_358b8c;
        case 0x358b90u: goto label_358b90;
        case 0x358b94u: goto label_358b94;
        case 0x358b98u: goto label_358b98;
        case 0x358b9cu: goto label_358b9c;
        case 0x358ba0u: goto label_358ba0;
        case 0x358ba4u: goto label_358ba4;
        case 0x358ba8u: goto label_358ba8;
        case 0x358bacu: goto label_358bac;
        case 0x358bb0u: goto label_358bb0;
        case 0x358bb4u: goto label_358bb4;
        case 0x358bb8u: goto label_358bb8;
        case 0x358bbcu: goto label_358bbc;
        case 0x358bc0u: goto label_358bc0;
        case 0x358bc4u: goto label_358bc4;
        case 0x358bc8u: goto label_358bc8;
        case 0x358bccu: goto label_358bcc;
        case 0x358bd0u: goto label_358bd0;
        case 0x358bd4u: goto label_358bd4;
        case 0x358bd8u: goto label_358bd8;
        default: break;
    }

    ctx->pc = 0x357fa0u;

label_357fa0:
    // 0x357fa0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x357fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_357fa4:
    // 0x357fa4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x357fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_357fa8:
    // 0x357fa8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x357fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_357fac:
    // 0x357fac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x357facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_357fb0:
    // 0x357fb0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x357fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_357fb4:
    // 0x357fb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x357fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_357fb8:
    // 0x357fb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x357fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_357fbc:
    // 0x357fbc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_357fc0:
    if (ctx->pc == 0x357FC0u) {
        ctx->pc = 0x357FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357FBCu;
        // 0x357fc0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357FC4u;
        goto label_357fc4;
    }
    ctx->pc = 0x357FBCu;
    {
        const bool branch_taken_0x357fbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x357FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357FBCu;
        // 0x357fc0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357fbc) {
            ctx->pc = 0x357FD8u;
            goto label_357fd8;
        }
    }
    ctx->pc = 0x357FC4u;
label_357fc4:
    // 0x357fc4: 0xc0c0830  jal         func_3020C0
label_357fc8:
    if (ctx->pc == 0x357FC8u) {
        ctx->pc = 0x357FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357FC4u;
        // 0x357fc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357FCCu;
        goto label_357fcc;
    }
    ctx->pc = 0x357FC4u;
    SET_GPR_U32(ctx, 31, 0x357FCCu);
    ctx->pc = 0x357FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357FC4u;
    // 0x357fc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x357FC4u, 0x357FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357FCCu;
label_357fcc:
    // 0x357fcc: 0x100002fc  b           . + 4 + (0x2FC << 2)
label_357fd0:
    if (ctx->pc == 0x357FD0u) {
        ctx->pc = 0x357FD4u;
        goto label_357fd4;
    }
    ctx->pc = 0x357FCCu;
    {
        const bool branch_taken_0x357fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357fcc) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x357FD4u;
label_357fd4:
    // 0x357fd4: 0x0  nop
    ctx->pc = 0x357fd4u;
    // NOP
label_357fd8:
    // 0x357fd8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_357fdc:
    if (ctx->pc == 0x357FDCu) {
        ctx->pc = 0x357FE0u;
        goto label_357fe0;
    }
    ctx->pc = 0x357FD8u;
    {
        const bool branch_taken_0x357fd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x357fd8) {
            ctx->pc = 0x358000u;
            goto label_358000;
        }
    }
    ctx->pc = 0x357FE0u;
label_357fe0:
    // 0x357fe0: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x357fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
label_357fe4:
    // 0x357fe4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x357fe4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_357fe8:
    // 0x357fe8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_357fec:
    if (ctx->pc == 0x357FECu) {
        ctx->pc = 0x357FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357FE8u;
        // 0x357fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357FF0u;
        goto label_357ff0;
    }
    ctx->pc = 0x357FE8u;
    {
        const bool branch_taken_0x357fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x357FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357FE8u;
        // 0x357fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357fe8) {
            ctx->pc = 0x358000u;
            goto label_358000;
        }
    }
    ctx->pc = 0x357FF0u;
label_357ff0:
    // 0x357ff0: 0xc0c0830  jal         func_3020C0
label_357ff4:
    if (ctx->pc == 0x357FF4u) {
        ctx->pc = 0x357FF8u;
        goto label_357ff8;
    }
    ctx->pc = 0x357FF0u;
    SET_GPR_U32(ctx, 31, 0x357FF8u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x357FF0u, 0x357FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357FF8u;
label_357ff8:
    // 0x357ff8: 0x100002f1  b           . + 4 + (0x2F1 << 2)
label_357ffc:
    if (ctx->pc == 0x357FFCu) {
        ctx->pc = 0x358000u;
        goto label_358000;
    }
    ctx->pc = 0x357FF8u;
    {
        const bool branch_taken_0x357ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357ff8) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x358000u;
label_358000:
    // 0x358000: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x358000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_358004:
    // 0x358004: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x358004u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_358008:
    // 0x358008: 0x102002ed  beqz        $at, . + 4 + (0x2ED << 2)
label_35800c:
    if (ctx->pc == 0x35800Cu) {
        ctx->pc = 0x35800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358008u;
        // 0x35800c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358010u;
        goto label_358010;
    }
    ctx->pc = 0x358008u;
    {
        const bool branch_taken_0x358008 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358008u;
        // 0x35800c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358008) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x358010u;
label_358010:
    // 0x358010: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x358010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_358014:
    // 0x358014: 0x2484fa10  addiu       $a0, $a0, -0x5F0
    ctx->pc = 0x358014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965776));
label_358018:
    // 0x358018: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x358018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_35801c:
    // 0x35801c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x35801cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_358020:
    // 0x358020: 0x600008  jr          $v1
label_358024:
    if (ctx->pc == 0x358024u) {
        ctx->pc = 0x358028u;
        goto label_358028;
    }
    ctx->pc = 0x358020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x358028u: goto label_358028;
            case 0x358088u: goto label_358088;
            case 0x3580A8u: goto label_3580a8;
            case 0x3581B8u: goto label_3581b8;
            case 0x358210u: goto label_358210;
            case 0x358598u: goto label_358598;
            case 0x358748u: goto label_358748;
            case 0x358B28u: goto label_358b28;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358020u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x358028u;
label_358028:
    // 0x358028: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_35802c:
    if (ctx->pc == 0x35802Cu) {
        ctx->pc = 0x358030u;
        goto label_358030;
    }
    ctx->pc = 0x358028u;
    {
        const bool branch_taken_0x358028 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x358028) {
            ctx->pc = 0x358068u;
            goto label_358068;
        }
    }
    ctx->pc = 0x358030u;
label_358030:
    // 0x358030: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x358030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_358034:
    // 0x358034: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x358034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_358038:
    // 0x358038: 0x922305ac  lbu         $v1, 0x5AC($s1)
    ctx->pc = 0x358038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1452)));
label_35803c:
    // 0x35803c: 0x26260550  addiu       $a2, $s1, 0x550
    ctx->pc = 0x35803cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_358040:
    // 0x358040: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x358040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_358044:
    // 0x358044: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x358044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_358048:
    // 0x358048: 0xc07679c  jal         func_1D9E70
label_35804c:
    if (ctx->pc == 0x35804Cu) {
        ctx->pc = 0x35804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358048u;
        // 0x35804c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358050u;
        goto label_358050;
    }
    ctx->pc = 0x358048u;
    SET_GPR_U32(ctx, 31, 0x358050u);
    ctx->pc = 0x35804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358048u;
    // 0x35804c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x358048u, 0x358050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358050u;
label_358050:
    // 0x358050: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x358050u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_358054:
    // 0x358054: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x358054u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_358058:
    // 0x358058: 0xc0aaa00  jal         func_2AA800
label_35805c:
    if (ctx->pc == 0x35805Cu) {
        ctx->pc = 0x35805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358058u;
        // 0x35805c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358060u;
        goto label_358060;
    }
    ctx->pc = 0x358058u;
    SET_GPR_U32(ctx, 31, 0x358060u);
    ctx->pc = 0x35805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358058u;
    // 0x35805c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA800u, 0x358058u, 0x358060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358060u;
label_358060:
    // 0x358060: 0x10000005  b           . + 4 + (0x5 << 2)
label_358064:
    if (ctx->pc == 0x358064u) {
        ctx->pc = 0x358064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358060u;
        // 0x358064: 0xae2205a0  sw          $v0, 0x5A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358068u;
        goto label_358068;
    }
    ctx->pc = 0x358060u;
    {
        const bool branch_taken_0x358060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358060u;
        // 0x358064: 0xae2205a0  sw          $v0, 0x5A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358060) {
            ctx->pc = 0x358078u;
            goto label_358078;
        }
    }
    ctx->pc = 0x358068u;
label_358068:
    // 0x358068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x358068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35806c:
    // 0x35806c: 0xc0c0830  jal         func_3020C0
label_358070:
    if (ctx->pc == 0x358070u) {
        ctx->pc = 0x358070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35806Cu;
        // 0x358070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358074u;
        goto label_358074;
    }
    ctx->pc = 0x35806Cu;
    SET_GPR_U32(ctx, 31, 0x358074u);
    ctx->pc = 0x358070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35806Cu;
    // 0x358070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x35806Cu, 0x358074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358074u;
label_358074:
    // 0x358074: 0x0  nop
    ctx->pc = 0x358074u;
    // NOP
label_358078:
    // 0x358078: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x358078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_35807c:
    // 0x35807c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35807cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_358080:
    // 0x358080: 0x100002cf  b           . + 4 + (0x2CF << 2)
label_358084:
    if (ctx->pc == 0x358084u) {
        ctx->pc = 0x358084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358080u;
        // 0x358084: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358088u;
        goto label_358088;
    }
    ctx->pc = 0x358080u;
    {
        const bool branch_taken_0x358080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358080u;
        // 0x358084: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358080) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x358088u;
label_358088:
    // 0x358088: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x358088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
label_35808c:
    // 0x35808c: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x35808cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_358090:
    // 0x358090: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x358090u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_358094:
    // 0x358094: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x358094u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_358098:
    // 0x358098: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x358098u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_35809c:
    // 0x35809c: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x35809cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_3580a0:
    // 0x3580a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3580a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3580a4:
    // 0x3580a4: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3580a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3580a8:
    // 0x3580a8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3580a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3580ac:
    // 0x3580ac: 0x922305ac  lbu         $v1, 0x5AC($s1)
    ctx->pc = 0x3580acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1452)));
label_3580b0:
    // 0x3580b0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3580b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3580b4:
    // 0x3580b4: 0x26260550  addiu       $a2, $s1, 0x550
    ctx->pc = 0x3580b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_3580b8:
    // 0x3580b8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3580b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_3580bc:
    // 0x3580bc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3580bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_3580c0:
    // 0x3580c0: 0xc07679c  jal         func_1D9E70
label_3580c4:
    if (ctx->pc == 0x3580C4u) {
        ctx->pc = 0x3580C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580C0u;
        // 0x3580c4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3580C8u;
        goto label_3580c8;
    }
    ctx->pc = 0x3580C0u;
    SET_GPR_U32(ctx, 31, 0x3580C8u);
    ctx->pc = 0x3580C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3580C0u;
    // 0x3580c4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3580C0u, 0x3580C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3580C8u;
label_3580c8:
    // 0x3580c8: 0x8e2605a0  lw          $a2, 0x5A0($s1)
    ctx->pc = 0x3580c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
label_3580cc:
    // 0x3580cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3580ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3580d0:
    // 0x3580d0: 0xc0c08b4  jal         func_3022D0
label_3580d4:
    if (ctx->pc == 0x3580D4u) {
        ctx->pc = 0x3580D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580D0u;
        // 0x3580d4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3580D8u;
        goto label_3580d8;
    }
    ctx->pc = 0x3580D0u;
    SET_GPR_U32(ctx, 31, 0x3580D8u);
    ctx->pc = 0x3580D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3580D0u;
    // 0x3580d4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3580D0u, 0x3580D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3580D8u;
label_3580d8:
    // 0x3580d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3580dc:
    if (ctx->pc == 0x3580DCu) {
        ctx->pc = 0x3580DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580D8u;
        // 0x3580dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3580E0u;
        goto label_3580e0;
    }
    ctx->pc = 0x3580D8u;
    {
        const bool branch_taken_0x3580d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3580DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580D8u;
        // 0x3580dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3580d8) {
            ctx->pc = 0x3580E8u;
            goto label_3580e8;
        }
    }
    ctx->pc = 0x3580E0u;
label_3580e0:
    // 0x3580e0: 0xc0c0830  jal         func_3020C0
label_3580e4:
    if (ctx->pc == 0x3580E4u) {
        ctx->pc = 0x3580E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580E0u;
        // 0x3580e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3580E8u;
        goto label_3580e8;
    }
    ctx->pc = 0x3580E0u;
    SET_GPR_U32(ctx, 31, 0x3580E8u);
    ctx->pc = 0x3580E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3580E0u;
    // 0x3580e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3580E0u, 0x3580E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3580E8u;
label_3580e8:
    // 0x3580e8: 0x9223053a  lbu         $v1, 0x53A($s1)
    ctx->pc = 0x3580e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1338)));
label_3580ec:
    // 0x3580ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_3580f0:
    if (ctx->pc == 0x3580F0u) {
        ctx->pc = 0x3580F4u;
        goto label_3580f4;
    }
    ctx->pc = 0x3580ECu;
    {
        const bool branch_taken_0x3580ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3580ec) {
            ctx->pc = 0x358108u;
            goto label_358108;
        }
    }
    ctx->pc = 0x3580F4u;
label_3580f4:
    // 0x3580f4: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3580f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_3580f8:
    // 0x3580f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3580f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3580fc:
    // 0x3580fc: 0x100002b0  b           . + 4 + (0x2B0 << 2)
label_358100:
    if (ctx->pc == 0x358100u) {
        ctx->pc = 0x358100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580FCu;
        // 0x358100: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358104u;
        goto label_358104;
    }
    ctx->pc = 0x3580FCu;
    {
        const bool branch_taken_0x3580fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580FCu;
        // 0x358100: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3580fc) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x358104u;
label_358104:
    // 0x358104: 0x0  nop
    ctx->pc = 0x358104u;
    // NOP
label_358108:
    // 0x358108: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x358108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
label_35810c:
    // 0x35810c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_358110:
    if (ctx->pc == 0x358110u) {
        ctx->pc = 0x358110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35810Cu;
        // 0x358110: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358114u;
        goto label_358114;
    }
    ctx->pc = 0x35810Cu;
    {
        const bool branch_taken_0x35810c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x358110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35810Cu;
        // 0x358110: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35810c) {
            ctx->pc = 0x358120u;
            goto label_358120;
        }
    }
    ctx->pc = 0x358114u;
label_358114:
    // 0x358114: 0x10000022  b           . + 4 + (0x22 << 2)
label_358118:
    if (ctx->pc == 0x358118u) {
        ctx->pc = 0x35811Cu;
        goto label_35811c;
    }
    ctx->pc = 0x358114u;
    {
        const bool branch_taken_0x358114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358114) {
            ctx->pc = 0x3581A0u;
            goto label_3581a0;
        }
    }
    ctx->pc = 0x35811Cu;
label_35811c:
    // 0x35811c: 0x0  nop
    ctx->pc = 0x35811cu;
    // NOP
label_358120:
    // 0x358120: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x358120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_358124:
    // 0x358124: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x358124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_358128:
    // 0x358128: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x358128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_35812c:
    // 0x35812c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x35812cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_358130:
    // 0x358130: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x358130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_358134:
    // 0x358134: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_358138:
    if (ctx->pc == 0x358138u) {
        ctx->pc = 0x35813Cu;
        goto label_35813c;
    }
    ctx->pc = 0x358134u;
    {
        const bool branch_taken_0x358134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x358134) {
            ctx->pc = 0x358170u;
            goto label_358170;
        }
    }
    ctx->pc = 0x35813Cu;
label_35813c:
    // 0x35813c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x35813cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_358140:
    // 0x358140: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x358140u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_358144:
    // 0x358144: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_358148:
    if (ctx->pc == 0x358148u) {
        ctx->pc = 0x358148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358144u;
        // 0x358148: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35814Cu;
        goto label_35814c;
    }
    ctx->pc = 0x358144u;
    {
        const bool branch_taken_0x358144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x358148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358144u;
        // 0x358148: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358144) {
            ctx->pc = 0x358198u;
            goto label_358198;
        }
    }
    ctx->pc = 0x35814Cu;
label_35814c:
    // 0x35814c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35814cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_358150:
    // 0x358150: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x358150u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_358154:
    // 0x358154: 0x0  nop
    ctx->pc = 0x358154u;
    // NOP
label_358158:
    // 0x358158: 0x0  nop
    ctx->pc = 0x358158u;
    // NOP
label_35815c:
    // 0x35815c: 0x2010  mfhi        $a0
    ctx->pc = 0x35815cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_358160:
    // 0x358160: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x358160u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_358164:
    // 0x358164: 0x1000000c  b           . + 4 + (0xC << 2)
label_358168:
    if (ctx->pc == 0x358168u) {
        ctx->pc = 0x358168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358164u;
        // 0x358168: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35816Cu;
        goto label_35816c;
    }
    ctx->pc = 0x358164u;
    {
        const bool branch_taken_0x358164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358164u;
        // 0x358168: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358164) {
            ctx->pc = 0x358198u;
            goto label_358198;
        }
    }
    ctx->pc = 0x35816Cu;
label_35816c:
    // 0x35816c: 0x0  nop
    ctx->pc = 0x35816cu;
    // NOP
label_358170:
    // 0x358170: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x358170u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_358174:
    // 0x358174: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x358174u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_358178:
    // 0x358178: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_35817c:
    if (ctx->pc == 0x35817Cu) {
        ctx->pc = 0x358180u;
        goto label_358180;
    }
    ctx->pc = 0x358178u;
    {
        const bool branch_taken_0x358178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x358178) {
            ctx->pc = 0x358198u;
            goto label_358198;
        }
    }
    ctx->pc = 0x358180u;
label_358180:
    // 0x358180: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x358180u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_358184:
    // 0x358184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x358184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_358188:
    // 0x358188: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x358188u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
label_35818c:
    // 0x35818c: 0x10000004  b           . + 4 + (0x4 << 2)
label_358190:
    if (ctx->pc == 0x358190u) {
        ctx->pc = 0x358190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35818Cu;
        // 0x358190: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358194u;
        goto label_358194;
    }
    ctx->pc = 0x35818Cu;
    {
        const bool branch_taken_0x35818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35818Cu;
        // 0x358190: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35818c) {
            ctx->pc = 0x3581A0u;
            goto label_3581a0;
        }
    }
    ctx->pc = 0x358194u;
label_358194:
    // 0x358194: 0x0  nop
    ctx->pc = 0x358194u;
    // NOP
label_358198:
    // 0x358198: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x358198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35819c:
    // 0x35819c: 0x0  nop
    ctx->pc = 0x35819cu;
    // NOP
label_3581a0:
    // 0x3581a0: 0x14600287  bnez        $v1, . + 4 + (0x287 << 2)
label_3581a4:
    if (ctx->pc == 0x3581A4u) {
        ctx->pc = 0x3581A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3581A0u;
        // 0x3581a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3581A8u;
        goto label_3581a8;
    }
    ctx->pc = 0x3581A0u;
    {
        const bool branch_taken_0x3581a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3581A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3581A0u;
        // 0x3581a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3581a0) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x3581A8u;
label_3581a8:
    // 0x3581a8: 0xc0c0830  jal         func_3020C0
label_3581ac:
    if (ctx->pc == 0x3581ACu) {
        ctx->pc = 0x3581ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3581A8u;
        // 0x3581ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3581B0u;
        goto label_3581b0;
    }
    ctx->pc = 0x3581A8u;
    SET_GPR_U32(ctx, 31, 0x3581B0u);
    ctx->pc = 0x3581ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3581A8u;
    // 0x3581ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3581A8u, 0x3581B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3581B0u;
label_3581b0:
    // 0x3581b0: 0x10000283  b           . + 4 + (0x283 << 2)
label_3581b4:
    if (ctx->pc == 0x3581B4u) {
        ctx->pc = 0x3581B8u;
        goto label_3581b8;
    }
    ctx->pc = 0x3581B0u;
    {
        const bool branch_taken_0x3581b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3581b0) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x3581B8u;
label_3581b8:
    // 0x3581b8: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x3581b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
label_3581bc:
    // 0x3581bc: 0xc096e34  jal         func_25B8D0
label_3581c0:
    if (ctx->pc == 0x3581C0u) {
        ctx->pc = 0x3581C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3581BCu;
        // 0x3581c0: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3581C4u;
        goto label_3581c4;
    }
    ctx->pc = 0x3581BCu;
    SET_GPR_U32(ctx, 31, 0x3581C4u);
    ctx->pc = 0x3581C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3581BCu;
    // 0x3581c0: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3581BCu, 0x3581C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3581C4u;
label_3581c4:
    // 0x3581c4: 0x922605ab  lbu         $a2, 0x5AB($s1)
    ctx->pc = 0x3581c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1451)));
label_3581c8:
    // 0x3581c8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3581c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_3581cc:
    // 0x3581cc: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x3581ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_3581d0:
    // 0x3581d0: 0x2442f984  addiu       $v0, $v0, -0x67C
    ctx->pc = 0x3581d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965636));
label_3581d4:
    // 0x3581d4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x3581d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_3581d8:
    // 0x3581d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3581d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3581dc:
    // 0x3581dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3581dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3581e0:
    // 0x3581e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3581e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3581e4:
    // 0x3581e4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3581e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3581e8:
    // 0x3581e8: 0xc076690  jal         func_1D9A40
label_3581ec:
    if (ctx->pc == 0x3581ECu) {
        ctx->pc = 0x3581ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3581E8u;
        // 0x3581ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3581F0u;
        goto label_3581f0;
    }
    ctx->pc = 0x3581E8u;
    SET_GPR_U32(ctx, 31, 0x3581F0u);
    ctx->pc = 0x3581ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3581E8u;
    // 0x3581ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3581E8u, 0x3581F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3581F0u;
label_3581f0:
    // 0x3581f0: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x3581f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
label_3581f4:
    // 0x3581f4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3581f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_3581f8:
    // 0x3581f8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3581f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_3581fc:
    // 0x3581fc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3581fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_358200:
    // 0x358200: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x358200u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_358204:
    // 0x358204: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x358204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_358208:
    // 0x358208: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x358208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_35820c:
    // 0x35820c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x35820cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_358210:
    // 0x358210: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x358210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_358214:
    // 0x358214: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x358214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
label_358218:
    // 0x358218: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x358218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_35821c:
    // 0x35821c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35821cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_358220:
    // 0x358220: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x358220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_358224:
    // 0x358224: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x358224u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_358228:
    // 0x358228: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x358228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_35822c:
    // 0x35822c: 0xc07681c  jal         func_1DA070
label_358230:
    if (ctx->pc == 0x358230u) {
        ctx->pc = 0x358230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35822Cu;
        // 0x358230: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358234u;
        goto label_358234;
    }
    ctx->pc = 0x35822Cu;
    SET_GPR_U32(ctx, 31, 0x358234u);
    ctx->pc = 0x358230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35822Cu;
    // 0x358230: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x35822Cu, 0x358234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358234u;
label_358234:
    // 0x358234: 0x8e2605a0  lw          $a2, 0x5A0($s1)
    ctx->pc = 0x358234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
label_358238:
    // 0x358238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x358238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35823c:
    // 0x35823c: 0xc0c08b4  jal         func_3022D0
label_358240:
    if (ctx->pc == 0x358240u) {
        ctx->pc = 0x358240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35823Cu;
        // 0x358240: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358244u;
        goto label_358244;
    }
    ctx->pc = 0x35823Cu;
    SET_GPR_U32(ctx, 31, 0x358244u);
    ctx->pc = 0x358240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35823Cu;
    // 0x358240: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x35823Cu, 0x358244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358244u;
label_358244:
    // 0x358244: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_358248:
    if (ctx->pc == 0x358248u) {
        ctx->pc = 0x358248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358244u;
        // 0x358248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35824Cu;
        goto label_35824c;
    }
    ctx->pc = 0x358244u;
    {
        const bool branch_taken_0x358244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358244u;
        // 0x358248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358244) {
            ctx->pc = 0x358258u;
            goto label_358258;
        }
    }
    ctx->pc = 0x35824Cu;
label_35824c:
    // 0x35824c: 0xc0c0830  jal         func_3020C0
label_358250:
    if (ctx->pc == 0x358250u) {
        ctx->pc = 0x358250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35824Cu;
        // 0x358250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358254u;
        goto label_358254;
    }
    ctx->pc = 0x35824Cu;
    SET_GPR_U32(ctx, 31, 0x358254u);
    ctx->pc = 0x358250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35824Cu;
    // 0x358250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x35824Cu, 0x358254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358254u;
label_358254:
    // 0x358254: 0x0  nop
    ctx->pc = 0x358254u;
    // NOP
label_358258:
    // 0x358258: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x358258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_35825c:
    // 0x35825c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x35825cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_358260:
    // 0x358260: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x358260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
label_358264:
    // 0x358264: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x358264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_358268:
    // 0x358268: 0xc097384  jal         func_25CE10
label_35826c:
    if (ctx->pc == 0x35826Cu) {
        ctx->pc = 0x35826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358268u;
        // 0x35826c: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358270u;
        goto label_358270;
    }
    ctx->pc = 0x358268u;
    SET_GPR_U32(ctx, 31, 0x358270u);
    ctx->pc = 0x35826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358268u;
    // 0x35826c: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x358268u, 0x358270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358270u;
label_358270:
    // 0x358270: 0xc0c0818  jal         func_302060
label_358274:
    if (ctx->pc == 0x358274u) {
        ctx->pc = 0x358274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358270u;
        // 0x358274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358278u;
        goto label_358278;
    }
    ctx->pc = 0x358270u;
    SET_GPR_U32(ctx, 31, 0x358278u);
    ctx->pc = 0x358274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358270u;
    // 0x358274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x358270u, 0x358278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358278u;
label_358278:
    // 0x358278: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_35827c:
    if (ctx->pc == 0x35827Cu) {
        ctx->pc = 0x358280u;
        goto label_358280;
    }
    ctx->pc = 0x358278u;
    {
        const bool branch_taken_0x358278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x358278) {
            ctx->pc = 0x3582C0u;
            goto label_3582c0;
        }
    }
    ctx->pc = 0x358280u;
label_358280:
    // 0x358280: 0x86220512  lh          $v0, 0x512($s1)
    ctx->pc = 0x358280u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_358284:
    // 0x358284: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x358284u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_358288:
    // 0x358288: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x358288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_35828c:
    // 0x35828c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x35828cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_358290:
    // 0x358290: 0x10200075  beqz        $at, . + 4 + (0x75 << 2)
label_358294:
    if (ctx->pc == 0x358294u) {
        ctx->pc = 0x358298u;
        goto label_358298;
    }
    ctx->pc = 0x358290u;
    {
        const bool branch_taken_0x358290 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x358290) {
            ctx->pc = 0x358468u;
            goto label_358468;
        }
    }
    ctx->pc = 0x358298u;
label_358298:
    // 0x358298: 0x922605aa  lbu         $a2, 0x5AA($s1)
    ctx->pc = 0x358298u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1450)));
label_35829c:
    // 0x35829c: 0xc62c05a4  lwc1        $f12, 0x5A4($s1)
    ctx->pc = 0x35829cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3582a0:
    // 0x3582a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3582a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3582a4:
    // 0x3582a4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3582a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3582a8:
    // 0x3582a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3582a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3582ac:
    // 0x3582ac: 0xc0c079c  jal         func_301E70
label_3582b0:
    if (ctx->pc == 0x3582B0u) {
        ctx->pc = 0x3582B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3582ACu;
        // 0x3582b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3582B4u;
        goto label_3582b4;
    }
    ctx->pc = 0x3582ACu;
    SET_GPR_U32(ctx, 31, 0x3582B4u);
    ctx->pc = 0x3582B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3582ACu;
    // 0x3582b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x3582ACu, 0x3582B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3582B4u;
label_3582b4:
    // 0x3582b4: 0x1000006c  b           . + 4 + (0x6C << 2)
label_3582b8:
    if (ctx->pc == 0x3582B8u) {
        ctx->pc = 0x3582BCu;
        goto label_3582bc;
    }
    ctx->pc = 0x3582B4u;
    {
        const bool branch_taken_0x3582b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3582b4) {
            ctx->pc = 0x358468u;
            goto label_358468;
        }
    }
    ctx->pc = 0x3582BCu;
label_3582bc:
    // 0x3582bc: 0x0  nop
    ctx->pc = 0x3582bcu;
    // NOP
label_3582c0:
    // 0x3582c0: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x3582c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
label_3582c4:
    // 0x3582c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3582c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3582c8:
    // 0x3582c8: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x3582c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_3582cc:
    // 0x3582cc: 0xc097184  jal         func_25C610
label_3582d0:
    if (ctx->pc == 0x3582D0u) {
        ctx->pc = 0x3582D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3582CCu;
        // 0x3582d0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3582D4u;
        goto label_3582d4;
    }
    ctx->pc = 0x3582CCu;
    SET_GPR_U32(ctx, 31, 0x3582D4u);
    ctx->pc = 0x3582D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3582CCu;
    // 0x3582d0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x3582CCu, 0x3582D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3582D4u;
label_3582d4:
    // 0x3582d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3582d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3582d8:
    // 0x3582d8: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_3582dc:
    if (ctx->pc == 0x3582DCu) {
        ctx->pc = 0x3582DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3582D8u;
        // 0x3582dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3582E0u;
        goto label_3582e0;
    }
    ctx->pc = 0x3582D8u;
    {
        const bool branch_taken_0x3582d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3582DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3582D8u;
        // 0x3582dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3582d8) {
            ctx->pc = 0x3582F0u;
            goto label_3582f0;
        }
    }
    ctx->pc = 0x3582E0u;
label_3582e0:
    // 0x3582e0: 0xc0c0830  jal         func_3020C0
label_3582e4:
    if (ctx->pc == 0x3582E4u) {
        ctx->pc = 0x3582E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3582E0u;
        // 0x3582e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3582E8u;
        goto label_3582e8;
    }
    ctx->pc = 0x3582E0u;
    SET_GPR_U32(ctx, 31, 0x3582E8u);
    ctx->pc = 0x3582E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3582E0u;
    // 0x3582e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3582E0u, 0x3582E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3582E8u;
label_3582e8:
    // 0x3582e8: 0x10000235  b           . + 4 + (0x235 << 2)
label_3582ec:
    if (ctx->pc == 0x3582ECu) {
        ctx->pc = 0x3582F0u;
        goto label_3582f0;
    }
    ctx->pc = 0x3582E8u;
    {
        const bool branch_taken_0x3582e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3582e8) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x3582F0u;
label_3582f0:
    // 0x3582f0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3582f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3582f4:
    // 0x3582f4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3582f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3582f8:
    // 0x3582f8: 0xae230518  sw          $v1, 0x518($s1)
    ctx->pc = 0x3582f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 3));
label_3582fc:
    // 0x3582fc: 0xa22005ac  sb          $zero, 0x5AC($s1)
    ctx->pc = 0x3582fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1452), (uint8_t)GPR_U32(ctx, 0));
label_358300:
    // 0x358300: 0x78235c10  lq          $v1, 0x5C10($at)
    ctx->pc = 0x358300u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23568)));
label_358304:
    // 0x358304: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
label_358308:
    if (ctx->pc == 0x358308u) {
        ctx->pc = 0x358308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358304u;
        // 0x358308: 0x7e230550  sq          $v1, 0x550($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35830Cu;
        goto label_35830c;
    }
    ctx->pc = 0x358304u;
    {
        const bool branch_taken_0x358304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x358308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358304u;
        // 0x358308: 0x7e230550  sq          $v1, 0x550($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358304) {
            ctx->pc = 0x358458u;
            goto label_358458;
        }
    }
    ctx->pc = 0x35830Cu;
label_35830c:
    // 0x35830c: 0x12400052  beqz        $s2, . + 4 + (0x52 << 2)
label_358310:
    if (ctx->pc == 0x358310u) {
        ctx->pc = 0x358314u;
        goto label_358314;
    }
    ctx->pc = 0x35830Cu;
    {
        const bool branch_taken_0x35830c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x35830c) {
            ctx->pc = 0x358458u;
            goto label_358458;
        }
    }
    ctx->pc = 0x358314u;
label_358314:
    // 0x358314: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x358314u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_358318:
    // 0x358318: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x358318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_35831c:
    // 0x35831c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_358320:
    if (ctx->pc == 0x358320u) {
        ctx->pc = 0x358320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35831Cu;
        // 0x358320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358324u;
        goto label_358324;
    }
    ctx->pc = 0x35831Cu;
    {
        const bool branch_taken_0x35831c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x358320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35831Cu;
        // 0x358320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35831c) {
            ctx->pc = 0x358330u;
            goto label_358330;
        }
    }
    ctx->pc = 0x358324u;
label_358324:
    // 0x358324: 0xc0d7864  jal         func_35E190
label_358328:
    if (ctx->pc == 0x358328u) {
        ctx->pc = 0x358328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358324u;
        // 0x358328: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35832Cu;
        goto label_35832c;
    }
    ctx->pc = 0x358324u;
    SET_GPR_U32(ctx, 31, 0x35832Cu);
    ctx->pc = 0x358328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358324u;
    // 0x358328: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E190u, 0x358324u, 0x35832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35832Cu;
label_35832c:
    // 0x35832c: 0x0  nop
    ctx->pc = 0x35832cu;
    // NOP
label_358330:
    // 0x358330: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_358334:
    if (ctx->pc == 0x358334u) {
        ctx->pc = 0x358334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358330u;
        // 0x358334: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358338u;
        goto label_358338;
    }
    ctx->pc = 0x358330u;
    {
        const bool branch_taken_0x358330 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x358334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358330u;
        // 0x358334: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358330) {
            ctx->pc = 0x358340u;
            goto label_358340;
        }
    }
    ctx->pc = 0x358338u;
label_358338:
    // 0x358338: 0x10000025  b           . + 4 + (0x25 << 2)
label_35833c:
    if (ctx->pc == 0x35833Cu) {
        ctx->pc = 0x358340u;
        goto label_358340;
    }
    ctx->pc = 0x358338u;
    {
        const bool branch_taken_0x358338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358338) {
            ctx->pc = 0x3583D0u;
            goto label_3583d0;
        }
    }
    ctx->pc = 0x358340u;
label_358340:
    // 0x358340: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x358340u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_358344:
    // 0x358344: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x358344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_358348:
    // 0x358348: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x358348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35834c:
    // 0x35834c: 0x24840b9a  addiu       $a0, $a0, 0xB9A
    ctx->pc = 0x35834cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2970));
label_358350:
    // 0x358350: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x358350u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_358354:
    // 0x358354: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x358354u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_358358:
    // 0x358358: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x358358u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_35835c:
    // 0x35835c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x35835cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_358360:
    // 0x358360: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x358360u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_358364:
    // 0x358364: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_358368:
    if (ctx->pc == 0x358368u) {
        ctx->pc = 0x358368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358364u;
        // 0x358368: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35836Cu;
        goto label_35836c;
    }
    ctx->pc = 0x358364u;
    {
        const bool branch_taken_0x358364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x358368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358364u;
        // 0x358368: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358364) {
            ctx->pc = 0x358380u;
            goto label_358380;
        }
    }
    ctx->pc = 0x35836Cu;
label_35836c:
    // 0x35836c: 0x10850004  beq         $a0, $a1, . + 4 + (0x4 << 2)
label_358370:
    if (ctx->pc == 0x358370u) {
        ctx->pc = 0x358374u;
        goto label_358374;
    }
    ctx->pc = 0x35836Cu;
    {
        const bool branch_taken_0x35836c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x35836c) {
            ctx->pc = 0x358380u;
            goto label_358380;
        }
    }
    ctx->pc = 0x358374u;
label_358374:
    // 0x358374: 0x10000004  b           . + 4 + (0x4 << 2)
label_358378:
    if (ctx->pc == 0x358378u) {
        ctx->pc = 0x35837Cu;
        goto label_35837c;
    }
    ctx->pc = 0x358374u;
    {
        const bool branch_taken_0x358374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358374) {
            ctx->pc = 0x358388u;
            goto label_358388;
        }
    }
    ctx->pc = 0x35837Cu;
label_35837c:
    // 0x35837c: 0x0  nop
    ctx->pc = 0x35837cu;
    // NOP
label_358380:
    // 0x358380: 0x10000013  b           . + 4 + (0x13 << 2)
label_358384:
    if (ctx->pc == 0x358384u) {
        ctx->pc = 0x358384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358380u;
        // 0x358384: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358388u;
        goto label_358388;
    }
    ctx->pc = 0x358380u;
    {
        const bool branch_taken_0x358380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358380u;
        // 0x358384: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358380) {
            ctx->pc = 0x3583D0u;
            goto label_3583d0;
        }
    }
    ctx->pc = 0x358388u;
label_358388:
    // 0x358388: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x358388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_35838c:
    // 0x35838c: 0x24630b9b  addiu       $v1, $v1, 0xB9B
    ctx->pc = 0x35838cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2971));
label_358390:
    // 0x358390: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x358390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_358394:
    // 0x358394: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x358394u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_358398:
    // 0x358398: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x358398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35839c:
    // 0x35839c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_3583a0:
    if (ctx->pc == 0x3583A0u) {
        ctx->pc = 0x3583A4u;
        goto label_3583a4;
    }
    ctx->pc = 0x35839Cu;
    {
        const bool branch_taken_0x35839c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35839c) {
            ctx->pc = 0x3583C0u;
            goto label_3583c0;
        }
    }
    ctx->pc = 0x3583A4u;
label_3583a4:
    // 0x3583a4: 0x10850006  beq         $a0, $a1, . + 4 + (0x6 << 2)
label_3583a8:
    if (ctx->pc == 0x3583A8u) {
        ctx->pc = 0x3583A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3583A4u;
        // 0x3583a8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3583ACu;
        goto label_3583ac;
    }
    ctx->pc = 0x3583A4u;
    {
        const bool branch_taken_0x3583a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x3583A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3583A4u;
        // 0x3583a8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3583a4) {
            ctx->pc = 0x3583C0u;
            goto label_3583c0;
        }
    }
    ctx->pc = 0x3583ACu;
label_3583ac:
    // 0x3583ac: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_3583b0:
    if (ctx->pc == 0x3583B0u) {
        ctx->pc = 0x3583B4u;
        goto label_3583b4;
    }
    ctx->pc = 0x3583ACu;
    {
        const bool branch_taken_0x3583ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3583ac) {
            ctx->pc = 0x3583C0u;
            goto label_3583c0;
        }
    }
    ctx->pc = 0x3583B4u;
label_3583b4:
    // 0x3583b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3583b8:
    if (ctx->pc == 0x3583B8u) {
        ctx->pc = 0x3583BCu;
        goto label_3583bc;
    }
    ctx->pc = 0x3583B4u;
    {
        const bool branch_taken_0x3583b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3583b4) {
            ctx->pc = 0x3583C8u;
            goto label_3583c8;
        }
    }
    ctx->pc = 0x3583BCu;
label_3583bc:
    // 0x3583bc: 0x0  nop
    ctx->pc = 0x3583bcu;
    // NOP
label_3583c0:
    // 0x3583c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_3583c4:
    if (ctx->pc == 0x3583C4u) {
        ctx->pc = 0x3583C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3583C0u;
        // 0x3583c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3583C8u;
        goto label_3583c8;
    }
    ctx->pc = 0x3583C0u;
    {
        const bool branch_taken_0x3583c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3583C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3583C0u;
        // 0x3583c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3583c0) {
            ctx->pc = 0x3583D0u;
            goto label_3583d0;
        }
    }
    ctx->pc = 0x3583C8u;
label_3583c8:
    // 0x3583c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3583c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3583cc:
    // 0x3583cc: 0x0  nop
    ctx->pc = 0x3583ccu;
    // NOP
label_3583d0:
    // 0x3583d0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_3583d4:
    if (ctx->pc == 0x3583D4u) {
        ctx->pc = 0x3583D8u;
        goto label_3583d8;
    }
    ctx->pc = 0x3583D0u;
    {
        const bool branch_taken_0x3583d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3583d0) {
            ctx->pc = 0x358440u;
            goto label_358440;
        }
    }
    ctx->pc = 0x3583D8u;
label_3583d8:
    // 0x3583d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3583d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3583dc:
    // 0x3583dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3583dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3583e0:
    // 0x3583e0: 0xa22305ae  sb          $v1, 0x5AE($s1)
    ctx->pc = 0x3583e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1454), (uint8_t)GPR_U32(ctx, 3));
label_3583e4:
    // 0x3583e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3583e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3583e8:
    // 0x3583e8: 0xde030520  ld          $v1, 0x520($s0)
    ctx->pc = 0x3583e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1312)));
label_3583ec:
    // 0x3583ec: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x3583ecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_3583f0:
    // 0x3583f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3583f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3583f4:
    // 0x3583f4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3583f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3583f8:
    // 0x3583f8: 0xc0c085c  jal         func_302170
label_3583fc:
    if (ctx->pc == 0x3583FCu) {
        ctx->pc = 0x3583FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3583F8u;
        // 0x3583fc: 0xfe020520  sd          $v0, 0x520($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1312), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358400u;
        goto label_358400;
    }
    ctx->pc = 0x3583F8u;
    SET_GPR_U32(ctx, 31, 0x358400u);
    ctx->pc = 0x3583FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3583F8u;
    // 0x3583fc: 0xfe020520  sd          $v0, 0x520($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 1312), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302170u, 0x3583F8u, 0x358400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358400u;
label_358400:
    // 0x358400: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x358400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_358404:
    // 0x358404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x358404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358408:
    // 0x358408: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x358408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_35840c:
    // 0x35840c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x35840cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_358410:
    // 0x358410: 0xc097634  jal         func_25D8D0
label_358414:
    if (ctx->pc == 0x358414u) {
        ctx->pc = 0x358414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358410u;
        // 0x358414: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358418u;
        goto label_358418;
    }
    ctx->pc = 0x358410u;
    SET_GPR_U32(ctx, 31, 0x358418u);
    ctx->pc = 0x358414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358410u;
    // 0x358414: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8D0u, 0x358410u, 0x358418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358418u;
label_358418:
    // 0x358418: 0xc0c085c  jal         func_302170
label_35841c:
    if (ctx->pc == 0x35841Cu) {
        ctx->pc = 0x35841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358418u;
        // 0x35841c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358420u;
        goto label_358420;
    }
    ctx->pc = 0x358418u;
    SET_GPR_U32(ctx, 31, 0x358420u);
    ctx->pc = 0x35841Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358418u;
    // 0x35841c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302170u, 0x358418u, 0x358420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358420u;
label_358420:
    // 0x358420: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x358420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_358424:
    // 0x358424: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x358424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358428:
    // 0x358428: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x358428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_35842c:
    // 0x35842c: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x35842cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_358430:
    // 0x358430: 0xc097634  jal         func_25D8D0
label_358434:
    if (ctx->pc == 0x358434u) {
        ctx->pc = 0x358434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358430u;
        // 0x358434: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358438u;
        goto label_358438;
    }
    ctx->pc = 0x358430u;
    SET_GPR_U32(ctx, 31, 0x358438u);
    ctx->pc = 0x358434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358430u;
    // 0x358434: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8D0u, 0x358430u, 0x358438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358438u;
label_358438:
    // 0x358438: 0x10000007  b           . + 4 + (0x7 << 2)
label_35843c:
    if (ctx->pc == 0x35843Cu) {
        ctx->pc = 0x358440u;
        goto label_358440;
    }
    ctx->pc = 0x358438u;
    {
        const bool branch_taken_0x358438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358438) {
            ctx->pc = 0x358458u;
            goto label_358458;
        }
    }
    ctx->pc = 0x358440u;
label_358440:
    // 0x358440: 0xa22005ae  sb          $zero, 0x5AE($s1)
    ctx->pc = 0x358440u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1454), (uint8_t)GPR_U32(ctx, 0));
label_358444:
    // 0x358444: 0xde040520  ld          $a0, 0x520($s0)
    ctx->pc = 0x358444u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 1312)));
label_358448:
    // 0x358448: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x358448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_35844c:
    // 0x35844c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x35844cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_358450:
    // 0x358450: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x358450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_358454:
    // 0x358454: 0xfe030520  sd          $v1, 0x520($s0)
    ctx->pc = 0x358454u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1312), GPR_U64(ctx, 3));
label_358458:
    // 0x358458: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x358458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_35845c:
    // 0x35845c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35845cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_358460:
    // 0x358460: 0x100001d7  b           . + 4 + (0x1D7 << 2)
label_358464:
    if (ctx->pc == 0x358464u) {
        ctx->pc = 0x358464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358460u;
        // 0x358464: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358468u;
        goto label_358468;
    }
    ctx->pc = 0x358460u;
    {
        const bool branch_taken_0x358460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358460u;
        // 0x358464: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358460) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x358468u;
label_358468:
    // 0x358468: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x358468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_35846c:
    // 0x35846c: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x35846cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_358470:
    // 0x358470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x358470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_358474:
    // 0x358474: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x358474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_358478:
    // 0x358478: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x358478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_35847c:
    // 0x35847c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x35847cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_358480:
    // 0x358480: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x358480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_358484:
    // 0x358484: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x358484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_358488:
    // 0x358488: 0xc0c0980  jal         func_302600
label_35848c:
    if (ctx->pc == 0x35848Cu) {
        ctx->pc = 0x35848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358488u;
        // 0x35848c: 0x27aa00dc  addiu       $t2, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358490u;
        goto label_358490;
    }
    ctx->pc = 0x358488u;
    SET_GPR_U32(ctx, 31, 0x358490u);
    ctx->pc = 0x35848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358488u;
    // 0x35848c: 0x27aa00dc  addiu       $t2, $sp, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x358488u, 0x358490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358490u;
label_358490:
    // 0x358490: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_358494:
    if (ctx->pc == 0x358494u) {
        ctx->pc = 0x358498u;
        goto label_358498;
    }
    ctx->pc = 0x358490u;
    {
        const bool branch_taken_0x358490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x358490) {
            ctx->pc = 0x3584E8u;
            goto label_3584e8;
        }
    }
    ctx->pc = 0x358498u;
label_358498:
    // 0x358498: 0x8e2605a0  lw          $a2, 0x5A0($s1)
    ctx->pc = 0x358498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
label_35849c:
    // 0x35849c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35849cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3584a0:
    // 0x3584a0: 0xc0c08b4  jal         func_3022D0
label_3584a4:
    if (ctx->pc == 0x3584A4u) {
        ctx->pc = 0x3584A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3584A0u;
        // 0x3584a4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3584A8u;
        goto label_3584a8;
    }
    ctx->pc = 0x3584A0u;
    SET_GPR_U32(ctx, 31, 0x3584A8u);
    ctx->pc = 0x3584A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584A0u;
    // 0x3584a4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3584A0u, 0x3584A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584A8u;
label_3584a8:
    // 0x3584a8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3584a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3584ac:
    // 0x3584ac: 0xc0766dc  jal         func_1D9B70
label_3584b0:
    if (ctx->pc == 0x3584B0u) {
        ctx->pc = 0x3584B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3584ACu;
        // 0x3584b0: 0x26250090  addiu       $a1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3584B4u;
        goto label_3584b4;
    }
    ctx->pc = 0x3584ACu;
    SET_GPR_U32(ctx, 31, 0x3584B4u);
    ctx->pc = 0x3584B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584ACu;
    // 0x3584b0: 0x26250090  addiu       $a1, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3584ACu, 0x3584B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584B4u;
label_3584b4:
    // 0x3584b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3584b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3584b8:
    // 0x3584b8: 0xc0766e8  jal         func_1D9BA0
label_3584bc:
    if (ctx->pc == 0x3584BCu) {
        ctx->pc = 0x3584BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3584B8u;
        // 0x3584bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3584C0u;
        goto label_3584c0;
    }
    ctx->pc = 0x3584B8u;
    SET_GPR_U32(ctx, 31, 0x3584C0u);
    ctx->pc = 0x3584BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584B8u;
    // 0x3584bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x3584B8u, 0x3584C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584C0u;
label_3584c0:
    // 0x3584c0: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3584c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_3584c4:
    // 0x3584c4: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x3584c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3584c8:
    // 0x3584c8: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3584c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_3584cc:
    // 0x3584cc: 0xc0a90d4  jal         func_2A4350
label_3584d0:
    if (ctx->pc == 0x3584D0u) {
        ctx->pc = 0x3584D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3584CCu;
        // 0x3584d0: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3584D4u;
        goto label_3584d4;
    }
    ctx->pc = 0x3584CCu;
    SET_GPR_U32(ctx, 31, 0x3584D4u);
    ctx->pc = 0x3584D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584CCu;
    // 0x3584d0: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x3584CCu, 0x3584D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584D4u;
label_3584d4:
    // 0x3584d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3584d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3584d8:
    // 0x3584d8: 0xc0c0830  jal         func_3020C0
label_3584dc:
    if (ctx->pc == 0x3584DCu) {
        ctx->pc = 0x3584DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3584D8u;
        // 0x3584dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3584E0u;
        goto label_3584e0;
    }
    ctx->pc = 0x3584D8u;
    SET_GPR_U32(ctx, 31, 0x3584E0u);
    ctx->pc = 0x3584DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584D8u;
    // 0x3584dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3584D8u, 0x3584E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584E0u;
label_3584e0:
    // 0x3584e0: 0x100001b7  b           . + 4 + (0x1B7 << 2)
label_3584e4:
    if (ctx->pc == 0x3584E4u) {
        ctx->pc = 0x3584E8u;
        goto label_3584e8;
    }
    ctx->pc = 0x3584E0u;
    {
        const bool branch_taken_0x3584e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3584e0) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x3584E8u;
label_3584e8:
    // 0x3584e8: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3584e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
label_3584ec:
    // 0x3584ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3584f0:
    if (ctx->pc == 0x3584F0u) {
        ctx->pc = 0x3584F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3584ECu;
        // 0x3584f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3584F4u;
        goto label_3584f4;
    }
    ctx->pc = 0x3584ECu;
    {
        const bool branch_taken_0x3584ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3584F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3584ECu;
        // 0x3584f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3584ec) {
            ctx->pc = 0x358500u;
            goto label_358500;
        }
    }
    ctx->pc = 0x3584F4u;
label_3584f4:
    // 0x3584f4: 0x10000022  b           . + 4 + (0x22 << 2)
label_3584f8:
    if (ctx->pc == 0x3584F8u) {
        ctx->pc = 0x3584FCu;
        goto label_3584fc;
    }
    ctx->pc = 0x3584F4u;
    {
        const bool branch_taken_0x3584f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3584f4) {
            ctx->pc = 0x358580u;
            goto label_358580;
        }
    }
    ctx->pc = 0x3584FCu;
label_3584fc:
    // 0x3584fc: 0x0  nop
    ctx->pc = 0x3584fcu;
    // NOP
label_358500:
    // 0x358500: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x358500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_358504:
    // 0x358504: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x358504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_358508:
    // 0x358508: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x358508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_35850c:
    // 0x35850c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x35850cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_358510:
    // 0x358510: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x358510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_358514:
    // 0x358514: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_358518:
    if (ctx->pc == 0x358518u) {
        ctx->pc = 0x35851Cu;
        goto label_35851c;
    }
    ctx->pc = 0x358514u;
    {
        const bool branch_taken_0x358514 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x358514) {
            ctx->pc = 0x358550u;
            goto label_358550;
        }
    }
    ctx->pc = 0x35851Cu;
label_35851c:
    // 0x35851c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x35851cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_358520:
    // 0x358520: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x358520u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_358524:
    // 0x358524: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_358528:
    if (ctx->pc == 0x358528u) {
        ctx->pc = 0x358528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358524u;
        // 0x358528: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35852Cu;
        goto label_35852c;
    }
    ctx->pc = 0x358524u;
    {
        const bool branch_taken_0x358524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x358528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358524u;
        // 0x358528: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358524) {
            ctx->pc = 0x358578u;
            goto label_358578;
        }
    }
    ctx->pc = 0x35852Cu;
label_35852c:
    // 0x35852c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_358530:
    // 0x358530: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x358530u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_358534:
    // 0x358534: 0x0  nop
    ctx->pc = 0x358534u;
    // NOP
label_358538:
    // 0x358538: 0x0  nop
    ctx->pc = 0x358538u;
    // NOP
label_35853c:
    // 0x35853c: 0x2010  mfhi        $a0
    ctx->pc = 0x35853cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_358540:
    // 0x358540: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x358540u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_358544:
    // 0x358544: 0x1000000c  b           . + 4 + (0xC << 2)
label_358548:
    if (ctx->pc == 0x358548u) {
        ctx->pc = 0x358548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358544u;
        // 0x358548: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35854Cu;
        goto label_35854c;
    }
    ctx->pc = 0x358544u;
    {
        const bool branch_taken_0x358544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358544u;
        // 0x358548: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358544) {
            ctx->pc = 0x358578u;
            goto label_358578;
        }
    }
    ctx->pc = 0x35854Cu;
label_35854c:
    // 0x35854c: 0x0  nop
    ctx->pc = 0x35854cu;
    // NOP
label_358550:
    // 0x358550: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x358550u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_358554:
    // 0x358554: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x358554u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_358558:
    // 0x358558: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_35855c:
    if (ctx->pc == 0x35855Cu) {
        ctx->pc = 0x358560u;
        goto label_358560;
    }
    ctx->pc = 0x358558u;
    {
        const bool branch_taken_0x358558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x358558) {
            ctx->pc = 0x358578u;
            goto label_358578;
        }
    }
    ctx->pc = 0x358560u;
label_358560:
    // 0x358560: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x358560u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_358564:
    // 0x358564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x358564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_358568:
    // 0x358568: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x358568u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
label_35856c:
    // 0x35856c: 0x10000004  b           . + 4 + (0x4 << 2)
label_358570:
    if (ctx->pc == 0x358570u) {
        ctx->pc = 0x358570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35856Cu;
        // 0x358570: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358574u;
        goto label_358574;
    }
    ctx->pc = 0x35856Cu;
    {
        const bool branch_taken_0x35856c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35856Cu;
        // 0x358570: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35856c) {
            ctx->pc = 0x358580u;
            goto label_358580;
        }
    }
    ctx->pc = 0x358574u;
label_358574:
    // 0x358574: 0x0  nop
    ctx->pc = 0x358574u;
    // NOP
label_358578:
    // 0x358578: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x358578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35857c:
    // 0x35857c: 0x0  nop
    ctx->pc = 0x35857cu;
    // NOP
label_358580:
    // 0x358580: 0x1460018f  bnez        $v1, . + 4 + (0x18F << 2)
label_358584:
    if (ctx->pc == 0x358584u) {
        ctx->pc = 0x358584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358580u;
        // 0x358584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358588u;
        goto label_358588;
    }
    ctx->pc = 0x358580u;
    {
        const bool branch_taken_0x358580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x358584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358580u;
        // 0x358584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358580) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x358588u;
label_358588:
    // 0x358588: 0xc0c0830  jal         func_3020C0
label_35858c:
    if (ctx->pc == 0x35858Cu) {
        ctx->pc = 0x35858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358588u;
        // 0x35858c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358590u;
        goto label_358590;
    }
    ctx->pc = 0x358588u;
    SET_GPR_U32(ctx, 31, 0x358590u);
    ctx->pc = 0x35858Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358588u;
    // 0x35858c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x358588u, 0x358590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358590u;
label_358590:
    // 0x358590: 0x1000018b  b           . + 4 + (0x18B << 2)
label_358594:
    if (ctx->pc == 0x358594u) {
        ctx->pc = 0x358598u;
        goto label_358598;
    }
    ctx->pc = 0x358590u;
    {
        const bool branch_taken_0x358590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358590) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x358598u;
label_358598:
    // 0x358598: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x358598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
label_35859c:
    // 0x35859c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x35859cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_3585a0:
    // 0x3585a0: 0xc07cce0  jal         func_1F3380
label_3585a4:
    if (ctx->pc == 0x3585A4u) {
        ctx->pc = 0x3585A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585A0u;
        // 0x3585a4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3585A8u;
        goto label_3585a8;
    }
    ctx->pc = 0x3585A0u;
    SET_GPR_U32(ctx, 31, 0x3585A8u);
    ctx->pc = 0x3585A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3585A0u;
    // 0x3585a4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3585A0u, 0x3585A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3585A8u;
label_3585a8:
    // 0x3585a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3585a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3585ac:
    // 0x3585ac: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_3585b0:
    if (ctx->pc == 0x3585B0u) {
        ctx->pc = 0x3585B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585ACu;
        // 0x3585b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3585B4u;
        goto label_3585b4;
    }
    ctx->pc = 0x3585ACu;
    {
        const bool branch_taken_0x3585ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3585B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585ACu;
        // 0x3585b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3585ac) {
            ctx->pc = 0x3585C8u;
            goto label_3585c8;
        }
    }
    ctx->pc = 0x3585B4u;
label_3585b4:
    // 0x3585b4: 0xc0c0830  jal         func_3020C0
label_3585b8:
    if (ctx->pc == 0x3585B8u) {
        ctx->pc = 0x3585B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585B4u;
        // 0x3585b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3585BCu;
        goto label_3585bc;
    }
    ctx->pc = 0x3585B4u;
    SET_GPR_U32(ctx, 31, 0x3585BCu);
    ctx->pc = 0x3585B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3585B4u;
    // 0x3585b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3585B4u, 0x3585BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3585BCu;
label_3585bc:
    // 0x3585bc: 0x10000180  b           . + 4 + (0x180 << 2)
label_3585c0:
    if (ctx->pc == 0x3585C0u) {
        ctx->pc = 0x3585C4u;
        goto label_3585c4;
    }
    ctx->pc = 0x3585BCu;
    {
        const bool branch_taken_0x3585bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3585bc) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x3585C4u;
label_3585c4:
    // 0x3585c4: 0x0  nop
    ctx->pc = 0x3585c4u;
    // NOP
label_3585c8:
    // 0x3585c8: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x3585c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
label_3585cc:
    // 0x3585cc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3585ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3585d0:
    // 0x3585d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3585d4:
    if (ctx->pc == 0x3585D4u) {
        ctx->pc = 0x3585D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585D0u;
        // 0x3585d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3585D8u;
        goto label_3585d8;
    }
    ctx->pc = 0x3585D0u;
    {
        const bool branch_taken_0x3585d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3585D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585D0u;
        // 0x3585d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3585d0) {
            ctx->pc = 0x3585E8u;
            goto label_3585e8;
        }
    }
    ctx->pc = 0x3585D8u;
label_3585d8:
    // 0x3585d8: 0xc0c0830  jal         func_3020C0
label_3585dc:
    if (ctx->pc == 0x3585DCu) {
        ctx->pc = 0x3585DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585D8u;
        // 0x3585dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3585E0u;
        goto label_3585e0;
    }
    ctx->pc = 0x3585D8u;
    SET_GPR_U32(ctx, 31, 0x3585E0u);
    ctx->pc = 0x3585DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3585D8u;
    // 0x3585dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3585D8u, 0x3585E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3585E0u;
label_3585e0:
    // 0x3585e0: 0x10000177  b           . + 4 + (0x177 << 2)
label_3585e4:
    if (ctx->pc == 0x3585E4u) {
        ctx->pc = 0x3585E8u;
        goto label_3585e8;
    }
    ctx->pc = 0x3585E0u;
    {
        const bool branch_taken_0x3585e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3585e0) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x3585E8u;
label_3585e8:
    // 0x3585e8: 0xc097864  jal         func_25E190
label_3585ec:
    if (ctx->pc == 0x3585ECu) {
        ctx->pc = 0x3585ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585E8u;
        // 0x3585ec: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3585F0u;
        goto label_3585f0;
    }
    ctx->pc = 0x3585E8u;
    SET_GPR_U32(ctx, 31, 0x3585F0u);
    ctx->pc = 0x3585ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3585E8u;
    // 0x3585ec: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x3585E8u, 0x3585F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3585F0u;
label_3585f0:
    // 0x3585f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3585f4:
    if (ctx->pc == 0x3585F4u) {
        ctx->pc = 0x3585F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585F0u;
        // 0x3585f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3585F8u;
        goto label_3585f8;
    }
    ctx->pc = 0x3585F0u;
    {
        const bool branch_taken_0x3585f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3585F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585F0u;
        // 0x3585f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3585f0) {
            ctx->pc = 0x358608u;
            goto label_358608;
        }
    }
    ctx->pc = 0x3585F8u;
label_3585f8:
    // 0x3585f8: 0xc0c0830  jal         func_3020C0
label_3585fc:
    if (ctx->pc == 0x3585FCu) {
        ctx->pc = 0x3585FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585F8u;
        // 0x3585fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358600u;
        goto label_358600;
    }
    ctx->pc = 0x3585F8u;
    SET_GPR_U32(ctx, 31, 0x358600u);
    ctx->pc = 0x3585FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3585F8u;
    // 0x3585fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3585F8u, 0x358600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358600u;
label_358600:
    // 0x358600: 0x1000016f  b           . + 4 + (0x16F << 2)
label_358604:
    if (ctx->pc == 0x358604u) {
        ctx->pc = 0x358608u;
        goto label_358608;
    }
    ctx->pc = 0x358600u;
    {
        const bool branch_taken_0x358600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358600) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x358608u;
label_358608:
    // 0x358608: 0x92030640  lbu         $v1, 0x640($s0)
    ctx->pc = 0x358608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1600)));
label_35860c:
    // 0x35860c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35860cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_358610:
    // 0x358610: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_358614:
    if (ctx->pc == 0x358614u) {
        ctx->pc = 0x358614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358610u;
        // 0x358614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358618u;
        goto label_358618;
    }
    ctx->pc = 0x358610u;
    {
        const bool branch_taken_0x358610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x358614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358610u;
        // 0x358614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358610) {
            ctx->pc = 0x358628u;
            goto label_358628;
        }
    }
    ctx->pc = 0x358618u;
label_358618:
    // 0x358618: 0xc0c0830  jal         func_3020C0
label_35861c:
    if (ctx->pc == 0x35861Cu) {
        ctx->pc = 0x35861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358618u;
        // 0x35861c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358620u;
        goto label_358620;
    }
    ctx->pc = 0x358618u;
    SET_GPR_U32(ctx, 31, 0x358620u);
    ctx->pc = 0x35861Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358618u;
    // 0x35861c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x358618u, 0x358620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358620u;
label_358620:
    // 0x358620: 0x10000167  b           . + 4 + (0x167 << 2)
label_358624:
    if (ctx->pc == 0x358624u) {
        ctx->pc = 0x358628u;
        goto label_358628;
    }
    ctx->pc = 0x358620u;
    {
        const bool branch_taken_0x358620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358620) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x358628u;
label_358628:
    // 0x358628: 0x922205ae  lbu         $v0, 0x5AE($s1)
    ctx->pc = 0x358628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1454)));
label_35862c:
    // 0x35862c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_358630:
    if (ctx->pc == 0x358630u) {
        ctx->pc = 0x358634u;
        goto label_358634;
    }
    ctx->pc = 0x35862Cu;
    {
        const bool branch_taken_0x35862c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35862c) {
            ctx->pc = 0x358698u;
            goto label_358698;
        }
    }
    ctx->pc = 0x358634u;
label_358634:
    // 0x358634: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_358638:
    if (ctx->pc == 0x358638u) {
        ctx->pc = 0x358638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358634u;
        // 0x358638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35863Cu;
        goto label_35863c;
    }
    ctx->pc = 0x358634u;
    {
        const bool branch_taken_0x358634 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x358638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358634u;
        // 0x358638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358634) {
            ctx->pc = 0x358648u;
            goto label_358648;
        }
    }
    ctx->pc = 0x35863Cu;
label_35863c:
    // 0x35863c: 0x10000010  b           . + 4 + (0x10 << 2)
label_358640:
    if (ctx->pc == 0x358640u) {
        ctx->pc = 0x358644u;
        goto label_358644;
    }
    ctx->pc = 0x35863Cu;
    {
        const bool branch_taken_0x35863c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35863c) {
            ctx->pc = 0x358680u;
            goto label_358680;
        }
    }
    ctx->pc = 0x358644u;
label_358644:
    // 0x358644: 0x0  nop
    ctx->pc = 0x358644u;
    // NOP
label_358648:
    // 0x358648: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x358648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
label_35864c:
    // 0x35864c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x35864cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_358650:
    // 0x358650: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_358654:
    if (ctx->pc == 0x358654u) {
        ctx->pc = 0x358654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358650u;
        // 0x358654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358658u;
        goto label_358658;
    }
    ctx->pc = 0x358650u;
    {
        const bool branch_taken_0x358650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358650u;
        // 0x358654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358650) {
            ctx->pc = 0x358660u;
            goto label_358660;
        }
    }
    ctx->pc = 0x358658u;
label_358658:
    // 0x358658: 0x10000009  b           . + 4 + (0x9 << 2)
label_35865c:
    if (ctx->pc == 0x35865Cu) {
        ctx->pc = 0x358660u;
        goto label_358660;
    }
    ctx->pc = 0x358658u;
    {
        const bool branch_taken_0x358658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358658) {
            ctx->pc = 0x358680u;
            goto label_358680;
        }
    }
    ctx->pc = 0x358660u;
label_358660:
    // 0x358660: 0xc0c085c  jal         func_302170
label_358664:
    if (ctx->pc == 0x358664u) {
        ctx->pc = 0x358664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358660u;
        // 0x358664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358668u;
        goto label_358668;
    }
    ctx->pc = 0x358660u;
    SET_GPR_U32(ctx, 31, 0x358668u);
    ctx->pc = 0x358664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358660u;
    // 0x358664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302170u, 0x358660u, 0x358668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358668u;
label_358668:
    // 0x358668: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x358668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_35866c:
    // 0x35866c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35866cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358670:
    // 0x358670: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x358670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_358674:
    // 0x358674: 0xc0976ac  jal         func_25DAB0
label_358678:
    if (ctx->pc == 0x358678u) {
        ctx->pc = 0x358678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358674u;
        // 0x358678: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35867Cu;
        goto label_35867c;
    }
    ctx->pc = 0x358674u;
    SET_GPR_U32(ctx, 31, 0x35867Cu);
    ctx->pc = 0x358678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358674u;
    // 0x358678: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DAB0u, 0x358674u, 0x35867Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35867Cu;
label_35867c:
    // 0x35867c: 0x0  nop
    ctx->pc = 0x35867cu;
    // NOP
label_358680:
    // 0x358680: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_358684:
    if (ctx->pc == 0x358684u) {
        ctx->pc = 0x358684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358680u;
        // 0x358684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358688u;
        goto label_358688;
    }
    ctx->pc = 0x358680u;
    {
        const bool branch_taken_0x358680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358680u;
        // 0x358684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358680) {
            ctx->pc = 0x358698u;
            goto label_358698;
        }
    }
    ctx->pc = 0x358688u;
label_358688:
    // 0x358688: 0xc0c0830  jal         func_3020C0
label_35868c:
    if (ctx->pc == 0x35868Cu) {
        ctx->pc = 0x35868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358688u;
        // 0x35868c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358690u;
        goto label_358690;
    }
    ctx->pc = 0x358688u;
    SET_GPR_U32(ctx, 31, 0x358690u);
    ctx->pc = 0x35868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358688u;
    // 0x35868c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x358688u, 0x358690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358690u;
label_358690:
    // 0x358690: 0x1000014b  b           . + 4 + (0x14B << 2)
label_358694:
    if (ctx->pc == 0x358694u) {
        ctx->pc = 0x358698u;
        goto label_358698;
    }
    ctx->pc = 0x358690u;
    {
        const bool branch_taken_0x358690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358690) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x358698u;
label_358698:
    // 0x358698: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x358698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_35869c:
    // 0x35869c: 0x922305ac  lbu         $v1, 0x5AC($s1)
    ctx->pc = 0x35869cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1452)));
label_3586a0:
    // 0x3586a0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3586a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_3586a4:
    // 0x3586a4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3586a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_3586a8:
    // 0x3586a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3586a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3586ac:
    // 0x3586ac: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x3586acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_3586b0:
    // 0x3586b0: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x3586b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_3586b4:
    // 0x3586b4: 0xc096c3c  jal         func_25B0F0
label_3586b8:
    if (ctx->pc == 0x3586B8u) {
        ctx->pc = 0x3586B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3586B4u;
        // 0x3586b8: 0x8e2405a0  lw          $a0, 0x5A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3586BCu;
        goto label_3586bc;
    }
    ctx->pc = 0x3586B4u;
    SET_GPR_U32(ctx, 31, 0x3586BCu);
    ctx->pc = 0x3586B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3586B4u;
    // 0x3586b8: 0x8e2405a0  lw          $a0, 0x5A0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3586B4u, 0x3586BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3586BCu;
label_3586bc:
    // 0x3586bc: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_3586c0:
    if (ctx->pc == 0x3586C0u) {
        ctx->pc = 0x3586C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3586BCu;
        // 0x3586c0: 0xae2005a0  sw          $zero, 0x5A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3586C4u;
        goto label_3586c4;
    }
    ctx->pc = 0x3586BCu;
    {
        const bool branch_taken_0x3586bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3586C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3586BCu;
        // 0x3586c0: 0xae2005a0  sw          $zero, 0x5A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3586bc) {
            ctx->pc = 0x358728u;
            goto label_358728;
        }
    }
    ctx->pc = 0x3586C4u;
label_3586c4:
    // 0x3586c4: 0x922905ab  lbu         $t1, 0x5AB($s1)
    ctx->pc = 0x3586c4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1451)));
label_3586c8:
    // 0x3586c8: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3586c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
label_3586cc:
    // 0x3586cc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3586ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_3586d0:
    // 0x3586d0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3586d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_3586d4:
    // 0x3586d4: 0x2484f980  addiu       $a0, $a0, -0x680
    ctx->pc = 0x3586d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965632));
label_3586d8:
    // 0x3586d8: 0x2463f98c  addiu       $v1, $v1, -0x674
    ctx->pc = 0x3586d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965644));
label_3586dc:
    // 0x3586dc: 0x2442f98d  addiu       $v0, $v0, -0x673
    ctx->pc = 0x3586dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965645));
label_3586e0:
    // 0x3586e0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3586e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3586e4:
    // 0x3586e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3586e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3586e8:
    // 0x3586e8: 0x92840  sll         $a1, $t1, 1
    ctx->pc = 0x3586e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_3586ec:
    // 0x3586ec: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x3586ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_3586f0:
    // 0x3586f0: 0x54900  sll         $t1, $a1, 4
    ctx->pc = 0x3586f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3586f4:
    // 0x3586f4: 0x892821  addu        $a1, $a0, $t1
    ctx->pc = 0x3586f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_3586f8:
    // 0x3586f8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3586f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3586fc:
    // 0x3586fc: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x3586fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_358700:
    // 0x358700: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x358700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_358704:
    // 0x358704: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x358704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_358708:
    // 0x358708: 0x24aa0010  addiu       $t2, $a1, 0x10
    ctx->pc = 0x358708u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_35870c:
    // 0x35870c: 0x90690000  lbu         $t1, 0x0($v1)
    ctx->pc = 0x35870cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_358710:
    // 0x358710: 0x904b0000  lbu         $t3, 0x0($v0)
    ctx->pc = 0x358710u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_358714:
    // 0x358714: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x358714u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_358718:
    // 0x358718: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x358718u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_35871c:
    // 0x35871c: 0xc0aa70c  jal         func_2A9C30
label_358720:
    if (ctx->pc == 0x358720u) {
        ctx->pc = 0x358720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35871Cu;
        // 0x358720: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358724u;
        goto label_358724;
    }
    ctx->pc = 0x35871Cu;
    SET_GPR_U32(ctx, 31, 0x358724u);
    ctx->pc = 0x358720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35871Cu;
    // 0x358720: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C30u, 0x35871Cu, 0x358724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358724u;
label_358724:
    // 0x358724: 0xae2205a0  sw          $v0, 0x5A0($s1)
    ctx->pc = 0x358724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 2));
label_358728:
    // 0x358728: 0x8622052a  lh          $v0, 0x52A($s1)
    ctx->pc = 0x358728u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1322)));
label_35872c:
    // 0x35872c: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x35872cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_358730:
    // 0x358730: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x358730u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_358734:
    // 0x358734: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x358734u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_358738:
    // 0x358738: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x358738u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_35873c:
    // 0x35873c: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x35873cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_358740:
    // 0x358740: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x358740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_358744:
    // 0x358744: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x358744u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_358748:
    // 0x358748: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x358748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
label_35874c:
    // 0x35874c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x35874cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_358750:
    // 0x358750: 0xc07cce0  jal         func_1F3380
label_358754:
    if (ctx->pc == 0x358754u) {
        ctx->pc = 0x358754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358750u;
        // 0x358754: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358758u;
        goto label_358758;
    }
    ctx->pc = 0x358750u;
    SET_GPR_U32(ctx, 31, 0x358758u);
    ctx->pc = 0x358754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358750u;
    // 0x358754: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x358750u, 0x358758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358758u;
label_358758:
    // 0x358758: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x358758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35875c:
    // 0x35875c: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_358760:
    if (ctx->pc == 0x358760u) {
        ctx->pc = 0x358760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35875Cu;
        // 0x358760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358764u;
        goto label_358764;
    }
    ctx->pc = 0x35875Cu;
    {
        const bool branch_taken_0x35875c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x358760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35875Cu;
        // 0x358760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35875c) {
            ctx->pc = 0x358778u;
            goto label_358778;
        }
    }
    ctx->pc = 0x358764u;
label_358764:
    // 0x358764: 0xc0c0830  jal         func_3020C0
label_358768:
    if (ctx->pc == 0x358768u) {
        ctx->pc = 0x358768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358764u;
        // 0x358768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35876Cu;
        goto label_35876c;
    }
    ctx->pc = 0x358764u;
    SET_GPR_U32(ctx, 31, 0x35876Cu);
    ctx->pc = 0x358768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358764u;
    // 0x358768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x358764u, 0x35876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35876Cu;
label_35876c:
    // 0x35876c: 0x10000114  b           . + 4 + (0x114 << 2)
label_358770:
    if (ctx->pc == 0x358770u) {
        ctx->pc = 0x358774u;
        goto label_358774;
    }
    ctx->pc = 0x35876Cu;
    {
        const bool branch_taken_0x35876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35876c) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x358774u;
label_358774:
    // 0x358774: 0x0  nop
    ctx->pc = 0x358774u;
    // NOP
label_358778:
    // 0x358778: 0x8e4329c0  lw          $v1, 0x29C0($s2)
    ctx->pc = 0x358778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
label_35877c:
    // 0x35877c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x35877cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_358780:
    // 0x358780: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_358784:
    if (ctx->pc == 0x358784u) {
        ctx->pc = 0x358788u;
        goto label_358788;
    }
    ctx->pc = 0x358780u;
    {
        const bool branch_taken_0x358780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x358780) {
            ctx->pc = 0x358798u;
            goto label_358798;
        }
    }
    ctx->pc = 0x358788u;
label_358788:
    // 0x358788: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x358788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_35878c:
    // 0x35878c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35878cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_358790:
    // 0x358790: 0x1000010b  b           . + 4 + (0x10B << 2)
label_358794:
    if (ctx->pc == 0x358794u) {
        ctx->pc = 0x358794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358790u;
        // 0x358794: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358798u;
        goto label_358798;
    }
    ctx->pc = 0x358790u;
    {
        const bool branch_taken_0x358790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358790u;
        // 0x358794: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358790) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x358798u;
label_358798:
    // 0x358798: 0xc097864  jal         func_25E190
label_35879c:
    if (ctx->pc == 0x35879Cu) {
        ctx->pc = 0x35879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358798u;
        // 0x35879c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3587A0u;
        goto label_3587a0;
    }
    ctx->pc = 0x358798u;
    SET_GPR_U32(ctx, 31, 0x3587A0u);
    ctx->pc = 0x35879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358798u;
    // 0x35879c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x358798u, 0x3587A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3587A0u;
label_3587a0:
    // 0x3587a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3587a4:
    if (ctx->pc == 0x3587A4u) {
        ctx->pc = 0x3587A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587A0u;
        // 0x3587a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3587A8u;
        goto label_3587a8;
    }
    ctx->pc = 0x3587A0u;
    {
        const bool branch_taken_0x3587a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3587A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587A0u;
        // 0x3587a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587a0) {
            ctx->pc = 0x3587B8u;
            goto label_3587b8;
        }
    }
    ctx->pc = 0x3587A8u;
label_3587a8:
    // 0x3587a8: 0xc0c0830  jal         func_3020C0
label_3587ac:
    if (ctx->pc == 0x3587ACu) {
        ctx->pc = 0x3587ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587A8u;
        // 0x3587ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3587B0u;
        goto label_3587b0;
    }
    ctx->pc = 0x3587A8u;
    SET_GPR_U32(ctx, 31, 0x3587B0u);
    ctx->pc = 0x3587ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3587A8u;
    // 0x3587ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3587A8u, 0x3587B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3587B0u;
label_3587b0:
    // 0x3587b0: 0x10000103  b           . + 4 + (0x103 << 2)
label_3587b4:
    if (ctx->pc == 0x3587B4u) {
        ctx->pc = 0x3587B8u;
        goto label_3587b8;
    }
    ctx->pc = 0x3587B0u;
    {
        const bool branch_taken_0x3587b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3587b0) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x3587B8u;
label_3587b8:
    // 0x3587b8: 0x92030640  lbu         $v1, 0x640($s0)
    ctx->pc = 0x3587b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1600)));
label_3587bc:
    // 0x3587bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3587bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3587c0:
    // 0x3587c0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_3587c4:
    if (ctx->pc == 0x3587C4u) {
        ctx->pc = 0x3587C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587C0u;
        // 0x3587c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3587C8u;
        goto label_3587c8;
    }
    ctx->pc = 0x3587C0u;
    {
        const bool branch_taken_0x3587c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3587C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587C0u;
        // 0x3587c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587c0) {
            ctx->pc = 0x3587D8u;
            goto label_3587d8;
        }
    }
    ctx->pc = 0x3587C8u;
label_3587c8:
    // 0x3587c8: 0xc0c0830  jal         func_3020C0
label_3587cc:
    if (ctx->pc == 0x3587CCu) {
        ctx->pc = 0x3587CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587C8u;
        // 0x3587cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3587D0u;
        goto label_3587d0;
    }
    ctx->pc = 0x3587C8u;
    SET_GPR_U32(ctx, 31, 0x3587D0u);
    ctx->pc = 0x3587CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3587C8u;
    // 0x3587cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3587C8u, 0x3587D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3587D0u;
label_3587d0:
    // 0x3587d0: 0x100000fb  b           . + 4 + (0xFB << 2)
label_3587d4:
    if (ctx->pc == 0x3587D4u) {
        ctx->pc = 0x3587D8u;
        goto label_3587d8;
    }
    ctx->pc = 0x3587D0u;
    {
        const bool branch_taken_0x3587d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3587d0) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x3587D8u;
label_3587d8:
    // 0x3587d8: 0x922205ae  lbu         $v0, 0x5AE($s1)
    ctx->pc = 0x3587d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1454)));
label_3587dc:
    // 0x3587dc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_3587e0:
    if (ctx->pc == 0x3587E0u) {
        ctx->pc = 0x3587E4u;
        goto label_3587e4;
    }
    ctx->pc = 0x3587DCu;
    {
        const bool branch_taken_0x3587dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3587dc) {
            ctx->pc = 0x358848u;
            goto label_358848;
        }
    }
    ctx->pc = 0x3587E4u;
label_3587e4:
    // 0x3587e4: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_3587e8:
    if (ctx->pc == 0x3587E8u) {
        ctx->pc = 0x3587E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587E4u;
        // 0x3587e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3587ECu;
        goto label_3587ec;
    }
    ctx->pc = 0x3587E4u;
    {
        const bool branch_taken_0x3587e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3587E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587E4u;
        // 0x3587e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587e4) {
            ctx->pc = 0x3587F8u;
            goto label_3587f8;
        }
    }
    ctx->pc = 0x3587ECu;
label_3587ec:
    // 0x3587ec: 0x10000010  b           . + 4 + (0x10 << 2)
label_3587f0:
    if (ctx->pc == 0x3587F0u) {
        ctx->pc = 0x3587F4u;
        goto label_3587f4;
    }
    ctx->pc = 0x3587ECu;
    {
        const bool branch_taken_0x3587ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3587ec) {
            ctx->pc = 0x358830u;
            goto label_358830;
        }
    }
    ctx->pc = 0x3587F4u;
label_3587f4:
    // 0x3587f4: 0x0  nop
    ctx->pc = 0x3587f4u;
    // NOP
label_3587f8:
    // 0x3587f8: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x3587f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
label_3587fc:
    // 0x3587fc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3587fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_358800:
    // 0x358800: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_358804:
    if (ctx->pc == 0x358804u) {
        ctx->pc = 0x358804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358800u;
        // 0x358804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358808u;
        goto label_358808;
    }
    ctx->pc = 0x358800u;
    {
        const bool branch_taken_0x358800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358800u;
        // 0x358804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358800) {
            ctx->pc = 0x358810u;
            goto label_358810;
        }
    }
    ctx->pc = 0x358808u;
label_358808:
    // 0x358808: 0x10000009  b           . + 4 + (0x9 << 2)
label_35880c:
    if (ctx->pc == 0x35880Cu) {
        ctx->pc = 0x358810u;
        goto label_358810;
    }
    ctx->pc = 0x358808u;
    {
        const bool branch_taken_0x358808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358808) {
            ctx->pc = 0x358830u;
            goto label_358830;
        }
    }
    ctx->pc = 0x358810u;
label_358810:
    // 0x358810: 0xc0c085c  jal         func_302170
label_358814:
    if (ctx->pc == 0x358814u) {
        ctx->pc = 0x358814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358810u;
        // 0x358814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358818u;
        goto label_358818;
    }
    ctx->pc = 0x358810u;
    SET_GPR_U32(ctx, 31, 0x358818u);
    ctx->pc = 0x358814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358810u;
    // 0x358814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302170u, 0x358810u, 0x358818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358818u;
label_358818:
    // 0x358818: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x358818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_35881c:
    // 0x35881c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35881cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358820:
    // 0x358820: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x358820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_358824:
    // 0x358824: 0xc0976ac  jal         func_25DAB0
label_358828:
    if (ctx->pc == 0x358828u) {
        ctx->pc = 0x358828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358824u;
        // 0x358828: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35882Cu;
        goto label_35882c;
    }
    ctx->pc = 0x358824u;
    SET_GPR_U32(ctx, 31, 0x35882Cu);
    ctx->pc = 0x358828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358824u;
    // 0x358828: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DAB0u, 0x358824u, 0x35882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35882Cu;
label_35882c:
    // 0x35882c: 0x0  nop
    ctx->pc = 0x35882cu;
    // NOP
label_358830:
    // 0x358830: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_358834:
    if (ctx->pc == 0x358834u) {
        ctx->pc = 0x358834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358830u;
        // 0x358834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358838u;
        goto label_358838;
    }
    ctx->pc = 0x358830u;
    {
        const bool branch_taken_0x358830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358830u;
        // 0x358834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358830) {
            ctx->pc = 0x358848u;
            goto label_358848;
        }
    }
    ctx->pc = 0x358838u;
label_358838:
    // 0x358838: 0xc0c0830  jal         func_3020C0
label_35883c:
    if (ctx->pc == 0x35883Cu) {
        ctx->pc = 0x35883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358838u;
        // 0x35883c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358840u;
        goto label_358840;
    }
    ctx->pc = 0x358838u;
    SET_GPR_U32(ctx, 31, 0x358840u);
    ctx->pc = 0x35883Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358838u;
    // 0x35883c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x358838u, 0x358840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358840u;
label_358840:
    // 0x358840: 0x100000df  b           . + 4 + (0xDF << 2)
label_358844:
    if (ctx->pc == 0x358844u) {
        ctx->pc = 0x358848u;
        goto label_358848;
    }
    ctx->pc = 0x358840u;
    {
        const bool branch_taken_0x358840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358840) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x358848u;
label_358848:
    // 0x358848: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x358848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_35884c:
    // 0x35884c: 0x922305ac  lbu         $v1, 0x5AC($s1)
    ctx->pc = 0x35884cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1452)));
label_358850:
    // 0x358850: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x358850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_358854:
    // 0x358854: 0x26260550  addiu       $a2, $s1, 0x550
    ctx->pc = 0x358854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_358858:
    // 0x358858: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x358858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_35885c:
    // 0x35885c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x35885cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_358860:
    // 0x358860: 0xc07679c  jal         func_1D9E70
label_358864:
    if (ctx->pc == 0x358864u) {
        ctx->pc = 0x358864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358860u;
        // 0x358864: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358868u;
        goto label_358868;
    }
    ctx->pc = 0x358860u;
    SET_GPR_U32(ctx, 31, 0x358868u);
    ctx->pc = 0x358864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358860u;
    // 0x358864: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x358860u, 0x358868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358868u;
label_358868:
    // 0x358868: 0x8e2505a0  lw          $a1, 0x5A0($s1)
    ctx->pc = 0x358868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
label_35886c:
    // 0x35886c: 0xc0c08ac  jal         func_3022B0
label_358870:
    if (ctx->pc == 0x358870u) {
        ctx->pc = 0x358870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35886Cu;
        // 0x358870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358874u;
        goto label_358874;
    }
    ctx->pc = 0x35886Cu;
    SET_GPR_U32(ctx, 31, 0x358874u);
    ctx->pc = 0x358870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35886Cu;
    // 0x358870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x35886Cu, 0x358874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358874u;
label_358874:
    // 0x358874: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_358878:
    if (ctx->pc == 0x358878u) {
        ctx->pc = 0x358878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358874u;
        // 0x358878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35887Cu;
        goto label_35887c;
    }
    ctx->pc = 0x358874u;
    {
        const bool branch_taken_0x358874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358874u;
        // 0x358878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358874) {
            ctx->pc = 0x358890u;
            goto label_358890;
        }
    }
    ctx->pc = 0x35887Cu;
label_35887c:
    // 0x35887c: 0xc0c0830  jal         func_3020C0
label_358880:
    if (ctx->pc == 0x358880u) {
        ctx->pc = 0x358880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35887Cu;
        // 0x358880: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358884u;
        goto label_358884;
    }
    ctx->pc = 0x35887Cu;
    SET_GPR_U32(ctx, 31, 0x358884u);
    ctx->pc = 0x358880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35887Cu;
    // 0x358880: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x35887Cu, 0x358884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358884u;
label_358884:
    // 0x358884: 0x100000ce  b           . + 4 + (0xCE << 2)
label_358888:
    if (ctx->pc == 0x358888u) {
        ctx->pc = 0x35888Cu;
        goto label_35888c;
    }
    ctx->pc = 0x358884u;
    {
        const bool branch_taken_0x358884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358884) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x35888Cu;
label_35888c:
    // 0x35888c: 0x0  nop
    ctx->pc = 0x35888cu;
    // NOP
label_358890:
    // 0x358890: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x358890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_358894:
    // 0x358894: 0x78255c20  lq          $a1, 0x5C20($at)
    ctx->pc = 0x358894u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
label_358898:
    // 0x358898: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x358898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_35889c:
    // 0x35889c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x35889cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3588a0:
    // 0x3588a0: 0x7fa50090  sq          $a1, 0x90($sp)
    ctx->pc = 0x3588a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
label_3588a4:
    // 0x3588a4: 0x78245c30  lq          $a0, 0x5C30($at)
    ctx->pc = 0x3588a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 23600)));
label_3588a8:
    // 0x3588a8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3588a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3588ac:
    // 0x3588ac: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x3588acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
label_3588b0:
    // 0x3588b0: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3588b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23616)));
label_3588b4:
    // 0x3588b4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3588b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3588b8:
    // 0x3588b8: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3588b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_3588bc:
    // 0x3588bc: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3588bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23632)));
label_3588c0:
    // 0x3588c0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3588c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_3588c4:
    // 0x3588c4: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3588c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3588c8:
    // 0x3588c8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3588c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_3588cc:
    // 0x3588cc: 0xc096c80  jal         func_25B200
label_3588d0:
    if (ctx->pc == 0x3588D0u) {
        ctx->pc = 0x3588D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3588CCu;
        // 0x3588d0: 0x8e2405a0  lw          $a0, 0x5A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3588D4u;
        goto label_3588d4;
    }
    ctx->pc = 0x3588CCu;
    SET_GPR_U32(ctx, 31, 0x3588D4u);
    ctx->pc = 0x3588D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3588CCu;
    // 0x3588d0: 0x8e2405a0  lw          $a0, 0x5A0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3588CCu, 0x3588D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3588D4u;
label_3588d4:
    // 0x3588d4: 0x9224053a  lbu         $a0, 0x53A($s1)
    ctx->pc = 0x3588d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1338)));
label_3588d8:
    // 0x3588d8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3588d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3588dc:
    // 0x3588dc: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
label_3588e0:
    if (ctx->pc == 0x3588E0u) {
        ctx->pc = 0x3588E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3588DCu;
        // 0x3588e0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3588E4u;
        goto label_3588e4;
    }
    ctx->pc = 0x3588DCu;
    {
        const bool branch_taken_0x3588dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3588E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3588DCu;
        // 0x3588e0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3588dc) {
            ctx->pc = 0x358950u;
            goto label_358950;
        }
    }
    ctx->pc = 0x3588E4u;
label_3588e4:
    // 0x3588e4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3588e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3588e8:
    // 0x3588e8: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
label_3588ec:
    if (ctx->pc == 0x3588ECu) {
        ctx->pc = 0x3588F0u;
        goto label_3588f0;
    }
    ctx->pc = 0x3588E8u;
    {
        const bool branch_taken_0x3588e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3588e8) {
            ctx->pc = 0x358948u;
            goto label_358948;
        }
    }
    ctx->pc = 0x3588F0u;
label_3588f0:
    // 0x3588f0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3588f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3588f4:
    // 0x3588f4: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_3588f8:
    if (ctx->pc == 0x3588F8u) {
        ctx->pc = 0x3588FCu;
        goto label_3588fc;
    }
    ctx->pc = 0x3588F4u;
    {
        const bool branch_taken_0x3588f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3588f4) {
            ctx->pc = 0x358940u;
            goto label_358940;
        }
    }
    ctx->pc = 0x3588FCu;
label_3588fc:
    // 0x3588fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3588fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_358900:
    // 0x358900: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_358904:
    if (ctx->pc == 0x358904u) {
        ctx->pc = 0x358908u;
        goto label_358908;
    }
    ctx->pc = 0x358900u;
    {
        const bool branch_taken_0x358900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x358900) {
            ctx->pc = 0x358938u;
            goto label_358938;
        }
    }
    ctx->pc = 0x358908u;
label_358908:
    // 0x358908: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x358908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35890c:
    // 0x35890c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_358910:
    if (ctx->pc == 0x358910u) {
        ctx->pc = 0x358914u;
        goto label_358914;
    }
    ctx->pc = 0x35890Cu;
    {
        const bool branch_taken_0x35890c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35890c) {
            ctx->pc = 0x358930u;
            goto label_358930;
        }
    }
    ctx->pc = 0x358914u;
label_358914:
    // 0x358914: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x358914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_358918:
    // 0x358918: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_35891c:
    if (ctx->pc == 0x35891Cu) {
        ctx->pc = 0x358920u;
        goto label_358920;
    }
    ctx->pc = 0x358918u;
    {
        const bool branch_taken_0x358918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x358918) {
            ctx->pc = 0x358928u;
            goto label_358928;
        }
    }
    ctx->pc = 0x358920u;
label_358920:
    // 0x358920: 0x1000000d  b           . + 4 + (0xD << 2)
label_358924:
    if (ctx->pc == 0x358924u) {
        ctx->pc = 0x358928u;
        goto label_358928;
    }
    ctx->pc = 0x358920u;
    {
        const bool branch_taken_0x358920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358920) {
            ctx->pc = 0x358958u;
            goto label_358958;
        }
    }
    ctx->pc = 0x358928u;
label_358928:
    // 0x358928: 0x1000000b  b           . + 4 + (0xB << 2)
label_35892c:
    if (ctx->pc == 0x35892Cu) {
        ctx->pc = 0x35892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358928u;
        // 0x35892c: 0xa22305aa  sb          $v1, 0x5AA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1450), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358930u;
        goto label_358930;
    }
    ctx->pc = 0x358928u;
    {
        const bool branch_taken_0x358928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358928u;
        // 0x35892c: 0xa22305aa  sb          $v1, 0x5AA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1450), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358928) {
            ctx->pc = 0x358958u;
            goto label_358958;
        }
    }
    ctx->pc = 0x358930u;
label_358930:
    // 0x358930: 0x10000009  b           . + 4 + (0x9 << 2)
label_358934:
    if (ctx->pc == 0x358934u) {
        ctx->pc = 0x358934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358930u;
        // 0x358934: 0xa22305aa  sb          $v1, 0x5AA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1450), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358938u;
        goto label_358938;
    }
    ctx->pc = 0x358930u;
    {
        const bool branch_taken_0x358930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358930u;
        // 0x358934: 0xa22305aa  sb          $v1, 0x5AA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1450), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358930) {
            ctx->pc = 0x358958u;
            goto label_358958;
        }
    }
    ctx->pc = 0x358938u;
label_358938:
    // 0x358938: 0x10000007  b           . + 4 + (0x7 << 2)
label_35893c:
    if (ctx->pc == 0x35893Cu) {
        ctx->pc = 0x35893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358938u;
        // 0x35893c: 0xa22305aa  sb          $v1, 0x5AA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1450), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358940u;
        goto label_358940;
    }
    ctx->pc = 0x358938u;
    {
        const bool branch_taken_0x358938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358938u;
        // 0x35893c: 0xa22305aa  sb          $v1, 0x5AA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1450), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358938) {
            ctx->pc = 0x358958u;
            goto label_358958;
        }
    }
    ctx->pc = 0x358940u;
label_358940:
    // 0x358940: 0x10000005  b           . + 4 + (0x5 << 2)
label_358944:
    if (ctx->pc == 0x358944u) {
        ctx->pc = 0x358944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358940u;
        // 0x358944: 0xa22305aa  sb          $v1, 0x5AA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1450), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358948u;
        goto label_358948;
    }
    ctx->pc = 0x358940u;
    {
        const bool branch_taken_0x358940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358940u;
        // 0x358944: 0xa22305aa  sb          $v1, 0x5AA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1450), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358940) {
            ctx->pc = 0x358958u;
            goto label_358958;
        }
    }
    ctx->pc = 0x358948u;
label_358948:
    // 0x358948: 0x10000003  b           . + 4 + (0x3 << 2)
label_35894c:
    if (ctx->pc == 0x35894Cu) {
        ctx->pc = 0x35894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358948u;
        // 0x35894c: 0xa22305aa  sb          $v1, 0x5AA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1450), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358950u;
        goto label_358950;
    }
    ctx->pc = 0x358948u;
    {
        const bool branch_taken_0x358948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358948u;
        // 0x35894c: 0xa22305aa  sb          $v1, 0x5AA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1450), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358948) {
            ctx->pc = 0x358958u;
            goto label_358958;
        }
    }
    ctx->pc = 0x358950u;
label_358950:
    // 0x358950: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x358950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_358954:
    // 0x358954: 0xa22305aa  sb          $v1, 0x5AA($s1)
    ctx->pc = 0x358954u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1450), (uint8_t)GPR_U32(ctx, 3));
label_358958:
    // 0x358958: 0x9223053a  lbu         $v1, 0x53A($s1)
    ctx->pc = 0x358958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1338)));
label_35895c:
    // 0x35895c: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x35895cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_358960:
    // 0x358960: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
label_358964:
    if (ctx->pc == 0x358964u) {
        ctx->pc = 0x358964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358960u;
        // 0x358964: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358968u;
        goto label_358968;
    }
    ctx->pc = 0x358960u;
    {
        const bool branch_taken_0x358960 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x358964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358960u;
        // 0x358964: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358960) {
            ctx->pc = 0x358A70u;
            goto label_358a70;
        }
    }
    ctx->pc = 0x358968u;
label_358968:
    // 0x358968: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x358968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_35896c:
    // 0x35896c: 0x2484f9e0  addiu       $a0, $a0, -0x620
    ctx->pc = 0x35896cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965728));
label_358970:
    // 0x358970: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x358970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_358974:
    // 0x358974: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x358974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_358978:
    // 0x358978: 0x600008  jr          $v1
label_35897c:
    if (ctx->pc == 0x35897Cu) {
        ctx->pc = 0x358980u;
        goto label_358980;
    }
    ctx->pc = 0x358978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x358980u: goto label_358980;
            case 0x3589C8u: goto label_3589c8;
            case 0x3589E0u: goto label_3589e0;
            case 0x358A00u: goto label_358a00;
            case 0x358A70u: goto label_358a70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358978u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x358980u;
label_358980:
    // 0x358980: 0x922605aa  lbu         $a2, 0x5AA($s1)
    ctx->pc = 0x358980u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1450)));
label_358984:
    // 0x358984: 0xc62c05a4  lwc1        $f12, 0x5A4($s1)
    ctx->pc = 0x358984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_358988:
    // 0x358988: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x358988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35898c:
    // 0x35898c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35898cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_358990:
    // 0x358990: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x358990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_358994:
    // 0x358994: 0xc0c0900  jal         func_302400
label_358998:
    if (ctx->pc == 0x358998u) {
        ctx->pc = 0x358998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358994u;
        // 0x358998: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35899Cu;
        goto label_35899c;
    }
    ctx->pc = 0x358994u;
    SET_GPR_U32(ctx, 31, 0x35899Cu);
    ctx->pc = 0x358998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358994u;
    // 0x358998: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x358994u, 0x35899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35899Cu;
label_35899c:
    // 0x35899c: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_3589a0:
    if (ctx->pc == 0x3589A0u) {
        ctx->pc = 0x3589A4u;
        goto label_3589a4;
    }
    ctx->pc = 0x35899Cu;
    {
        const bool branch_taken_0x35899c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x35899c) {
            ctx->pc = 0x3589B8u;
            goto label_3589b8;
        }
    }
    ctx->pc = 0x3589A4u;
label_3589a4:
    // 0x3589a4: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x3589a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3589a8:
    // 0x3589a8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x3589a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_3589ac:
    // 0x3589ac: 0x320f809  jalr        $t9
label_3589b0:
    if (ctx->pc == 0x3589B0u) {
        ctx->pc = 0x3589B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589ACu;
        // 0x3589b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3589B4u;
        goto label_3589b4;
    }
    ctx->pc = 0x3589ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3589B4u);
        ctx->pc = 0x3589B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589ACu;
        // 0x3589b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3589ACu, 0x3589B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3589B4u;
label_3589b4:
    // 0x3589b4: 0x0  nop
    ctx->pc = 0x3589b4u;
    // NOP
label_3589b8:
    // 0x3589b8: 0xa220053a  sb          $zero, 0x53A($s1)
    ctx->pc = 0x3589b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1338), (uint8_t)GPR_U32(ctx, 0));
label_3589bc:
    // 0x3589bc: 0x1000002e  b           . + 4 + (0x2E << 2)
label_3589c0:
    if (ctx->pc == 0x3589C0u) {
        ctx->pc = 0x3589C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589BCu;
        // 0x3589c0: 0xa62005a8  sh          $zero, 0x5A8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1448), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3589C4u;
        goto label_3589c4;
    }
    ctx->pc = 0x3589BCu;
    {
        const bool branch_taken_0x3589bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3589C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589BCu;
        // 0x3589c0: 0xa62005a8  sh          $zero, 0x5A8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1448), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3589bc) {
            ctx->pc = 0x358A78u;
            goto label_358a78;
        }
    }
    ctx->pc = 0x3589C4u;
label_3589c4:
    // 0x3589c4: 0x0  nop
    ctx->pc = 0x3589c4u;
    // NOP
label_3589c8:
    // 0x3589c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3589c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3589cc:
    // 0x3589cc: 0xc0c0830  jal         func_3020C0
label_3589d0:
    if (ctx->pc == 0x3589D0u) {
        ctx->pc = 0x3589D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589CCu;
        // 0x3589d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3589D4u;
        goto label_3589d4;
    }
    ctx->pc = 0x3589CCu;
    SET_GPR_U32(ctx, 31, 0x3589D4u);
    ctx->pc = 0x3589D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3589CCu;
    // 0x3589d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3589CCu, 0x3589D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589D4u;
label_3589d4:
    // 0x3589d4: 0x1000007a  b           . + 4 + (0x7A << 2)
label_3589d8:
    if (ctx->pc == 0x3589D8u) {
        ctx->pc = 0x3589DCu;
        goto label_3589dc;
    }
    ctx->pc = 0x3589D4u;
    {
        const bool branch_taken_0x3589d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3589d4) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x3589DCu;
label_3589dc:
    // 0x3589dc: 0x0  nop
    ctx->pc = 0x3589dcu;
    // NOP
label_3589e0:
    // 0x3589e0: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_3589e4:
    if (ctx->pc == 0x3589E4u) {
        ctx->pc = 0x3589E8u;
        goto label_3589e8;
    }
    ctx->pc = 0x3589E0u;
    {
        const bool branch_taken_0x3589e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3589e0) {
            ctx->pc = 0x3589F8u;
            goto label_3589f8;
        }
    }
    ctx->pc = 0x3589E8u;
label_3589e8:
    // 0x3589e8: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x3589e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3589ec:
    // 0x3589ec: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x3589ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_3589f0:
    // 0x3589f0: 0x320f809  jalr        $t9
label_3589f4:
    if (ctx->pc == 0x3589F4u) {
        ctx->pc = 0x3589F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589F0u;
        // 0x3589f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3589F8u;
        goto label_3589f8;
    }
    ctx->pc = 0x3589F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3589F8u);
        ctx->pc = 0x3589F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589F0u;
        // 0x3589f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3589F0u, 0x3589F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3589F8u;
label_3589f8:
    // 0x3589f8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3589fc:
    if (ctx->pc == 0x3589FCu) {
        ctx->pc = 0x3589FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589F8u;
        // 0x3589fc: 0xa220053a  sb          $zero, 0x53A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1338), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358A00u;
        goto label_358a00;
    }
    ctx->pc = 0x3589F8u;
    {
        const bool branch_taken_0x3589f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3589FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589F8u;
        // 0x3589fc: 0xa220053a  sb          $zero, 0x53A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1338), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3589f8) {
            ctx->pc = 0x358A78u;
            goto label_358a78;
        }
    }
    ctx->pc = 0x358A00u;
label_358a00:
    // 0x358a00: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_358a04:
    if (ctx->pc == 0x358A04u) {
        ctx->pc = 0x358A08u;
        goto label_358a08;
    }
    ctx->pc = 0x358A00u;
    {
        const bool branch_taken_0x358a00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x358a00) {
            ctx->pc = 0x358A38u;
            goto label_358a38;
        }
    }
    ctx->pc = 0x358A08u;
label_358a08:
    // 0x358a08: 0x9224052e  lbu         $a0, 0x52E($s1)
    ctx->pc = 0x358a08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_358a0c:
    // 0x358a0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x358a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358a10:
    // 0x358a10: 0x8e2705a0  lw          $a3, 0x5A0($s1)
    ctx->pc = 0x358a10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
label_358a14:
    // 0x358a14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x358a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_358a18:
    // 0x358a18: 0x922805ac  lbu         $t0, 0x5AC($s1)
    ctx->pc = 0x358a18u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1452)));
label_358a1c:
    // 0x358a1c: 0xc0bc4bc  jal         func_2F12F0
label_358a20:
    if (ctx->pc == 0x358A20u) {
        ctx->pc = 0x358A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A1Cu;
        // 0x358a20: 0x26290550  addiu       $t1, $s1, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358A24u;
        goto label_358a24;
    }
    ctx->pc = 0x358A1Cu;
    SET_GPR_U32(ctx, 31, 0x358A24u);
    ctx->pc = 0x358A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358A1Cu;
    // 0x358a20: 0x26290550  addiu       $t1, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F12F0u, 0x358A1Cu, 0x358A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358A24u;
label_358a24:
    // 0x358a24: 0x922305ad  lbu         $v1, 0x5AD($s1)
    ctx->pc = 0x358a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1453)));
label_358a28:
    // 0x358a28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x358a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_358a2c:
    // 0x358a2c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x358a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_358a30:
    // 0x358a30: 0xac620560  sw          $v0, 0x560($v1)
    ctx->pc = 0x358a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1376), GPR_U32(ctx, 2));
label_358a34:
    // 0x358a34: 0x0  nop
    ctx->pc = 0x358a34u;
    // NOP
label_358a38:
    // 0x358a38: 0x962305a8  lhu         $v1, 0x5A8($s1)
    ctx->pc = 0x358a38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1448)));
label_358a3c:
    // 0x358a3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_358a40:
    // 0x358a40: 0xa62305a8  sh          $v1, 0x5A8($s1)
    ctx->pc = 0x358a40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1448), (uint16_t)GPR_U32(ctx, 3));
label_358a44:
    // 0x358a44: 0x922305ad  lbu         $v1, 0x5AD($s1)
    ctx->pc = 0x358a44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1453)));
label_358a48:
    // 0x358a48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_358a4c:
    // 0x358a4c: 0xa22305ad  sb          $v1, 0x5AD($s1)
    ctx->pc = 0x358a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1453), (uint8_t)GPR_U32(ctx, 3));
label_358a50:
    // 0x358a50: 0x922305ad  lbu         $v1, 0x5AD($s1)
    ctx->pc = 0x358a50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1453)));
label_358a54:
    // 0x358a54: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x358a54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_358a58:
    // 0x358a58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_358a5c:
    if (ctx->pc == 0x358A5Cu) {
        ctx->pc = 0x358A60u;
        goto label_358a60;
    }
    ctx->pc = 0x358A58u;
    {
        const bool branch_taken_0x358a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x358a58) {
            ctx->pc = 0x358A68u;
            goto label_358a68;
        }
    }
    ctx->pc = 0x358A60u;
label_358a60:
    // 0x358a60: 0xa22005ad  sb          $zero, 0x5AD($s1)
    ctx->pc = 0x358a60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1453), (uint8_t)GPR_U32(ctx, 0));
label_358a64:
    // 0x358a64: 0x0  nop
    ctx->pc = 0x358a64u;
    // NOP
label_358a68:
    // 0x358a68: 0x10000003  b           . + 4 + (0x3 << 2)
label_358a6c:
    if (ctx->pc == 0x358A6Cu) {
        ctx->pc = 0x358A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A68u;
        // 0x358a6c: 0xa220053a  sb          $zero, 0x53A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1338), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358A70u;
        goto label_358a70;
    }
    ctx->pc = 0x358A68u;
    {
        const bool branch_taken_0x358a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A68u;
        // 0x358a6c: 0xa220053a  sb          $zero, 0x53A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1338), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358a68) {
            ctx->pc = 0x358A78u;
            goto label_358a78;
        }
    }
    ctx->pc = 0x358A70u;
label_358a70:
    // 0x358a70: 0xa220053a  sb          $zero, 0x53A($s1)
    ctx->pc = 0x358a70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1338), (uint8_t)GPR_U32(ctx, 0));
label_358a74:
    // 0x358a74: 0x0  nop
    ctx->pc = 0x358a74u;
    // NOP
label_358a78:
    // 0x358a78: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x358a78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
label_358a7c:
    // 0x358a7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_358a80:
    if (ctx->pc == 0x358A80u) {
        ctx->pc = 0x358A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A7Cu;
        // 0x358a80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358A84u;
        goto label_358a84;
    }
    ctx->pc = 0x358A7Cu;
    {
        const bool branch_taken_0x358a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x358A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A7Cu;
        // 0x358a80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358a7c) {
            ctx->pc = 0x358A90u;
            goto label_358a90;
        }
    }
    ctx->pc = 0x358A84u;
label_358a84:
    // 0x358a84: 0x10000022  b           . + 4 + (0x22 << 2)
label_358a88:
    if (ctx->pc == 0x358A88u) {
        ctx->pc = 0x358A8Cu;
        goto label_358a8c;
    }
    ctx->pc = 0x358A84u;
    {
        const bool branch_taken_0x358a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358a84) {
            ctx->pc = 0x358B10u;
            goto label_358b10;
        }
    }
    ctx->pc = 0x358A8Cu;
label_358a8c:
    // 0x358a8c: 0x0  nop
    ctx->pc = 0x358a8cu;
    // NOP
label_358a90:
    // 0x358a90: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x358a90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_358a94:
    // 0x358a94: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x358a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_358a98:
    // 0x358a98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x358a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_358a9c:
    // 0x358a9c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x358a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_358aa0:
    // 0x358aa0: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x358aa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_358aa4:
    // 0x358aa4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_358aa8:
    if (ctx->pc == 0x358AA8u) {
        ctx->pc = 0x358AACu;
        goto label_358aac;
    }
    ctx->pc = 0x358AA4u;
    {
        const bool branch_taken_0x358aa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x358aa4) {
            ctx->pc = 0x358AE0u;
            goto label_358ae0;
        }
    }
    ctx->pc = 0x358AACu;
label_358aac:
    // 0x358aac: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x358aacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_358ab0:
    // 0x358ab0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x358ab0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_358ab4:
    // 0x358ab4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_358ab8:
    if (ctx->pc == 0x358AB8u) {
        ctx->pc = 0x358AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358AB4u;
        // 0x358ab8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358ABCu;
        goto label_358abc;
    }
    ctx->pc = 0x358AB4u;
    {
        const bool branch_taken_0x358ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x358AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358AB4u;
        // 0x358ab8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358ab4) {
            ctx->pc = 0x358B08u;
            goto label_358b08;
        }
    }
    ctx->pc = 0x358ABCu;
label_358abc:
    // 0x358abc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x358abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_358ac0:
    // 0x358ac0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x358ac0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_358ac4:
    // 0x358ac4: 0x0  nop
    ctx->pc = 0x358ac4u;
    // NOP
label_358ac8:
    // 0x358ac8: 0x0  nop
    ctx->pc = 0x358ac8u;
    // NOP
label_358acc:
    // 0x358acc: 0x2010  mfhi        $a0
    ctx->pc = 0x358accu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_358ad0:
    // 0x358ad0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x358ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_358ad4:
    // 0x358ad4: 0x1000000c  b           . + 4 + (0xC << 2)
label_358ad8:
    if (ctx->pc == 0x358AD8u) {
        ctx->pc = 0x358AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358AD4u;
        // 0x358ad8: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358ADCu;
        goto label_358adc;
    }
    ctx->pc = 0x358AD4u;
    {
        const bool branch_taken_0x358ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358AD4u;
        // 0x358ad8: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358ad4) {
            ctx->pc = 0x358B08u;
            goto label_358b08;
        }
    }
    ctx->pc = 0x358ADCu;
label_358adc:
    // 0x358adc: 0x0  nop
    ctx->pc = 0x358adcu;
    // NOP
label_358ae0:
    // 0x358ae0: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x358ae0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_358ae4:
    // 0x358ae4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x358ae4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_358ae8:
    // 0x358ae8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_358aec:
    if (ctx->pc == 0x358AECu) {
        ctx->pc = 0x358AF0u;
        goto label_358af0;
    }
    ctx->pc = 0x358AE8u;
    {
        const bool branch_taken_0x358ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x358ae8) {
            ctx->pc = 0x358B08u;
            goto label_358b08;
        }
    }
    ctx->pc = 0x358AF0u;
label_358af0:
    // 0x358af0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x358af0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_358af4:
    // 0x358af4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x358af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_358af8:
    // 0x358af8: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x358af8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
label_358afc:
    // 0x358afc: 0x10000004  b           . + 4 + (0x4 << 2)
label_358b00:
    if (ctx->pc == 0x358B00u) {
        ctx->pc = 0x358B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358AFCu;
        // 0x358b00: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358B04u;
        goto label_358b04;
    }
    ctx->pc = 0x358AFCu;
    {
        const bool branch_taken_0x358afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358AFCu;
        // 0x358b00: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358afc) {
            ctx->pc = 0x358B10u;
            goto label_358b10;
        }
    }
    ctx->pc = 0x358B04u;
label_358b04:
    // 0x358b04: 0x0  nop
    ctx->pc = 0x358b04u;
    // NOP
label_358b08:
    // 0x358b08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x358b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_358b0c:
    // 0x358b0c: 0x0  nop
    ctx->pc = 0x358b0cu;
    // NOP
label_358b10:
    // 0x358b10: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_358b14:
    if (ctx->pc == 0x358B14u) {
        ctx->pc = 0x358B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B10u;
        // 0x358b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358B18u;
        goto label_358b18;
    }
    ctx->pc = 0x358B10u;
    {
        const bool branch_taken_0x358b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x358B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B10u;
        // 0x358b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b10) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x358B18u;
label_358b18:
    // 0x358b18: 0xc0c0830  jal         func_3020C0
label_358b1c:
    if (ctx->pc == 0x358B1Cu) {
        ctx->pc = 0x358B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B18u;
        // 0x358b1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358B20u;
        goto label_358b20;
    }
    ctx->pc = 0x358B18u;
    SET_GPR_U32(ctx, 31, 0x358B20u);
    ctx->pc = 0x358B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358B18u;
    // 0x358b1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x358B18u, 0x358B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B20u;
label_358b20:
    // 0x358b20: 0x10000027  b           . + 4 + (0x27 << 2)
label_358b24:
    if (ctx->pc == 0x358B24u) {
        ctx->pc = 0x358B28u;
        goto label_358b28;
    }
    ctx->pc = 0x358B20u;
    {
        const bool branch_taken_0x358b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358b20) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x358B28u;
label_358b28:
    // 0x358b28: 0x962305a8  lhu         $v1, 0x5A8($s1)
    ctx->pc = 0x358b28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1448)));
label_358b2c:
    // 0x358b2c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_358b30:
    if (ctx->pc == 0x358B30u) {
        ctx->pc = 0x358B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B2Cu;
        // 0x358b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358B34u;
        goto label_358b34;
    }
    ctx->pc = 0x358B2Cu;
    {
        const bool branch_taken_0x358b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x358B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B2Cu;
        // 0x358b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b2c) {
            ctx->pc = 0x358B48u;
            goto label_358b48;
        }
    }
    ctx->pc = 0x358B34u;
label_358b34:
    // 0x358b34: 0xc0c0830  jal         func_3020C0
label_358b38:
    if (ctx->pc == 0x358B38u) {
        ctx->pc = 0x358B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B34u;
        // 0x358b38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358B3Cu;
        goto label_358b3c;
    }
    ctx->pc = 0x358B34u;
    SET_GPR_U32(ctx, 31, 0x358B3Cu);
    ctx->pc = 0x358B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358B34u;
    // 0x358b38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x358B34u, 0x358B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B3Cu;
label_358b3c:
    // 0x358b3c: 0x10000020  b           . + 4 + (0x20 << 2)
label_358b40:
    if (ctx->pc == 0x358B40u) {
        ctx->pc = 0x358B44u;
        goto label_358b44;
    }
    ctx->pc = 0x358B3Cu;
    {
        const bool branch_taken_0x358b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358b3c) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x358B44u;
label_358b44:
    // 0x358b44: 0x0  nop
    ctx->pc = 0x358b44u;
    // NOP
label_358b48:
    // 0x358b48: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x358b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
label_358b4c:
    // 0x358b4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x358b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358b50:
    // 0x358b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x358b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358b54:
    // 0x358b54: 0x2484f9b0  addiu       $a0, $a0, -0x650
    ctx->pc = 0x358b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965680));
label_358b58:
    // 0x358b58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x358b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_358b5c:
    // 0x358b5c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x358b5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_358b60:
    // 0x358b60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_358b64:
    if (ctx->pc == 0x358B64u) {
        ctx->pc = 0x358B68u;
        goto label_358b68;
    }
    ctx->pc = 0x358B60u;
    {
        const bool branch_taken_0x358b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x358b60) {
            ctx->pc = 0x358B80u;
            goto label_358b80;
        }
    }
    ctx->pc = 0x358B68u;
label_358b68:
    // 0x358b68: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x358b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_358b6c:
    // 0x358b6c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x358b6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_358b70:
    // 0x358b70: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_358b74:
    if (ctx->pc == 0x358B74u) {
        ctx->pc = 0x358B78u;
        goto label_358b78;
    }
    ctx->pc = 0x358B70u;
    {
        const bool branch_taken_0x358b70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x358b70) {
            ctx->pc = 0x358B80u;
            goto label_358b80;
        }
    }
    ctx->pc = 0x358B78u;
label_358b78:
    // 0x358b78: 0x10000005  b           . + 4 + (0x5 << 2)
label_358b7c:
    if (ctx->pc == 0x358B7Cu) {
        ctx->pc = 0x358B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B78u;
        // 0x358b7c: 0x30a700ff  andi        $a3, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x358B80u;
        goto label_358b80;
    }
    ctx->pc = 0x358B78u;
    {
        const bool branch_taken_0x358b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B78u;
        // 0x358b7c: 0x30a700ff  andi        $a3, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b78) {
            ctx->pc = 0x358B90u;
            goto label_358b90;
        }
    }
    ctx->pc = 0x358B80u;
label_358b80:
    // 0x358b80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x358b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_358b84:
    // 0x358b84: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x358b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
label_358b88:
    // 0x358b88: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_358b8c:
    if (ctx->pc == 0x358B8Cu) {
        ctx->pc = 0x358B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B88u;
        // 0x358b8c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358B90u;
        goto label_358b90;
    }
    ctx->pc = 0x358B88u;
    {
        const bool branch_taken_0x358b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B88u;
        // 0x358b8c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b88) {
            ctx->pc = 0x358B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358b58;
        }
    }
    ctx->pc = 0x358B90u;
label_358b90:
    // 0x358b90: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_358b94:
    if (ctx->pc == 0x358B94u) {
        ctx->pc = 0x358B98u;
        goto label_358b98;
    }
    ctx->pc = 0x358B90u;
    {
        const bool branch_taken_0x358b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x358b90) {
            ctx->pc = 0x358BA8u;
            goto label_358ba8;
        }
    }
    ctx->pc = 0x358B98u;
label_358b98:
    // 0x358b98: 0x9224052e  lbu         $a0, 0x52E($s1)
    ctx->pc = 0x358b98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_358b9c:
    // 0x358b9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x358b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358ba0:
    // 0x358ba0: 0xc0bc4d8  jal         func_2F1360
label_358ba4:
    if (ctx->pc == 0x358BA4u) {
        ctx->pc = 0x358BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358BA0u;
        // 0x358ba4: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358BA8u;
        goto label_358ba8;
    }
    ctx->pc = 0x358BA0u;
    SET_GPR_U32(ctx, 31, 0x358BA8u);
    ctx->pc = 0x358BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BA0u;
    // 0x358ba4: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1360u, 0x358BA0u, 0x358BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BA8u;
label_358ba8:
    // 0x358ba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x358ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_358bac:
    // 0x358bac: 0xc0c0830  jal         func_3020C0
label_358bb0:
    if (ctx->pc == 0x358BB0u) {
        ctx->pc = 0x358BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358BACu;
        // 0x358bb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358BB4u;
        goto label_358bb4;
    }
    ctx->pc = 0x358BACu;
    SET_GPR_U32(ctx, 31, 0x358BB4u);
    ctx->pc = 0x358BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BACu;
    // 0x358bb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x358BACu, 0x358BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BB4u;
label_358bb4:
    // 0x358bb4: 0x10000002  b           . + 4 + (0x2 << 2)
label_358bb8:
    if (ctx->pc == 0x358BB8u) {
        ctx->pc = 0x358BBCu;
        goto label_358bbc;
    }
    ctx->pc = 0x358BB4u;
    {
        const bool branch_taken_0x358bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358bb4) {
            ctx->pc = 0x358BC0u;
            goto label_358bc0;
        }
    }
    ctx->pc = 0x358BBCu;
label_358bbc:
    // 0x358bbc: 0x0  nop
    ctx->pc = 0x358bbcu;
    // NOP
label_358bc0:
    // 0x358bc0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x358bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_358bc4:
    // 0x358bc4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x358bc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_358bc8:
    // 0x358bc8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x358bc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_358bcc:
    // 0x358bcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x358bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_358bd0:
    // 0x358bd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x358bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_358bd4:
    // 0x358bd4: 0x3e00008  jr          $ra
label_358bd8:
    if (ctx->pc == 0x358BD8u) {
        ctx->pc = 0x358BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358BD4u;
        // 0x358bd8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358BDCu;
        goto label_fallthrough_0x358bd4;
    }
    ctx->pc = 0x358BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358BD4u;
        // 0x358bd8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x358bd4:
    ctx->pc = 0x358BDCu;
}
