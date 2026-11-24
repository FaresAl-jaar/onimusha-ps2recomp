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

// Function: sub_00294E10
// Address: 0x294e10 - 0x295588
void sub_00294E10_0x294e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294E10_0x294e10");
#endif

    switch (ctx->pc) {
        case 0x294e10u: goto label_294e10;
        case 0x294e14u: goto label_294e14;
        case 0x294e18u: goto label_294e18;
        case 0x294e1cu: goto label_294e1c;
        case 0x294e20u: goto label_294e20;
        case 0x294e24u: goto label_294e24;
        case 0x294e28u: goto label_294e28;
        case 0x294e2cu: goto label_294e2c;
        case 0x294e30u: goto label_294e30;
        case 0x294e34u: goto label_294e34;
        case 0x294e38u: goto label_294e38;
        case 0x294e3cu: goto label_294e3c;
        case 0x294e40u: goto label_294e40;
        case 0x294e44u: goto label_294e44;
        case 0x294e48u: goto label_294e48;
        case 0x294e4cu: goto label_294e4c;
        case 0x294e50u: goto label_294e50;
        case 0x294e54u: goto label_294e54;
        case 0x294e58u: goto label_294e58;
        case 0x294e5cu: goto label_294e5c;
        case 0x294e60u: goto label_294e60;
        case 0x294e64u: goto label_294e64;
        case 0x294e68u: goto label_294e68;
        case 0x294e6cu: goto label_294e6c;
        case 0x294e70u: goto label_294e70;
        case 0x294e74u: goto label_294e74;
        case 0x294e78u: goto label_294e78;
        case 0x294e7cu: goto label_294e7c;
        case 0x294e80u: goto label_294e80;
        case 0x294e84u: goto label_294e84;
        case 0x294e88u: goto label_294e88;
        case 0x294e8cu: goto label_294e8c;
        case 0x294e90u: goto label_294e90;
        case 0x294e94u: goto label_294e94;
        case 0x294e98u: goto label_294e98;
        case 0x294e9cu: goto label_294e9c;
        case 0x294ea0u: goto label_294ea0;
        case 0x294ea4u: goto label_294ea4;
        case 0x294ea8u: goto label_294ea8;
        case 0x294eacu: goto label_294eac;
        case 0x294eb0u: goto label_294eb0;
        case 0x294eb4u: goto label_294eb4;
        case 0x294eb8u: goto label_294eb8;
        case 0x294ebcu: goto label_294ebc;
        case 0x294ec0u: goto label_294ec0;
        case 0x294ec4u: goto label_294ec4;
        case 0x294ec8u: goto label_294ec8;
        case 0x294eccu: goto label_294ecc;
        case 0x294ed0u: goto label_294ed0;
        case 0x294ed4u: goto label_294ed4;
        case 0x294ed8u: goto label_294ed8;
        case 0x294edcu: goto label_294edc;
        case 0x294ee0u: goto label_294ee0;
        case 0x294ee4u: goto label_294ee4;
        case 0x294ee8u: goto label_294ee8;
        case 0x294eecu: goto label_294eec;
        case 0x294ef0u: goto label_294ef0;
        case 0x294ef4u: goto label_294ef4;
        case 0x294ef8u: goto label_294ef8;
        case 0x294efcu: goto label_294efc;
        case 0x294f00u: goto label_294f00;
        case 0x294f04u: goto label_294f04;
        case 0x294f08u: goto label_294f08;
        case 0x294f0cu: goto label_294f0c;
        case 0x294f10u: goto label_294f10;
        case 0x294f14u: goto label_294f14;
        case 0x294f18u: goto label_294f18;
        case 0x294f1cu: goto label_294f1c;
        case 0x294f20u: goto label_294f20;
        case 0x294f24u: goto label_294f24;
        case 0x294f28u: goto label_294f28;
        case 0x294f2cu: goto label_294f2c;
        case 0x294f30u: goto label_294f30;
        case 0x294f34u: goto label_294f34;
        case 0x294f38u: goto label_294f38;
        case 0x294f3cu: goto label_294f3c;
        case 0x294f40u: goto label_294f40;
        case 0x294f44u: goto label_294f44;
        case 0x294f48u: goto label_294f48;
        case 0x294f4cu: goto label_294f4c;
        case 0x294f50u: goto label_294f50;
        case 0x294f54u: goto label_294f54;
        case 0x294f58u: goto label_294f58;
        case 0x294f5cu: goto label_294f5c;
        case 0x294f60u: goto label_294f60;
        case 0x294f64u: goto label_294f64;
        case 0x294f68u: goto label_294f68;
        case 0x294f6cu: goto label_294f6c;
        case 0x294f70u: goto label_294f70;
        case 0x294f74u: goto label_294f74;
        case 0x294f78u: goto label_294f78;
        case 0x294f7cu: goto label_294f7c;
        case 0x294f80u: goto label_294f80;
        case 0x294f84u: goto label_294f84;
        case 0x294f88u: goto label_294f88;
        case 0x294f8cu: goto label_294f8c;
        case 0x294f90u: goto label_294f90;
        case 0x294f94u: goto label_294f94;
        case 0x294f98u: goto label_294f98;
        case 0x294f9cu: goto label_294f9c;
        case 0x294fa0u: goto label_294fa0;
        case 0x294fa4u: goto label_294fa4;
        case 0x294fa8u: goto label_294fa8;
        case 0x294facu: goto label_294fac;
        case 0x294fb0u: goto label_294fb0;
        case 0x294fb4u: goto label_294fb4;
        case 0x294fb8u: goto label_294fb8;
        case 0x294fbcu: goto label_294fbc;
        case 0x294fc0u: goto label_294fc0;
        case 0x294fc4u: goto label_294fc4;
        case 0x294fc8u: goto label_294fc8;
        case 0x294fccu: goto label_294fcc;
        case 0x294fd0u: goto label_294fd0;
        case 0x294fd4u: goto label_294fd4;
        case 0x294fd8u: goto label_294fd8;
        case 0x294fdcu: goto label_294fdc;
        case 0x294fe0u: goto label_294fe0;
        case 0x294fe4u: goto label_294fe4;
        case 0x294fe8u: goto label_294fe8;
        case 0x294fecu: goto label_294fec;
        case 0x294ff0u: goto label_294ff0;
        case 0x294ff4u: goto label_294ff4;
        case 0x294ff8u: goto label_294ff8;
        case 0x294ffcu: goto label_294ffc;
        case 0x295000u: goto label_295000;
        case 0x295004u: goto label_295004;
        case 0x295008u: goto label_295008;
        case 0x29500cu: goto label_29500c;
        case 0x295010u: goto label_295010;
        case 0x295014u: goto label_295014;
        case 0x295018u: goto label_295018;
        case 0x29501cu: goto label_29501c;
        case 0x295020u: goto label_295020;
        case 0x295024u: goto label_295024;
        case 0x295028u: goto label_295028;
        case 0x29502cu: goto label_29502c;
        case 0x295030u: goto label_295030;
        case 0x295034u: goto label_295034;
        case 0x295038u: goto label_295038;
        case 0x29503cu: goto label_29503c;
        case 0x295040u: goto label_295040;
        case 0x295044u: goto label_295044;
        case 0x295048u: goto label_295048;
        case 0x29504cu: goto label_29504c;
        case 0x295050u: goto label_295050;
        case 0x295054u: goto label_295054;
        case 0x295058u: goto label_295058;
        case 0x29505cu: goto label_29505c;
        case 0x295060u: goto label_295060;
        case 0x295064u: goto label_295064;
        case 0x295068u: goto label_295068;
        case 0x29506cu: goto label_29506c;
        case 0x295070u: goto label_295070;
        case 0x295074u: goto label_295074;
        case 0x295078u: goto label_295078;
        case 0x29507cu: goto label_29507c;
        case 0x295080u: goto label_295080;
        case 0x295084u: goto label_295084;
        case 0x295088u: goto label_295088;
        case 0x29508cu: goto label_29508c;
        case 0x295090u: goto label_295090;
        case 0x295094u: goto label_295094;
        case 0x295098u: goto label_295098;
        case 0x29509cu: goto label_29509c;
        case 0x2950a0u: goto label_2950a0;
        case 0x2950a4u: goto label_2950a4;
        case 0x2950a8u: goto label_2950a8;
        case 0x2950acu: goto label_2950ac;
        case 0x2950b0u: goto label_2950b0;
        case 0x2950b4u: goto label_2950b4;
        case 0x2950b8u: goto label_2950b8;
        case 0x2950bcu: goto label_2950bc;
        case 0x2950c0u: goto label_2950c0;
        case 0x2950c4u: goto label_2950c4;
        case 0x2950c8u: goto label_2950c8;
        case 0x2950ccu: goto label_2950cc;
        case 0x2950d0u: goto label_2950d0;
        case 0x2950d4u: goto label_2950d4;
        case 0x2950d8u: goto label_2950d8;
        case 0x2950dcu: goto label_2950dc;
        case 0x2950e0u: goto label_2950e0;
        case 0x2950e4u: goto label_2950e4;
        case 0x2950e8u: goto label_2950e8;
        case 0x2950ecu: goto label_2950ec;
        case 0x2950f0u: goto label_2950f0;
        case 0x2950f4u: goto label_2950f4;
        case 0x2950f8u: goto label_2950f8;
        case 0x2950fcu: goto label_2950fc;
        case 0x295100u: goto label_295100;
        case 0x295104u: goto label_295104;
        case 0x295108u: goto label_295108;
        case 0x29510cu: goto label_29510c;
        case 0x295110u: goto label_295110;
        case 0x295114u: goto label_295114;
        case 0x295118u: goto label_295118;
        case 0x29511cu: goto label_29511c;
        case 0x295120u: goto label_295120;
        case 0x295124u: goto label_295124;
        case 0x295128u: goto label_295128;
        case 0x29512cu: goto label_29512c;
        case 0x295130u: goto label_295130;
        case 0x295134u: goto label_295134;
        case 0x295138u: goto label_295138;
        case 0x29513cu: goto label_29513c;
        case 0x295140u: goto label_295140;
        case 0x295144u: goto label_295144;
        case 0x295148u: goto label_295148;
        case 0x29514cu: goto label_29514c;
        case 0x295150u: goto label_295150;
        case 0x295154u: goto label_295154;
        case 0x295158u: goto label_295158;
        case 0x29515cu: goto label_29515c;
        case 0x295160u: goto label_295160;
        case 0x295164u: goto label_295164;
        case 0x295168u: goto label_295168;
        case 0x29516cu: goto label_29516c;
        case 0x295170u: goto label_295170;
        case 0x295174u: goto label_295174;
        case 0x295178u: goto label_295178;
        case 0x29517cu: goto label_29517c;
        case 0x295180u: goto label_295180;
        case 0x295184u: goto label_295184;
        case 0x295188u: goto label_295188;
        case 0x29518cu: goto label_29518c;
        case 0x295190u: goto label_295190;
        case 0x295194u: goto label_295194;
        case 0x295198u: goto label_295198;
        case 0x29519cu: goto label_29519c;
        case 0x2951a0u: goto label_2951a0;
        case 0x2951a4u: goto label_2951a4;
        case 0x2951a8u: goto label_2951a8;
        case 0x2951acu: goto label_2951ac;
        case 0x2951b0u: goto label_2951b0;
        case 0x2951b4u: goto label_2951b4;
        case 0x2951b8u: goto label_2951b8;
        case 0x2951bcu: goto label_2951bc;
        case 0x2951c0u: goto label_2951c0;
        case 0x2951c4u: goto label_2951c4;
        case 0x2951c8u: goto label_2951c8;
        case 0x2951ccu: goto label_2951cc;
        case 0x2951d0u: goto label_2951d0;
        case 0x2951d4u: goto label_2951d4;
        case 0x2951d8u: goto label_2951d8;
        case 0x2951dcu: goto label_2951dc;
        case 0x2951e0u: goto label_2951e0;
        case 0x2951e4u: goto label_2951e4;
        case 0x2951e8u: goto label_2951e8;
        case 0x2951ecu: goto label_2951ec;
        case 0x2951f0u: goto label_2951f0;
        case 0x2951f4u: goto label_2951f4;
        case 0x2951f8u: goto label_2951f8;
        case 0x2951fcu: goto label_2951fc;
        case 0x295200u: goto label_295200;
        case 0x295204u: goto label_295204;
        case 0x295208u: goto label_295208;
        case 0x29520cu: goto label_29520c;
        case 0x295210u: goto label_295210;
        case 0x295214u: goto label_295214;
        case 0x295218u: goto label_295218;
        case 0x29521cu: goto label_29521c;
        case 0x295220u: goto label_295220;
        case 0x295224u: goto label_295224;
        case 0x295228u: goto label_295228;
        case 0x29522cu: goto label_29522c;
        case 0x295230u: goto label_295230;
        case 0x295234u: goto label_295234;
        case 0x295238u: goto label_295238;
        case 0x29523cu: goto label_29523c;
        case 0x295240u: goto label_295240;
        case 0x295244u: goto label_295244;
        case 0x295248u: goto label_295248;
        case 0x29524cu: goto label_29524c;
        case 0x295250u: goto label_295250;
        case 0x295254u: goto label_295254;
        case 0x295258u: goto label_295258;
        case 0x29525cu: goto label_29525c;
        case 0x295260u: goto label_295260;
        case 0x295264u: goto label_295264;
        case 0x295268u: goto label_295268;
        case 0x29526cu: goto label_29526c;
        case 0x295270u: goto label_295270;
        case 0x295274u: goto label_295274;
        case 0x295278u: goto label_295278;
        case 0x29527cu: goto label_29527c;
        case 0x295280u: goto label_295280;
        case 0x295284u: goto label_295284;
        case 0x295288u: goto label_295288;
        case 0x29528cu: goto label_29528c;
        case 0x295290u: goto label_295290;
        case 0x295294u: goto label_295294;
        case 0x295298u: goto label_295298;
        case 0x29529cu: goto label_29529c;
        case 0x2952a0u: goto label_2952a0;
        case 0x2952a4u: goto label_2952a4;
        case 0x2952a8u: goto label_2952a8;
        case 0x2952acu: goto label_2952ac;
        case 0x2952b0u: goto label_2952b0;
        case 0x2952b4u: goto label_2952b4;
        case 0x2952b8u: goto label_2952b8;
        case 0x2952bcu: goto label_2952bc;
        case 0x2952c0u: goto label_2952c0;
        case 0x2952c4u: goto label_2952c4;
        case 0x2952c8u: goto label_2952c8;
        case 0x2952ccu: goto label_2952cc;
        case 0x2952d0u: goto label_2952d0;
        case 0x2952d4u: goto label_2952d4;
        case 0x2952d8u: goto label_2952d8;
        case 0x2952dcu: goto label_2952dc;
        case 0x2952e0u: goto label_2952e0;
        case 0x2952e4u: goto label_2952e4;
        case 0x2952e8u: goto label_2952e8;
        case 0x2952ecu: goto label_2952ec;
        case 0x2952f0u: goto label_2952f0;
        case 0x2952f4u: goto label_2952f4;
        case 0x2952f8u: goto label_2952f8;
        case 0x2952fcu: goto label_2952fc;
        case 0x295300u: goto label_295300;
        case 0x295304u: goto label_295304;
        case 0x295308u: goto label_295308;
        case 0x29530cu: goto label_29530c;
        case 0x295310u: goto label_295310;
        case 0x295314u: goto label_295314;
        case 0x295318u: goto label_295318;
        case 0x29531cu: goto label_29531c;
        case 0x295320u: goto label_295320;
        case 0x295324u: goto label_295324;
        case 0x295328u: goto label_295328;
        case 0x29532cu: goto label_29532c;
        case 0x295330u: goto label_295330;
        case 0x295334u: goto label_295334;
        case 0x295338u: goto label_295338;
        case 0x29533cu: goto label_29533c;
        case 0x295340u: goto label_295340;
        case 0x295344u: goto label_295344;
        case 0x295348u: goto label_295348;
        case 0x29534cu: goto label_29534c;
        case 0x295350u: goto label_295350;
        case 0x295354u: goto label_295354;
        case 0x295358u: goto label_295358;
        case 0x29535cu: goto label_29535c;
        case 0x295360u: goto label_295360;
        case 0x295364u: goto label_295364;
        case 0x295368u: goto label_295368;
        case 0x29536cu: goto label_29536c;
        case 0x295370u: goto label_295370;
        case 0x295374u: goto label_295374;
        case 0x295378u: goto label_295378;
        case 0x29537cu: goto label_29537c;
        case 0x295380u: goto label_295380;
        case 0x295384u: goto label_295384;
        case 0x295388u: goto label_295388;
        case 0x29538cu: goto label_29538c;
        case 0x295390u: goto label_295390;
        case 0x295394u: goto label_295394;
        case 0x295398u: goto label_295398;
        case 0x29539cu: goto label_29539c;
        case 0x2953a0u: goto label_2953a0;
        case 0x2953a4u: goto label_2953a4;
        case 0x2953a8u: goto label_2953a8;
        case 0x2953acu: goto label_2953ac;
        case 0x2953b0u: goto label_2953b0;
        case 0x2953b4u: goto label_2953b4;
        case 0x2953b8u: goto label_2953b8;
        case 0x2953bcu: goto label_2953bc;
        case 0x2953c0u: goto label_2953c0;
        case 0x2953c4u: goto label_2953c4;
        case 0x2953c8u: goto label_2953c8;
        case 0x2953ccu: goto label_2953cc;
        case 0x2953d0u: goto label_2953d0;
        case 0x2953d4u: goto label_2953d4;
        case 0x2953d8u: goto label_2953d8;
        case 0x2953dcu: goto label_2953dc;
        case 0x2953e0u: goto label_2953e0;
        case 0x2953e4u: goto label_2953e4;
        case 0x2953e8u: goto label_2953e8;
        case 0x2953ecu: goto label_2953ec;
        case 0x2953f0u: goto label_2953f0;
        case 0x2953f4u: goto label_2953f4;
        case 0x2953f8u: goto label_2953f8;
        case 0x2953fcu: goto label_2953fc;
        case 0x295400u: goto label_295400;
        case 0x295404u: goto label_295404;
        case 0x295408u: goto label_295408;
        case 0x29540cu: goto label_29540c;
        case 0x295410u: goto label_295410;
        case 0x295414u: goto label_295414;
        case 0x295418u: goto label_295418;
        case 0x29541cu: goto label_29541c;
        case 0x295420u: goto label_295420;
        case 0x295424u: goto label_295424;
        case 0x295428u: goto label_295428;
        case 0x29542cu: goto label_29542c;
        case 0x295430u: goto label_295430;
        case 0x295434u: goto label_295434;
        case 0x295438u: goto label_295438;
        case 0x29543cu: goto label_29543c;
        case 0x295440u: goto label_295440;
        case 0x295444u: goto label_295444;
        case 0x295448u: goto label_295448;
        case 0x29544cu: goto label_29544c;
        case 0x295450u: goto label_295450;
        case 0x295454u: goto label_295454;
        case 0x295458u: goto label_295458;
        case 0x29545cu: goto label_29545c;
        case 0x295460u: goto label_295460;
        case 0x295464u: goto label_295464;
        case 0x295468u: goto label_295468;
        case 0x29546cu: goto label_29546c;
        case 0x295470u: goto label_295470;
        case 0x295474u: goto label_295474;
        case 0x295478u: goto label_295478;
        case 0x29547cu: goto label_29547c;
        case 0x295480u: goto label_295480;
        case 0x295484u: goto label_295484;
        case 0x295488u: goto label_295488;
        case 0x29548cu: goto label_29548c;
        case 0x295490u: goto label_295490;
        case 0x295494u: goto label_295494;
        case 0x295498u: goto label_295498;
        case 0x29549cu: goto label_29549c;
        case 0x2954a0u: goto label_2954a0;
        case 0x2954a4u: goto label_2954a4;
        case 0x2954a8u: goto label_2954a8;
        case 0x2954acu: goto label_2954ac;
        case 0x2954b0u: goto label_2954b0;
        case 0x2954b4u: goto label_2954b4;
        case 0x2954b8u: goto label_2954b8;
        case 0x2954bcu: goto label_2954bc;
        case 0x2954c0u: goto label_2954c0;
        case 0x2954c4u: goto label_2954c4;
        case 0x2954c8u: goto label_2954c8;
        case 0x2954ccu: goto label_2954cc;
        case 0x2954d0u: goto label_2954d0;
        case 0x2954d4u: goto label_2954d4;
        case 0x2954d8u: goto label_2954d8;
        case 0x2954dcu: goto label_2954dc;
        case 0x2954e0u: goto label_2954e0;
        case 0x2954e4u: goto label_2954e4;
        case 0x2954e8u: goto label_2954e8;
        case 0x2954ecu: goto label_2954ec;
        case 0x2954f0u: goto label_2954f0;
        case 0x2954f4u: goto label_2954f4;
        case 0x2954f8u: goto label_2954f8;
        case 0x2954fcu: goto label_2954fc;
        case 0x295500u: goto label_295500;
        case 0x295504u: goto label_295504;
        case 0x295508u: goto label_295508;
        case 0x29550cu: goto label_29550c;
        case 0x295510u: goto label_295510;
        case 0x295514u: goto label_295514;
        case 0x295518u: goto label_295518;
        case 0x29551cu: goto label_29551c;
        case 0x295520u: goto label_295520;
        case 0x295524u: goto label_295524;
        case 0x295528u: goto label_295528;
        case 0x29552cu: goto label_29552c;
        case 0x295530u: goto label_295530;
        case 0x295534u: goto label_295534;
        case 0x295538u: goto label_295538;
        case 0x29553cu: goto label_29553c;
        case 0x295540u: goto label_295540;
        case 0x295544u: goto label_295544;
        case 0x295548u: goto label_295548;
        case 0x29554cu: goto label_29554c;
        case 0x295550u: goto label_295550;
        case 0x295554u: goto label_295554;
        case 0x295558u: goto label_295558;
        case 0x29555cu: goto label_29555c;
        case 0x295560u: goto label_295560;
        case 0x295564u: goto label_295564;
        case 0x295568u: goto label_295568;
        case 0x29556cu: goto label_29556c;
        case 0x295570u: goto label_295570;
        case 0x295574u: goto label_295574;
        case 0x295578u: goto label_295578;
        case 0x29557cu: goto label_29557c;
        case 0x295580u: goto label_295580;
        case 0x295584u: goto label_295584;
        default: break;
    }

    ctx->pc = 0x294e10u;

