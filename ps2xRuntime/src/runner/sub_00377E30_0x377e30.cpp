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

// Function: sub_00377E30
// Address: 0x377e30 - 0x378abc
void sub_00377E30_0x377e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377E30_0x377e30");
#endif

    switch (ctx->pc) {
        case 0x377e30u: goto label_377e30;
        case 0x377e34u: goto label_377e34;
        case 0x377e38u: goto label_377e38;
        case 0x377e3cu: goto label_377e3c;
        case 0x377e40u: goto label_377e40;
        case 0x377e44u: goto label_377e44;
        case 0x377e48u: goto label_377e48;
        case 0x377e4cu: goto label_377e4c;
        case 0x377e50u: goto label_377e50;
        case 0x377e54u: goto label_377e54;
        case 0x377e58u: goto label_377e58;
        case 0x377e5cu: goto label_377e5c;
        case 0x377e60u: goto label_377e60;
        case 0x377e64u: goto label_377e64;
        case 0x377e68u: goto label_377e68;
        case 0x377e6cu: goto label_377e6c;
        case 0x377e70u: goto label_377e70;
        case 0x377e74u: goto label_377e74;
        case 0x377e78u: goto label_377e78;
        case 0x377e7cu: goto label_377e7c;
        case 0x377e80u: goto label_377e80;
        case 0x377e84u: goto label_377e84;
        case 0x377e88u: goto label_377e88;
        case 0x377e8cu: goto label_377e8c;
        case 0x377e90u: goto label_377e90;
        case 0x377e94u: goto label_377e94;
        case 0x377e98u: goto label_377e98;
        case 0x377e9cu: goto label_377e9c;
        case 0x377ea0u: goto label_377ea0;
        case 0x377ea4u: goto label_377ea4;
        case 0x377ea8u: goto label_377ea8;
        case 0x377eacu: goto label_377eac;
        case 0x377eb0u: goto label_377eb0;
        case 0x377eb4u: goto label_377eb4;
        case 0x377eb8u: goto label_377eb8;
        case 0x377ebcu: goto label_377ebc;
        case 0x377ec0u: goto label_377ec0;
        case 0x377ec4u: goto label_377ec4;
        case 0x377ec8u: goto label_377ec8;
        case 0x377eccu: goto label_377ecc;
        case 0x377ed0u: goto label_377ed0;
        case 0x377ed4u: goto label_377ed4;
        case 0x377ed8u: goto label_377ed8;
        case 0x377edcu: goto label_377edc;
        case 0x377ee0u: goto label_377ee0;
        case 0x377ee4u: goto label_377ee4;
        case 0x377ee8u: goto label_377ee8;
        case 0x377eecu: goto label_377eec;
        case 0x377ef0u: goto label_377ef0;
        case 0x377ef4u: goto label_377ef4;
        case 0x377ef8u: goto label_377ef8;
        case 0x377efcu: goto label_377efc;
        case 0x377f00u: goto label_377f00;
        case 0x377f04u: goto label_377f04;
        case 0x377f08u: goto label_377f08;
        case 0x377f0cu: goto label_377f0c;
        case 0x377f10u: goto label_377f10;
        case 0x377f14u: goto label_377f14;
        case 0x377f18u: goto label_377f18;
        case 0x377f1cu: goto label_377f1c;
        case 0x377f20u: goto label_377f20;
        case 0x377f24u: goto label_377f24;
        case 0x377f28u: goto label_377f28;
        case 0x377f2cu: goto label_377f2c;
        case 0x377f30u: goto label_377f30;
        case 0x377f34u: goto label_377f34;
        case 0x377f38u: goto label_377f38;
        case 0x377f3cu: goto label_377f3c;
        case 0x377f40u: goto label_377f40;
        case 0x377f44u: goto label_377f44;
        case 0x377f48u: goto label_377f48;
        case 0x377f4cu: goto label_377f4c;
        case 0x377f50u: goto label_377f50;
        case 0x377f54u: goto label_377f54;
        case 0x377f58u: goto label_377f58;
        case 0x377f5cu: goto label_377f5c;
        case 0x377f60u: goto label_377f60;
        case 0x377f64u: goto label_377f64;
        case 0x377f68u: goto label_377f68;
        case 0x377f6cu: goto label_377f6c;
        case 0x377f70u: goto label_377f70;
        case 0x377f74u: goto label_377f74;
        case 0x377f78u: goto label_377f78;
        case 0x377f7cu: goto label_377f7c;
        case 0x377f80u: goto label_377f80;
        case 0x377f84u: goto label_377f84;
        case 0x377f88u: goto label_377f88;
        case 0x377f8cu: goto label_377f8c;
        case 0x377f90u: goto label_377f90;
        case 0x377f94u: goto label_377f94;
        case 0x377f98u: goto label_377f98;
        case 0x377f9cu: goto label_377f9c;
        case 0x377fa0u: goto label_377fa0;
        case 0x377fa4u: goto label_377fa4;
        case 0x377fa8u: goto label_377fa8;
        case 0x377facu: goto label_377fac;
        case 0x377fb0u: goto label_377fb0;
        case 0x377fb4u: goto label_377fb4;
        case 0x377fb8u: goto label_377fb8;
        case 0x377fbcu: goto label_377fbc;
        case 0x377fc0u: goto label_377fc0;
        case 0x377fc4u: goto label_377fc4;
        case 0x377fc8u: goto label_377fc8;
        case 0x377fccu: goto label_377fcc;
        case 0x377fd0u: goto label_377fd0;
        case 0x377fd4u: goto label_377fd4;
        case 0x377fd8u: goto label_377fd8;
        case 0x377fdcu: goto label_377fdc;
        case 0x377fe0u: goto label_377fe0;
        case 0x377fe4u: goto label_377fe4;
        case 0x377fe8u: goto label_377fe8;
        case 0x377fecu: goto label_377fec;
        case 0x377ff0u: goto label_377ff0;
        case 0x377ff4u: goto label_377ff4;
        case 0x377ff8u: goto label_377ff8;
        case 0x377ffcu: goto label_377ffc;
        case 0x378000u: goto label_378000;
        case 0x378004u: goto label_378004;
        case 0x378008u: goto label_378008;
        case 0x37800cu: goto label_37800c;
        case 0x378010u: goto label_378010;
        case 0x378014u: goto label_378014;
        case 0x378018u: goto label_378018;
        case 0x37801cu: goto label_37801c;
        case 0x378020u: goto label_378020;
        case 0x378024u: goto label_378024;
        case 0x378028u: goto label_378028;
        case 0x37802cu: goto label_37802c;
        case 0x378030u: goto label_378030;
        case 0x378034u: goto label_378034;
        case 0x378038u: goto label_378038;
        case 0x37803cu: goto label_37803c;
        case 0x378040u: goto label_378040;
        case 0x378044u: goto label_378044;
        case 0x378048u: goto label_378048;
        case 0x37804cu: goto label_37804c;
        case 0x378050u: goto label_378050;
        case 0x378054u: goto label_378054;
        case 0x378058u: goto label_378058;
        case 0x37805cu: goto label_37805c;
        case 0x378060u: goto label_378060;
        case 0x378064u: goto label_378064;
        case 0x378068u: goto label_378068;
        case 0x37806cu: goto label_37806c;
        case 0x378070u: goto label_378070;
        case 0x378074u: goto label_378074;
        case 0x378078u: goto label_378078;
        case 0x37807cu: goto label_37807c;
        case 0x378080u: goto label_378080;
        case 0x378084u: goto label_378084;
        case 0x378088u: goto label_378088;
        case 0x37808cu: goto label_37808c;
        case 0x378090u: goto label_378090;
        case 0x378094u: goto label_378094;
        case 0x378098u: goto label_378098;
        case 0x37809cu: goto label_37809c;
        case 0x3780a0u: goto label_3780a0;
        case 0x3780a4u: goto label_3780a4;
        case 0x3780a8u: goto label_3780a8;
        case 0x3780acu: goto label_3780ac;
        case 0x3780b0u: goto label_3780b0;
        case 0x3780b4u: goto label_3780b4;
        case 0x3780b8u: goto label_3780b8;
        case 0x3780bcu: goto label_3780bc;
        case 0x3780c0u: goto label_3780c0;
        case 0x3780c4u: goto label_3780c4;
        case 0x3780c8u: goto label_3780c8;
        case 0x3780ccu: goto label_3780cc;
        case 0x3780d0u: goto label_3780d0;
        case 0x3780d4u: goto label_3780d4;
        case 0x3780d8u: goto label_3780d8;
        case 0x3780dcu: goto label_3780dc;
        case 0x3780e0u: goto label_3780e0;
        case 0x3780e4u: goto label_3780e4;
        case 0x3780e8u: goto label_3780e8;
        case 0x3780ecu: goto label_3780ec;
        case 0x3780f0u: goto label_3780f0;
        case 0x3780f4u: goto label_3780f4;
        case 0x3780f8u: goto label_3780f8;
        case 0x3780fcu: goto label_3780fc;
        case 0x378100u: goto label_378100;
        case 0x378104u: goto label_378104;
        case 0x378108u: goto label_378108;
        case 0x37810cu: goto label_37810c;
        case 0x378110u: goto label_378110;
        case 0x378114u: goto label_378114;
        case 0x378118u: goto label_378118;
        case 0x37811cu: goto label_37811c;
        case 0x378120u: goto label_378120;
        case 0x378124u: goto label_378124;
        case 0x378128u: goto label_378128;
        case 0x37812cu: goto label_37812c;
        case 0x378130u: goto label_378130;
        case 0x378134u: goto label_378134;
        case 0x378138u: goto label_378138;
        case 0x37813cu: goto label_37813c;
        case 0x378140u: goto label_378140;
        case 0x378144u: goto label_378144;
        case 0x378148u: goto label_378148;
        case 0x37814cu: goto label_37814c;
        case 0x378150u: goto label_378150;
        case 0x378154u: goto label_378154;
        case 0x378158u: goto label_378158;
        case 0x37815cu: goto label_37815c;
        case 0x378160u: goto label_378160;
        case 0x378164u: goto label_378164;
        case 0x378168u: goto label_378168;
        case 0x37816cu: goto label_37816c;
        case 0x378170u: goto label_378170;
        case 0x378174u: goto label_378174;
        case 0x378178u: goto label_378178;
        case 0x37817cu: goto label_37817c;
        case 0x378180u: goto label_378180;
        case 0x378184u: goto label_378184;
        case 0x378188u: goto label_378188;
        case 0x37818cu: goto label_37818c;
        case 0x378190u: goto label_378190;
        case 0x378194u: goto label_378194;
        case 0x378198u: goto label_378198;
        case 0x37819cu: goto label_37819c;
        case 0x3781a0u: goto label_3781a0;
        case 0x3781a4u: goto label_3781a4;
        case 0x3781a8u: goto label_3781a8;
        case 0x3781acu: goto label_3781ac;
        case 0x3781b0u: goto label_3781b0;
        case 0x3781b4u: goto label_3781b4;
        case 0x3781b8u: goto label_3781b8;
        case 0x3781bcu: goto label_3781bc;
        case 0x3781c0u: goto label_3781c0;
        case 0x3781c4u: goto label_3781c4;
        case 0x3781c8u: goto label_3781c8;
        case 0x3781ccu: goto label_3781cc;
        case 0x3781d0u: goto label_3781d0;
        case 0x3781d4u: goto label_3781d4;
        case 0x3781d8u: goto label_3781d8;
        case 0x3781dcu: goto label_3781dc;
        case 0x3781e0u: goto label_3781e0;
        case 0x3781e4u: goto label_3781e4;
        case 0x3781e8u: goto label_3781e8;
        case 0x3781ecu: goto label_3781ec;
        case 0x3781f0u: goto label_3781f0;
        case 0x3781f4u: goto label_3781f4;
        case 0x3781f8u: goto label_3781f8;
        case 0x3781fcu: goto label_3781fc;
        case 0x378200u: goto label_378200;
        case 0x378204u: goto label_378204;
        case 0x378208u: goto label_378208;
        case 0x37820cu: goto label_37820c;
        case 0x378210u: goto label_378210;
        case 0x378214u: goto label_378214;
        case 0x378218u: goto label_378218;
        case 0x37821cu: goto label_37821c;
        case 0x378220u: goto label_378220;
        case 0x378224u: goto label_378224;
        case 0x378228u: goto label_378228;
        case 0x37822cu: goto label_37822c;
        case 0x378230u: goto label_378230;
        case 0x378234u: goto label_378234;
        case 0x378238u: goto label_378238;
        case 0x37823cu: goto label_37823c;
        case 0x378240u: goto label_378240;
        case 0x378244u: goto label_378244;
        case 0x378248u: goto label_378248;
        case 0x37824cu: goto label_37824c;
        case 0x378250u: goto label_378250;
        case 0x378254u: goto label_378254;
        case 0x378258u: goto label_378258;
        case 0x37825cu: goto label_37825c;
        case 0x378260u: goto label_378260;
        case 0x378264u: goto label_378264;
        case 0x378268u: goto label_378268;
        case 0x37826cu: goto label_37826c;
        case 0x378270u: goto label_378270;
        case 0x378274u: goto label_378274;
        case 0x378278u: goto label_378278;
        case 0x37827cu: goto label_37827c;
        case 0x378280u: goto label_378280;
        case 0x378284u: goto label_378284;
        case 0x378288u: goto label_378288;
        case 0x37828cu: goto label_37828c;
        case 0x378290u: goto label_378290;
        case 0x378294u: goto label_378294;
        case 0x378298u: goto label_378298;
        case 0x37829cu: goto label_37829c;
        case 0x3782a0u: goto label_3782a0;
        case 0x3782a4u: goto label_3782a4;
        case 0x3782a8u: goto label_3782a8;
        case 0x3782acu: goto label_3782ac;
        case 0x3782b0u: goto label_3782b0;
        case 0x3782b4u: goto label_3782b4;
        case 0x3782b8u: goto label_3782b8;
        case 0x3782bcu: goto label_3782bc;
        case 0x3782c0u: goto label_3782c0;
        case 0x3782c4u: goto label_3782c4;
        case 0x3782c8u: goto label_3782c8;
        case 0x3782ccu: goto label_3782cc;
        case 0x3782d0u: goto label_3782d0;
        case 0x3782d4u: goto label_3782d4;
        case 0x3782d8u: goto label_3782d8;
        case 0x3782dcu: goto label_3782dc;
        case 0x3782e0u: goto label_3782e0;
        case 0x3782e4u: goto label_3782e4;
        case 0x3782e8u: goto label_3782e8;
        case 0x3782ecu: goto label_3782ec;
        case 0x3782f0u: goto label_3782f0;
        case 0x3782f4u: goto label_3782f4;
        case 0x3782f8u: goto label_3782f8;
        case 0x3782fcu: goto label_3782fc;
        case 0x378300u: goto label_378300;
        case 0x378304u: goto label_378304;
        case 0x378308u: goto label_378308;
        case 0x37830cu: goto label_37830c;
        case 0x378310u: goto label_378310;
        case 0x378314u: goto label_378314;
        case 0x378318u: goto label_378318;
        case 0x37831cu: goto label_37831c;
        case 0x378320u: goto label_378320;
        case 0x378324u: goto label_378324;
        case 0x378328u: goto label_378328;
        case 0x37832cu: goto label_37832c;
        case 0x378330u: goto label_378330;
        case 0x378334u: goto label_378334;
        case 0x378338u: goto label_378338;
        case 0x37833cu: goto label_37833c;
        case 0x378340u: goto label_378340;
        case 0x378344u: goto label_378344;
        case 0x378348u: goto label_378348;
        case 0x37834cu: goto label_37834c;
        case 0x378350u: goto label_378350;
        case 0x378354u: goto label_378354;
        case 0x378358u: goto label_378358;
        case 0x37835cu: goto label_37835c;
        case 0x378360u: goto label_378360;
        case 0x378364u: goto label_378364;
        case 0x378368u: goto label_378368;
        case 0x37836cu: goto label_37836c;
        case 0x378370u: goto label_378370;
        case 0x378374u: goto label_378374;
        case 0x378378u: goto label_378378;
        case 0x37837cu: goto label_37837c;
        case 0x378380u: goto label_378380;
        case 0x378384u: goto label_378384;
        case 0x378388u: goto label_378388;
        case 0x37838cu: goto label_37838c;
        case 0x378390u: goto label_378390;
        case 0x378394u: goto label_378394;
        case 0x378398u: goto label_378398;
        case 0x37839cu: goto label_37839c;
        case 0x3783a0u: goto label_3783a0;
        case 0x3783a4u: goto label_3783a4;
        case 0x3783a8u: goto label_3783a8;
        case 0x3783acu: goto label_3783ac;
        case 0x3783b0u: goto label_3783b0;
        case 0x3783b4u: goto label_3783b4;
        case 0x3783b8u: goto label_3783b8;
        case 0x3783bcu: goto label_3783bc;
        case 0x3783c0u: goto label_3783c0;
        case 0x3783c4u: goto label_3783c4;
        case 0x3783c8u: goto label_3783c8;
        case 0x3783ccu: goto label_3783cc;
        case 0x3783d0u: goto label_3783d0;
        case 0x3783d4u: goto label_3783d4;
        case 0x3783d8u: goto label_3783d8;
        case 0x3783dcu: goto label_3783dc;
        case 0x3783e0u: goto label_3783e0;
        case 0x3783e4u: goto label_3783e4;
        case 0x3783e8u: goto label_3783e8;
        case 0x3783ecu: goto label_3783ec;
        case 0x3783f0u: goto label_3783f0;
        case 0x3783f4u: goto label_3783f4;
        case 0x3783f8u: goto label_3783f8;
        case 0x3783fcu: goto label_3783fc;
        case 0x378400u: goto label_378400;
        case 0x378404u: goto label_378404;
        case 0x378408u: goto label_378408;
        case 0x37840cu: goto label_37840c;
        case 0x378410u: goto label_378410;
        case 0x378414u: goto label_378414;
        case 0x378418u: goto label_378418;
        case 0x37841cu: goto label_37841c;
        case 0x378420u: goto label_378420;
        case 0x378424u: goto label_378424;
        case 0x378428u: goto label_378428;
        case 0x37842cu: goto label_37842c;
        case 0x378430u: goto label_378430;
        case 0x378434u: goto label_378434;
        case 0x378438u: goto label_378438;
        case 0x37843cu: goto label_37843c;
        case 0x378440u: goto label_378440;
        case 0x378444u: goto label_378444;
        case 0x378448u: goto label_378448;
        case 0x37844cu: goto label_37844c;
        case 0x378450u: goto label_378450;
        case 0x378454u: goto label_378454;
        case 0x378458u: goto label_378458;
        case 0x37845cu: goto label_37845c;
        case 0x378460u: goto label_378460;
        case 0x378464u: goto label_378464;
        case 0x378468u: goto label_378468;
        case 0x37846cu: goto label_37846c;
        case 0x378470u: goto label_378470;
        case 0x378474u: goto label_378474;
        case 0x378478u: goto label_378478;
        case 0x37847cu: goto label_37847c;
        case 0x378480u: goto label_378480;
        case 0x378484u: goto label_378484;
        case 0x378488u: goto label_378488;
        case 0x37848cu: goto label_37848c;
        case 0x378490u: goto label_378490;
        case 0x378494u: goto label_378494;
        case 0x378498u: goto label_378498;
        case 0x37849cu: goto label_37849c;
        case 0x3784a0u: goto label_3784a0;
        case 0x3784a4u: goto label_3784a4;
        case 0x3784a8u: goto label_3784a8;
        case 0x3784acu: goto label_3784ac;
        case 0x3784b0u: goto label_3784b0;
        case 0x3784b4u: goto label_3784b4;
        case 0x3784b8u: goto label_3784b8;
        case 0x3784bcu: goto label_3784bc;
        case 0x3784c0u: goto label_3784c0;
        case 0x3784c4u: goto label_3784c4;
        case 0x3784c8u: goto label_3784c8;
        case 0x3784ccu: goto label_3784cc;
        case 0x3784d0u: goto label_3784d0;
        case 0x3784d4u: goto label_3784d4;
        case 0x3784d8u: goto label_3784d8;
        case 0x3784dcu: goto label_3784dc;
        case 0x3784e0u: goto label_3784e0;
        case 0x3784e4u: goto label_3784e4;
        case 0x3784e8u: goto label_3784e8;
        case 0x3784ecu: goto label_3784ec;
        case 0x3784f0u: goto label_3784f0;
        case 0x3784f4u: goto label_3784f4;
        case 0x3784f8u: goto label_3784f8;
        case 0x3784fcu: goto label_3784fc;
        case 0x378500u: goto label_378500;
        case 0x378504u: goto label_378504;
        case 0x378508u: goto label_378508;
        case 0x37850cu: goto label_37850c;
        case 0x378510u: goto label_378510;
        case 0x378514u: goto label_378514;
        case 0x378518u: goto label_378518;
        case 0x37851cu: goto label_37851c;
        case 0x378520u: goto label_378520;
        case 0x378524u: goto label_378524;
        case 0x378528u: goto label_378528;
        case 0x37852cu: goto label_37852c;
        case 0x378530u: goto label_378530;
        case 0x378534u: goto label_378534;
        case 0x378538u: goto label_378538;
        case 0x37853cu: goto label_37853c;
        case 0x378540u: goto label_378540;
        case 0x378544u: goto label_378544;
        case 0x378548u: goto label_378548;
        case 0x37854cu: goto label_37854c;
        case 0x378550u: goto label_378550;
        case 0x378554u: goto label_378554;
        case 0x378558u: goto label_378558;
        case 0x37855cu: goto label_37855c;
        case 0x378560u: goto label_378560;
        case 0x378564u: goto label_378564;
        case 0x378568u: goto label_378568;
        case 0x37856cu: goto label_37856c;
        case 0x378570u: goto label_378570;
        case 0x378574u: goto label_378574;
        case 0x378578u: goto label_378578;
        case 0x37857cu: goto label_37857c;
        case 0x378580u: goto label_378580;
        case 0x378584u: goto label_378584;
        case 0x378588u: goto label_378588;
        case 0x37858cu: goto label_37858c;
        case 0x378590u: goto label_378590;
        case 0x378594u: goto label_378594;
        case 0x378598u: goto label_378598;
        case 0x37859cu: goto label_37859c;
        case 0x3785a0u: goto label_3785a0;
        case 0x3785a4u: goto label_3785a4;
        case 0x3785a8u: goto label_3785a8;
        case 0x3785acu: goto label_3785ac;
        case 0x3785b0u: goto label_3785b0;
        case 0x3785b4u: goto label_3785b4;
        case 0x3785b8u: goto label_3785b8;
        case 0x3785bcu: goto label_3785bc;
        case 0x3785c0u: goto label_3785c0;
        case 0x3785c4u: goto label_3785c4;
        case 0x3785c8u: goto label_3785c8;
        case 0x3785ccu: goto label_3785cc;
        case 0x3785d0u: goto label_3785d0;
        case 0x3785d4u: goto label_3785d4;
        case 0x3785d8u: goto label_3785d8;
        case 0x3785dcu: goto label_3785dc;
        case 0x3785e0u: goto label_3785e0;
        case 0x3785e4u: goto label_3785e4;
        case 0x3785e8u: goto label_3785e8;
        case 0x3785ecu: goto label_3785ec;
        case 0x3785f0u: goto label_3785f0;
        case 0x3785f4u: goto label_3785f4;
        case 0x3785f8u: goto label_3785f8;
        case 0x3785fcu: goto label_3785fc;
        case 0x378600u: goto label_378600;
        case 0x378604u: goto label_378604;
        case 0x378608u: goto label_378608;
        case 0x37860cu: goto label_37860c;
        case 0x378610u: goto label_378610;
        case 0x378614u: goto label_378614;
        case 0x378618u: goto label_378618;
        case 0x37861cu: goto label_37861c;
        case 0x378620u: goto label_378620;
        case 0x378624u: goto label_378624;
        case 0x378628u: goto label_378628;
        case 0x37862cu: goto label_37862c;
        case 0x378630u: goto label_378630;
        case 0x378634u: goto label_378634;
        case 0x378638u: goto label_378638;
        case 0x37863cu: goto label_37863c;
        case 0x378640u: goto label_378640;
        case 0x378644u: goto label_378644;
        case 0x378648u: goto label_378648;
        case 0x37864cu: goto label_37864c;
        case 0x378650u: goto label_378650;
        case 0x378654u: goto label_378654;
        case 0x378658u: goto label_378658;
        case 0x37865cu: goto label_37865c;
        case 0x378660u: goto label_378660;
        case 0x378664u: goto label_378664;
        case 0x378668u: goto label_378668;
        case 0x37866cu: goto label_37866c;
        case 0x378670u: goto label_378670;
        case 0x378674u: goto label_378674;
        case 0x378678u: goto label_378678;
        case 0x37867cu: goto label_37867c;
        case 0x378680u: goto label_378680;
        case 0x378684u: goto label_378684;
        case 0x378688u: goto label_378688;
        case 0x37868cu: goto label_37868c;
        case 0x378690u: goto label_378690;
        case 0x378694u: goto label_378694;
        case 0x378698u: goto label_378698;
        case 0x37869cu: goto label_37869c;
        case 0x3786a0u: goto label_3786a0;
        case 0x3786a4u: goto label_3786a4;
        case 0x3786a8u: goto label_3786a8;
        case 0x3786acu: goto label_3786ac;
        case 0x3786b0u: goto label_3786b0;
        case 0x3786b4u: goto label_3786b4;
        case 0x3786b8u: goto label_3786b8;
        case 0x3786bcu: goto label_3786bc;
        case 0x3786c0u: goto label_3786c0;
        case 0x3786c4u: goto label_3786c4;
        case 0x3786c8u: goto label_3786c8;
        case 0x3786ccu: goto label_3786cc;
        case 0x3786d0u: goto label_3786d0;
        case 0x3786d4u: goto label_3786d4;
        case 0x3786d8u: goto label_3786d8;
        case 0x3786dcu: goto label_3786dc;
        case 0x3786e0u: goto label_3786e0;
        case 0x3786e4u: goto label_3786e4;
        case 0x3786e8u: goto label_3786e8;
        case 0x3786ecu: goto label_3786ec;
        case 0x3786f0u: goto label_3786f0;
        case 0x3786f4u: goto label_3786f4;
        case 0x3786f8u: goto label_3786f8;
        case 0x3786fcu: goto label_3786fc;
        case 0x378700u: goto label_378700;
        case 0x378704u: goto label_378704;
        case 0x378708u: goto label_378708;
        case 0x37870cu: goto label_37870c;
        case 0x378710u: goto label_378710;
        case 0x378714u: goto label_378714;
        case 0x378718u: goto label_378718;
        case 0x37871cu: goto label_37871c;
        case 0x378720u: goto label_378720;
        case 0x378724u: goto label_378724;
        case 0x378728u: goto label_378728;
        case 0x37872cu: goto label_37872c;
        case 0x378730u: goto label_378730;
        case 0x378734u: goto label_378734;
        case 0x378738u: goto label_378738;
        case 0x37873cu: goto label_37873c;
        case 0x378740u: goto label_378740;
        case 0x378744u: goto label_378744;
        case 0x378748u: goto label_378748;
        case 0x37874cu: goto label_37874c;
        case 0x378750u: goto label_378750;
        case 0x378754u: goto label_378754;
        case 0x378758u: goto label_378758;
        case 0x37875cu: goto label_37875c;
        case 0x378760u: goto label_378760;
        case 0x378764u: goto label_378764;
        case 0x378768u: goto label_378768;
        case 0x37876cu: goto label_37876c;
        case 0x378770u: goto label_378770;
        case 0x378774u: goto label_378774;
        case 0x378778u: goto label_378778;
        case 0x37877cu: goto label_37877c;
        case 0x378780u: goto label_378780;
        case 0x378784u: goto label_378784;
        case 0x378788u: goto label_378788;
        case 0x37878cu: goto label_37878c;
        case 0x378790u: goto label_378790;
        case 0x378794u: goto label_378794;
        case 0x378798u: goto label_378798;
        case 0x37879cu: goto label_37879c;
        case 0x3787a0u: goto label_3787a0;
        case 0x3787a4u: goto label_3787a4;
        case 0x3787a8u: goto label_3787a8;
        case 0x3787acu: goto label_3787ac;
        case 0x3787b0u: goto label_3787b0;
        case 0x3787b4u: goto label_3787b4;
        case 0x3787b8u: goto label_3787b8;
        case 0x3787bcu: goto label_3787bc;
        case 0x3787c0u: goto label_3787c0;
        case 0x3787c4u: goto label_3787c4;
        case 0x3787c8u: goto label_3787c8;
        case 0x3787ccu: goto label_3787cc;
        case 0x3787d0u: goto label_3787d0;
        case 0x3787d4u: goto label_3787d4;
        case 0x3787d8u: goto label_3787d8;
        case 0x3787dcu: goto label_3787dc;
        case 0x3787e0u: goto label_3787e0;
        case 0x3787e4u: goto label_3787e4;
        case 0x3787e8u: goto label_3787e8;
        case 0x3787ecu: goto label_3787ec;
        case 0x3787f0u: goto label_3787f0;
        case 0x3787f4u: goto label_3787f4;
        case 0x3787f8u: goto label_3787f8;
        case 0x3787fcu: goto label_3787fc;
        case 0x378800u: goto label_378800;
        case 0x378804u: goto label_378804;
        case 0x378808u: goto label_378808;
        case 0x37880cu: goto label_37880c;
        case 0x378810u: goto label_378810;
        case 0x378814u: goto label_378814;
        case 0x378818u: goto label_378818;
        case 0x37881cu: goto label_37881c;
        case 0x378820u: goto label_378820;
        case 0x378824u: goto label_378824;
        case 0x378828u: goto label_378828;
        case 0x37882cu: goto label_37882c;
        case 0x378830u: goto label_378830;
        case 0x378834u: goto label_378834;
        case 0x378838u: goto label_378838;
        case 0x37883cu: goto label_37883c;
        case 0x378840u: goto label_378840;
        case 0x378844u: goto label_378844;
        case 0x378848u: goto label_378848;
        case 0x37884cu: goto label_37884c;
        case 0x378850u: goto label_378850;
        case 0x378854u: goto label_378854;
        case 0x378858u: goto label_378858;
        case 0x37885cu: goto label_37885c;
        case 0x378860u: goto label_378860;
        case 0x378864u: goto label_378864;
        case 0x378868u: goto label_378868;
        case 0x37886cu: goto label_37886c;
        case 0x378870u: goto label_378870;
        case 0x378874u: goto label_378874;
        case 0x378878u: goto label_378878;
        case 0x37887cu: goto label_37887c;
        case 0x378880u: goto label_378880;
        case 0x378884u: goto label_378884;
        case 0x378888u: goto label_378888;
        case 0x37888cu: goto label_37888c;
        case 0x378890u: goto label_378890;
        case 0x378894u: goto label_378894;
        case 0x378898u: goto label_378898;
        case 0x37889cu: goto label_37889c;
        case 0x3788a0u: goto label_3788a0;
        case 0x3788a4u: goto label_3788a4;
        case 0x3788a8u: goto label_3788a8;
        case 0x3788acu: goto label_3788ac;
        case 0x3788b0u: goto label_3788b0;
        case 0x3788b4u: goto label_3788b4;
        case 0x3788b8u: goto label_3788b8;
        case 0x3788bcu: goto label_3788bc;
        case 0x3788c0u: goto label_3788c0;
        case 0x3788c4u: goto label_3788c4;
        case 0x3788c8u: goto label_3788c8;
        case 0x3788ccu: goto label_3788cc;
        case 0x3788d0u: goto label_3788d0;
        case 0x3788d4u: goto label_3788d4;
        case 0x3788d8u: goto label_3788d8;
        case 0x3788dcu: goto label_3788dc;
        case 0x3788e0u: goto label_3788e0;
        case 0x3788e4u: goto label_3788e4;
        case 0x3788e8u: goto label_3788e8;
        case 0x3788ecu: goto label_3788ec;
        case 0x3788f0u: goto label_3788f0;
        case 0x3788f4u: goto label_3788f4;
        case 0x3788f8u: goto label_3788f8;
        case 0x3788fcu: goto label_3788fc;
        case 0x378900u: goto label_378900;
        case 0x378904u: goto label_378904;
        case 0x378908u: goto label_378908;
        case 0x37890cu: goto label_37890c;
        case 0x378910u: goto label_378910;
        case 0x378914u: goto label_378914;
        case 0x378918u: goto label_378918;
        case 0x37891cu: goto label_37891c;
        case 0x378920u: goto label_378920;
        case 0x378924u: goto label_378924;
        case 0x378928u: goto label_378928;
        case 0x37892cu: goto label_37892c;
        case 0x378930u: goto label_378930;
        case 0x378934u: goto label_378934;
        case 0x378938u: goto label_378938;
        case 0x37893cu: goto label_37893c;
        case 0x378940u: goto label_378940;
        case 0x378944u: goto label_378944;
        case 0x378948u: goto label_378948;
        case 0x37894cu: goto label_37894c;
        case 0x378950u: goto label_378950;
        case 0x378954u: goto label_378954;
        case 0x378958u: goto label_378958;
        case 0x37895cu: goto label_37895c;
        case 0x378960u: goto label_378960;
        case 0x378964u: goto label_378964;
        case 0x378968u: goto label_378968;
        case 0x37896cu: goto label_37896c;
        case 0x378970u: goto label_378970;
        case 0x378974u: goto label_378974;
        case 0x378978u: goto label_378978;
        case 0x37897cu: goto label_37897c;
        case 0x378980u: goto label_378980;
        case 0x378984u: goto label_378984;
        case 0x378988u: goto label_378988;
        case 0x37898cu: goto label_37898c;
        case 0x378990u: goto label_378990;
        case 0x378994u: goto label_378994;
        case 0x378998u: goto label_378998;
        case 0x37899cu: goto label_37899c;
        case 0x3789a0u: goto label_3789a0;
        case 0x3789a4u: goto label_3789a4;
        case 0x3789a8u: goto label_3789a8;
        case 0x3789acu: goto label_3789ac;
        case 0x3789b0u: goto label_3789b0;
        case 0x3789b4u: goto label_3789b4;
        case 0x3789b8u: goto label_3789b8;
        case 0x3789bcu: goto label_3789bc;
        case 0x3789c0u: goto label_3789c0;
        case 0x3789c4u: goto label_3789c4;
        case 0x3789c8u: goto label_3789c8;
        case 0x3789ccu: goto label_3789cc;
        case 0x3789d0u: goto label_3789d0;
        case 0x3789d4u: goto label_3789d4;
        case 0x3789d8u: goto label_3789d8;
        case 0x3789dcu: goto label_3789dc;
        case 0x3789e0u: goto label_3789e0;
        case 0x3789e4u: goto label_3789e4;
        case 0x3789e8u: goto label_3789e8;
        case 0x3789ecu: goto label_3789ec;
        case 0x3789f0u: goto label_3789f0;
        case 0x3789f4u: goto label_3789f4;
        case 0x3789f8u: goto label_3789f8;
        case 0x3789fcu: goto label_3789fc;
        case 0x378a00u: goto label_378a00;
        case 0x378a04u: goto label_378a04;
        case 0x378a08u: goto label_378a08;
        case 0x378a0cu: goto label_378a0c;
        case 0x378a10u: goto label_378a10;
        case 0x378a14u: goto label_378a14;
        case 0x378a18u: goto label_378a18;
        case 0x378a1cu: goto label_378a1c;
        case 0x378a20u: goto label_378a20;
        case 0x378a24u: goto label_378a24;
        case 0x378a28u: goto label_378a28;
        case 0x378a2cu: goto label_378a2c;
        case 0x378a30u: goto label_378a30;
        case 0x378a34u: goto label_378a34;
        case 0x378a38u: goto label_378a38;
        case 0x378a3cu: goto label_378a3c;
        case 0x378a40u: goto label_378a40;
        case 0x378a44u: goto label_378a44;
        case 0x378a48u: goto label_378a48;
        case 0x378a4cu: goto label_378a4c;
        case 0x378a50u: goto label_378a50;
        case 0x378a54u: goto label_378a54;
        case 0x378a58u: goto label_378a58;
        case 0x378a5cu: goto label_378a5c;
        case 0x378a60u: goto label_378a60;
        case 0x378a64u: goto label_378a64;
        case 0x378a68u: goto label_378a68;
        case 0x378a6cu: goto label_378a6c;
        case 0x378a70u: goto label_378a70;
        case 0x378a74u: goto label_378a74;
        case 0x378a78u: goto label_378a78;
        case 0x378a7cu: goto label_378a7c;
        case 0x378a80u: goto label_378a80;
        case 0x378a84u: goto label_378a84;
        case 0x378a88u: goto label_378a88;
        case 0x378a8cu: goto label_378a8c;
        case 0x378a90u: goto label_378a90;
        case 0x378a94u: goto label_378a94;
        case 0x378a98u: goto label_378a98;
        case 0x378a9cu: goto label_378a9c;
        case 0x378aa0u: goto label_378aa0;
        case 0x378aa4u: goto label_378aa4;
        case 0x378aa8u: goto label_378aa8;
        case 0x378aacu: goto label_378aac;
        case 0x378ab0u: goto label_378ab0;
        case 0x378ab4u: goto label_378ab4;
        case 0x378ab8u: goto label_378ab8;
        default: break;
    }

    ctx->pc = 0x377e30u;

