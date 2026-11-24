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

// Function: sub_00324FB0
// Address: 0x324fb0 - 0x3258bc
void sub_00324FB0_0x324fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324FB0_0x324fb0");
#endif

    switch (ctx->pc) {
        case 0x324fb0u: goto label_324fb0;
        case 0x324fb4u: goto label_324fb4;
        case 0x324fb8u: goto label_324fb8;
        case 0x324fbcu: goto label_324fbc;
        case 0x324fc0u: goto label_324fc0;
        case 0x324fc4u: goto label_324fc4;
        case 0x324fc8u: goto label_324fc8;
        case 0x324fccu: goto label_324fcc;
        case 0x324fd0u: goto label_324fd0;
        case 0x324fd4u: goto label_324fd4;
        case 0x324fd8u: goto label_324fd8;
        case 0x324fdcu: goto label_324fdc;
        case 0x324fe0u: goto label_324fe0;
        case 0x324fe4u: goto label_324fe4;
        case 0x324fe8u: goto label_324fe8;
        case 0x324fecu: goto label_324fec;
        case 0x324ff0u: goto label_324ff0;
        case 0x324ff4u: goto label_324ff4;
        case 0x324ff8u: goto label_324ff8;
        case 0x324ffcu: goto label_324ffc;
        case 0x325000u: goto label_325000;
        case 0x325004u: goto label_325004;
        case 0x325008u: goto label_325008;
        case 0x32500cu: goto label_32500c;
        case 0x325010u: goto label_325010;
        case 0x325014u: goto label_325014;
        case 0x325018u: goto label_325018;
        case 0x32501cu: goto label_32501c;
        case 0x325020u: goto label_325020;
        case 0x325024u: goto label_325024;
        case 0x325028u: goto label_325028;
        case 0x32502cu: goto label_32502c;
        case 0x325030u: goto label_325030;
        case 0x325034u: goto label_325034;
        case 0x325038u: goto label_325038;
        case 0x32503cu: goto label_32503c;
        case 0x325040u: goto label_325040;
        case 0x325044u: goto label_325044;
        case 0x325048u: goto label_325048;
        case 0x32504cu: goto label_32504c;
        case 0x325050u: goto label_325050;
        case 0x325054u: goto label_325054;
        case 0x325058u: goto label_325058;
        case 0x32505cu: goto label_32505c;
        case 0x325060u: goto label_325060;
        case 0x325064u: goto label_325064;
        case 0x325068u: goto label_325068;
        case 0x32506cu: goto label_32506c;
        case 0x325070u: goto label_325070;
        case 0x325074u: goto label_325074;
        case 0x325078u: goto label_325078;
        case 0x32507cu: goto label_32507c;
        case 0x325080u: goto label_325080;
        case 0x325084u: goto label_325084;
        case 0x325088u: goto label_325088;
        case 0x32508cu: goto label_32508c;
        case 0x325090u: goto label_325090;
        case 0x325094u: goto label_325094;
        case 0x325098u: goto label_325098;
        case 0x32509cu: goto label_32509c;
        case 0x3250a0u: goto label_3250a0;
        case 0x3250a4u: goto label_3250a4;
        case 0x3250a8u: goto label_3250a8;
        case 0x3250acu: goto label_3250ac;
        case 0x3250b0u: goto label_3250b0;
        case 0x3250b4u: goto label_3250b4;
        case 0x3250b8u: goto label_3250b8;
        case 0x3250bcu: goto label_3250bc;
        case 0x3250c0u: goto label_3250c0;
        case 0x3250c4u: goto label_3250c4;
        case 0x3250c8u: goto label_3250c8;
        case 0x3250ccu: goto label_3250cc;
        case 0x3250d0u: goto label_3250d0;
        case 0x3250d4u: goto label_3250d4;
        case 0x3250d8u: goto label_3250d8;
        case 0x3250dcu: goto label_3250dc;
        case 0x3250e0u: goto label_3250e0;
        case 0x3250e4u: goto label_3250e4;
        case 0x3250e8u: goto label_3250e8;
        case 0x3250ecu: goto label_3250ec;
        case 0x3250f0u: goto label_3250f0;
        case 0x3250f4u: goto label_3250f4;
        case 0x3250f8u: goto label_3250f8;
        case 0x3250fcu: goto label_3250fc;
        case 0x325100u: goto label_325100;
        case 0x325104u: goto label_325104;
        case 0x325108u: goto label_325108;
        case 0x32510cu: goto label_32510c;
        case 0x325110u: goto label_325110;
        case 0x325114u: goto label_325114;
        case 0x325118u: goto label_325118;
        case 0x32511cu: goto label_32511c;
        case 0x325120u: goto label_325120;
        case 0x325124u: goto label_325124;
        case 0x325128u: goto label_325128;
        case 0x32512cu: goto label_32512c;
        case 0x325130u: goto label_325130;
        case 0x325134u: goto label_325134;
        case 0x325138u: goto label_325138;
        case 0x32513cu: goto label_32513c;
        case 0x325140u: goto label_325140;
        case 0x325144u: goto label_325144;
        case 0x325148u: goto label_325148;
        case 0x32514cu: goto label_32514c;
        case 0x325150u: goto label_325150;
        case 0x325154u: goto label_325154;
        case 0x325158u: goto label_325158;
        case 0x32515cu: goto label_32515c;
        case 0x325160u: goto label_325160;
        case 0x325164u: goto label_325164;
        case 0x325168u: goto label_325168;
        case 0x32516cu: goto label_32516c;
        case 0x325170u: goto label_325170;
        case 0x325174u: goto label_325174;
        case 0x325178u: goto label_325178;
        case 0x32517cu: goto label_32517c;
        case 0x325180u: goto label_325180;
        case 0x325184u: goto label_325184;
        case 0x325188u: goto label_325188;
        case 0x32518cu: goto label_32518c;
        case 0x325190u: goto label_325190;
        case 0x325194u: goto label_325194;
        case 0x325198u: goto label_325198;
        case 0x32519cu: goto label_32519c;
        case 0x3251a0u: goto label_3251a0;
        case 0x3251a4u: goto label_3251a4;
        case 0x3251a8u: goto label_3251a8;
        case 0x3251acu: goto label_3251ac;
        case 0x3251b0u: goto label_3251b0;
        case 0x3251b4u: goto label_3251b4;
        case 0x3251b8u: goto label_3251b8;
        case 0x3251bcu: goto label_3251bc;
        case 0x3251c0u: goto label_3251c0;
        case 0x3251c4u: goto label_3251c4;
        case 0x3251c8u: goto label_3251c8;
        case 0x3251ccu: goto label_3251cc;
        case 0x3251d0u: goto label_3251d0;
        case 0x3251d4u: goto label_3251d4;
        case 0x3251d8u: goto label_3251d8;
        case 0x3251dcu: goto label_3251dc;
        case 0x3251e0u: goto label_3251e0;
        case 0x3251e4u: goto label_3251e4;
        case 0x3251e8u: goto label_3251e8;
        case 0x3251ecu: goto label_3251ec;
        case 0x3251f0u: goto label_3251f0;
        case 0x3251f4u: goto label_3251f4;
        case 0x3251f8u: goto label_3251f8;
        case 0x3251fcu: goto label_3251fc;
        case 0x325200u: goto label_325200;
        case 0x325204u: goto label_325204;
        case 0x325208u: goto label_325208;
        case 0x32520cu: goto label_32520c;
        case 0x325210u: goto label_325210;
        case 0x325214u: goto label_325214;
        case 0x325218u: goto label_325218;
        case 0x32521cu: goto label_32521c;
        case 0x325220u: goto label_325220;
        case 0x325224u: goto label_325224;
        case 0x325228u: goto label_325228;
        case 0x32522cu: goto label_32522c;
        case 0x325230u: goto label_325230;
        case 0x325234u: goto label_325234;
        case 0x325238u: goto label_325238;
        case 0x32523cu: goto label_32523c;
        case 0x325240u: goto label_325240;
        case 0x325244u: goto label_325244;
        case 0x325248u: goto label_325248;
        case 0x32524cu: goto label_32524c;
        case 0x325250u: goto label_325250;
        case 0x325254u: goto label_325254;
        case 0x325258u: goto label_325258;
        case 0x32525cu: goto label_32525c;
        case 0x325260u: goto label_325260;
        case 0x325264u: goto label_325264;
        case 0x325268u: goto label_325268;
        case 0x32526cu: goto label_32526c;
        case 0x325270u: goto label_325270;
        case 0x325274u: goto label_325274;
        case 0x325278u: goto label_325278;
        case 0x32527cu: goto label_32527c;
        case 0x325280u: goto label_325280;
        case 0x325284u: goto label_325284;
        case 0x325288u: goto label_325288;
        case 0x32528cu: goto label_32528c;
        case 0x325290u: goto label_325290;
        case 0x325294u: goto label_325294;
        case 0x325298u: goto label_325298;
        case 0x32529cu: goto label_32529c;
        case 0x3252a0u: goto label_3252a0;
        case 0x3252a4u: goto label_3252a4;
        case 0x3252a8u: goto label_3252a8;
        case 0x3252acu: goto label_3252ac;
        case 0x3252b0u: goto label_3252b0;
        case 0x3252b4u: goto label_3252b4;
        case 0x3252b8u: goto label_3252b8;
        case 0x3252bcu: goto label_3252bc;
        case 0x3252c0u: goto label_3252c0;
        case 0x3252c4u: goto label_3252c4;
        case 0x3252c8u: goto label_3252c8;
        case 0x3252ccu: goto label_3252cc;
        case 0x3252d0u: goto label_3252d0;
        case 0x3252d4u: goto label_3252d4;
        case 0x3252d8u: goto label_3252d8;
        case 0x3252dcu: goto label_3252dc;
        case 0x3252e0u: goto label_3252e0;
        case 0x3252e4u: goto label_3252e4;
        case 0x3252e8u: goto label_3252e8;
        case 0x3252ecu: goto label_3252ec;
        case 0x3252f0u: goto label_3252f0;
        case 0x3252f4u: goto label_3252f4;
        case 0x3252f8u: goto label_3252f8;
        case 0x3252fcu: goto label_3252fc;
        case 0x325300u: goto label_325300;
        case 0x325304u: goto label_325304;
        case 0x325308u: goto label_325308;
        case 0x32530cu: goto label_32530c;
        case 0x325310u: goto label_325310;
        case 0x325314u: goto label_325314;
        case 0x325318u: goto label_325318;
        case 0x32531cu: goto label_32531c;
        case 0x325320u: goto label_325320;
        case 0x325324u: goto label_325324;
        case 0x325328u: goto label_325328;
        case 0x32532cu: goto label_32532c;
        case 0x325330u: goto label_325330;
        case 0x325334u: goto label_325334;
        case 0x325338u: goto label_325338;
        case 0x32533cu: goto label_32533c;
        case 0x325340u: goto label_325340;
        case 0x325344u: goto label_325344;
        case 0x325348u: goto label_325348;
        case 0x32534cu: goto label_32534c;
        case 0x325350u: goto label_325350;
        case 0x325354u: goto label_325354;
        case 0x325358u: goto label_325358;
        case 0x32535cu: goto label_32535c;
        case 0x325360u: goto label_325360;
        case 0x325364u: goto label_325364;
        case 0x325368u: goto label_325368;
        case 0x32536cu: goto label_32536c;
        case 0x325370u: goto label_325370;
        case 0x325374u: goto label_325374;
        case 0x325378u: goto label_325378;
        case 0x32537cu: goto label_32537c;
        case 0x325380u: goto label_325380;
        case 0x325384u: goto label_325384;
        case 0x325388u: goto label_325388;
        case 0x32538cu: goto label_32538c;
        case 0x325390u: goto label_325390;
        case 0x325394u: goto label_325394;
        case 0x325398u: goto label_325398;
        case 0x32539cu: goto label_32539c;
        case 0x3253a0u: goto label_3253a0;
        case 0x3253a4u: goto label_3253a4;
        case 0x3253a8u: goto label_3253a8;
        case 0x3253acu: goto label_3253ac;
        case 0x3253b0u: goto label_3253b0;
        case 0x3253b4u: goto label_3253b4;
        case 0x3253b8u: goto label_3253b8;
        case 0x3253bcu: goto label_3253bc;
        case 0x3253c0u: goto label_3253c0;
        case 0x3253c4u: goto label_3253c4;
        case 0x3253c8u: goto label_3253c8;
        case 0x3253ccu: goto label_3253cc;
        case 0x3253d0u: goto label_3253d0;
        case 0x3253d4u: goto label_3253d4;
        case 0x3253d8u: goto label_3253d8;
        case 0x3253dcu: goto label_3253dc;
        case 0x3253e0u: goto label_3253e0;
        case 0x3253e4u: goto label_3253e4;
        case 0x3253e8u: goto label_3253e8;
        case 0x3253ecu: goto label_3253ec;
        case 0x3253f0u: goto label_3253f0;
        case 0x3253f4u: goto label_3253f4;
        case 0x3253f8u: goto label_3253f8;
        case 0x3253fcu: goto label_3253fc;
        case 0x325400u: goto label_325400;
        case 0x325404u: goto label_325404;
        case 0x325408u: goto label_325408;
        case 0x32540cu: goto label_32540c;
        case 0x325410u: goto label_325410;
        case 0x325414u: goto label_325414;
        case 0x325418u: goto label_325418;
        case 0x32541cu: goto label_32541c;
        case 0x325420u: goto label_325420;
        case 0x325424u: goto label_325424;
        case 0x325428u: goto label_325428;
        case 0x32542cu: goto label_32542c;
        case 0x325430u: goto label_325430;
        case 0x325434u: goto label_325434;
        case 0x325438u: goto label_325438;
        case 0x32543cu: goto label_32543c;
        case 0x325440u: goto label_325440;
        case 0x325444u: goto label_325444;
        case 0x325448u: goto label_325448;
        case 0x32544cu: goto label_32544c;
        case 0x325450u: goto label_325450;
        case 0x325454u: goto label_325454;
        case 0x325458u: goto label_325458;
        case 0x32545cu: goto label_32545c;
        case 0x325460u: goto label_325460;
        case 0x325464u: goto label_325464;
        case 0x325468u: goto label_325468;
        case 0x32546cu: goto label_32546c;
        case 0x325470u: goto label_325470;
        case 0x325474u: goto label_325474;
        case 0x325478u: goto label_325478;
        case 0x32547cu: goto label_32547c;
        case 0x325480u: goto label_325480;
        case 0x325484u: goto label_325484;
        case 0x325488u: goto label_325488;
        case 0x32548cu: goto label_32548c;
        case 0x325490u: goto label_325490;
        case 0x325494u: goto label_325494;
        case 0x325498u: goto label_325498;
        case 0x32549cu: goto label_32549c;
        case 0x3254a0u: goto label_3254a0;
        case 0x3254a4u: goto label_3254a4;
        case 0x3254a8u: goto label_3254a8;
        case 0x3254acu: goto label_3254ac;
        case 0x3254b0u: goto label_3254b0;
        case 0x3254b4u: goto label_3254b4;
        case 0x3254b8u: goto label_3254b8;
        case 0x3254bcu: goto label_3254bc;
        case 0x3254c0u: goto label_3254c0;
        case 0x3254c4u: goto label_3254c4;
        case 0x3254c8u: goto label_3254c8;
        case 0x3254ccu: goto label_3254cc;
        case 0x3254d0u: goto label_3254d0;
        case 0x3254d4u: goto label_3254d4;
        case 0x3254d8u: goto label_3254d8;
        case 0x3254dcu: goto label_3254dc;
        case 0x3254e0u: goto label_3254e0;
        case 0x3254e4u: goto label_3254e4;
        case 0x3254e8u: goto label_3254e8;
        case 0x3254ecu: goto label_3254ec;
        case 0x3254f0u: goto label_3254f0;
        case 0x3254f4u: goto label_3254f4;
        case 0x3254f8u: goto label_3254f8;
        case 0x3254fcu: goto label_3254fc;
        case 0x325500u: goto label_325500;
        case 0x325504u: goto label_325504;
        case 0x325508u: goto label_325508;
        case 0x32550cu: goto label_32550c;
        case 0x325510u: goto label_325510;
        case 0x325514u: goto label_325514;
        case 0x325518u: goto label_325518;
        case 0x32551cu: goto label_32551c;
        case 0x325520u: goto label_325520;
        case 0x325524u: goto label_325524;
        case 0x325528u: goto label_325528;
        case 0x32552cu: goto label_32552c;
        case 0x325530u: goto label_325530;
        case 0x325534u: goto label_325534;
        case 0x325538u: goto label_325538;
        case 0x32553cu: goto label_32553c;
        case 0x325540u: goto label_325540;
        case 0x325544u: goto label_325544;
        case 0x325548u: goto label_325548;
        case 0x32554cu: goto label_32554c;
        case 0x325550u: goto label_325550;
        case 0x325554u: goto label_325554;
        case 0x325558u: goto label_325558;
        case 0x32555cu: goto label_32555c;
        case 0x325560u: goto label_325560;
        case 0x325564u: goto label_325564;
        case 0x325568u: goto label_325568;
        case 0x32556cu: goto label_32556c;
        case 0x325570u: goto label_325570;
        case 0x325574u: goto label_325574;
        case 0x325578u: goto label_325578;
        case 0x32557cu: goto label_32557c;
        case 0x325580u: goto label_325580;
        case 0x325584u: goto label_325584;
        case 0x325588u: goto label_325588;
        case 0x32558cu: goto label_32558c;
        case 0x325590u: goto label_325590;
        case 0x325594u: goto label_325594;
        case 0x325598u: goto label_325598;
        case 0x32559cu: goto label_32559c;
        case 0x3255a0u: goto label_3255a0;
        case 0x3255a4u: goto label_3255a4;
        case 0x3255a8u: goto label_3255a8;
        case 0x3255acu: goto label_3255ac;
        case 0x3255b0u: goto label_3255b0;
        case 0x3255b4u: goto label_3255b4;
        case 0x3255b8u: goto label_3255b8;
        case 0x3255bcu: goto label_3255bc;
        case 0x3255c0u: goto label_3255c0;
        case 0x3255c4u: goto label_3255c4;
        case 0x3255c8u: goto label_3255c8;
        case 0x3255ccu: goto label_3255cc;
        case 0x3255d0u: goto label_3255d0;
        case 0x3255d4u: goto label_3255d4;
        case 0x3255d8u: goto label_3255d8;
        case 0x3255dcu: goto label_3255dc;
        case 0x3255e0u: goto label_3255e0;
        case 0x3255e4u: goto label_3255e4;
        case 0x3255e8u: goto label_3255e8;
        case 0x3255ecu: goto label_3255ec;
        case 0x3255f0u: goto label_3255f0;
        case 0x3255f4u: goto label_3255f4;
        case 0x3255f8u: goto label_3255f8;
        case 0x3255fcu: goto label_3255fc;
        case 0x325600u: goto label_325600;
        case 0x325604u: goto label_325604;
        case 0x325608u: goto label_325608;
        case 0x32560cu: goto label_32560c;
        case 0x325610u: goto label_325610;
        case 0x325614u: goto label_325614;
        case 0x325618u: goto label_325618;
        case 0x32561cu: goto label_32561c;
        case 0x325620u: goto label_325620;
        case 0x325624u: goto label_325624;
        case 0x325628u: goto label_325628;
        case 0x32562cu: goto label_32562c;
        case 0x325630u: goto label_325630;
        case 0x325634u: goto label_325634;
        case 0x325638u: goto label_325638;
        case 0x32563cu: goto label_32563c;
        case 0x325640u: goto label_325640;
        case 0x325644u: goto label_325644;
        case 0x325648u: goto label_325648;
        case 0x32564cu: goto label_32564c;
        case 0x325650u: goto label_325650;
        case 0x325654u: goto label_325654;
        case 0x325658u: goto label_325658;
        case 0x32565cu: goto label_32565c;
        case 0x325660u: goto label_325660;
        case 0x325664u: goto label_325664;
        case 0x325668u: goto label_325668;
        case 0x32566cu: goto label_32566c;
        case 0x325670u: goto label_325670;
        case 0x325674u: goto label_325674;
        case 0x325678u: goto label_325678;
        case 0x32567cu: goto label_32567c;
        case 0x325680u: goto label_325680;
        case 0x325684u: goto label_325684;
        case 0x325688u: goto label_325688;
        case 0x32568cu: goto label_32568c;
        case 0x325690u: goto label_325690;
        case 0x325694u: goto label_325694;
        case 0x325698u: goto label_325698;
        case 0x32569cu: goto label_32569c;
        case 0x3256a0u: goto label_3256a0;
        case 0x3256a4u: goto label_3256a4;
        case 0x3256a8u: goto label_3256a8;
        case 0x3256acu: goto label_3256ac;
        case 0x3256b0u: goto label_3256b0;
        case 0x3256b4u: goto label_3256b4;
        case 0x3256b8u: goto label_3256b8;
        case 0x3256bcu: goto label_3256bc;
        case 0x3256c0u: goto label_3256c0;
        case 0x3256c4u: goto label_3256c4;
        case 0x3256c8u: goto label_3256c8;
        case 0x3256ccu: goto label_3256cc;
        case 0x3256d0u: goto label_3256d0;
        case 0x3256d4u: goto label_3256d4;
        case 0x3256d8u: goto label_3256d8;
        case 0x3256dcu: goto label_3256dc;
        case 0x3256e0u: goto label_3256e0;
        case 0x3256e4u: goto label_3256e4;
        case 0x3256e8u: goto label_3256e8;
        case 0x3256ecu: goto label_3256ec;
        case 0x3256f0u: goto label_3256f0;
        case 0x3256f4u: goto label_3256f4;
        case 0x3256f8u: goto label_3256f8;
        case 0x3256fcu: goto label_3256fc;
        case 0x325700u: goto label_325700;
        case 0x325704u: goto label_325704;
        case 0x325708u: goto label_325708;
        case 0x32570cu: goto label_32570c;
        case 0x325710u: goto label_325710;
        case 0x325714u: goto label_325714;
        case 0x325718u: goto label_325718;
        case 0x32571cu: goto label_32571c;
        case 0x325720u: goto label_325720;
        case 0x325724u: goto label_325724;
        case 0x325728u: goto label_325728;
        case 0x32572cu: goto label_32572c;
        case 0x325730u: goto label_325730;
        case 0x325734u: goto label_325734;
        case 0x325738u: goto label_325738;
        case 0x32573cu: goto label_32573c;
        case 0x325740u: goto label_325740;
        case 0x325744u: goto label_325744;
        case 0x325748u: goto label_325748;
        case 0x32574cu: goto label_32574c;
        case 0x325750u: goto label_325750;
        case 0x325754u: goto label_325754;
        case 0x325758u: goto label_325758;
        case 0x32575cu: goto label_32575c;
        case 0x325760u: goto label_325760;
        case 0x325764u: goto label_325764;
        case 0x325768u: goto label_325768;
        case 0x32576cu: goto label_32576c;
        case 0x325770u: goto label_325770;
        case 0x325774u: goto label_325774;
        case 0x325778u: goto label_325778;
        case 0x32577cu: goto label_32577c;
        case 0x325780u: goto label_325780;
        case 0x325784u: goto label_325784;
        case 0x325788u: goto label_325788;
        case 0x32578cu: goto label_32578c;
        case 0x325790u: goto label_325790;
        case 0x325794u: goto label_325794;
        case 0x325798u: goto label_325798;
        case 0x32579cu: goto label_32579c;
        case 0x3257a0u: goto label_3257a0;
        case 0x3257a4u: goto label_3257a4;
        case 0x3257a8u: goto label_3257a8;
        case 0x3257acu: goto label_3257ac;
        case 0x3257b0u: goto label_3257b0;
        case 0x3257b4u: goto label_3257b4;
        case 0x3257b8u: goto label_3257b8;
        case 0x3257bcu: goto label_3257bc;
        case 0x3257c0u: goto label_3257c0;
        case 0x3257c4u: goto label_3257c4;
        case 0x3257c8u: goto label_3257c8;
        case 0x3257ccu: goto label_3257cc;
        case 0x3257d0u: goto label_3257d0;
        case 0x3257d4u: goto label_3257d4;
        case 0x3257d8u: goto label_3257d8;
        case 0x3257dcu: goto label_3257dc;
        case 0x3257e0u: goto label_3257e0;
        case 0x3257e4u: goto label_3257e4;
        case 0x3257e8u: goto label_3257e8;
        case 0x3257ecu: goto label_3257ec;
        case 0x3257f0u: goto label_3257f0;
        case 0x3257f4u: goto label_3257f4;
        case 0x3257f8u: goto label_3257f8;
        case 0x3257fcu: goto label_3257fc;
        case 0x325800u: goto label_325800;
        case 0x325804u: goto label_325804;
        case 0x325808u: goto label_325808;
        case 0x32580cu: goto label_32580c;
        case 0x325810u: goto label_325810;
        case 0x325814u: goto label_325814;
        case 0x325818u: goto label_325818;
        case 0x32581cu: goto label_32581c;
        case 0x325820u: goto label_325820;
        case 0x325824u: goto label_325824;
        case 0x325828u: goto label_325828;
        case 0x32582cu: goto label_32582c;
        case 0x325830u: goto label_325830;
        case 0x325834u: goto label_325834;
        case 0x325838u: goto label_325838;
        case 0x32583cu: goto label_32583c;
        case 0x325840u: goto label_325840;
        case 0x325844u: goto label_325844;
        case 0x325848u: goto label_325848;
        case 0x32584cu: goto label_32584c;
        case 0x325850u: goto label_325850;
        case 0x325854u: goto label_325854;
        case 0x325858u: goto label_325858;
        case 0x32585cu: goto label_32585c;
        case 0x325860u: goto label_325860;
        case 0x325864u: goto label_325864;
        case 0x325868u: goto label_325868;
        case 0x32586cu: goto label_32586c;
        case 0x325870u: goto label_325870;
        case 0x325874u: goto label_325874;
        case 0x325878u: goto label_325878;
        case 0x32587cu: goto label_32587c;
        case 0x325880u: goto label_325880;
        case 0x325884u: goto label_325884;
        case 0x325888u: goto label_325888;
        case 0x32588cu: goto label_32588c;
        case 0x325890u: goto label_325890;
        case 0x325894u: goto label_325894;
        case 0x325898u: goto label_325898;
        case 0x32589cu: goto label_32589c;
        case 0x3258a0u: goto label_3258a0;
        case 0x3258a4u: goto label_3258a4;
        case 0x3258a8u: goto label_3258a8;
        case 0x3258acu: goto label_3258ac;
        case 0x3258b0u: goto label_3258b0;
        case 0x3258b4u: goto label_3258b4;
        case 0x3258b8u: goto label_3258b8;
        default: break;
    }

    ctx->pc = 0x324fb0u;