label_294e10:
    // 0x294e10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x294e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_294e14:
    // 0x294e14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x294e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_294e18:
    // 0x294e18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x294e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_294e1c:
    // 0x294e1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x294e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_294e20:
    // 0x294e20: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x294e20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_294e24:
    // 0x294e24: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x294e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_294e28:
    // 0x294e28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_294e2c:
    if (ctx->pc == 0x294E2Cu) {
        ctx->pc = 0x294E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E28u;
        // 0x294e2c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294E30u;
        goto label_294e30;
    }
    ctx->pc = 0x294E28u;
    {
        const bool branch_taken_0x294e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E28u;
        // 0x294e2c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294e28) {
            ctx->pc = 0x294E40u;
            goto label_294e40;
        }
    }
    ctx->pc = 0x294E30u;
label_294e30:
    // 0x294e30: 0x7a2200d0  lq          $v0, 0xD0($s1)
    ctx->pc = 0x294e30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 208)));
label_294e34:
    // 0x294e34: 0x7e220080  sq          $v0, 0x80($s1)
    ctx->pc = 0x294e34u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), GPR_VEC(ctx, 2));
label_294e38:
    // 0x294e38: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x294e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
label_294e3c:
    // 0x294e3c: 0x0  nop
    ctx->pc = 0x294e3cu;
    // NOP
