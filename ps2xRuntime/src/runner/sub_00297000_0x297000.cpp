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

// Function: sub_00297000
// Address: 0x297000 - 0x297b84
void sub_00297000_0x297000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297000_0x297000");
#endif

    switch (ctx->pc) {
        case 0x297000u: goto label_297000;
        case 0x297004u: goto label_297004;
        case 0x297008u: goto label_297008;
        case 0x29700cu: goto label_29700c;
        case 0x297010u: goto label_297010;
        case 0x297014u: goto label_297014;
        case 0x297018u: goto label_297018;
        case 0x29701cu: goto label_29701c;
        case 0x297020u: goto label_297020;
        case 0x297024u: goto label_297024;
        case 0x297028u: goto label_297028;
        case 0x29702cu: goto label_29702c;
        case 0x297030u: goto label_297030;
        case 0x297034u: goto label_297034;
        case 0x297038u: goto label_297038;
        case 0x29703cu: goto label_29703c;
        case 0x297040u: goto label_297040;
        case 0x297044u: goto label_297044;
        case 0x297048u: goto label_297048;
        case 0x29704cu: goto label_29704c;
        case 0x297050u: goto label_297050;
        case 0x297054u: goto label_297054;
        case 0x297058u: goto label_297058;
        case 0x29705cu: goto label_29705c;
        case 0x297060u: goto label_297060;
        case 0x297064u: goto label_297064;
        case 0x297068u: goto label_297068;
        case 0x29706cu: goto label_29706c;
        case 0x297070u: goto label_297070;
        case 0x297074u: goto label_297074;
        case 0x297078u: goto label_297078;
        case 0x29707cu: goto label_29707c;
        case 0x297080u: goto label_297080;
        case 0x297084u: goto label_297084;
        case 0x297088u: goto label_297088;
        case 0x29708cu: goto label_29708c;
        case 0x297090u: goto label_297090;
        case 0x297094u: goto label_297094;
        case 0x297098u: goto label_297098;
        case 0x29709cu: goto label_29709c;
        case 0x2970a0u: goto label_2970a0;
        case 0x2970a4u: goto label_2970a4;
        case 0x2970a8u: goto label_2970a8;
        case 0x2970acu: goto label_2970ac;
        case 0x2970b0u: goto label_2970b0;
        case 0x2970b4u: goto label_2970b4;
        case 0x2970b8u: goto label_2970b8;
        case 0x2970bcu: goto label_2970bc;
        case 0x2970c0u: goto label_2970c0;
        case 0x2970c4u: goto label_2970c4;
        case 0x2970c8u: goto label_2970c8;
        case 0x2970ccu: goto label_2970cc;
        case 0x2970d0u: goto label_2970d0;
        case 0x2970d4u: goto label_2970d4;
        case 0x2970d8u: goto label_2970d8;
        case 0x2970dcu: goto label_2970dc;
        case 0x2970e0u: goto label_2970e0;
        case 0x2970e4u: goto label_2970e4;
        case 0x2970e8u: goto label_2970e8;
        case 0x2970ecu: goto label_2970ec;
        case 0x2970f0u: goto label_2970f0;
        case 0x2970f4u: goto label_2970f4;
        case 0x2970f8u: goto label_2970f8;
        case 0x2970fcu: goto label_2970fc;
        case 0x297100u: goto label_297100;
        case 0x297104u: goto label_297104;
        case 0x297108u: goto label_297108;
        case 0x29710cu: goto label_29710c;
        case 0x297110u: goto label_297110;
        case 0x297114u: goto label_297114;
        case 0x297118u: goto label_297118;
        case 0x29711cu: goto label_29711c;
        case 0x297120u: goto label_297120;
        case 0x297124u: goto label_297124;
        case 0x297128u: goto label_297128;
        case 0x29712cu: goto label_29712c;
        case 0x297130u: goto label_297130;
        case 0x297134u: goto label_297134;
        case 0x297138u: goto label_297138;
        case 0x29713cu: goto label_29713c;
        case 0x297140u: goto label_297140;
        case 0x297144u: goto label_297144;
        case 0x297148u: goto label_297148;
        case 0x29714cu: goto label_29714c;
        case 0x297150u: goto label_297150;
        case 0x297154u: goto label_297154;
        case 0x297158u: goto label_297158;
        case 0x29715cu: goto label_29715c;
        case 0x297160u: goto label_297160;
        case 0x297164u: goto label_297164;
        case 0x297168u: goto label_297168;
        case 0x29716cu: goto label_29716c;
        case 0x297170u: goto label_297170;
        case 0x297174u: goto label_297174;
        case 0x297178u: goto label_297178;
        case 0x29717cu: goto label_29717c;
        case 0x297180u: goto label_297180;
        case 0x297184u: goto label_297184;
        case 0x297188u: goto label_297188;
        case 0x29718cu: goto label_29718c;
        case 0x297190u: goto label_297190;
        case 0x297194u: goto label_297194;
        case 0x297198u: goto label_297198;
        case 0x29719cu: goto label_29719c;
        case 0x2971a0u: goto label_2971a0;
        case 0x2971a4u: goto label_2971a4;
        case 0x2971a8u: goto label_2971a8;
        case 0x2971acu: goto label_2971ac;
        case 0x2971b0u: goto label_2971b0;
        case 0x2971b4u: goto label_2971b4;
        case 0x2971b8u: goto label_2971b8;
        case 0x2971bcu: goto label_2971bc;
        case 0x2971c0u: goto label_2971c0;
        case 0x2971c4u: goto label_2971c4;
        case 0x2971c8u: goto label_2971c8;
        case 0x2971ccu: goto label_2971cc;
        case 0x2971d0u: goto label_2971d0;
        case 0x2971d4u: goto label_2971d4;
        case 0x2971d8u: goto label_2971d8;
        case 0x2971dcu: goto label_2971dc;
        case 0x2971e0u: goto label_2971e0;
        case 0x2971e4u: goto label_2971e4;
        case 0x2971e8u: goto label_2971e8;
        case 0x2971ecu: goto label_2971ec;
        case 0x2971f0u: goto label_2971f0;
        case 0x2971f4u: goto label_2971f4;
        case 0x2971f8u: goto label_2971f8;
        case 0x2971fcu: goto label_2971fc;
        case 0x297200u: goto label_297200;
        case 0x297204u: goto label_297204;
        case 0x297208u: goto label_297208;
        case 0x29720cu: goto label_29720c;
        case 0x297210u: goto label_297210;
        case 0x297214u: goto label_297214;
        case 0x297218u: goto label_297218;
        case 0x29721cu: goto label_29721c;
        case 0x297220u: goto label_297220;
        case 0x297224u: goto label_297224;
        case 0x297228u: goto label_297228;
        case 0x29722cu: goto label_29722c;
        case 0x297230u: goto label_297230;
        case 0x297234u: goto label_297234;
        case 0x297238u: goto label_297238;
        case 0x29723cu: goto label_29723c;
        case 0x297240u: goto label_297240;
        case 0x297244u: goto label_297244;
        case 0x297248u: goto label_297248;
        case 0x29724cu: goto label_29724c;
        case 0x297250u: goto label_297250;
        case 0x297254u: goto label_297254;
        case 0x297258u: goto label_297258;
        case 0x29725cu: goto label_29725c;
        case 0x297260u: goto label_297260;
        case 0x297264u: goto label_297264;
        case 0x297268u: goto label_297268;
        case 0x29726cu: goto label_29726c;
        case 0x297270u: goto label_297270;
        case 0x297274u: goto label_297274;
        case 0x297278u: goto label_297278;
        case 0x29727cu: goto label_29727c;
        case 0x297280u: goto label_297280;
        case 0x297284u: goto label_297284;
        case 0x297288u: goto label_297288;
        case 0x29728cu: goto label_29728c;
        case 0x297290u: goto label_297290;
        case 0x297294u: goto label_297294;
        case 0x297298u: goto label_297298;
        case 0x29729cu: goto label_29729c;
        case 0x2972a0u: goto label_2972a0;
        case 0x2972a4u: goto label_2972a4;
        case 0x2972a8u: goto label_2972a8;
        case 0x2972acu: goto label_2972ac;
        case 0x2972b0u: goto label_2972b0;
        case 0x2972b4u: goto label_2972b4;
        case 0x2972b8u: goto label_2972b8;
        case 0x2972bcu: goto label_2972bc;
        case 0x2972c0u: goto label_2972c0;
        case 0x2972c4u: goto label_2972c4;
        case 0x2972c8u: goto label_2972c8;
        case 0x2972ccu: goto label_2972cc;
        case 0x2972d0u: goto label_2972d0;
        case 0x2972d4u: goto label_2972d4;
        case 0x2972d8u: goto label_2972d8;
        case 0x2972dcu: goto label_2972dc;
        case 0x2972e0u: goto label_2972e0;
        case 0x2972e4u: goto label_2972e4;
        case 0x2972e8u: goto label_2972e8;
        case 0x2972ecu: goto label_2972ec;
        case 0x2972f0u: goto label_2972f0;
        case 0x2972f4u: goto label_2972f4;
        case 0x2972f8u: goto label_2972f8;
        case 0x2972fcu: goto label_2972fc;
        case 0x297300u: goto label_297300;
        case 0x297304u: goto label_297304;
        case 0x297308u: goto label_297308;
        case 0x29730cu: goto label_29730c;
        case 0x297310u: goto label_297310;
        case 0x297314u: goto label_297314;
        case 0x297318u: goto label_297318;
        case 0x29731cu: goto label_29731c;
        case 0x297320u: goto label_297320;
        case 0x297324u: goto label_297324;
        case 0x297328u: goto label_297328;
        case 0x29732cu: goto label_29732c;
        case 0x297330u: goto label_297330;
        case 0x297334u: goto label_297334;
        case 0x297338u: goto label_297338;
        case 0x29733cu: goto label_29733c;
        case 0x297340u: goto label_297340;
        case 0x297344u: goto label_297344;
        case 0x297348u: goto label_297348;
        case 0x29734cu: goto label_29734c;
        case 0x297350u: goto label_297350;
        case 0x297354u: goto label_297354;
        case 0x297358u: goto label_297358;
        case 0x29735cu: goto label_29735c;
        case 0x297360u: goto label_297360;
        case 0x297364u: goto label_297364;
        case 0x297368u: goto label_297368;
        case 0x29736cu: goto label_29736c;
        case 0x297370u: goto label_297370;
        case 0x297374u: goto label_297374;
        case 0x297378u: goto label_297378;
        case 0x29737cu: goto label_29737c;
        case 0x297380u: goto label_297380;
        case 0x297384u: goto label_297384;
        case 0x297388u: goto label_297388;
        case 0x29738cu: goto label_29738c;
        case 0x297390u: goto label_297390;
        case 0x297394u: goto label_297394;
        case 0x297398u: goto label_297398;
        case 0x29739cu: goto label_29739c;
        case 0x2973a0u: goto label_2973a0;
        case 0x2973a4u: goto label_2973a4;
        case 0x2973a8u: goto label_2973a8;
        case 0x2973acu: goto label_2973ac;
        case 0x2973b0u: goto label_2973b0;
        case 0x2973b4u: goto label_2973b4;
        case 0x2973b8u: goto label_2973b8;
        case 0x2973bcu: goto label_2973bc;
        case 0x2973c0u: goto label_2973c0;
        case 0x2973c4u: goto label_2973c4;
        case 0x2973c8u: goto label_2973c8;
        case 0x2973ccu: goto label_2973cc;
        case 0x2973d0u: goto label_2973d0;
        case 0x2973d4u: goto label_2973d4;
        case 0x2973d8u: goto label_2973d8;
        case 0x2973dcu: goto label_2973dc;
        case 0x2973e0u: goto label_2973e0;
        case 0x2973e4u: goto label_2973e4;
        case 0x2973e8u: goto label_2973e8;
        case 0x2973ecu: goto label_2973ec;
        case 0x2973f0u: goto label_2973f0;
        case 0x2973f4u: goto label_2973f4;
        case 0x2973f8u: goto label_2973f8;
        case 0x2973fcu: goto label_2973fc;
        case 0x297400u: goto label_297400;
        case 0x297404u: goto label_297404;
        case 0x297408u: goto label_297408;
        case 0x29740cu: goto label_29740c;
        case 0x297410u: goto label_297410;
        case 0x297414u: goto label_297414;
        case 0x297418u: goto label_297418;
        case 0x29741cu: goto label_29741c;
        case 0x297420u: goto label_297420;
        case 0x297424u: goto label_297424;
        case 0x297428u: goto label_297428;
        case 0x29742cu: goto label_29742c;
        case 0x297430u: goto label_297430;
        case 0x297434u: goto label_297434;
        case 0x297438u: goto label_297438;
        case 0x29743cu: goto label_29743c;
        case 0x297440u: goto label_297440;
        case 0x297444u: goto label_297444;
        case 0x297448u: goto label_297448;
        case 0x29744cu: goto label_29744c;
        case 0x297450u: goto label_297450;
        case 0x297454u: goto label_297454;
        case 0x297458u: goto label_297458;
        case 0x29745cu: goto label_29745c;
        case 0x297460u: goto label_297460;
        case 0x297464u: goto label_297464;
        case 0x297468u: goto label_297468;
        case 0x29746cu: goto label_29746c;
        case 0x297470u: goto label_297470;
        case 0x297474u: goto label_297474;
        case 0x297478u: goto label_297478;
        case 0x29747cu: goto label_29747c;
        case 0x297480u: goto label_297480;
        case 0x297484u: goto label_297484;
        case 0x297488u: goto label_297488;
        case 0x29748cu: goto label_29748c;
        case 0x297490u: goto label_297490;
        case 0x297494u: goto label_297494;
        case 0x297498u: goto label_297498;
        case 0x29749cu: goto label_29749c;
        case 0x2974a0u: goto label_2974a0;
        case 0x2974a4u: goto label_2974a4;
        case 0x2974a8u: goto label_2974a8;
        case 0x2974acu: goto label_2974ac;
        case 0x2974b0u: goto label_2974b0;
        case 0x2974b4u: goto label_2974b4;
        case 0x2974b8u: goto label_2974b8;
        case 0x2974bcu: goto label_2974bc;
        case 0x2974c0u: goto label_2974c0;
        case 0x2974c4u: goto label_2974c4;
        case 0x2974c8u: goto label_2974c8;
        case 0x2974ccu: goto label_2974cc;
        case 0x2974d0u: goto label_2974d0;
        case 0x2974d4u: goto label_2974d4;
        case 0x2974d8u: goto label_2974d8;
        case 0x2974dcu: goto label_2974dc;
        case 0x2974e0u: goto label_2974e0;
        case 0x2974e4u: goto label_2974e4;
        case 0x2974e8u: goto label_2974e8;
        case 0x2974ecu: goto label_2974ec;
        case 0x2974f0u: goto label_2974f0;
        case 0x2974f4u: goto label_2974f4;
        case 0x2974f8u: goto label_2974f8;
        case 0x2974fcu: goto label_2974fc;
        case 0x297500u: goto label_297500;
        case 0x297504u: goto label_297504;
        case 0x297508u: goto label_297508;
        case 0x29750cu: goto label_29750c;
        case 0x297510u: goto label_297510;
        case 0x297514u: goto label_297514;
        case 0x297518u: goto label_297518;
        case 0x29751cu: goto label_29751c;
        case 0x297520u: goto label_297520;
        case 0x297524u: goto label_297524;
        case 0x297528u: goto label_297528;
        case 0x29752cu: goto label_29752c;
        case 0x297530u: goto label_297530;
        case 0x297534u: goto label_297534;
        case 0x297538u: goto label_297538;
        case 0x29753cu: goto label_29753c;
        case 0x297540u: goto label_297540;
        case 0x297544u: goto label_297544;
        case 0x297548u: goto label_297548;
        case 0x29754cu: goto label_29754c;
        case 0x297550u: goto label_297550;
        case 0x297554u: goto label_297554;
        case 0x297558u: goto label_297558;
        case 0x29755cu: goto label_29755c;
        case 0x297560u: goto label_297560;
        case 0x297564u: goto label_297564;
        case 0x297568u: goto label_297568;
        case 0x29756cu: goto label_29756c;
        case 0x297570u: goto label_297570;
        case 0x297574u: goto label_297574;
        case 0x297578u: goto label_297578;
        case 0x29757cu: goto label_29757c;
        case 0x297580u: goto label_297580;
        case 0x297584u: goto label_297584;
        case 0x297588u: goto label_297588;
        case 0x29758cu: goto label_29758c;
        case 0x297590u: goto label_297590;
        case 0x297594u: goto label_297594;
        case 0x297598u: goto label_297598;
        case 0x29759cu: goto label_29759c;
        case 0x2975a0u: goto label_2975a0;
        case 0x2975a4u: goto label_2975a4;
        case 0x2975a8u: goto label_2975a8;
        case 0x2975acu: goto label_2975ac;
        case 0x2975b0u: goto label_2975b0;
        case 0x2975b4u: goto label_2975b4;
        case 0x2975b8u: goto label_2975b8;
        case 0x2975bcu: goto label_2975bc;
        case 0x2975c0u: goto label_2975c0;
        case 0x2975c4u: goto label_2975c4;
        case 0x2975c8u: goto label_2975c8;
        case 0x2975ccu: goto label_2975cc;
        case 0x2975d0u: goto label_2975d0;
        case 0x2975d4u: goto label_2975d4;
        case 0x2975d8u: goto label_2975d8;
        case 0x2975dcu: goto label_2975dc;
        case 0x2975e0u: goto label_2975e0;
        case 0x2975e4u: goto label_2975e4;
        case 0x2975e8u: goto label_2975e8;
        case 0x2975ecu: goto label_2975ec;
        case 0x2975f0u: goto label_2975f0;
        case 0x2975f4u: goto label_2975f4;
        case 0x2975f8u: goto label_2975f8;
        case 0x2975fcu: goto label_2975fc;
        case 0x297600u: goto label_297600;
        case 0x297604u: goto label_297604;
        case 0x297608u: goto label_297608;
        case 0x29760cu: goto label_29760c;
        case 0x297610u: goto label_297610;
        case 0x297614u: goto label_297614;
        case 0x297618u: goto label_297618;
        case 0x29761cu: goto label_29761c;
        case 0x297620u: goto label_297620;
        case 0x297624u: goto label_297624;
        case 0x297628u: goto label_297628;
        case 0x29762cu: goto label_29762c;
        case 0x297630u: goto label_297630;
        case 0x297634u: goto label_297634;
        case 0x297638u: goto label_297638;
        case 0x29763cu: goto label_29763c;
        case 0x297640u: goto label_297640;
        case 0x297644u: goto label_297644;
        case 0x297648u: goto label_297648;
        case 0x29764cu: goto label_29764c;
        case 0x297650u: goto label_297650;
        case 0x297654u: goto label_297654;
        case 0x297658u: goto label_297658;
        case 0x29765cu: goto label_29765c;
        case 0x297660u: goto label_297660;
        case 0x297664u: goto label_297664;
        case 0x297668u: goto label_297668;
        case 0x29766cu: goto label_29766c;
        case 0x297670u: goto label_297670;
        case 0x297674u: goto label_297674;
        case 0x297678u: goto label_297678;
        case 0x29767cu: goto label_29767c;
        case 0x297680u: goto label_297680;
        case 0x297684u: goto label_297684;
        case 0x297688u: goto label_297688;
        case 0x29768cu: goto label_29768c;
        case 0x297690u: goto label_297690;
        case 0x297694u: goto label_297694;
        case 0x297698u: goto label_297698;
        case 0x29769cu: goto label_29769c;
        case 0x2976a0u: goto label_2976a0;
        case 0x2976a4u: goto label_2976a4;
        case 0x2976a8u: goto label_2976a8;
        case 0x2976acu: goto label_2976ac;
        case 0x2976b0u: goto label_2976b0;
        case 0x2976b4u: goto label_2976b4;
        case 0x2976b8u: goto label_2976b8;
        case 0x2976bcu: goto label_2976bc;
        case 0x2976c0u: goto label_2976c0;
        case 0x2976c4u: goto label_2976c4;
        case 0x2976c8u: goto label_2976c8;
        case 0x2976ccu: goto label_2976cc;
        case 0x2976d0u: goto label_2976d0;
        case 0x2976d4u: goto label_2976d4;
        case 0x2976d8u: goto label_2976d8;
        case 0x2976dcu: goto label_2976dc;
        case 0x2976e0u: goto label_2976e0;
        case 0x2976e4u: goto label_2976e4;
        case 0x2976e8u: goto label_2976e8;
        case 0x2976ecu: goto label_2976ec;
        case 0x2976f0u: goto label_2976f0;
        case 0x2976f4u: goto label_2976f4;
        case 0x2976f8u: goto label_2976f8;
        case 0x2976fcu: goto label_2976fc;
        case 0x297700u: goto label_297700;
        case 0x297704u: goto label_297704;
        case 0x297708u: goto label_297708;
        case 0x29770cu: goto label_29770c;
        case 0x297710u: goto label_297710;
        case 0x297714u: goto label_297714;
        case 0x297718u: goto label_297718;
        case 0x29771cu: goto label_29771c;
        case 0x297720u: goto label_297720;
        case 0x297724u: goto label_297724;
        case 0x297728u: goto label_297728;
        case 0x29772cu: goto label_29772c;
        case 0x297730u: goto label_297730;
        case 0x297734u: goto label_297734;
        case 0x297738u: goto label_297738;
        case 0x29773cu: goto label_29773c;
        case 0x297740u: goto label_297740;
        case 0x297744u: goto label_297744;
        case 0x297748u: goto label_297748;
        case 0x29774cu: goto label_29774c;
        case 0x297750u: goto label_297750;
        case 0x297754u: goto label_297754;
        case 0x297758u: goto label_297758;
        case 0x29775cu: goto label_29775c;
        case 0x297760u: goto label_297760;
        case 0x297764u: goto label_297764;
        case 0x297768u: goto label_297768;
        case 0x29776cu: goto label_29776c;
        case 0x297770u: goto label_297770;
        case 0x297774u: goto label_297774;
        case 0x297778u: goto label_297778;
        case 0x29777cu: goto label_29777c;
        case 0x297780u: goto label_297780;
        case 0x297784u: goto label_297784;
        case 0x297788u: goto label_297788;
        case 0x29778cu: goto label_29778c;
        case 0x297790u: goto label_297790;
        case 0x297794u: goto label_297794;
        case 0x297798u: goto label_297798;
        case 0x29779cu: goto label_29779c;
        case 0x2977a0u: goto label_2977a0;
        case 0x2977a4u: goto label_2977a4;
        case 0x2977a8u: goto label_2977a8;
        case 0x2977acu: goto label_2977ac;
        case 0x2977b0u: goto label_2977b0;
        case 0x2977b4u: goto label_2977b4;
        case 0x2977b8u: goto label_2977b8;
        case 0x2977bcu: goto label_2977bc;
        case 0x2977c0u: goto label_2977c0;
        case 0x2977c4u: goto label_2977c4;
        case 0x2977c8u: goto label_2977c8;
        case 0x2977ccu: goto label_2977cc;
        case 0x2977d0u: goto label_2977d0;
        case 0x2977d4u: goto label_2977d4;
        case 0x2977d8u: goto label_2977d8;
        case 0x2977dcu: goto label_2977dc;
        case 0x2977e0u: goto label_2977e0;
        case 0x2977e4u: goto label_2977e4;
        case 0x2977e8u: goto label_2977e8;
        case 0x2977ecu: goto label_2977ec;
        case 0x2977f0u: goto label_2977f0;
        case 0x2977f4u: goto label_2977f4;
        case 0x2977f8u: goto label_2977f8;
        case 0x2977fcu: goto label_2977fc;
        case 0x297800u: goto label_297800;
        case 0x297804u: goto label_297804;
        case 0x297808u: goto label_297808;
        case 0x29780cu: goto label_29780c;
        case 0x297810u: goto label_297810;
        case 0x297814u: goto label_297814;
        case 0x297818u: goto label_297818;
        case 0x29781cu: goto label_29781c;
        case 0x297820u: goto label_297820;
        case 0x297824u: goto label_297824;
        case 0x297828u: goto label_297828;
        case 0x29782cu: goto label_29782c;
        case 0x297830u: goto label_297830;
        case 0x297834u: goto label_297834;
        case 0x297838u: goto label_297838;
        case 0x29783cu: goto label_29783c;
        case 0x297840u: goto label_297840;
        case 0x297844u: goto label_297844;
        case 0x297848u: goto label_297848;
        case 0x29784cu: goto label_29784c;
        case 0x297850u: goto label_297850;
        case 0x297854u: goto label_297854;
        case 0x297858u: goto label_297858;
        case 0x29785cu: goto label_29785c;
        case 0x297860u: goto label_297860;
        case 0x297864u: goto label_297864;
        case 0x297868u: goto label_297868;
        case 0x29786cu: goto label_29786c;
        case 0x297870u: goto label_297870;
        case 0x297874u: goto label_297874;
        case 0x297878u: goto label_297878;
        case 0x29787cu: goto label_29787c;
        case 0x297880u: goto label_297880;
        case 0x297884u: goto label_297884;
        case 0x297888u: goto label_297888;
        case 0x29788cu: goto label_29788c;
        case 0x297890u: goto label_297890;
        case 0x297894u: goto label_297894;
        case 0x297898u: goto label_297898;
        case 0x29789cu: goto label_29789c;
        case 0x2978a0u: goto label_2978a0;
        case 0x2978a4u: goto label_2978a4;
        case 0x2978a8u: goto label_2978a8;
        case 0x2978acu: goto label_2978ac;
        case 0x2978b0u: goto label_2978b0;
        case 0x2978b4u: goto label_2978b4;
        case 0x2978b8u: goto label_2978b8;
        case 0x2978bcu: goto label_2978bc;
        case 0x2978c0u: goto label_2978c0;
        case 0x2978c4u: goto label_2978c4;
        case 0x2978c8u: goto label_2978c8;
        case 0x2978ccu: goto label_2978cc;
        case 0x2978d0u: goto label_2978d0;
        case 0x2978d4u: goto label_2978d4;
        case 0x2978d8u: goto label_2978d8;
        case 0x2978dcu: goto label_2978dc;
        case 0x2978e0u: goto label_2978e0;
        case 0x2978e4u: goto label_2978e4;
        case 0x2978e8u: goto label_2978e8;
        case 0x2978ecu: goto label_2978ec;
        case 0x2978f0u: goto label_2978f0;
        case 0x2978f4u: goto label_2978f4;
        case 0x2978f8u: goto label_2978f8;
        case 0x2978fcu: goto label_2978fc;
        case 0x297900u: goto label_297900;
        case 0x297904u: goto label_297904;
        case 0x297908u: goto label_297908;
        case 0x29790cu: goto label_29790c;
        case 0x297910u: goto label_297910;
        case 0x297914u: goto label_297914;
        case 0x297918u: goto label_297918;
        case 0x29791cu: goto label_29791c;
        case 0x297920u: goto label_297920;
        case 0x297924u: goto label_297924;
        case 0x297928u: goto label_297928;
        case 0x29792cu: goto label_29792c;
        case 0x297930u: goto label_297930;
        case 0x297934u: goto label_297934;
        case 0x297938u: goto label_297938;
        case 0x29793cu: goto label_29793c;
        case 0x297940u: goto label_297940;
        case 0x297944u: goto label_297944;
        case 0x297948u: goto label_297948;
        case 0x29794cu: goto label_29794c;
        case 0x297950u: goto label_297950;
        case 0x297954u: goto label_297954;
        case 0x297958u: goto label_297958;
        case 0x29795cu: goto label_29795c;
        case 0x297960u: goto label_297960;
        case 0x297964u: goto label_297964;
        case 0x297968u: goto label_297968;
        case 0x29796cu: goto label_29796c;
        case 0x297970u: goto label_297970;
        case 0x297974u: goto label_297974;
        case 0x297978u: goto label_297978;
        case 0x29797cu: goto label_29797c;
        case 0x297980u: goto label_297980;
        case 0x297984u: goto label_297984;
        case 0x297988u: goto label_297988;
        case 0x29798cu: goto label_29798c;
        case 0x297990u: goto label_297990;
        case 0x297994u: goto label_297994;
        case 0x297998u: goto label_297998;
        case 0x29799cu: goto label_29799c;
        case 0x2979a0u: goto label_2979a0;
        case 0x2979a4u: goto label_2979a4;
        case 0x2979a8u: goto label_2979a8;
        case 0x2979acu: goto label_2979ac;
        case 0x2979b0u: goto label_2979b0;
        case 0x2979b4u: goto label_2979b4;
        case 0x2979b8u: goto label_2979b8;
        case 0x2979bcu: goto label_2979bc;
        case 0x2979c0u: goto label_2979c0;
        case 0x2979c4u: goto label_2979c4;
        case 0x2979c8u: goto label_2979c8;
        case 0x2979ccu: goto label_2979cc;
        case 0x2979d0u: goto label_2979d0;
        case 0x2979d4u: goto label_2979d4;
        case 0x2979d8u: goto label_2979d8;
        case 0x2979dcu: goto label_2979dc;
        case 0x2979e0u: goto label_2979e0;
        case 0x2979e4u: goto label_2979e4;
        case 0x2979e8u: goto label_2979e8;
        case 0x2979ecu: goto label_2979ec;
        case 0x2979f0u: goto label_2979f0;
        case 0x2979f4u: goto label_2979f4;
        case 0x2979f8u: goto label_2979f8;
        case 0x2979fcu: goto label_2979fc;
        case 0x297a00u: goto label_297a00;
        case 0x297a04u: goto label_297a04;
        case 0x297a08u: goto label_297a08;
        case 0x297a0cu: goto label_297a0c;
        case 0x297a10u: goto label_297a10;
        case 0x297a14u: goto label_297a14;
        case 0x297a18u: goto label_297a18;
        case 0x297a1cu: goto label_297a1c;
        case 0x297a20u: goto label_297a20;
        case 0x297a24u: goto label_297a24;
        case 0x297a28u: goto label_297a28;
        case 0x297a2cu: goto label_297a2c;
        case 0x297a30u: goto label_297a30;
        case 0x297a34u: goto label_297a34;
        case 0x297a38u: goto label_297a38;
        case 0x297a3cu: goto label_297a3c;
        case 0x297a40u: goto label_297a40;
        case 0x297a44u: goto label_297a44;
        case 0x297a48u: goto label_297a48;
        case 0x297a4cu: goto label_297a4c;
        case 0x297a50u: goto label_297a50;
        case 0x297a54u: goto label_297a54;
        case 0x297a58u: goto label_297a58;
        case 0x297a5cu: goto label_297a5c;
        case 0x297a60u: goto label_297a60;
        case 0x297a64u: goto label_297a64;
        case 0x297a68u: goto label_297a68;
        case 0x297a6cu: goto label_297a6c;
        case 0x297a70u: goto label_297a70;
        case 0x297a74u: goto label_297a74;
        case 0x297a78u: goto label_297a78;
        case 0x297a7cu: goto label_297a7c;
        case 0x297a80u: goto label_297a80;
        case 0x297a84u: goto label_297a84;
        case 0x297a88u: goto label_297a88;
        case 0x297a8cu: goto label_297a8c;
        case 0x297a90u: goto label_297a90;
        case 0x297a94u: goto label_297a94;
        case 0x297a98u: goto label_297a98;
        case 0x297a9cu: goto label_297a9c;
        case 0x297aa0u: goto label_297aa0;
        case 0x297aa4u: goto label_297aa4;
        case 0x297aa8u: goto label_297aa8;
        case 0x297aacu: goto label_297aac;
        case 0x297ab0u: goto label_297ab0;
        case 0x297ab4u: goto label_297ab4;
        case 0x297ab8u: goto label_297ab8;
        case 0x297abcu: goto label_297abc;
        case 0x297ac0u: goto label_297ac0;
        case 0x297ac4u: goto label_297ac4;
        case 0x297ac8u: goto label_297ac8;
        case 0x297accu: goto label_297acc;
        case 0x297ad0u: goto label_297ad0;
        case 0x297ad4u: goto label_297ad4;
        case 0x297ad8u: goto label_297ad8;
        case 0x297adcu: goto label_297adc;
        case 0x297ae0u: goto label_297ae0;
        case 0x297ae4u: goto label_297ae4;
        case 0x297ae8u: goto label_297ae8;
        case 0x297aecu: goto label_297aec;
        case 0x297af0u: goto label_297af0;
        case 0x297af4u: goto label_297af4;
        case 0x297af8u: goto label_297af8;
        case 0x297afcu: goto label_297afc;
        case 0x297b00u: goto label_297b00;
        case 0x297b04u: goto label_297b04;
        case 0x297b08u: goto label_297b08;
        case 0x297b0cu: goto label_297b0c;
        case 0x297b10u: goto label_297b10;
        case 0x297b14u: goto label_297b14;
        case 0x297b18u: goto label_297b18;
        case 0x297b1cu: goto label_297b1c;
        case 0x297b20u: goto label_297b20;
        case 0x297b24u: goto label_297b24;
        case 0x297b28u: goto label_297b28;
        case 0x297b2cu: goto label_297b2c;
        case 0x297b30u: goto label_297b30;
        case 0x297b34u: goto label_297b34;
        case 0x297b38u: goto label_297b38;
        case 0x297b3cu: goto label_297b3c;
        case 0x297b40u: goto label_297b40;
        case 0x297b44u: goto label_297b44;
        case 0x297b48u: goto label_297b48;
        case 0x297b4cu: goto label_297b4c;
        case 0x297b50u: goto label_297b50;
        case 0x297b54u: goto label_297b54;
        case 0x297b58u: goto label_297b58;
        case 0x297b5cu: goto label_297b5c;
        case 0x297b60u: goto label_297b60;
        case 0x297b64u: goto label_297b64;
        case 0x297b68u: goto label_297b68;
        case 0x297b6cu: goto label_297b6c;
        case 0x297b70u: goto label_297b70;
        case 0x297b74u: goto label_297b74;
        case 0x297b78u: goto label_297b78;
        case 0x297b7cu: goto label_297b7c;
        case 0x297b80u: goto label_297b80;
        default: break;
    }

    ctx->pc = 0x297000u;