label_324fb0:
    // 0x324fb0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x324fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_324fb4:
    // 0x324fb4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x324fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_324fb8:
    // 0x324fb8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x324fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_324fbc:
    // 0x324fbc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x324fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_324fc0:
    // 0x324fc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x324fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_324fc4:
    // 0x324fc4: 0x24170020  addiu       $s7, $zero, 0x20
    ctx->pc = 0x324fc4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_324fc8:
    // 0x324fc8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x324fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_324fcc:
    // 0x324fcc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x324fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_324fd0:
    // 0x324fd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x324fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_324fd4:
    // 0x324fd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x324fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_324fd8:
    // 0x324fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x324fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_324fdc:
    // 0x324fdc: 0x27b200e0  addiu       $s2, $sp, 0xE0
    ctx->pc = 0x324fdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_324fe0:
    // 0x324fe0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x324fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_324fe4:
    // 0x324fe4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x324fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_324fe8:
    // 0x324fe8: 0xdf8382d0  ld          $v1, -0x7D30($gp)
    ctx->pc = 0x324fe8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_324fec:
    // 0x324fec: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x324fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_324ff0:
    // 0x324ff0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x324ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324ff4:
    // 0x324ff4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x324ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_324ff8:
    // 0x324ff8: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x324ff8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_324ffc:
    // 0x324ffc: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x324ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_325000:
    // 0x325000: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x325000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_325004:
    // 0x325004: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x325004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_325008:
    // 0x325008: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x325008u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_32500c:
    // 0x32500c: 0x8c35bf64  lw          $s5, -0x409C($at)
    ctx->pc = 0x32500cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950756)));