label_377e30:
    // 0x377e30: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x377e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_377e34:
    // 0x377e34: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x377e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_377e38:
    // 0x377e38: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x377e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_377e3c:
    // 0x377e3c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x377e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_377e40:
    // 0x377e40: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x377e40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_377e44:
    // 0x377e44: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x377e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_377e48:
    // 0x377e48: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x377e48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_377e4c:
    // 0x377e4c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x377e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_377e50:
    // 0x377e50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x377e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_377e54:
    // 0x377e54: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
label_377e58:
    if (ctx->pc == 0x377E58u) {
        ctx->pc = 0x377E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E54u;
        // 0x377e58: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x377E5Cu;
        goto label_377e5c;
    }
    ctx->pc = 0x377E54u;
    {
        const bool branch_taken_0x377e54 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x377E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E54u;
        // 0x377e58: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x377e54) {
            ctx->pc = 0x377E70u;
            goto label_377e70;
        }
    }
    ctx->pc = 0x377E5Cu;
label_377e5c:
    // 0x377e5c: 0xc0c0830  jal         func_3020C0
label_377e60:
    if (ctx->pc == 0x377E60u) {
        ctx->pc = 0x377E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E5Cu;
        // 0x377e60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377E64u;
        goto label_377e64;
    }
    ctx->pc = 0x377E5Cu;
    SET_GPR_U32(ctx, 31, 0x377E64u);
    ctx->pc = 0x377E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E5Cu;
    // 0x377e60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x377E5Cu, 0x377E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377E64u;