label_297000:
    // 0x297000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x297000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_297004:
    // 0x297004: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x297004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
label_297008:
    // 0x297008: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x297008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29700c:
    // 0x29700c: 0x246324d0  addiu       $v1, $v1, 0x24D0
    ctx->pc = 0x29700cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9424));
label_297010:
    // 0x297010: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x297010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_297014:
    // 0x297014: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x297014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_297018:
    // 0x297018: 0x9085065c  lbu         $a1, 0x65C($a0)
    ctx->pc = 0x297018u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
label_29701c:
    // 0x29701c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29701cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_297020:
    // 0x297020: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x297020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_297024:
    // 0x297024: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x297024u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_297028:
    // 0x297028: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_29702c:
    if (ctx->pc == 0x29702Cu) {
        ctx->pc = 0x29702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297028u;
        // 0x29702c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297030u;
        goto label_297030;
    }
    ctx->pc = 0x297028u;
    {
        const bool branch_taken_0x297028 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297028u;
        // 0x29702c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297028) {
            ctx->pc = 0x2970F0u;
            goto label_2970f0;
        }
    }
    ctx->pc = 0x297030u;
label_297030:
    // 0x297030: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x297030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_297034:
    // 0x297034: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x297034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_297038:
    // 0x297038: 0x24a56ec0  addiu       $a1, $a1, 0x6EC0
    ctx->pc = 0x297038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28352));