label_325010:
    // 0x325010: 0x12a00063  beqz        $s5, . + 4 + (0x63 << 2)
label_325014:
    if (ctx->pc == 0x325014u) {
        ctx->pc = 0x325014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325010u;
        // 0x325014: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325018u;
        goto label_325018;
    }
    ctx->pc = 0x325010u;
    {
        const bool branch_taken_0x325010 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x325014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325010u;
        // 0x325014: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325010) {
            ctx->pc = 0x3251A0u;
            goto label_3251a0;
        }
    }
    ctx->pc = 0x325018u;
label_325018:
    // 0x325018: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x325018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_32501c:
    // 0x32501c: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x32501cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_325020:
    // 0x325020: 0x90a40004  lbu         $a0, 0x4($a1)
    ctx->pc = 0x325020u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_325024:
    // 0x325024: 0x426bc  dsll32      $a0, $a0, 26
    ctx->pc = 0x325024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 26));
label_325028:
    // 0x325028: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_32502c:
    if (ctx->pc == 0x32502Cu) {
        ctx->pc = 0x32502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325028u;
        // 0x32502c: 0x427fe  dsrl32      $a0, $a0, 31 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325030u;
        goto label_325030;
    }
    ctx->pc = 0x325028u;
    {
        const bool branch_taken_0x325028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325028u;
        // 0x32502c: 0x427fe  dsrl32      $a0, $a0, 31 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325028) {
            ctx->pc = 0x325148u;
            goto label_325148;
        }
    }
    ctx->pc = 0x325030u;
label_325030:
    // 0x325030: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x325030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_325034:
    // 0x325034: 0x90a50008  lbu         $a1, 0x8($a1)
    ctx->pc = 0x325034u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
label_325038:
    // 0x325038: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x325038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_32503c:
    // 0x32503c: 0x246601a8  addiu       $a2, $v1, 0x1A8
    ctx->pc = 0x32503cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 424));
label_325040:
    // 0x325040: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x325040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_325044:
    // 0x325044: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x325044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_325048:
    // 0x325048: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x325048u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_32504c:
    // 0x32504c: 0x94182a  slt         $v1, $a0, $s4
    ctx->pc = 0x32504cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_325050:
    // 0x325050: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
label_325054:
    if (ctx->pc == 0x325054u) {
        ctx->pc = 0x325054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325050u;
        // 0x325054: 0x941823  subu        $v1, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325058u;
        goto label_325058;
    }
    ctx->pc = 0x325050u;
    {
        const bool branch_taken_0x325050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x325054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325050u;
        // 0x325054: 0x941823  subu        $v1, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325050) {
            ctx->pc = 0x325120u;
            goto label_325120;
        }
    }
    ctx->pc = 0x325058u;
label_325058:
    // 0x325058: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x325058u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_32505c:
    // 0x32505c: 0x92a3002e  lbu         $v1, 0x2E($s5)
    ctx->pc = 0x32505cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 46)));
label_325060:
    // 0x325060: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_325064:
    if (ctx->pc == 0x325064u) {
        ctx->pc = 0x325068u;
        goto label_325068;
    }
    ctx->pc = 0x325060u;
    {
        const bool branch_taken_0x325060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x325060) {
            ctx->pc = 0x3250A8u;
            goto label_3250a8;
        }
    }
    ctx->pc = 0x325068u;
label_325068:
    // 0x325068: 0x92a20032  lbu         $v0, 0x32($s5)
    ctx->pc = 0x325068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 50)));
label_32506c:
    // 0x32506c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x32506cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_325070:
    // 0x325070: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x325070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_325074:
    // 0x325074: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x325074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_325078:
    // 0x325078: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x325078u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_32507c:
    // 0x32507c: 0x8c22ada8  lw          $v0, -0x5258($at)
    ctx->pc = 0x32507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946216)));
label_325080:
    // 0x325080: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_325084:
    if (ctx->pc == 0x325084u) {
        ctx->pc = 0x325084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325080u;
        // 0x325084: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325088u;
        goto label_325088;
    }
    ctx->pc = 0x325080u;
    {
        const bool branch_taken_0x325080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325080u;
        // 0x325084: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325080) {
            ctx->pc = 0x325090u;
            goto label_325090;
        }
    }
    ctx->pc = 0x325088u;
label_325088:
    // 0x325088: 0x40f809  jalr        $v0
label_32508c:
    if (ctx->pc == 0x32508Cu) {
        ctx->pc = 0x32508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325088u;
        // 0x32508c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325090u;
        goto label_325090;
    }
    ctx->pc = 0x325088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x325090u);
        ctx->pc = 0x32508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325088u;
        // 0x32508c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325088u, 0x325090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x325090u;
label_325090:
    // 0x325090: 0x8eb6000c  lw          $s6, 0xC($s5)
    ctx->pc = 0x325090u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_325094:
    // 0x325094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_325098:
    // 0x325098: 0xc0c8fb4  jal         func_323ED0
label_32509c:
    if (ctx->pc == 0x32509Cu) {
        ctx->pc = 0x32509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325098u;
        // 0x32509c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3250A0u;
        goto label_3250a0;
    }
    ctx->pc = 0x325098u;
    SET_GPR_U32(ctx, 31, 0x3250A0u);
    ctx->pc = 0x32509Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325098u;
    // 0x32509c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323ED0u, 0x325098u, 0x3250A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3250A0u;
label_3250a0:
    // 0x3250a0: 0xaeb6000c  sw          $s6, 0xC($s5)
    ctx->pc = 0x3250a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 22));
label_3250a4:
    // 0x3250a4: 0x0  nop
    ctx->pc = 0x3250a4u;
    // NOP
label_3250a8:
    // 0x3250a8: 0xa2b4002e  sb          $s4, 0x2E($s5)
    ctx->pc = 0x3250a8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 46), (uint8_t)GPR_U32(ctx, 20));
label_3250ac:
    // 0x3250ac: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x3250acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_3250b0:
    // 0x3250b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3250b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_3250b4:
    // 0x3250b4: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x3250b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3250b8:
    // 0x3250b8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3250b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3250bc:
    // 0x3250bc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3250bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_3250c0:
    // 0x3250c0: 0x90630007  lbu         $v1, 0x7($v1)
    ctx->pc = 0x3250c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
label_3250c4:
    // 0x3250c4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x3250c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_3250c8:
    // 0x3250c8: 0xa2a30032  sb          $v1, 0x32($s5)
    ctx->pc = 0x3250c8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 50), (uint8_t)GPR_U32(ctx, 3));
label_3250cc:
    // 0x3250cc: 0x92a30032  lbu         $v1, 0x32($s5)
    ctx->pc = 0x3250ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 50)));
label_3250d0:
    // 0x3250d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3250d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3250d4:
    // 0x3250d4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3250d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_3250d8:
    // 0x3250d8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x3250d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_3250dc:
    // 0x3250dc: 0x8c23ada8  lw          $v1, -0x5258($at)
    ctx->pc = 0x3250dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946216)));
label_3250e0:
    // 0x3250e0: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_3250e4:
    if (ctx->pc == 0x3250E4u) {
        ctx->pc = 0x3250E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250E0u;
        // 0x3250e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3250E8u;
        goto label_3250e8;
    }
    ctx->pc = 0x3250E0u;
    {
        const bool branch_taken_0x3250e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3250E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250E0u;
        // 0x3250e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3250e0) {
            ctx->pc = 0x325190u;
            goto label_325190;
        }
    }
    ctx->pc = 0x3250E8u;
label_3250e8:
    // 0x3250e8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x3250e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_3250ec:
    // 0x3250ec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3250ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_3250f0:
    // 0x3250f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3250f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3250f4:
    // 0x3250f4: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x3250f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3250f8:
    // 0x3250f8: 0xaea20040  sw          $v0, 0x40($s5)
    ctx->pc = 0x3250f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 2));
label_3250fc:
    // 0x3250fc: 0x92a20032  lbu         $v0, 0x32($s5)
    ctx->pc = 0x3250fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 50)));
label_325100:
    // 0x325100: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x325100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_325104:
    // 0x325104: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x325104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_325108:
    // 0x325108: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x325108u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_32510c:
    // 0x32510c: 0x8c22ada8  lw          $v0, -0x5258($at)
    ctx->pc = 0x32510cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946216)));
label_325110:
    // 0x325110: 0x40f809  jalr        $v0