label_377e64:
    // 0x377e64: 0x1000030c  b           . + 4 + (0x30C << 2)
label_377e68:
    if (ctx->pc == 0x377E68u) {
        ctx->pc = 0x377E6Cu;
        goto label_377e6c;
    }
    ctx->pc = 0x377E64u;
    {
        const bool branch_taken_0x377e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377e64) {
            ctx->pc = 0x378A98u;
            goto label_378a98;
        }
    }
    ctx->pc = 0x377E6Cu;
label_377e6c:
    // 0x377e6c: 0x0  nop
    ctx->pc = 0x377e6cu;
    // NOP
label_377e70:
    // 0x377e70: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_377e74:
    if (ctx->pc == 0x377E74u) {
        ctx->pc = 0x377E78u;
        goto label_377e78;
    }
    ctx->pc = 0x377E70u;
    {
        const bool branch_taken_0x377e70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x377e70) {
            ctx->pc = 0x377E98u;
            goto label_377e98;
        }
    }
    ctx->pc = 0x377E78u;
label_377e78:
    // 0x377e78: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x377e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_377e7c:
    // 0x377e7c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x377e7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_377e80:
    // 0x377e80: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_377e84:
    if (ctx->pc == 0x377E84u) {
        ctx->pc = 0x377E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E80u;
        // 0x377e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377E88u;
        goto label_377e88;
    }
    ctx->pc = 0x377E80u;
    {
        const bool branch_taken_0x377e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x377E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E80u;
        // 0x377e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377e80) {
            ctx->pc = 0x377E98u;
            goto label_377e98;
        }
    }
    ctx->pc = 0x377E88u;
label_377e88:
    // 0x377e88: 0xc0c0830  jal         func_3020C0
label_377e8c:
    if (ctx->pc == 0x377E8Cu) {
        ctx->pc = 0x377E90u;
        goto label_377e90;
    }
    ctx->pc = 0x377E88u;
    SET_GPR_U32(ctx, 31, 0x377E90u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x377E88u, 0x377E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377E90u;
label_377e90:
    // 0x377e90: 0x10000301  b           . + 4 + (0x301 << 2)
label_377e94:
    if (ctx->pc == 0x377E94u) {
        ctx->pc = 0x377E98u;
        goto label_377e98;
    }
    ctx->pc = 0x377E90u;
    {
        const bool branch_taken_0x377e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377e90) {
            ctx->pc = 0x378A98u;
            goto label_378a98;
        }
    }
    ctx->pc = 0x377E98u;
label_377e98:
    // 0x377e98: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x377e98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
label_377e9c:
    // 0x377e9c: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x377e9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_377ea0:
    // 0x377ea0: 0x102002fd  beqz        $at, . + 4 + (0x2FD << 2)
label_377ea4:
    if (ctx->pc == 0x377EA4u) {
        ctx->pc = 0x377EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377EA0u;
        // 0x377ea4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377EA8u;
        goto label_377ea8;
    }
    ctx->pc = 0x377EA0u;
    {
        const bool branch_taken_0x377ea0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x377EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377EA0u;
        // 0x377ea4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377ea0) {
            ctx->pc = 0x378A98u;
            goto label_378a98;
        }
    }
    ctx->pc = 0x377EA8u;
label_377ea8:
    // 0x377ea8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x377ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_377eac:
    // 0x377eac: 0x24841bc0  addiu       $a0, $a0, 0x1BC0
    ctx->pc = 0x377eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7104));
label_377eb0:
    // 0x377eb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_377eb4:
    // 0x377eb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x377eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_377eb8:
    // 0x377eb8: 0x600008  jr          $v1
label_377ebc:
    if (ctx->pc == 0x377EBCu) {
        ctx->pc = 0x377EC0u;
        goto label_377ec0;
    }
    ctx->pc = 0x377EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x377EC0u: goto label_377ec0;
            case 0x377F38u: goto label_377f38;
            case 0x377F58u: goto label_377f58;
            case 0x378100u: goto label_378100;
            case 0x378188u: goto label_378188;
            case 0x378488u: goto label_378488;
            case 0x3784A8u: goto label_3784a8;
            case 0x3785D0u: goto label_3785d0;
            case 0x3785F0u: goto label_3785f0;
            case 0x378790u: goto label_378790;
            case 0x3788B8u: goto label_3788b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377EB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x377EC0u;
label_377ec0:
    // 0x377ec0: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
label_377ec4:
    if (ctx->pc == 0x377EC4u) {
        ctx->pc = 0x377EC8u;
        goto label_377ec8;
    }
    ctx->pc = 0x377EC0u;
    {
        const bool branch_taken_0x377ec0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x377ec0) {
            ctx->pc = 0x377F18u;
            goto label_377f18;
        }
    }
    ctx->pc = 0x377EC8u;
label_377ec8:
    // 0x377ec8: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x377ec8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
label_377ecc:
    // 0x377ecc: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x377eccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
label_377ed0:
    // 0x377ed0: 0xc0aa124  jal         func_2A8490
label_377ed4:
    if (ctx->pc == 0x377ED4u) {
        ctx->pc = 0x377ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377ED0u;
        // 0x377ed4: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377ED8u;
        goto label_377ed8;
    }
    ctx->pc = 0x377ED0u;
    SET_GPR_U32(ctx, 31, 0x377ED8u);
    ctx->pc = 0x377ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377ED0u;
    // 0x377ed4: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8490u, 0x377ED0u, 0x377ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377ED8u;
label_377ed8:
    // 0x377ed8: 0xae8205a0  sw          $v0, 0x5A0($s4)
    ctx->pc = 0x377ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1440), GPR_U32(ctx, 2));
label_377edc:
    // 0x377edc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x377edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_377ee0:
    // 0x377ee0: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x377ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
label_377ee4:
    // 0x377ee4: 0x3c022200  lui         $v0, 0x2200
    ctx->pc = 0x377ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8704 << 16));
label_377ee8:
    // 0x377ee8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x377ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_377eec:
    // 0x377eec: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x377eecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
label_377ef0:
    // 0x377ef0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x377ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377ef4:
    // 0x377ef4: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x377ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_377ef8:
    // 0x377ef8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x377ef8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377efc:
    // 0x377efc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x377efcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377f00:
    // 0x377f00: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x377f00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377f04:
    // 0x377f04: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x377f04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377f08:
    // 0x377f08: 0xc05e9e8  jal         func_17A7A0
label_377f0c:
    if (ctx->pc == 0x377F0Cu) {
        ctx->pc = 0x377F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F08u;
        // 0x377f0c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377F10u;
        goto label_377f10;
    }
    ctx->pc = 0x377F08u;
    SET_GPR_U32(ctx, 31, 0x377F10u);
    ctx->pc = 0x377F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377F08u;
    // 0x377f0c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x377F08u, 0x377F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377F10u;
label_377f10:
    // 0x377f10: 0x10000005  b           . + 4 + (0x5 << 2)
label_377f14:
    if (ctx->pc == 0x377F14u) {
        ctx->pc = 0x377F18u;
        goto label_377f18;
    }
    ctx->pc = 0x377F10u;
    {
        const bool branch_taken_0x377f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377f10) {
            ctx->pc = 0x377F28u;
            goto label_377f28;
        }
    }
    ctx->pc = 0x377F18u;
label_377f18:
    // 0x377f18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x377f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_377f1c:
    // 0x377f1c: 0xc0c0830  jal         func_3020C0
label_377f20:
    if (ctx->pc == 0x377F20u) {
        ctx->pc = 0x377F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F1Cu;
        // 0x377f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377F24u;
        goto label_377f24;
    }
    ctx->pc = 0x377F1Cu;
    SET_GPR_U32(ctx, 31, 0x377F24u);
    ctx->pc = 0x377F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377F1Cu;
    // 0x377f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x377F1Cu, 0x377F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377F24u;
label_377f24:
    // 0x377f24: 0x0  nop
    ctx->pc = 0x377f24u;
    // NOP
label_377f28:
    // 0x377f28: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x377f28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
label_377f2c:
    // 0x377f2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x377f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_377f30:
    // 0x377f30: 0x100002d9  b           . + 4 + (0x2D9 << 2)
label_377f34:
    if (ctx->pc == 0x377F34u) {
        ctx->pc = 0x377F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F30u;
        // 0x377f34: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377F38u;
        goto label_377f38;
    }
    ctx->pc = 0x377F30u;
    {
        const bool branch_taken_0x377f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F30u;
        // 0x377f34: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377f30) {
            ctx->pc = 0x378A98u;
            goto label_378a98;
        }
    }
    ctx->pc = 0x377F38u;
label_377f38:
    // 0x377f38: 0x86820526  lh          $v0, 0x526($s4)
    ctx->pc = 0x377f38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1318)));
label_377f3c:
    // 0x377f3c: 0xa6820512  sh          $v0, 0x512($s4)
    ctx->pc = 0x377f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 2));
label_377f40:
    // 0x377f40: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x377f40u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
label_377f44:
    // 0x377f44: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x377f44u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
label_377f48:
    // 0x377f48: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x377f48u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
label_377f4c:
    // 0x377f4c: 0x92820521  lbu         $v0, 0x521($s4)
    ctx->pc = 0x377f4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
label_377f50:
    // 0x377f50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x377f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_377f54:
    // 0x377f54: 0xa2820521  sb          $v0, 0x521($s4)
    ctx->pc = 0x377f54u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
label_377f58:
    // 0x377f58: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x377f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_377f5c:
    // 0x377f5c: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x377f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
label_377f60:
    // 0x377f60: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x377f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_377f64:
    // 0x377f64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x377f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_377f68:
    // 0x377f68: 0x26850090  addiu       $a1, $s4, 0x90
    ctx->pc = 0x377f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_377f6c:
    // 0x377f6c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x377f6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_377f70:
    // 0x377f70: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x377f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_377f74:
    // 0x377f74: 0xc07681c  jal         func_1DA070
label_377f78:
    if (ctx->pc == 0x377F78u) {
        ctx->pc = 0x377F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F74u;
        // 0x377f78: 0x268600a0  addiu       $a2, $s4, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377F7Cu;
        goto label_377f7c;
    }
    ctx->pc = 0x377F74u;
    SET_GPR_U32(ctx, 31, 0x377F7Cu);
    ctx->pc = 0x377F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377F74u;
    // 0x377f78: 0x268600a0  addiu       $a2, $s4, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x377F74u, 0x377F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377F7Cu;
label_377f7c:
    // 0x377f7c: 0x8e8605a0  lw          $a2, 0x5A0($s4)
    ctx->pc = 0x377f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1440)));
label_377f80:
    // 0x377f80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x377f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_377f84:
    // 0x377f84: 0xc0c08b4  jal         func_3022D0
label_377f88:
    if (ctx->pc == 0x377F88u) {
        ctx->pc = 0x377F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F84u;
        // 0x377f88: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377F8Cu;
        goto label_377f8c;
    }
    ctx->pc = 0x377F84u;
    SET_GPR_U32(ctx, 31, 0x377F8Cu);
    ctx->pc = 0x377F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377F84u;
    // 0x377f88: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x377F84u, 0x377F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377F8Cu;
label_377f8c:
    // 0x377f8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_377f90:
    if (ctx->pc == 0x377F90u) {
        ctx->pc = 0x377F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F8Cu;
        // 0x377f90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377F94u;
        goto label_377f94;
    }
    ctx->pc = 0x377F8Cu;
    {
        const bool branch_taken_0x377f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F8Cu;
        // 0x377f90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377f8c) {
            ctx->pc = 0x377FA0u;
            goto label_377fa0;
        }
    }
    ctx->pc = 0x377F94u;
label_377f94:
    // 0x377f94: 0xc0c0830  jal         func_3020C0
label_377f98:
    if (ctx->pc == 0x377F98u) {
        ctx->pc = 0x377F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F94u;
        // 0x377f98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377F9Cu;
        goto label_377f9c;
    }
    ctx->pc = 0x377F94u;
    SET_GPR_U32(ctx, 31, 0x377F9Cu);
    ctx->pc = 0x377F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377F94u;
    // 0x377f98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x377F94u, 0x377F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377F9Cu;
label_377f9c:
    // 0x377f9c: 0x0  nop
    ctx->pc = 0x377f9cu;
    // NOP
label_377fa0:
    // 0x377fa0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x377fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_377fa4:
    // 0x377fa4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x377fa4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
label_377fa8:
    // 0x377fa8: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x377fa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_377fac:
    // 0x377fac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x377facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_377fb0:
    // 0x377fb0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x377fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_377fb4:
    // 0x377fb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x377fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377fb8:
    // 0x377fb8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x377fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_377fbc:
    // 0x377fbc: 0x7fa900a0  sq          $t1, 0xA0($sp)
    ctx->pc = 0x377fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 9));
label_377fc0:
    // 0x377fc0: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x377fc0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 1), 23600)));
label_377fc4:
    // 0x377fc4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x377fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_377fc8:
    // 0x377fc8: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x377fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
label_377fcc:
    // 0x377fcc: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x377fccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23616)));
label_377fd0:
    // 0x377fd0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x377fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_377fd4:
    // 0x377fd4: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x377fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_377fd8:
    // 0x377fd8: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x377fd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23632)));
label_377fdc:
    // 0x377fdc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x377fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_377fe0:
    // 0x377fe0: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x377fe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_377fe4:
    // 0x377fe4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x377fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_377fe8:
    // 0x377fe8: 0x928605a8  lbu         $a2, 0x5A8($s4)
    ctx->pc = 0x377fe8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1448)));
label_377fec:
    // 0x377fec: 0xc68c05a4  lwc1        $f12, 0x5A4($s4)
    ctx->pc = 0x377fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_377ff0:
    // 0x377ff0: 0xc0c0900  jal         func_302400
label_377ff4:
    if (ctx->pc == 0x377FF4u) {
        ctx->pc = 0x377FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377FF0u;
        // 0x377ff4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377FF8u;
        goto label_377ff8;
    }
    ctx->pc = 0x377FF0u;
    SET_GPR_U32(ctx, 31, 0x377FF8u);
    ctx->pc = 0x377FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377FF0u;
    // 0x377ff4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x377FF0u, 0x377FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377FF8u;
label_377ff8:
    // 0x377ff8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x377ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_377ffc:
    // 0x377ffc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x377ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_378000:
    // 0x378000: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x378000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_378004:
    // 0x378004: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x378004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_378008:
    // 0x378008: 0x26860080  addiu       $a2, $s4, 0x80
    ctx->pc = 0x378008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_37800c:
    // 0x37800c: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x37800cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_378010:
    // 0x378010: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x378010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_378014:
    // 0x378014: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x378014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_378018:
    // 0x378018: 0xc0c0980  jal         func_302600