label_294e40:
    // 0x294e40: 0x8e300054  lw          $s0, 0x54($s1)
    ctx->pc = 0x294e40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_294e44:
    // 0x294e44: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_294e48:
    if (ctx->pc == 0x294E48u) {
        ctx->pc = 0x294E4Cu;
        goto label_294e4c;
    }
    ctx->pc = 0x294E44u;
    {
        const bool branch_taken_0x294e44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x294e44) {
            ctx->pc = 0x294E90u;
            goto label_294e90;
        }
    }
    ctx->pc = 0x294E4Cu;
label_294e4c:
    // 0x294e4c: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x294e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_294e50:
    // 0x294e50: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x294e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_294e54:
    // 0x294e54: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x294e54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_294e58:
    // 0x294e58: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x294e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_294e5c:
    // 0x294e5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x294e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_294e60:
    // 0x294e60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_294e64:
    if (ctx->pc == 0x294E64u) {
        ctx->pc = 0x294E68u;
        goto label_294e68;
    }
    ctx->pc = 0x294E60u;
    {
        const bool branch_taken_0x294e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294e60) {
            ctx->pc = 0x294E80u;
            goto label_294e80;
        }
    }
    ctx->pc = 0x294E68u;
label_294e68:
    // 0x294e68: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x294e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_294e6c:
    // 0x294e6c: 0x2402ff8d  addiu       $v0, $zero, -0x73
    ctx->pc = 0x294e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967181));
label_294e70:
    // 0x294e70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x294e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_294e74:
    // 0x294e74: 0x10000006  b           . + 4 + (0x6 << 2)
label_294e78:
    if (ctx->pc == 0x294E78u) {
        ctx->pc = 0x294E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E74u;
        // 0x294e78: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294E7Cu;
        goto label_294e7c;
    }
    ctx->pc = 0x294E74u;
    {
        const bool branch_taken_0x294e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E74u;
        // 0x294e78: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294e74) {
            ctx->pc = 0x294E90u;
            goto label_294e90;
        }
    }
    ctx->pc = 0x294E7Cu;
label_294e7c:
    // 0x294e7c: 0x0  nop
    ctx->pc = 0x294e7cu;
    // NOP
label_294e80:
    // 0x294e80: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x294e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_294e84:
    // 0x294e84: 0x34420072  ori         $v0, $v0, 0x72
    ctx->pc = 0x294e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)114);
label_294e88:
    // 0x294e88: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x294e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_294e8c:
    // 0x294e8c: 0x0  nop
    ctx->pc = 0x294e8cu;
    // NOP
label_294e90:
    // 0x294e90: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x294e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_294e94:
    // 0x294e94: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x294e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_294e98:
    // 0x294e98: 0x92260002  lbu         $a2, 0x2($s1)
    ctx->pc = 0x294e98u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_294e9c:
    // 0x294e9c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x294e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_294ea0:
    // 0x294ea0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x294ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_294ea4:
    // 0x294ea4: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x294ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_294ea8:
    // 0x294ea8: 0x2463f388  addiu       $v1, $v1, -0xC78
    ctx->pc = 0x294ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964104));
label_294eac:
    // 0x294eac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x294eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_294eb0:
    // 0x294eb0: 0x248435a0  addiu       $a0, $a0, 0x35A0
    ctx->pc = 0x294eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13728));
label_294eb4:
    // 0x294eb4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x294eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_294eb8:
    // 0x294eb8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x294eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_294ebc:
    // 0x294ebc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x294ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_294ec0:
    // 0x294ec0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x294ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_294ec4:
    // 0x294ec4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x294ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_294ec8:
    // 0x294ec8: 0xc04f7a4  jal         func_13DE90
label_294ecc:
    if (ctx->pc == 0x294ECCu) {
        ctx->pc = 0x294ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294EC8u;
        // 0x294ecc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294ED0u;
        goto label_294ed0;
    }
    ctx->pc = 0x294EC8u;
    SET_GPR_U32(ctx, 31, 0x294ED0u);
    ctx->pc = 0x294ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294EC8u;
    // 0x294ecc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE90u, 0x294EC8u, 0x294ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294ED0u;
label_294ed0:
    // 0x294ed0: 0x8e2506c4  lw          $a1, 0x6C4($s1)
    ctx->pc = 0x294ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1732)));
label_294ed4:
    // 0x294ed4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x294ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_294ed8:
    // 0x294ed8: 0xc04e710  jal         func_139C40
label_294edc:
    if (ctx->pc == 0x294EDCu) {
        ctx->pc = 0x294EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294ED8u;
        // 0x294edc: 0x248435a0  addiu       $a0, $a0, 0x35A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294EE0u;
        goto label_294ee0;
    }
    ctx->pc = 0x294ED8u;
    SET_GPR_U32(ctx, 31, 0x294EE0u);
    ctx->pc = 0x294EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294ED8u;
    // 0x294edc: 0x248435a0  addiu       $a0, $a0, 0x35A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C40u, 0x294ED8u, 0x294EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294EE0u;
label_294ee0:
    // 0x294ee0: 0x92270002  lbu         $a3, 0x2($s1)
    ctx->pc = 0x294ee0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_294ee4:
    // 0x294ee4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x294ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_294ee8:
    // 0x294ee8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x294ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_294eec:
    // 0x294eec: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x294eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_294ef0:
    // 0x294ef0: 0x2463f380  addiu       $v1, $v1, -0xC80
    ctx->pc = 0x294ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964096));
label_294ef4:
    // 0x294ef4: 0x2442f384  addiu       $v0, $v0, -0xC7C
    ctx->pc = 0x294ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964100));
label_294ef8:
    // 0x294ef8: 0x248425d0  addiu       $a0, $a0, 0x25D0
    ctx->pc = 0x294ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9680));
label_294efc:
    // 0x294efc: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x294efcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_294f00:
    // 0x294f00: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x294f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_294f04:
    // 0x294f04: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x294f04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_294f08:
    // 0x294f08: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x294f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_294f0c:
    // 0x294f0c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x294f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_294f10:
    // 0x294f10: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x294f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_294f14:
    // 0x294f14: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x294f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_294f18:
    // 0x294f18: 0xc04f7b8  jal         func_13DEE0
label_294f1c:
    if (ctx->pc == 0x294F1Cu) {
        ctx->pc = 0x294F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F18u;
        // 0x294f1c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294F20u;
        goto label_294f20;
    }
    ctx->pc = 0x294F18u;
    SET_GPR_U32(ctx, 31, 0x294F20u);
    ctx->pc = 0x294F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294F18u;
    // 0x294f1c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DEE0u, 0x294F18u, 0x294F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294F20u;
label_294f20:
    // 0x294f20: 0x8e2228d4  lw          $v0, 0x28D4($s1)
    ctx->pc = 0x294f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10452)));
label_294f24:
    // 0x294f24: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x294f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_294f28:
    // 0x294f28: 0x248425d0  addiu       $a0, $a0, 0x25D0
    ctx->pc = 0x294f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9680));
label_294f2c:
    // 0x294f2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x294f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_294f30:
    // 0x294f30: 0xc04fae4  jal         func_13EB90