label_325114:
    if (ctx->pc == 0x325114u) {
        ctx->pc = 0x325114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325110u;
        // 0x325114: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325118u;
        goto label_325118;
    }
    ctx->pc = 0x325110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x325118u);
        ctx->pc = 0x325114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325110u;
        // 0x325114: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325110u, 0x325118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x325118u;
label_325118:
    // 0x325118: 0x1000001d  b           . + 4 + (0x1D << 2)
label_32511c:
    if (ctx->pc == 0x32511Cu) {
        ctx->pc = 0x325120u;
        goto label_325120;
    }
    ctx->pc = 0x325118u;
    {
        const bool branch_taken_0x325118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325118) {
            ctx->pc = 0x325190u;
            goto label_325190;
        }
    }
    ctx->pc = 0x325120u;
label_325120:
    // 0x325120: 0x92a2002c  lbu         $v0, 0x2C($s5)
    ctx->pc = 0x325120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 44)));
label_325124:
    // 0x325124: 0x3401ae60  ori         $at, $zero, 0xAE60
    ctx->pc = 0x325124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44640);
label_325128:
    // 0x325128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32512c:
    // 0x32512c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x32512cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_325130:
    // 0x325130: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x325130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_325134:
    // 0x325134: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x325134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_325138:
    // 0x325138: 0xc0c9000  jal         func_324000
label_32513c:
    if (ctx->pc == 0x32513Cu) {
        ctx->pc = 0x32513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325138u;
        // 0x32513c: 0x413021  addu        $a2, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325140u;
        goto label_325140;
    }
    ctx->pc = 0x325138u;
    SET_GPR_U32(ctx, 31, 0x325140u);
    ctx->pc = 0x32513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325138u;
    // 0x32513c: 0x413021  addu        $a2, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324000u, 0x325138u, 0x325140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325140u;
label_325140:
    // 0x325140: 0x10000013  b           . + 4 + (0x13 << 2)
label_325144:
    if (ctx->pc == 0x325144u) {
        ctx->pc = 0x325144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325140u;
        // 0x325144: 0xaea00010  sw          $zero, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325148u;
        goto label_325148;
    }
    ctx->pc = 0x325140u;
    {
        const bool branch_taken_0x325140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325140u;
        // 0x325144: 0xaea00010  sw          $zero, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325140) {
            ctx->pc = 0x325190u;
            goto label_325190;
        }
    }
    ctx->pc = 0x325148u;
label_325148:
    // 0x325148: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x325148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_32514c:
    // 0x32514c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x32514cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_325150:
    // 0x325150: 0x92a4002e  lbu         $a0, 0x2E($s5)
    ctx->pc = 0x325150u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 46)));
label_325154:
    // 0x325154: 0x244501a8  addiu       $a1, $v0, 0x1A8
    ctx->pc = 0x325154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 424));
label_325158:
    // 0x325158: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x325158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_32515c:
    // 0x32515c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x32515cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_325160:
    // 0x325160: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_325164:
    if (ctx->pc == 0x325164u) {
        ctx->pc = 0x325164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325160u;
        // 0x325164: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325168u;
        goto label_325168;
    }
    ctx->pc = 0x325160u;
    {
        const bool branch_taken_0x325160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325160u;
        // 0x325164: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325160) {
            ctx->pc = 0x325180u;
            goto label_325180;
        }
    }
    ctx->pc = 0x325168u;
label_325168:
    // 0x325168: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x325168u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_32516c:
    // 0x32516c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32516cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_325170:
    // 0x325170: 0xc0c92fc  jal         func_324BF0
label_325174:
    if (ctx->pc == 0x325174u) {
        ctx->pc = 0x325174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325170u;
        // 0x325174: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325178u;
        goto label_325178;
    }
    ctx->pc = 0x325170u;
    SET_GPR_U32(ctx, 31, 0x325178u);
    ctx->pc = 0x325174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325170u;
    // 0x325174: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324BF0u, 0x325170u, 0x325178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325178u;
label_325178:
    // 0x325178: 0x10000005  b           . + 4 + (0x5 << 2)
label_32517c:
    if (ctx->pc == 0x32517Cu) {
        ctx->pc = 0x325180u;
        goto label_325180;
    }
    ctx->pc = 0x325178u;
    {
        const bool branch_taken_0x325178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325178) {
            ctx->pc = 0x325190u;
            goto label_325190;
        }
    }
    ctx->pc = 0x325180u;
label_325180:
    // 0x325180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_325184:
    // 0x325184: 0xc0c8fb4  jal         func_323ED0
label_325188:
    if (ctx->pc == 0x325188u) {
        ctx->pc = 0x325188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325184u;
        // 0x325188: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32518Cu;
        goto label_32518c;
    }
    ctx->pc = 0x325184u;
    SET_GPR_U32(ctx, 31, 0x32518Cu);
    ctx->pc = 0x325188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325184u;
    // 0x325188: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323ED0u, 0x325184u, 0x32518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32518Cu;
label_32518c:
    // 0x32518c: 0x0  nop
    ctx->pc = 0x32518cu;
    // NOP
label_325190:
    // 0x325190: 0xa2a0002f  sb          $zero, 0x2F($s5)
    ctx->pc = 0x325190u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 47), (uint8_t)GPR_U32(ctx, 0));
label_325194:
    // 0x325194: 0x8eb50008  lw          $s5, 0x8($s5)
    ctx->pc = 0x325194u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_325198:
    // 0x325198: 0x16a0ff9f  bnez        $s5, . + 4 + (-0x61 << 2)
label_32519c:
    if (ctx->pc == 0x32519Cu) {
        ctx->pc = 0x3251A0u;
        goto label_3251a0;
    }
    ctx->pc = 0x325198u;
    {
        const bool branch_taken_0x325198 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x325198) {
            ctx->pc = 0x325018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325018;
        }
    }
    ctx->pc = 0x3251A0u;
label_3251a0:
    // 0x3251a0: 0x1ee0ff95  bgtz        $s7, . + 4 + (-0x6B << 2)
label_3251a4:
    if (ctx->pc == 0x3251A4u) {
        ctx->pc = 0x3251A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251A0u;
        // 0x3251a4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3251A8u;
        goto label_3251a8;
    }
    ctx->pc = 0x3251A0u;
    {
        const bool branch_taken_0x3251a0 = (GPR_S64(ctx, 23) > 0);
        ctx->pc = 0x3251A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251A0u;
        // 0x3251a4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3251a0) {
            ctx->pc = 0x324FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324ff8;
        }
    }
    ctx->pc = 0x3251A8u;
label_3251a8:
    // 0x3251a8: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x3251a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_3251ac:
    // 0x3251ac: 0xdc23ae20  ld          $v1, -0x51E0($at)
    ctx->pc = 0x3251acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 4294946336)));
label_3251b0:
    // 0x3251b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3251b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_3251b4:
    // 0x3251b4: 0xffa300d0  sd          $v1, 0xD0($sp)
    ctx->pc = 0x3251b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 3));
label_3251b8:
    // 0x3251b8: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x3251b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_3251bc:
    // 0x3251bc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3251bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3251c0:
    // 0x3251c0: 0xdc37ae10  ld          $s7, -0x51F0($at)
    ctx->pc = 0x3251c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 1), 4294946320)));
label_3251c4:
    // 0x3251c4: 0x106001aa  beqz        $v1, . + 4 + (0x1AA << 2)
label_3251c8:
    if (ctx->pc == 0x3251C8u) {
        ctx->pc = 0x3251C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251C4u;
        // 0x3251c8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3251CCu;
        goto label_3251cc;
    }
    ctx->pc = 0x3251C4u;
    {
        const bool branch_taken_0x3251c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3251C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251C4u;
        // 0x3251c8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3251c4) {
            ctx->pc = 0x325870u;
            goto label_325870;
        }
    }
    ctx->pc = 0x3251CCu;
label_3251cc:
    // 0x3251cc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3251ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3251d0:
    // 0x3251d0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3251d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3251d4:
    // 0x3251d4: 0x245e00e0  addiu       $fp, $v0, 0xE0
    ctx->pc = 0x3251d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_3251d8:
    // 0x3251d8: 0x8fd50000  lw          $s5, 0x0($fp)
    ctx->pc = 0x3251d8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3251dc:
    // 0x3251dc: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x3251dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_3251e0:
    // 0x3251e0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3251e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3251e4:
    // 0x3251e4: 0x8eb2000c  lw          $s2, 0xC($s5)
    ctx->pc = 0x3251e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3251e8:
    // 0x3251e8: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x3251e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_3251ec:
    // 0x3251ec: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x3251ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
label_3251f0:
    // 0x3251f0: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x3251f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_3251f4:
    // 0x3251f4: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x3251f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_3251f8:
    // 0x3251f8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x3251f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3251fc:
    // 0x3251fc: 0xc0c8f9c  jal         func_323E70
label_325200:
    if (ctx->pc == 0x325200u) {
        ctx->pc = 0x325200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251FCu;
        // 0x325200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325204u;
        goto label_325204;
    }
    ctx->pc = 0x3251FCu;
    SET_GPR_U32(ctx, 31, 0x325204u);
    ctx->pc = 0x325200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3251FCu;
    // 0x325200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E70u, 0x3251FCu, 0x325204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325204u;
label_325204:
    // 0x325204: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x325204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_325208:
    // 0x325208: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x325208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
label_32520c:
    // 0x32520c: 0x24846c40  addiu       $a0, $a0, 0x6C40
    ctx->pc = 0x32520cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27712));
label_325210:
    // 0x325210: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x325210u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_325214:
    // 0x325214: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x325214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_325218:
    // 0x325218: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x325218u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_32521c:
    // 0x32521c: 0x24930020  addiu       $s3, $a0, 0x20
    ctx->pc = 0x32521cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_325220:
    // 0x325220: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x325220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_325224:
    // 0x325224: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x325224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_325228:
    // 0x325228: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x325228u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_32522c:
    // 0x32522c: 0x225a021  addu        $s4, $s1, $a1
    ctx->pc = 0x32522cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_325230:
    // 0x325230: 0x8c960008  lw          $s6, 0x8($a0)
    ctx->pc = 0x325230u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_325234:
    // 0x325234: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x325234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_325238:
    // 0x325238: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x325238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_32523c:
    // 0x32523c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32523cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_325240:
    // 0x325240: 0x642814  dsllv       $a1, $a0, $v1
    ctx->pc = 0x325240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
label_325244:
    // 0x325244: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x325244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_325248:
    // 0x325248: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x325248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32524c:
    // 0x32524c: 0xaea40018  sw          $a0, 0x18($s5)
    ctx->pc = 0x32524cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 4));
label_325250:
    // 0x325250: 0xfea50020  sd          $a1, 0x20($s5)
    ctx->pc = 0x325250u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 5));
label_325254:
    // 0x325254: 0x92440004  lbu         $a0, 0x4($s2)
    ctx->pc = 0x325254u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_325258:
    // 0x325258: 0x426bc  dsll32      $a0, $a0, 26
    ctx->pc = 0x325258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 26));
label_32525c:
    // 0x32525c: 0x427fe  dsrl32      $a0, $a0, 31
    ctx->pc = 0x32525cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 31));
label_325260:
    // 0x325260: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_325264:
    if (ctx->pc == 0x325264u) {
        ctx->pc = 0x325264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325260u;
        // 0x325264: 0x2e5b825  or          $s7, $s7, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325268u;
        goto label_325268;
    }
    ctx->pc = 0x325260u;
    {
        const bool branch_taken_0x325260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x325264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325260u;
        // 0x325264: 0x2e5b825  or          $s7, $s7, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325260) {
            ctx->pc = 0x325270u;
            goto label_325270;
        }
    }
    ctx->pc = 0x325268u;
label_325268:
    // 0x325268: 0x36d60020  ori         $s6, $s6, 0x20
    ctx->pc = 0x325268u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)32);
label_32526c:
    // 0x32526c: 0x0  nop
    ctx->pc = 0x32526cu;
    // NOP
label_325270:
    // 0x325270: 0x92440004  lbu         $a0, 0x4($s2)
    ctx->pc = 0x325270u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_325274:
    // 0x325274: 0x4267c  dsll32      $a0, $a0, 25
    ctx->pc = 0x325274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 25));
label_325278:
    // 0x325278: 0x427fe  dsrl32      $a0, $a0, 31
    ctx->pc = 0x325278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 31));