label_29703c:
    // 0x29703c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29703cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_297040:
    // 0x297040: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x297040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_297044:
    // 0x297044: 0x600008  jr          $v1
label_297048:
    if (ctx->pc == 0x297048u) {
        ctx->pc = 0x29704Cu;
        goto label_29704c;
    }
    ctx->pc = 0x297044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297050u: goto label_297050;
            case 0x297080u: goto label_297080;
            case 0x2970A0u: goto label_2970a0;
            case 0x2970D0u: goto label_2970d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297044u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29704Cu;
label_29704c:
    // 0x29704c: 0x0  nop
    ctx->pc = 0x29704cu;
    // NOP
label_297050:
    // 0x297050: 0xde230500  ld          $v1, 0x500($s1)
    ctx->pc = 0x297050u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
label_297054:
    // 0x297054: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x297054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_297058:
    // 0x297058: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_29705c:
    if (ctx->pc == 0x29705Cu) {
        ctx->pc = 0x297060u;
        goto label_297060;
    }
    ctx->pc = 0x297058u;
    {
        const bool branch_taken_0x297058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297058) {
            ctx->pc = 0x2970F0u;
            goto label_2970f0;
        }
    }
    ctx->pc = 0x297060u;
label_297060:
    // 0x297060: 0x8e2306c8  lw          $v1, 0x6C8($s1)
    ctx->pc = 0x297060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
label_297064:
    // 0x297064: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x297064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_297068:
    // 0x297068: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
label_29706c:
    if (ctx->pc == 0x29706Cu) {
        ctx->pc = 0x29706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297068u;
        // 0x29706c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297070u;
        goto label_297070;
    }
    ctx->pc = 0x297068u;
    {
        const bool branch_taken_0x297068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297068u;
        // 0x29706c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297068) {
            ctx->pc = 0x2970F0u;
            goto label_2970f0;
        }
    }
    ctx->pc = 0x297070u;
label_297070:
    // 0x297070: 0xc0a259c  jal         func_289670
label_297074:
    if (ctx->pc == 0x297074u) {
        ctx->pc = 0x297078u;
        goto label_297078;
    }
    ctx->pc = 0x297070u;
    SET_GPR_U32(ctx, 31, 0x297078u);
    ctx->pc = 0x289670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289670u, 0x297070u, 0x297078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297078u;
label_297078:
    // 0x297078: 0x1000001d  b           . + 4 + (0x1D << 2)
label_29707c:
    if (ctx->pc == 0x29707Cu) {
        ctx->pc = 0x297080u;
        goto label_297080;
    }
    ctx->pc = 0x297078u;
    {
        const bool branch_taken_0x297078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297078) {
            ctx->pc = 0x2970F0u;
            goto label_2970f0;
        }
    }
    ctx->pc = 0x297080u;
label_297080:
    // 0x297080: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x297080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_297084:
    // 0x297084: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x297084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_297088:
    // 0x297088: 0x320f809  jalr        $t9
label_29708c:
    if (ctx->pc == 0x29708Cu) {
        ctx->pc = 0x297090u;
        goto label_297090;
    }
    ctx->pc = 0x297088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x297090u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297088u, 0x297090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297090u;
label_297090:
    // 0x297090: 0x8e2306b8  lw          $v1, 0x6B8($s1)
    ctx->pc = 0x297090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1720)));
label_297094:
    // 0x297094: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x297094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_297098:
    // 0x297098: 0x10000015  b           . + 4 + (0x15 << 2)
label_29709c:
    if (ctx->pc == 0x29709Cu) {
        ctx->pc = 0x29709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297098u;
        // 0x29709c: 0xae2306b8  sw          $v1, 0x6B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2970A0u;
        goto label_2970a0;
    }
    ctx->pc = 0x297098u;
    {
        const bool branch_taken_0x297098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297098u;
        // 0x29709c: 0xae2306b8  sw          $v1, 0x6B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297098) {
            ctx->pc = 0x2970F0u;
            goto label_2970f0;
        }
    }
    ctx->pc = 0x2970A0u;
label_2970a0:
    // 0x2970a0: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x2970a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_2970a4:
    // 0x2970a4: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x2970a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_2970a8:
    // 0x2970a8: 0x320f809  jalr        $t9
label_2970ac:
    if (ctx->pc == 0x2970ACu) {
        ctx->pc = 0x2970B0u;
        goto label_2970b0;
    }
    ctx->pc = 0x2970A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2970B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2970A8u, 0x2970B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2970B0u;
label_2970b0:
    // 0x2970b0: 0x8e2306b8  lw          $v1, 0x6B8($s1)
    ctx->pc = 0x2970b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1720)));
label_2970b4:
    // 0x2970b4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2970b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_2970b8:
    // 0x2970b8: 0xae2306b8  sw          $v1, 0x6B8($s1)
    ctx->pc = 0x2970b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1720), GPR_U32(ctx, 3));
label_2970bc:
    // 0x2970bc: 0x8e2306b8  lw          $v1, 0x6B8($s1)
    ctx->pc = 0x2970bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1720)));
label_2970c0:
    // 0x2970c0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2970c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_2970c4:
    // 0x2970c4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2970c8:
    if (ctx->pc == 0x2970C8u) {
        ctx->pc = 0x2970C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2970C4u;
        // 0x2970c8: 0xae2306b8  sw          $v1, 0x6B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2970CCu;
        goto label_2970cc;
    }
    ctx->pc = 0x2970C4u;
    {
        const bool branch_taken_0x2970c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2970C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2970C4u;
        // 0x2970c8: 0xae2306b8  sw          $v1, 0x6B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2970c4) {
            ctx->pc = 0x2970F0u;
            goto label_2970f0;
        }
    }
    ctx->pc = 0x2970CCu;
label_2970cc:
    // 0x2970cc: 0x0  nop
    ctx->pc = 0x2970ccu;
    // NOP
label_2970d0:
    // 0x2970d0: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x2970d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_2970d4:
    // 0x2970d4: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x2970d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_2970d8:
    // 0x2970d8: 0x320f809  jalr        $t9
label_2970dc:
    if (ctx->pc == 0x2970DCu) {
        ctx->pc = 0x2970E0u;
        goto label_2970e0;
    }
    ctx->pc = 0x2970D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2970E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2970D8u, 0x2970E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2970E0u;
label_2970e0:
    // 0x2970e0: 0x8e2306b8  lw          $v1, 0x6B8($s1)
    ctx->pc = 0x2970e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1720)));
label_2970e4:
    // 0x2970e4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2970e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2970e8:
    // 0x2970e8: 0xae2306b8  sw          $v1, 0x6B8($s1)
    ctx->pc = 0x2970e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1720), GPR_U32(ctx, 3));
label_2970ec:
    // 0x2970ec: 0x0  nop
    ctx->pc = 0x2970ecu;
    // NOP
label_2970f0:
    // 0x2970f0: 0x9224065c  lbu         $a0, 0x65C($s1)
    ctx->pc = 0x2970f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
label_2970f4:
    // 0x2970f4: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x2970f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_2970f8:
    // 0x2970f8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_2970fc:
    if (ctx->pc == 0x2970FCu) {
        ctx->pc = 0x297100u;
        goto label_297100;
    }
    ctx->pc = 0x2970F8u;
    {
        const bool branch_taken_0x2970f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2970f8) {
            ctx->pc = 0x297110u;
            goto label_297110;
        }
    }
    ctx->pc = 0x297100u;
label_297100:
    // 0x297100: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x297100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_297104:
    // 0x297104: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_297108:
    if (ctx->pc == 0x297108u) {
        ctx->pc = 0x297108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297104u;
        // 0x297108: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29710Cu;
        goto label_29710c;
    }
    ctx->pc = 0x297104u;
    {
        const bool branch_taken_0x297104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x297108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297104u;
        // 0x297108: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297104) {
            ctx->pc = 0x297110u;
            goto label_297110;
        }
    }
    ctx->pc = 0x29710Cu;
label_29710c:
    // 0x29710c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x29710cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_297110:
    // 0x297110: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x297110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
label_297114:
    // 0x297114: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x297114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_297118:
    // 0x297118: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_29711c:
    if (ctx->pc == 0x29711Cu) {
        ctx->pc = 0x297120u;
        goto label_297120;
    }
    ctx->pc = 0x297118u;
    {
        const bool branch_taken_0x297118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x297118) {
            ctx->pc = 0x297130u;
            goto label_297130;
        }
    }
    ctx->pc = 0x297120u;
label_297120:
    // 0x297120: 0x9223083b  lbu         $v1, 0x83B($s1)
    ctx->pc = 0x297120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2107)));
label_297124:
    // 0x297124: 0x306300fc  andi        $v1, $v1, 0xFC
    ctx->pc = 0x297124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
label_297128:
    // 0x297128: 0xa223083b  sb          $v1, 0x83B($s1)
    ctx->pc = 0x297128u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2107), (uint8_t)GPR_U32(ctx, 3));
label_29712c:
    // 0x29712c: 0x0  nop
    ctx->pc = 0x29712cu;
    // NOP
label_297130:
    // 0x297130: 0x962329de  lhu         $v1, 0x29DE($s1)
    ctx->pc = 0x297130u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10718)));
label_297134:
    // 0x297134: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x297134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_297138:
    // 0x297138: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
label_29713c:
    if (ctx->pc == 0x29713Cu) {
        ctx->pc = 0x297140u;
        goto label_297140;
    }
    ctx->pc = 0x297138u;
    {
        const bool branch_taken_0x297138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297138) {
            ctx->pc = 0x2972B8u;
            goto label_2972b8;
        }
    }
    ctx->pc = 0x297140u;
label_297140:
    // 0x297140: 0x8e252a2c  lw          $a1, 0x2A2C($s1)
    ctx->pc = 0x297140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10796)));
label_297144:
    // 0x297144: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x297144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_297148:
    // 0x297148: 0xc07cce0  jal         func_1F3380
label_29714c:
    if (ctx->pc == 0x29714Cu) {
        ctx->pc = 0x29714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297148u;
        // 0x29714c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297150u;
        goto label_297150;
    }
    ctx->pc = 0x297148u;
    SET_GPR_U32(ctx, 31, 0x297150u);
    ctx->pc = 0x29714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297148u;
    // 0x29714c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x297148u, 0x297150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297150u;
label_297150:
    // 0x297150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x297150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_297154:
    // 0x297154: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
label_297158:
    if (ctx->pc == 0x297158u) {
        ctx->pc = 0x297158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297154u;
        // 0x297158: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29715Cu;
        goto label_29715c;
    }
    ctx->pc = 0x297154u;
    {
        const bool branch_taken_0x297154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x297158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297154u;
        // 0x297158: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297154) {
            ctx->pc = 0x2972A8u;
            goto label_2972a8;
        }
    }
    ctx->pc = 0x29715Cu;
label_29715c:
    // 0x29715c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x29715cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_297160:
    // 0x297160: 0xc0414d0  jal         func_105340
label_297164:
    if (ctx->pc == 0x297164u) {
        ctx->pc = 0x297164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297160u;
        // 0x297164: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297168u;
        goto label_297168;
    }
    ctx->pc = 0x297160u;
    SET_GPR_U32(ctx, 31, 0x297168u);
    ctx->pc = 0x297164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297160u;
    // 0x297164: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x297160u, 0x297168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297168u;
label_297168:
    // 0x297168: 0xde220500  ld          $v0, 0x500($s1)
    ctx->pc = 0x297168u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
label_29716c:
    // 0x29716c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x29716cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_297170:
    // 0x297170: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_297174:
    if (ctx->pc == 0x297174u) {
        ctx->pc = 0x297178u;
        goto label_297178;
    }
    ctx->pc = 0x297170u;
    {
        const bool branch_taken_0x297170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297170) {
            ctx->pc = 0x297248u;
            goto label_297248;
        }
    }
    ctx->pc = 0x297178u;
label_297178:
    // 0x297178: 0x9223065c  lbu         $v1, 0x65C($s1)
    ctx->pc = 0x297178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
label_29717c:
    // 0x29717c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_297180:
    // 0x297180: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_297184:
    if (ctx->pc == 0x297184u) {
        ctx->pc = 0x297188u;
        goto label_297188;
    }
    ctx->pc = 0x297180u;
    {
        const bool branch_taken_0x297180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x297180) {
            ctx->pc = 0x297248u;
            goto label_297248;
        }
    }
    ctx->pc = 0x297188u;
label_297188:
    // 0x297188: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x297188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_29718c:
    // 0x29718c: 0xc047b88  jal         func_11EE20
label_297190:
    if (ctx->pc == 0x297190u) {
        ctx->pc = 0x297190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29718Cu;
        // 0x297190: 0xc7ac0050  lwc1        $f12, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x297194u;
        goto label_297194;
    }
    ctx->pc = 0x29718Cu;
    SET_GPR_U32(ctx, 31, 0x297194u);
    ctx->pc = 0x297190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29718Cu;
    // 0x297190: 0xc7ac0050  lwc1        $f12, 0x50($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x29718Cu, 0x297194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297194u;
label_297194:
    // 0x297194: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x297194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
label_297198:
    // 0x297198: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x297198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_29719c:
    // 0x29719c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x29719cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2971a0:
    // 0x2971a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2971a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2971a4:
    // 0x2971a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2971a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2971a8:
    // 0x2971a8: 0x0  nop
    ctx->pc = 0x2971a8u;
    // NOP
label_2971ac:
    // 0x2971ac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2971acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2971b0:
    // 0x2971b0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2971b0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2971b4:
    // 0x2971b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2971b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2971b8:
    // 0x2971b8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2971b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2971bc:
    // 0x2971bc: 0x0  nop
    ctx->pc = 0x2971bcu;
    // NOP
label_2971c0:
    // 0x2971c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2971c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2971c4:
    // 0x2971c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2971c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2971c8:
    // 0x2971c8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2971c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_2971cc:
    // 0x2971cc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2971ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2971d0:
    // 0x2971d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2971d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2971d4:
    // 0x2971d4: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2971d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
label_2971d8:
    // 0x2971d8: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2971d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_2971dc:
    // 0x2971dc: 0xc0967cc  jal         func_259F30