label_294f34:
    if (ctx->pc == 0x294F34u) {
        ctx->pc = 0x294F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F30u;
        // 0x294f34: 0xae2228d8  sw          $v0, 0x28D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294F38u;
        goto label_294f38;
    }
    ctx->pc = 0x294F30u;
    SET_GPR_U32(ctx, 31, 0x294F38u);
    ctx->pc = 0x294F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294F30u;
    // 0x294f34: 0xae2228d8  sw          $v0, 0x28D8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 10456), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EB90u, 0x294F30u, 0x294F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294F38u;
label_294f38:
    // 0x294f38: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x294f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294f3c:
    // 0x294f3c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x294f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_294f40:
    // 0x294f40: 0xe6200770  swc1        $f0, 0x770($s1)
    ctx->pc = 0x294f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1904), bits); }
label_294f44:
    // 0x294f44: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x294f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_294f48:
    // 0x294f48: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x294f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_294f4c:
    // 0x294f4c: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x294f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294f50:
    // 0x294f50: 0xe6200774  swc1        $f0, 0x774($s1)
    ctx->pc = 0x294f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1908), bits); }
label_294f54:
    // 0x294f54: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x294f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294f58:
    // 0x294f58: 0xe6200778  swc1        $f0, 0x778($s1)
    ctx->pc = 0x294f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1912), bits); }
label_294f5c:
    // 0x294f5c: 0x8e2406c8  lw          $a0, 0x6C8($s1)
    ctx->pc = 0x294f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
label_294f60:
    // 0x294f60: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x294f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_294f64:
    // 0x294f64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_294f68:
    if (ctx->pc == 0x294F68u) {
        ctx->pc = 0x294F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F64u;
        // 0x294f68: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294F6Cu;
        goto label_294f6c;
    }
    ctx->pc = 0x294F64u;
    {
        const bool branch_taken_0x294f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x294F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F64u;
        // 0x294f68: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f64) {
            ctx->pc = 0x294F78u;
            goto label_294f78;
        }
    }
    ctx->pc = 0x294F6Cu;
label_294f6c:
    // 0x294f6c: 0x10000004  b           . + 4 + (0x4 << 2)
label_294f70:
    if (ctx->pc == 0x294F70u) {
        ctx->pc = 0x294F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F6Cu;
        // 0x294f70: 0xae2300e8  sw          $v1, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294F74u;
        goto label_294f74;
    }
    ctx->pc = 0x294F6Cu;
    {
        const bool branch_taken_0x294f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F6Cu;
        // 0x294f70: 0xae2300e8  sw          $v1, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f6c) {
            ctx->pc = 0x294F80u;
            goto label_294f80;
        }
    }
    ctx->pc = 0x294F74u;
label_294f74:
    // 0x294f74: 0x0  nop
    ctx->pc = 0x294f74u;
    // NOP
label_294f78:
    // 0x294f78: 0xc62006c0  lwc1        $f0, 0x6C0($s1)
    ctx->pc = 0x294f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294f7c:
    // 0x294f7c: 0xe62000e8  swc1        $f0, 0xE8($s1)
    ctx->pc = 0x294f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
label_294f80:
    // 0x294f80: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x294f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_294f84:
    // 0x294f84: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x294f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_294f88:
    // 0x294f88: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_294f8c:
    if (ctx->pc == 0x294F8Cu) {
        ctx->pc = 0x294F90u;
        goto label_294f90;
    }
    ctx->pc = 0x294F88u;
    {
        const bool branch_taken_0x294f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294f88) {
            ctx->pc = 0x294FA0u;
            goto label_294fa0;
        }
    }
    ctx->pc = 0x294F90u;
label_294f90:
    // 0x294f90: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x294f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_294f94:
    // 0x294f94: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x294f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_294f98:
    // 0x294f98: 0x10000005  b           . + 4 + (0x5 << 2)
label_294f9c:
    if (ctx->pc == 0x294F9Cu) {
        ctx->pc = 0x294F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F98u;
        // 0x294f9c: 0xae2300e0  sw          $v1, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294FA0u;
        goto label_294fa0;
    }
    ctx->pc = 0x294F98u;
    {
        const bool branch_taken_0x294f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F98u;
        // 0x294f9c: 0xae2300e0  sw          $v1, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f98) {
            ctx->pc = 0x294FB0u;
            goto label_294fb0;
        }
    }
    ctx->pc = 0x294FA0u;
label_294fa0:
    // 0x294fa0: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x294fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_294fa4:
    // 0x294fa4: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x294fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_294fa8:
    // 0x294fa8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x294fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_294fac:
    // 0x294fac: 0xae2300e0  sw          $v1, 0xE0($s1)
    ctx->pc = 0x294facu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
label_294fb0:
    // 0x294fb0: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x294fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_294fb4:
    // 0x294fb4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x294fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_294fb8:
    // 0x294fb8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_294fbc:
    if (ctx->pc == 0x294FBCu) {
        ctx->pc = 0x294FC0u;
        goto label_294fc0;
    }
    ctx->pc = 0x294FB8u;
    {
        const bool branch_taken_0x294fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294fb8) {
            ctx->pc = 0x294FD0u;
            goto label_294fd0;
        }
    }
    ctx->pc = 0x294FC0u;
label_294fc0:
    // 0x294fc0: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x294fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_294fc4:
    // 0x294fc4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x294fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_294fc8:
    // 0x294fc8: 0x10000005  b           . + 4 + (0x5 << 2)
label_294fcc:
    if (ctx->pc == 0x294FCCu) {
        ctx->pc = 0x294FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FC8u;
        // 0x294fcc: 0xae2300e0  sw          $v1, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294FD0u;
        goto label_294fd0;
    }
    ctx->pc = 0x294FC8u;
    {
        const bool branch_taken_0x294fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FC8u;
        // 0x294fcc: 0xae2300e0  sw          $v1, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fc8) {
            ctx->pc = 0x294FE0u;
            goto label_294fe0;
        }
    }
    ctx->pc = 0x294FD0u;
label_294fd0:
    // 0x294fd0: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x294fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_294fd4:
    // 0x294fd4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x294fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_294fd8:
    // 0x294fd8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x294fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_294fdc:
    // 0x294fdc: 0xae2300e0  sw          $v1, 0xE0($s1)
    ctx->pc = 0x294fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
label_294fe0:
    // 0x294fe0: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x294fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_294fe4:
    // 0x294fe4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x294fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_294fe8:
    // 0x294fe8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x294fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_294fec:
    // 0x294fec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_294ff0:
    if (ctx->pc == 0x294FF0u) {
        ctx->pc = 0x294FF4u;
        goto label_294ff4;
    }
    ctx->pc = 0x294FECu;
    {
        const bool branch_taken_0x294fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294fec) {
            ctx->pc = 0x295008u;
            goto label_295008;
        }
    }
    ctx->pc = 0x294FF4u;
label_294ff4:
    // 0x294ff4: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x294ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_294ff8:
    // 0x294ff8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x294ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_294ffc:
    // 0x294ffc: 0x10000006  b           . + 4 + (0x6 << 2)
label_295000:
    if (ctx->pc == 0x295000u) {
        ctx->pc = 0x295000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FFCu;
        // 0x295000: 0xae2300e0  sw          $v1, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295004u;
        goto label_295004;
    }
    ctx->pc = 0x294FFCu;
    {
        const bool branch_taken_0x294ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FFCu;
        // 0x295000: 0xae2300e0  sw          $v1, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ffc) {
            ctx->pc = 0x295018u;
            goto label_295018;
        }
    }
    ctx->pc = 0x295004u;
label_295004:
    // 0x295004: 0x0  nop
    ctx->pc = 0x295004u;
    // NOP
label_295008:
    // 0x295008: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x295008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_29500c:
    // 0x29500c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x29500cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_295010:
    // 0x295010: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x295010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_295014:
    // 0x295014: 0xae2300e0  sw          $v1, 0xE0($s1)
    ctx->pc = 0x295014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
label_295018:
    // 0x295018: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x295018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_29501c:
    // 0x29501c: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x29501cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_295020:
    // 0x295020: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
label_295024:
    if (ctx->pc == 0x295024u) {
        ctx->pc = 0x295028u;
        goto label_295028;
    }
    ctx->pc = 0x295020u;
    {
        const bool branch_taken_0x295020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x295020) {
            ctx->pc = 0x295130u;
            goto label_295130;
        }
    }
    ctx->pc = 0x295028u;
label_295028:
    // 0x295028: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x295028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_29502c:
    // 0x29502c: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x29502cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_295030:
    // 0x295030: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_295034:
    if (ctx->pc == 0x295034u) {
        ctx->pc = 0x295038u;
        goto label_295038;
    }
    ctx->pc = 0x295030u;
    {
        const bool branch_taken_0x295030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295030) {
            ctx->pc = 0x295130u;
            goto label_295130;
        }
    }
    ctx->pc = 0x295038u;
label_295038:
    // 0x295038: 0x922a0002  lbu         $t2, 0x2($s1)
    ctx->pc = 0x295038u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_29503c:
    // 0x29503c: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x29503cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
label_295040:
    // 0x295040: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x295040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_295044:
    // 0x295044: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x295044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_295048:
    // 0x295048: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x295048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_29504c:
    // 0x29504c: 0x2508f38c  addiu       $t0, $t0, -0xC74
    ctx->pc = 0x29504cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964108));
label_295050:
    // 0x295050: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x295050u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_295054:
    // 0x295054: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x295054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_295058:
    // 0x295058: 0x2463f390  addiu       $v1, $v1, -0xC70
    ctx->pc = 0x295058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964112));
label_29505c:
    // 0x29505c: 0x2442f394  addiu       $v0, $v0, -0xC6C
    ctx->pc = 0x29505cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964116));
label_295060:
    // 0x295060: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x295060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
label_295064:
    // 0x295064: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x295064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_295068:
    // 0x295068: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x295068u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_29506c:
    // 0x29506c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29506cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295070:
    // 0x295070: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x295070u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_295074:
    // 0x295074: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x295074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_295078:
    // 0x295078: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x295078u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_29507c:
    // 0x29507c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x29507cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_295080:
    // 0x295080: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x295080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295084:
    // 0x295084: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x295084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_295088:
    // 0x295088: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x295088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_29508c:
    // 0x29508c: 0x92290002  lbu         $t1, 0x2($s1)
    ctx->pc = 0x29508cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_295090:
    // 0x295090: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x295090u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_295094:
    // 0x295094: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x295094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_295098:
    // 0x295098: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x295098u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_29509c:
    // 0x29509c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x29509cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2950a0:
    // 0x2950a0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2950a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2950a4:
    // 0x2950a4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2950a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2950a8:
    // 0x2950a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2950a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2950ac:
    // 0x2950ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2950acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2950b0:
    // 0x2950b0: 0xc0538c4  jal         func_14E310