label_37801c:
    if (ctx->pc == 0x37801Cu) {
        ctx->pc = 0x37801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378018u;
        // 0x37801c: 0x27aa00ec  addiu       $t2, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378020u;
        goto label_378020;
    }
    ctx->pc = 0x378018u;
    SET_GPR_U32(ctx, 31, 0x378020u);
    ctx->pc = 0x37801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378018u;
    // 0x37801c: 0x27aa00ec  addiu       $t2, $sp, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x378018u, 0x378020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378020u;
label_378020:
    // 0x378020: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_378024:
    if (ctx->pc == 0x378024u) {
        ctx->pc = 0x378028u;
        goto label_378028;
    }
    ctx->pc = 0x378020u;
    {
        const bool branch_taken_0x378020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x378020) {
            ctx->pc = 0x378050u;
            goto label_378050;
        }
    }
    ctx->pc = 0x378028u;
label_378028:
    // 0x378028: 0x8e8605a0  lw          $a2, 0x5A0($s4)
    ctx->pc = 0x378028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1440)));
label_37802c:
    // 0x37802c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37802cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_378030:
    // 0x378030: 0xc0c08b4  jal         func_3022D0
label_378034:
    if (ctx->pc == 0x378034u) {
        ctx->pc = 0x378034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378030u;
        // 0x378034: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378038u;
        goto label_378038;
    }
    ctx->pc = 0x378030u;
    SET_GPR_U32(ctx, 31, 0x378038u);
    ctx->pc = 0x378034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378030u;
    // 0x378034: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x378030u, 0x378038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378038u;
label_378038:
    // 0x378038: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x378038u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_37803c:
    // 0x37803c: 0x7e830590  sq          $v1, 0x590($s4)
    ctx->pc = 0x37803cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 1424), GPR_VEC(ctx, 3));
label_378040:
    // 0x378040: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x378040u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
label_378044:
    // 0x378044: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x378044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_378048:
    // 0x378048: 0x10000293  b           . + 4 + (0x293 << 2)
label_37804c:
    if (ctx->pc == 0x37804Cu) {
        ctx->pc = 0x37804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378048u;
        // 0x37804c: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378050u;
        goto label_378050;
    }
    ctx->pc = 0x378048u;
    {
        const bool branch_taken_0x378048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378048u;
        // 0x37804c: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378048) {
            ctx->pc = 0x378A98u;
            goto label_378a98;
        }
    }
    ctx->pc = 0x378050u;
label_378050:
    // 0x378050: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x378050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
label_378054:
    // 0x378054: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_378058:
    if (ctx->pc == 0x378058u) {
        ctx->pc = 0x378058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378054u;
        // 0x378058: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37805Cu;
        goto label_37805c;
    }
    ctx->pc = 0x378054u;
    {
        const bool branch_taken_0x378054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x378058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378054u;
        // 0x378058: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378054) {
            ctx->pc = 0x378068u;
            goto label_378068;
        }
    }
    ctx->pc = 0x37805Cu;
label_37805c:
    // 0x37805c: 0x10000022  b           . + 4 + (0x22 << 2)
label_378060:
    if (ctx->pc == 0x378060u) {
        ctx->pc = 0x378064u;
        goto label_378064;
    }
    ctx->pc = 0x37805Cu;
    {
        const bool branch_taken_0x37805c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37805c) {
            ctx->pc = 0x3780E8u;
            goto label_3780e8;
        }
    }
    ctx->pc = 0x378064u;
label_378064:
    // 0x378064: 0x0  nop
    ctx->pc = 0x378064u;
    // NOP
label_378068:
    // 0x378068: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x378068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_37806c:
    // 0x37806c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x37806cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_378070:
    // 0x378070: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x378070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_378074:
    // 0x378074: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x378074u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_378078:
    // 0x378078: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x378078u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
label_37807c:
    // 0x37807c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_378080:
    if (ctx->pc == 0x378080u) {
        ctx->pc = 0x378084u;
        goto label_378084;
    }
    ctx->pc = 0x37807Cu;
    {
        const bool branch_taken_0x37807c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x37807c) {
            ctx->pc = 0x3780B8u;
            goto label_3780b8;
        }
    }
    ctx->pc = 0x378084u;
label_378084:
    // 0x378084: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x378084u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_378088:
    // 0x378088: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x378088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_37808c:
    // 0x37808c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_378090:
    if (ctx->pc == 0x378090u) {
        ctx->pc = 0x378090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37808Cu;
        // 0x378090: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378094u;
        goto label_378094;
    }
    ctx->pc = 0x37808Cu;
    {
        const bool branch_taken_0x37808c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x378090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37808Cu;
        // 0x378090: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37808c) {
            ctx->pc = 0x3780E0u;
            goto label_3780e0;
        }
    }
    ctx->pc = 0x378094u;
label_378094:
    // 0x378094: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_378098:
    // 0x378098: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x378098u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_37809c:
    // 0x37809c: 0x0  nop
    ctx->pc = 0x37809cu;
    // NOP
label_3780a0:
    // 0x3780a0: 0x0  nop
    ctx->pc = 0x3780a0u;
    // NOP
label_3780a4:
    // 0x3780a4: 0x2010  mfhi        $a0
    ctx->pc = 0x3780a4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3780a8:
    // 0x3780a8: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3780a8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3780ac:
    // 0x3780ac: 0x1000000c  b           . + 4 + (0xC << 2)
label_3780b0:
    if (ctx->pc == 0x3780B0u) {
        ctx->pc = 0x3780B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3780ACu;
        // 0x3780b0: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3780B4u;
        goto label_3780b4;
    }
    ctx->pc = 0x3780ACu;
    {
        const bool branch_taken_0x3780ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3780B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3780ACu;
        // 0x3780b0: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3780ac) {
            ctx->pc = 0x3780E0u;
            goto label_3780e0;
        }
    }
    ctx->pc = 0x3780B4u;
label_3780b4:
    // 0x3780b4: 0x0  nop
    ctx->pc = 0x3780b4u;
    // NOP
label_3780b8:
    // 0x3780b8: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x3780b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3780bc:
    // 0x3780bc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3780bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3780c0:
    // 0x3780c0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3780c4:
    if (ctx->pc == 0x3780C4u) {
        ctx->pc = 0x3780C8u;
        goto label_3780c8;
    }
    ctx->pc = 0x3780C0u;
    {
        const bool branch_taken_0x3780c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3780c0) {
            ctx->pc = 0x3780E0u;
            goto label_3780e0;
        }
    }
    ctx->pc = 0x3780C8u;
label_3780c8:
    // 0x3780c8: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3780c8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3780cc:
    // 0x3780cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3780ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3780d0:
    // 0x3780d0: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x3780d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
label_3780d4:
    // 0x3780d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3780d8:
    if (ctx->pc == 0x3780D8u) {
        ctx->pc = 0x3780D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3780D4u;
        // 0x3780d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3780DCu;
        goto label_3780dc;
    }
    ctx->pc = 0x3780D4u;
    {
        const bool branch_taken_0x3780d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3780D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3780D4u;
        // 0x3780d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3780d4) {
            ctx->pc = 0x3780E8u;
            goto label_3780e8;
        }
    }
    ctx->pc = 0x3780DCu;
label_3780dc:
    // 0x3780dc: 0x0  nop
    ctx->pc = 0x3780dcu;
    // NOP
label_3780e0:
    // 0x3780e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3780e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3780e4:
    // 0x3780e4: 0x0  nop
    ctx->pc = 0x3780e4u;
    // NOP
label_3780e8:
    // 0x3780e8: 0x1460026b  bnez        $v1, . + 4 + (0x26B << 2)
label_3780ec:
    if (ctx->pc == 0x3780ECu) {
        ctx->pc = 0x3780ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3780E8u;
        // 0x3780ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3780F0u;
        goto label_3780f0;
    }
    ctx->pc = 0x3780E8u;
    {
        const bool branch_taken_0x3780e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3780ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3780E8u;
        // 0x3780ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3780e8) {
            ctx->pc = 0x378A98u;
            goto label_378a98;
        }
    }
    ctx->pc = 0x3780F0u;
label_3780f0:
    // 0x3780f0: 0xc0c0830  jal         func_3020C0
label_3780f4:
    if (ctx->pc == 0x3780F4u) {
        ctx->pc = 0x3780F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3780F0u;
        // 0x3780f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3780F8u;
        goto label_3780f8;
    }
    ctx->pc = 0x3780F0u;
    SET_GPR_U32(ctx, 31, 0x3780F8u);
    ctx->pc = 0x3780F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3780F0u;
    // 0x3780f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3780F0u, 0x3780F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3780F8u;
label_3780f8:
    // 0x3780f8: 0x10000267  b           . + 4 + (0x267 << 2)
label_3780fc:
    if (ctx->pc == 0x3780FCu) {
        ctx->pc = 0x378100u;
        goto label_378100;
    }
    ctx->pc = 0x3780F8u;
    {
        const bool branch_taken_0x3780f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3780f8) {
            ctx->pc = 0x378A98u;
            goto label_378a98;
        }
    }
    ctx->pc = 0x378100u;
label_378100:
    // 0x378100: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x378100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_378104:
    // 0x378104: 0xa28205a8  sb          $v0, 0x5A8($s4)
    ctx->pc = 0x378104u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1448), (uint8_t)GPR_U32(ctx, 2));
label_378108:
    // 0x378108: 0xc096c3c  jal         func_25B0F0
label_37810c:
    if (ctx->pc == 0x37810Cu) {
        ctx->pc = 0x37810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378108u;
        // 0x37810c: 0x8e8405a0  lw          $a0, 0x5A0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378110u;
        goto label_378110;
    }
    ctx->pc = 0x378108u;
    SET_GPR_U32(ctx, 31, 0x378110u);
    ctx->pc = 0x37810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378108u;
    // 0x37810c: 0x8e8405a0  lw          $a0, 0x5A0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x378108u, 0x378110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378110u;
label_378110:
    // 0x378110: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
label_378114:
    if (ctx->pc == 0x378114u) {
        ctx->pc = 0x378114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378110u;
        // 0x378114: 0xae8005a0  sw          $zero, 0x5A0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378118u;
        goto label_378118;
    }
    ctx->pc = 0x378110u;
    {
        const bool branch_taken_0x378110 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x378114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378110u;
        // 0x378114: 0xae8005a0  sw          $zero, 0x5A0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378110) {
            ctx->pc = 0x378160u;
            goto label_378160;
        }
    }
    ctx->pc = 0x378118u;
label_378118:
    // 0x378118: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x378118u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
label_37811c:
    // 0x37811c: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x37811cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
label_378120:
    // 0x378120: 0xc0aa148  jal         func_2A8520
label_378124:
    if (ctx->pc == 0x378124u) {
        ctx->pc = 0x378124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378120u;
        // 0x378124: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378128u;
        goto label_378128;
    }
    ctx->pc = 0x378120u;
    SET_GPR_U32(ctx, 31, 0x378128u);
    ctx->pc = 0x378124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378120u;
    // 0x378124: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8520u, 0x378120u, 0x378128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378128u;
label_378128:
    // 0x378128: 0xae8205a0  sw          $v0, 0x5A0($s4)
    ctx->pc = 0x378128u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1440), GPR_U32(ctx, 2));
label_37812c:
    // 0x37812c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37812cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_378130:
    // 0x378130: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x378130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
label_378134:
    // 0x378134: 0x3c022300  lui         $v0, 0x2300
    ctx->pc = 0x378134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
label_378138:
    // 0x378138: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x378138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_37813c:
    // 0x37813c: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x37813cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
label_378140:
    // 0x378140: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x378140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378144:
    // 0x378144: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x378144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_378148:
    // 0x378148: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x378148u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37814c:
    // 0x37814c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37814cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378150:
    // 0x378150: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x378150u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378154:
    // 0x378154: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x378154u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378158:
    // 0x378158: 0xc05e9e8  jal         func_17A7A0
label_37815c:
    if (ctx->pc == 0x37815Cu) {
        ctx->pc = 0x37815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378158u;
        // 0x37815c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378160u;
        goto label_378160;
    }
    ctx->pc = 0x378158u;
    SET_GPR_U32(ctx, 31, 0x378160u);
    ctx->pc = 0x37815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378158u;
    // 0x37815c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x378158u, 0x378160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378160u;
label_378160:
    // 0x378160: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x378160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_378164:
    // 0x378164: 0xa6820512  sh          $v0, 0x512($s4)
    ctx->pc = 0x378164u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 2));
label_378168:
    // 0x378168: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x378168u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
label_37816c:
    // 0x37816c: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x37816cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
label_378170:
    // 0x378170: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x378170u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
label_378174:
    // 0x378174: 0x92820521  lbu         $v0, 0x521($s4)
    ctx->pc = 0x378174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
label_378178:
    // 0x378178: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x378178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_37817c:
    // 0x37817c: 0xa2820521  sb          $v0, 0x521($s4)
    ctx->pc = 0x37817cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
label_378180:
    // 0x378180: 0xa280053a  sb          $zero, 0x53A($s4)
    ctx->pc = 0x378180u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1338), (uint8_t)GPR_U32(ctx, 0));
label_378184:
    // 0x378184: 0x0  nop
    ctx->pc = 0x378184u;
    // NOP
label_378188:
    // 0x378188: 0x8e8605a0  lw          $a2, 0x5A0($s4)
    ctx->pc = 0x378188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1440)));
label_37818c:
    // 0x37818c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37818cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_378190:
    // 0x378190: 0xc0c08b4  jal         func_3022D0
label_378194:
    if (ctx->pc == 0x378194u) {
        ctx->pc = 0x378194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378190u;
        // 0x378194: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378198u;
        goto label_378198;
    }
    ctx->pc = 0x378190u;
    SET_GPR_U32(ctx, 31, 0x378198u);
    ctx->pc = 0x378194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378190u;
    // 0x378194: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x378190u, 0x378198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378198u;
label_378198:
    // 0x378198: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_37819c:
    if (ctx->pc == 0x37819Cu) {
        ctx->pc = 0x37819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378198u;
        // 0x37819c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3781A0u;
        goto label_3781a0;
    }
    ctx->pc = 0x378198u;
    {
        const bool branch_taken_0x378198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378198u;
        // 0x37819c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378198) {
            ctx->pc = 0x3781A8u;
            goto label_3781a8;
        }
    }
    ctx->pc = 0x3781A0u;
label_3781a0:
    // 0x3781a0: 0xc0c0830  jal         func_3020C0
label_3781a4:
    if (ctx->pc == 0x3781A4u) {
        ctx->pc = 0x3781A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3781A0u;
        // 0x3781a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3781A8u;
        goto label_3781a8;
    }
    ctx->pc = 0x3781A0u;
    SET_GPR_U32(ctx, 31, 0x3781A8u);
    ctx->pc = 0x3781A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3781A0u;
    // 0x3781a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3781A0u, 0x3781A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3781A8u;
label_3781a8:
    // 0x3781a8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3781a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3781ac:
    // 0x3781ac: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3781acu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
label_3781b0:
    // 0x3781b0: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x3781b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3781b4:
    // 0x3781b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3781b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3781b8:
    // 0x3781b8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3781b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3781bc:
    // 0x3781bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3781bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3781c0:
    // 0x3781c0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3781c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3781c4:
    // 0x3781c4: 0x7fa900a0  sq          $t1, 0xA0($sp)
    ctx->pc = 0x3781c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 9));
label_3781c8:
    // 0x3781c8: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3781c8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 1), 23600)));
label_3781cc:
    // 0x3781cc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3781ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3781d0:
    // 0x3781d0: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x3781d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
label_3781d4:
    // 0x3781d4: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3781d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23616)));
label_3781d8:
    // 0x3781d8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3781d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3781dc:
    // 0x3781dc: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3781dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_3781e0:
    // 0x3781e0: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3781e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23632)));
label_3781e4:
    // 0x3781e4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3781e4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_3781e8:
    // 0x3781e8: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x3781e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_3781ec:
    // 0x3781ec: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3781ecu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_3781f0:
    // 0x3781f0: 0x928605a8  lbu         $a2, 0x5A8($s4)
    ctx->pc = 0x3781f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1448)));
label_3781f4:
    // 0x3781f4: 0xc68c05a4  lwc1        $f12, 0x5A4($s4)
    ctx->pc = 0x3781f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3781f8:
    // 0x3781f8: 0xc0c0900  jal         func_302400
label_3781fc:
    if (ctx->pc == 0x3781FCu) {
        ctx->pc = 0x3781FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3781F8u;
        // 0x3781fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378200u;
        goto label_378200;
    }
    ctx->pc = 0x3781F8u;
    SET_GPR_U32(ctx, 31, 0x378200u);
    ctx->pc = 0x3781FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3781F8u;
    // 0x3781fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3781F8u, 0x378200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378200u;
label_378200:
    // 0x378200: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x378200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378204:
    // 0x378204: 0x27908060  addiu       $s0, $gp, -0x7FA0
    ctx->pc = 0x378204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_378208:
    // 0x378208: 0x928305a9  lbu         $v1, 0x5A9($s4)
    ctx->pc = 0x378208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1449)));
label_37820c:
    // 0x37820c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x37820cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_378210:
    // 0x378210: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x378210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_378214:
    // 0x378214: 0x24421ba0  addiu       $v0, $v0, 0x1BA0
    ctx->pc = 0x378214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7072));
label_378218:
    // 0x378218: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x378218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_37821c:
    // 0x37821c: 0x268705b0  addiu       $a3, $s4, 0x5B0
    ctx->pc = 0x37821cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 1456));
label_378220:
    // 0x378220: 0x268805b4  addiu       $t0, $s4, 0x5B4
    ctx->pc = 0x378220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 1460));
label_378224:
    // 0x378224: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x378224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_378228:
    // 0x378228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x378228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37822c:
    // 0x37822c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37822cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_378230:
    // 0x378230: 0xc0976f0  jal         func_25DBC0