label_2971e0:
    if (ctx->pc == 0x2971E0u) {
        ctx->pc = 0x2971E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971DCu;
        // 0x2971e0: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2971E4u;
        goto label_2971e4;
    }
    ctx->pc = 0x2971DCu;
    SET_GPR_U32(ctx, 31, 0x2971E4u);
    ctx->pc = 0x2971E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2971DCu;
    // 0x2971e0: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x2971DCu, 0x2971E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2971E4u;
label_2971e4:
    // 0x2971e4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2971e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_2971e8:
    // 0x2971e8: 0x862204ec  lh          $v0, 0x4EC($s1)
    ctx->pc = 0x2971e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1260)));
label_2971ec:
    // 0x2971ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2971ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2971f0:
    // 0x2971f0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2971f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2971f4:
    // 0x2971f4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2971f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_2971f8:
    // 0x2971f8: 0xc0967cc  jal         func_259F30
label_2971fc:
    if (ctx->pc == 0x2971FCu) {
        ctx->pc = 0x2971FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971F8u;
        // 0x2971fc: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297200u;
        goto label_297200;
    }
    ctx->pc = 0x2971F8u;
    SET_GPR_U32(ctx, 31, 0x297200u);
    ctx->pc = 0x2971FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2971F8u;
    // 0x2971fc: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x2971F8u, 0x297200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297200u;
label_297200:
    // 0x297200: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x297200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_297204:
    // 0x297204: 0xc0969a4  jal         func_25A690
label_297208:
    if (ctx->pc == 0x297208u) {
        ctx->pc = 0x297208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297204u;
        // 0x297208: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29720Cu;
        goto label_29720c;
    }
    ctx->pc = 0x297204u;
    SET_GPR_U32(ctx, 31, 0x29720Cu);
    ctx->pc = 0x297208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297204u;
    // 0x297208: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x297204u, 0x29720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29720Cu;
label_29720c:
    // 0x29720c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x29720cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_297210:
    // 0x297210: 0xc096970  jal         func_25A5C0
label_297214:
    if (ctx->pc == 0x297214u) {
        ctx->pc = 0x297214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297210u;
        // 0x297214: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297218u;
        goto label_297218;
    }
    ctx->pc = 0x297210u;
    SET_GPR_U32(ctx, 31, 0x297218u);
    ctx->pc = 0x297214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297210u;
    // 0x297214: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x297210u, 0x297218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297218u;
label_297218:
    // 0x297218: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x297218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_29721c:
    // 0x29721c: 0x3c033a80  lui         $v1, 0x3A80
    ctx->pc = 0x29721cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14976 << 16));
label_297220:
    // 0x297220: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x297220u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_297224:
    // 0x297224: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x297224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_297228:
    // 0x297228: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x297228u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29722c:
    // 0x29722c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29722cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_297230:
    // 0x297230: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x297230u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_297234:
    // 0x297234: 0x0  nop
    ctx->pc = 0x297234u;
    // NOP
label_297238:
    // 0x297238: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x297238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_29723c:
    // 0x29723c: 0x10000004  b           . + 4 + (0x4 << 2)
label_297240:
    if (ctx->pc == 0x297240u) {
        ctx->pc = 0x297240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29723Cu;
        // 0x297240: 0x46000882  mul.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x297244u;
        goto label_297244;
    }
    ctx->pc = 0x29723Cu;
    {
        const bool branch_taken_0x29723c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29723Cu;
        // 0x297240: 0x46000882  mul.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29723c) {
            ctx->pc = 0x297250u;
            goto label_297250;
        }
    }
    ctx->pc = 0x297244u;
label_297244:
    // 0x297244: 0x0  nop
    ctx->pc = 0x297244u;
    // NOP
label_297248:
    // 0x297248: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x297248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29724c:
    // 0x29724c: 0x0  nop
    ctx->pc = 0x29724cu;
    // NOP
label_297250:
    // 0x297250: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x297250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_297254:
    // 0x297254: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_297258:
    // 0x297258: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x297258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_29725c:
    // 0x29725c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29725cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_297260:
    // 0x297260: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x297260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_297264:
    // 0x297264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_297268:
    // 0x297268: 0x0  nop
    ctx->pc = 0x297268u;
    // NOP
label_29726c:
    // 0x29726c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29726cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_297270:
    // 0x297270: 0xc09693c  jal         func_25A4F0
label_297274:
    if (ctx->pc == 0x297274u) {
        ctx->pc = 0x297274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297270u;
        // 0x297274: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x297278u;
        goto label_297278;
    }
    ctx->pc = 0x297270u;
    SET_GPR_U32(ctx, 31, 0x297278u);
    ctx->pc = 0x297274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297270u;
    // 0x297274: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x297270u, 0x297278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297278u;
label_297278:
    // 0x297278: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x297278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_29727c:
    // 0x29727c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x29727cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_297280:
    // 0x297280: 0xc0414ca  jal         func_105328
label_297284:
    if (ctx->pc == 0x297284u) {
        ctx->pc = 0x297284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297280u;
        // 0x297284: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297288u;
        goto label_297288;
    }
    ctx->pc = 0x297280u;
    SET_GPR_U32(ctx, 31, 0x297288u);
    ctx->pc = 0x297284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297280u;
    // 0x297284: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x297280u, 0x297288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297288u;
label_297288:
    // 0x297288: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x297288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
label_29728c:
    // 0x29728c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x29728cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_297290:
    // 0x297290: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_297294:
    if (ctx->pc == 0x297294u) {
        ctx->pc = 0x297298u;
        goto label_297298;
    }
    ctx->pc = 0x297290u;
    {
        const bool branch_taken_0x297290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297290) {
            ctx->pc = 0x2972B8u;
            goto label_2972b8;
        }
    }
    ctx->pc = 0x297298u;
label_297298:
    // 0x297298: 0x962329de  lhu         $v1, 0x29DE($s1)
    ctx->pc = 0x297298u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10718)));
label_29729c:
    // 0x29729c: 0x3063fbff  andi        $v1, $v1, 0xFBFF
    ctx->pc = 0x29729cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64511);
label_2972a0:
    // 0x2972a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2972a4:
    if (ctx->pc == 0x2972A4u) {
        ctx->pc = 0x2972A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972A0u;
        // 0x2972a4: 0xa62329de  sh          $v1, 0x29DE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10718), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2972A8u;
        goto label_2972a8;
    }
    ctx->pc = 0x2972A0u;
    {
        const bool branch_taken_0x2972a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2972A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972A0u;
        // 0x2972a4: 0xa62329de  sh          $v1, 0x29DE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10718), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2972a0) {
            ctx->pc = 0x2972B8u;
            goto label_2972b8;
        }
    }
    ctx->pc = 0x2972A8u;
label_2972a8:
    // 0x2972a8: 0x962329de  lhu         $v1, 0x29DE($s1)
    ctx->pc = 0x2972a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10718)));
label_2972ac:
    // 0x2972ac: 0x3063fbff  andi        $v1, $v1, 0xFBFF
    ctx->pc = 0x2972acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64511);
label_2972b0:
    // 0x2972b0: 0xa62329de  sh          $v1, 0x29DE($s1)
    ctx->pc = 0x2972b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10718), (uint16_t)GPR_U32(ctx, 3));
label_2972b4:
    // 0x2972b4: 0x0  nop
    ctx->pc = 0x2972b4u;
    // NOP
label_2972b8:
    // 0x2972b8: 0x962329de  lhu         $v1, 0x29DE($s1)
    ctx->pc = 0x2972b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10718)));
label_2972bc:
    // 0x2972bc: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x2972bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_2972c0:
    // 0x2972c0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_2972c4:
    if (ctx->pc == 0x2972C4u) {
        ctx->pc = 0x2972C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972C0u;
        // 0x2972c4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2972C8u;
        goto label_2972c8;
    }
    ctx->pc = 0x2972C0u;
    {
        const bool branch_taken_0x2972c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2972C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972C0u;
        // 0x2972c4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2972c0) {
            ctx->pc = 0x297350u;
            goto label_297350;
        }
    }
    ctx->pc = 0x2972C8u;
label_2972c8:
    // 0x2972c8: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2972c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2972cc:
    // 0x2972cc: 0xc0414d0  jal         func_105340
label_2972d0:
    if (ctx->pc == 0x2972D0u) {
        ctx->pc = 0x2972D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972CCu;
        // 0x2972d0: 0x26262a90  addiu       $a2, $s1, 0x2A90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2972D4u;
        goto label_2972d4;
    }
    ctx->pc = 0x2972CCu;
    SET_GPR_U32(ctx, 31, 0x2972D4u);
    ctx->pc = 0x2972D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2972CCu;
    // 0x2972d0: 0x26262a90  addiu       $a2, $s1, 0x2A90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2972CCu, 0x2972D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2972D4u;
label_2972d4:
    // 0x2972d4: 0xc0968fc  jal         func_25A3F0
label_2972d8:
    if (ctx->pc == 0x2972D8u) {
        ctx->pc = 0x2972D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972D4u;
        // 0x2972d8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2972DCu;
        goto label_2972dc;
    }
    ctx->pc = 0x2972D4u;
    SET_GPR_U32(ctx, 31, 0x2972DCu);
    ctx->pc = 0x2972D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2972D4u;
    // 0x2972d8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3F0u, 0x2972D4u, 0x2972DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2972DCu;
label_2972dc:
    // 0x2972dc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2972dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_2972e0:
    // 0x2972e0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2972e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2972e4:
    // 0x2972e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2972e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2972e8:
    // 0x2972e8: 0x0  nop
    ctx->pc = 0x2972e8u;
    // NOP
label_2972ec:
    // 0x2972ec: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2972ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2972f0:
    // 0x2972f0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_2972f4:
    if (ctx->pc == 0x2972F4u) {
        ctx->pc = 0x2972F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972F0u;
        // 0x2972f4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2972F8u;
        goto label_2972f8;
    }
    ctx->pc = 0x2972F0u;
    {
        const bool branch_taken_0x2972f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2972F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972F0u;
        // 0x2972f4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2972f0) {
            ctx->pc = 0x297318u;
            goto label_297318;
        }
    }
    ctx->pc = 0x2972F8u;
label_2972f8:
    // 0x2972f8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2972f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_2972fc:
    // 0x2972fc: 0xc09693c  jal         func_25A4F0
label_297300:
    if (ctx->pc == 0x297300u) {
        ctx->pc = 0x297300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972FCu;
        // 0x297300: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297304u;
        goto label_297304;
    }
    ctx->pc = 0x2972FCu;
    SET_GPR_U32(ctx, 31, 0x297304u);
    ctx->pc = 0x297300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2972FCu;
    // 0x297300: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x2972FCu, 0x297304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297304u;
label_297304:
    // 0x297304: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x297304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_297308:
    // 0x297308: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x297308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_29730c:
    // 0x29730c: 0xc096978  jal         func_25A5E0
label_297310:
    if (ctx->pc == 0x297310u) {
        ctx->pc = 0x297310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29730Cu;
        // 0x297310: 0x26262a90  addiu       $a2, $s1, 0x2A90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297314u;
        goto label_297314;
    }
    ctx->pc = 0x29730Cu;
    SET_GPR_U32(ctx, 31, 0x297314u);
    ctx->pc = 0x297310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29730Cu;
    // 0x297310: 0x26262a90  addiu       $a2, $s1, 0x2A90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x29730Cu, 0x297314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297314u;
label_297314:
    // 0x297314: 0x0  nop
    ctx->pc = 0x297314u;
    // NOP
label_297318:
    // 0x297318: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x297318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_29731c:
    // 0x29731c: 0x26252a90  addiu       $a1, $s1, 0x2A90
    ctx->pc = 0x29731cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 10896));
label_297320:
    // 0x297320: 0xc0414d0  jal         func_105340
label_297324:
    if (ctx->pc == 0x297324u) {
        ctx->pc = 0x297324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297320u;
        // 0x297324: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297328u;
        goto label_297328;
    }
    ctx->pc = 0x297320u;
    SET_GPR_U32(ctx, 31, 0x297328u);
    ctx->pc = 0x297324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297320u;
    // 0x297324: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x297320u, 0x297328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297328u;
label_297328:
    // 0x297328: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x297328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_29732c:
    // 0x29732c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x29732cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_297330:
    // 0x297330: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x297330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_297334:
    // 0x297334: 0xc09693c  jal         func_25A4F0
label_297338:
    if (ctx->pc == 0x297338u) {
        ctx->pc = 0x297338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297334u;
        // 0x297338: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29733Cu;
        goto label_29733c;
    }
    ctx->pc = 0x297334u;
    SET_GPR_U32(ctx, 31, 0x29733Cu);
    ctx->pc = 0x297338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297334u;
    // 0x297338: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x297334u, 0x29733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29733Cu;
label_29733c:
    // 0x29733c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x29733cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_297340:
    // 0x297340: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x297340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_297344:
    // 0x297344: 0xc0414ca  jal         func_105328
label_297348:
    if (ctx->pc == 0x297348u) {
        ctx->pc = 0x297348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297344u;
        // 0x297348: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29734Cu;
        goto label_29734c;
    }
    ctx->pc = 0x297344u;
    SET_GPR_U32(ctx, 31, 0x29734Cu);
    ctx->pc = 0x297348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297344u;
    // 0x297348: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x297344u, 0x29734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29734Cu;
label_29734c:
    // 0x29734c: 0x0  nop
    ctx->pc = 0x29734cu;
    // NOP
label_297350:
    // 0x297350: 0x962329de  lhu         $v1, 0x29DE($s1)
    ctx->pc = 0x297350u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10718)));
label_297354:
    // 0x297354: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x297354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_297358:
    // 0x297358: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_29735c:
    if (ctx->pc == 0x29735Cu) {
        ctx->pc = 0x297360u;
        goto label_297360;
    }
    ctx->pc = 0x297358u;
    {
        const bool branch_taken_0x297358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297358) {
            ctx->pc = 0x2973C0u;
            goto label_2973c0;
        }
    }
    ctx->pc = 0x297360u;
label_297360:
    // 0x297360: 0x8e252a28  lw          $a1, 0x2A28($s1)
    ctx->pc = 0x297360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10792)));
label_297364:
    // 0x297364: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x297364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_297368:
    // 0x297368: 0xc07cce0  jal         func_1F3380
label_29736c:
    if (ctx->pc == 0x29736Cu) {
        ctx->pc = 0x29736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297368u;
        // 0x29736c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297370u;
        goto label_297370;
    }
    ctx->pc = 0x297368u;
    SET_GPR_U32(ctx, 31, 0x297370u);
    ctx->pc = 0x29736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297368u;
    // 0x29736c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x297368u, 0x297370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297370u;
label_297370:
    // 0x297370: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x297370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_297374:
    // 0x297374: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_297378:
    if (ctx->pc == 0x297378u) {
        ctx->pc = 0x297378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297374u;
        // 0x297378: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29737Cu;
        goto label_29737c;
    }
    ctx->pc = 0x297374u;
    {
        const bool branch_taken_0x297374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x297378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297374u;
        // 0x297378: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297374) {
            ctx->pc = 0x2973C0u;
            goto label_2973c0;
        }
    }
    ctx->pc = 0x29737Cu;
label_29737c:
    // 0x29737c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x29737cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_297380:
    // 0x297380: 0xc0414d0  jal         func_105340
label_297384:
    if (ctx->pc == 0x297384u) {
        ctx->pc = 0x297384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297380u;
        // 0x297384: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297388u;
        goto label_297388;
    }
    ctx->pc = 0x297380u;
    SET_GPR_U32(ctx, 31, 0x297388u);
    ctx->pc = 0x297384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297380u;
    // 0x297384: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x297380u, 0x297388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297388u;
label_297388:
    // 0x297388: 0xc0968fc  jal         func_25A3F0
label_29738c:
    if (ctx->pc == 0x29738Cu) {
        ctx->pc = 0x29738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297388u;
        // 0x29738c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297390u;
        goto label_297390;
    }
    ctx->pc = 0x297388u;
    SET_GPR_U32(ctx, 31, 0x297390u);
    ctx->pc = 0x29738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297388u;
    // 0x29738c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3F0u, 0x297388u, 0x297390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297390u;
label_297390:
    // 0x297390: 0x3c03442f  lui         $v1, 0x442F
    ctx->pc = 0x297390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17455 << 16));
label_297394:
    // 0x297394: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x297394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_297398:
    // 0x297398: 0x0  nop
    ctx->pc = 0x297398u;
    // NOP
label_29739c:
    // 0x29739c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x29739cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2973a0:
    // 0x2973a0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_2973a4:
    if (ctx->pc == 0x2973A4u) {
        ctx->pc = 0x2973A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2973A0u;
        // 0x2973a4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2973A8u;
        goto label_2973a8;
    }
    ctx->pc = 0x2973A0u;
    {
        const bool branch_taken_0x2973a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2973A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2973A0u;
        // 0x2973a4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2973a0) {
            ctx->pc = 0x2973C0u;
            goto label_2973c0;
        }
    }
    ctx->pc = 0x2973A8u;