label_2950b4:
    if (ctx->pc == 0x2950B4u) {
        ctx->pc = 0x2950B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2950B0u;
        // 0x2950b4: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2950B8u;
        goto label_2950b8;
    }
    ctx->pc = 0x2950B0u;
    SET_GPR_U32(ctx, 31, 0x2950B8u);
    ctx->pc = 0x2950B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2950B0u;
    // 0x2950b4: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E310u, 0x2950B0u, 0x2950B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2950B8u;
label_2950b8:
    // 0x2950b8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2950b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2950bc:
    // 0x2950bc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2950bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2950c0:
    // 0x2950c0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2950c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2950c4:
    // 0x2950c4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2950c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_2950c8:
    // 0x2950c8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2950c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_2950cc:
    // 0x2950cc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2950ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2950d0:
    // 0x2950d0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2950d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2950d4:
    // 0x2950d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2950d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2950d8:
    // 0x2950d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2950d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2950dc:
    // 0x2950dc: 0x0  nop
    ctx->pc = 0x2950dcu;
    // NOP
label_2950e0:
    // 0x2950e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2950e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2950e4:
    // 0x2950e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2950e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2950e8:
    // 0x2950e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2950ec:
    if (ctx->pc == 0x2950ECu) {
        ctx->pc = 0x2950F0u;
        goto label_2950f0;
    }
    ctx->pc = 0x2950E8u;
    {
        const bool branch_taken_0x2950e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2950e8) {
            ctx->pc = 0x295100u;
            goto label_295100;
        }
    }
    ctx->pc = 0x2950F0u;
label_2950f0:
    // 0x2950f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2950f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2950f4:
    // 0x2950f4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2950f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2950f8:
    // 0x2950f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2950fc:
    if (ctx->pc == 0x2950FCu) {
        ctx->pc = 0x2950FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2950F8u;
        // 0x2950fc: 0x3067ffff  andi        $a3, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x295100u;
        goto label_295100;
    }
    ctx->pc = 0x2950F8u;
    {
        const bool branch_taken_0x2950f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2950FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2950F8u;
        // 0x2950fc: 0x3067ffff  andi        $a3, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950f8) {
            ctx->pc = 0x29511Cu;
            goto label_29511c;
        }
    }
    ctx->pc = 0x295100u;
label_295100:
    // 0x295100: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x295100u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295104:
    // 0x295104: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x295104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_295108:
    // 0x295108: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295108u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_29510c:
    // 0x29510c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29510cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_295110:
    // 0x295110: 0x0  nop
    ctx->pc = 0x295110u;
    // NOP
label_295114:
    // 0x295114: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x295114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_295118:
    // 0x295118: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x295118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_29511c:
    // 0x29511c: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x29511cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
label_295120:
    // 0x295120: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x295120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_295124:
    // 0x295124: 0xc0538e0  jal         func_14E380
label_295128:
    if (ctx->pc == 0x295128u) {
        ctx->pc = 0x295128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295124u;
        // 0x295128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29512Cu;
        goto label_29512c;
    }
    ctx->pc = 0x295124u;
    SET_GPR_U32(ctx, 31, 0x29512Cu);
    ctx->pc = 0x295128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295124u;
    // 0x295128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E380u, 0x295124u, 0x29512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29512Cu;
label_29512c:
    // 0x29512c: 0x0  nop
    ctx->pc = 0x29512cu;
    // NOP
label_295130:
    // 0x295130: 0x922300e4  lbu         $v1, 0xE4($s1)
    ctx->pc = 0x295130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 228)));
label_295134:
    // 0x295134: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_295138:
    if (ctx->pc == 0x295138u) {
        ctx->pc = 0x29513Cu;
        goto label_29513c;
    }
    ctx->pc = 0x295134u;
    {
        const bool branch_taken_0x295134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295134) {
            ctx->pc = 0x295168u;
            goto label_295168;
        }
    }
    ctx->pc = 0x29513Cu;
label_29513c:
    // 0x29513c: 0xc6340024  lwc1        $f20, 0x24($s1)
    ctx->pc = 0x29513cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_295140:
    // 0x295140: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x295140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
label_295144:
    // 0x295144: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x295144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_295148:
    // 0x295148: 0xc053a04  jal         func_14E810
label_29514c:
    if (ctx->pc == 0x29514Cu) {
        ctx->pc = 0x29514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295148u;
        // 0x29514c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295150u;
        goto label_295150;
    }
    ctx->pc = 0x295148u;
    SET_GPR_U32(ctx, 31, 0x295150u);
    ctx->pc = 0x29514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295148u;
    // 0x29514c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E810u, 0x295148u, 0x295150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295150u;
label_295150:
    // 0x295150: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_295154:
    if (ctx->pc == 0x295154u) {
        ctx->pc = 0x295158u;
        goto label_295158;
    }
    ctx->pc = 0x295150u;
    {
        const bool branch_taken_0x295150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295150) {
            ctx->pc = 0x295168u;
            goto label_295168;
        }
    }
    ctx->pc = 0x295158u;
label_295158:
    // 0x295158: 0x8e2306b4  lw          $v1, 0x6B4($s1)
    ctx->pc = 0x295158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1716)));
label_29515c:
    // 0x29515c: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x29515cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_295160:
    // 0x295160: 0xae2306b4  sw          $v1, 0x6B4($s1)
    ctx->pc = 0x295160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 3));
label_295164:
    // 0x295164: 0xe6340024  swc1        $f20, 0x24($s1)
    ctx->pc = 0x295164u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_295168:
    // 0x295168: 0x8e2406ac  lw          $a0, 0x6AC($s1)
    ctx->pc = 0x295168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
label_29516c:
    // 0x29516c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x29516cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_295170:
    // 0x295170: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x295170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_295174:
    // 0x295174: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_295178:
    if (ctx->pc == 0x295178u) {
        ctx->pc = 0x29517Cu;
        goto label_29517c;
    }
    ctx->pc = 0x295174u;
    {
        const bool branch_taken_0x295174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x295174) {
            ctx->pc = 0x2951E0u;
            goto label_2951e0;
        }
    }
    ctx->pc = 0x29517Cu;
label_29517c:
    // 0x29517c: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x29517cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_295180:
    // 0x295180: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x295180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_295184:
    // 0x295184: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x295184u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_295188:
    // 0x295188: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x295188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_29518c:
    // 0x29518c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29518cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_295190:
    // 0x295190: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_295194:
    if (ctx->pc == 0x295194u) {
        ctx->pc = 0x295198u;
        goto label_295198;
    }
    ctx->pc = 0x295190u;
    {
        const bool branch_taken_0x295190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295190) {
            ctx->pc = 0x2951E0u;
            goto label_2951e0;
        }
    }
    ctx->pc = 0x295198u;
label_295198:
    // 0x295198: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_29519c:
    if (ctx->pc == 0x29519Cu) {
        ctx->pc = 0x2951A0u;
        goto label_2951a0;
    }
    ctx->pc = 0x295198u;
    {
        const bool branch_taken_0x295198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x295198) {
            ctx->pc = 0x2951E0u;
            goto label_2951e0;
        }
    }
    ctx->pc = 0x2951A0u;
label_2951a0:
    // 0x2951a0: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x2951a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_2951a4:
    // 0x2951a4: 0x30630600  andi        $v1, $v1, 0x600
    ctx->pc = 0x2951a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1536);
label_2951a8:
    // 0x2951a8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_2951ac:
    if (ctx->pc == 0x2951ACu) {
        ctx->pc = 0x2951B0u;
        goto label_2951b0;
    }
    ctx->pc = 0x2951A8u;
    {
        const bool branch_taken_0x2951a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2951a8) {
            ctx->pc = 0x2951E0u;
            goto label_2951e0;
        }
    }
    ctx->pc = 0x2951B0u;
label_2951b0:
    // 0x2951b0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2951b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2951b4:
    // 0x2951b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2951b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2951b8:
    // 0x2951b8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2951b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2951bc:
    // 0x2951bc: 0x320f809  jalr        $t9
label_2951c0:
    if (ctx->pc == 0x2951C0u) {
        ctx->pc = 0x2951C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2951BCu;
        // 0x2951c0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2951C4u;
        goto label_2951c4;
    }
    ctx->pc = 0x2951BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2951C4u);
        ctx->pc = 0x2951C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2951BCu;
        // 0x2951c0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2951BCu, 0x2951C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2951C4u;
label_2951c4:
    // 0x2951c4: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x2951c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2951c8:
    // 0x2951c8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2951cc:
    if (ctx->pc == 0x2951CCu) {
        ctx->pc = 0x2951D0u;
        goto label_2951d0;
    }
    ctx->pc = 0x2951C8u;
    {
        const bool branch_taken_0x2951c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2951c8) {
            ctx->pc = 0x2951E0u;
            goto label_2951e0;
        }
    }
    ctx->pc = 0x2951D0u;
label_2951d0:
    // 0x2951d0: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2951d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_2951d4:
    // 0x2951d4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2951d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2951d8:
    // 0x2951d8: 0xa22307f6  sb          $v1, 0x7F6($s1)
    ctx->pc = 0x2951d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 3));
label_2951dc:
    // 0x2951dc: 0x0  nop
    ctx->pc = 0x2951dcu;
    // NOP
label_2951e0:
    // 0x2951e0: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x2951e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_2951e4:
    // 0x2951e4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x2951e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_2951e8:
    // 0x2951e8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2951e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2951ec:
    // 0x2951ec: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2951ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2951f0:
    // 0x2951f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2951f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2951f4:
    // 0x2951f4: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_2951f8:
    if (ctx->pc == 0x2951F8u) {
        ctx->pc = 0x2951FCu;
        goto label_2951fc;
    }
    ctx->pc = 0x2951F4u;
    {
        const bool branch_taken_0x2951f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2951f4) {
            ctx->pc = 0x295268u;
            goto label_295268;
        }
    }
    ctx->pc = 0x2951FCu;
label_2951fc:
    // 0x2951fc: 0x8e2206ac  lw          $v0, 0x6AC($s1)
    ctx->pc = 0x2951fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
label_295200:
    // 0x295200: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x295200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_295204:
    // 0x295204: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x295204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_295208:
    // 0x295208: 0x248435a0  addiu       $a0, $a0, 0x35A0
    ctx->pc = 0x295208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13728));