label_32527c:
    // 0x32527c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_325280:
    if (ctx->pc == 0x325280u) {
        ctx->pc = 0x325284u;
        goto label_325284;
    }
    ctx->pc = 0x32527Cu;
    {
        const bool branch_taken_0x32527c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32527c) {
            ctx->pc = 0x325288u;
            goto label_325288;
        }
    }
    ctx->pc = 0x325284u;
label_325284:
    // 0x325284: 0x36d60040  ori         $s6, $s6, 0x40
    ctx->pc = 0x325284u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)64);
label_325288:
    // 0x325288: 0x92440009  lbu         $a0, 0x9($s2)
    ctx->pc = 0x325288u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
label_32528c:
    // 0x32528c: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x32528cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_325290:
    // 0x325290: 0x427fe  dsrl32      $a0, $a0, 31
    ctx->pc = 0x325290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 31));
label_325294:
    // 0x325294: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_325298:
    if (ctx->pc == 0x325298u) {
        ctx->pc = 0x325298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325294u;
        // 0x325298: 0x2404fffb  addiu       $a0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32529Cu;
        goto label_32529c;
    }
    ctx->pc = 0x325294u;
    {
        const bool branch_taken_0x325294 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x325298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325294u;
        // 0x325298: 0x2404fffb  addiu       $a0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325294) {
            ctx->pc = 0x3252A0u;
            goto label_3252a0;
        }
    }
    ctx->pc = 0x32529Cu;
label_32529c:
    // 0x32529c: 0x2c4b024  and         $s6, $s6, $a0
    ctx->pc = 0x32529cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 4));
label_3252a0:
    // 0x3252a0: 0xae950010  sw          $s5, 0x10($s4)
    ctx->pc = 0x3252a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 21));
label_3252a4:
    // 0x3252a4: 0xa260000b  sb          $zero, 0xB($s3)
    ctx->pc = 0x3252a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11), (uint8_t)GPR_U32(ctx, 0));
label_3252a8:
    // 0x3252a8: 0xa2630007  sb          $v1, 0x7($s3)
    ctx->pc = 0x3252a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 3));
label_3252ac:
    // 0x3252ac: 0x92a30030  lbu         $v1, 0x30($s5)
    ctx->pc = 0x3252acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 48)));
label_3252b0:
    // 0x3252b0: 0xa2630008  sb          $v1, 0x8($s3)
    ctx->pc = 0x3252b0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 3));
label_3252b4:
    // 0x3252b4: 0x92430009  lbu         $v1, 0x9($s2)
    ctx->pc = 0x3252b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
label_3252b8:
    // 0x3252b8: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x3252b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_3252bc:
    // 0x3252bc: 0xa2630009  sb          $v1, 0x9($s3)
    ctx->pc = 0x3252bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 9), (uint8_t)GPR_U32(ctx, 3));
label_3252c0:
    // 0x3252c0: 0x9243000a  lbu         $v1, 0xA($s2)
    ctx->pc = 0x3252c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
label_3252c4:
    // 0x3252c4: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x3252c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_3252c8:
    // 0x3252c8: 0xa263000a  sb          $v1, 0xA($s3)
    ctx->pc = 0x3252c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 10), (uint8_t)GPR_U32(ctx, 3));
label_3252cc:
    // 0x3252cc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x3252ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3252d0:
    // 0x3252d0: 0x92440005  lbu         $a0, 0x5($s2)
    ctx->pc = 0x3252d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_3252d4:
    // 0x3252d4: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x3252d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_3252d8:
    // 0x3252d8: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_3252dc:
    if (ctx->pc == 0x3252DCu) {
        ctx->pc = 0x3252DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3252D8u;
        // 0x3252dc: 0x9063000d  lbu         $v1, 0xD($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3252E0u;
        goto label_3252e0;
    }
    ctx->pc = 0x3252D8u;
    {
        const bool branch_taken_0x3252d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3252DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3252D8u;
        // 0x3252dc: 0x9063000d  lbu         $v1, 0xD($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3252d8) {
            ctx->pc = 0x325338u;
            goto label_325338;
        }
    }
    ctx->pc = 0x3252E0u;
label_3252e0:
    // 0x3252e0: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x3252e0u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
label_3252e4:
    // 0x3252e4: 0x48272001  qmfc2.i     $a3, $vf4
    ctx->pc = 0x3252e4u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[4]));
label_3252e8:
    // 0x3252e8: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x3252e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3252ec:
    // 0x3252ec: 0x62a00  sll         $a1, $a2, 8
    ctx->pc = 0x3252ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_3252f0:
    // 0x3252f0: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x3252f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
label_3252f4:
    // 0x3252f4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3252f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3252f8:
    // 0x3252f8: 0x34846667  ori         $a0, $a0, 0x6667
    ctx->pc = 0x3252f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
label_3252fc:
    // 0x3252fc: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x3252fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_325300:
    // 0x325300: 0x537c2  srl         $a2, $a1, 31
    ctx->pc = 0x325300u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_325304:
    // 0x325304: 0x0  nop
    ctx->pc = 0x325304u;
    // NOP
label_325308:
    // 0x325308: 0x2810  mfhi        $a1
    ctx->pc = 0x325308u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_32530c:
    // 0x32530c: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x32530cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_325310:
    // 0x325310: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x325310u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_325314:
    // 0x325314: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x325314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_325318:
    // 0x325318: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x325318u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_32531c:
    // 0x32531c: 0x0  nop
    ctx->pc = 0x32531cu;
    // NOP
label_325320:
    // 0x325320: 0x0  nop
    ctx->pc = 0x325320u;
    // NOP
label_325324:
    // 0x325324: 0x2010  mfhi        $a0
    ctx->pc = 0x325324u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_325328:
    // 0x325328: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x325328u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_32532c:
    // 0x32532c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_325330:
    if (ctx->pc == 0x325330u) {
        ctx->pc = 0x325334u;
        goto label_325334;
    }
    ctx->pc = 0x32532Cu;
    {
        const bool branch_taken_0x32532c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x32532c) {
            ctx->pc = 0x325338u;
            goto label_325338;
        }
    }
    ctx->pc = 0x325334u;
label_325334:
    // 0x325334: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x325334u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_325338:
    // 0x325338: 0x32c40040  andi        $a0, $s6, 0x40
    ctx->pc = 0x325338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)64);
label_32533c:
    // 0x32533c: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
label_325340:
    if (ctx->pc == 0x325340u) {
        ctx->pc = 0x325340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32533Cu;
        // 0x325340: 0xa2a30033  sb          $v1, 0x33($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 51), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325344u;
        goto label_325344;
    }
    ctx->pc = 0x32533Cu;
    {
        const bool branch_taken_0x32533c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x325340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32533Cu;
        // 0x325340: 0xa2a30033  sb          $v1, 0x33($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 51), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32533c) {
            ctx->pc = 0x325388u;
            goto label_325388;
        }
    }
    ctx->pc = 0x325344u;
label_325344:
    // 0x325344: 0x92a5002c  lbu         $a1, 0x2C($s5)
    ctx->pc = 0x325344u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 44)));
label_325348:
    // 0x325348: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x325348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
label_32534c:
    // 0x32534c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x32534cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_325350:
    // 0x325350: 0x34848081  ori         $a0, $a0, 0x8081
    ctx->pc = 0x325350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32897);
label_325354:
    // 0x325354: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x325354u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_325358:
    // 0x325358: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x325358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_32535c:
    // 0x32535c: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x32535cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_325360:
    // 0x325360: 0x9025ae72  lbu         $a1, -0x518E($at)
    ctx->pc = 0x325360u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946418)));
label_325364:
    // 0x325364: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x325364u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_325368:
    // 0x325368: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x325368u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_32536c:
    // 0x32536c: 0x0  nop
    ctx->pc = 0x32536cu;
    // NOP
label_325370:
    // 0x325370: 0x0  nop
    ctx->pc = 0x325370u;
    // NOP
label_325374:
    // 0x325374: 0x1810  mfhi        $v1
    ctx->pc = 0x325374u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_325378:
    // 0x325378: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x325378u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_32537c:
    // 0x32537c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32537cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_325380:
    // 0x325380: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x325380u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
label_325384:
    // 0x325384: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x325384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_325388:
    // 0x325388: 0x32c40002  andi        $a0, $s6, 0x2
    ctx->pc = 0x325388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_32538c:
    // 0x32538c: 0x14800042  bnez        $a0, . + 4 + (0x42 << 2)
label_325390:
    if (ctx->pc == 0x325390u) {
        ctx->pc = 0x325390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32538Cu;
        // 0x325390: 0x32c40008  andi        $a0, $s6, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x325394u;
        goto label_325394;
    }
    ctx->pc = 0x32538Cu;
    {
        const bool branch_taken_0x32538c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x325390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32538Cu;
        // 0x325390: 0x32c40008  andi        $a0, $s6, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32538c) {
            ctx->pc = 0x325498u;
            goto label_325498;
        }
    }
    ctx->pc = 0x325394u;
label_325394:
    // 0x325394: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_325398:
    if (ctx->pc == 0x325398u) {
        ctx->pc = 0x32539Cu;
        goto label_32539c;
    }
    ctx->pc = 0x325394u;
    {
        const bool branch_taken_0x325394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x325394) {
            ctx->pc = 0x3253A8u;
            goto label_3253a8;
        }
    }
    ctx->pc = 0x32539Cu;
label_32539c:
    // 0x32539c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_3253a0:
    if (ctx->pc == 0x3253A0u) {
        ctx->pc = 0x3253A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32539Cu;
        // 0x3253a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3253A4u;
        goto label_3253a4;
    }
    ctx->pc = 0x32539Cu;
    {
        const bool branch_taken_0x32539c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3253A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32539Cu;
        // 0x3253a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32539c) {
            ctx->pc = 0x325498u;
            goto label_325498;
        }
    }
    ctx->pc = 0x3253A4u;
label_3253a4:
    // 0x3253a4: 0x0  nop
    ctx->pc = 0x3253a4u;
    // NOP
label_3253a8:
    // 0x3253a8: 0x32c40004  andi        $a0, $s6, 0x4
    ctx->pc = 0x3253a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_3253ac:
    // 0x3253ac: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_3253b0:
    if (ctx->pc == 0x3253B0u) {
        ctx->pc = 0x3253B4u;
        goto label_3253b4;
    }
    ctx->pc = 0x3253ACu;
    {
        const bool branch_taken_0x3253ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3253ac) {
            ctx->pc = 0x325408u;
            goto label_325408;
        }
    }
    ctx->pc = 0x3253B4u;
label_3253b4:
    // 0x3253b4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3253b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3253b8:
    // 0x3253b8: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x3253b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3253bc:
    // 0x3253bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3253bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3253c0:
    // 0x3253c0: 0x26a50036  addiu       $a1, $s5, 0x36
    ctx->pc = 0x3253c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 54));
label_3253c4:
    // 0x3253c4: 0x26a60028  addiu       $a2, $s5, 0x28
    ctx->pc = 0x3253c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
label_3253c8:
    // 0x3253c8: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x3253c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_3253cc:
    // 0x3253cc: 0x24470020  addiu       $a3, $v0, 0x20
    ctx->pc = 0x3253ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_3253d0:
    // 0x3253d0: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x3253d0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
label_3253d4:
    // 0x3253d4: 0x9243000a  lbu         $v1, 0xA($s2)
    ctx->pc = 0x3253d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
label_3253d8:
    // 0x3253d8: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x3253d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_3253dc:
    // 0x3253dc: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x3253dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_3253e0:
    // 0x3253e0: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x3253e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
label_3253e4:
    // 0x3253e4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3253e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_3253e8:
    // 0x3253e8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3253e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_3253ec:
    // 0x3253ec: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x3253ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
label_3253f0:
    // 0x3253f0: 0xc0c915c  jal         func_324570
label_3253f4:
    if (ctx->pc == 0x3253F4u) {
        ctx->pc = 0x3253F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3253F0u;
        // 0x3253f4: 0x624825  or          $t1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3253F8u;
        goto label_3253f8;
    }
    ctx->pc = 0x3253F0u;
    SET_GPR_U32(ctx, 31, 0x3253F8u);
    ctx->pc = 0x3253F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3253F0u;
    // 0x3253f4: 0x624825  or          $t1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324570u, 0x3253F0u, 0x3253F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3253F8u;