label_378234:
    if (ctx->pc == 0x378234u) {
        ctx->pc = 0x378234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378230u;
        // 0x378234: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378238u;
        goto label_378238;
    }
    ctx->pc = 0x378230u;
    SET_GPR_U32(ctx, 31, 0x378238u);
    ctx->pc = 0x378234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378230u;
    // 0x378234: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DBC0u, 0x378230u, 0x378238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378238u;
label_378238:
    // 0x378238: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_37823c:
    if (ctx->pc == 0x37823Cu) {
        ctx->pc = 0x37823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378238u;
        // 0x37823c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378240u;
        goto label_378240;
    }
    ctx->pc = 0x378238u;
    {
        const bool branch_taken_0x378238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378238u;
        // 0x37823c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378238) {
            ctx->pc = 0x378270u;
            goto label_378270;
        }
    }
    ctx->pc = 0x378240u;
label_378240:
    // 0x378240: 0xc096fb8  jal         func_25BEE0
label_378244:
    if (ctx->pc == 0x378244u) {
        ctx->pc = 0x378248u;
        goto label_378248;
    }
    ctx->pc = 0x378240u;
    SET_GPR_U32(ctx, 31, 0x378248u);
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x378240u, 0x378248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378248u;
label_378248:
    // 0x378248: 0x922508e8  lbu         $a1, 0x8E8($s1)
    ctx->pc = 0x378248u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_37824c:
    // 0x37824c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37824cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_378250:
    // 0x378250: 0x92272901  lbu         $a3, 0x2901($s1)
    ctx->pc = 0x378250u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10497)));
label_378254:
    // 0x378254: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x378254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_378258:
    // 0x378258: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x378258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_37825c:
    // 0x37825c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37825cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_378260:
    // 0x378260: 0x26282910  addiu       $t0, $s1, 0x2910
    ctx->pc = 0x378260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 10512));
label_378264:
    // 0x378264: 0xc0aa110  jal         func_2A8440
label_378268:
    if (ctx->pc == 0x378268u) {
        ctx->pc = 0x378268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378264u;
        // 0x378268: 0x26890020  addiu       $t1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37826Cu;
        goto label_37826c;
    }
    ctx->pc = 0x378264u;
    SET_GPR_U32(ctx, 31, 0x37826Cu);
    ctx->pc = 0x378268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378264u;
    // 0x378268: 0x26890020  addiu       $t1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8440u, 0x378264u, 0x37826Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37826Cu;
label_37826c:
    // 0x37826c: 0x0  nop
    ctx->pc = 0x37826cu;
    // NOP
label_378270:
    // 0x378270: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x378270u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_378274:
    // 0x378274: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x378274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_378278:
    // 0x378278: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_37827c:
    if (ctx->pc == 0x37827Cu) {
        ctx->pc = 0x37827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378278u;
        // 0x37827c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378280u;
        goto label_378280;
    }
    ctx->pc = 0x378278u;
    {
        const bool branch_taken_0x378278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378278u;
        // 0x37827c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378278) {
            ctx->pc = 0x378208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378208;
        }
    }
    ctx->pc = 0x378280u;
label_378280:
    // 0x378280: 0xc68105b0  lwc1        $f1, 0x5B0($s4)
    ctx->pc = 0x378280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_378284:
    // 0x378284: 0x3c024340  lui         $v0, 0x4340
    ctx->pc = 0x378284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17216 << 16));
label_378288:
    // 0x378288: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x378288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37828c:
    // 0x37828c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x37828cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_378290:
    // 0x378290: 0x928605a9  lbu         $a2, 0x5A9($s4)
    ctx->pc = 0x378290u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1449)));
label_378294:
    // 0x378294: 0x24631ba8  addiu       $v1, $v1, 0x1BA8
    ctx->pc = 0x378294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7080));
label_378298:
    // 0x378298: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x378298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_37829c:
    // 0x37829c: 0x8e8505a0  lw          $a1, 0x5A0($s4)
    ctx->pc = 0x37829cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1440)));
label_3782a0:
    // 0x3782a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3782a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3782a4:
    // 0x3782a4: 0x0  nop
    ctx->pc = 0x3782a4u;
    // NOP
label_3782a8:
    // 0x3782a8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3782a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3782ac:
    // 0x3782ac: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x3782acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_3782b0:
    // 0x3782b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3782b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3782b4:
    // 0x3782b4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3782b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3782b8:
    // 0x3782b8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3782b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_3782bc:
    // 0x3782bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3782bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3782c0:
    // 0x3782c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3782c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3782c4:
    // 0x3782c4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3782c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3782c8:
    // 0x3782c8: 0xc0c08e4  jal         func_302390
label_3782cc:
    if (ctx->pc == 0x3782CCu) {
        ctx->pc = 0x3782CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3782C8u;
        // 0x3782cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3782D0u;
        goto label_3782d0;
    }
    ctx->pc = 0x3782C8u;
    SET_GPR_U32(ctx, 31, 0x3782D0u);
    ctx->pc = 0x3782CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3782C8u;
    // 0x3782cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302390u, 0x3782C8u, 0x3782D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3782D0u;
label_3782d0:
    // 0x3782d0: 0x9284053a  lbu         $a0, 0x53A($s4)
    ctx->pc = 0x3782d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1338)));
label_3782d4:
    // 0x3782d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3782d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3782d8:
    // 0x3782d8: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
label_3782dc:
    if (ctx->pc == 0x3782DCu) {
        ctx->pc = 0x3782DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3782D8u;
        // 0x3782dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3782E0u;
        goto label_3782e0;
    }
    ctx->pc = 0x3782D8u;
    {
        const bool branch_taken_0x3782d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3782DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3782D8u;
        // 0x3782dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3782d8) {
            ctx->pc = 0x3783B0u;
            goto label_3783b0;
        }
    }
    ctx->pc = 0x3782E0u;
label_3782e0:
    // 0x3782e0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3782e4:
    if (ctx->pc == 0x3782E4u) {
        ctx->pc = 0x3782E8u;
        goto label_3782e8;
    }
    ctx->pc = 0x3782E0u;
    {
        const bool branch_taken_0x3782e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3782e0) {
            ctx->pc = 0x3782F0u;
            goto label_3782f0;
        }
    }
    ctx->pc = 0x3782E8u;
label_3782e8:
    // 0x3782e8: 0x10000033  b           . + 4 + (0x33 << 2)
label_3782ec:
    if (ctx->pc == 0x3782ECu) {
        ctx->pc = 0x3782F0u;
        goto label_3782f0;
    }
    ctx->pc = 0x3782E8u;
    {
        const bool branch_taken_0x3782e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3782e8) {
            ctx->pc = 0x3783B8u;
            goto label_3783b8;
        }
    }
    ctx->pc = 0x3782F0u;
label_3782f0:
    // 0x3782f0: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x3782f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_3782f4:
    // 0x3782f4: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3782f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_3782f8:
    // 0x3782f8: 0xc0766b8  jal         func_1D9AE0
label_3782fc:
    if (ctx->pc == 0x3782FCu) {
        ctx->pc = 0x3782FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3782F8u;
        // 0x3782fc: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378300u;
        goto label_378300;
    }
    ctx->pc = 0x3782F8u;
    SET_GPR_U32(ctx, 31, 0x378300u);
    ctx->pc = 0x3782FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3782F8u;
    // 0x3782fc: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3782F8u, 0x378300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378300u;
label_378300:
    // 0x378300: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x378300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_378304:
    // 0x378304: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x378304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_378308:
    // 0x378308: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x378308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_37830c:
    // 0x37830c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x37830cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_378310:
    // 0x378310: 0xc0766c8  jal         func_1D9B20
label_378314:
    if (ctx->pc == 0x378314u) {
        ctx->pc = 0x378314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378310u;
        // 0x378314: 0xae800094  sw          $zero, 0x94($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378318u;
        goto label_378318;
    }
    ctx->pc = 0x378310u;
    SET_GPR_U32(ctx, 31, 0x378318u);
    ctx->pc = 0x378314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378310u;
    // 0x378314: 0xae800094  sw          $zero, 0x94($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x378310u, 0x378318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378318u;
label_378318:
    // 0x378318: 0x928305a9  lbu         $v1, 0x5A9($s4)
    ctx->pc = 0x378318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1449)));
label_37831c:
    // 0x37831c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x37831cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_378320:
    // 0x378320: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x378320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_378324:
    // 0x378324: 0x24421ba4  addiu       $v0, $v0, 0x1BA4
    ctx->pc = 0x378324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7076));
label_378328:
    // 0x378328: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x378328u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_37832c:
    // 0x37832c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x37832cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_378330:
    // 0x378330: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x378330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_378334:
    // 0x378334: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x378334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_378338:
    // 0x378338: 0xc076690  jal         func_1D9A40
label_37833c:
    if (ctx->pc == 0x37833Cu) {
        ctx->pc = 0x37833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378338u;
        // 0x37833c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378340u;
        goto label_378340;
    }
    ctx->pc = 0x378338u;
    SET_GPR_U32(ctx, 31, 0x378340u);
    ctx->pc = 0x37833Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378338u;
    // 0x37833c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x378338u, 0x378340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378340u;
label_378340:
    // 0x378340: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x378340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_378344:
    // 0x378344: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x378344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_378348:
    // 0x378348: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x378348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37834c:
    // 0x37834c: 0x78245c10  lq          $a0, 0x5C10($at)
    ctx->pc = 0x37834cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 23568)));
label_378350:
    // 0x378350: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x378350u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
label_378354:
    // 0x378354: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x378354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_378358:
    // 0x378358: 0x7e8400a0  sq          $a0, 0xA0($s4)
    ctx->pc = 0x378358u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 160), GPR_VEC(ctx, 4));
label_37835c:
    // 0x37835c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37835cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_378360:
    // 0x378360: 0x0  nop
    ctx->pc = 0x378360u;
    // NOP
label_378364:
    // 0x378364: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x378364u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_378368:
    // 0x378368: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x378368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
label_37836c:
    // 0x37836c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37836cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_378370:
    // 0x378370: 0x0  nop
    ctx->pc = 0x378370u;
    // NOP
label_378374:
    // 0x378374: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x378374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_378378:
    // 0x378378: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x378378u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37837c:
    // 0x37837c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x37837cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_378380:
    // 0x378380: 0x0  nop
    ctx->pc = 0x378380u;
    // NOP
label_378384:
    // 0x378384: 0xa68305ac  sh          $v1, 0x5AC($s4)
    ctx->pc = 0x378384u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1452), (uint16_t)GPR_U32(ctx, 3));
label_378388:
    // 0x378388: 0x868305ac  lh          $v1, 0x5AC($s4)
    ctx->pc = 0x378388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1452)));
label_37838c:
    // 0x37838c: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x37838cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_378390:
    // 0x378390: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_378394:
    if (ctx->pc == 0x378394u) {
        ctx->pc = 0x378394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378390u;
        // 0x378394: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378398u;
        goto label_378398;
    }
    ctx->pc = 0x378390u;
    {
        const bool branch_taken_0x378390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x378394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378390u;
        // 0x378394: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378390) {
            ctx->pc = 0x3783A0u;
            goto label_3783a0;
        }
    }
    ctx->pc = 0x378398u;
label_378398:
    // 0x378398: 0xa68305ac  sh          $v1, 0x5AC($s4)
    ctx->pc = 0x378398u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1452), (uint16_t)GPR_U32(ctx, 3));
label_37839c:
    // 0x37839c: 0x0  nop
    ctx->pc = 0x37839cu;
    // NOP
label_3783a0:
    // 0x3783a0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3783a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3783a4:
    // 0x3783a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3783a8:
    if (ctx->pc == 0x3783A8u) {
        ctx->pc = 0x3783A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3783A4u;
        // 0x3783a8: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3783ACu;
        goto label_3783ac;
    }
    ctx->pc = 0x3783A4u;
    {
        const bool branch_taken_0x3783a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3783A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3783A4u;
        // 0x3783a8: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3783a4) {
            ctx->pc = 0x3783B8u;
            goto label_3783b8;
        }
    }
    ctx->pc = 0x3783ACu;
label_3783ac:
    // 0x3783ac: 0x0  nop
    ctx->pc = 0x3783acu;
    // NOP
label_3783b0:
    // 0x3783b0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3783b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3783b4:
    // 0x3783b4: 0xa2830521  sb          $v1, 0x521($s4)
    ctx->pc = 0x3783b4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
label_3783b8:
    // 0x3783b8: 0xc68105b0  lwc1        $f1, 0x5B0($s4)
    ctx->pc = 0x3783b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3783bc:
    // 0x3783bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3783bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3783c0:
    // 0x3783c0: 0x0  nop
    ctx->pc = 0x3783c0u;
    // NOP
label_3783c4:
    // 0x3783c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3783c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3783c8:
    // 0x3783c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3783cc:
    if (ctx->pc == 0x3783CCu) {
        ctx->pc = 0x3783CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3783C8u;
        // 0x3783cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3783D0u;
        goto label_3783d0;
    }
    ctx->pc = 0x3783C8u;
    {
        const bool branch_taken_0x3783c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3783CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3783C8u;
        // 0x3783cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3783c8) {
            ctx->pc = 0x3783D8u;
            goto label_3783d8;
        }
    }
    ctx->pc = 0x3783D0u;
label_3783d0:
    // 0x3783d0: 0xc0c0830  jal         func_3020C0
label_3783d4:
    if (ctx->pc == 0x3783D4u) {
        ctx->pc = 0x3783D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3783D0u;
        // 0x3783d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3783D8u;
        goto label_3783d8;
    }
    ctx->pc = 0x3783D0u;
    SET_GPR_U32(ctx, 31, 0x3783D8u);
    ctx->pc = 0x3783D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3783D0u;
    // 0x3783d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3783D0u, 0x3783D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3783D8u;
label_3783d8:
    // 0x3783d8: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x3783d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
label_3783dc:
    // 0x3783dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3783e0:
    if (ctx->pc == 0x3783E0u) {
        ctx->pc = 0x3783E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3783DCu;
        // 0x3783e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3783E4u;
        goto label_3783e4;
    }
    ctx->pc = 0x3783DCu;
    {
        const bool branch_taken_0x3783dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3783E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3783DCu;
        // 0x3783e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3783dc) {
            ctx->pc = 0x3783F0u;
            goto label_3783f0;
        }
    }
    ctx->pc = 0x3783E4u;
label_3783e4:
    // 0x3783e4: 0x10000022  b           . + 4 + (0x22 << 2)
label_3783e8:
    if (ctx->pc == 0x3783E8u) {
        ctx->pc = 0x3783ECu;
        goto label_3783ec;
    }
    ctx->pc = 0x3783E4u;
    {
        const bool branch_taken_0x3783e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3783e4) {
            ctx->pc = 0x378470u;
            goto label_378470;
        }
    }
    ctx->pc = 0x3783ECu;
label_3783ec:
    // 0x3783ec: 0x0  nop
    ctx->pc = 0x3783ecu;
    // NOP
label_3783f0:
    // 0x3783f0: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x3783f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3783f4:
    // 0x3783f4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3783f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_3783f8:
    // 0x3783f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3783f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3783fc:
    // 0x3783fc: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3783fcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_378400:
    // 0x378400: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x378400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
label_378404:
    // 0x378404: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_378408:
    if (ctx->pc == 0x378408u) {
        ctx->pc = 0x37840Cu;
        goto label_37840c;
    }
    ctx->pc = 0x378404u;
    {
        const bool branch_taken_0x378404 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x378404) {
            ctx->pc = 0x378440u;
            goto label_378440;
        }
    }
    ctx->pc = 0x37840Cu;
label_37840c:
    // 0x37840c: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x37840cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_378410:
    // 0x378410: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x378410u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_378414:
    // 0x378414: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_378418:
    if (ctx->pc == 0x378418u) {
        ctx->pc = 0x378418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378414u;
        // 0x378418: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37841Cu;
        goto label_37841c;
    }
    ctx->pc = 0x378414u;
    {
        const bool branch_taken_0x378414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x378418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378414u;
        // 0x378418: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378414) {
            ctx->pc = 0x378468u;
            goto label_378468;
        }
    }
    ctx->pc = 0x37841Cu;
label_37841c:
    // 0x37841c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37841cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_378420:
    // 0x378420: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x378420u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_378424:
    // 0x378424: 0x0  nop
    ctx->pc = 0x378424u;
    // NOP
label_378428:
    // 0x378428: 0x0  nop
    ctx->pc = 0x378428u;
    // NOP
label_37842c:
    // 0x37842c: 0x2010  mfhi        $a0
    ctx->pc = 0x37842cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_378430:
    // 0x378430: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x378430u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_378434:
    // 0x378434: 0x1000000c  b           . + 4 + (0xC << 2)
label_378438:
    if (ctx->pc == 0x378438u) {
        ctx->pc = 0x378438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378434u;
        // 0x378438: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37843Cu;
        goto label_37843c;
    }
    ctx->pc = 0x378434u;
    {
        const bool branch_taken_0x378434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378434u;
        // 0x378438: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378434) {
            ctx->pc = 0x378468u;
            goto label_378468;
        }
    }
    ctx->pc = 0x37843Cu;
label_37843c:
    // 0x37843c: 0x0  nop
    ctx->pc = 0x37843cu;
    // NOP
label_378440:
    // 0x378440: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x378440u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_378444:
    // 0x378444: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x378444u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_378448:
    // 0x378448: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_37844c:
    if (ctx->pc == 0x37844Cu) {
        ctx->pc = 0x378450u;
        goto label_378450;
    }
    ctx->pc = 0x378448u;
    {
        const bool branch_taken_0x378448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x378448) {
            ctx->pc = 0x378468u;
            goto label_378468;
        }
    }
    ctx->pc = 0x378450u;
label_378450:
    // 0x378450: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x378450u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_378454:
    // 0x378454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_378458:
    // 0x378458: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x378458u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
label_37845c:
    // 0x37845c: 0x10000004  b           . + 4 + (0x4 << 2)