label_29520c:
    // 0x29520c: 0x24a56710  addiu       $a1, $a1, 0x6710
    ctx->pc = 0x29520cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26384));
label_295210:
    // 0x295210: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x295210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_295214:
    // 0x295214: 0x26270080  addiu       $a3, $s1, 0x80
    ctx->pc = 0x295214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_295218:
    // 0x295218: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x295218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_29521c:
    // 0x29521c: 0xc04e744  jal         func_139D10
label_295220:
    if (ctx->pc == 0x295220u) {
        ctx->pc = 0x295220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29521Cu;
        // 0x295220: 0x2402b  sltu        $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x295224u;
        goto label_295224;
    }
    ctx->pc = 0x29521Cu;
    SET_GPR_U32(ctx, 31, 0x295224u);
    ctx->pc = 0x295220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29521Cu;
    // 0x295220: 0x2402b  sltu        $t0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x139D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139D10u, 0x29521Cu, 0x295224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295224u;
label_295224:
    // 0x295224: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x295224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
label_295228:
    // 0x295228: 0x8c23455c  lw          $v1, 0x455C($at)
    ctx->pc = 0x295228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 17756)));
label_29522c:
    // 0x29522c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_295230:
    if (ctx->pc == 0x295230u) {
        ctx->pc = 0x295234u;
        goto label_295234;
    }
    ctx->pc = 0x29522Cu;
    {
        const bool branch_taken_0x29522c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29522c) {
            ctx->pc = 0x295258u;
            goto label_295258;
        }
    }
    ctx->pc = 0x295234u;
label_295234:
    // 0x295234: 0x8e2406b4  lw          $a0, 0x6B4($s1)
    ctx->pc = 0x295234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1716)));
label_295238:
    // 0x295238: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x295238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
label_29523c:
    // 0x29523c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x29523cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_295240:
    // 0x295240: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x295240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_295244:
    // 0x295244: 0xae2406b4  sw          $a0, 0x6B4($s1)
    ctx->pc = 0x295244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 4));
label_295248:
    // 0x295248: 0x782444f0  lq          $a0, 0x44F0($at)
    ctx->pc = 0x295248u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 17648)));
label_29524c:
    // 0x29524c: 0x7e2428e0  sq          $a0, 0x28E0($s1)
    ctx->pc = 0x29524cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 10464), GPR_VEC(ctx, 4));
label_295250:
    // 0x295250: 0xae2328ec  sw          $v1, 0x28EC($s1)
    ctx->pc = 0x295250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10476), GPR_U32(ctx, 3));
label_295254:
    // 0x295254: 0x0  nop
    ctx->pc = 0x295254u;
    // NOP
label_295258:
    // 0x295258: 0x7a240020  lq          $a0, 0x20($s1)
    ctx->pc = 0x295258u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_29525c:
    // 0x29525c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29525cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_295260:
    // 0x295260: 0x7e2400d0  sq          $a0, 0xD0($s1)
    ctx->pc = 0x295260u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 208), GPR_VEC(ctx, 4));
label_295264:
    // 0x295264: 0xae2300dc  sw          $v1, 0xDC($s1)
    ctx->pc = 0x295264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 3));
label_295268:
    // 0x295268: 0x8e250148  lw          $a1, 0x148($s1)
    ctx->pc = 0x295268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_29526c:
    // 0x29526c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x29526cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_295270:
    // 0x295270: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x295270u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_295274:
    // 0x295274: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x295274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_295278:
    // 0x295278: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x295278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_29527c:
    // 0x29527c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_295280:
    if (ctx->pc == 0x295280u) {
        ctx->pc = 0x295284u;
        goto label_295284;
    }
    ctx->pc = 0x29527Cu;
    {
        const bool branch_taken_0x29527c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29527c) {
            ctx->pc = 0x295310u;
            goto label_295310;
        }
    }
    ctx->pc = 0x295284u;
label_295284:
    // 0x295284: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x295284u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_295288:
    // 0x295288: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x295288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_29528c:
    // 0x29528c: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_295290:
    if (ctx->pc == 0x295290u) {
        ctx->pc = 0x295290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29528Cu;
        // 0x295290: 0x24030069  addiu       $v1, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295294u;
        goto label_295294;
    }
    ctx->pc = 0x29528Cu;
    {
        const bool branch_taken_0x29528c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x295290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29528Cu;
        // 0x295290: 0x24030069  addiu       $v1, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29528c) {
            ctx->pc = 0x295310u;
            goto label_295310;
        }
    }
    ctx->pc = 0x295294u;
label_295294:
    // 0x295294: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
label_295298:
    if (ctx->pc == 0x295298u) {
        ctx->pc = 0x29529Cu;
        goto label_29529c;
    }
    ctx->pc = 0x295294u;
    {
        const bool branch_taken_0x295294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x295294) {
            ctx->pc = 0x295310u;
            goto label_295310;
        }
    }
    ctx->pc = 0x29529Cu;
label_29529c:
    // 0x29529c: 0x8e2328d4  lw          $v1, 0x28D4($s1)
    ctx->pc = 0x29529cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10452)));
label_2952a0:
    // 0x2952a0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2952a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2952a4:
    // 0x2952a4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_2952a8:
    if (ctx->pc == 0x2952A8u) {
        ctx->pc = 0x2952ACu;
        goto label_2952ac;
    }
    ctx->pc = 0x2952A4u;
    {
        const bool branch_taken_0x2952a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2952a4) {
            ctx->pc = 0x295310u;
            goto label_295310;
        }
    }
    ctx->pc = 0x2952ACu;
label_2952ac:
    // 0x2952ac: 0x92230781  lbu         $v1, 0x781($s1)
    ctx->pc = 0x2952acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1921)));
label_2952b0:
    // 0x2952b0: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_2952b4:
    if (ctx->pc == 0x2952B4u) {
        ctx->pc = 0x2952B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952B0u;
        // 0x2952b4: 0x30a38000  andi        $v1, $a1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2952B8u;
        goto label_2952b8;
    }
    ctx->pc = 0x2952B0u;
    {
        const bool branch_taken_0x2952b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2952B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952B0u;
        // 0x2952b4: 0x30a38000  andi        $v1, $a1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952b0) {
            ctx->pc = 0x295310u;
            goto label_295310;
        }
    }
    ctx->pc = 0x2952B8u;
label_2952b8:
    // 0x2952b8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2952b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2952bc:
    // 0x2952bc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2952bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2952c0:
    // 0x2952c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2952c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2952c4:
    // 0x2952c4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_2952c8:
    if (ctx->pc == 0x2952C8u) {
        ctx->pc = 0x2952CCu;
        goto label_2952cc;
    }
    ctx->pc = 0x2952C4u;
    {
        const bool branch_taken_0x2952c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2952c4) {
            ctx->pc = 0x295308u;
            goto label_295308;
        }
    }
    ctx->pc = 0x2952CCu;
label_2952cc:
    // 0x2952cc: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2952ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2952d0:
    // 0x2952d0: 0x3c03c2a0  lui         $v1, 0xC2A0
    ctx->pc = 0x2952d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49824 << 16));
label_2952d4:
    // 0x2952d4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2952d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2952d8:
    // 0x2952d8: 0xc62028f4  lwc1        $f0, 0x28F4($s1)
    ctx->pc = 0x2952d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 10484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2952dc:
    // 0x2952dc: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2952dcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_2952e0:
    // 0x2952e0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2952e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2952e4:
    // 0x2952e4: 0xe62128f4  swc1        $f1, 0x28F4($s1)
    ctx->pc = 0x2952e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10484), bits); }
label_2952e8:
    // 0x2952e8: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2952e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2952ec:
    // 0x2952ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2952ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2952f0:
    // 0x2952f0: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x2952f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_2952f4:
    // 0x2952f4: 0x8e230928  lw          $v1, 0x928($s1)
    ctx->pc = 0x2952f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
label_2952f8:
    // 0x2952f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2952f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2952fc:
    // 0x2952fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_295300:
    if (ctx->pc == 0x295300u) {
        ctx->pc = 0x295300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952FCu;
        // 0x295300: 0xae230928  sw          $v1, 0x928($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295304u;
        goto label_295304;
    }
    ctx->pc = 0x2952FCu;
    {
        const bool branch_taken_0x2952fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952FCu;
        // 0x295300: 0xae230928  sw          $v1, 0x928($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952fc) {
            ctx->pc = 0x295310u;
            goto label_295310;
        }
    }
    ctx->pc = 0x295304u;
label_295304:
    // 0x295304: 0x0  nop
    ctx->pc = 0x295304u;
    // NOP
label_295308:
    // 0x295308: 0xae200928  sw          $zero, 0x928($s1)
    ctx->pc = 0x295308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2344), GPR_U32(ctx, 0));
label_29530c:
    // 0x29530c: 0x0  nop
    ctx->pc = 0x29530cu;
    // NOP
label_295310:
    // 0x295310: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x295310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_295314:
    // 0x295314: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x295314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_295318:
    // 0x295318: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x295318u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29531c:
    // 0x29531c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29531cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_295320:
    // 0x295320: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x295320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_295324:
    // 0x295324: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
label_295328:
    if (ctx->pc == 0x295328u) {
        ctx->pc = 0x29532Cu;
        goto label_29532c;
    }
    ctx->pc = 0x295324u;
    {
        const bool branch_taken_0x295324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295324) {
            ctx->pc = 0x295490u;
            goto label_295490;
        }
    }
    ctx->pc = 0x29532Cu;
label_29532c:
    // 0x29532c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x29532cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_295330:
    // 0x295330: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
label_295334:
    if (ctx->pc == 0x295334u) {
        ctx->pc = 0x295334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295330u;
        // 0x295334: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295338u;
        goto label_295338;
    }
    ctx->pc = 0x295330u;
    {
        const bool branch_taken_0x295330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x295334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295330u;
        // 0x295334: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295330) {
            ctx->pc = 0x295490u;
            goto label_295490;
        }
    }
    ctx->pc = 0x295338u;
label_295338:
    // 0x295338: 0x26240930  addiu       $a0, $s1, 0x930
    ctx->pc = 0x295338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2352));
label_29533c:
    // 0x29533c: 0x24a56710  addiu       $a1, $a1, 0x6710
    ctx->pc = 0x29533cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26384));
label_295340:
    // 0x295340: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x295340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_295344:
    // 0x295344: 0xc04e7fc  jal         func_139FF0