label_3253f8:
    // 0x3253f8: 0xa6a00036  sh          $zero, 0x36($s5)
    ctx->pc = 0x3253f8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 54), (uint16_t)GPR_U32(ctx, 0));
label_3253fc:
    // 0x3253fc: 0x10000026  b           . + 4 + (0x26 << 2)
label_325400:
    if (ctx->pc == 0x325400u) {
        ctx->pc = 0x325400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3253FCu;
        // 0x325400: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325404u;
        goto label_325404;
    }
    ctx->pc = 0x3253FCu;
    {
        const bool branch_taken_0x3253fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3253FCu;
        // 0x325400: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3253fc) {
            ctx->pc = 0x325498u;
            goto label_325498;
        }
    }
    ctx->pc = 0x325404u;
label_325404:
    // 0x325404: 0x0  nop
    ctx->pc = 0x325404u;
    // NOP
label_325408:
    // 0x325408: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x325408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_32540c:
    // 0x32540c: 0xa6a00036  sh          $zero, 0x36($s5)
    ctx->pc = 0x32540cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 54), (uint16_t)GPR_U32(ctx, 0));
label_325410:
    // 0x325410: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x325410u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_325414:
    // 0x325414: 0x8427ada4  lh          $a3, -0x525C($at)
    ctx->pc = 0x325414u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294946212)));
label_325418:
    // 0x325418: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x325418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
label_32541c:
    // 0x32541c: 0x92450006  lbu         $a1, 0x6($s2)
    ctx->pc = 0x32541cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_325420:
    // 0x325420: 0x34868081  ori         $a2, $a0, 0x8081
    ctx->pc = 0x325420u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32897);
label_325424:
    // 0x325424: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x325424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_325428:
    // 0x325428: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x325428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_32542c:
    // 0x32542c: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x32542cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
label_325430:
    // 0x325430: 0x327fe  dsrl32      $a0, $v1, 31
    ctx->pc = 0x325430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (32 + 31));
label_325434:
    // 0x325434: 0x1810  mfhi        $v1
    ctx->pc = 0x325434u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_325438:
    // 0x325438: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x325438u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_32543c:
    // 0x32543c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x32543cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_325440:
    // 0x325440: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x325440u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
label_325444:
    // 0x325444: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_325448:
    if (ctx->pc == 0x325448u) {
        ctx->pc = 0x325448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325444u;
        // 0x325448: 0x661821  addu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32544Cu;
        goto label_32544c;
    }
    ctx->pc = 0x325444u;
    {
        const bool branch_taken_0x325444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x325448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325444u;
        // 0x325448: 0x661821  addu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325444) {
            ctx->pc = 0x325468u;
            goto label_325468;
        }
    }
    ctx->pc = 0x32544Cu;
label_32544c:
    // 0x32544c: 0xa2650006  sb          $a1, 0x6($s3)
    ctx->pc = 0x32544cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6), (uint8_t)GPR_U32(ctx, 5));
label_325450:
    // 0x325450: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x325450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_325454:
    // 0x325454: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x325454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_325458:
    // 0x325458: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x325458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_32545c:
    // 0x32545c: 0x1000000e  b           . + 4 + (0xE << 2)
label_325460:
    if (ctx->pc == 0x325460u) {
        ctx->pc = 0x325460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32545Cu;
        // 0x325460: 0xafa400b0  sw          $a0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325464u;
        goto label_325464;
    }
    ctx->pc = 0x32545Cu;
    {
        const bool branch_taken_0x32545c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32545Cu;
        // 0x325460: 0xafa400b0  sw          $a0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32545c) {
            ctx->pc = 0x325498u;
            goto label_325498;
        }
    }
    ctx->pc = 0x325464u;
label_325464:
    // 0x325464: 0x0  nop
    ctx->pc = 0x325464u;
    // NOP
label_325468:
    // 0x325468: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x325468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_32546c:
    // 0x32546c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x32546cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_325470:
    // 0x325470: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x325470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_325474:
    // 0x325474: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_325478:
    if (ctx->pc == 0x325478u) {
        ctx->pc = 0x32547Cu;
        goto label_32547c;
    }
    ctx->pc = 0x325474u;
    {
        const bool branch_taken_0x325474 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x325474) {
            ctx->pc = 0x325490u;
            goto label_325490;
        }
    }
    ctx->pc = 0x32547Cu;
label_32547c:
    // 0x32547c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x32547cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_325480:
    // 0x325480: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x325480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_325484:
    // 0x325484: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x325484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_325488:
    // 0x325488: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x325488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_32548c:
    // 0x32548c: 0x0  nop
    ctx->pc = 0x32548cu;
    // NOP
label_325490:
    // 0x325490: 0xa2600006  sb          $zero, 0x6($s3)
    ctx->pc = 0x325490u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6), (uint8_t)GPR_U32(ctx, 0));
label_325494:
    // 0x325494: 0x0  nop
    ctx->pc = 0x325494u;
    // NOP
label_325498:
    // 0x325498: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x325498u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_32549c:
    // 0x32549c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x32549cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3254a0:
    // 0x3254a0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x3254a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_3254a4:
    // 0x3254a4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3254a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3254a8:
    // 0x3254a8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_3254ac:
    if (ctx->pc == 0x3254ACu) {
        ctx->pc = 0x3254ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3254A8u;
        // 0x3254ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3254B0u;
        goto label_3254b0;
    }
    ctx->pc = 0x3254A8u;
    {
        const bool branch_taken_0x3254a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3254ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3254A8u;
        // 0x3254ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3254a8) {
            ctx->pc = 0x3254D0u;
            goto label_3254d0;
        }
    }
    ctx->pc = 0x3254B0u;
label_3254b0:
    // 0x3254b0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x3254b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3254b4:
    // 0x3254b4: 0x86a50036  lh          $a1, 0x36($s5)
    ctx->pc = 0x3254b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 54)));
label_3254b8:
    // 0x3254b8: 0x90640018  lbu         $a0, 0x18($v1)
    ctx->pc = 0x3254b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_3254bc:
    // 0x3254bc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3254bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3254c0:
    // 0x3254c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3254c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3254c4:
    // 0x3254c4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3254c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3254c8:
    // 0x3254c8: 0x10000027  b           . + 4 + (0x27 << 2)
label_3254cc:
    if (ctx->pc == 0x3254CCu) {
        ctx->pc = 0x3254CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3254C8u;
        // 0x3254cc: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3254D0u;
        goto label_3254d0;
    }
    ctx->pc = 0x3254C8u;
    {
        const bool branch_taken_0x3254c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3254CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3254C8u;
        // 0x3254cc: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3254c8) {
            ctx->pc = 0x325568u;
            goto label_325568;
        }
    }
    ctx->pc = 0x3254D0u;
label_3254d0:
    // 0x3254d0: 0x32c30001  andi        $v1, $s6, 0x1
    ctx->pc = 0x3254d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_3254d4:
    // 0x3254d4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3254d8:
    if (ctx->pc == 0x3254D8u) {
        ctx->pc = 0x3254DCu;
        goto label_3254dc;
    }
    ctx->pc = 0x3254D4u;
    {
        const bool branch_taken_0x3254d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3254d4) {
            ctx->pc = 0x3254F8u;
            goto label_3254f8;
        }
    }
    ctx->pc = 0x3254DCu;
label_3254dc:
    // 0x3254dc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x3254dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3254e0:
    // 0x3254e0: 0x9064000e  lbu         $a0, 0xE($v1)
    ctx->pc = 0x3254e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
label_3254e4:
    // 0x3254e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3254e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3254e8:
    // 0x3254e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3254e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3254ec:
    // 0x3254ec: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3254f0:
    if (ctx->pc == 0x3254F0u) {
        ctx->pc = 0x3254F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3254ECu;
        // 0x3254f0: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3254F4u;
        goto label_3254f4;
    }
    ctx->pc = 0x3254ECu;
    {
        const bool branch_taken_0x3254ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3254F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3254ECu;
        // 0x3254f0: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3254ec) {
            ctx->pc = 0x325568u;
            goto label_325568;
        }
    }
    ctx->pc = 0x3254F4u;
label_3254f4:
    // 0x3254f4: 0x0  nop
    ctx->pc = 0x3254f4u;
    // NOP
label_3254f8:
    // 0x3254f8: 0x9243000b  lbu         $v1, 0xB($s2)
    ctx->pc = 0x3254f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
label_3254fc:
    // 0x3254fc: 0x9244000d  lbu         $a0, 0xD($s2)
    ctx->pc = 0x3254fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
label_325500:
    // 0x325500: 0x3068000f  andi        $t0, $v1, 0xF
    ctx->pc = 0x325500u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_325504:
    // 0x325504: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x325504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_325508:
    // 0x325508: 0x3087000f  andi        $a3, $a0, 0xF
    ctx->pc = 0x325508u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_32550c:
    // 0x32550c: 0x3373e  dsrl32      $a2, $v1, 28
    ctx->pc = 0x32550cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 28));
label_325510:
    // 0x325510: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x325510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_325514:
    // 0x325514: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x325514u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_325518:
    // 0x325518: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x325518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_32551c:
    // 0x32551c: 0x3273e  dsrl32      $a0, $v1, 28
    ctx->pc = 0x32551cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (32 + 28));
label_325520:
    // 0x325520: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x325520u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_325524:
    // 0x325524: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x325524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_325528:
    // 0x325528: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x325528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_32552c:
    // 0x32552c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32552cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_325530:
    // 0x325530: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x325530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_325534:
    // 0x325534: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x325534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_325538:
    // 0x325538: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x325538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_32553c:
    // 0x32553c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_325540:
    if (ctx->pc == 0x325540u) {
        ctx->pc = 0x325544u;
        goto label_325544;
    }
    ctx->pc = 0x32553Cu;
    {
        const bool branch_taken_0x32553c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32553c) {
            ctx->pc = 0x325568u;
            goto label_325568;
        }
    }
    ctx->pc = 0x325544u;
label_325544:
    // 0x325544: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x325544u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
label_325548:
    // 0x325548: 0x48242001  qmfc2.i     $a0, $vf4
    ctx->pc = 0x325548u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[4]));
label_32554c:
    // 0x32554c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32554cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_325550:
    // 0x325550: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x325550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_325554:
    // 0x325554: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x325554u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_325558:
    // 0x325558: 0x0  nop
    ctx->pc = 0x325558u;
    // NOP
label_32555c:
    // 0x32555c: 0x0  nop
    ctx->pc = 0x32555cu;
    // NOP
label_325560:
    // 0x325560: 0x1810  mfhi        $v1
    ctx->pc = 0x325560u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_325564:
    // 0x325564: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x325564u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_325568:
    // 0x325568: 0xa6a50034  sh          $a1, 0x34($s5)
    ctx->pc = 0x325568u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 52), (uint16_t)GPR_U32(ctx, 5));
label_32556c:
    // 0x32556c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x32556cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_325570:
    // 0x325570: 0x92a60030  lbu         $a2, 0x30($s5)
    ctx->pc = 0x325570u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 48)));
label_325574:
    // 0x325574: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x325574u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_325578:
    // 0x325578: 0x86a70036  lh          $a3, 0x36($s5)
    ctx->pc = 0x325578u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 54)));
label_32557c:
    // 0x32557c: 0xdc23ae00  ld          $v1, -0x5200($at)
    ctx->pc = 0x32557cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 4294946304)));
label_325580:
    // 0x325580: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x325580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_325584:
    // 0x325584: 0xc42014  dsllv       $a0, $a0, $a2
    ctx->pc = 0x325584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 6) & 0x3F));
label_325588:
    // 0x325588: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x325588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_32558c:
    // 0x32558c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_325590:
    if (ctx->pc == 0x325590u) {
        ctx->pc = 0x325590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32558Cu;
        // 0x325590: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325594u;
        goto label_325594;
    }
    ctx->pc = 0x32558Cu;
    {
        const bool branch_taken_0x32558c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x325590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32558Cu;
        // 0x325590: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32558c) {
            ctx->pc = 0x3255A8u;
            goto label_3255a8;
        }
    }
    ctx->pc = 0x325594u;
label_325594:
    // 0x325594: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x325594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_325598:
    // 0x325598: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x325598u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_32559c:
    // 0x32559c: 0x8c23ada0  lw          $v1, -0x5260($at)
    ctx->pc = 0x32559cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946208)));