label_2973a8:
    // 0x2973a8: 0xc09693c  jal         func_25A4F0
label_2973ac:
    if (ctx->pc == 0x2973ACu) {
        ctx->pc = 0x2973ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2973A8u;
        // 0x2973ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2973B0u;
        goto label_2973b0;
    }
    ctx->pc = 0x2973A8u;
    SET_GPR_U32(ctx, 31, 0x2973B0u);
    ctx->pc = 0x2973ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2973A8u;
    // 0x2973ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x2973A8u, 0x2973B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2973B0u;
label_2973b0:
    // 0x2973b0: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x2973b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2973b4:
    // 0x2973b4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2973b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2973b8:
    // 0x2973b8: 0xc096978  jal         func_25A5E0
label_2973bc:
    if (ctx->pc == 0x2973BCu) {
        ctx->pc = 0x2973BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2973B8u;
        // 0x2973bc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2973C0u;
        goto label_2973c0;
    }
    ctx->pc = 0x2973B8u;
    SET_GPR_U32(ctx, 31, 0x2973C0u);
    ctx->pc = 0x2973BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2973B8u;
    // 0x2973bc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x2973B8u, 0x2973C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2973C0u;
label_2973c0:
    // 0x2973c0: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2973c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2973c4:
    // 0x2973c4: 0x10800054  beqz        $a0, . + 4 + (0x54 << 2)
label_2973c8:
    if (ctx->pc == 0x2973C8u) {
        ctx->pc = 0x2973CCu;
        goto label_2973cc;
    }
    ctx->pc = 0x2973C4u;
    {
        const bool branch_taken_0x2973c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2973c4) {
            ctx->pc = 0x297518u;
            goto label_297518;
        }
    }
    ctx->pc = 0x2973CCu;
label_2973cc:
    // 0x2973cc: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x2973ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_2973d0:
    // 0x2973d0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2973d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_2973d4:
    // 0x2973d4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2973d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2973d8:
    // 0x2973d8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2973d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2973dc:
    // 0x2973dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2973dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2973e0:
    // 0x2973e0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_2973e4:
    if (ctx->pc == 0x2973E4u) {
        ctx->pc = 0x2973E8u;
        goto label_2973e8;
    }
    ctx->pc = 0x2973E0u;
    {
        const bool branch_taken_0x2973e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2973e0) {
            ctx->pc = 0x297468u;
            goto label_297468;
        }
    }
    ctx->pc = 0x2973E8u;
label_2973e8:
    // 0x2973e8: 0x8e2607ec  lw          $a2, 0x7EC($s1)
    ctx->pc = 0x2973e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2028)));
label_2973ec:
    // 0x2973ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2973ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2973f0:
    // 0x2973f0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2973f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_2973f4:
    // 0x2973f4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_2973f8:
    if (ctx->pc == 0x2973F8u) {
        ctx->pc = 0x2973FCu;
        goto label_2973fc;
    }
    ctx->pc = 0x2973F4u;
    {
        const bool branch_taken_0x2973f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2973f4) {
            ctx->pc = 0x297468u;
            goto label_297468;
        }
    }
    ctx->pc = 0x2973FCu;
label_2973fc:
    // 0x2973fc: 0x8c8500b0  lw          $a1, 0xB0($a0)
    ctx->pc = 0x2973fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_297400:
    // 0x297400: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x297400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_297404:
    // 0x297404: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x297404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_297408:
    // 0x297408: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_29740c:
    if (ctx->pc == 0x29740Cu) {
        ctx->pc = 0x297410u;
        goto label_297410;
    }
    ctx->pc = 0x297408u;
    {
        const bool branch_taken_0x297408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297408) {
            ctx->pc = 0x297420u;
            goto label_297420;
        }
    }
    ctx->pc = 0x297410u;
label_297410:
    // 0x297410: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x297410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_297414:
    // 0x297414: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_297418:
    if (ctx->pc == 0x297418u) {
        ctx->pc = 0x29741Cu;
        goto label_29741c;
    }
    ctx->pc = 0x297414u;
    {
        const bool branch_taken_0x297414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x297414) {
            ctx->pc = 0x297468u;
            goto label_297468;
        }
    }
    ctx->pc = 0x29741Cu;
label_29741c:
    // 0x29741c: 0x0  nop
    ctx->pc = 0x29741cu;
    // NOP
label_297420:
    // 0x297420: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x297420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_297424:
    // 0x297424: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_297428:
    if (ctx->pc == 0x297428u) {
        ctx->pc = 0x29742Cu;
        goto label_29742c;
    }
    ctx->pc = 0x297424u;
    {
        const bool branch_taken_0x297424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297424) {
            ctx->pc = 0x297440u;
            goto label_297440;
        }
    }
    ctx->pc = 0x29742Cu;
label_29742c:
    // 0x29742c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29742cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_297430:
    // 0x297430: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x297430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_297434:
    // 0x297434: 0x320f809  jalr        $t9
label_297438:
    if (ctx->pc == 0x297438u) {
        ctx->pc = 0x297438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297434u;
        // 0x297438: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29743Cu;
        goto label_29743c;
    }
    ctx->pc = 0x297434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29743Cu);
        ctx->pc = 0x297438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297434u;
        // 0x297438: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297434u, 0x29743Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29743Cu;
label_29743c:
    // 0x29743c: 0x0  nop
    ctx->pc = 0x29743cu;
    // NOP
label_297440:
    // 0x297440: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x297440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_297444:
    // 0x297444: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x297444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_297448:
    // 0x297448: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x297448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_29744c:
    // 0x29744c: 0x320f809  jalr        $t9
label_297450:
    if (ctx->pc == 0x297450u) {
        ctx->pc = 0x297450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29744Cu;
        // 0x297450: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297454u;
        goto label_297454;
    }
    ctx->pc = 0x29744Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x297454u);
        ctx->pc = 0x297450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29744Cu;
        // 0x297450: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29744Cu, 0x297454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297454u;
label_297454:
    // 0x297454: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x297454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_297458:
    // 0x297458: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x297458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29745c:
    // 0x29745c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29745cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_297460:
    // 0x297460: 0xa22307f6  sb          $v1, 0x7F6($s1)
    ctx->pc = 0x297460u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 3));
label_297464:
    // 0x297464: 0x0  nop
    ctx->pc = 0x297464u;
    // NOP
label_297468:
    // 0x297468: 0x922407f9  lbu         $a0, 0x7F9($s1)
    ctx->pc = 0x297468u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2041)));
label_29746c:
    // 0x29746c: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x29746cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_297470:
    // 0x297470: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_297474:
    if (ctx->pc == 0x297474u) {
        ctx->pc = 0x297478u;
        goto label_297478;
    }
    ctx->pc = 0x297470u;
    {
        const bool branch_taken_0x297470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297470) {
            ctx->pc = 0x297518u;
            goto label_297518;
        }
    }
    ctx->pc = 0x297478u;
label_297478:
    // 0x297478: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x297478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_29747c:
    // 0x29747c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_297480:
    if (ctx->pc == 0x297480u) {
        ctx->pc = 0x297480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29747Cu;
        // 0x297480: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x297484u;
        goto label_297484;
    }
    ctx->pc = 0x29747Cu;
    {
        const bool branch_taken_0x29747c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x297480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29747Cu;
        // 0x297480: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29747c) {
            ctx->pc = 0x297500u;
            goto label_297500;
        }
    }
    ctx->pc = 0x297484u;
label_297484:
    // 0x297484: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_297488:
    if (ctx->pc == 0x297488u) {
        ctx->pc = 0x29748Cu;
        goto label_29748c;
    }
    ctx->pc = 0x297484u;
    {
        const bool branch_taken_0x297484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x297484) {
            ctx->pc = 0x297500u;
            goto label_297500;
        }
    }
    ctx->pc = 0x29748Cu;
label_29748c:
    // 0x29748c: 0xa22007f9  sb          $zero, 0x7F9($s1)
    ctx->pc = 0x29748cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2041), (uint8_t)GPR_U32(ctx, 0));
label_297490:
    // 0x297490: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x297490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_297494:
    // 0x297494: 0xa22007f8  sb          $zero, 0x7F8($s1)
    ctx->pc = 0x297494u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2040), (uint8_t)GPR_U32(ctx, 0));
label_297498:
    // 0x297498: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x297498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_29749c:
    // 0x29749c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x29749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2974a0:
    // 0x2974a0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2974a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_2974a4:
    // 0x2974a4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2974a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_2974a8:
    // 0x2974a8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2974a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2974ac:
    // 0x2974ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2974acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2974b0:
    // 0x2974b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2974b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2974b4:
    // 0x2974b4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2974b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2974b8:
    // 0x2974b8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2974b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2974bc:
    // 0x2974bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2974bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2974c0:
    // 0x2974c0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2974c4:
    if (ctx->pc == 0x2974C4u) {
        ctx->pc = 0x2974C8u;
        goto label_2974c8;
    }
    ctx->pc = 0x2974C0u;
    {
        const bool branch_taken_0x2974c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2974c0) {
            ctx->pc = 0x2974D8u;
            goto label_2974d8;
        }
    }
    ctx->pc = 0x2974C8u;
label_2974c8:
    // 0x2974c8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2974c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2974cc:
    // 0x2974cc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2974ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2974d0:
    // 0x2974d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2974d4:
    if (ctx->pc == 0x2974D4u) {
        ctx->pc = 0x2974D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974D0u;
        // 0x2974d4: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2974D8u;
        goto label_2974d8;
    }
    ctx->pc = 0x2974D0u;
    {
        const bool branch_taken_0x2974d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2974D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974D0u;
        // 0x2974d4: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2974d0) {
            ctx->pc = 0x2974F4u;
            goto label_2974f4;
        }
    }
    ctx->pc = 0x2974D8u;
label_2974d8:
    // 0x2974d8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2974d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2974dc:
    // 0x2974dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2974dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2974e0:
    // 0x2974e0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2974e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2974e4:
    // 0x2974e4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2974e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2974e8:
    // 0x2974e8: 0x0  nop
    ctx->pc = 0x2974e8u;
    // NOP
label_2974ec:
    // 0x2974ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2974ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2974f0:
    // 0x2974f0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2974f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2974f4:
    // 0x2974f4: 0xc0a6898  jal         func_29A260
label_2974f8:
    if (ctx->pc == 0x2974F8u) {
        ctx->pc = 0x2974F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974F4u;
        // 0x2974f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2974FCu;
        goto label_2974fc;
    }
    ctx->pc = 0x2974F4u;
    SET_GPR_U32(ctx, 31, 0x2974FCu);
    ctx->pc = 0x2974F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2974F4u;
    // 0x2974f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A260u, 0x2974F4u, 0x2974FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2974FCu;
label_2974fc:
    // 0x2974fc: 0x0  nop
    ctx->pc = 0x2974fcu;
    // NOP
label_297500:
    // 0x297500: 0x9224065c  lbu         $a0, 0x65C($s1)
    ctx->pc = 0x297500u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
label_297504:
    // 0x297504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x297504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297508:
    // 0x297508: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_29750c:
    if (ctx->pc == 0x29750Cu) {
        ctx->pc = 0x297510u;
        goto label_297510;
    }
    ctx->pc = 0x297508u;
    {
        const bool branch_taken_0x297508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x297508) {
            ctx->pc = 0x297518u;
            goto label_297518;
        }
    }
    ctx->pc = 0x297510u;
label_297510:
    // 0x297510: 0xa22007f9  sb          $zero, 0x7F9($s1)
    ctx->pc = 0x297510u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2041), (uint8_t)GPR_U32(ctx, 0));
label_297514:
    // 0x297514: 0xa22007f8  sb          $zero, 0x7F8($s1)
    ctx->pc = 0x297514u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2040), (uint8_t)GPR_U32(ctx, 0));
label_297518:
    // 0x297518: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x297518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_29751c:
    // 0x29751c: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x29751cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_297520:
    // 0x297520: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x297520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_297524:
    // 0x297524: 0x10600192  beqz        $v1, . + 4 + (0x192 << 2)
label_297528:
    if (ctx->pc == 0x297528u) {
        ctx->pc = 0x29752Cu;
        goto label_29752c;
    }
    ctx->pc = 0x297524u;
    {
        const bool branch_taken_0x297524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297524) {
            ctx->pc = 0x297B70u;
            goto label_297b70;
        }
    }
    ctx->pc = 0x29752Cu;
label_29752c:
    // 0x29752c: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x29752cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
label_297530:
    // 0x297530: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x297530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_297534:
    // 0x297534: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_297538:
    if (ctx->pc == 0x297538u) {
        ctx->pc = 0x297538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297534u;
        // 0x297538: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29753Cu;
        goto label_29753c;
    }
    ctx->pc = 0x297534u;
    {
        const bool branch_taken_0x297534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x297538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297534u;
        // 0x297538: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297534) {
            ctx->pc = 0x297560u;
            goto label_297560;
        }
    }
    ctx->pc = 0x29753Cu;
label_29753c:
    // 0x29753c: 0xc0a69a8  jal         func_29A6A0
label_297540:
    if (ctx->pc == 0x297540u) {
        ctx->pc = 0x297540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29753Cu;
        // 0x297540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297544u;
        goto label_297544;
    }
    ctx->pc = 0x29753Cu;
    SET_GPR_U32(ctx, 31, 0x297544u);
    ctx->pc = 0x297540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29753Cu;
    // 0x297540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6A0u, 0x29753Cu, 0x297544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297544u;
label_297544:
    // 0x297544: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x297544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_297548:
    // 0x297548: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x297548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_29754c:
    // 0x29754c: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x29754cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_297550:
    // 0x297550: 0xc096970  jal         func_25A5C0
label_297554:
    if (ctx->pc == 0x297554u) {
        ctx->pc = 0x297554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297550u;
        // 0x297554: 0x24440032  addiu       $a0, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297558u;
        goto label_297558;
    }
    ctx->pc = 0x297550u;
    SET_GPR_U32(ctx, 31, 0x297558u);
    ctx->pc = 0x297554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297550u;
    // 0x297554: 0x24440032  addiu       $a0, $v0, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x297550u, 0x297558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297558u;
label_297558:
    // 0x297558: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x297558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_29755c:
    // 0x29755c: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x29755cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_297560:
    // 0x297560: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x297560u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_297564:
    // 0x297564: 0x240300f4  addiu       $v1, $zero, 0xF4
    ctx->pc = 0x297564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
label_297568:
    // 0x297568: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
label_29756c:
    if (ctx->pc == 0x29756Cu) {
        ctx->pc = 0x29756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297568u;
        // 0x29756c: 0x240300f3  addiu       $v1, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297570u;
        goto label_297570;
    }
    ctx->pc = 0x297568u;
    {
        const bool branch_taken_0x297568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297568u;
        // 0x29756c: 0x240300f3  addiu       $v1, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297568) {
            ctx->pc = 0x297618u;
            goto label_297618;
        }
    }
    ctx->pc = 0x297570u;
label_297570:
    // 0x297570: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
label_297574:
    if (ctx->pc == 0x297574u) {
        ctx->pc = 0x297578u;
        goto label_297578;
    }
    ctx->pc = 0x297570u;
    {
        const bool branch_taken_0x297570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x297570) {
            ctx->pc = 0x297610u;
            goto label_297610;
        }
    }
    ctx->pc = 0x297578u;
label_297578:
    // 0x297578: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x297578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_29757c:
    // 0x29757c: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_297580:
    if (ctx->pc == 0x297580u) {
        ctx->pc = 0x297580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29757Cu;
        // 0x297580: 0x2403004f  addiu       $v1, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297584u;
        goto label_297584;
    }
    ctx->pc = 0x29757Cu;
    {
        const bool branch_taken_0x29757c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x297580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29757Cu;
        // 0x297580: 0x2403004f  addiu       $v1, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29757c) {
            ctx->pc = 0x297608u;
            goto label_297608;
        }
    }
    ctx->pc = 0x297584u;
label_297584:
    // 0x297584: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
label_297588:
    if (ctx->pc == 0x297588u) {
        ctx->pc = 0x29758Cu;
        goto label_29758c;
    }
    ctx->pc = 0x297584u;
    {
        const bool branch_taken_0x297584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x297584) {
            ctx->pc = 0x297600u;
            goto label_297600;
        }
    }
    ctx->pc = 0x29758Cu;
label_29758c:
    // 0x29758c: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x29758cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_297590:
    // 0x297590: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_297594:
    if (ctx->pc == 0x297594u) {
        ctx->pc = 0x297594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297590u;
        // 0x297594: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297598u;
        goto label_297598;
    }
    ctx->pc = 0x297590u;
    {
        const bool branch_taken_0x297590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x297594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297590u;
        // 0x297594: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297590) {
            ctx->pc = 0x2975F8u;
            goto label_2975f8;
        }
    }
    ctx->pc = 0x297598u;