label_378460:
    if (ctx->pc == 0x378460u) {
        ctx->pc = 0x378460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37845Cu;
        // 0x378460: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378464u;
        goto label_378464;
    }
    ctx->pc = 0x37845Cu;
    {
        const bool branch_taken_0x37845c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37845Cu;
        // 0x378460: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37845c) {
            ctx->pc = 0x378470u;
            goto label_378470;
        }
    }
    ctx->pc = 0x378464u;
label_378464:
    // 0x378464: 0x0  nop
    ctx->pc = 0x378464u;
    // NOP
label_378468:
    // 0x378468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37846c:
    // 0x37846c: 0x0  nop
    ctx->pc = 0x37846cu;
    // NOP
label_378470:
    // 0x378470: 0x14600189  bnez        $v1, . + 4 + (0x189 << 2)
label_378474:
    if (ctx->pc == 0x378474u) {
        ctx->pc = 0x378474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378470u;
        // 0x378474: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378478u;
        goto label_378478;
    }
    ctx->pc = 0x378470u;
    {
        const bool branch_taken_0x378470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x378474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378470u;
        // 0x378474: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378470) {
            ctx->pc = 0x378A98u;
            goto label_378a98;
        }
    }
    ctx->pc = 0x378478u;
label_378478:
    // 0x378478: 0xc0c0830  jal         func_3020C0
label_37847c:
    if (ctx->pc == 0x37847Cu) {
        ctx->pc = 0x37847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378478u;
        // 0x37847c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378480u;
        goto label_378480;
    }
    ctx->pc = 0x378478u;
    SET_GPR_U32(ctx, 31, 0x378480u);
    ctx->pc = 0x37847Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378478u;
    // 0x37847c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x378478u, 0x378480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378480u;
label_378480:
    // 0x378480: 0x10000185  b           . + 4 + (0x185 << 2)
label_378484:
    if (ctx->pc == 0x378484u) {
        ctx->pc = 0x378488u;
        goto label_378488;
    }
    ctx->pc = 0x378480u;
    {
        const bool branch_taken_0x378480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378480) {
            ctx->pc = 0x378A98u;
            goto label_378a98;
        }
    }
    ctx->pc = 0x378488u;
label_378488:
    // 0x378488: 0x868205ac  lh          $v0, 0x5AC($s4)
    ctx->pc = 0x378488u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1452)));
label_37848c:
    // 0x37848c: 0xa6820512  sh          $v0, 0x512($s4)
    ctx->pc = 0x37848cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 2));
label_378490:
    // 0x378490: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x378490u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
label_378494:
    // 0x378494: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x378494u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
label_378498:
    // 0x378498: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x378498u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
label_37849c:
    // 0x37849c: 0x92820521  lbu         $v0, 0x521($s4)
    ctx->pc = 0x37849cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
label_3784a0:
    // 0x3784a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3784a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3784a4:
    // 0x3784a4: 0xa2820521  sb          $v0, 0x521($s4)
    ctx->pc = 0x3784a4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3784a8:
    // 0x3784a8: 0x8e8605a0  lw          $a2, 0x5A0($s4)
    ctx->pc = 0x3784a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1440)));
label_3784ac:
    // 0x3784ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3784acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3784b0:
    // 0x3784b0: 0xc0c08b4  jal         func_3022D0
label_3784b4:
    if (ctx->pc == 0x3784B4u) {
        ctx->pc = 0x3784B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3784B0u;
        // 0x3784b4: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3784B8u;
        goto label_3784b8;
    }
    ctx->pc = 0x3784B0u;
    SET_GPR_U32(ctx, 31, 0x3784B8u);
    ctx->pc = 0x3784B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3784B0u;
    // 0x3784b4: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3784B0u, 0x3784B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3784B8u;
label_3784b8:
    // 0x3784b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3784bc:
    if (ctx->pc == 0x3784BCu) {
        ctx->pc = 0x3784BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3784B8u;
        // 0x3784bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3784C0u;
        goto label_3784c0;
    }
    ctx->pc = 0x3784B8u;
    {
        const bool branch_taken_0x3784b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3784BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3784B8u;
        // 0x3784bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3784b8) {
            ctx->pc = 0x3784C8u;
            goto label_3784c8;
        }
    }
    ctx->pc = 0x3784C0u;
label_3784c0:
    // 0x3784c0: 0xc0c0830  jal         func_3020C0
label_3784c4:
    if (ctx->pc == 0x3784C4u) {
        ctx->pc = 0x3784C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3784C0u;
        // 0x3784c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3784C8u;
        goto label_3784c8;
    }
    ctx->pc = 0x3784C0u;
    SET_GPR_U32(ctx, 31, 0x3784C8u);
    ctx->pc = 0x3784C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3784C0u;
    // 0x3784c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3784C0u, 0x3784C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3784C8u;
label_3784c8:
    // 0x3784c8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3784c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3784cc:
    // 0x3784cc: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3784ccu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
label_3784d0:
    // 0x3784d0: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x3784d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3784d4:
    // 0x3784d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3784d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3784d8:
    // 0x3784d8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3784d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3784dc:
    // 0x3784dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3784dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3784e0:
    // 0x3784e0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3784e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3784e4:
    // 0x3784e4: 0x7fa900a0  sq          $t1, 0xA0($sp)
    ctx->pc = 0x3784e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 9));
label_3784e8:
    // 0x3784e8: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3784e8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 1), 23600)));
label_3784ec:
    // 0x3784ec: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3784ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3784f0:
    // 0x3784f0: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x3784f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
label_3784f4:
    // 0x3784f4: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3784f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23616)));
label_3784f8:
    // 0x3784f8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3784f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3784fc:
    // 0x3784fc: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3784fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_378500:
    // 0x378500: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x378500u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23632)));
label_378504:
    // 0x378504: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x378504u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_378508:
    // 0x378508: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x378508u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_37850c:
    // 0x37850c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x37850cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_378510:
    // 0x378510: 0x928605a8  lbu         $a2, 0x5A8($s4)
    ctx->pc = 0x378510u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1448)));
label_378514:
    // 0x378514: 0xc68c05a4  lwc1        $f12, 0x5A4($s4)
    ctx->pc = 0x378514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_378518:
    // 0x378518: 0xc0c0900  jal         func_302400
label_37851c:
    if (ctx->pc == 0x37851Cu) {
        ctx->pc = 0x37851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378518u;
        // 0x37851c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378520u;
        goto label_378520;
    }
    ctx->pc = 0x378518u;
    SET_GPR_U32(ctx, 31, 0x378520u);
    ctx->pc = 0x37851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378518u;
    // 0x37851c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x378518u, 0x378520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378520u;
label_378520:
    // 0x378520: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x378520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
label_378524:
    // 0x378524: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_378528:
    if (ctx->pc == 0x378528u) {
        ctx->pc = 0x378528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378524u;
        // 0x378528: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37852Cu;
        goto label_37852c;
    }
    ctx->pc = 0x378524u;
    {
        const bool branch_taken_0x378524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x378528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378524u;
        // 0x378528: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378524) {
            ctx->pc = 0x378538u;
            goto label_378538;
        }
    }
    ctx->pc = 0x37852Cu;
label_37852c:
    // 0x37852c: 0x10000022  b           . + 4 + (0x22 << 2)
label_378530:
    if (ctx->pc == 0x378530u) {
        ctx->pc = 0x378534u;
        goto label_378534;
    }
    ctx->pc = 0x37852Cu;
    {
        const bool branch_taken_0x37852c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37852c) {
            ctx->pc = 0x3785B8u;
            goto label_3785b8;
        }
    }
    ctx->pc = 0x378534u;
label_378534:
    // 0x378534: 0x0  nop
    ctx->pc = 0x378534u;
    // NOP
label_378538:
    // 0x378538: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x378538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_37853c:
    // 0x37853c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x37853cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_378540:
    // 0x378540: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x378540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_378544:
    // 0x378544: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x378544u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_378548:
    // 0x378548: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x378548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
label_37854c:
    // 0x37854c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_378550:
    if (ctx->pc == 0x378550u) {
        ctx->pc = 0x378554u;
        goto label_378554;
    }
    ctx->pc = 0x37854Cu;
    {
        const bool branch_taken_0x37854c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x37854c) {
            ctx->pc = 0x378588u;
            goto label_378588;
        }
    }
    ctx->pc = 0x378554u;
label_378554:
    // 0x378554: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x378554u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_378558:
    // 0x378558: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x378558u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_37855c:
    // 0x37855c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_378560:
    if (ctx->pc == 0x378560u) {
        ctx->pc = 0x378560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37855Cu;
        // 0x378560: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378564u;
        goto label_378564;
    }
    ctx->pc = 0x37855Cu;
    {
        const bool branch_taken_0x37855c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x378560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37855Cu;
        // 0x378560: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37855c) {
            ctx->pc = 0x3785B0u;
            goto label_3785b0;
        }
    }
    ctx->pc = 0x378564u;
label_378564:
    // 0x378564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_378568:
    // 0x378568: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x378568u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_37856c:
    // 0x37856c: 0x0  nop
    ctx->pc = 0x37856cu;
    // NOP
label_378570:
    // 0x378570: 0x0  nop
    ctx->pc = 0x378570u;
    // NOP
label_378574:
    // 0x378574: 0x2010  mfhi        $a0
    ctx->pc = 0x378574u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_378578:
    // 0x378578: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x378578u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_37857c:
    // 0x37857c: 0x1000000c  b           . + 4 + (0xC << 2)
label_378580:
    if (ctx->pc == 0x378580u) {
        ctx->pc = 0x378580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37857Cu;
        // 0x378580: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378584u;
        goto label_378584;
    }
    ctx->pc = 0x37857Cu;
    {
        const bool branch_taken_0x37857c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37857Cu;
        // 0x378580: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37857c) {
            ctx->pc = 0x3785B0u;
            goto label_3785b0;
        }
    }
    ctx->pc = 0x378584u;
label_378584:
    // 0x378584: 0x0  nop
    ctx->pc = 0x378584u;
    // NOP
label_378588:
    // 0x378588: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x378588u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_37858c:
    // 0x37858c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x37858cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_378590:
    // 0x378590: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_378594:
    if (ctx->pc == 0x378594u) {
        ctx->pc = 0x378598u;
        goto label_378598;
    }
    ctx->pc = 0x378590u;
    {
        const bool branch_taken_0x378590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x378590) {
            ctx->pc = 0x3785B0u;
            goto label_3785b0;
        }
    }
    ctx->pc = 0x378598u;
label_378598:
    // 0x378598: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x378598u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_37859c:
    // 0x37859c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37859cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3785a0:
    // 0x3785a0: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x3785a0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
label_3785a4:
    // 0x3785a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3785a8:
    if (ctx->pc == 0x3785A8u) {
        ctx->pc = 0x3785A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3785A4u;
        // 0x3785a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3785ACu;
        goto label_3785ac;
    }
    ctx->pc = 0x3785A4u;
    {
        const bool branch_taken_0x3785a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3785A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3785A4u;
        // 0x3785a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3785a4) {
            ctx->pc = 0x3785B8u;
            goto label_3785b8;
        }
    }
    ctx->pc = 0x3785ACu;
label_3785ac:
    // 0x3785ac: 0x0  nop
    ctx->pc = 0x3785acu;
    // NOP
label_3785b0:
    // 0x3785b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3785b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3785b4:
    // 0x3785b4: 0x0  nop
    ctx->pc = 0x3785b4u;
    // NOP
label_3785b8:
    // 0x3785b8: 0x14600137  bnez        $v1, . + 4 + (0x137 << 2)
label_3785bc:
    if (ctx->pc == 0x3785BCu) {
        ctx->pc = 0x3785C0u;
        goto label_3785c0;
    }
    ctx->pc = 0x3785B8u;
    {
        const bool branch_taken_0x3785b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3785b8) {
            ctx->pc = 0x378A98u;
            goto label_378a98;
        }
    }
    ctx->pc = 0x3785C0u;
label_3785c0:
    // 0x3785c0: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x3785c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
label_3785c4:
    // 0x3785c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3785c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3785c8:
    // 0x3785c8: 0x10000133  b           . + 4 + (0x133 << 2)
label_3785cc:
    if (ctx->pc == 0x3785CCu) {
        ctx->pc = 0x3785CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3785C8u;
        // 0x3785cc: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3785D0u;
        goto label_3785d0;
    }
    ctx->pc = 0x3785C8u;
    {
        const bool branch_taken_0x3785c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3785CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3785C8u;
        // 0x3785cc: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3785c8) {
            ctx->pc = 0x378A98u;
            goto label_378a98;
        }
    }
    ctx->pc = 0x3785D0u;
label_3785d0:
    // 0x3785d0: 0x86820528  lh          $v0, 0x528($s4)
    ctx->pc = 0x3785d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1320)));
label_3785d4:
    // 0x3785d4: 0xa6820512  sh          $v0, 0x512($s4)
    ctx->pc = 0x3785d4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 2));
label_3785d8:
    // 0x3785d8: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x3785d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
label_3785dc:
    // 0x3785dc: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x3785dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
label_3785e0:
    // 0x3785e0: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x3785e0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
label_3785e4:
    // 0x3785e4: 0x92820521  lbu         $v0, 0x521($s4)
    ctx->pc = 0x3785e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
label_3785e8:
    // 0x3785e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3785e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3785ec:
    // 0x3785ec: 0xa2820521  sb          $v0, 0x521($s4)
    ctx->pc = 0x3785ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3785f0:
    // 0x3785f0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3785f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_3785f4:
    // 0x3785f4: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x3785f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
label_3785f8:
    // 0x3785f8: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x3785f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_3785fc:
    // 0x3785fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3785fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_378600:
    // 0x378600: 0x26850090  addiu       $a1, $s4, 0x90
    ctx->pc = 0x378600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_378604:
    // 0x378604: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x378604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_378608:
    // 0x378608: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x378608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_37860c:
    // 0x37860c: 0xc07681c  jal         func_1DA070
label_378610:
    if (ctx->pc == 0x378610u) {
        ctx->pc = 0x378610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37860Cu;
        // 0x378610: 0x268600a0  addiu       $a2, $s4, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378614u;
        goto label_378614;
    }
    ctx->pc = 0x37860Cu;
    SET_GPR_U32(ctx, 31, 0x378614u);
    ctx->pc = 0x378610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37860Cu;
    // 0x378610: 0x268600a0  addiu       $a2, $s4, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x37860Cu, 0x378614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378614u;
label_378614:
    // 0x378614: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x378614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_378618:
    // 0x378618: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x378618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_37861c:
    // 0x37861c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37861cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_378620:
    // 0x378620: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x378620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_378624:
    // 0x378624: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x378624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_378628:
    // 0x378628: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x378628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_37862c:
    // 0x37862c: 0x8e8605a0  lw          $a2, 0x5A0($s4)
    ctx->pc = 0x37862cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1440)));
label_378630:
    // 0x378630: 0xc0c08b4  jal         func_3022D0
label_378634:
    if (ctx->pc == 0x378634u) {
        ctx->pc = 0x378634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378630u;
        // 0x378634: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378638u;
        goto label_378638;
    }
    ctx->pc = 0x378630u;
    SET_GPR_U32(ctx, 31, 0x378638u);
    ctx->pc = 0x378634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378630u;
    // 0x378634: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x378630u, 0x378638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378638u;
label_378638:
    // 0x378638: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_37863c:
    if (ctx->pc == 0x37863Cu) {
        ctx->pc = 0x37863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378638u;
        // 0x37863c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378640u;
        goto label_378640;
    }
    ctx->pc = 0x378638u;
    {
        const bool branch_taken_0x378638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378638u;
        // 0x37863c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378638) {
            ctx->pc = 0x378648u;
            goto label_378648;
        }
    }
    ctx->pc = 0x378640u;
label_378640:
    // 0x378640: 0xc0c0830  jal         func_3020C0
label_378644:
    if (ctx->pc == 0x378644u) {
        ctx->pc = 0x378644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378640u;
        // 0x378644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378648u;
        goto label_378648;
    }
    ctx->pc = 0x378640u;
    SET_GPR_U32(ctx, 31, 0x378648u);
    ctx->pc = 0x378644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378640u;
    // 0x378644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x378640u, 0x378648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378648u;
label_378648:
    // 0x378648: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x378648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_37864c:
    // 0x37864c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x37864cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
label_378650:
    // 0x378650: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x378650u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_378654:
    // 0x378654: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x378654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_378658:
    // 0x378658: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x378658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_37865c:
    // 0x37865c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37865cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378660:
    // 0x378660: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x378660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_378664:
    // 0x378664: 0x7fa900a0  sq          $t1, 0xA0($sp)
    ctx->pc = 0x378664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 9));
label_378668:
    // 0x378668: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x378668u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 1), 23600)));
label_37866c:
    // 0x37866c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x37866cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_378670:
    // 0x378670: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x378670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
label_378674:
    // 0x378674: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x378674u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23616)));
label_378678:
    // 0x378678: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x378678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_37867c:
    // 0x37867c: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x37867cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_378680:
    // 0x378680: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x378680u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23632)));
label_378684:
    // 0x378684: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x378684u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_378688:
    // 0x378688: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x378688u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_37868c:
    // 0x37868c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x37868cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_378690:
    // 0x378690: 0x928605a8  lbu         $a2, 0x5A8($s4)
    ctx->pc = 0x378690u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1448)));
label_378694:
    // 0x378694: 0xc68c05a4  lwc1        $f12, 0x5A4($s4)
    ctx->pc = 0x378694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_378698:
    // 0x378698: 0xc0c0900  jal         func_302400
label_37869c:
    if (ctx->pc == 0x37869Cu) {
        ctx->pc = 0x37869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378698u;
        // 0x37869c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3786A0u;
        goto label_3786a0;
    }
    ctx->pc = 0x378698u;
    SET_GPR_U32(ctx, 31, 0x3786A0u);
    ctx->pc = 0x37869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378698u;
    // 0x37869c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x378698u, 0x3786A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3786A0u;