label_3255a0:
    // 0x3255a0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3255a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3255a4:
    // 0x3255a4: 0x0  nop
    ctx->pc = 0x3255a4u;
    // NOP
label_3255a8:
    // 0x3255a8: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x3255a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_3255ac:
    // 0x3255ac: 0x34666667  ori         $a2, $v1, 0x6667
    ctx->pc = 0x3255acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_3255b0:
    // 0x3255b0: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x3255b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
label_3255b4:
    // 0x3255b4: 0xc50018  mult        $zero, $a2, $a1
    ctx->pc = 0x3255b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3255b8:
    // 0x3255b8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x3255b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3255bc:
    // 0x3255bc: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x3255bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3255c0:
    // 0x3255c0: 0x547c2  srl         $t0, $a1, 31
    ctx->pc = 0x3255c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_3255c4:
    // 0x3255c4: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x3255c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3255c8:
    // 0x3255c8: 0x31c42  srl         $v1, $v1, 17
    ctx->pc = 0x3255c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 17));
label_3255cc:
    // 0x3255cc: 0x3063002e  andi        $v1, $v1, 0x2E
    ctx->pc = 0x3255ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)46);
label_3255d0:
    // 0x3255d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3255d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3255d4:
    // 0x3255d4: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x3255d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
label_3255d8:
    // 0x3255d8: 0x3810  mfhi        $a3
    ctx->pc = 0x3255d8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_3255dc:
    // 0x3255dc: 0xa9001a  div         $zero, $a1, $t1
    ctx->pc = 0x3255dcu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3255e0:
    // 0x3255e0: 0x72883  sra         $a1, $a3, 2
    ctx->pc = 0x3255e0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 2));
label_3255e4:
    // 0x3255e4: 0x0  nop
    ctx->pc = 0x3255e4u;
    // NOP
label_3255e8:
    // 0x3255e8: 0x3810  mfhi        $a3
    ctx->pc = 0x3255e8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_3255ec:
    // 0x3255ec: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x3255ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_3255f0:
    // 0x3255f0: 0xa2650005  sb          $a1, 0x5($s3)
    ctx->pc = 0x3255f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 5));
label_3255f4:
    // 0x3255f4: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x3255f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3255f8:
    // 0x3255f8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3255f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3255fc:
    // 0x3255fc: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3255fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_325600:
    // 0x325600: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_325604:
    if (ctx->pc == 0x325604u) {
        ctx->pc = 0x325604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325600u;
        // 0x325604: 0xa2650004  sb          $a1, 0x4($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325608u;
        goto label_325608;
    }
    ctx->pc = 0x325600u;
    {
        const bool branch_taken_0x325600 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x325604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325600u;
        // 0x325604: 0xa2650004  sb          $a1, 0x4($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325600) {
            ctx->pc = 0x325610u;
            goto label_325610;
        }
    }
    ctx->pc = 0x325608u;
label_325608:
    // 0x325608: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x325608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_32560c:
    // 0x32560c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32560cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_325610:
    // 0x325610: 0x32c50004  andi        $a1, $s6, 0x4
    ctx->pc = 0x325610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_325614:
    // 0x325614: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_325618:
    if (ctx->pc == 0x325618u) {
        ctx->pc = 0x325618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325614u;
        // 0x325618: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32561Cu;
        goto label_32561c;
    }
    ctx->pc = 0x325614u;
    {
        const bool branch_taken_0x325614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x325618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325614u;
        // 0x325618: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325614) {
            ctx->pc = 0x325628u;
            goto label_325628;
        }
    }
    ctx->pc = 0x32561Cu;
label_32561c:
    // 0x32561c: 0x10000014  b           . + 4 + (0x14 << 2)
label_325620:
    if (ctx->pc == 0x325620u) {
        ctx->pc = 0x325620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32561Cu;
        // 0x325620: 0xa265000e  sb          $a1, 0xE($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 14), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325624u;
        goto label_325624;
    }
    ctx->pc = 0x32561Cu;
    {
        const bool branch_taken_0x32561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32561Cu;
        // 0x325620: 0xa265000e  sb          $a1, 0xE($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 14), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32561c) {
            ctx->pc = 0x325670u;
            goto label_325670;
        }
    }
    ctx->pc = 0x325624u;
label_325624:
    // 0x325624: 0x0  nop
    ctx->pc = 0x325624u;
    // NOP
label_325628:
    // 0x325628: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x325628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_32562c:
    // 0x32562c: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x32562cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_325630:
    // 0x325630: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x325630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_325634:
    // 0x325634: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_325638:
    if (ctx->pc == 0x325638u) {
        ctx->pc = 0x32563Cu;
        goto label_32563c;
    }
    ctx->pc = 0x325634u;
    {
        const bool branch_taken_0x325634 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x325634) {
            ctx->pc = 0x325648u;
            goto label_325648;
        }
    }
    ctx->pc = 0x32563Cu;
label_32563c:
    // 0x32563c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x32563cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_325640:
    // 0x325640: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x325640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_325644:
    // 0x325644: 0x0  nop
    ctx->pc = 0x325644u;
    // NOP
label_325648:
    // 0x325648: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x325648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_32564c:
    // 0x32564c: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x32564cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
label_325650:
    // 0x325650: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x325650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_325654:
    // 0x325654: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_325658:
    if (ctx->pc == 0x325658u) {
        ctx->pc = 0x32565Cu;
        goto label_32565c;
    }
    ctx->pc = 0x325654u;
    {
        const bool branch_taken_0x325654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x325654) {
            ctx->pc = 0x325668u;
            goto label_325668;
        }
    }
    ctx->pc = 0x32565Cu;
label_32565c:
    // 0x32565c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x32565cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_325660:
    // 0x325660: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x325660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_325664:
    // 0x325664: 0x0  nop
    ctx->pc = 0x325664u;
    // NOP
label_325668:
    // 0x325668: 0xa260000e  sb          $zero, 0xE($s3)
    ctx->pc = 0x325668u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 14), (uint8_t)GPR_U32(ctx, 0));
label_32566c:
    // 0x32566c: 0x0  nop
    ctx->pc = 0x32566cu;
    // NOP
label_325670:
    // 0x325670: 0xa263000d  sb          $v1, 0xD($s3)
    ctx->pc = 0x325670u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 13), (uint8_t)GPR_U32(ctx, 3));
label_325674:
    // 0x325674: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x325674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_325678:
    // 0x325678: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x325678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
label_32567c:
    // 0x32567c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x32567cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_325680:
    // 0x325680: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_325684:
    if (ctx->pc == 0x325684u) {
        ctx->pc = 0x325688u;
        goto label_325688;
    }
    ctx->pc = 0x325680u;
    {
        const bool branch_taken_0x325680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x325680) {
            ctx->pc = 0x325698u;
            goto label_325698;
        }
    }
    ctx->pc = 0x325688u;
label_325688:
    // 0x325688: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x325688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_32568c:
    // 0x32568c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x32568cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_325690:
    // 0x325690: 0x10000003  b           . + 4 + (0x3 << 2)
label_325694:
    if (ctx->pc == 0x325694u) {
        ctx->pc = 0x325694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325690u;
        // 0x325694: 0xa263000c  sb          $v1, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325698u;
        goto label_325698;
    }
    ctx->pc = 0x325690u;
    {
        const bool branch_taken_0x325690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325690u;
        // 0x325694: 0xa263000c  sb          $v1, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325690) {
            ctx->pc = 0x3256A0u;
            goto label_3256a0;
        }
    }
    ctx->pc = 0x325698u;
label_325698:
    // 0x325698: 0xa260000c  sb          $zero, 0xC($s3)
    ctx->pc = 0x325698u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 0));
label_32569c:
    // 0x32569c: 0x0  nop
    ctx->pc = 0x32569cu;
    // NOP
label_3256a0:
    // 0x3256a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3256a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_3256a4:
    // 0x3256a4: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x3256a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_3256a8:
    // 0x3256a8: 0xdc23adf0  ld          $v1, -0x5210($at)
    ctx->pc = 0x3256a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 4294946288)));
label_3256ac:
    // 0x3256ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3256acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3256b0:
    // 0x3256b0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_3256b4:
    if (ctx->pc == 0x3256B4u) {
        ctx->pc = 0x3256B8u;
        goto label_3256b8;
    }
    ctx->pc = 0x3256B0u;
    {
        const bool branch_taken_0x3256b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3256b0) {
            ctx->pc = 0x3256C8u;
            goto label_3256c8;
        }
    }
    ctx->pc = 0x3256B8u;
label_3256b8:
    // 0x3256b8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3256b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3256bc:
    // 0x3256bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3256bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3256c0:
    // 0x3256c0: 0xa263000e  sb          $v1, 0xE($s3)
    ctx->pc = 0x3256c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 14), (uint8_t)GPR_U32(ctx, 3));
label_3256c4:
    // 0x3256c4: 0x0  nop
    ctx->pc = 0x3256c4u;
    // NOP
label_3256c8:
    // 0x3256c8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3256c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3256cc:
    // 0x3256cc: 0xae830014  sw          $v1, 0x14($s4)
    ctx->pc = 0x3256ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
label_3256d0:
    // 0x3256d0: 0x82630004  lb          $v1, 0x4($s3)
    ctx->pc = 0x3256d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_3256d4:
    // 0x3256d4: 0xa2830018  sb          $v1, 0x18($s4)
    ctx->pc = 0x3256d4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 24), (uint8_t)GPR_U32(ctx, 3));
label_3256d8:
    // 0x3256d8: 0x82630005  lb          $v1, 0x5($s3)
    ctx->pc = 0x3256d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_3256dc:
    // 0x3256dc: 0xa2830019  sb          $v1, 0x19($s4)
    ctx->pc = 0x3256dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 25), (uint8_t)GPR_U32(ctx, 3));
label_3256e0:
    // 0x3256e0: 0x82630006  lb          $v1, 0x6($s3)
    ctx->pc = 0x3256e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_3256e4:
    // 0x3256e4: 0xa283001a  sb          $v1, 0x1A($s4)
    ctx->pc = 0x3256e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 26), (uint8_t)GPR_U32(ctx, 3));
label_3256e8:
    // 0x3256e8: 0x92630007  lbu         $v1, 0x7($s3)
    ctx->pc = 0x3256e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
label_3256ec:
    // 0x3256ec: 0xa283001b  sb          $v1, 0x1B($s4)
    ctx->pc = 0x3256ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 27), (uint8_t)GPR_U32(ctx, 3));
label_3256f0:
    // 0x3256f0: 0x92630008  lbu         $v1, 0x8($s3)
    ctx->pc = 0x3256f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
label_3256f4:
    // 0x3256f4: 0xa283001c  sb          $v1, 0x1C($s4)
    ctx->pc = 0x3256f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 28), (uint8_t)GPR_U32(ctx, 3));
label_3256f8:
    // 0x3256f8: 0x92630009  lbu         $v1, 0x9($s3)
    ctx->pc = 0x3256f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
label_3256fc:
    // 0x3256fc: 0xa283001d  sb          $v1, 0x1D($s4)
    ctx->pc = 0x3256fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 29), (uint8_t)GPR_U32(ctx, 3));
label_325700:
    // 0x325700: 0x9263000a  lbu         $v1, 0xA($s3)
    ctx->pc = 0x325700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
label_325704:
    // 0x325704: 0xa283001e  sb          $v1, 0x1E($s4)
    ctx->pc = 0x325704u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 30), (uint8_t)GPR_U32(ctx, 3));
label_325708:
    // 0x325708: 0x9263000b  lbu         $v1, 0xB($s3)
    ctx->pc = 0x325708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11)));
label_32570c:
    // 0x32570c: 0xa283001f  sb          $v1, 0x1F($s4)
    ctx->pc = 0x32570cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 31), (uint8_t)GPR_U32(ctx, 3));
label_325710:
    // 0x325710: 0x8263000c  lb          $v1, 0xC($s3)
    ctx->pc = 0x325710u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
label_325714:
    // 0x325714: 0xa2830020  sb          $v1, 0x20($s4)
    ctx->pc = 0x325714u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 32), (uint8_t)GPR_U32(ctx, 3));
label_325718:
    // 0x325718: 0x8263000d  lb          $v1, 0xD($s3)
    ctx->pc = 0x325718u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