label_297598:
    // 0x297598: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_29759c:
    if (ctx->pc == 0x29759Cu) {
        ctx->pc = 0x2975A0u;
        goto label_2975a0;
    }
    ctx->pc = 0x297598u;
    {
        const bool branch_taken_0x297598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x297598) {
            ctx->pc = 0x2975F0u;
            goto label_2975f0;
        }
    }
    ctx->pc = 0x2975A0u;
label_2975a0:
    // 0x2975a0: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2975a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2975a4:
    // 0x2975a4: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
label_2975a8:
    if (ctx->pc == 0x2975A8u) {
        ctx->pc = 0x2975A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975A4u;
        // 0x2975a8: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2975ACu;
        goto label_2975ac;
    }
    ctx->pc = 0x2975A4u;
    {
        const bool branch_taken_0x2975a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2975A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975A4u;
        // 0x2975a8: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2975a4) {
            ctx->pc = 0x2975E8u;
            goto label_2975e8;
        }
    }
    ctx->pc = 0x2975ACu;
label_2975ac:
    // 0x2975ac: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_2975b0:
    if (ctx->pc == 0x2975B0u) {
        ctx->pc = 0x2975B4u;
        goto label_2975b4;
    }
    ctx->pc = 0x2975ACu;
    {
        const bool branch_taken_0x2975ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2975ac) {
            ctx->pc = 0x2975E0u;
            goto label_2975e0;
        }
    }
    ctx->pc = 0x2975B4u;
label_2975b4:
    // 0x2975b4: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2975b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2975b8:
    // 0x2975b8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_2975bc:
    if (ctx->pc == 0x2975BCu) {
        ctx->pc = 0x2975BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975B8u;
        // 0x2975bc: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2975C0u;
        goto label_2975c0;
    }
    ctx->pc = 0x2975B8u;
    {
        const bool branch_taken_0x2975b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2975BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975B8u;
        // 0x2975bc: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2975b8) {
            ctx->pc = 0x2975D8u;
            goto label_2975d8;
        }
    }
    ctx->pc = 0x2975C0u;
label_2975c0:
    // 0x2975c0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2975c4:
    if (ctx->pc == 0x2975C4u) {
        ctx->pc = 0x2975C8u;
        goto label_2975c8;
    }
    ctx->pc = 0x2975C0u;
    {
        const bool branch_taken_0x2975c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2975c0) {
            ctx->pc = 0x2975D0u;
            goto label_2975d0;
        }
    }
    ctx->pc = 0x2975C8u;
label_2975c8:
    // 0x2975c8: 0x10000015  b           . + 4 + (0x15 << 2)
label_2975cc:
    if (ctx->pc == 0x2975CCu) {
        ctx->pc = 0x2975D0u;
        goto label_2975d0;
    }
    ctx->pc = 0x2975C8u;
    {
        const bool branch_taken_0x2975c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2975c8) {
            ctx->pc = 0x297620u;
            goto label_297620;
        }
    }
    ctx->pc = 0x2975D0u;
label_2975d0:
    // 0x2975d0: 0x10000013  b           . + 4 + (0x13 << 2)
label_2975d4:
    if (ctx->pc == 0x2975D4u) {
        ctx->pc = 0x2975D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975D0u;
        // 0x2975d4: 0x641000f5  daddiu      $s0, $zero, 0xF5 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)245);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2975D8u;
        goto label_2975d8;
    }
    ctx->pc = 0x2975D0u;
    {
        const bool branch_taken_0x2975d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2975D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975D0u;
        // 0x2975d4: 0x641000f5  daddiu      $s0, $zero, 0xF5 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)245);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2975d0) {
            ctx->pc = 0x297620u;
            goto label_297620;
        }
    }
    ctx->pc = 0x2975D8u;
label_2975d8:
    // 0x2975d8: 0x10000011  b           . + 4 + (0x11 << 2)
label_2975dc:
    if (ctx->pc == 0x2975DCu) {
        ctx->pc = 0x2975DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975D8u;
        // 0x2975dc: 0x641000f6  daddiu      $s0, $zero, 0xF6 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)246);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2975E0u;
        goto label_2975e0;
    }
    ctx->pc = 0x2975D8u;
    {
        const bool branch_taken_0x2975d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2975DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975D8u;
        // 0x2975dc: 0x641000f6  daddiu      $s0, $zero, 0xF6 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)246);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2975d8) {
            ctx->pc = 0x297620u;
            goto label_297620;
        }
    }
    ctx->pc = 0x2975E0u;
label_2975e0:
    // 0x2975e0: 0x1000000f  b           . + 4 + (0xF << 2)
label_2975e4:
    if (ctx->pc == 0x2975E4u) {
        ctx->pc = 0x2975E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975E0u;
        // 0x2975e4: 0x641000f7  daddiu      $s0, $zero, 0xF7 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)247);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2975E8u;
        goto label_2975e8;
    }
    ctx->pc = 0x2975E0u;
    {
        const bool branch_taken_0x2975e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2975E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975E0u;
        // 0x2975e4: 0x641000f7  daddiu      $s0, $zero, 0xF7 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)247);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2975e0) {
            ctx->pc = 0x297620u;
            goto label_297620;
        }
    }
    ctx->pc = 0x2975E8u;
label_2975e8:
    // 0x2975e8: 0x1000000d  b           . + 4 + (0xD << 2)
label_2975ec:
    if (ctx->pc == 0x2975ECu) {
        ctx->pc = 0x2975ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975E8u;
        // 0x2975ec: 0x641000f8  daddiu      $s0, $zero, 0xF8 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)248);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2975F0u;
        goto label_2975f0;
    }
    ctx->pc = 0x2975E8u;
    {
        const bool branch_taken_0x2975e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2975ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975E8u;
        // 0x2975ec: 0x641000f8  daddiu      $s0, $zero, 0xF8 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)248);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2975e8) {
            ctx->pc = 0x297620u;
            goto label_297620;
        }
    }
    ctx->pc = 0x2975F0u;
label_2975f0:
    // 0x2975f0: 0x1000000b  b           . + 4 + (0xB << 2)
label_2975f4:
    if (ctx->pc == 0x2975F4u) {
        ctx->pc = 0x2975F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975F0u;
        // 0x2975f4: 0x641000f9  daddiu      $s0, $zero, 0xF9 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)249);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2975F8u;
        goto label_2975f8;
    }
    ctx->pc = 0x2975F0u;
    {
        const bool branch_taken_0x2975f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2975F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975F0u;
        // 0x2975f4: 0x641000f9  daddiu      $s0, $zero, 0xF9 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)249);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2975f0) {
            ctx->pc = 0x297620u;
            goto label_297620;
        }
    }
    ctx->pc = 0x2975F8u;
label_2975f8:
    // 0x2975f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2975fc:
    if (ctx->pc == 0x2975FCu) {
        ctx->pc = 0x2975FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975F8u;
        // 0x2975fc: 0x641000fa  daddiu      $s0, $zero, 0xFA (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)250);
        ctx->in_delay_slot = false;
        ctx->pc = 0x297600u;
        goto label_297600;
    }
    ctx->pc = 0x2975F8u;
    {
        const bool branch_taken_0x2975f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2975FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975F8u;
        // 0x2975fc: 0x641000fa  daddiu      $s0, $zero, 0xFA (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)250);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2975f8) {
            ctx->pc = 0x297620u;
            goto label_297620;
        }
    }
    ctx->pc = 0x297600u;
label_297600:
    // 0x297600: 0x10000007  b           . + 4 + (0x7 << 2)
label_297604:
    if (ctx->pc == 0x297604u) {
        ctx->pc = 0x297604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297600u;
        // 0x297604: 0x641000fb  daddiu      $s0, $zero, 0xFB (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)251);
        ctx->in_delay_slot = false;
        ctx->pc = 0x297608u;
        goto label_297608;
    }
    ctx->pc = 0x297600u;
    {
        const bool branch_taken_0x297600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297600u;
        // 0x297604: 0x641000fb  daddiu      $s0, $zero, 0xFB (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)251);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297600) {
            ctx->pc = 0x297620u;
            goto label_297620;
        }
    }
    ctx->pc = 0x297608u;
label_297608:
    // 0x297608: 0x10000005  b           . + 4 + (0x5 << 2)
label_29760c:
    if (ctx->pc == 0x29760Cu) {
        ctx->pc = 0x29760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297608u;
        // 0x29760c: 0x641000fc  daddiu      $s0, $zero, 0xFC (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)252);
        ctx->in_delay_slot = false;
        ctx->pc = 0x297610u;
        goto label_297610;
    }
    ctx->pc = 0x297608u;
    {
        const bool branch_taken_0x297608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297608u;
        // 0x29760c: 0x641000fc  daddiu      $s0, $zero, 0xFC (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)252);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297608) {
            ctx->pc = 0x297620u;
            goto label_297620;
        }
    }
    ctx->pc = 0x297610u;
label_297610:
    // 0x297610: 0x10000003  b           . + 4 + (0x3 << 2)
label_297614:
    if (ctx->pc == 0x297614u) {
        ctx->pc = 0x297614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297610u;
        // 0x297614: 0x641000fd  daddiu      $s0, $zero, 0xFD (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)253);
        ctx->in_delay_slot = false;
        ctx->pc = 0x297618u;
        goto label_297618;
    }
    ctx->pc = 0x297610u;
    {
        const bool branch_taken_0x297610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297610u;
        // 0x297614: 0x641000fd  daddiu      $s0, $zero, 0xFD (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)253);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297610) {
            ctx->pc = 0x297620u;
            goto label_297620;
        }
    }
    ctx->pc = 0x297618u;
label_297618:
    // 0x297618: 0x641000fe  daddiu      $s0, $zero, 0xFE
    ctx->pc = 0x297618u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)254);
label_29761c:
    // 0x29761c: 0x0  nop
    ctx->pc = 0x29761cu;
    // NOP
label_297620:
    // 0x297620: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_297624:
    if (ctx->pc == 0x297624u) {
        ctx->pc = 0x297624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297620u;
        // 0x297624: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x297628u;
        goto label_297628;
    }
    ctx->pc = 0x297620u;
    {
        const bool branch_taken_0x297620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x297624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297620u;
        // 0x297624: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297620) {
            ctx->pc = 0x297698u;
            goto label_297698;
        }
    }
    ctx->pc = 0x297628u;
label_297628:
    // 0x297628: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x297628u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_29762c:
    // 0x29762c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x29762cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_297630:
    // 0x297630: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x297630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_297634:
    // 0x297634: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x297634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_297638:
    // 0x297638: 0x24c62874  addiu       $a2, $a2, 0x2874
    ctx->pc = 0x297638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10356));
label_29763c:
    // 0x29763c: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x29763cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_297640:
    // 0x297640: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x297640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_297644:
    // 0x297644: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x297644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_297648:
    // 0x297648: 0x24a52878  addiu       $a1, $a1, 0x2878
    ctx->pc = 0x297648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10360));
label_29764c:
    // 0x29764c: 0x94e70000  lhu         $a3, 0x0($a3)
    ctx->pc = 0x29764cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_297650:
    // 0x297650: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x297650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_297654:
    // 0x297654: 0xa83021  addu        $a2, $a1, $t0
    ctx->pc = 0x297654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_297658:
    // 0x297658: 0x24842882  addiu       $a0, $a0, 0x2882
    ctx->pc = 0x297658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10370));
label_29765c:
    // 0x29765c: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x29765cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_297660:
    // 0x297660: 0x2463287a  addiu       $v1, $v1, 0x287A
    ctx->pc = 0x297660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10362));
label_297664:
    // 0x297664: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x297664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_297668:
    // 0x297668: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x297668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_29766c:
    // 0x29766c: 0x24632881  addiu       $v1, $v1, 0x2881
    ctx->pc = 0x29766cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10369));
label_297670:
    // 0x297670: 0xa62729d6  sh          $a3, 0x29D6($s1)
    ctx->pc = 0x297670u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10710), (uint16_t)GPR_U32(ctx, 7));
label_297674:
    // 0x297674: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x297674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_297678:
    // 0x297678: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x297678u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_29767c:
    // 0x29767c: 0xa62629d8  sh          $a2, 0x29D8($s1)
    ctx->pc = 0x29767cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10712), (uint16_t)GPR_U32(ctx, 6));
label_297680:
    // 0x297680: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x297680u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_297684:
    // 0x297684: 0xa62529da  sh          $a1, 0x29DA($s1)
    ctx->pc = 0x297684u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10714), (uint16_t)GPR_U32(ctx, 5));
label_297688:
    // 0x297688: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x297688u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_29768c:
    // 0x29768c: 0xa22429dc  sb          $a0, 0x29DC($s1)
    ctx->pc = 0x29768cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10716), (uint8_t)GPR_U32(ctx, 4));
label_297690:
    // 0x297690: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x297690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_297694:
    // 0x297694: 0xa22329dd  sb          $v1, 0x29DD($s1)
    ctx->pc = 0x297694u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10717), (uint8_t)GPR_U32(ctx, 3));
label_297698:
    // 0x297698: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x297698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_29769c:
    // 0x29769c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x29769cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2976a0:
    // 0x2976a0: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x2976a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
label_2976a4:
    // 0x2976a4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2976a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2976a8:
    // 0x2976a8: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x2976a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
label_2976ac:
    // 0x2976ac: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2976acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2976b0:
    // 0x2976b0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2976b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2976b4:
    // 0x2976b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2976b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2976b8:
    // 0x2976b8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2976b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2976bc:
    // 0x2976bc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2976bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2976c0:
    // 0x2976c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2976c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2976c4:
    // 0x2976c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2976c8:
    if (ctx->pc == 0x2976C8u) {
        ctx->pc = 0x2976CCu;
        goto label_2976cc;
    }
    ctx->pc = 0x2976C4u;
    {
        const bool branch_taken_0x2976c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2976c4) {
            ctx->pc = 0x2976DCu;
            goto label_2976dc;
        }
    }
    ctx->pc = 0x2976CCu;
label_2976cc:
    // 0x2976cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2976ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2976d0:
    // 0x2976d0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2976d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2976d4:
    // 0x2976d4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2976d8:
    if (ctx->pc == 0x2976D8u) {
        ctx->pc = 0x2976D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2976D4u;
        // 0x2976d8: 0x96230784  lhu         $v1, 0x784($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1924)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2976DCu;
        goto label_2976dc;
    }
    ctx->pc = 0x2976D4u;
    {
        const bool branch_taken_0x2976d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2976D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2976D4u;
        // 0x2976d8: 0x96230784  lhu         $v1, 0x784($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2976d4) {
            ctx->pc = 0x2976F8u;
            goto label_2976f8;
        }
    }
    ctx->pc = 0x2976DCu;
label_2976dc:
    // 0x2976dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2976dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2976e0:
    // 0x2976e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2976e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2976e4:
    // 0x2976e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2976e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2976e8:
    // 0x2976e8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2976e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2976ec:
    // 0x2976ec: 0x0  nop
    ctx->pc = 0x2976ecu;
    // NOP
label_2976f0:
    // 0x2976f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2976f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2976f4:
    // 0x2976f4: 0x96230784  lhu         $v1, 0x784($s1)
    ctx->pc = 0x2976f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1924)));
label_2976f8:
    // 0x2976f8: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x2976f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2976fc:
    // 0x2976fc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_297700:
    if (ctx->pc == 0x297700u) {
        ctx->pc = 0x297704u;
        goto label_297704;
    }
    ctx->pc = 0x2976FCu;
    {
        const bool branch_taken_0x2976fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2976fc) {
            ctx->pc = 0x297708u;
            goto label_297708;
        }
    }
    ctx->pc = 0x297704u;
label_297704:
    // 0x297704: 0xa6240784  sh          $a0, 0x784($s1)
    ctx->pc = 0x297704u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1924), (uint16_t)GPR_U32(ctx, 4));
label_297708:
    // 0x297708: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x297708u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_29770c:
    // 0x29770c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x29770cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_297710:
    // 0x297710: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_297714:
    if (ctx->pc == 0x297714u) {
        ctx->pc = 0x297718u;
        goto label_297718;
    }
    ctx->pc = 0x297710u;
    {
        const bool branch_taken_0x297710 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x297710) {
            ctx->pc = 0x297728u;
            goto label_297728;
        }
    }
    ctx->pc = 0x297718u;
label_297718:
    // 0x297718: 0x8e2306cc  lw          $v1, 0x6CC($s1)
    ctx->pc = 0x297718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