label_3786a0:
    // 0x3786a0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3786a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3786a4:
    // 0x3786a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3786a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3786a8:
    // 0x3786a8: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x3786a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_3786ac:
    // 0x3786ac: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x3786acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_3786b0:
    // 0x3786b0: 0x26860080  addiu       $a2, $s4, 0x80
    ctx->pc = 0x3786b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_3786b4:
    // 0x3786b4: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x3786b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3786b8:
    // 0x3786b8: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x3786b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3786bc:
    // 0x3786bc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3786bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3786c0:
    // 0x3786c0: 0xc0c0980  jal         func_302600
label_3786c4:
    if (ctx->pc == 0x3786C4u) {
        ctx->pc = 0x3786C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786C0u;
        // 0x3786c4: 0x27aa00ec  addiu       $t2, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3786C8u;
        goto label_3786c8;
    }
    ctx->pc = 0x3786C0u;
    SET_GPR_U32(ctx, 31, 0x3786C8u);
    ctx->pc = 0x3786C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3786C0u;
    // 0x3786c4: 0x27aa00ec  addiu       $t2, $sp, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3786C0u, 0x3786C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3786C8u;
label_3786c8:
    // 0x3786c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3786cc:
    if (ctx->pc == 0x3786CCu) {
        ctx->pc = 0x3786CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786C8u;
        // 0x3786cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3786D0u;
        goto label_3786d0;
    }
    ctx->pc = 0x3786C8u;
    {
        const bool branch_taken_0x3786c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3786CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786C8u;
        // 0x3786cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3786c8) {
            ctx->pc = 0x3786E0u;
            goto label_3786e0;
        }
    }
    ctx->pc = 0x3786D0u;
label_3786d0:
    // 0x3786d0: 0xc0c0830  jal         func_3020C0
label_3786d4:
    if (ctx->pc == 0x3786D4u) {
        ctx->pc = 0x3786D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786D0u;
        // 0x3786d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3786D8u;
        goto label_3786d8;
    }
    ctx->pc = 0x3786D0u;
    SET_GPR_U32(ctx, 31, 0x3786D8u);
    ctx->pc = 0x3786D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3786D0u;
    // 0x3786d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3786D0u, 0x3786D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3786D8u;
label_3786d8:
    // 0x3786d8: 0x100000ef  b           . + 4 + (0xEF << 2)
label_3786dc:
    if (ctx->pc == 0x3786DCu) {
        ctx->pc = 0x3786E0u;
        goto label_3786e0;
    }
    ctx->pc = 0x3786D8u;
    {
        const bool branch_taken_0x3786d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3786d8) {
            ctx->pc = 0x378A98u;
            goto label_378a98;
        }
    }
    ctx->pc = 0x3786E0u;
label_3786e0:
    // 0x3786e0: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x3786e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
label_3786e4:
    // 0x3786e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3786e8:
    if (ctx->pc == 0x3786E8u) {
        ctx->pc = 0x3786E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786E4u;
        // 0x3786e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3786ECu;
        goto label_3786ec;
    }
    ctx->pc = 0x3786E4u;
    {
        const bool branch_taken_0x3786e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3786E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786E4u;
        // 0x3786e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3786e4) {
            ctx->pc = 0x3786F8u;
            goto label_3786f8;
        }
    }
    ctx->pc = 0x3786ECu;
label_3786ec:
    // 0x3786ec: 0x10000022  b           . + 4 + (0x22 << 2)
label_3786f0:
    if (ctx->pc == 0x3786F0u) {
        ctx->pc = 0x3786F4u;
        goto label_3786f4;
    }
    ctx->pc = 0x3786ECu;
    {
        const bool branch_taken_0x3786ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3786ec) {
            ctx->pc = 0x378778u;
            goto label_378778;
        }
    }
    ctx->pc = 0x3786F4u;
label_3786f4:
    // 0x3786f4: 0x0  nop
    ctx->pc = 0x3786f4u;
    // NOP
label_3786f8:
    // 0x3786f8: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x3786f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3786fc:
    // 0x3786fc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3786fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_378700:
    // 0x378700: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x378700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_378704:
    // 0x378704: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x378704u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_378708:
    // 0x378708: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x378708u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
label_37870c:
    // 0x37870c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_378710:
    if (ctx->pc == 0x378710u) {
        ctx->pc = 0x378714u;
        goto label_378714;
    }
    ctx->pc = 0x37870Cu;
    {
        const bool branch_taken_0x37870c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x37870c) {
            ctx->pc = 0x378748u;
            goto label_378748;
        }
    }
    ctx->pc = 0x378714u;
label_378714:
    // 0x378714: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x378714u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_378718:
    // 0x378718: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x378718u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_37871c:
    // 0x37871c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_378720:
    if (ctx->pc == 0x378720u) {
        ctx->pc = 0x378720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37871Cu;
        // 0x378720: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378724u;
        goto label_378724;
    }
    ctx->pc = 0x37871Cu;
    {
        const bool branch_taken_0x37871c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x378720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37871Cu;
        // 0x378720: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37871c) {
            ctx->pc = 0x378770u;
            goto label_378770;
        }
    }
    ctx->pc = 0x378724u;
label_378724:
    // 0x378724: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_378728:
    // 0x378728: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x378728u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_37872c:
    // 0x37872c: 0x0  nop
    ctx->pc = 0x37872cu;
    // NOP
label_378730:
    // 0x378730: 0x0  nop
    ctx->pc = 0x378730u;
    // NOP
label_378734:
    // 0x378734: 0x2010  mfhi        $a0
    ctx->pc = 0x378734u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_378738:
    // 0x378738: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x378738u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_37873c:
    // 0x37873c: 0x1000000c  b           . + 4 + (0xC << 2)
label_378740:
    if (ctx->pc == 0x378740u) {
        ctx->pc = 0x378740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37873Cu;
        // 0x378740: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378744u;
        goto label_378744;
    }
    ctx->pc = 0x37873Cu;
    {
        const bool branch_taken_0x37873c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37873Cu;
        // 0x378740: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37873c) {
            ctx->pc = 0x378770u;
            goto label_378770;
        }
    }
    ctx->pc = 0x378744u;
label_378744:
    // 0x378744: 0x0  nop
    ctx->pc = 0x378744u;
    // NOP
label_378748:
    // 0x378748: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x378748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_37874c:
    // 0x37874c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x37874cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_378750:
    // 0x378750: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_378754:
    if (ctx->pc == 0x378754u) {
        ctx->pc = 0x378758u;
        goto label_378758;
    }
    ctx->pc = 0x378750u;
    {
        const bool branch_taken_0x378750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x378750) {
            ctx->pc = 0x378770u;
            goto label_378770;
        }
    }
    ctx->pc = 0x378758u;
label_378758:
    // 0x378758: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x378758u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_37875c:
    // 0x37875c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37875cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_378760:
    // 0x378760: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x378760u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
label_378764:
    // 0x378764: 0x10000004  b           . + 4 + (0x4 << 2)
label_378768:
    if (ctx->pc == 0x378768u) {
        ctx->pc = 0x378768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378764u;
        // 0x378768: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37876Cu;
        goto label_37876c;
    }
    ctx->pc = 0x378764u;
    {
        const bool branch_taken_0x378764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378764u;
        // 0x378768: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378764) {
            ctx->pc = 0x378778u;
            goto label_378778;
        }
    }
    ctx->pc = 0x37876Cu;
label_37876c:
    // 0x37876c: 0x0  nop
    ctx->pc = 0x37876cu;
    // NOP
label_378770:
    // 0x378770: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_378774:
    // 0x378774: 0x0  nop
    ctx->pc = 0x378774u;
    // NOP
label_378778:
    // 0x378778: 0x146000c7  bnez        $v1, . + 4 + (0xC7 << 2)
label_37877c:
    if (ctx->pc == 0x37877Cu) {
        ctx->pc = 0x37877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378778u;
        // 0x37877c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378780u;
        goto label_378780;
    }
    ctx->pc = 0x378778u;
    {
        const bool branch_taken_0x378778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378778u;
        // 0x37877c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378778) {
            ctx->pc = 0x378A98u;
            goto label_378a98;
        }
    }
    ctx->pc = 0x378780u;
label_378780:
    // 0x378780: 0xc0c0830  jal         func_3020C0
label_378784:
    if (ctx->pc == 0x378784u) {
        ctx->pc = 0x378784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378780u;
        // 0x378784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378788u;
        goto label_378788;
    }
    ctx->pc = 0x378780u;
    SET_GPR_U32(ctx, 31, 0x378788u);
    ctx->pc = 0x378784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378780u;
    // 0x378784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x378780u, 0x378788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378788u;
label_378788:
    // 0x378788: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_37878c:
    if (ctx->pc == 0x37878Cu) {
        ctx->pc = 0x378790u;
        goto label_378790;
    }
    ctx->pc = 0x378788u;
    {
        const bool branch_taken_0x378788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378788) {
            ctx->pc = 0x378A98u;
            goto label_378a98;
        }
    }
    ctx->pc = 0x378790u;
label_378790:
    // 0x378790: 0x92632901  lbu         $v1, 0x2901($s3)
    ctx->pc = 0x378790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10497)));
label_378794:
    // 0x378794: 0x8682052a  lh          $v0, 0x52A($s4)
    ctx->pc = 0x378794u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1322)));
label_378798:
    // 0x378798: 0x26840550  addiu       $a0, $s4, 0x550
    ctx->pc = 0x378798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1360));
label_37879c:
    // 0x37879c: 0x26662910  addiu       $a2, $s3, 0x2910
    ctx->pc = 0x37879cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 10512));
label_3787a0:
    // 0x3787a0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3787a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_3787a4:
    // 0x3787a4: 0xa6820512  sh          $v0, 0x512($s4)
    ctx->pc = 0x3787a4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 2));
label_3787a8:
    // 0x3787a8: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x3787a8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
label_3787ac:
    // 0x3787ac: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x3787acu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
label_3787b0:
    // 0x3787b0: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x3787b0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
label_3787b4:
    // 0x3787b4: 0x92820521  lbu         $v0, 0x521($s4)
    ctx->pc = 0x3787b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
label_3787b8:
    // 0x3787b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3787b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3787bc:
    // 0x3787bc: 0xa2820521  sb          $v0, 0x521($s4)
    ctx->pc = 0x3787bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3787c0:
    // 0x3787c0: 0xa68005ae  sh          $zero, 0x5AE($s4)
    ctx->pc = 0x3787c0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1454), (uint16_t)GPR_U32(ctx, 0));
label_3787c4:
    // 0x3787c4: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x3787c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_3787c8:
    // 0x3787c8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3787c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_3787cc:
    // 0x3787cc: 0xc07679c  jal         func_1D9E70
label_3787d0:
    if (ctx->pc == 0x3787D0u) {
        ctx->pc = 0x3787D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3787CCu;
        // 0x3787d0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3787D4u;
        goto label_3787d4;
    }
    ctx->pc = 0x3787CCu;
    SET_GPR_U32(ctx, 31, 0x3787D4u);
    ctx->pc = 0x3787D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3787CCu;
    // 0x3787d0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3787CCu, 0x3787D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3787D4u;
label_3787d4:
    // 0x3787d4: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3787d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_3787d8:
    // 0x3787d8: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x3787d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_3787dc:
    // 0x3787dc: 0xc0766b8  jal         func_1D9AE0
label_3787e0:
    if (ctx->pc == 0x3787E0u) {
        ctx->pc = 0x3787E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3787DCu;
        // 0x3787e0: 0x26860550  addiu       $a2, $s4, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3787E4u;
        goto label_3787e4;
    }
    ctx->pc = 0x3787DCu;
    SET_GPR_U32(ctx, 31, 0x3787E4u);
    ctx->pc = 0x3787E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3787DCu;
    // 0x3787e0: 0x26860550  addiu       $a2, $s4, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3787DCu, 0x3787E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3787E4u;
label_3787e4:
    // 0x3787e4: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3787e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_3787e8:
    // 0x3787e8: 0xae800094  sw          $zero, 0x94($s4)
    ctx->pc = 0x3787e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 0));
label_3787ec:
    // 0x3787ec: 0xc0766dc  jal         func_1D9B70
label_3787f0:
    if (ctx->pc == 0x3787F0u) {
        ctx->pc = 0x3787F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3787ECu;
        // 0x3787f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3787F4u;
        goto label_3787f4;
    }
    ctx->pc = 0x3787ECu;
    SET_GPR_U32(ctx, 31, 0x3787F4u);
    ctx->pc = 0x3787F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3787ECu;
    // 0x3787f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3787ECu, 0x3787F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3787F4u;
label_3787f4:
    // 0x3787f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3787f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3787f8:
    // 0x3787f8: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3787f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_3787fc:
    // 0x3787fc: 0xae820094  sw          $v0, 0x94($s4)
    ctx->pc = 0x3787fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 2));
label_378800:
    // 0x378800: 0xc0766dc  jal         func_1D9B70
label_378804:
    if (ctx->pc == 0x378804u) {
        ctx->pc = 0x378804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378800u;
        // 0x378804: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378808u;
        goto label_378808;
    }
    ctx->pc = 0x378800u;
    SET_GPR_U32(ctx, 31, 0x378808u);
    ctx->pc = 0x378804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378800u;
    // 0x378804: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x378800u, 0x378808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378808u;
label_378808:
    // 0x378808: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x378808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
label_37880c:
    // 0x37880c: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x37880cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_378810:
    // 0x378810: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x378810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_378814:
    // 0x378814: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x378814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_378818:
    // 0x378818: 0xc076690  jal         func_1D9A40
label_37881c:
    if (ctx->pc == 0x37881Cu) {
        ctx->pc = 0x37881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378818u;
        // 0x37881c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378820u;
        goto label_378820;
    }
    ctx->pc = 0x378818u;
    SET_GPR_U32(ctx, 31, 0x378820u);
    ctx->pc = 0x37881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378818u;
    // 0x37881c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x378818u, 0x378820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378820u;
label_378820:
    // 0x378820: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x378820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_378824:
    // 0x378824: 0x3c02458c  lui         $v0, 0x458C
    ctx->pc = 0x378824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17804 << 16));
label_378828:
    // 0x378828: 0x26830090  addiu       $v1, $s4, 0x90
    ctx->pc = 0x378828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_37882c:
    // 0x37882c: 0xae870578  sw          $a3, 0x578($s4)
    ctx->pc = 0x37882cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1400), GPR_U32(ctx, 7));
label_378830:
    // 0x378830: 0xae83057c  sw          $v1, 0x57C($s4)
    ctx->pc = 0x378830u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1404), GPR_U32(ctx, 3));
label_378834:
    // 0x378834: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x378834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
label_378838:
    // 0x378838: 0xae820560  sw          $v0, 0x560($s4)
    ctx->pc = 0x378838u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1376), GPR_U32(ctx, 2));
label_37883c:
    // 0x37883c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x37883cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_378840:
    // 0x378840: 0xae820564  sw          $v0, 0x564($s4)
    ctx->pc = 0x378840u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1380), GPR_U32(ctx, 2));
label_378844:
    // 0x378844: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x378844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_378848:
    // 0x378848: 0xae820568  sw          $v0, 0x568($s4)
    ctx->pc = 0x378848u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1384), GPR_U32(ctx, 2));
label_37884c:
    // 0x37884c: 0x26820522  addiu       $v0, $s4, 0x522
    ctx->pc = 0x37884cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1314));
label_378850:
    // 0x378850: 0xae820580  sw          $v0, 0x580($s4)
    ctx->pc = 0x378850u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1408), GPR_U32(ctx, 2));
label_378854:
    // 0x378854: 0x268205ae  addiu       $v0, $s4, 0x5AE
    ctx->pc = 0x378854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1454));
label_378858:
    // 0x378858: 0xae820584  sw          $v0, 0x584($s4)
    ctx->pc = 0x378858u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1412), GPR_U32(ctx, 2));
label_37885c:
    // 0x37885c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x37885cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_378860:
    // 0x378860: 0xa682056c  sh          $v0, 0x56C($s4)
    ctx->pc = 0x378860u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1388), (uint16_t)GPR_U32(ctx, 2));
label_378864:
    // 0x378864: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x378864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_378868:
    // 0x378868: 0xa682056e  sh          $v0, 0x56E($s4)
    ctx->pc = 0x378868u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1390), (uint16_t)GPR_U32(ctx, 2));
label_37886c:
    // 0x37886c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x37886cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_378870:
    // 0x378870: 0xa6820570  sh          $v0, 0x570($s4)
    ctx->pc = 0x378870u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1392), (uint16_t)GPR_U32(ctx, 2));
label_378874:
    // 0x378874: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x378874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_378878:
    // 0x378878: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x378878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
label_37887c:
    // 0x37887c: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_378880:
    if (ctx->pc == 0x378880u) {
        ctx->pc = 0x378880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37887Cu;
        // 0x378880: 0xae820574  sw          $v0, 0x574($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378884u;
        goto label_378884;
    }
    ctx->pc = 0x37887Cu;
    {
        const bool branch_taken_0x37887c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x378880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37887Cu;
        // 0x378880: 0xae820574  sw          $v0, 0x574($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37887c) {
            ctx->pc = 0x3788B8u;
            goto label_3788b8;
        }
    }
    ctx->pc = 0x378884u;
label_378884:
    // 0x378884: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x378884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
label_378888:
    // 0x378888: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x378888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_37888c:
    // 0x37888c: 0x3c022500  lui         $v0, 0x2500
    ctx->pc = 0x37888cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9472 << 16));
label_378890:
    // 0x378890: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x378890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_378894:
    // 0x378894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x378894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378898:
    // 0x378898: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x378898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
label_37889c:
    // 0x37889c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37889cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3788a0:
    // 0x3788a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3788a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3788a4:
    // 0x3788a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3788a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3788a8:
    // 0x3788a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3788a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3788ac:
    // 0x3788ac: 0xc05e9e8  jal         func_17A7A0
label_3788b0:
    if (ctx->pc == 0x3788B0u) {
        ctx->pc = 0x3788B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3788ACu;
        // 0x3788b0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3788B4u;
        goto label_3788b4;
    }
    ctx->pc = 0x3788ACu;
    SET_GPR_U32(ctx, 31, 0x3788B4u);
    ctx->pc = 0x3788B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3788ACu;
    // 0x3788b0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3788ACu, 0x3788B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3788B4u;