label_32571c:
    // 0x32571c: 0xa2830021  sb          $v1, 0x21($s4)
    ctx->pc = 0x32571cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 33), (uint8_t)GPR_U32(ctx, 3));
label_325720:
    // 0x325720: 0x8263000e  lb          $v1, 0xE($s3)
    ctx->pc = 0x325720u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 14)));
label_325724:
    // 0x325724: 0xa2830022  sb          $v1, 0x22($s4)
    ctx->pc = 0x325724u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 34), (uint8_t)GPR_U32(ctx, 3));
label_325728:
    // 0x325728: 0x9263000f  lbu         $v1, 0xF($s3)
    ctx->pc = 0x325728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_32572c:
    // 0x32572c: 0xa2830023  sb          $v1, 0x23($s4)
    ctx->pc = 0x32572cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 35), (uint8_t)GPR_U32(ctx, 3));
label_325730:
    // 0x325730: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x325730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_325734:
    // 0x325734: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x325734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_325738:
    // 0x325738: 0x30720007  andi        $s2, $v1, 0x7
    ctx->pc = 0x325738u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_32573c:
    // 0x32573c: 0x12400046  beqz        $s2, . + 4 + (0x46 << 2)
label_325740:
    if (ctx->pc == 0x325740u) {
        ctx->pc = 0x325744u;
        goto label_325744;
    }
    ctx->pc = 0x32573Cu;
    {
        const bool branch_taken_0x32573c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x32573c) {
            ctx->pc = 0x325858u;
            goto label_325858;
        }
    }
    ctx->pc = 0x325744u;
label_325744:
    // 0x325744: 0x0  nop
    ctx->pc = 0x325744u;
    // NOP
label_325748:
    // 0x325748: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x325748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_32574c:
    // 0x32574c: 0xc0c8f9c  jal         func_323E70
label_325750:
    if (ctx->pc == 0x325750u) {
        ctx->pc = 0x325750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32574Cu;
        // 0x325750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325754u;
        goto label_325754;
    }
    ctx->pc = 0x32574Cu;
    SET_GPR_U32(ctx, 31, 0x325754u);
    ctx->pc = 0x325750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32574Cu;
    // 0x325750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E70u, 0x32574Cu, 0x325754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325754u;
label_325754:
    // 0x325754: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x325754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_325758:
    // 0x325758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x325758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32575c:
    // 0x32575c: 0x833814  dsllv       $a3, $v1, $a0
    ctx->pc = 0x32575cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (GPR_U32(ctx, 4) & 0x3F));
label_325760:
    // 0x325760: 0xdea60020  ld          $a2, 0x20($s5)
    ctx->pc = 0x325760u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 32)));
label_325764:
    // 0x325764: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x325764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_325768:
    // 0x325768: 0x2e7b825  or          $s7, $s7, $a3
    ctx->pc = 0x325768u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 7));
label_32576c:
    // 0x32576c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32576cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_325770:
    // 0x325770: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x325770u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_325774:
    // 0x325774: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x325774u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_325778:
    // 0x325778: 0x3c03007e  lui         $v1, 0x7E
    ctx->pc = 0x325778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)126 << 16));
label_32577c:
    // 0x32577c: 0x24636c40  addiu       $v1, $v1, 0x6C40
    ctx->pc = 0x32577cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27712));
label_325780:
    // 0x325780: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x325780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_325784:
    // 0x325784: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x325784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_325788:
    // 0x325788: 0xc72825  or          $a1, $a2, $a3
    ctx->pc = 0x325788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_32578c:
    // 0x32578c: 0xfea50020  sd          $a1, 0x20($s5)
    ctx->pc = 0x32578cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 5));
label_325790:
    // 0x325790: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x325790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_325794:
    // 0x325794: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x325794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_325798:
    // 0x325798: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x325798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32579c:
    // 0x32579c: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x32579cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3257a0:
    // 0x3257a0: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x3257a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_3257a4:
    // 0x3257a4: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x3257a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_3257a8:
    // 0x3257a8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x3257a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_3257ac:
    // 0x3257ac: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3257acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_3257b0:
    // 0x3257b0: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x3257b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3257b4:
    // 0x3257b4: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x3257b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
label_3257b8:
    // 0x3257b8: 0xc6830014  lwc1        $f3, 0x14($s4)
    ctx->pc = 0x3257b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3257bc:
    // 0x3257bc: 0xc6820018  lwc1        $f2, 0x18($s4)
    ctx->pc = 0x3257bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3257c0:
    // 0x3257c0: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x3257c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3257c4:
    // 0x3257c4: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x3257c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3257c8:
    // 0x3257c8: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x3257c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_3257cc:
    // 0x3257cc: 0xe4820018  swc1        $f2, 0x18($a0)
    ctx->pc = 0x3257ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_3257d0:
    // 0x3257d0: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x3257d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_3257d4:
    // 0x3257d4: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x3257d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_3257d8:
    // 0x3257d8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3257d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3257dc:
    // 0x3257dc: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x3257dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
label_3257e0:
    // 0x3257e0: 0x82650004  lb          $a1, 0x4($s3)
    ctx->pc = 0x3257e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_3257e4:
    // 0x3257e4: 0xa0650024  sb          $a1, 0x24($v1)
    ctx->pc = 0x3257e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 5));
label_3257e8:
    // 0x3257e8: 0x82650005  lb          $a1, 0x5($s3)
    ctx->pc = 0x3257e8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_3257ec:
    // 0x3257ec: 0xa0650025  sb          $a1, 0x25($v1)
    ctx->pc = 0x3257ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 37), (uint8_t)GPR_U32(ctx, 5));
label_3257f0:
    // 0x3257f0: 0x82650006  lb          $a1, 0x6($s3)
    ctx->pc = 0x3257f0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_3257f4:
    // 0x3257f4: 0xa0650026  sb          $a1, 0x26($v1)
    ctx->pc = 0x3257f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 38), (uint8_t)GPR_U32(ctx, 5));
label_3257f8:
    // 0x3257f8: 0x92650007  lbu         $a1, 0x7($s3)
    ctx->pc = 0x3257f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
label_3257fc:
    // 0x3257fc: 0xa0650027  sb          $a1, 0x27($v1)
    ctx->pc = 0x3257fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 39), (uint8_t)GPR_U32(ctx, 5));
label_325800:
    // 0x325800: 0x92650008  lbu         $a1, 0x8($s3)
    ctx->pc = 0x325800u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
label_325804:
    // 0x325804: 0xa0650028  sb          $a1, 0x28($v1)
    ctx->pc = 0x325804u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 5));
label_325808:
    // 0x325808: 0x92650009  lbu         $a1, 0x9($s3)
    ctx->pc = 0x325808u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
label_32580c:
    // 0x32580c: 0xa0650029  sb          $a1, 0x29($v1)
    ctx->pc = 0x32580cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 5));
label_325810:
    // 0x325810: 0x9265000a  lbu         $a1, 0xA($s3)
    ctx->pc = 0x325810u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
label_325814:
    // 0x325814: 0xa065002a  sb          $a1, 0x2A($v1)
    ctx->pc = 0x325814u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 42), (uint8_t)GPR_U32(ctx, 5));
label_325818:
    // 0x325818: 0x9265000b  lbu         $a1, 0xB($s3)
    ctx->pc = 0x325818u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11)));
label_32581c:
    // 0x32581c: 0xa065002b  sb          $a1, 0x2B($v1)
    ctx->pc = 0x32581cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 5));
label_325820:
    // 0x325820: 0x8265000c  lb          $a1, 0xC($s3)
    ctx->pc = 0x325820u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
label_325824:
    // 0x325824: 0xa065002c  sb          $a1, 0x2C($v1)
    ctx->pc = 0x325824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 5));
label_325828:
    // 0x325828: 0x8265000d  lb          $a1, 0xD($s3)
    ctx->pc = 0x325828u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
label_32582c:
    // 0x32582c: 0xa065002d  sb          $a1, 0x2D($v1)
    ctx->pc = 0x32582cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 5));
label_325830:
    // 0x325830: 0x8265000e  lb          $a1, 0xE($s3)
    ctx->pc = 0x325830u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 14)));
label_325834:
    // 0x325834: 0xa065002e  sb          $a1, 0x2E($v1)
    ctx->pc = 0x325834u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 5));
label_325838:
    // 0x325838: 0x9265000f  lbu         $a1, 0xF($s3)
    ctx->pc = 0x325838u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_32583c:
    // 0x32583c: 0xa065002f  sb          $a1, 0x2F($v1)
    ctx->pc = 0x32583cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 47), (uint8_t)GPR_U32(ctx, 5));
label_325840:
    // 0x325840: 0xa072002b  sb          $s2, 0x2B($v1)
    ctx->pc = 0x325840u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 18));
label_325844:
    // 0x325844: 0xa092001f  sb          $s2, 0x1F($a0)
    ctx->pc = 0x325844u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 18));
label_325848:
    // 0x325848: 0xa0620027  sb          $v0, 0x27($v1)
    ctx->pc = 0x325848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 39), (uint8_t)GPR_U32(ctx, 2));
label_32584c:
    // 0x32584c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x32584cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_325850:
    // 0x325850: 0x1640ffbd  bnez        $s2, . + 4 + (-0x43 << 2)
label_325854:
    if (ctx->pc == 0x325854u) {
        ctx->pc = 0x325854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325850u;
        // 0x325854: 0xa082001b  sb          $v0, 0x1B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 27), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325858u;
        goto label_325858;
    }
    ctx->pc = 0x325850u;
    {
        const bool branch_taken_0x325850 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x325854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325850u;
        // 0x325854: 0xa082001b  sb          $v0, 0x1B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 27), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325850) {
            ctx->pc = 0x325748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325748;
        }
    }
    ctx->pc = 0x325858u;
label_325858:
    // 0x325858: 0xa2b60031  sb          $s6, 0x31($s5)
    ctx->pc = 0x325858u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 49), (uint8_t)GPR_U32(ctx, 22));
label_32585c:
    // 0x32585c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x32585cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_325860:
    // 0x325860: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x325860u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
label_325864:
    // 0x325864: 0x27defffc  addiu       $fp, $fp, -0x4
    ctx->pc = 0x325864u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
label_325868:
    // 0x325868: 0x1460fe5b  bnez        $v1, . + 4 + (-0x1A5 << 2)
label_32586c:
    if (ctx->pc == 0x32586Cu) {
        ctx->pc = 0x32586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325868u;
        // 0x32586c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325870u;
        goto label_325870;
    }
    ctx->pc = 0x325868u;
    {
        const bool branch_taken_0x325868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325868u;
        // 0x32586c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325868) {
            ctx->pc = 0x3251D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3251d8;
        }
    }
    ctx->pc = 0x325870u;
label_325870:
    // 0x325870: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x325870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_325874:
    // 0x325874: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x325874u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_325878:
    // 0x325878: 0xfc37ae10  sd          $s7, -0x51F0($at)
    ctx->pc = 0x325878u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294946320), GPR_U64(ctx, 23));
label_32587c:
    // 0x32587c: 0xdfa300d0  ld          $v1, 0xD0($sp)
    ctx->pc = 0x32587cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_325880:
    // 0x325880: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x325880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_325884:
    // 0x325884: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x325884u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_325888:
    // 0x325888: 0xfc23ae20  sd          $v1, -0x51E0($at)
    ctx->pc = 0x325888u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294946336), GPR_U64(ctx, 3));
label_32588c:
    // 0x32588c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x32588cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_325890:
    // 0x325890: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x325890u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_325894:
    // 0x325894: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x325894u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_325898:
    // 0x325898: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x325898u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32589c:
    // 0x32589c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32589cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3258a0:
    // 0x3258a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3258a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3258a4:
    // 0x3258a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3258a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3258a8:
    // 0x3258a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3258a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3258ac:
    // 0x3258ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3258acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3258b0:
    // 0x3258b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3258b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3258b4:
    // 0x3258b4: 0x3e00008  jr          $ra
label_3258b8:
    if (ctx->pc == 0x3258B8u) {
        ctx->pc = 0x3258B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258B4u;
        // 0x3258b8: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3258BCu;
        goto label_fallthrough_0x3258b4;
    }
    ctx->pc = 0x3258B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3258B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258B4u;
        // 0x3258b8: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3258B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3258b4:
    ctx->pc = 0x3258BCu;
}