label_29771c:
    // 0x29771c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29771cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_297720:
    // 0x297720: 0xae2306cc  sw          $v1, 0x6CC($s1)
    ctx->pc = 0x297720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 3));
label_297724:
    // 0x297724: 0x0  nop
    ctx->pc = 0x297724u;
    // NOP
label_297728:
    // 0x297728: 0x9224065c  lbu         $a0, 0x65C($s1)
    ctx->pc = 0x297728u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
label_29772c:
    // 0x29772c: 0x2403009d  addiu       $v1, $zero, 0x9D
    ctx->pc = 0x29772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_297730:
    // 0x297730: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_297734:
    if (ctx->pc == 0x297734u) {
        ctx->pc = 0x297738u;
        goto label_297738;
    }
    ctx->pc = 0x297730u;
    {
        const bool branch_taken_0x297730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x297730) {
            ctx->pc = 0x297748u;
            goto label_297748;
        }
    }
    ctx->pc = 0x297738u;
label_297738:
    // 0x297738: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x297738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_29773c:
    // 0x29773c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x29773cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_297740:
    // 0x297740: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x297740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
label_297744:
    // 0x297744: 0x0  nop
    ctx->pc = 0x297744u;
    // NOP
label_297748:
    // 0x297748: 0x9224065c  lbu         $a0, 0x65C($s1)
    ctx->pc = 0x297748u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
label_29774c:
    // 0x29774c: 0x2403009a  addiu       $v1, $zero, 0x9A
    ctx->pc = 0x29774cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_297750:
    // 0x297750: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_297754:
    if (ctx->pc == 0x297754u) {
        ctx->pc = 0x297758u;
        goto label_297758;
    }
    ctx->pc = 0x297750u;
    {
        const bool branch_taken_0x297750 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x297750) {
            ctx->pc = 0x297768u;
            goto label_297768;
        }
    }
    ctx->pc = 0x297758u;
label_297758:
    // 0x297758: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x297758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_29775c:
    // 0x29775c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x29775cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_297760:
    // 0x297760: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x297760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
label_297764:
    // 0x297764: 0x0  nop
    ctx->pc = 0x297764u;
    // NOP
label_297768:
    // 0x297768: 0x9224065c  lbu         $a0, 0x65C($s1)
    ctx->pc = 0x297768u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
label_29776c:
    // 0x29776c: 0x24030099  addiu       $v1, $zero, 0x99
    ctx->pc = 0x29776cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_297770:
    // 0x297770: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_297774:
    if (ctx->pc == 0x297774u) {
        ctx->pc = 0x297778u;
        goto label_297778;
    }
    ctx->pc = 0x297770u;
    {
        const bool branch_taken_0x297770 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x297770) {
            ctx->pc = 0x297788u;
            goto label_297788;
        }
    }
    ctx->pc = 0x297778u;
label_297778:
    // 0x297778: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x297778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_29777c:
    // 0x29777c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x29777cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_297780:
    // 0x297780: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x297780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
label_297784:
    // 0x297784: 0x0  nop
    ctx->pc = 0x297784u;
    // NOP
label_297788:
    // 0x297788: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x297788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
label_29778c:
    // 0x29778c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29778cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_297790:
    // 0x297790: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_297794:
    if (ctx->pc == 0x297794u) {
        ctx->pc = 0x297798u;
        goto label_297798;
    }
    ctx->pc = 0x297790u;
    {
        const bool branch_taken_0x297790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297790) {
            ctx->pc = 0x297810u;
            goto label_297810;
        }
    }
    ctx->pc = 0x297798u;
label_297798:
    // 0x297798: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x297798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29779c:
    // 0x29779c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x29779cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2977a0:
    // 0x2977a0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2977a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2977a4:
    // 0x2977a4: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x2977a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
label_2977a8:
    // 0x2977a8: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x2977a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
label_2977ac:
    // 0x2977ac: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2977acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2977b0:
    // 0x2977b0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2977b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2977b4:
    // 0x2977b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2977b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2977b8:
    // 0x2977b8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2977b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2977bc:
    // 0x2977bc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2977bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2977c0:
    // 0x2977c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2977c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2977c4:
    // 0x2977c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2977c8:
    if (ctx->pc == 0x2977C8u) {
        ctx->pc = 0x2977C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2977C4u;
        // 0x2977c8: 0x96250824  lhu         $a1, 0x824($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2084)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2977CCu;
        goto label_2977cc;
    }
    ctx->pc = 0x2977C4u;
    {
        const bool branch_taken_0x2977c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2977C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2977C4u;
        // 0x2977c8: 0x96250824  lhu         $a1, 0x824($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2977c4) {
            ctx->pc = 0x2977DCu;
            goto label_2977dc;
        }
    }
    ctx->pc = 0x2977CCu;
label_2977cc:
    // 0x2977cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2977ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2977d0:
    // 0x2977d0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2977d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2977d4:
    // 0x2977d4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2977d8:
    if (ctx->pc == 0x2977D8u) {
        ctx->pc = 0x2977D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2977D4u;
        // 0x2977d8: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2977DCu;
        goto label_2977dc;
    }
    ctx->pc = 0x2977D4u;
    {
        const bool branch_taken_0x2977d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2977D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2977D4u;
        // 0x2977d8: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2977d4) {
            ctx->pc = 0x2977F8u;
            goto label_2977f8;
        }
    }
    ctx->pc = 0x2977DCu;
label_2977dc:
    // 0x2977dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2977dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2977e0:
    // 0x2977e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2977e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2977e4:
    // 0x2977e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2977e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2977e8:
    // 0x2977e8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2977e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2977ec:
    // 0x2977ec: 0x0  nop
    ctx->pc = 0x2977ecu;
    // NOP
label_2977f0:
    // 0x2977f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2977f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2977f4:
    // 0x2977f4: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x2977f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2977f8:
    // 0x2977f8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_2977fc:
    if (ctx->pc == 0x2977FCu) {
        ctx->pc = 0x297800u;
        goto label_297800;
    }
    ctx->pc = 0x2977F8u;
    {
        const bool branch_taken_0x2977f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2977f8) {
            ctx->pc = 0x297810u;
            goto label_297810;
        }
    }
    ctx->pc = 0x297800u;
label_297800:
    // 0x297800: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x297800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_297804:
    // 0x297804: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x297804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_297808:
    // 0x297808: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x297808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
label_29780c:
    // 0x29780c: 0x0  nop
    ctx->pc = 0x29780cu;
    // NOP
label_297810:
    // 0x297810: 0x96240824  lhu         $a0, 0x824($s1)
    ctx->pc = 0x297810u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2084)));
label_297814:
    // 0x297814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x297814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297818:
    // 0x297818: 0x148300a9  bne         $a0, $v1, . + 4 + (0xA9 << 2)
label_29781c:
    if (ctx->pc == 0x29781Cu) {
        ctx->pc = 0x297820u;
        goto label_297820;
    }
    ctx->pc = 0x297818u;
    {
        const bool branch_taken_0x297818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x297818) {
            ctx->pc = 0x297AC0u;
            goto label_297ac0;
        }
    }
    ctx->pc = 0x297820u;
label_297820:
    // 0x297820: 0xde230690  ld          $v1, 0x690($s1)
    ctx->pc = 0x297820u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1680)));
label_297824:
    // 0x297824: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x297824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_297828:
    // 0x297828: 0x106000a5  beqz        $v1, . + 4 + (0xA5 << 2)
label_29782c:
    if (ctx->pc == 0x29782Cu) {
        ctx->pc = 0x297830u;
        goto label_297830;
    }
    ctx->pc = 0x297828u;
    {
        const bool branch_taken_0x297828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297828) {
            ctx->pc = 0x297AC0u;
            goto label_297ac0;
        }
    }
    ctx->pc = 0x297830u;
label_297830:
    // 0x297830: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x297830u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_297834:
    // 0x297834: 0x240300f4  addiu       $v1, $zero, 0xF4
    ctx->pc = 0x297834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
label_297838:
    // 0x297838: 0x10830085  beq         $a0, $v1, . + 4 + (0x85 << 2)
label_29783c:
    if (ctx->pc == 0x29783Cu) {
        ctx->pc = 0x29783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297838u;
        // 0x29783c: 0x240300f3  addiu       $v1, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297840u;
        goto label_297840;
    }
    ctx->pc = 0x297838u;
    {
        const bool branch_taken_0x297838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297838u;
        // 0x29783c: 0x240300f3  addiu       $v1, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297838) {
            ctx->pc = 0x297A50u;
            goto label_297a50;
        }
    }
    ctx->pc = 0x297840u;
label_297840:
    // 0x297840: 0x10830065  beq         $a0, $v1, . + 4 + (0x65 << 2)
label_297844:
    if (ctx->pc == 0x297844u) {
        ctx->pc = 0x297848u;
        goto label_297848;
    }
    ctx->pc = 0x297840u;
    {
        const bool branch_taken_0x297840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x297840) {
            ctx->pc = 0x2979D8u;
            goto label_2979d8;
        }
    }
    ctx->pc = 0x297848u;
label_297848:
    // 0x297848: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x297848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_29784c:
    // 0x29784c: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
label_297850:
    if (ctx->pc == 0x297850u) {
        ctx->pc = 0x297850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29784Cu;
        // 0x297850: 0x2403004f  addiu       $v1, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297854u;
        goto label_297854;
    }
    ctx->pc = 0x29784Cu;
    {
        const bool branch_taken_0x29784c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x297850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29784Cu;
        // 0x297850: 0x2403004f  addiu       $v1, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29784c) {
            ctx->pc = 0x297960u;
            goto label_297960;
        }
    }
    ctx->pc = 0x297854u;
label_297854:
    // 0x297854: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
label_297858:
    if (ctx->pc == 0x297858u) {
        ctx->pc = 0x29785Cu;
        goto label_29785c;
    }
    ctx->pc = 0x297854u;
    {
        const bool branch_taken_0x297854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x297854) {
            ctx->pc = 0x2978E8u;
            goto label_2978e8;
        }
    }
    ctx->pc = 0x29785Cu;
label_29785c:
    // 0x29785c: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x29785cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_297860:
    // 0x297860: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_297864:
    if (ctx->pc == 0x297864u) {
        ctx->pc = 0x297868u;
        goto label_297868;
    }
    ctx->pc = 0x297860u;
    {
        const bool branch_taken_0x297860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x297860) {
            ctx->pc = 0x297870u;
            goto label_297870;
        }
    }
    ctx->pc = 0x297868u;
label_297868:
    // 0x297868: 0x10000095  b           . + 4 + (0x95 << 2)
label_29786c:
    if (ctx->pc == 0x29786Cu) {
        ctx->pc = 0x297870u;
        goto label_297870;
    }
    ctx->pc = 0x297868u;
    {
        const bool branch_taken_0x297868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297868) {
            ctx->pc = 0x297AC0u;
            goto label_297ac0;
        }
    }
    ctx->pc = 0x297870u;
label_297870:
    // 0x297870: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x297870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_297874:
    // 0x297874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297878:
    // 0x297878: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x297878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_29787c:
    // 0x29787c: 0xc096974  jal         func_25A5D0
label_297880:
    if (ctx->pc == 0x297880u) {
        ctx->pc = 0x297880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29787Cu;
        // 0x297880: 0x2444fec0  addiu       $a0, $v0, -0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297884u;
        goto label_297884;
    }
    ctx->pc = 0x29787Cu;
    SET_GPR_U32(ctx, 31, 0x297884u);
    ctx->pc = 0x297880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29787Cu;
    // 0x297880: 0x2444fec0  addiu       $a0, $v0, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x29787Cu, 0x297884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297884u;
label_297884:
    // 0x297884: 0x8e2529c0  lw          $a1, 0x29C0($s1)
    ctx->pc = 0x297884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_297888:
    // 0x297888: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x297888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
label_29788c:
    // 0x29788c: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x29788cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_297890:
    // 0x297890: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x297890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_297894:
    // 0x297894: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x297894u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_297898:
    // 0x297898: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29789c:
    // 0x29789c: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x29789cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_2978a0:
    // 0x2978a0: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2978a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2978a4:
    // 0x2978a4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2978a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2978a8:
    // 0x2978a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2978a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2978ac:
    // 0x2978ac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2978b0:
    if (ctx->pc == 0x2978B0u) {
        ctx->pc = 0x2978B4u;
        goto label_2978b4;
    }
    ctx->pc = 0x2978ACu;
    {
        const bool branch_taken_0x2978ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2978ac) {
            ctx->pc = 0x2978C4u;
            goto label_2978c4;
        }
    }
    ctx->pc = 0x2978B4u;
label_2978b4:
    // 0x2978b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2978b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2978b8:
    // 0x2978b8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2978b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2978bc:
    // 0x2978bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2978c0:
    if (ctx->pc == 0x2978C0u) {
        ctx->pc = 0x2978C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2978BCu;
        // 0x2978c0: 0xa22407be  sb          $a0, 0x7BE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1982), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2978C4u;
        goto label_2978c4;
    }
    ctx->pc = 0x2978BCu;
    {
        const bool branch_taken_0x2978bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2978C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2978BCu;
        // 0x2978c0: 0xa22407be  sb          $a0, 0x7BE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1982), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2978bc) {
            ctx->pc = 0x2978E0u;
            goto label_2978e0;
        }
    }
    ctx->pc = 0x2978C4u;
label_2978c4:
    // 0x2978c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2978c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2978c8:
    // 0x2978c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2978c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2978cc:
    // 0x2978cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2978ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2978d0:
    // 0x2978d0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2978d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2978d4:
    // 0x2978d4: 0x0  nop
    ctx->pc = 0x2978d4u;
    // NOP
label_2978d8:
    // 0x2978d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2978d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2978dc:
    // 0x2978dc: 0xa22407be  sb          $a0, 0x7BE($s1)
    ctx->pc = 0x2978dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1982), (uint8_t)GPR_U32(ctx, 4));
label_2978e0:
    // 0x2978e0: 0x10000077  b           . + 4 + (0x77 << 2)
label_2978e4:
    if (ctx->pc == 0x2978E4u) {
        ctx->pc = 0x2978E8u;
        goto label_2978e8;
    }
    ctx->pc = 0x2978E0u;
    {
        const bool branch_taken_0x2978e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2978e0) {
            ctx->pc = 0x297AC0u;
            goto label_297ac0;
        }
    }
    ctx->pc = 0x2978E8u;
label_2978e8:
    // 0x2978e8: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x2978e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_2978ec:
    // 0x2978ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2978ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2978f0:
    // 0x2978f0: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2978f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_2978f4:
    // 0x2978f4: 0xc096974  jal         func_25A5D0
label_2978f8:
    if (ctx->pc == 0x2978F8u) {
        ctx->pc = 0x2978F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2978F4u;
        // 0x2978f8: 0x2444fec0  addiu       $a0, $v0, -0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2978FCu;
        goto label_2978fc;
    }
    ctx->pc = 0x2978F4u;
    SET_GPR_U32(ctx, 31, 0x2978FCu);
    ctx->pc = 0x2978F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2978F4u;
    // 0x2978f8: 0x2444fec0  addiu       $a0, $v0, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2978F4u, 0x2978FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2978FCu;
label_2978fc:
    // 0x2978fc: 0x8e2529c0  lw          $a1, 0x29C0($s1)
    ctx->pc = 0x2978fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_297900:
    // 0x297900: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x297900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
label_297904:
    // 0x297904: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x297904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_297908:
    // 0x297908: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x297908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_29790c:
    // 0x29790c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x29790cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_297910:
    // 0x297910: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_297914:
    // 0x297914: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x297914u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_297918:
    // 0x297918: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x297918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29791c:
    // 0x29791c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x29791cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_297920:
    // 0x297920: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x297920u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_297924:
    // 0x297924: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_297928:
    if (ctx->pc == 0x297928u) {
        ctx->pc = 0x29792Cu;
        goto label_29792c;
    }
    ctx->pc = 0x297924u;
    {
        const bool branch_taken_0x297924 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x297924) {
            ctx->pc = 0x29793Cu;
            goto label_29793c;
        }
    }
    ctx->pc = 0x29792Cu;
label_29792c:
    // 0x29792c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29792cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_297930:
    // 0x297930: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x297930u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_297934:
    // 0x297934: 0x10000008  b           . + 4 + (0x8 << 2)
label_297938:
    if (ctx->pc == 0x297938u) {
        ctx->pc = 0x297938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297934u;
        // 0x297938: 0xa22407be  sb          $a0, 0x7BE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1982), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29793Cu;
        goto label_29793c;
    }
    ctx->pc = 0x297934u;
    {
        const bool branch_taken_0x297934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297934u;
        // 0x297938: 0xa22407be  sb          $a0, 0x7BE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1982), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297934) {
            ctx->pc = 0x297958u;
            goto label_297958;
        }
    }
    ctx->pc = 0x29793Cu;