label_295348:
    if (ctx->pc == 0x295348u) {
        ctx->pc = 0x295348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295344u;
        // 0x295348: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29534Cu;
        goto label_29534c;
    }
    ctx->pc = 0x295344u;
    SET_GPR_U32(ctx, 31, 0x29534Cu);
    ctx->pc = 0x295348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295344u;
    // 0x295348: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139FF0u, 0x295344u, 0x29534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29534Cu;
label_29534c:
    // 0x29534c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x29534cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_295350:
    // 0x295350: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x295350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_295354:
    // 0x295354: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x295354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_295358:
    // 0x295358: 0x10830045  beq         $a0, $v1, . + 4 + (0x45 << 2)
label_29535c:
    if (ctx->pc == 0x29535Cu) {
        ctx->pc = 0x295360u;
        goto label_295360;
    }
    ctx->pc = 0x295358u;
    {
        const bool branch_taken_0x295358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x295358) {
            ctx->pc = 0x295470u;
            goto label_295470;
        }
    }
    ctx->pc = 0x295360u;
label_295360:
    // 0x295360: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x295360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_295364:
    // 0x295364: 0xc7ad005c  lwc1        $f13, 0x5C($sp)
    ctx->pc = 0x295364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_295368:
    // 0x295368: 0xc62e0028  lwc1        $f14, 0x28($s1)
    ctx->pc = 0x295368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_29536c:
    // 0x29536c: 0xc060108  jal         func_180420
label_295370:
    if (ctx->pc == 0x295370u) {
        ctx->pc = 0x295370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29536Cu;
        // 0x295370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295374u;
        goto label_295374;
    }
    ctx->pc = 0x29536Cu;
    SET_GPR_U32(ctx, 31, 0x295374u);
    ctx->pc = 0x295370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29536Cu;
    // 0x295370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180420u, 0x29536Cu, 0x295374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295374u;
label_295374:
    // 0x295374: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x295374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295378:
    // 0x295378: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x295378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_29537c:
    // 0x29537c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x29537cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295380:
    // 0x295380: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x295380u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295384:
    // 0x295384: 0xe62028f0  swc1        $f0, 0x28F0($s1)
    ctx->pc = 0x295384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10480), bits); }
label_295388:
    // 0x295388: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x295388u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_29538c:
    // 0x29538c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_295390:
    if (ctx->pc == 0x295390u) {
        ctx->pc = 0x295390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29538Cu;
        // 0x295390: 0x24030069  addiu       $v1, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295394u;
        goto label_295394;
    }
    ctx->pc = 0x29538Cu;
    {
        const bool branch_taken_0x29538c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x295390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29538Cu;
        // 0x295390: 0x24030069  addiu       $v1, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29538c) {
            ctx->pc = 0x2953A0u;
            goto label_2953a0;
        }
    }
    ctx->pc = 0x295394u;
label_295394:
    // 0x295394: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_295398:
    if (ctx->pc == 0x295398u) {
        ctx->pc = 0x29539Cu;
        goto label_29539c;
    }
    ctx->pc = 0x295394u;
    {
        const bool branch_taken_0x295394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x295394) {
            ctx->pc = 0x2953C8u;
            goto label_2953c8;
        }
    }
    ctx->pc = 0x29539Cu;
label_29539c:
    // 0x29539c: 0x0  nop
    ctx->pc = 0x29539cu;
    // NOP
label_2953a0:
    // 0x2953a0: 0xc62128f0  lwc1        $f1, 0x28F0($s1)
    ctx->pc = 0x2953a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2953a4:
    // 0x2953a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2953a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2953a8:
    // 0x2953a8: 0x0  nop
    ctx->pc = 0x2953a8u;
    // NOP
label_2953ac:
    // 0x2953ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2953acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2953b0:
    // 0x2953b0: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
label_2953b4:
    if (ctx->pc == 0x2953B4u) {
        ctx->pc = 0x2953B8u;
        goto label_2953b8;
    }
    ctx->pc = 0x2953B0u;
    {
        const bool branch_taken_0x2953b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2953b0) {
            ctx->pc = 0x2954A8u;
            goto label_2954a8;
        }
    }
    ctx->pc = 0x2953B8u;
label_2953b8:
    // 0x2953b8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2953b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2953bc:
    // 0x2953bc: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2953c0:
    if (ctx->pc == 0x2953C0u) {
        ctx->pc = 0x2953C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2953BCu;
        // 0x2953c0: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2953C4u;
        goto label_2953c4;
    }
    ctx->pc = 0x2953BCu;
    {
        const bool branch_taken_0x2953bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2953C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2953BCu;
        // 0x2953c0: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2953bc) {
            ctx->pc = 0x2954A8u;
            goto label_2954a8;
        }
    }
    ctx->pc = 0x2953C4u;
label_2953c4:
    // 0x2953c4: 0x0  nop
    ctx->pc = 0x2953c4u;
    // NOP
label_2953c8:
    // 0x2953c8: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x2953c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_2953cc:
    // 0x2953cc: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x2953ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_2953d0:
    // 0x2953d0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2953d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2953d4:
    // 0x2953d4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2953d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2953d8:
    // 0x2953d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2953d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2953dc:
    // 0x2953dc: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_2953e0:
    if (ctx->pc == 0x2953E0u) {
        ctx->pc = 0x2953E4u;
        goto label_2953e4;
    }
    ctx->pc = 0x2953DCu;
    {
        const bool branch_taken_0x2953dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2953dc) {
            ctx->pc = 0x295440u;
            goto label_295440;
        }
    }
    ctx->pc = 0x2953E4u;
label_2953e4:
    // 0x2953e4: 0xc62128f0  lwc1        $f1, 0x28F0($s1)
    ctx->pc = 0x2953e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2953e8:
    // 0x2953e8: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x2953e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
label_2953ec:
    // 0x2953ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2953ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2953f0:
    // 0x2953f0: 0x0  nop
    ctx->pc = 0x2953f0u;
    // NOP
label_2953f4:
    // 0x2953f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2953f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2953f8:
    // 0x2953f8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_2953fc:
    if (ctx->pc == 0x2953FCu) {
        ctx->pc = 0x295400u;
        goto label_295400;
    }
    ctx->pc = 0x2953F8u;
    {
        const bool branch_taken_0x2953f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2953f8) {
            ctx->pc = 0x295430u;
            goto label_295430;
        }
    }
    ctx->pc = 0x295400u;
label_295400:
    // 0x295400: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x295400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295404:
    // 0x295404: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x295404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_295408:
    // 0x295408: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x295408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_29540c:
    // 0x29540c: 0x8e2428d4  lw          $a0, 0x28D4($s1)
    ctx->pc = 0x29540cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10452)));
label_295410:
    // 0x295410: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x295410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_295414:
    // 0x295414: 0xae2328d4  sw          $v1, 0x28D4($s1)
    ctx->pc = 0x295414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10452), GPR_U32(ctx, 3));
label_295418:
    // 0x295418: 0xae2028f4  sw          $zero, 0x28F4($s1)
    ctx->pc = 0x295418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10484), GPR_U32(ctx, 0));
label_29541c:
    // 0x29541c: 0x8e2306b4  lw          $v1, 0x6B4($s1)
    ctx->pc = 0x29541cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1716)));
label_295420:
    // 0x295420: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x295420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_295424:
    // 0x295424: 0x10000020  b           . + 4 + (0x20 << 2)
label_295428:
    if (ctx->pc == 0x295428u) {
        ctx->pc = 0x295428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295424u;
        // 0x295428: 0xae2306b4  sw          $v1, 0x6B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29542Cu;
        goto label_29542c;
    }
    ctx->pc = 0x295424u;
    {
        const bool branch_taken_0x295424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295424u;
        // 0x295428: 0xae2306b4  sw          $v1, 0x6B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295424) {
            ctx->pc = 0x2954A8u;
            goto label_2954a8;
        }
    }
    ctx->pc = 0x29542Cu;
label_29542c:
    // 0x29542c: 0x0  nop
    ctx->pc = 0x29542cu;
    // NOP
label_295430:
    // 0x295430: 0x8e2328d4  lw          $v1, 0x28D4($s1)
    ctx->pc = 0x295430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10452)));
label_295434:
    // 0x295434: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x295434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_295438:
    // 0x295438: 0x1000001b  b           . + 4 + (0x1B << 2)
label_29543c:
    if (ctx->pc == 0x29543Cu) {
        ctx->pc = 0x29543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295438u;
        // 0x29543c: 0xae2328d4  sw          $v1, 0x28D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295440u;
        goto label_295440;
    }
    ctx->pc = 0x295438u;
    {
        const bool branch_taken_0x295438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295438u;
        // 0x29543c: 0xae2328d4  sw          $v1, 0x28D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295438) {
            ctx->pc = 0x2954A8u;
            goto label_2954a8;
        }
    }
    ctx->pc = 0x295440u;
label_295440:
    // 0x295440: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x295440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295444:
    // 0x295444: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x295444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295448:
    // 0x295448: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x295448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29544c:
    // 0x29544c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_295450:
    if (ctx->pc == 0x295450u) {
        ctx->pc = 0x295454u;
        goto label_295454;
    }
    ctx->pc = 0x29544Cu;
    {
        const bool branch_taken_0x29544c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29544c) {
            ctx->pc = 0x2954A8u;
            goto label_2954a8;
        }
    }
    ctx->pc = 0x295454u;
label_295454:
    // 0x295454: 0xae2028f0  sw          $zero, 0x28F0($s1)
    ctx->pc = 0x295454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10480), GPR_U32(ctx, 0));
label_295458:
    // 0x295458: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x295458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29545c:
    // 0x29545c: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x29545cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_295460:
    // 0x295460: 0x8e2306b4  lw          $v1, 0x6B4($s1)
    ctx->pc = 0x295460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1716)));
label_295464:
    // 0x295464: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x295464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_295468:
    // 0x295468: 0x1000000f  b           . + 4 + (0xF << 2)
label_29546c:
    if (ctx->pc == 0x29546Cu) {
        ctx->pc = 0x29546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295468u;
        // 0x29546c: 0xae2306b4  sw          $v1, 0x6B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295470u;
        goto label_295470;
    }
    ctx->pc = 0x295468u;
    {
        const bool branch_taken_0x295468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295468u;
        // 0x29546c: 0xae2306b4  sw          $v1, 0x6B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295468) {
            ctx->pc = 0x2954A8u;
            goto label_2954a8;
        }
    }
    ctx->pc = 0x295470u;