label_3788b4:
    // 0x3788b4: 0x0  nop
    ctx->pc = 0x3788b4u;
    // NOP
label_3788b8:
    // 0x3788b8: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x3788b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_3788bc:
    // 0x3788bc: 0x92632901  lbu         $v1, 0x2901($s3)
    ctx->pc = 0x3788bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10497)));
label_3788c0:
    // 0x3788c0: 0x26840550  addiu       $a0, $s4, 0x550
    ctx->pc = 0x3788c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1360));
label_3788c4:
    // 0x3788c4: 0x26662910  addiu       $a2, $s3, 0x2910
    ctx->pc = 0x3788c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 10512));
label_3788c8:
    // 0x3788c8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3788c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_3788cc:
    // 0x3788cc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3788ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_3788d0:
    // 0x3788d0: 0xc07679c  jal         func_1D9E70
label_3788d4:
    if (ctx->pc == 0x3788D4u) {
        ctx->pc = 0x3788D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3788D0u;
        // 0x3788d4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3788D8u;
        goto label_3788d8;
    }
    ctx->pc = 0x3788D0u;
    SET_GPR_U32(ctx, 31, 0x3788D8u);
    ctx->pc = 0x3788D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3788D0u;
    // 0x3788d4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3788D0u, 0x3788D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3788D8u;
label_3788d8:
    // 0x3788d8: 0xc097758  jal         func_25DD60
label_3788dc:
    if (ctx->pc == 0x3788DCu) {
        ctx->pc = 0x3788DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3788D8u;
        // 0x3788dc: 0x26840550  addiu       $a0, $s4, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3788E0u;
        goto label_3788e0;
    }
    ctx->pc = 0x3788D8u;
    SET_GPR_U32(ctx, 31, 0x3788E0u);
    ctx->pc = 0x3788DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3788D8u;
    // 0x3788dc: 0x26840550  addiu       $a0, $s4, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DD60u, 0x3788D8u, 0x3788E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3788E0u;
label_3788e0:
    // 0x3788e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3788e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3788e4:
    // 0x3788e4: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_3788e8:
    if (ctx->pc == 0x3788E8u) {
        ctx->pc = 0x3788E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3788E4u;
        // 0x3788e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3788ECu;
        goto label_3788ec;
    }
    ctx->pc = 0x3788E4u;
    {
        const bool branch_taken_0x3788e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3788E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3788E4u;
        // 0x3788e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3788e4) {
            ctx->pc = 0x378920u;
            goto label_378920;
        }
    }
    ctx->pc = 0x3788ECu;
label_3788ec:
    // 0x3788ec: 0x10430022  beq         $v0, $v1, . + 4 + (0x22 << 2)
label_3788f0:
    if (ctx->pc == 0x3788F0u) {
        ctx->pc = 0x3788F4u;
        goto label_3788f4;
    }
    ctx->pc = 0x3788ECu;
    {
        const bool branch_taken_0x3788ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3788ec) {
            ctx->pc = 0x378978u;
            goto label_378978;
        }
    }
    ctx->pc = 0x3788F4u;
label_3788f4:
    // 0x3788f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3788f8:
    if (ctx->pc == 0x3788F8u) {
        ctx->pc = 0x3788FCu;
        goto label_3788fc;
    }
    ctx->pc = 0x3788F4u;
    {
        const bool branch_taken_0x3788f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3788f4) {
            ctx->pc = 0x378908u;
            goto label_378908;
        }
    }
    ctx->pc = 0x3788FCu;
label_3788fc:
    // 0x3788fc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_378900:
    if (ctx->pc == 0x378900u) {
        ctx->pc = 0x378904u;
        goto label_378904;
    }
    ctx->pc = 0x3788FCu;
    {
        const bool branch_taken_0x3788fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3788fc) {
            ctx->pc = 0x378978u;
            goto label_378978;
        }
    }
    ctx->pc = 0x378904u;
label_378904:
    // 0x378904: 0x0  nop
    ctx->pc = 0x378904u;
    // NOP
label_378908:
    // 0x378908: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x378908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_37890c:
    // 0x37890c: 0xc0c0830  jal         func_3020C0
label_378910:
    if (ctx->pc == 0x378910u) {
        ctx->pc = 0x378910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37890Cu;
        // 0x378910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378914u;
        goto label_378914;
    }
    ctx->pc = 0x37890Cu;
    SET_GPR_U32(ctx, 31, 0x378914u);
    ctx->pc = 0x378910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37890Cu;
    // 0x378910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x37890Cu, 0x378914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378914u;
label_378914:
    // 0x378914: 0x10000018  b           . + 4 + (0x18 << 2)
label_378918:
    if (ctx->pc == 0x378918u) {
        ctx->pc = 0x37891Cu;
        goto label_37891c;
    }
    ctx->pc = 0x378914u;
    {
        const bool branch_taken_0x378914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378914) {
            ctx->pc = 0x378978u;
            goto label_378978;
        }
    }
    ctx->pc = 0x37891Cu;
label_37891c:
    // 0x37891c: 0x0  nop
    ctx->pc = 0x37891cu;
    // NOP
label_378920:
    // 0x378920: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x378920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_378924:
    // 0x378924: 0xc0c0830  jal         func_3020C0
label_378928:
    if (ctx->pc == 0x378928u) {
        ctx->pc = 0x378928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378924u;
        // 0x378928: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37892Cu;
        goto label_37892c;
    }
    ctx->pc = 0x378924u;
    SET_GPR_U32(ctx, 31, 0x37892Cu);
    ctx->pc = 0x378928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378924u;
    // 0x378928: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x378924u, 0x37892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37892Cu;
label_37892c:
    // 0x37892c: 0x8e7904d4  lw          $t9, 0x4D4($s3)
    ctx->pc = 0x37892cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1236)));
label_378930:
    // 0x378930: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x378930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_378934:
    // 0x378934: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x378934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_378938:
    // 0x378938: 0x320f809  jalr        $t9
label_37893c:
    if (ctx->pc == 0x37893Cu) {
        ctx->pc = 0x37893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378938u;
        // 0x37893c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378940u;
        goto label_378940;
    }
    ctx->pc = 0x378938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x378940u);
        ctx->pc = 0x37893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378938u;
        // 0x37893c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378938u, 0x378940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x378940u;
label_378940:
    // 0x378940: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x378940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
label_378944:
    // 0x378944: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x378944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_378948:
    // 0x378948: 0x3c022600  lui         $v0, 0x2600
    ctx->pc = 0x378948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9728 << 16));
label_37894c:
    // 0x37894c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x37894cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_378950:
    // 0x378950: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x378950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378954:
    // 0x378954: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x378954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
label_378958:
    // 0x378958: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x378958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_37895c:
    // 0x37895c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37895cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378960:
    // 0x378960: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x378960u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378964:
    // 0x378964: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x378964u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378968:
    // 0x378968: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x378968u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37896c:
    // 0x37896c: 0xc05e9e8  jal         func_17A7A0
label_378970:
    if (ctx->pc == 0x378970u) {
        ctx->pc = 0x378970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37896Cu;
        // 0x378970: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378974u;
        goto label_378974;
    }
    ctx->pc = 0x37896Cu;
    SET_GPR_U32(ctx, 31, 0x378974u);
    ctx->pc = 0x378970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37896Cu;
    // 0x378970: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x37896Cu, 0x378974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378974u;
label_378974:
    // 0x378974: 0x0  nop
    ctx->pc = 0x378974u;
    // NOP
label_378978:
    // 0x378978: 0x8e8605a0  lw          $a2, 0x5A0($s4)
    ctx->pc = 0x378978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1440)));
label_37897c:
    // 0x37897c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37897cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_378980:
    // 0x378980: 0xc0c08b4  jal         func_3022D0
label_378984:
    if (ctx->pc == 0x378984u) {
        ctx->pc = 0x378984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378980u;
        // 0x378984: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378988u;
        goto label_378988;
    }
    ctx->pc = 0x378980u;
    SET_GPR_U32(ctx, 31, 0x378988u);
    ctx->pc = 0x378984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378980u;
    // 0x378984: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x378980u, 0x378988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378988u;
label_378988:
    // 0x378988: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_37898c:
    if (ctx->pc == 0x37898Cu) {
        ctx->pc = 0x37898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378988u;
        // 0x37898c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378990u;
        goto label_378990;
    }
    ctx->pc = 0x378988u;
    {
        const bool branch_taken_0x378988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378988u;
        // 0x37898c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378988) {
            ctx->pc = 0x378998u;
            goto label_378998;
        }
    }
    ctx->pc = 0x378990u;
label_378990:
    // 0x378990: 0xc0c0830  jal         func_3020C0
label_378994:
    if (ctx->pc == 0x378994u) {
        ctx->pc = 0x378994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378990u;
        // 0x378994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378998u;
        goto label_378998;
    }
    ctx->pc = 0x378990u;
    SET_GPR_U32(ctx, 31, 0x378998u);
    ctx->pc = 0x378994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378990u;
    // 0x378994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x378990u, 0x378998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378998u;
label_378998:
    // 0x378998: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x378998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_37899c:
    // 0x37899c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x37899cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
label_3789a0:
    // 0x3789a0: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x3789a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3789a4:
    // 0x3789a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3789a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3789a8:
    // 0x3789a8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3789a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3789ac:
    // 0x3789ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3789acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3789b0:
    // 0x3789b0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3789b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3789b4:
    // 0x3789b4: 0x7fa900a0  sq          $t1, 0xA0($sp)
    ctx->pc = 0x3789b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 9));
label_3789b8:
    // 0x3789b8: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3789b8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 1), 23600)));
label_3789bc:
    // 0x3789bc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3789bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3789c0:
    // 0x3789c0: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x3789c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
label_3789c4:
    // 0x3789c4: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3789c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23616)));
label_3789c8:
    // 0x3789c8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3789c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3789cc:
    // 0x3789cc: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3789ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_3789d0:
    // 0x3789d0: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3789d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23632)));
label_3789d4:
    // 0x3789d4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3789d4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_3789d8:
    // 0x3789d8: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x3789d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_3789dc:
    // 0x3789dc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3789dcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_3789e0:
    // 0x3789e0: 0x928605a8  lbu         $a2, 0x5A8($s4)
    ctx->pc = 0x3789e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1448)));
label_3789e4:
    // 0x3789e4: 0xc68c05a4  lwc1        $f12, 0x5A4($s4)
    ctx->pc = 0x3789e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3789e8:
    // 0x3789e8: 0xc0c0900  jal         func_302400
label_3789ec:
    if (ctx->pc == 0x3789ECu) {
        ctx->pc = 0x3789ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3789E8u;
        // 0x3789ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3789F0u;
        goto label_3789f0;
    }
    ctx->pc = 0x3789E8u;
    SET_GPR_U32(ctx, 31, 0x3789F0u);
    ctx->pc = 0x3789ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3789E8u;
    // 0x3789ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3789E8u, 0x3789F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3789F0u;
label_3789f0:
    // 0x3789f0: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x3789f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
label_3789f4:
    // 0x3789f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3789f8:
    if (ctx->pc == 0x3789F8u) {
        ctx->pc = 0x3789F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3789F4u;
        // 0x3789f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3789FCu;
        goto label_3789fc;
    }
    ctx->pc = 0x3789F4u;
    {
        const bool branch_taken_0x3789f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3789F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3789F4u;
        // 0x3789f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3789f4) {
            ctx->pc = 0x378A08u;
            goto label_378a08;
        }
    }
    ctx->pc = 0x3789FCu;
label_3789fc:
    // 0x3789fc: 0x10000022  b           . + 4 + (0x22 << 2)
label_378a00:
    if (ctx->pc == 0x378A00u) {
        ctx->pc = 0x378A04u;
        goto label_378a04;
    }
    ctx->pc = 0x3789FCu;
    {
        const bool branch_taken_0x3789fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3789fc) {
            ctx->pc = 0x378A88u;
            goto label_378a88;
        }
    }
    ctx->pc = 0x378A04u;
label_378a04:
    // 0x378a04: 0x0  nop
    ctx->pc = 0x378a04u;
    // NOP
label_378a08:
    // 0x378a08: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x378a08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_378a0c:
    // 0x378a0c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x378a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_378a10:
    // 0x378a10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x378a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_378a14:
    // 0x378a14: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x378a14u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_378a18:
    // 0x378a18: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x378a18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
label_378a1c:
    // 0x378a1c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_378a20:
    if (ctx->pc == 0x378A20u) {
        ctx->pc = 0x378A24u;
        goto label_378a24;
    }
    ctx->pc = 0x378A1Cu;
    {
        const bool branch_taken_0x378a1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x378a1c) {
            ctx->pc = 0x378A58u;
            goto label_378a58;
        }
    }
    ctx->pc = 0x378A24u;
label_378a24:
    // 0x378a24: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x378a24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_378a28:
    // 0x378a28: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x378a28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_378a2c:
    // 0x378a2c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_378a30:
    if (ctx->pc == 0x378A30u) {
        ctx->pc = 0x378A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378A2Cu;
        // 0x378a30: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378A34u;
        goto label_378a34;
    }
    ctx->pc = 0x378A2Cu;
    {
        const bool branch_taken_0x378a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x378A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378A2Cu;
        // 0x378a30: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378a2c) {
            ctx->pc = 0x378A80u;
            goto label_378a80;
        }
    }
    ctx->pc = 0x378A34u;
label_378a34:
    // 0x378a34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_378a38:
    // 0x378a38: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x378a38u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_378a3c:
    // 0x378a3c: 0x0  nop
    ctx->pc = 0x378a3cu;
    // NOP
label_378a40:
    // 0x378a40: 0x0  nop
    ctx->pc = 0x378a40u;
    // NOP
label_378a44:
    // 0x378a44: 0x2010  mfhi        $a0
    ctx->pc = 0x378a44u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_378a48:
    // 0x378a48: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x378a48u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_378a4c:
    // 0x378a4c: 0x1000000c  b           . + 4 + (0xC << 2)
label_378a50:
    if (ctx->pc == 0x378A50u) {
        ctx->pc = 0x378A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378A4Cu;
        // 0x378a50: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378A54u;
        goto label_378a54;
    }
    ctx->pc = 0x378A4Cu;
    {
        const bool branch_taken_0x378a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378A4Cu;
        // 0x378a50: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378a4c) {
            ctx->pc = 0x378A80u;
            goto label_378a80;
        }
    }
    ctx->pc = 0x378A54u;
label_378a54:
    // 0x378a54: 0x0  nop
    ctx->pc = 0x378a54u;
    // NOP
label_378a58:
    // 0x378a58: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x378a58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_378a5c:
    // 0x378a5c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x378a5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_378a60:
    // 0x378a60: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_378a64:
    if (ctx->pc == 0x378A64u) {
        ctx->pc = 0x378A68u;
        goto label_378a68;
    }
    ctx->pc = 0x378A60u;
    {
        const bool branch_taken_0x378a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x378a60) {
            ctx->pc = 0x378A80u;
            goto label_378a80;
        }
    }
    ctx->pc = 0x378A68u;
label_378a68:
    // 0x378a68: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x378a68u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_378a6c:
    // 0x378a6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_378a70:
    // 0x378a70: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x378a70u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
label_378a74:
    // 0x378a74: 0x10000004  b           . + 4 + (0x4 << 2)
label_378a78:
    if (ctx->pc == 0x378A78u) {
        ctx->pc = 0x378A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378A74u;
        // 0x378a78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378A7Cu;
        goto label_378a7c;
    }
    ctx->pc = 0x378A74u;
    {
        const bool branch_taken_0x378a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378A74u;
        // 0x378a78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378a74) {
            ctx->pc = 0x378A88u;
            goto label_378a88;
        }
    }
    ctx->pc = 0x378A7Cu;
label_378a7c:
    // 0x378a7c: 0x0  nop
    ctx->pc = 0x378a7cu;
    // NOP
label_378a80:
    // 0x378a80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_378a84:
    // 0x378a84: 0x0  nop
    ctx->pc = 0x378a84u;
    // NOP
label_378a88:
    // 0x378a88: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_378a8c:
    if (ctx->pc == 0x378A8Cu) {
        ctx->pc = 0x378A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378A88u;
        // 0x378a8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378A90u;
        goto label_378a90;
    }
    ctx->pc = 0x378A88u;
    {
        const bool branch_taken_0x378a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x378A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378A88u;
        // 0x378a8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378a88) {
            ctx->pc = 0x378A98u;
            goto label_378a98;
        }
    }
    ctx->pc = 0x378A90u;
label_378a90:
    // 0x378a90: 0xc0c0830  jal         func_3020C0
label_378a94:
    if (ctx->pc == 0x378A94u) {
        ctx->pc = 0x378A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378A90u;
        // 0x378a94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378A98u;
        goto label_378a98;
    }
    ctx->pc = 0x378A90u;
    SET_GPR_U32(ctx, 31, 0x378A98u);
    ctx->pc = 0x378A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378A90u;
    // 0x378a94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x378A90u, 0x378A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378A98u;
label_378a98:
    // 0x378a98: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x378a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_378a9c:
    // 0x378a9c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x378a9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_378aa0:
    // 0x378aa0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x378aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_378aa4:
    // 0x378aa4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x378aa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_378aa8:
    // 0x378aa8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x378aa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_378aac:
    // 0x378aac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x378aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_378ab0:
    // 0x378ab0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x378ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_378ab4:
    // 0x378ab4: 0x3e00008  jr          $ra
label_378ab8:
    if (ctx->pc == 0x378AB8u) {
        ctx->pc = 0x378AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378AB4u;
        // 0x378ab8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378ABCu;
        goto label_fallthrough_0x378ab4;
    }
    ctx->pc = 0x378AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378AB4u;
        // 0x378ab8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x378ab4:
    ctx->pc = 0x378ABCu;
}