label_29793c:
    // 0x29793c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29793cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_297940:
    // 0x297940: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x297940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_297944:
    // 0x297944: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x297944u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_297948:
    // 0x297948: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x297948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_29794c:
    // 0x29794c: 0x0  nop
    ctx->pc = 0x29794cu;
    // NOP
label_297950:
    // 0x297950: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x297950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_297954:
    // 0x297954: 0xa22407be  sb          $a0, 0x7BE($s1)
    ctx->pc = 0x297954u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1982), (uint8_t)GPR_U32(ctx, 4));
label_297958:
    // 0x297958: 0x10000059  b           . + 4 + (0x59 << 2)
label_29795c:
    if (ctx->pc == 0x29795Cu) {
        ctx->pc = 0x297960u;
        goto label_297960;
    }
    ctx->pc = 0x297958u;
    {
        const bool branch_taken_0x297958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297958) {
            ctx->pc = 0x297AC0u;
            goto label_297ac0;
        }
    }
    ctx->pc = 0x297960u;
label_297960:
    // 0x297960: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x297960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_297964:
    // 0x297964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297968:
    // 0x297968: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x297968u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_29796c:
    // 0x29796c: 0xc096974  jal         func_25A5D0
label_297970:
    if (ctx->pc == 0x297970u) {
        ctx->pc = 0x297970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29796Cu;
        // 0x297970: 0x2444fd80  addiu       $a0, $v0, -0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297974u;
        goto label_297974;
    }
    ctx->pc = 0x29796Cu;
    SET_GPR_U32(ctx, 31, 0x297974u);
    ctx->pc = 0x297970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29796Cu;
    // 0x297970: 0x2444fd80  addiu       $a0, $v0, -0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x29796Cu, 0x297974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297974u;
label_297974:
    // 0x297974: 0x8e2529c0  lw          $a1, 0x29C0($s1)
    ctx->pc = 0x297974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_297978:
    // 0x297978: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x297978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
label_29797c:
    // 0x29797c: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x29797cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_297980:
    // 0x297980: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x297980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_297984:
    // 0x297984: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x297984u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_297988:
    // 0x297988: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29798c:
    // 0x29798c: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x29798cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_297990:
    // 0x297990: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x297990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_297994:
    // 0x297994: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x297994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_297998:
    // 0x297998: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x297998u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29799c:
    // 0x29799c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2979a0:
    if (ctx->pc == 0x2979A0u) {
        ctx->pc = 0x2979A4u;
        goto label_2979a4;
    }
    ctx->pc = 0x29799Cu;
    {
        const bool branch_taken_0x29799c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29799c) {
            ctx->pc = 0x2979B4u;
            goto label_2979b4;
        }
    }
    ctx->pc = 0x2979A4u;
label_2979a4:
    // 0x2979a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2979a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2979a8:
    // 0x2979a8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2979a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2979ac:
    // 0x2979ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_2979b0:
    if (ctx->pc == 0x2979B0u) {
        ctx->pc = 0x2979B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979ACu;
        // 0x2979b0: 0xa22407be  sb          $a0, 0x7BE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1982), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2979B4u;
        goto label_2979b4;
    }
    ctx->pc = 0x2979ACu;
    {
        const bool branch_taken_0x2979ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2979B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979ACu;
        // 0x2979b0: 0xa22407be  sb          $a0, 0x7BE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1982), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2979ac) {
            ctx->pc = 0x2979D0u;
            goto label_2979d0;
        }
    }
    ctx->pc = 0x2979B4u;
label_2979b4:
    // 0x2979b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2979b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2979b8:
    // 0x2979b8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2979b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2979bc:
    // 0x2979bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2979bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2979c0:
    // 0x2979c0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2979c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2979c4:
    // 0x2979c4: 0x0  nop
    ctx->pc = 0x2979c4u;
    // NOP
label_2979c8:
    // 0x2979c8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2979c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2979cc:
    // 0x2979cc: 0xa22407be  sb          $a0, 0x7BE($s1)
    ctx->pc = 0x2979ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1982), (uint8_t)GPR_U32(ctx, 4));
label_2979d0:
    // 0x2979d0: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2979d4:
    if (ctx->pc == 0x2979D4u) {
        ctx->pc = 0x2979D8u;
        goto label_2979d8;
    }
    ctx->pc = 0x2979D0u;
    {
        const bool branch_taken_0x2979d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2979d0) {
            ctx->pc = 0x297AC0u;
            goto label_297ac0;
        }
    }
    ctx->pc = 0x2979D8u;
label_2979d8:
    // 0x2979d8: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x2979d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_2979dc:
    // 0x2979dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2979dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2979e0:
    // 0x2979e0: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2979e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_2979e4:
    // 0x2979e4: 0xc096974  jal         func_25A5D0
label_2979e8:
    if (ctx->pc == 0x2979E8u) {
        ctx->pc = 0x2979E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979E4u;
        // 0x2979e8: 0x2444fec0  addiu       $a0, $v0, -0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2979ECu;
        goto label_2979ec;
    }
    ctx->pc = 0x2979E4u;
    SET_GPR_U32(ctx, 31, 0x2979ECu);
    ctx->pc = 0x2979E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2979E4u;
    // 0x2979e8: 0x2444fec0  addiu       $a0, $v0, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2979E4u, 0x2979ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2979ECu;
label_2979ec:
    // 0x2979ec: 0x8e2429c0  lw          $a0, 0x29C0($s1)
    ctx->pc = 0x2979ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_2979f0:
    // 0x2979f0: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x2979f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_2979f4:
    // 0x2979f4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2979f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2979f8:
    // 0x2979f8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2979f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2979fc:
    // 0x2979fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2979fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_297a00:
    // 0x297a00: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x297a00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_297a04:
    // 0x297a04: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x297a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_297a08:
    // 0x297a08: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x297a08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_297a0c:
    // 0x297a0c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x297a0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_297a10:
    // 0x297a10: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_297a14:
    if (ctx->pc == 0x297A14u) {
        ctx->pc = 0x297A18u;
        goto label_297a18;
    }
    ctx->pc = 0x297A10u;
    {
        const bool branch_taken_0x297a10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x297a10) {
            ctx->pc = 0x297A28u;
            goto label_297a28;
        }
    }
    ctx->pc = 0x297A18u;
label_297a18:
    // 0x297a18: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x297a18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_297a1c:
    // 0x297a1c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x297a1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_297a20:
    // 0x297a20: 0x10000008  b           . + 4 + (0x8 << 2)
label_297a24:
    if (ctx->pc == 0x297A24u) {
        ctx->pc = 0x297A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A20u;
        // 0x297a24: 0xa22407be  sb          $a0, 0x7BE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1982), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297A28u;
        goto label_297a28;
    }
    ctx->pc = 0x297A20u;
    {
        const bool branch_taken_0x297a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A20u;
        // 0x297a24: 0xa22407be  sb          $a0, 0x7BE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1982), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a20) {
            ctx->pc = 0x297A44u;
            goto label_297a44;
        }
    }
    ctx->pc = 0x297A28u;
label_297a28:
    // 0x297a28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x297a28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_297a2c:
    // 0x297a2c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x297a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_297a30:
    // 0x297a30: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x297a30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_297a34:
    // 0x297a34: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x297a34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_297a38:
    // 0x297a38: 0x0  nop
    ctx->pc = 0x297a38u;
    // NOP
label_297a3c:
    // 0x297a3c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x297a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_297a40:
    // 0x297a40: 0xa22407be  sb          $a0, 0x7BE($s1)
    ctx->pc = 0x297a40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1982), (uint8_t)GPR_U32(ctx, 4));
label_297a44:
    // 0x297a44: 0x1000001e  b           . + 4 + (0x1E << 2)
label_297a48:
    if (ctx->pc == 0x297A48u) {
        ctx->pc = 0x297A4Cu;
        goto label_297a4c;
    }
    ctx->pc = 0x297A44u;
    {
        const bool branch_taken_0x297a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297a44) {
            ctx->pc = 0x297AC0u;
            goto label_297ac0;
        }
    }
    ctx->pc = 0x297A4Cu;
label_297a4c:
    // 0x297a4c: 0x0  nop
    ctx->pc = 0x297a4cu;
    // NOP
label_297a50:
    // 0x297a50: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x297a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_297a54:
    // 0x297a54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297a58:
    // 0x297a58: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x297a58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_297a5c:
    // 0x297a5c: 0xc096974  jal         func_25A5D0
label_297a60:
    if (ctx->pc == 0x297A60u) {
        ctx->pc = 0x297A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A5Cu;
        // 0x297a60: 0x2444ffb0  addiu       $a0, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297A64u;
        goto label_297a64;
    }
    ctx->pc = 0x297A5Cu;
    SET_GPR_U32(ctx, 31, 0x297A64u);
    ctx->pc = 0x297A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297A5Cu;
    // 0x297a60: 0x2444ffb0  addiu       $a0, $v0, -0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x297A5Cu, 0x297A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A64u;
label_297a64:
    // 0x297a64: 0x8e2529c0  lw          $a1, 0x29C0($s1)
    ctx->pc = 0x297a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_297a68:
    // 0x297a68: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x297a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
label_297a6c:
    // 0x297a6c: 0x34643333  ori         $a0, $v1, 0x3333
    ctx->pc = 0x297a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
label_297a70:
    // 0x297a70: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x297a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_297a74:
    // 0x297a74: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x297a74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_297a78:
    // 0x297a78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297a78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_297a7c:
    // 0x297a7c: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x297a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_297a80:
    // 0x297a80: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x297a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_297a84:
    // 0x297a84: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x297a84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_297a88:
    // 0x297a88: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x297a88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_297a8c:
    // 0x297a8c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_297a90:
    if (ctx->pc == 0x297A90u) {
        ctx->pc = 0x297A94u;
        goto label_297a94;
    }
    ctx->pc = 0x297A8Cu;
    {
        const bool branch_taken_0x297a8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x297a8c) {
            ctx->pc = 0x297AA4u;
            goto label_297aa4;
        }
    }
    ctx->pc = 0x297A94u;
label_297a94:
    // 0x297a94: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x297a94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_297a98:
    // 0x297a98: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x297a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_297a9c:
    // 0x297a9c: 0x10000008  b           . + 4 + (0x8 << 2)
label_297aa0:
    if (ctx->pc == 0x297AA0u) {
        ctx->pc = 0x297AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A9Cu;
        // 0x297aa0: 0xa22407be  sb          $a0, 0x7BE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1982), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297AA4u;
        goto label_297aa4;
    }
    ctx->pc = 0x297A9Cu;
    {
        const bool branch_taken_0x297a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A9Cu;
        // 0x297aa0: 0xa22407be  sb          $a0, 0x7BE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1982), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a9c) {
            ctx->pc = 0x297AC0u;
            goto label_297ac0;
        }
    }
    ctx->pc = 0x297AA4u;
label_297aa4:
    // 0x297aa4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x297aa4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_297aa8:
    // 0x297aa8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x297aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_297aac:
    // 0x297aac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x297aacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_297ab0:
    // 0x297ab0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x297ab0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_297ab4:
    // 0x297ab4: 0x0  nop
    ctx->pc = 0x297ab4u;
    // NOP
label_297ab8:
    // 0x297ab8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x297ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_297abc:
    // 0x297abc: 0xa22407be  sb          $a0, 0x7BE($s1)
    ctx->pc = 0x297abcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1982), (uint8_t)GPR_U32(ctx, 4));
label_297ac0:
    // 0x297ac0: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x297ac0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_297ac4:
    // 0x297ac4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x297ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_297ac8:
    // 0x297ac8: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
label_297acc:
    if (ctx->pc == 0x297ACCu) {
        ctx->pc = 0x297AD0u;
        goto label_297ad0;
    }
    ctx->pc = 0x297AC8u;
    {
        const bool branch_taken_0x297ac8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x297ac8) {
            ctx->pc = 0x297B50u;
            goto label_297b50;
        }
    }
    ctx->pc = 0x297AD0u;
label_297ad0:
    // 0x297ad0: 0x8e2529c0  lw          $a1, 0x29C0($s1)
    ctx->pc = 0x297ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_297ad4:
    // 0x297ad4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x297ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_297ad8:
    // 0x297ad8: 0x8e2429c8  lw          $a0, 0x29C8($s1)
    ctx->pc = 0x297ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10696)));
label_297adc:
    // 0x297adc: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x297adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_297ae0:
    // 0x297ae0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x297ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_297ae4:
    // 0x297ae4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x297ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_297ae8:
    // 0x297ae8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x297ae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_297aec:
    // 0x297aec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x297aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_297af0:
    // 0x297af0: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_297af4:
    if (ctx->pc == 0x297AF4u) {
        ctx->pc = 0x297AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297AF0u;
        // 0x297af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297AF8u;
        goto label_297af8;
    }
    ctx->pc = 0x297AF0u;
    {
        const bool branch_taken_0x297af0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x297AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297AF0u;
        // 0x297af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297af0) {
            ctx->pc = 0x297B50u;
            goto label_297b50;
        }
    }
    ctx->pc = 0x297AF8u;
label_297af8:
    // 0x297af8: 0xc0a6998  jal         func_29A660
label_297afc:
    if (ctx->pc == 0x297AFCu) {
        ctx->pc = 0x297B00u;
        goto label_297b00;
    }
    ctx->pc = 0x297AF8u;
    SET_GPR_U32(ctx, 31, 0x297B00u);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x297AF8u, 0x297B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B00u;
label_297b00:
    // 0x297b00: 0x8e2429c0  lw          $a0, 0x29C0($s1)
    ctx->pc = 0x297b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_297b04:
    // 0x297b04: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x297b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_297b08:
    // 0x297b08: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x297b08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_297b0c:
    // 0x297b0c: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x297b0cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_297b10:
    // 0x297b10: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x297b10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_297b14:
    // 0x297b14: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_297b18:
    if (ctx->pc == 0x297B18u) {
        ctx->pc = 0x297B1Cu;
        goto label_297b1c;
    }
    ctx->pc = 0x297B14u;
    {
        const bool branch_taken_0x297b14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x297b14) {
            ctx->pc = 0x297B50u;
            goto label_297b50;
        }
    }
    ctx->pc = 0x297B1Cu;
label_297b1c:
    // 0x297b1c: 0x922629d0  lbu         $a2, 0x29D0($s1)
    ctx->pc = 0x297b1cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10704)));
label_297b20:
    // 0x297b20: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x297b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_297b24:
    // 0x297b24: 0x8f848ba8  lw          $a0, -0x7458($gp)
    ctx->pc = 0x297b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_297b28:
    // 0x297b28: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x297b28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_297b2c:
    // 0x297b2c: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x297b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_297b30:
    // 0x297b30: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x297b30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_297b34:
    // 0x297b34: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x297b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_297b38:
    // 0x297b38: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x297b38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_297b3c:
    // 0x297b3c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x297b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_297b40:
    // 0x297b40: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x297b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_297b44:
    // 0x297b44: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x297b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_297b48:
    // 0x297b48: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x297b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
label_297b4c:
    // 0x297b4c: 0x0  nop
    ctx->pc = 0x297b4cu;
    // NOP
label_297b50:
    // 0x297b50: 0x922307be  lbu         $v1, 0x7BE($s1)
    ctx->pc = 0x297b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1982)));
label_297b54:
    // 0x297b54: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_297b58:
    if (ctx->pc == 0x297B58u) {
        ctx->pc = 0x297B5Cu;
        goto label_297b5c;
    }
    ctx->pc = 0x297B54u;
    {
        const bool branch_taken_0x297b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297b54) {
            ctx->pc = 0x297B70u;
            goto label_297b70;
        }
    }
    ctx->pc = 0x297B5Cu;
label_297b5c:
    // 0x297b5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x297b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_297b60:
    // 0x297b60: 0xa22307be  sb          $v1, 0x7BE($s1)
    ctx->pc = 0x297b60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1982), (uint8_t)GPR_U32(ctx, 3));
label_297b64:
    // 0x297b64: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x297b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_297b68:
    // 0x297b68: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x297b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_297b6c:
    // 0x297b6c: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x297b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
label_297b70:
    // 0x297b70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x297b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_297b74:
    // 0x297b74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x297b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_297b78:
    // 0x297b78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x297b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_297b7c:
    // 0x297b7c: 0x3e00008  jr          $ra
label_297b80:
    if (ctx->pc == 0x297B80u) {
        ctx->pc = 0x297B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B7Cu;
        // 0x297b80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297B84u;
        goto label_fallthrough_0x297b7c;
    }
    ctx->pc = 0x297B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B7Cu;
        // 0x297b80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x297b7c:
    ctx->pc = 0x297B84u;
}