label_295470:
    // 0x295470: 0x8e2428d4  lw          $a0, 0x28D4($s1)
    ctx->pc = 0x295470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10452)));
label_295474:
    // 0x295474: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x295474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_295478:
    // 0x295478: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x295478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_29547c:
    // 0x29547c: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x29547cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_295480:
    // 0x295480: 0xae2428d4  sw          $a0, 0x28D4($s1)
    ctx->pc = 0x295480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10452), GPR_U32(ctx, 4));
label_295484:
    // 0x295484: 0x10000008  b           . + 4 + (0x8 << 2)
label_295488:
    if (ctx->pc == 0x295488u) {
        ctx->pc = 0x295488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295484u;
        // 0x295488: 0xae2328f0  sw          $v1, 0x28F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29548Cu;
        goto label_29548c;
    }
    ctx->pc = 0x295484u;
    {
        const bool branch_taken_0x295484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295484u;
        // 0x295488: 0xae2328f0  sw          $v1, 0x28F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295484) {
            ctx->pc = 0x2954A8u;
            goto label_2954a8;
        }
    }
    ctx->pc = 0x29548Cu;
label_29548c:
    // 0x29548c: 0x0  nop
    ctx->pc = 0x29548cu;
    // NOP
label_295490:
    // 0x295490: 0x8e2428d4  lw          $a0, 0x28D4($s1)
    ctx->pc = 0x295490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10452)));
label_295494:
    // 0x295494: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x295494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_295498:
    // 0x295498: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x295498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_29549c:
    // 0x29549c: 0xae2328d4  sw          $v1, 0x28D4($s1)
    ctx->pc = 0x29549cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10452), GPR_U32(ctx, 3));
label_2954a0:
    // 0x2954a0: 0xae2028f4  sw          $zero, 0x28F4($s1)
    ctx->pc = 0x2954a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10484), GPR_U32(ctx, 0));
label_2954a4:
    // 0x2954a4: 0xae2028f0  sw          $zero, 0x28F0($s1)
    ctx->pc = 0x2954a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10480), GPR_U32(ctx, 0));
label_2954a8:
    // 0x2954a8: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x2954a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_2954ac:
    // 0x2954ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2954acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2954b0:
    // 0x2954b0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2954b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2954b4:
    // 0x2954b4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2954b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2954b8:
    // 0x2954b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2954b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2954bc:
    // 0x2954bc: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_2954c0:
    if (ctx->pc == 0x2954C0u) {
        ctx->pc = 0x2954C4u;
        goto label_2954c4;
    }
    ctx->pc = 0x2954BCu;
    {
        const bool branch_taken_0x2954bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2954bc) {
            ctx->pc = 0x295550u;
            goto label_295550;
        }
    }
    ctx->pc = 0x2954C4u;
label_2954c4:
    // 0x2954c4: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_2954c8:
    if (ctx->pc == 0x2954C8u) {
        ctx->pc = 0x2954CCu;
        goto label_2954cc;
    }
    ctx->pc = 0x2954C4u;
    {
        const bool branch_taken_0x2954c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2954c4) {
            ctx->pc = 0x295550u;
            goto label_295550;
        }
    }
    ctx->pc = 0x2954CCu;
label_2954cc:
    // 0x2954cc: 0x8e2328d4  lw          $v1, 0x28D4($s1)
    ctx->pc = 0x2954ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10452)));
label_2954d0:
    // 0x2954d0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2954d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_2954d4:
    // 0x2954d4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2954d8:
    if (ctx->pc == 0x2954D8u) {
        ctx->pc = 0x2954D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2954D4u;
        // 0x2954d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2954DCu;
        goto label_2954dc;
    }
    ctx->pc = 0x2954D4u;
    {
        const bool branch_taken_0x2954d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2954D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2954D4u;
        // 0x2954d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2954d4) {
            ctx->pc = 0x2954E0u;
            goto label_2954e0;
        }
    }
    ctx->pc = 0x2954DCu;
label_2954dc:
    // 0x2954dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2954dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2954e0:
    // 0x2954e0: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x2954e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_2954e4:
    // 0x2954e4: 0x30630600  andi        $v1, $v1, 0x600
    ctx->pc = 0x2954e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1536);
label_2954e8:
    // 0x2954e8: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_2954ec:
    if (ctx->pc == 0x2954ECu) {
        ctx->pc = 0x2954F0u;
        goto label_2954f0;
    }
    ctx->pc = 0x2954E8u;
    {
        const bool branch_taken_0x2954e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2954e8) {
            ctx->pc = 0x295550u;
            goto label_295550;
        }
    }
    ctx->pc = 0x2954F0u;
label_2954f0:
    // 0x2954f0: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x2954f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2954f4:
    // 0x2954f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2954f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2954f8:
    // 0x2954f8: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x2954f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2954fc:
    // 0x2954fc: 0xc0601b4  jal         func_1806D0
label_295500:
    if (ctx->pc == 0x295500u) {
        ctx->pc = 0x295500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2954FCu;
        // 0x295500: 0x26270080  addiu       $a3, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295504u;
        goto label_295504;
    }
    ctx->pc = 0x2954FCu;
    SET_GPR_U32(ctx, 31, 0x295504u);
    ctx->pc = 0x295500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2954FCu;
    // 0x295500: 0x26270080  addiu       $a3, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1806D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1806D0u, 0x2954FCu, 0x295504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295504u;
label_295504:
    // 0x295504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_295508:
    // 0x295508: 0xc061bcc  jal         func_186F30
label_29550c:
    if (ctx->pc == 0x29550Cu) {
        ctx->pc = 0x29550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295508u;
        // 0x29550c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295510u;
        goto label_295510;
    }
    ctx->pc = 0x295508u;
    SET_GPR_U32(ctx, 31, 0x295510u);
    ctx->pc = 0x29550Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295508u;
    // 0x29550c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F30u, 0x295508u, 0x295510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295510u;
label_295510:
    // 0x295510: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x295510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_295514:
    // 0x295514: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_295518:
    if (ctx->pc == 0x295518u) {
        ctx->pc = 0x295518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295514u;
        // 0x295518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29551Cu;
        goto label_29551c;
    }
    ctx->pc = 0x295514u;
    {
        const bool branch_taken_0x295514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x295518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295514u;
        // 0x295518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295514) {
            ctx->pc = 0x295550u;
            goto label_295550;
        }
    }
    ctx->pc = 0x29551Cu;
label_29551c:
    // 0x29551c: 0xc0618c4  jal         func_186310
label_295520:
    if (ctx->pc == 0x295520u) {
        ctx->pc = 0x295524u;
        goto label_295524;
    }
    ctx->pc = 0x29551Cu;
    SET_GPR_U32(ctx, 31, 0x295524u);
    ctx->pc = 0x186310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186310u, 0x29551Cu, 0x295524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295524u;
label_295524:
    // 0x295524: 0xc0615a8  jal         func_1856A0
label_295528:
    if (ctx->pc == 0x295528u) {
        ctx->pc = 0x295528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295524u;
        // 0x295528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29552Cu;
        goto label_29552c;
    }
    ctx->pc = 0x295524u;
    SET_GPR_U32(ctx, 31, 0x29552Cu);
    ctx->pc = 0x295528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295524u;
    // 0x295528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1856A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1856A0u, 0x295524u, 0x29552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29552Cu;
label_29552c:
    // 0x29552c: 0xc061600  jal         func_185800
label_295530:
    if (ctx->pc == 0x295530u) {
        ctx->pc = 0x295530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29552Cu;
        // 0x295530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295534u;
        goto label_295534;
    }
    ctx->pc = 0x29552Cu;
    SET_GPR_U32(ctx, 31, 0x295534u);
    ctx->pc = 0x295530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29552Cu;
    // 0x295530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185800u, 0x29552Cu, 0x295534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295534u;
label_295534:
    // 0x295534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_295538:
    // 0x295538: 0xc06185c  jal         func_186170
label_29553c:
    if (ctx->pc == 0x29553Cu) {
        ctx->pc = 0x29553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295538u;
        // 0x29553c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295540u;
        goto label_295540;
    }
    ctx->pc = 0x295538u;
    SET_GPR_U32(ctx, 31, 0x295540u);
    ctx->pc = 0x29553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295538u;
    // 0x29553c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186170u, 0x295538u, 0x295540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295540u;
label_295540:
    // 0x295540: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x295540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_295544:
    // 0x295544: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x295544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_295548:
    // 0x295548: 0x320f809  jalr        $t9
label_29554c:
    if (ctx->pc == 0x29554Cu) {
        ctx->pc = 0x29554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295548u;
        // 0x29554c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295550u;
        goto label_295550;
    }
    ctx->pc = 0x295548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x295550u);
        ctx->pc = 0x29554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295548u;
        // 0x29554c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295548u, 0x295550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x295550u;
label_295550:
    // 0x295550: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x295550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
label_295554:
    // 0x295554: 0x8c23455c  lw          $v1, 0x455C($at)
    ctx->pc = 0x295554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 17756)));
label_295558:
    // 0x295558: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_29555c:
    if (ctx->pc == 0x29555Cu) {
        ctx->pc = 0x295560u;
        goto label_295560;
    }
    ctx->pc = 0x295558u;
    {
        const bool branch_taken_0x295558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295558) {
            ctx->pc = 0x295570u;
            goto label_295570;
        }
    }
    ctx->pc = 0x295560u;
label_295560:
    // 0x295560: 0x8e2306b4  lw          $v1, 0x6B4($s1)
    ctx->pc = 0x295560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1716)));
label_295564:
    // 0x295564: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x295564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_295568:
    // 0x295568: 0xae2306b4  sw          $v1, 0x6B4($s1)
    ctx->pc = 0x295568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 3));
label_29556c:
    // 0x29556c: 0x0  nop
    ctx->pc = 0x29556cu;
    // NOP
label_295570:
    // 0x295570: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x295570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_295574:
    // 0x295574: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x295574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_295578:
    // 0x295578: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x295578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29557c:
    // 0x29557c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29557cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_295580:
    // 0x295580: 0x3e00008  jr          $ra
label_295584:
    if (ctx->pc == 0x295584u) {
        ctx->pc = 0x295584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295580u;
        // 0x295584: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295588u;
        goto label_fallthrough_0x295580;
    }
    ctx->pc = 0x295580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295580u;
        // 0x295584: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x295580:
    ctx->pc = 0x295588u;
}
