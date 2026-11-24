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

// Function: sub_003C7E60
// Address: 0x3c7e60 - 0x3c8cd4
void sub_003C7E60_0x3c7e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7E60_0x3c7e60");
#endif

    switch (ctx->pc) {
        case 0x3c7e60u: goto label_3c7e60;
        case 0x3c7e64u: goto label_3c7e64;
        case 0x3c7e68u: goto label_3c7e68;
        case 0x3c7e6cu: goto label_3c7e6c;
        case 0x3c7e70u: goto label_3c7e70;
        case 0x3c7e74u: goto label_3c7e74;
        case 0x3c7e78u: goto label_3c7e78;
        case 0x3c7e7cu: goto label_3c7e7c;
        case 0x3c7e80u: goto label_3c7e80;
        case 0x3c7e84u: goto label_3c7e84;
        case 0x3c7e88u: goto label_3c7e88;
        case 0x3c7e8cu: goto label_3c7e8c;
        case 0x3c7e90u: goto label_3c7e90;
        case 0x3c7e94u: goto label_3c7e94;
        case 0x3c7e98u: goto label_3c7e98;
        case 0x3c7e9cu: goto label_3c7e9c;
        case 0x3c7ea0u: goto label_3c7ea0;
        case 0x3c7ea4u: goto label_3c7ea4;
        case 0x3c7ea8u: goto label_3c7ea8;
        case 0x3c7eacu: goto label_3c7eac;
        case 0x3c7eb0u: goto label_3c7eb0;
        case 0x3c7eb4u: goto label_3c7eb4;
        case 0x3c7eb8u: goto label_3c7eb8;
        case 0x3c7ebcu: goto label_3c7ebc;
        case 0x3c7ec0u: goto label_3c7ec0;
        case 0x3c7ec4u: goto label_3c7ec4;
        case 0x3c7ec8u: goto label_3c7ec8;
        case 0x3c7eccu: goto label_3c7ecc;
        case 0x3c7ed0u: goto label_3c7ed0;
        case 0x3c7ed4u: goto label_3c7ed4;
        case 0x3c7ed8u: goto label_3c7ed8;
        case 0x3c7edcu: goto label_3c7edc;
        case 0x3c7ee0u: goto label_3c7ee0;
        case 0x3c7ee4u: goto label_3c7ee4;
        case 0x3c7ee8u: goto label_3c7ee8;
        case 0x3c7eecu: goto label_3c7eec;
        case 0x3c7ef0u: goto label_3c7ef0;
        case 0x3c7ef4u: goto label_3c7ef4;
        case 0x3c7ef8u: goto label_3c7ef8;
        case 0x3c7efcu: goto label_3c7efc;
        case 0x3c7f00u: goto label_3c7f00;
        case 0x3c7f04u: goto label_3c7f04;
        case 0x3c7f08u: goto label_3c7f08;
        case 0x3c7f0cu: goto label_3c7f0c;
        case 0x3c7f10u: goto label_3c7f10;
        case 0x3c7f14u: goto label_3c7f14;
        case 0x3c7f18u: goto label_3c7f18;
        case 0x3c7f1cu: goto label_3c7f1c;
        case 0x3c7f20u: goto label_3c7f20;
        case 0x3c7f24u: goto label_3c7f24;
        case 0x3c7f28u: goto label_3c7f28;
        case 0x3c7f2cu: goto label_3c7f2c;
        case 0x3c7f30u: goto label_3c7f30;
        case 0x3c7f34u: goto label_3c7f34;
        case 0x3c7f38u: goto label_3c7f38;
        case 0x3c7f3cu: goto label_3c7f3c;
        case 0x3c7f40u: goto label_3c7f40;
        case 0x3c7f44u: goto label_3c7f44;
        case 0x3c7f48u: goto label_3c7f48;
        case 0x3c7f4cu: goto label_3c7f4c;
        case 0x3c7f50u: goto label_3c7f50;
        case 0x3c7f54u: goto label_3c7f54;
        case 0x3c7f58u: goto label_3c7f58;
        case 0x3c7f5cu: goto label_3c7f5c;
        case 0x3c7f60u: goto label_3c7f60;
        case 0x3c7f64u: goto label_3c7f64;
        case 0x3c7f68u: goto label_3c7f68;
        case 0x3c7f6cu: goto label_3c7f6c;
        case 0x3c7f70u: goto label_3c7f70;
        case 0x3c7f74u: goto label_3c7f74;
        case 0x3c7f78u: goto label_3c7f78;
        case 0x3c7f7cu: goto label_3c7f7c;
        case 0x3c7f80u: goto label_3c7f80;
        case 0x3c7f84u: goto label_3c7f84;
        case 0x3c7f88u: goto label_3c7f88;
        case 0x3c7f8cu: goto label_3c7f8c;
        case 0x3c7f90u: goto label_3c7f90;
        case 0x3c7f94u: goto label_3c7f94;
        case 0x3c7f98u: goto label_3c7f98;
        case 0x3c7f9cu: goto label_3c7f9c;
        case 0x3c7fa0u: goto label_3c7fa0;
        case 0x3c7fa4u: goto label_3c7fa4;
        case 0x3c7fa8u: goto label_3c7fa8;
        case 0x3c7facu: goto label_3c7fac;
        case 0x3c7fb0u: goto label_3c7fb0;
        case 0x3c7fb4u: goto label_3c7fb4;
        case 0x3c7fb8u: goto label_3c7fb8;
        case 0x3c7fbcu: goto label_3c7fbc;
        case 0x3c7fc0u: goto label_3c7fc0;
        case 0x3c7fc4u: goto label_3c7fc4;
        case 0x3c7fc8u: goto label_3c7fc8;
        case 0x3c7fccu: goto label_3c7fcc;
        case 0x3c7fd0u: goto label_3c7fd0;
        case 0x3c7fd4u: goto label_3c7fd4;
        case 0x3c7fd8u: goto label_3c7fd8;
        case 0x3c7fdcu: goto label_3c7fdc;
        case 0x3c7fe0u: goto label_3c7fe0;
        case 0x3c7fe4u: goto label_3c7fe4;
        case 0x3c7fe8u: goto label_3c7fe8;
        case 0x3c7fecu: goto label_3c7fec;
        case 0x3c7ff0u: goto label_3c7ff0;
        case 0x3c7ff4u: goto label_3c7ff4;
        case 0x3c7ff8u: goto label_3c7ff8;
        case 0x3c7ffcu: goto label_3c7ffc;
        case 0x3c8000u: goto label_3c8000;
        case 0x3c8004u: goto label_3c8004;
        case 0x3c8008u: goto label_3c8008;
        case 0x3c800cu: goto label_3c800c;
        case 0x3c8010u: goto label_3c8010;
        case 0x3c8014u: goto label_3c8014;
        case 0x3c8018u: goto label_3c8018;
        case 0x3c801cu: goto label_3c801c;
        case 0x3c8020u: goto label_3c8020;
        case 0x3c8024u: goto label_3c8024;
        case 0x3c8028u: goto label_3c8028;
        case 0x3c802cu: goto label_3c802c;
        case 0x3c8030u: goto label_3c8030;
        case 0x3c8034u: goto label_3c8034;
        case 0x3c8038u: goto label_3c8038;
        case 0x3c803cu: goto label_3c803c;
        case 0x3c8040u: goto label_3c8040;
        case 0x3c8044u: goto label_3c8044;
        case 0x3c8048u: goto label_3c8048;
        case 0x3c804cu: goto label_3c804c;
        case 0x3c8050u: goto label_3c8050;
        case 0x3c8054u: goto label_3c8054;
        case 0x3c8058u: goto label_3c8058;
        case 0x3c805cu: goto label_3c805c;
        case 0x3c8060u: goto label_3c8060;
        case 0x3c8064u: goto label_3c8064;
        case 0x3c8068u: goto label_3c8068;
        case 0x3c806cu: goto label_3c806c;
        case 0x3c8070u: goto label_3c8070;
        case 0x3c8074u: goto label_3c8074;
        case 0x3c8078u: goto label_3c8078;
        case 0x3c807cu: goto label_3c807c;
        case 0x3c8080u: goto label_3c8080;
        case 0x3c8084u: goto label_3c8084;
        case 0x3c8088u: goto label_3c8088;
        case 0x3c808cu: goto label_3c808c;
        case 0x3c8090u: goto label_3c8090;
        case 0x3c8094u: goto label_3c8094;
        case 0x3c8098u: goto label_3c8098;
        case 0x3c809cu: goto label_3c809c;
        case 0x3c80a0u: goto label_3c80a0;
        case 0x3c80a4u: goto label_3c80a4;
        case 0x3c80a8u: goto label_3c80a8;
        case 0x3c80acu: goto label_3c80ac;
        case 0x3c80b0u: goto label_3c80b0;
        case 0x3c80b4u: goto label_3c80b4;
        case 0x3c80b8u: goto label_3c80b8;
        case 0x3c80bcu: goto label_3c80bc;
        case 0x3c80c0u: goto label_3c80c0;
        case 0x3c80c4u: goto label_3c80c4;
        case 0x3c80c8u: goto label_3c80c8;
        case 0x3c80ccu: goto label_3c80cc;
        case 0x3c80d0u: goto label_3c80d0;
        case 0x3c80d4u: goto label_3c80d4;
        case 0x3c80d8u: goto label_3c80d8;
        case 0x3c80dcu: goto label_3c80dc;
        case 0x3c80e0u: goto label_3c80e0;
        case 0x3c80e4u: goto label_3c80e4;
        case 0x3c80e8u: goto label_3c80e8;
        case 0x3c80ecu: goto label_3c80ec;
        case 0x3c80f0u: goto label_3c80f0;
        case 0x3c80f4u: goto label_3c80f4;
        case 0x3c80f8u: goto label_3c80f8;
        case 0x3c80fcu: goto label_3c80fc;
        case 0x3c8100u: goto label_3c8100;
        case 0x3c8104u: goto label_3c8104;
        case 0x3c8108u: goto label_3c8108;
        case 0x3c810cu: goto label_3c810c;
        case 0x3c8110u: goto label_3c8110;
        case 0x3c8114u: goto label_3c8114;
        case 0x3c8118u: goto label_3c8118;
        case 0x3c811cu: goto label_3c811c;
        case 0x3c8120u: goto label_3c8120;
        case 0x3c8124u: goto label_3c8124;
        case 0x3c8128u: goto label_3c8128;
        case 0x3c812cu: goto label_3c812c;
        case 0x3c8130u: goto label_3c8130;
        case 0x3c8134u: goto label_3c8134;
        case 0x3c8138u: goto label_3c8138;
        case 0x3c813cu: goto label_3c813c;
        case 0x3c8140u: goto label_3c8140;
        case 0x3c8144u: goto label_3c8144;
        case 0x3c8148u: goto label_3c8148;
        case 0x3c814cu: goto label_3c814c;
        case 0x3c8150u: goto label_3c8150;
        case 0x3c8154u: goto label_3c8154;
        case 0x3c8158u: goto label_3c8158;
        case 0x3c815cu: goto label_3c815c;
        case 0x3c8160u: goto label_3c8160;
        case 0x3c8164u: goto label_3c8164;
        case 0x3c8168u: goto label_3c8168;
        case 0x3c816cu: goto label_3c816c;
        case 0x3c8170u: goto label_3c8170;
        case 0x3c8174u: goto label_3c8174;
        case 0x3c8178u: goto label_3c8178;
        case 0x3c817cu: goto label_3c817c;
        case 0x3c8180u: goto label_3c8180;
        case 0x3c8184u: goto label_3c8184;
        case 0x3c8188u: goto label_3c8188;
        case 0x3c818cu: goto label_3c818c;
        case 0x3c8190u: goto label_3c8190;
        case 0x3c8194u: goto label_3c8194;
        case 0x3c8198u: goto label_3c8198;
        case 0x3c819cu: goto label_3c819c;
        case 0x3c81a0u: goto label_3c81a0;
        case 0x3c81a4u: goto label_3c81a4;
        case 0x3c81a8u: goto label_3c81a8;
        case 0x3c81acu: goto label_3c81ac;
        case 0x3c81b0u: goto label_3c81b0;
        case 0x3c81b4u: goto label_3c81b4;
        case 0x3c81b8u: goto label_3c81b8;
        case 0x3c81bcu: goto label_3c81bc;
        case 0x3c81c0u: goto label_3c81c0;
        case 0x3c81c4u: goto label_3c81c4;
        case 0x3c81c8u: goto label_3c81c8;
        case 0x3c81ccu: goto label_3c81cc;
        case 0x3c81d0u: goto label_3c81d0;
        case 0x3c81d4u: goto label_3c81d4;
        case 0x3c81d8u: goto label_3c81d8;
        case 0x3c81dcu: goto label_3c81dc;
        case 0x3c81e0u: goto label_3c81e0;
        case 0x3c81e4u: goto label_3c81e4;
        case 0x3c81e8u: goto label_3c81e8;
        case 0x3c81ecu: goto label_3c81ec;
        case 0x3c81f0u: goto label_3c81f0;
        case 0x3c81f4u: goto label_3c81f4;
        case 0x3c81f8u: goto label_3c81f8;
        case 0x3c81fcu: goto label_3c81fc;
        case 0x3c8200u: goto label_3c8200;
        case 0x3c8204u: goto label_3c8204;
        case 0x3c8208u: goto label_3c8208;
        case 0x3c820cu: goto label_3c820c;
        case 0x3c8210u: goto label_3c8210;
        case 0x3c8214u: goto label_3c8214;
        case 0x3c8218u: goto label_3c8218;
        case 0x3c821cu: goto label_3c821c;
        case 0x3c8220u: goto label_3c8220;
        case 0x3c8224u: goto label_3c8224;
        case 0x3c8228u: goto label_3c8228;
        case 0x3c822cu: goto label_3c822c;
        case 0x3c8230u: goto label_3c8230;
        case 0x3c8234u: goto label_3c8234;
        case 0x3c8238u: goto label_3c8238;
        case 0x3c823cu: goto label_3c823c;
        case 0x3c8240u: goto label_3c8240;
        case 0x3c8244u: goto label_3c8244;
        case 0x3c8248u: goto label_3c8248;
        case 0x3c824cu: goto label_3c824c;
        case 0x3c8250u: goto label_3c8250;
        case 0x3c8254u: goto label_3c8254;
        case 0x3c8258u: goto label_3c8258;
        case 0x3c825cu: goto label_3c825c;
        case 0x3c8260u: goto label_3c8260;
        case 0x3c8264u: goto label_3c8264;
        case 0x3c8268u: goto label_3c8268;
        case 0x3c826cu: goto label_3c826c;
        case 0x3c8270u: goto label_3c8270;
        case 0x3c8274u: goto label_3c8274;
        case 0x3c8278u: goto label_3c8278;
        case 0x3c827cu: goto label_3c827c;
        case 0x3c8280u: goto label_3c8280;
        case 0x3c8284u: goto label_3c8284;
        case 0x3c8288u: goto label_3c8288;
        case 0x3c828cu: goto label_3c828c;
        case 0x3c8290u: goto label_3c8290;
        case 0x3c8294u: goto label_3c8294;
        case 0x3c8298u: goto label_3c8298;
        case 0x3c829cu: goto label_3c829c;
        case 0x3c82a0u: goto label_3c82a0;
        case 0x3c82a4u: goto label_3c82a4;
        case 0x3c82a8u: goto label_3c82a8;
        case 0x3c82acu: goto label_3c82ac;
        case 0x3c82b0u: goto label_3c82b0;
        case 0x3c82b4u: goto label_3c82b4;
        case 0x3c82b8u: goto label_3c82b8;
        case 0x3c82bcu: goto label_3c82bc;
        case 0x3c82c0u: goto label_3c82c0;
        case 0x3c82c4u: goto label_3c82c4;
        case 0x3c82c8u: goto label_3c82c8;
        case 0x3c82ccu: goto label_3c82cc;
        case 0x3c82d0u: goto label_3c82d0;
        case 0x3c82d4u: goto label_3c82d4;
        case 0x3c82d8u: goto label_3c82d8;
        case 0x3c82dcu: goto label_3c82dc;
        case 0x3c82e0u: goto label_3c82e0;
        case 0x3c82e4u: goto label_3c82e4;
        case 0x3c82e8u: goto label_3c82e8;
        case 0x3c82ecu: goto label_3c82ec;
        case 0x3c82f0u: goto label_3c82f0;
        case 0x3c82f4u: goto label_3c82f4;
        case 0x3c82f8u: goto label_3c82f8;
        case 0x3c82fcu: goto label_3c82fc;
        case 0x3c8300u: goto label_3c8300;
        case 0x3c8304u: goto label_3c8304;
        case 0x3c8308u: goto label_3c8308;
        case 0x3c830cu: goto label_3c830c;
        case 0x3c8310u: goto label_3c8310;
        case 0x3c8314u: goto label_3c8314;
        case 0x3c8318u: goto label_3c8318;
        case 0x3c831cu: goto label_3c831c;
        case 0x3c8320u: goto label_3c8320;
        case 0x3c8324u: goto label_3c8324;
        case 0x3c8328u: goto label_3c8328;
        case 0x3c832cu: goto label_3c832c;
        case 0x3c8330u: goto label_3c8330;
        case 0x3c8334u: goto label_3c8334;
        case 0x3c8338u: goto label_3c8338;
        case 0x3c833cu: goto label_3c833c;
        case 0x3c8340u: goto label_3c8340;
        case 0x3c8344u: goto label_3c8344;
        case 0x3c8348u: goto label_3c8348;
        case 0x3c834cu: goto label_3c834c;
        case 0x3c8350u: goto label_3c8350;
        case 0x3c8354u: goto label_3c8354;
        case 0x3c8358u: goto label_3c8358;
        case 0x3c835cu: goto label_3c835c;
        case 0x3c8360u: goto label_3c8360;
        case 0x3c8364u: goto label_3c8364;
        case 0x3c8368u: goto label_3c8368;
        case 0x3c836cu: goto label_3c836c;
        case 0x3c8370u: goto label_3c8370;
        case 0x3c8374u: goto label_3c8374;
        case 0x3c8378u: goto label_3c8378;
        case 0x3c837cu: goto label_3c837c;
        case 0x3c8380u: goto label_3c8380;
        case 0x3c8384u: goto label_3c8384;
        case 0x3c8388u: goto label_3c8388;
        case 0x3c838cu: goto label_3c838c;
        case 0x3c8390u: goto label_3c8390;
        case 0x3c8394u: goto label_3c8394;
        case 0x3c8398u: goto label_3c8398;
        case 0x3c839cu: goto label_3c839c;
        case 0x3c83a0u: goto label_3c83a0;
        case 0x3c83a4u: goto label_3c83a4;
        case 0x3c83a8u: goto label_3c83a8;
        case 0x3c83acu: goto label_3c83ac;
        case 0x3c83b0u: goto label_3c83b0;
        case 0x3c83b4u: goto label_3c83b4;
        case 0x3c83b8u: goto label_3c83b8;
        case 0x3c83bcu: goto label_3c83bc;
        case 0x3c83c0u: goto label_3c83c0;
        case 0x3c83c4u: goto label_3c83c4;
        case 0x3c83c8u: goto label_3c83c8;
        case 0x3c83ccu: goto label_3c83cc;
        case 0x3c83d0u: goto label_3c83d0;
        case 0x3c83d4u: goto label_3c83d4;
        case 0x3c83d8u: goto label_3c83d8;
        case 0x3c83dcu: goto label_3c83dc;
        case 0x3c83e0u: goto label_3c83e0;
        case 0x3c83e4u: goto label_3c83e4;
        case 0x3c83e8u: goto label_3c83e8;
        case 0x3c83ecu: goto label_3c83ec;
        case 0x3c83f0u: goto label_3c83f0;
        case 0x3c83f4u: goto label_3c83f4;
        case 0x3c83f8u: goto label_3c83f8;
        case 0x3c83fcu: goto label_3c83fc;
        case 0x3c8400u: goto label_3c8400;
        case 0x3c8404u: goto label_3c8404;
        case 0x3c8408u: goto label_3c8408;
        case 0x3c840cu: goto label_3c840c;
        case 0x3c8410u: goto label_3c8410;
        case 0x3c8414u: goto label_3c8414;
        case 0x3c8418u: goto label_3c8418;
        case 0x3c841cu: goto label_3c841c;
        case 0x3c8420u: goto label_3c8420;
        case 0x3c8424u: goto label_3c8424;
        case 0x3c8428u: goto label_3c8428;
        case 0x3c842cu: goto label_3c842c;
        case 0x3c8430u: goto label_3c8430;
        case 0x3c8434u: goto label_3c8434;
        case 0x3c8438u: goto label_3c8438;
        case 0x3c843cu: goto label_3c843c;
        case 0x3c8440u: goto label_3c8440;
        case 0x3c8444u: goto label_3c8444;
        case 0x3c8448u: goto label_3c8448;
        case 0x3c844cu: goto label_3c844c;
        case 0x3c8450u: goto label_3c8450;
        case 0x3c8454u: goto label_3c8454;
        case 0x3c8458u: goto label_3c8458;
        case 0x3c845cu: goto label_3c845c;
        case 0x3c8460u: goto label_3c8460;
        case 0x3c8464u: goto label_3c8464;
        case 0x3c8468u: goto label_3c8468;
        case 0x3c846cu: goto label_3c846c;
        case 0x3c8470u: goto label_3c8470;
        case 0x3c8474u: goto label_3c8474;
        case 0x3c8478u: goto label_3c8478;
        case 0x3c847cu: goto label_3c847c;
        case 0x3c8480u: goto label_3c8480;
        case 0x3c8484u: goto label_3c8484;
        case 0x3c8488u: goto label_3c8488;
        case 0x3c848cu: goto label_3c848c;
        case 0x3c8490u: goto label_3c8490;
        case 0x3c8494u: goto label_3c8494;
        case 0x3c8498u: goto label_3c8498;
        case 0x3c849cu: goto label_3c849c;
        case 0x3c84a0u: goto label_3c84a0;
        case 0x3c84a4u: goto label_3c84a4;
        case 0x3c84a8u: goto label_3c84a8;
        case 0x3c84acu: goto label_3c84ac;
        case 0x3c84b0u: goto label_3c84b0;
        case 0x3c84b4u: goto label_3c84b4;
        case 0x3c84b8u: goto label_3c84b8;
        case 0x3c84bcu: goto label_3c84bc;
        case 0x3c84c0u: goto label_3c84c0;
        case 0x3c84c4u: goto label_3c84c4;
        case 0x3c84c8u: goto label_3c84c8;
        case 0x3c84ccu: goto label_3c84cc;
        case 0x3c84d0u: goto label_3c84d0;
        case 0x3c84d4u: goto label_3c84d4;
        case 0x3c84d8u: goto label_3c84d8;
        case 0x3c84dcu: goto label_3c84dc;
        case 0x3c84e0u: goto label_3c84e0;
        case 0x3c84e4u: goto label_3c84e4;
        case 0x3c84e8u: goto label_3c84e8;
        case 0x3c84ecu: goto label_3c84ec;
        case 0x3c84f0u: goto label_3c84f0;
        case 0x3c84f4u: goto label_3c84f4;
        case 0x3c84f8u: goto label_3c84f8;
        case 0x3c84fcu: goto label_3c84fc;
        case 0x3c8500u: goto label_3c8500;
        case 0x3c8504u: goto label_3c8504;
        case 0x3c8508u: goto label_3c8508;
        case 0x3c850cu: goto label_3c850c;
        case 0x3c8510u: goto label_3c8510;
        case 0x3c8514u: goto label_3c8514;
        case 0x3c8518u: goto label_3c8518;
        case 0x3c851cu: goto label_3c851c;
        case 0x3c8520u: goto label_3c8520;
        case 0x3c8524u: goto label_3c8524;
        case 0x3c8528u: goto label_3c8528;
        case 0x3c852cu: goto label_3c852c;
        case 0x3c8530u: goto label_3c8530;
        case 0x3c8534u: goto label_3c8534;
        case 0x3c8538u: goto label_3c8538;
        case 0x3c853cu: goto label_3c853c;
        case 0x3c8540u: goto label_3c8540;
        case 0x3c8544u: goto label_3c8544;
        case 0x3c8548u: goto label_3c8548;
        case 0x3c854cu: goto label_3c854c;
        case 0x3c8550u: goto label_3c8550;
        case 0x3c8554u: goto label_3c8554;
        case 0x3c8558u: goto label_3c8558;
        case 0x3c855cu: goto label_3c855c;
        case 0x3c8560u: goto label_3c8560;
        case 0x3c8564u: goto label_3c8564;
        case 0x3c8568u: goto label_3c8568;
        case 0x3c856cu: goto label_3c856c;
        case 0x3c8570u: goto label_3c8570;
        case 0x3c8574u: goto label_3c8574;
        case 0x3c8578u: goto label_3c8578;
        case 0x3c857cu: goto label_3c857c;
        case 0x3c8580u: goto label_3c8580;
        case 0x3c8584u: goto label_3c8584;
        case 0x3c8588u: goto label_3c8588;
        case 0x3c858cu: goto label_3c858c;
        case 0x3c8590u: goto label_3c8590;
        case 0x3c8594u: goto label_3c8594;
        case 0x3c8598u: goto label_3c8598;
        case 0x3c859cu: goto label_3c859c;
        case 0x3c85a0u: goto label_3c85a0;
        case 0x3c85a4u: goto label_3c85a4;
        case 0x3c85a8u: goto label_3c85a8;
        case 0x3c85acu: goto label_3c85ac;
        case 0x3c85b0u: goto label_3c85b0;
        case 0x3c85b4u: goto label_3c85b4;
        case 0x3c85b8u: goto label_3c85b8;
        case 0x3c85bcu: goto label_3c85bc;
        case 0x3c85c0u: goto label_3c85c0;
        case 0x3c85c4u: goto label_3c85c4;
        case 0x3c85c8u: goto label_3c85c8;
        case 0x3c85ccu: goto label_3c85cc;
        case 0x3c85d0u: goto label_3c85d0;
        case 0x3c85d4u: goto label_3c85d4;
        case 0x3c85d8u: goto label_3c85d8;
        case 0x3c85dcu: goto label_3c85dc;
        case 0x3c85e0u: goto label_3c85e0;
        case 0x3c85e4u: goto label_3c85e4;
        case 0x3c85e8u: goto label_3c85e8;
        case 0x3c85ecu: goto label_3c85ec;
        case 0x3c85f0u: goto label_3c85f0;
        case 0x3c85f4u: goto label_3c85f4;
        case 0x3c85f8u: goto label_3c85f8;
        case 0x3c85fcu: goto label_3c85fc;
        case 0x3c8600u: goto label_3c8600;
        case 0x3c8604u: goto label_3c8604;
        case 0x3c8608u: goto label_3c8608;
        case 0x3c860cu: goto label_3c860c;
        case 0x3c8610u: goto label_3c8610;
        case 0x3c8614u: goto label_3c8614;
        case 0x3c8618u: goto label_3c8618;
        case 0x3c861cu: goto label_3c861c;
        case 0x3c8620u: goto label_3c8620;
        case 0x3c8624u: goto label_3c8624;
        case 0x3c8628u: goto label_3c8628;
        case 0x3c862cu: goto label_3c862c;
        case 0x3c8630u: goto label_3c8630;
        case 0x3c8634u: goto label_3c8634;
        case 0x3c8638u: goto label_3c8638;
        case 0x3c863cu: goto label_3c863c;
        case 0x3c8640u: goto label_3c8640;
        case 0x3c8644u: goto label_3c8644;
        case 0x3c8648u: goto label_3c8648;
        case 0x3c864cu: goto label_3c864c;
        case 0x3c8650u: goto label_3c8650;
        case 0x3c8654u: goto label_3c8654;
        case 0x3c8658u: goto label_3c8658;
        case 0x3c865cu: goto label_3c865c;
        case 0x3c8660u: goto label_3c8660;
        case 0x3c8664u: goto label_3c8664;
        case 0x3c8668u: goto label_3c8668;
        case 0x3c866cu: goto label_3c866c;
        case 0x3c8670u: goto label_3c8670;
        case 0x3c8674u: goto label_3c8674;
        case 0x3c8678u: goto label_3c8678;
        case 0x3c867cu: goto label_3c867c;
        case 0x3c8680u: goto label_3c8680;
        case 0x3c8684u: goto label_3c8684;
        case 0x3c8688u: goto label_3c8688;
        case 0x3c868cu: goto label_3c868c;
        case 0x3c8690u: goto label_3c8690;
        case 0x3c8694u: goto label_3c8694;
        case 0x3c8698u: goto label_3c8698;
        case 0x3c869cu: goto label_3c869c;
        case 0x3c86a0u: goto label_3c86a0;
        case 0x3c86a4u: goto label_3c86a4;
        case 0x3c86a8u: goto label_3c86a8;
        case 0x3c86acu: goto label_3c86ac;
        case 0x3c86b0u: goto label_3c86b0;
        case 0x3c86b4u: goto label_3c86b4;
        case 0x3c86b8u: goto label_3c86b8;
        case 0x3c86bcu: goto label_3c86bc;
        case 0x3c86c0u: goto label_3c86c0;
        case 0x3c86c4u: goto label_3c86c4;
        case 0x3c86c8u: goto label_3c86c8;
        case 0x3c86ccu: goto label_3c86cc;
        case 0x3c86d0u: goto label_3c86d0;
        case 0x3c86d4u: goto label_3c86d4;
        case 0x3c86d8u: goto label_3c86d8;
        case 0x3c86dcu: goto label_3c86dc;
        case 0x3c86e0u: goto label_3c86e0;
        case 0x3c86e4u: goto label_3c86e4;
        case 0x3c86e8u: goto label_3c86e8;
        case 0x3c86ecu: goto label_3c86ec;
        case 0x3c86f0u: goto label_3c86f0;
        case 0x3c86f4u: goto label_3c86f4;
        case 0x3c86f8u: goto label_3c86f8;
        case 0x3c86fcu: goto label_3c86fc;
        case 0x3c8700u: goto label_3c8700;
        case 0x3c8704u: goto label_3c8704;
        case 0x3c8708u: goto label_3c8708;
        case 0x3c870cu: goto label_3c870c;
        case 0x3c8710u: goto label_3c8710;
        case 0x3c8714u: goto label_3c8714;
        case 0x3c8718u: goto label_3c8718;
        case 0x3c871cu: goto label_3c871c;
        case 0x3c8720u: goto label_3c8720;
        case 0x3c8724u: goto label_3c8724;
        case 0x3c8728u: goto label_3c8728;
        case 0x3c872cu: goto label_3c872c;
        case 0x3c8730u: goto label_3c8730;
        case 0x3c8734u: goto label_3c8734;
        case 0x3c8738u: goto label_3c8738;
        case 0x3c873cu: goto label_3c873c;
        case 0x3c8740u: goto label_3c8740;
        case 0x3c8744u: goto label_3c8744;
        case 0x3c8748u: goto label_3c8748;
        case 0x3c874cu: goto label_3c874c;
        case 0x3c8750u: goto label_3c8750;
        case 0x3c8754u: goto label_3c8754;
        case 0x3c8758u: goto label_3c8758;
        case 0x3c875cu: goto label_3c875c;
        case 0x3c8760u: goto label_3c8760;
        case 0x3c8764u: goto label_3c8764;
        case 0x3c8768u: goto label_3c8768;
        case 0x3c876cu: goto label_3c876c;
        case 0x3c8770u: goto label_3c8770;
        case 0x3c8774u: goto label_3c8774;
        case 0x3c8778u: goto label_3c8778;
        case 0x3c877cu: goto label_3c877c;
        case 0x3c8780u: goto label_3c8780;
        case 0x3c8784u: goto label_3c8784;
        case 0x3c8788u: goto label_3c8788;
        case 0x3c878cu: goto label_3c878c;
        case 0x3c8790u: goto label_3c8790;
        case 0x3c8794u: goto label_3c8794;
        case 0x3c8798u: goto label_3c8798;
        case 0x3c879cu: goto label_3c879c;
        case 0x3c87a0u: goto label_3c87a0;
        case 0x3c87a4u: goto label_3c87a4;
        case 0x3c87a8u: goto label_3c87a8;
        case 0x3c87acu: goto label_3c87ac;
        case 0x3c87b0u: goto label_3c87b0;
        case 0x3c87b4u: goto label_3c87b4;
        case 0x3c87b8u: goto label_3c87b8;
        case 0x3c87bcu: goto label_3c87bc;
        case 0x3c87c0u: goto label_3c87c0;
        case 0x3c87c4u: goto label_3c87c4;
        case 0x3c87c8u: goto label_3c87c8;
        case 0x3c87ccu: goto label_3c87cc;
        case 0x3c87d0u: goto label_3c87d0;
        case 0x3c87d4u: goto label_3c87d4;
        case 0x3c87d8u: goto label_3c87d8;
        case 0x3c87dcu: goto label_3c87dc;
        case 0x3c87e0u: goto label_3c87e0;
        case 0x3c87e4u: goto label_3c87e4;
        case 0x3c87e8u: goto label_3c87e8;
        case 0x3c87ecu: goto label_3c87ec;
        case 0x3c87f0u: goto label_3c87f0;
        case 0x3c87f4u: goto label_3c87f4;
        case 0x3c87f8u: goto label_3c87f8;
        case 0x3c87fcu: goto label_3c87fc;
        case 0x3c8800u: goto label_3c8800;
        case 0x3c8804u: goto label_3c8804;
        case 0x3c8808u: goto label_3c8808;
        case 0x3c880cu: goto label_3c880c;
        case 0x3c8810u: goto label_3c8810;
        case 0x3c8814u: goto label_3c8814;
        case 0x3c8818u: goto label_3c8818;
        case 0x3c881cu: goto label_3c881c;
        case 0x3c8820u: goto label_3c8820;
        case 0x3c8824u: goto label_3c8824;
        case 0x3c8828u: goto label_3c8828;
        case 0x3c882cu: goto label_3c882c;
        case 0x3c8830u: goto label_3c8830;
        case 0x3c8834u: goto label_3c8834;
        case 0x3c8838u: goto label_3c8838;
        case 0x3c883cu: goto label_3c883c;
        case 0x3c8840u: goto label_3c8840;
        case 0x3c8844u: goto label_3c8844;
        case 0x3c8848u: goto label_3c8848;
        case 0x3c884cu: goto label_3c884c;
        case 0x3c8850u: goto label_3c8850;
        case 0x3c8854u: goto label_3c8854;
        case 0x3c8858u: goto label_3c8858;
        case 0x3c885cu: goto label_3c885c;
        case 0x3c8860u: goto label_3c8860;
        case 0x3c8864u: goto label_3c8864;
        case 0x3c8868u: goto label_3c8868;
        case 0x3c886cu: goto label_3c886c;
        case 0x3c8870u: goto label_3c8870;
        case 0x3c8874u: goto label_3c8874;
        case 0x3c8878u: goto label_3c8878;
        case 0x3c887cu: goto label_3c887c;
        case 0x3c8880u: goto label_3c8880;
        case 0x3c8884u: goto label_3c8884;
        case 0x3c8888u: goto label_3c8888;
        case 0x3c888cu: goto label_3c888c;
        case 0x3c8890u: goto label_3c8890;
        case 0x3c8894u: goto label_3c8894;
        case 0x3c8898u: goto label_3c8898;
        case 0x3c889cu: goto label_3c889c;
        case 0x3c88a0u: goto label_3c88a0;
        case 0x3c88a4u: goto label_3c88a4;
        case 0x3c88a8u: goto label_3c88a8;
        case 0x3c88acu: goto label_3c88ac;
        case 0x3c88b0u: goto label_3c88b0;
        case 0x3c88b4u: goto label_3c88b4;
        case 0x3c88b8u: goto label_3c88b8;
        case 0x3c88bcu: goto label_3c88bc;
        case 0x3c88c0u: goto label_3c88c0;
        case 0x3c88c4u: goto label_3c88c4;
        case 0x3c88c8u: goto label_3c88c8;
        case 0x3c88ccu: goto label_3c88cc;
        case 0x3c88d0u: goto label_3c88d0;
        case 0x3c88d4u: goto label_3c88d4;
        case 0x3c88d8u: goto label_3c88d8;
        case 0x3c88dcu: goto label_3c88dc;
        case 0x3c88e0u: goto label_3c88e0;
        case 0x3c88e4u: goto label_3c88e4;
        case 0x3c88e8u: goto label_3c88e8;
        case 0x3c88ecu: goto label_3c88ec;
        case 0x3c88f0u: goto label_3c88f0;
        case 0x3c88f4u: goto label_3c88f4;
        case 0x3c88f8u: goto label_3c88f8;
        case 0x3c88fcu: goto label_3c88fc;
        case 0x3c8900u: goto label_3c8900;
        case 0x3c8904u: goto label_3c8904;
        case 0x3c8908u: goto label_3c8908;
        case 0x3c890cu: goto label_3c890c;
        case 0x3c8910u: goto label_3c8910;
        case 0x3c8914u: goto label_3c8914;
        case 0x3c8918u: goto label_3c8918;
        case 0x3c891cu: goto label_3c891c;
        case 0x3c8920u: goto label_3c8920;
        case 0x3c8924u: goto label_3c8924;
        case 0x3c8928u: goto label_3c8928;
        case 0x3c892cu: goto label_3c892c;
        case 0x3c8930u: goto label_3c8930;
        case 0x3c8934u: goto label_3c8934;
        case 0x3c8938u: goto label_3c8938;
        case 0x3c893cu: goto label_3c893c;
        case 0x3c8940u: goto label_3c8940;
        case 0x3c8944u: goto label_3c8944;
        case 0x3c8948u: goto label_3c8948;
        case 0x3c894cu: goto label_3c894c;
        case 0x3c8950u: goto label_3c8950;
        case 0x3c8954u: goto label_3c8954;
        case 0x3c8958u: goto label_3c8958;
        case 0x3c895cu: goto label_3c895c;
        case 0x3c8960u: goto label_3c8960;
        case 0x3c8964u: goto label_3c8964;
        case 0x3c8968u: goto label_3c8968;
        case 0x3c896cu: goto label_3c896c;
        case 0x3c8970u: goto label_3c8970;
        case 0x3c8974u: goto label_3c8974;
        case 0x3c8978u: goto label_3c8978;
        case 0x3c897cu: goto label_3c897c;
        case 0x3c8980u: goto label_3c8980;
        case 0x3c8984u: goto label_3c8984;
        case 0x3c8988u: goto label_3c8988;
        case 0x3c898cu: goto label_3c898c;
        case 0x3c8990u: goto label_3c8990;
        case 0x3c8994u: goto label_3c8994;
        case 0x3c8998u: goto label_3c8998;
        case 0x3c899cu: goto label_3c899c;
        case 0x3c89a0u: goto label_3c89a0;
        case 0x3c89a4u: goto label_3c89a4;
        case 0x3c89a8u: goto label_3c89a8;
        case 0x3c89acu: goto label_3c89ac;
        case 0x3c89b0u: goto label_3c89b0;
        case 0x3c89b4u: goto label_3c89b4;
        case 0x3c89b8u: goto label_3c89b8;
        case 0x3c89bcu: goto label_3c89bc;
        case 0x3c89c0u: goto label_3c89c0;
        case 0x3c89c4u: goto label_3c89c4;
        case 0x3c89c8u: goto label_3c89c8;
        case 0x3c89ccu: goto label_3c89cc;
        case 0x3c89d0u: goto label_3c89d0;
        case 0x3c89d4u: goto label_3c89d4;
        case 0x3c89d8u: goto label_3c89d8;
        case 0x3c89dcu: goto label_3c89dc;
        case 0x3c89e0u: goto label_3c89e0;
        case 0x3c89e4u: goto label_3c89e4;
        case 0x3c89e8u: goto label_3c89e8;
        case 0x3c89ecu: goto label_3c89ec;
        case 0x3c89f0u: goto label_3c89f0;
        case 0x3c89f4u: goto label_3c89f4;
        case 0x3c89f8u: goto label_3c89f8;
        case 0x3c89fcu: goto label_3c89fc;
        case 0x3c8a00u: goto label_3c8a00;
        case 0x3c8a04u: goto label_3c8a04;
        case 0x3c8a08u: goto label_3c8a08;
        case 0x3c8a0cu: goto label_3c8a0c;
        case 0x3c8a10u: goto label_3c8a10;
        case 0x3c8a14u: goto label_3c8a14;
        case 0x3c8a18u: goto label_3c8a18;
        case 0x3c8a1cu: goto label_3c8a1c;
        case 0x3c8a20u: goto label_3c8a20;
        case 0x3c8a24u: goto label_3c8a24;
        case 0x3c8a28u: goto label_3c8a28;
        case 0x3c8a2cu: goto label_3c8a2c;
        case 0x3c8a30u: goto label_3c8a30;
        case 0x3c8a34u: goto label_3c8a34;
        case 0x3c8a38u: goto label_3c8a38;
        case 0x3c8a3cu: goto label_3c8a3c;
        case 0x3c8a40u: goto label_3c8a40;
        case 0x3c8a44u: goto label_3c8a44;
        case 0x3c8a48u: goto label_3c8a48;
        case 0x3c8a4cu: goto label_3c8a4c;
        case 0x3c8a50u: goto label_3c8a50;
        case 0x3c8a54u: goto label_3c8a54;
        case 0x3c8a58u: goto label_3c8a58;
        case 0x3c8a5cu: goto label_3c8a5c;
        case 0x3c8a60u: goto label_3c8a60;
        case 0x3c8a64u: goto label_3c8a64;
        case 0x3c8a68u: goto label_3c8a68;
        case 0x3c8a6cu: goto label_3c8a6c;
        case 0x3c8a70u: goto label_3c8a70;
        case 0x3c8a74u: goto label_3c8a74;
        case 0x3c8a78u: goto label_3c8a78;
        case 0x3c8a7cu: goto label_3c8a7c;
        case 0x3c8a80u: goto label_3c8a80;
        case 0x3c8a84u: goto label_3c8a84;
        case 0x3c8a88u: goto label_3c8a88;
        case 0x3c8a8cu: goto label_3c8a8c;
        case 0x3c8a90u: goto label_3c8a90;
        case 0x3c8a94u: goto label_3c8a94;
        case 0x3c8a98u: goto label_3c8a98;
        case 0x3c8a9cu: goto label_3c8a9c;
        case 0x3c8aa0u: goto label_3c8aa0;
        case 0x3c8aa4u: goto label_3c8aa4;
        case 0x3c8aa8u: goto label_3c8aa8;
        case 0x3c8aacu: goto label_3c8aac;
        case 0x3c8ab0u: goto label_3c8ab0;
        case 0x3c8ab4u: goto label_3c8ab4;
        case 0x3c8ab8u: goto label_3c8ab8;
        case 0x3c8abcu: goto label_3c8abc;
        case 0x3c8ac0u: goto label_3c8ac0;
        case 0x3c8ac4u: goto label_3c8ac4;
        case 0x3c8ac8u: goto label_3c8ac8;
        case 0x3c8accu: goto label_3c8acc;
        case 0x3c8ad0u: goto label_3c8ad0;
        case 0x3c8ad4u: goto label_3c8ad4;
        case 0x3c8ad8u: goto label_3c8ad8;
        case 0x3c8adcu: goto label_3c8adc;
        case 0x3c8ae0u: goto label_3c8ae0;
        case 0x3c8ae4u: goto label_3c8ae4;
        case 0x3c8ae8u: goto label_3c8ae8;
        case 0x3c8aecu: goto label_3c8aec;
        case 0x3c8af0u: goto label_3c8af0;
        case 0x3c8af4u: goto label_3c8af4;
        case 0x3c8af8u: goto label_3c8af8;
        case 0x3c8afcu: goto label_3c8afc;
        case 0x3c8b00u: goto label_3c8b00;
        case 0x3c8b04u: goto label_3c8b04;
        case 0x3c8b08u: goto label_3c8b08;
        case 0x3c8b0cu: goto label_3c8b0c;
        case 0x3c8b10u: goto label_3c8b10;
        case 0x3c8b14u: goto label_3c8b14;
        case 0x3c8b18u: goto label_3c8b18;
        case 0x3c8b1cu: goto label_3c8b1c;
        case 0x3c8b20u: goto label_3c8b20;
        case 0x3c8b24u: goto label_3c8b24;
        case 0x3c8b28u: goto label_3c8b28;
        case 0x3c8b2cu: goto label_3c8b2c;
        case 0x3c8b30u: goto label_3c8b30;
        case 0x3c8b34u: goto label_3c8b34;
        case 0x3c8b38u: goto label_3c8b38;
        case 0x3c8b3cu: goto label_3c8b3c;
        case 0x3c8b40u: goto label_3c8b40;
        case 0x3c8b44u: goto label_3c8b44;
        case 0x3c8b48u: goto label_3c8b48;
        case 0x3c8b4cu: goto label_3c8b4c;
        case 0x3c8b50u: goto label_3c8b50;
        case 0x3c8b54u: goto label_3c8b54;
        case 0x3c8b58u: goto label_3c8b58;
        case 0x3c8b5cu: goto label_3c8b5c;
        case 0x3c8b60u: goto label_3c8b60;
        case 0x3c8b64u: goto label_3c8b64;
        case 0x3c8b68u: goto label_3c8b68;
        case 0x3c8b6cu: goto label_3c8b6c;
        case 0x3c8b70u: goto label_3c8b70;
        case 0x3c8b74u: goto label_3c8b74;
        case 0x3c8b78u: goto label_3c8b78;
        case 0x3c8b7cu: goto label_3c8b7c;
        case 0x3c8b80u: goto label_3c8b80;
        case 0x3c8b84u: goto label_3c8b84;
        case 0x3c8b88u: goto label_3c8b88;
        case 0x3c8b8cu: goto label_3c8b8c;
        case 0x3c8b90u: goto label_3c8b90;
        case 0x3c8b94u: goto label_3c8b94;
        case 0x3c8b98u: goto label_3c8b98;
        case 0x3c8b9cu: goto label_3c8b9c;
        case 0x3c8ba0u: goto label_3c8ba0;
        case 0x3c8ba4u: goto label_3c8ba4;
        case 0x3c8ba8u: goto label_3c8ba8;
        case 0x3c8bacu: goto label_3c8bac;
        case 0x3c8bb0u: goto label_3c8bb0;
        case 0x3c8bb4u: goto label_3c8bb4;
        case 0x3c8bb8u: goto label_3c8bb8;
        case 0x3c8bbcu: goto label_3c8bbc;
        case 0x3c8bc0u: goto label_3c8bc0;
        case 0x3c8bc4u: goto label_3c8bc4;
        case 0x3c8bc8u: goto label_3c8bc8;
        case 0x3c8bccu: goto label_3c8bcc;
        case 0x3c8bd0u: goto label_3c8bd0;
        case 0x3c8bd4u: goto label_3c8bd4;
        case 0x3c8bd8u: goto label_3c8bd8;
        case 0x3c8bdcu: goto label_3c8bdc;
        case 0x3c8be0u: goto label_3c8be0;
        case 0x3c8be4u: goto label_3c8be4;
        case 0x3c8be8u: goto label_3c8be8;
        case 0x3c8becu: goto label_3c8bec;
        case 0x3c8bf0u: goto label_3c8bf0;
        case 0x3c8bf4u: goto label_3c8bf4;
        case 0x3c8bf8u: goto label_3c8bf8;
        case 0x3c8bfcu: goto label_3c8bfc;
        case 0x3c8c00u: goto label_3c8c00;
        case 0x3c8c04u: goto label_3c8c04;
        case 0x3c8c08u: goto label_3c8c08;
        case 0x3c8c0cu: goto label_3c8c0c;
        case 0x3c8c10u: goto label_3c8c10;
        case 0x3c8c14u: goto label_3c8c14;
        case 0x3c8c18u: goto label_3c8c18;
        case 0x3c8c1cu: goto label_3c8c1c;
        case 0x3c8c20u: goto label_3c8c20;
        case 0x3c8c24u: goto label_3c8c24;
        case 0x3c8c28u: goto label_3c8c28;
        case 0x3c8c2cu: goto label_3c8c2c;
        case 0x3c8c30u: goto label_3c8c30;
        case 0x3c8c34u: goto label_3c8c34;
        case 0x3c8c38u: goto label_3c8c38;
        case 0x3c8c3cu: goto label_3c8c3c;
        case 0x3c8c40u: goto label_3c8c40;
        case 0x3c8c44u: goto label_3c8c44;
        case 0x3c8c48u: goto label_3c8c48;
        case 0x3c8c4cu: goto label_3c8c4c;
        case 0x3c8c50u: goto label_3c8c50;
        case 0x3c8c54u: goto label_3c8c54;
        case 0x3c8c58u: goto label_3c8c58;
        case 0x3c8c5cu: goto label_3c8c5c;
        case 0x3c8c60u: goto label_3c8c60;
        case 0x3c8c64u: goto label_3c8c64;
        case 0x3c8c68u: goto label_3c8c68;
        case 0x3c8c6cu: goto label_3c8c6c;
        case 0x3c8c70u: goto label_3c8c70;
        case 0x3c8c74u: goto label_3c8c74;
        case 0x3c8c78u: goto label_3c8c78;
        case 0x3c8c7cu: goto label_3c8c7c;
        case 0x3c8c80u: goto label_3c8c80;
        case 0x3c8c84u: goto label_3c8c84;
        case 0x3c8c88u: goto label_3c8c88;
        case 0x3c8c8cu: goto label_3c8c8c;
        case 0x3c8c90u: goto label_3c8c90;
        case 0x3c8c94u: goto label_3c8c94;
        case 0x3c8c98u: goto label_3c8c98;
        case 0x3c8c9cu: goto label_3c8c9c;
        case 0x3c8ca0u: goto label_3c8ca0;
        case 0x3c8ca4u: goto label_3c8ca4;
        case 0x3c8ca8u: goto label_3c8ca8;
        case 0x3c8cacu: goto label_3c8cac;
        case 0x3c8cb0u: goto label_3c8cb0;
        case 0x3c8cb4u: goto label_3c8cb4;
        case 0x3c8cb8u: goto label_3c8cb8;
        case 0x3c8cbcu: goto label_3c8cbc;
        case 0x3c8cc0u: goto label_3c8cc0;
        case 0x3c8cc4u: goto label_3c8cc4;
        case 0x3c8cc8u: goto label_3c8cc8;
        case 0x3c8cccu: goto label_3c8ccc;
        case 0x3c8cd0u: goto label_3c8cd0;
        default: break;
    }

    ctx->pc = 0x3c7e60u;

label_3c7e60:
    // 0x3c7e60: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3c7e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3c7e64:
    // 0x3c7e64: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3c7e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3c7e68:
    // 0x3c7e68: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3c7e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3c7e6c:
    // 0x3c7e6c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3c7e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3c7e70:
    // 0x3c7e70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3c7e70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c7e74:
    // 0x3c7e74: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3c7e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3c7e78:
    // 0x3c7e78: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3c7e78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c7e7c:
    // 0x3c7e7c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c7e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3c7e80:
    // 0x3c7e80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c7e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3c7e84:
    // 0x3c7e84: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
label_3c7e88:
    if (ctx->pc == 0x3C7E88u) {
        ctx->pc = 0x3C7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7E84u;
        // 0x3c7e88: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7E8Cu;
        goto label_3c7e8c;
    }
    ctx->pc = 0x3C7E84u;
    {
        const bool branch_taken_0x3c7e84 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7E84u;
        // 0x3c7e88: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7e84) {
            ctx->pc = 0x3C7EA0u;
            goto label_3c7ea0;
        }
    }
    ctx->pc = 0x3C7E8Cu;
label_3c7e8c:
    // 0x3c7e8c: 0xc0c0830  jal         func_3020C0
label_3c7e90:
    if (ctx->pc == 0x3C7E90u) {
        ctx->pc = 0x3C7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7E8Cu;
        // 0x3c7e90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7E94u;
        goto label_3c7e94;
    }
    ctx->pc = 0x3C7E8Cu;
    SET_GPR_U32(ctx, 31, 0x3C7E94u);
    ctx->pc = 0x3C7E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7E8Cu;
    // 0x3c7e90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C7E8Cu, 0x3C7E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7E94u;
label_3c7e94:
    // 0x3c7e94: 0x10000386  b           . + 4 + (0x386 << 2)
label_3c7e98:
    if (ctx->pc == 0x3C7E98u) {
        ctx->pc = 0x3C7E9Cu;
        goto label_3c7e9c;
    }
    ctx->pc = 0x3C7E94u;
    {
        const bool branch_taken_0x3c7e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7e94) {
            ctx->pc = 0x3C8CB0u;
            goto label_3c8cb0;
        }
    }
    ctx->pc = 0x3C7E9Cu;
label_3c7e9c:
    // 0x3c7e9c: 0x0  nop
    ctx->pc = 0x3c7e9cu;
    // NOP
label_3c7ea0:
    // 0x3c7ea0: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_3c7ea4:
    if (ctx->pc == 0x3C7EA4u) {
        ctx->pc = 0x3C7EA8u;
        goto label_3c7ea8;
    }
    ctx->pc = 0x3C7EA0u;
    {
        const bool branch_taken_0x3c7ea0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7ea0) {
            ctx->pc = 0x3C7EC8u;
            goto label_3c7ec8;
        }
    }
    ctx->pc = 0x3C7EA8u;
label_3c7ea8:
    // 0x3c7ea8: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x3c7ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_3c7eac:
    // 0x3c7eac: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3c7eacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3c7eb0:
    // 0x3c7eb0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_3c7eb4:
    if (ctx->pc == 0x3C7EB4u) {
        ctx->pc = 0x3C7EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7EB0u;
        // 0x3c7eb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7EB8u;
        goto label_3c7eb8;
    }
    ctx->pc = 0x3C7EB0u;
    {
        const bool branch_taken_0x3c7eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7EB0u;
        // 0x3c7eb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7eb0) {
            ctx->pc = 0x3C7EC8u;
            goto label_3c7ec8;
        }
    }
    ctx->pc = 0x3C7EB8u;
label_3c7eb8:
    // 0x3c7eb8: 0xc0c0830  jal         func_3020C0
label_3c7ebc:
    if (ctx->pc == 0x3C7EBCu) {
        ctx->pc = 0x3C7EC0u;
        goto label_3c7ec0;
    }
    ctx->pc = 0x3C7EB8u;
    SET_GPR_U32(ctx, 31, 0x3C7EC0u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C7EB8u, 0x3C7EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7EC0u;
label_3c7ec0:
    // 0x3c7ec0: 0x1000037b  b           . + 4 + (0x37B << 2)
label_3c7ec4:
    if (ctx->pc == 0x3C7EC4u) {
        ctx->pc = 0x3C7EC8u;
        goto label_3c7ec8;
    }
    ctx->pc = 0x3C7EC0u;
    {
        const bool branch_taken_0x3c7ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7ec0) {
            ctx->pc = 0x3C8CB0u;
            goto label_3c8cb0;
        }
    }
    ctx->pc = 0x3C7EC8u;
label_3c7ec8:
    // 0x3c7ec8: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x3c7ec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
label_3c7ecc:
    // 0x3c7ecc: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x3c7eccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_3c7ed0:
    // 0x3c7ed0: 0x10200377  beqz        $at, . + 4 + (0x377 << 2)
label_3c7ed4:
    if (ctx->pc == 0x3C7ED4u) {
        ctx->pc = 0x3C7ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7ED0u;
        // 0x3c7ed4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7ED8u;
        goto label_3c7ed8;
    }
    ctx->pc = 0x3C7ED0u;
    {
        const bool branch_taken_0x3c7ed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7ED0u;
        // 0x3c7ed4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7ed0) {
            ctx->pc = 0x3C8CB0u;
            goto label_3c8cb0;
        }
    }
    ctx->pc = 0x3C7ED8u;
label_3c7ed8:
    // 0x3c7ed8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c7ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3c7edc:
    // 0x3c7edc: 0x24842e90  addiu       $a0, $a0, 0x2E90
    ctx->pc = 0x3c7edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11920));
label_3c7ee0:
    // 0x3c7ee0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3c7ee4:
    // 0x3c7ee4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3c7ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c7ee8:
    // 0x3c7ee8: 0x600008  jr          $v1
label_3c7eec:
    if (ctx->pc == 0x3C7EECu) {
        ctx->pc = 0x3C7EF0u;
        goto label_3c7ef0;
    }
    ctx->pc = 0x3C7EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C7EF0u: goto label_3c7ef0;
            case 0x3C7F68u: goto label_3c7f68;
            case 0x3C7F88u: goto label_3c7f88;
            case 0x3C8138u: goto label_3c8138;
            case 0x3C81A0u: goto label_3c81a0;
            case 0x3C84A0u: goto label_3c84a0;
            case 0x3C84C0u: goto label_3c84c0;
            case 0x3C85E8u: goto label_3c85e8;
            case 0x3C8640u: goto label_3c8640;
            case 0x3C87E0u: goto label_3c87e0;
            case 0x3C8AD0u: goto label_3c8ad0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7EE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3C7EF0u;
label_3c7ef0:
    // 0x3c7ef0: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
label_3c7ef4:
    if (ctx->pc == 0x3C7EF4u) {
        ctx->pc = 0x3C7EF8u;
        goto label_3c7ef8;
    }
    ctx->pc = 0x3C7EF0u;
    {
        const bool branch_taken_0x3c7ef0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7ef0) {
            ctx->pc = 0x3C7F48u;
            goto label_3c7f48;
        }
    }
    ctx->pc = 0x3C7EF8u;
label_3c7ef8:
    // 0x3c7ef8: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x3c7ef8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
label_3c7efc:
    // 0x3c7efc: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x3c7efcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
label_3c7f00:
    // 0x3c7f00: 0xc0aa0b8  jal         func_2A82E0
label_3c7f04:
    if (ctx->pc == 0x3C7F04u) {
        ctx->pc = 0x3C7F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7F00u;
        // 0x3c7f04: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7F08u;
        goto label_3c7f08;
    }
    ctx->pc = 0x3C7F00u;
    SET_GPR_U32(ctx, 31, 0x3C7F08u);
    ctx->pc = 0x3C7F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7F00u;
    // 0x3c7f04: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82E0u, 0x3C7F00u, 0x3C7F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7F08u;
label_3c7f08:
    // 0x3c7f08: 0xae8205a0  sw          $v0, 0x5A0($s4)
    ctx->pc = 0x3c7f08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1440), GPR_U32(ctx, 2));
label_3c7f0c:
    // 0x3c7f0c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c7f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_3c7f10:
    // 0x3c7f10: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3c7f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
label_3c7f14:
    // 0x3c7f14: 0x3c022200  lui         $v0, 0x2200
    ctx->pc = 0x3c7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8704 << 16));
label_3c7f18:
    // 0x3c7f18: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c7f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_3c7f1c:
    // 0x3c7f1c: 0x34455102  ori         $a1, $v0, 0x5102
    ctx->pc = 0x3c7f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20738);
label_3c7f20:
    // 0x3c7f20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c7f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c7f24:
    // 0x3c7f24: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c7f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_3c7f28:
    // 0x3c7f28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c7f28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c7f2c:
    // 0x3c7f2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c7f2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c7f30:
    // 0x3c7f30: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c7f30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c7f34:
    // 0x3c7f34: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c7f34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c7f38:
    // 0x3c7f38: 0xc05e9e8  jal         func_17A7A0
label_3c7f3c:
    if (ctx->pc == 0x3C7F3Cu) {
        ctx->pc = 0x3C7F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7F38u;
        // 0x3c7f3c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7F40u;
        goto label_3c7f40;
    }
    ctx->pc = 0x3C7F38u;
    SET_GPR_U32(ctx, 31, 0x3C7F40u);
    ctx->pc = 0x3C7F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7F38u;
    // 0x3c7f3c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C7F38u, 0x3C7F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7F40u;
label_3c7f40:
    // 0x3c7f40: 0x10000005  b           . + 4 + (0x5 << 2)
label_3c7f44:
    if (ctx->pc == 0x3C7F44u) {
        ctx->pc = 0x3C7F48u;
        goto label_3c7f48;
    }
    ctx->pc = 0x3C7F40u;
    {
        const bool branch_taken_0x3c7f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7f40) {
            ctx->pc = 0x3C7F58u;
            goto label_3c7f58;
        }
    }
    ctx->pc = 0x3C7F48u;
label_3c7f48:
    // 0x3c7f48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c7f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c7f4c:
    // 0x3c7f4c: 0xc0c0830  jal         func_3020C0
label_3c7f50:
    if (ctx->pc == 0x3C7F50u) {
        ctx->pc = 0x3C7F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7F4Cu;
        // 0x3c7f50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7F54u;
        goto label_3c7f54;
    }
    ctx->pc = 0x3C7F4Cu;
    SET_GPR_U32(ctx, 31, 0x3C7F54u);
    ctx->pc = 0x3C7F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7F4Cu;
    // 0x3c7f50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C7F4Cu, 0x3C7F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7F54u;
label_3c7f54:
    // 0x3c7f54: 0x0  nop
    ctx->pc = 0x3c7f54u;
    // NOP
label_3c7f58:
    // 0x3c7f58: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x3c7f58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
label_3c7f5c:
    // 0x3c7f5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c7f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c7f60:
    // 0x3c7f60: 0x10000353  b           . + 4 + (0x353 << 2)
label_3c7f64:
    if (ctx->pc == 0x3C7F64u) {
        ctx->pc = 0x3C7F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7F60u;
        // 0x3c7f64: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7F68u;
        goto label_3c7f68;
    }
    ctx->pc = 0x3C7F60u;
    {
        const bool branch_taken_0x3c7f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7F60u;
        // 0x3c7f64: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7f60) {
            ctx->pc = 0x3C8CB0u;
            goto label_3c8cb0;
        }
    }
    ctx->pc = 0x3C7F68u;
label_3c7f68:
    // 0x3c7f68: 0x86820526  lh          $v0, 0x526($s4)
    ctx->pc = 0x3c7f68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1318)));
label_3c7f6c:
    // 0x3c7f6c: 0xa6820512  sh          $v0, 0x512($s4)
    ctx->pc = 0x3c7f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 2));
label_3c7f70:
    // 0x3c7f70: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x3c7f70u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
label_3c7f74:
    // 0x3c7f74: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x3c7f74u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
label_3c7f78:
    // 0x3c7f78: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x3c7f78u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
label_3c7f7c:
    // 0x3c7f7c: 0x92820521  lbu         $v0, 0x521($s4)
    ctx->pc = 0x3c7f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
label_3c7f80:
    // 0x3c7f80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c7f84:
    // 0x3c7f84: 0xa2820521  sb          $v0, 0x521($s4)
    ctx->pc = 0x3c7f84u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3c7f88:
    // 0x3c7f88: 0x86820510  lh          $v0, 0x510($s4)
    ctx->pc = 0x3c7f88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3c7f8c:
    // 0x3c7f8c: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x3c7f8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
label_3c7f90:
    // 0x3c7f90: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_3c7f94:
    if (ctx->pc == 0x3C7F94u) {
        ctx->pc = 0x3C7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7F90u;
        // 0x3c7f94: 0x3c033c88  lui         $v1, 0x3C88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7F98u;
        goto label_3c7f98;
    }
    ctx->pc = 0x3C7F90u;
    {
        const bool branch_taken_0x3c7f90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7F90u;
        // 0x3c7f94: 0x3c033c88  lui         $v1, 0x3C88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7f90) {
            ctx->pc = 0x3C7FB8u;
            goto label_3c7fb8;
        }
    }
    ctx->pc = 0x3C7F98u;
label_3c7f98:
    // 0x3c7f98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3c7f9c:
    // 0x3c7f9c: 0x34638885  ori         $v1, $v1, 0x8885
    ctx->pc = 0x3c7f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34949);
label_3c7fa0:
    // 0x3c7fa0: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x3c7fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_3c7fa4:
    // 0x3c7fa4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3c7fa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c7fa8:
    // 0x3c7fa8: 0x26850090  addiu       $a1, $s4, 0x90
    ctx->pc = 0x3c7fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_3c7fac:
    // 0x3c7fac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c7facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c7fb0:
    // 0x3c7fb0: 0xc07681c  jal         func_1DA070
label_3c7fb4:
    if (ctx->pc == 0x3C7FB4u) {
        ctx->pc = 0x3C7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7FB0u;
        // 0x3c7fb4: 0x268600a0  addiu       $a2, $s4, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7FB8u;
        goto label_3c7fb8;
    }
    ctx->pc = 0x3C7FB0u;
    SET_GPR_U32(ctx, 31, 0x3C7FB8u);
    ctx->pc = 0x3C7FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7FB0u;
    // 0x3c7fb4: 0x268600a0  addiu       $a2, $s4, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3C7FB0u, 0x3C7FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7FB8u;
label_3c7fb8:
    // 0x3c7fb8: 0x8e8605a0  lw          $a2, 0x5A0($s4)
    ctx->pc = 0x3c7fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1440)));
label_3c7fbc:
    // 0x3c7fbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c7fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c7fc0:
    // 0x3c7fc0: 0xc0c08b4  jal         func_3022D0
label_3c7fc4:
    if (ctx->pc == 0x3C7FC4u) {
        ctx->pc = 0x3C7FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7FC0u;
        // 0x3c7fc4: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7FC8u;
        goto label_3c7fc8;
    }
    ctx->pc = 0x3C7FC0u;
    SET_GPR_U32(ctx, 31, 0x3C7FC8u);
    ctx->pc = 0x3C7FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7FC0u;
    // 0x3c7fc4: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3C7FC0u, 0x3C7FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7FC8u;
label_3c7fc8:
    // 0x3c7fc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3c7fcc:
    if (ctx->pc == 0x3C7FCCu) {
        ctx->pc = 0x3C7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7FC8u;
        // 0x3c7fcc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7FD0u;
        goto label_3c7fd0;
    }
    ctx->pc = 0x3C7FC8u;
    {
        const bool branch_taken_0x3c7fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7FC8u;
        // 0x3c7fcc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7fc8) {
            ctx->pc = 0x3C7FD8u;
            goto label_3c7fd8;
        }
    }
    ctx->pc = 0x3C7FD0u;
label_3c7fd0:
    // 0x3c7fd0: 0xc0c0830  jal         func_3020C0
label_3c7fd4:
    if (ctx->pc == 0x3C7FD4u) {
        ctx->pc = 0x3C7FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7FD0u;
        // 0x3c7fd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7FD8u;
        goto label_3c7fd8;
    }
    ctx->pc = 0x3C7FD0u;
    SET_GPR_U32(ctx, 31, 0x3C7FD8u);
    ctx->pc = 0x3C7FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7FD0u;
    // 0x3c7fd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C7FD0u, 0x3C7FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7FD8u;
label_3c7fd8:
    // 0x3c7fd8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c7fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c7fdc:
    // 0x3c7fdc: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3c7fdcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
label_3c7fe0:
    // 0x3c7fe0: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x3c7fe0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3c7fe4:
    // 0x3c7fe4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c7fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c7fe8:
    // 0x3c7fe8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3c7fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3c7fec:
    // 0x3c7fec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c7fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c7ff0:
    // 0x3c7ff0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c7ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c7ff4:
    // 0x3c7ff4: 0x7fa900a0  sq          $t1, 0xA0($sp)
    ctx->pc = 0x3c7ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 9));
label_3c7ff8:
    // 0x3c7ff8: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3c7ff8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 1), 23600)));
label_3c7ffc:
    // 0x3c7ffc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c7ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c8000:
    // 0x3c8000: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x3c8000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
label_3c8004:
    // 0x3c8004: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3c8004u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23616)));
label_3c8008:
    // 0x3c8008: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c8008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c800c:
    // 0x3c800c: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3c800cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_3c8010:
    // 0x3c8010: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3c8010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23632)));
label_3c8014:
    // 0x3c8014: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3c8014u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_3c8018:
    // 0x3c8018: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x3c8018u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_3c801c:
    // 0x3c801c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3c801cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_3c8020:
    // 0x3c8020: 0x928605a8  lbu         $a2, 0x5A8($s4)
    ctx->pc = 0x3c8020u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1448)));
label_3c8024:
    // 0x3c8024: 0xc68c05a4  lwc1        $f12, 0x5A4($s4)
    ctx->pc = 0x3c8024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c8028:
    // 0x3c8028: 0xc0c0900  jal         func_302400
label_3c802c:
    if (ctx->pc == 0x3C802Cu) {
        ctx->pc = 0x3C802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8028u;
        // 0x3c802c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8030u;
        goto label_3c8030;
    }
    ctx->pc = 0x3C8028u;
    SET_GPR_U32(ctx, 31, 0x3C8030u);
    ctx->pc = 0x3C802Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8028u;
    // 0x3c802c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3C8028u, 0x3C8030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8030u;
label_3c8030:
    // 0x3c8030: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3c8030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3c8034:
    // 0x3c8034: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c8034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c8038:
    // 0x3c8038: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x3c8038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_3c803c:
    // 0x3c803c: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x3c803cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_3c8040:
    // 0x3c8040: 0x26860080  addiu       $a2, $s4, 0x80
    ctx->pc = 0x3c8040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_3c8044:
    // 0x3c8044: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x3c8044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3c8048:
    // 0x3c8048: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x3c8048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3c804c:
    // 0x3c804c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3c804cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8050:
    // 0x3c8050: 0xc0c0980  jal         func_302600
label_3c8054:
    if (ctx->pc == 0x3C8054u) {
        ctx->pc = 0x3C8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8050u;
        // 0x3c8054: 0x27aa00ec  addiu       $t2, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8058u;
        goto label_3c8058;
    }
    ctx->pc = 0x3C8050u;
    SET_GPR_U32(ctx, 31, 0x3C8058u);
    ctx->pc = 0x3C8054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8050u;
    // 0x3c8054: 0x27aa00ec  addiu       $t2, $sp, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3C8050u, 0x3C8058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8058u;
label_3c8058:
    // 0x3c8058: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3c805c:
    if (ctx->pc == 0x3C805Cu) {
        ctx->pc = 0x3C8060u;
        goto label_3c8060;
    }
    ctx->pc = 0x3C8058u;
    {
        const bool branch_taken_0x3c8058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8058) {
            ctx->pc = 0x3C8088u;
            goto label_3c8088;
        }
    }
    ctx->pc = 0x3C8060u;
label_3c8060:
    // 0x3c8060: 0x8e8605a0  lw          $a2, 0x5A0($s4)
    ctx->pc = 0x3c8060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1440)));
label_3c8064:
    // 0x3c8064: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c8064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c8068:
    // 0x3c8068: 0xc0c08b4  jal         func_3022D0
label_3c806c:
    if (ctx->pc == 0x3C806Cu) {
        ctx->pc = 0x3C806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8068u;
        // 0x3c806c: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8070u;
        goto label_3c8070;
    }
    ctx->pc = 0x3C8068u;
    SET_GPR_U32(ctx, 31, 0x3C8070u);
    ctx->pc = 0x3C806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8068u;
    // 0x3c806c: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3C8068u, 0x3C8070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8070u;
label_3c8070:
    // 0x3c8070: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x3c8070u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c8074:
    // 0x3c8074: 0x7e830590  sq          $v1, 0x590($s4)
    ctx->pc = 0x3c8074u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 1424), GPR_VEC(ctx, 3));
label_3c8078:
    // 0x3c8078: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x3c8078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
label_3c807c:
    // 0x3c807c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c807cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c8080:
    // 0x3c8080: 0x1000030b  b           . + 4 + (0x30B << 2)
label_3c8084:
    if (ctx->pc == 0x3C8084u) {
        ctx->pc = 0x3C8084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8080u;
        // 0x3c8084: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8088u;
        goto label_3c8088;
    }
    ctx->pc = 0x3C8080u;
    {
        const bool branch_taken_0x3c8080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8080u;
        // 0x3c8084: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8080) {
            ctx->pc = 0x3C8CB0u;
            goto label_3c8cb0;
        }
    }
    ctx->pc = 0x3C8088u;
label_3c8088:
    // 0x3c8088: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x3c8088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
label_3c808c:
    // 0x3c808c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3c8090:
    if (ctx->pc == 0x3C8090u) {
        ctx->pc = 0x3C8090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C808Cu;
        // 0x3c8090: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8094u;
        goto label_3c8094;
    }
    ctx->pc = 0x3C808Cu;
    {
        const bool branch_taken_0x3c808c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C808Cu;
        // 0x3c8090: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c808c) {
            ctx->pc = 0x3C80A0u;
            goto label_3c80a0;
        }
    }
    ctx->pc = 0x3C8094u;
label_3c8094:
    // 0x3c8094: 0x10000022  b           . + 4 + (0x22 << 2)
label_3c8098:
    if (ctx->pc == 0x3C8098u) {
        ctx->pc = 0x3C809Cu;
        goto label_3c809c;
    }
    ctx->pc = 0x3C8094u;
    {
        const bool branch_taken_0x3c8094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8094) {
            ctx->pc = 0x3C8120u;
            goto label_3c8120;
        }
    }
    ctx->pc = 0x3C809Cu;
label_3c809c:
    // 0x3c809c: 0x0  nop
    ctx->pc = 0x3c809cu;
    // NOP
label_3c80a0:
    // 0x3c80a0: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x3c80a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3c80a4:
    // 0x3c80a4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3c80a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_3c80a8:
    // 0x3c80a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c80a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3c80ac:
    // 0x3c80ac: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c80acu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3c80b0:
    // 0x3c80b0: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x3c80b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
label_3c80b4:
    // 0x3c80b4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_3c80b8:
    if (ctx->pc == 0x3C80B8u) {
        ctx->pc = 0x3C80BCu;
        goto label_3c80bc;
    }
    ctx->pc = 0x3C80B4u;
    {
        const bool branch_taken_0x3c80b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c80b4) {
            ctx->pc = 0x3C80F0u;
            goto label_3c80f0;
        }
    }
    ctx->pc = 0x3C80BCu;
label_3c80bc:
    // 0x3c80bc: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x3c80bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3c80c0:
    // 0x3c80c0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3c80c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_3c80c4:
    // 0x3c80c4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_3c80c8:
    if (ctx->pc == 0x3C80C8u) {
        ctx->pc = 0x3C80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C80C4u;
        // 0x3c80c8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C80CCu;
        goto label_3c80cc;
    }
    ctx->pc = 0x3C80C4u;
    {
        const bool branch_taken_0x3c80c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C80C4u;
        // 0x3c80c8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c80c4) {
            ctx->pc = 0x3C8118u;
            goto label_3c8118;
        }
    }
    ctx->pc = 0x3C80CCu;
label_3c80cc:
    // 0x3c80cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c80ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c80d0:
    // 0x3c80d0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3c80d0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3c80d4:
    // 0x3c80d4: 0x0  nop
    ctx->pc = 0x3c80d4u;
    // NOP
label_3c80d8:
    // 0x3c80d8: 0x0  nop
    ctx->pc = 0x3c80d8u;
    // NOP
label_3c80dc:
    // 0x3c80dc: 0x2010  mfhi        $a0
    ctx->pc = 0x3c80dcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3c80e0:
    // 0x3c80e0: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c80e0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3c80e4:
    // 0x3c80e4: 0x1000000c  b           . + 4 + (0xC << 2)
label_3c80e8:
    if (ctx->pc == 0x3C80E8u) {
        ctx->pc = 0x3C80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C80E4u;
        // 0x3c80e8: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C80ECu;
        goto label_3c80ec;
    }
    ctx->pc = 0x3C80E4u;
    {
        const bool branch_taken_0x3c80e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C80E4u;
        // 0x3c80e8: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c80e4) {
            ctx->pc = 0x3C8118u;
            goto label_3c8118;
        }
    }
    ctx->pc = 0x3C80ECu;
label_3c80ec:
    // 0x3c80ec: 0x0  nop
    ctx->pc = 0x3c80ecu;
    // NOP
label_3c80f0:
    // 0x3c80f0: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x3c80f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3c80f4:
    // 0x3c80f4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3c80f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3c80f8:
    // 0x3c80f8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3c80fc:
    if (ctx->pc == 0x3C80FCu) {
        ctx->pc = 0x3C8100u;
        goto label_3c8100;
    }
    ctx->pc = 0x3C80F8u;
    {
        const bool branch_taken_0x3c80f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c80f8) {
            ctx->pc = 0x3C8118u;
            goto label_3c8118;
        }
    }
    ctx->pc = 0x3C8100u;
label_3c8100:
    // 0x3c8100: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c8100u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3c8104:
    // 0x3c8104: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c8104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8108:
    // 0x3c8108: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x3c8108u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
label_3c810c:
    // 0x3c810c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c8110:
    if (ctx->pc == 0x3C8110u) {
        ctx->pc = 0x3C8110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C810Cu;
        // 0x3c8110: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8114u;
        goto label_3c8114;
    }
    ctx->pc = 0x3C810Cu;
    {
        const bool branch_taken_0x3c810c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C810Cu;
        // 0x3c8110: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c810c) {
            ctx->pc = 0x3C8120u;
            goto label_3c8120;
        }
    }
    ctx->pc = 0x3C8114u;
label_3c8114:
    // 0x3c8114: 0x0  nop
    ctx->pc = 0x3c8114u;
    // NOP
label_3c8118:
    // 0x3c8118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c8118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c811c:
    // 0x3c811c: 0x0  nop
    ctx->pc = 0x3c811cu;
    // NOP
label_3c8120:
    // 0x3c8120: 0x146002e3  bnez        $v1, . + 4 + (0x2E3 << 2)
label_3c8124:
    if (ctx->pc == 0x3C8124u) {
        ctx->pc = 0x3C8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8120u;
        // 0x3c8124: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8128u;
        goto label_3c8128;
    }
    ctx->pc = 0x3C8120u;
    {
        const bool branch_taken_0x3c8120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8120u;
        // 0x3c8124: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8120) {
            ctx->pc = 0x3C8CB0u;
            goto label_3c8cb0;
        }
    }
    ctx->pc = 0x3C8128u;
label_3c8128:
    // 0x3c8128: 0xc0c0830  jal         func_3020C0
label_3c812c:
    if (ctx->pc == 0x3C812Cu) {
        ctx->pc = 0x3C812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8128u;
        // 0x3c812c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8130u;
        goto label_3c8130;
    }
    ctx->pc = 0x3C8128u;
    SET_GPR_U32(ctx, 31, 0x3C8130u);
    ctx->pc = 0x3C812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8128u;
    // 0x3c812c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C8128u, 0x3C8130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8130u;
label_3c8130:
    // 0x3c8130: 0x100002df  b           . + 4 + (0x2DF << 2)
label_3c8134:
    if (ctx->pc == 0x3C8134u) {
        ctx->pc = 0x3C8138u;
        goto label_3c8138;
    }
    ctx->pc = 0x3C8130u;
    {
        const bool branch_taken_0x3c8130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8130) {
            ctx->pc = 0x3C8CB0u;
            goto label_3c8cb0;
        }
    }
    ctx->pc = 0x3C8138u;
label_3c8138:
    // 0x3c8138: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_3c813c:
    if (ctx->pc == 0x3C813Cu) {
        ctx->pc = 0x3C813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8138u;
        // 0x3c813c: 0xa28005a8  sb          $zero, 0x5A8($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1448), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8140u;
        goto label_3c8140;
    }
    ctx->pc = 0x3C8138u;
    {
        const bool branch_taken_0x3c8138 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8138u;
        // 0x3c813c: 0xa28005a8  sb          $zero, 0x5A8($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1448), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8138) {
            ctx->pc = 0x3C8178u;
            goto label_3c8178;
        }
    }
    ctx->pc = 0x3C8140u;
label_3c8140:
    // 0x3c8140: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3c8140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
label_3c8144:
    // 0x3c8144: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c8144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_3c8148:
    // 0x3c8148: 0x3c022300  lui         $v0, 0x2300
    ctx->pc = 0x3c8148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
label_3c814c:
    // 0x3c814c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c814cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_3c8150:
    // 0x3c8150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c8150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8154:
    // 0x3c8154: 0x34455102  ori         $a1, $v0, 0x5102
    ctx->pc = 0x3c8154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20738);
label_3c8158:
    // 0x3c8158: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c8158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_3c815c:
    // 0x3c815c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c815cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8160:
    // 0x3c8160: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c8160u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8164:
    // 0x3c8164: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c8164u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8168:
    // 0x3c8168: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c8168u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c816c:
    // 0x3c816c: 0xc05e9e8  jal         func_17A7A0
label_3c8170:
    if (ctx->pc == 0x3C8170u) {
        ctx->pc = 0x3C8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C816Cu;
        // 0x3c8170: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8174u;
        goto label_3c8174;
    }
    ctx->pc = 0x3C816Cu;
    SET_GPR_U32(ctx, 31, 0x3C8174u);
    ctx->pc = 0x3C8170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C816Cu;
    // 0x3c8170: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C816Cu, 0x3C8174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8174u;
label_3c8174:
    // 0x3c8174: 0x0  nop
    ctx->pc = 0x3c8174u;
    // NOP
label_3c8178:
    // 0x3c8178: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x3c8178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_3c817c:
    // 0x3c817c: 0xa6820512  sh          $v0, 0x512($s4)
    ctx->pc = 0x3c817cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 2));
label_3c8180:
    // 0x3c8180: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x3c8180u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
label_3c8184:
    // 0x3c8184: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x3c8184u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
label_3c8188:
    // 0x3c8188: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x3c8188u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
label_3c818c:
    // 0x3c818c: 0x92820521  lbu         $v0, 0x521($s4)
    ctx->pc = 0x3c818cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
label_3c8190:
    // 0x3c8190: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c8190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c8194:
    // 0x3c8194: 0xa2820521  sb          $v0, 0x521($s4)
    ctx->pc = 0x3c8194u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3c8198:
    // 0x3c8198: 0xa280053a  sb          $zero, 0x53A($s4)
    ctx->pc = 0x3c8198u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1338), (uint8_t)GPR_U32(ctx, 0));
label_3c819c:
    // 0x3c819c: 0x0  nop
    ctx->pc = 0x3c819cu;
    // NOP
label_3c81a0:
    // 0x3c81a0: 0x8e8605a0  lw          $a2, 0x5A0($s4)
    ctx->pc = 0x3c81a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1440)));
label_3c81a4:
    // 0x3c81a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c81a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c81a8:
    // 0x3c81a8: 0xc0c08b4  jal         func_3022D0
label_3c81ac:
    if (ctx->pc == 0x3C81ACu) {
        ctx->pc = 0x3C81ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C81A8u;
        // 0x3c81ac: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C81B0u;
        goto label_3c81b0;
    }
    ctx->pc = 0x3C81A8u;
    SET_GPR_U32(ctx, 31, 0x3C81B0u);
    ctx->pc = 0x3C81ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C81A8u;
    // 0x3c81ac: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3C81A8u, 0x3C81B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C81B0u;
label_3c81b0:
    // 0x3c81b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3c81b4:
    if (ctx->pc == 0x3C81B4u) {
        ctx->pc = 0x3C81B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C81B0u;
        // 0x3c81b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C81B8u;
        goto label_3c81b8;
    }
    ctx->pc = 0x3C81B0u;
    {
        const bool branch_taken_0x3c81b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C81B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C81B0u;
        // 0x3c81b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c81b0) {
            ctx->pc = 0x3C81C0u;
            goto label_3c81c0;
        }
    }
    ctx->pc = 0x3C81B8u;
label_3c81b8:
    // 0x3c81b8: 0xc0c0830  jal         func_3020C0
label_3c81bc:
    if (ctx->pc == 0x3C81BCu) {
        ctx->pc = 0x3C81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C81B8u;
        // 0x3c81bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C81C0u;
        goto label_3c81c0;
    }
    ctx->pc = 0x3C81B8u;
    SET_GPR_U32(ctx, 31, 0x3C81C0u);
    ctx->pc = 0x3C81BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C81B8u;
    // 0x3c81bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C81B8u, 0x3C81C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C81C0u;
label_3c81c0:
    // 0x3c81c0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c81c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c81c4:
    // 0x3c81c4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3c81c4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
label_3c81c8:
    // 0x3c81c8: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x3c81c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3c81cc:
    // 0x3c81cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c81ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c81d0:
    // 0x3c81d0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3c81d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3c81d4:
    // 0x3c81d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c81d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c81d8:
    // 0x3c81d8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c81d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c81dc:
    // 0x3c81dc: 0x7fa900a0  sq          $t1, 0xA0($sp)
    ctx->pc = 0x3c81dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 9));
label_3c81e0:
    // 0x3c81e0: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3c81e0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 1), 23600)));
label_3c81e4:
    // 0x3c81e4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c81e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c81e8:
    // 0x3c81e8: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x3c81e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
label_3c81ec:
    // 0x3c81ec: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3c81ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23616)));
label_3c81f0:
    // 0x3c81f0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c81f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c81f4:
    // 0x3c81f4: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3c81f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_3c81f8:
    // 0x3c81f8: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3c81f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23632)));
label_3c81fc:
    // 0x3c81fc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3c81fcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_3c8200:
    // 0x3c8200: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x3c8200u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_3c8204:
    // 0x3c8204: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3c8204u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_3c8208:
    // 0x3c8208: 0x928605a8  lbu         $a2, 0x5A8($s4)
    ctx->pc = 0x3c8208u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1448)));
label_3c820c:
    // 0x3c820c: 0xc68c05a4  lwc1        $f12, 0x5A4($s4)
    ctx->pc = 0x3c820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c8210:
    // 0x3c8210: 0xc0c0900  jal         func_302400
label_3c8214:
    if (ctx->pc == 0x3C8214u) {
        ctx->pc = 0x3C8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8210u;
        // 0x3c8214: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8218u;
        goto label_3c8218;
    }
    ctx->pc = 0x3C8210u;
    SET_GPR_U32(ctx, 31, 0x3C8218u);
    ctx->pc = 0x3C8214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8210u;
    // 0x3c8214: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3C8210u, 0x3C8218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8218u;
label_3c8218:
    // 0x3c8218: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c8218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c821c:
    // 0x3c821c: 0x27908060  addiu       $s0, $gp, -0x7FA0
    ctx->pc = 0x3c821cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_3c8220:
    // 0x3c8220: 0x928305a9  lbu         $v1, 0x5A9($s4)
    ctx->pc = 0x3c8220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1449)));
label_3c8224:
    // 0x3c8224: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3c8224u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c8228:
    // 0x3c8228: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c8228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_3c822c:
    // 0x3c822c: 0x24422e70  addiu       $v0, $v0, 0x2E70
    ctx->pc = 0x3c822cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11888));
label_3c8230:
    // 0x3c8230: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x3c8230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_3c8234:
    // 0x3c8234: 0x268705b0  addiu       $a3, $s4, 0x5B0
    ctx->pc = 0x3c8234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 1456));
label_3c8238:
    // 0x3c8238: 0x268805b4  addiu       $t0, $s4, 0x5B4
    ctx->pc = 0x3c8238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 1460));
label_3c823c:
    // 0x3c823c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c823cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_3c8240:
    // 0x3c8240: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c8240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c8244:
    // 0x3c8244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c8244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c8248:
    // 0x3c8248: 0xc0976f0  jal         func_25DBC0
label_3c824c:
    if (ctx->pc == 0x3C824Cu) {
        ctx->pc = 0x3C824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8248u;
        // 0x3c824c: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8250u;
        goto label_3c8250;
    }
    ctx->pc = 0x3C8248u;
    SET_GPR_U32(ctx, 31, 0x3C8250u);
    ctx->pc = 0x3C824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8248u;
    // 0x3c824c: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DBC0u, 0x3C8248u, 0x3C8250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8250u;
label_3c8250:
    // 0x3c8250: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3c8254:
    if (ctx->pc == 0x3C8254u) {
        ctx->pc = 0x3C8254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8250u;
        // 0x3c8254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8258u;
        goto label_3c8258;
    }
    ctx->pc = 0x3C8250u;
    {
        const bool branch_taken_0x3c8250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8250u;
        // 0x3c8254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8250) {
            ctx->pc = 0x3C8288u;
            goto label_3c8288;
        }
    }
    ctx->pc = 0x3C8258u;
label_3c8258:
    // 0x3c8258: 0xc096fb8  jal         func_25BEE0
label_3c825c:
    if (ctx->pc == 0x3C825Cu) {
        ctx->pc = 0x3C8260u;
        goto label_3c8260;
    }
    ctx->pc = 0x3C8258u;
    SET_GPR_U32(ctx, 31, 0x3C8260u);
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3C8258u, 0x3C8260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8260u;
label_3c8260:
    // 0x3c8260: 0x922508e8  lbu         $a1, 0x8E8($s1)
    ctx->pc = 0x3c8260u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_3c8264:
    // 0x3c8264: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c8264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c8268:
    // 0x3c8268: 0x92272901  lbu         $a3, 0x2901($s1)
    ctx->pc = 0x3c8268u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10497)));
label_3c826c:
    // 0x3c826c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x3c826cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_3c8270:
    // 0x3c8270: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c8270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c8274:
    // 0x3c8274: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c8274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c8278:
    // 0x3c8278: 0x26282910  addiu       $t0, $s1, 0x2910
    ctx->pc = 0x3c8278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 10512));
label_3c827c:
    // 0x3c827c: 0xc0aa0c8  jal         func_2A8320
label_3c8280:
    if (ctx->pc == 0x3C8280u) {
        ctx->pc = 0x3C8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C827Cu;
        // 0x3c8280: 0x26890020  addiu       $t1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8284u;
        goto label_3c8284;
    }
    ctx->pc = 0x3C827Cu;
    SET_GPR_U32(ctx, 31, 0x3C8284u);
    ctx->pc = 0x3C8280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C827Cu;
    // 0x3c8280: 0x26890020  addiu       $t1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8320u, 0x3C827Cu, 0x3C8284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8284u;
label_3c8284:
    // 0x3c8284: 0x0  nop
    ctx->pc = 0x3c8284u;
    // NOP
label_3c8288:
    // 0x3c8288: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3c8288u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3c828c:
    // 0x3c828c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x3c828cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_3c8290:
    // 0x3c8290: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_3c8294:
    if (ctx->pc == 0x3C8294u) {
        ctx->pc = 0x3C8294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8290u;
        // 0x3c8294: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8298u;
        goto label_3c8298;
    }
    ctx->pc = 0x3C8290u;
    {
        const bool branch_taken_0x3c8290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8290u;
        // 0x3c8294: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8290) {
            ctx->pc = 0x3C8220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8220;
        }
    }
    ctx->pc = 0x3C8298u;
label_3c8298:
    // 0x3c8298: 0xc68105b0  lwc1        $f1, 0x5B0($s4)
    ctx->pc = 0x3c8298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c829c:
    // 0x3c829c: 0x3c024340  lui         $v0, 0x4340
    ctx->pc = 0x3c829cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17216 << 16));
label_3c82a0:
    // 0x3c82a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c82a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c82a4:
    // 0x3c82a4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3c82a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_3c82a8:
    // 0x3c82a8: 0x928605a9  lbu         $a2, 0x5A9($s4)
    ctx->pc = 0x3c82a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1449)));
label_3c82ac:
    // 0x3c82ac: 0x24632e78  addiu       $v1, $v1, 0x2E78
    ctx->pc = 0x3c82acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11896));
label_3c82b0:
    // 0x3c82b0: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x3c82b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_3c82b4:
    // 0x3c82b4: 0x8e8505a0  lw          $a1, 0x5A0($s4)
    ctx->pc = 0x3c82b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1440)));
label_3c82b8:
    // 0x3c82b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c82b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c82bc:
    // 0x3c82bc: 0x0  nop
    ctx->pc = 0x3c82bcu;
    // NOP
label_3c82c0:
    // 0x3c82c0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3c82c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3c82c4:
    // 0x3c82c4: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x3c82c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_3c82c8:
    // 0x3c82c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3c82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3c82cc:
    // 0x3c82cc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3c82ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c82d0:
    // 0x3c82d0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3c82d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_3c82d4:
    // 0x3c82d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c82d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c82d8:
    // 0x3c82d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c82d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c82dc:
    // 0x3c82dc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3c82dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3c82e0:
    // 0x3c82e0: 0xc0c08e4  jal         func_302390
label_3c82e4:
    if (ctx->pc == 0x3C82E4u) {
        ctx->pc = 0x3C82E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C82E0u;
        // 0x3c82e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C82E8u;
        goto label_3c82e8;
    }
    ctx->pc = 0x3C82E0u;
    SET_GPR_U32(ctx, 31, 0x3C82E8u);
    ctx->pc = 0x3C82E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C82E0u;
    // 0x3c82e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302390u, 0x3C82E0u, 0x3C82E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C82E8u;
label_3c82e8:
    // 0x3c82e8: 0x9284053a  lbu         $a0, 0x53A($s4)
    ctx->pc = 0x3c82e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1338)));
label_3c82ec:
    // 0x3c82ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c82f0:
    // 0x3c82f0: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
label_3c82f4:
    if (ctx->pc == 0x3C82F4u) {
        ctx->pc = 0x3C82F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C82F0u;
        // 0x3c82f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C82F8u;
        goto label_3c82f8;
    }
    ctx->pc = 0x3C82F0u;
    {
        const bool branch_taken_0x3c82f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C82F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C82F0u;
        // 0x3c82f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c82f0) {
            ctx->pc = 0x3C83C8u;
            goto label_3c83c8;
        }
    }
    ctx->pc = 0x3C82F8u;
label_3c82f8:
    // 0x3c82f8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3c82fc:
    if (ctx->pc == 0x3C82FCu) {
        ctx->pc = 0x3C8300u;
        goto label_3c8300;
    }
    ctx->pc = 0x3C82F8u;
    {
        const bool branch_taken_0x3c82f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c82f8) {
            ctx->pc = 0x3C8308u;
            goto label_3c8308;
        }
    }
    ctx->pc = 0x3C8300u;
label_3c8300:
    // 0x3c8300: 0x10000033  b           . + 4 + (0x33 << 2)
label_3c8304:
    if (ctx->pc == 0x3C8304u) {
        ctx->pc = 0x3C8308u;
        goto label_3c8308;
    }
    ctx->pc = 0x3C8300u;
    {
        const bool branch_taken_0x3c8300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8300) {
            ctx->pc = 0x3C83D0u;
            goto label_3c83d0;
        }
    }
    ctx->pc = 0x3C8308u;
label_3c8308:
    // 0x3c8308: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x3c8308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_3c830c:
    // 0x3c830c: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3c830cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_3c8310:
    // 0x3c8310: 0xc0766b8  jal         func_1D9AE0
label_3c8314:
    if (ctx->pc == 0x3C8314u) {
        ctx->pc = 0x3C8314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8310u;
        // 0x3c8314: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8318u;
        goto label_3c8318;
    }
    ctx->pc = 0x3C8310u;
    SET_GPR_U32(ctx, 31, 0x3C8318u);
    ctx->pc = 0x3C8314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8310u;
    // 0x3c8314: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3C8310u, 0x3C8318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8318u;
label_3c8318:
    // 0x3c8318: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c8318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3c831c:
    // 0x3c831c: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3c831cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_3c8320:
    // 0x3c8320: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c8320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c8324:
    // 0x3c8324: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c8324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c8328:
    // 0x3c8328: 0xc0766c8  jal         func_1D9B20
label_3c832c:
    if (ctx->pc == 0x3C832Cu) {
        ctx->pc = 0x3C832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8328u;
        // 0x3c832c: 0xae800094  sw          $zero, 0x94($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8330u;
        goto label_3c8330;
    }
    ctx->pc = 0x3C8328u;
    SET_GPR_U32(ctx, 31, 0x3C8330u);
    ctx->pc = 0x3C832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8328u;
    // 0x3c832c: 0xae800094  sw          $zero, 0x94($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x3C8328u, 0x3C8330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8330u;
label_3c8330:
    // 0x3c8330: 0x928305a9  lbu         $v1, 0x5A9($s4)
    ctx->pc = 0x3c8330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1449)));
label_3c8334:
    // 0x3c8334: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c8334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_3c8338:
    // 0x3c8338: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3c8338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_3c833c:
    // 0x3c833c: 0x24422e74  addiu       $v0, $v0, 0x2E74
    ctx->pc = 0x3c833cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11892));
label_3c8340:
    // 0x3c8340: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c8340u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c8344:
    // 0x3c8344: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c8344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_3c8348:
    // 0x3c8348: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c8348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c834c:
    // 0x3c834c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3c834cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c8350:
    // 0x3c8350: 0xc076690  jal         func_1D9A40
label_3c8354:
    if (ctx->pc == 0x3C8354u) {
        ctx->pc = 0x3C8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8350u;
        // 0x3c8354: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8358u;
        goto label_3c8358;
    }
    ctx->pc = 0x3C8350u;
    SET_GPR_U32(ctx, 31, 0x3C8358u);
    ctx->pc = 0x3C8354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8350u;
    // 0x3c8354: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3C8350u, 0x3C8358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8358u;
label_3c8358:
    // 0x3c8358: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3c8358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_3c835c:
    // 0x3c835c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c835cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c8360:
    // 0x3c8360: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c8360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c8364:
    // 0x3c8364: 0x78245c10  lq          $a0, 0x5C10($at)
    ctx->pc = 0x3c8364u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 23568)));
label_3c8368:
    // 0x3c8368: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x3c8368u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
label_3c836c:
    // 0x3c836c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3c836cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_3c8370:
    // 0x3c8370: 0x7e8400a0  sq          $a0, 0xA0($s4)
    ctx->pc = 0x3c8370u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 160), GPR_VEC(ctx, 4));
label_3c8374:
    // 0x3c8374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c8374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8378:
    // 0x3c8378: 0x0  nop
    ctx->pc = 0x3c8378u;
    // NOP
label_3c837c:
    // 0x3c837c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3c837cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c8380:
    // 0x3c8380: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x3c8380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
label_3c8384:
    // 0x3c8384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c8384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8388:
    // 0x3c8388: 0x0  nop
    ctx->pc = 0x3c8388u;
    // NOP
label_3c838c:
    // 0x3c838c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c838cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c8390:
    // 0x3c8390: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c8390u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c8394:
    // 0x3c8394: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c8394u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c8398:
    // 0x3c8398: 0x0  nop
    ctx->pc = 0x3c8398u;
    // NOP
label_3c839c:
    // 0x3c839c: 0xa68305ac  sh          $v1, 0x5AC($s4)
    ctx->pc = 0x3c839cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1452), (uint16_t)GPR_U32(ctx, 3));
label_3c83a0:
    // 0x3c83a0: 0x868305ac  lh          $v1, 0x5AC($s4)
    ctx->pc = 0x3c83a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1452)));
label_3c83a4:
    // 0x3c83a4: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x3c83a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_3c83a8:
    // 0x3c83a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3c83ac:
    if (ctx->pc == 0x3C83ACu) {
        ctx->pc = 0x3C83ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83A8u;
        // 0x3c83ac: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C83B0u;
        goto label_3c83b0;
    }
    ctx->pc = 0x3C83A8u;
    {
        const bool branch_taken_0x3c83a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C83ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83A8u;
        // 0x3c83ac: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c83a8) {
            ctx->pc = 0x3C83B8u;
            goto label_3c83b8;
        }
    }
    ctx->pc = 0x3C83B0u;
label_3c83b0:
    // 0x3c83b0: 0xa68305ac  sh          $v1, 0x5AC($s4)
    ctx->pc = 0x3c83b0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1452), (uint16_t)GPR_U32(ctx, 3));
label_3c83b4:
    // 0x3c83b4: 0x0  nop
    ctx->pc = 0x3c83b4u;
    // NOP
label_3c83b8:
    // 0x3c83b8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3c83b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c83bc:
    // 0x3c83bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c83c0:
    if (ctx->pc == 0x3C83C0u) {
        ctx->pc = 0x3C83C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83BCu;
        // 0x3c83c0: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C83C4u;
        goto label_3c83c4;
    }
    ctx->pc = 0x3C83BCu;
    {
        const bool branch_taken_0x3c83bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C83C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83BCu;
        // 0x3c83c0: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c83bc) {
            ctx->pc = 0x3C83D0u;
            goto label_3c83d0;
        }
    }
    ctx->pc = 0x3C83C4u;
label_3c83c4:
    // 0x3c83c4: 0x0  nop
    ctx->pc = 0x3c83c4u;
    // NOP
label_3c83c8:
    // 0x3c83c8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3c83c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3c83cc:
    // 0x3c83cc: 0xa2830521  sb          $v1, 0x521($s4)
    ctx->pc = 0x3c83ccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
label_3c83d0:
    // 0x3c83d0: 0xc68105b0  lwc1        $f1, 0x5B0($s4)
    ctx->pc = 0x3c83d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c83d4:
    // 0x3c83d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c83d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c83d8:
    // 0x3c83d8: 0x0  nop
    ctx->pc = 0x3c83d8u;
    // NOP
label_3c83dc:
    // 0x3c83dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3c83dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c83e0:
    // 0x3c83e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3c83e4:
    if (ctx->pc == 0x3C83E4u) {
        ctx->pc = 0x3C83E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83E0u;
        // 0x3c83e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C83E8u;
        goto label_3c83e8;
    }
    ctx->pc = 0x3C83E0u;
    {
        const bool branch_taken_0x3c83e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C83E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83E0u;
        // 0x3c83e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c83e0) {
            ctx->pc = 0x3C83F0u;
            goto label_3c83f0;
        }
    }
    ctx->pc = 0x3C83E8u;
label_3c83e8:
    // 0x3c83e8: 0xc0c0830  jal         func_3020C0
label_3c83ec:
    if (ctx->pc == 0x3C83ECu) {
        ctx->pc = 0x3C83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83E8u;
        // 0x3c83ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C83F0u;
        goto label_3c83f0;
    }
    ctx->pc = 0x3C83E8u;
    SET_GPR_U32(ctx, 31, 0x3C83F0u);
    ctx->pc = 0x3C83ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C83E8u;
    // 0x3c83ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C83E8u, 0x3C83F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C83F0u;
label_3c83f0:
    // 0x3c83f0: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x3c83f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
label_3c83f4:
    // 0x3c83f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3c83f8:
    if (ctx->pc == 0x3C83F8u) {
        ctx->pc = 0x3C83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83F4u;
        // 0x3c83f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C83FCu;
        goto label_3c83fc;
    }
    ctx->pc = 0x3C83F4u;
    {
        const bool branch_taken_0x3c83f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83F4u;
        // 0x3c83f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c83f4) {
            ctx->pc = 0x3C8408u;
            goto label_3c8408;
        }
    }
    ctx->pc = 0x3C83FCu;
label_3c83fc:
    // 0x3c83fc: 0x10000022  b           . + 4 + (0x22 << 2)
label_3c8400:
    if (ctx->pc == 0x3C8400u) {
        ctx->pc = 0x3C8404u;
        goto label_3c8404;
    }
    ctx->pc = 0x3C83FCu;
    {
        const bool branch_taken_0x3c83fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c83fc) {
            ctx->pc = 0x3C8488u;
            goto label_3c8488;
        }
    }
    ctx->pc = 0x3C8404u;
label_3c8404:
    // 0x3c8404: 0x0  nop
    ctx->pc = 0x3c8404u;
    // NOP
label_3c8408:
    // 0x3c8408: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x3c8408u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3c840c:
    // 0x3c840c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3c840cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_3c8410:
    // 0x3c8410: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c8410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3c8414:
    // 0x3c8414: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c8414u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3c8418:
    // 0x3c8418: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x3c8418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
label_3c841c:
    // 0x3c841c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_3c8420:
    if (ctx->pc == 0x3C8420u) {
        ctx->pc = 0x3C8424u;
        goto label_3c8424;
    }
    ctx->pc = 0x3C841Cu;
    {
        const bool branch_taken_0x3c841c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c841c) {
            ctx->pc = 0x3C8458u;
            goto label_3c8458;
        }
    }
    ctx->pc = 0x3C8424u;
label_3c8424:
    // 0x3c8424: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x3c8424u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3c8428:
    // 0x3c8428: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3c8428u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_3c842c:
    // 0x3c842c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_3c8430:
    if (ctx->pc == 0x3C8430u) {
        ctx->pc = 0x3C8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C842Cu;
        // 0x3c8430: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8434u;
        goto label_3c8434;
    }
    ctx->pc = 0x3C842Cu;
    {
        const bool branch_taken_0x3c842c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C842Cu;
        // 0x3c8430: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c842c) {
            ctx->pc = 0x3C8480u;
            goto label_3c8480;
        }
    }
    ctx->pc = 0x3C8434u;
label_3c8434:
    // 0x3c8434: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c8434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8438:
    // 0x3c8438: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3c8438u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3c843c:
    // 0x3c843c: 0x0  nop
    ctx->pc = 0x3c843cu;
    // NOP
label_3c8440:
    // 0x3c8440: 0x0  nop
    ctx->pc = 0x3c8440u;
    // NOP
label_3c8444:
    // 0x3c8444: 0x2010  mfhi        $a0
    ctx->pc = 0x3c8444u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3c8448:
    // 0x3c8448: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c8448u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3c844c:
    // 0x3c844c: 0x1000000c  b           . + 4 + (0xC << 2)
label_3c8450:
    if (ctx->pc == 0x3C8450u) {
        ctx->pc = 0x3C8450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C844Cu;
        // 0x3c8450: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8454u;
        goto label_3c8454;
    }
    ctx->pc = 0x3C844Cu;
    {
        const bool branch_taken_0x3c844c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C844Cu;
        // 0x3c8450: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c844c) {
            ctx->pc = 0x3C8480u;
            goto label_3c8480;
        }
    }
    ctx->pc = 0x3C8454u;
label_3c8454:
    // 0x3c8454: 0x0  nop
    ctx->pc = 0x3c8454u;
    // NOP
label_3c8458:
    // 0x3c8458: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x3c8458u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3c845c:
    // 0x3c845c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3c845cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3c8460:
    // 0x3c8460: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3c8464:
    if (ctx->pc == 0x3C8464u) {
        ctx->pc = 0x3C8468u;
        goto label_3c8468;
    }
    ctx->pc = 0x3C8460u;
    {
        const bool branch_taken_0x3c8460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c8460) {
            ctx->pc = 0x3C8480u;
            goto label_3c8480;
        }
    }
    ctx->pc = 0x3C8468u;
label_3c8468:
    // 0x3c8468: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c8468u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3c846c:
    // 0x3c846c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c846cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8470:
    // 0x3c8470: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x3c8470u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
label_3c8474:
    // 0x3c8474: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c8478:
    if (ctx->pc == 0x3C8478u) {
        ctx->pc = 0x3C8478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8474u;
        // 0x3c8478: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C847Cu;
        goto label_3c847c;
    }
    ctx->pc = 0x3C8474u;
    {
        const bool branch_taken_0x3c8474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8474u;
        // 0x3c8478: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8474) {
            ctx->pc = 0x3C8488u;
            goto label_3c8488;
        }
    }
    ctx->pc = 0x3C847Cu;
label_3c847c:
    // 0x3c847c: 0x0  nop
    ctx->pc = 0x3c847cu;
    // NOP
label_3c8480:
    // 0x3c8480: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c8480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8484:
    // 0x3c8484: 0x0  nop
    ctx->pc = 0x3c8484u;
    // NOP
label_3c8488:
    // 0x3c8488: 0x14600209  bnez        $v1, . + 4 + (0x209 << 2)
label_3c848c:
    if (ctx->pc == 0x3C848Cu) {
        ctx->pc = 0x3C848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8488u;
        // 0x3c848c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8490u;
        goto label_3c8490;
    }
    ctx->pc = 0x3C8488u;
    {
        const bool branch_taken_0x3c8488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8488u;
        // 0x3c848c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8488) {
            ctx->pc = 0x3C8CB0u;
            goto label_3c8cb0;
        }
    }
    ctx->pc = 0x3C8490u;
label_3c8490:
    // 0x3c8490: 0xc0c0830  jal         func_3020C0
label_3c8494:
    if (ctx->pc == 0x3C8494u) {
        ctx->pc = 0x3C8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8490u;
        // 0x3c8494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8498u;
        goto label_3c8498;
    }
    ctx->pc = 0x3C8490u;
    SET_GPR_U32(ctx, 31, 0x3C8498u);
    ctx->pc = 0x3C8494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8490u;
    // 0x3c8494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C8490u, 0x3C8498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8498u;
label_3c8498:
    // 0x3c8498: 0x10000205  b           . + 4 + (0x205 << 2)
label_3c849c:
    if (ctx->pc == 0x3C849Cu) {
        ctx->pc = 0x3C84A0u;
        goto label_3c84a0;
    }
    ctx->pc = 0x3C8498u;
    {
        const bool branch_taken_0x3c8498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8498) {
            ctx->pc = 0x3C8CB0u;
            goto label_3c8cb0;
        }
    }
    ctx->pc = 0x3C84A0u;
label_3c84a0:
    // 0x3c84a0: 0x868205ac  lh          $v0, 0x5AC($s4)
    ctx->pc = 0x3c84a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1452)));
label_3c84a4:
    // 0x3c84a4: 0xa6820512  sh          $v0, 0x512($s4)
    ctx->pc = 0x3c84a4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 2));
label_3c84a8:
    // 0x3c84a8: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x3c84a8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
label_3c84ac:
    // 0x3c84ac: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x3c84acu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
label_3c84b0:
    // 0x3c84b0: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x3c84b0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
label_3c84b4:
    // 0x3c84b4: 0x92820521  lbu         $v0, 0x521($s4)
    ctx->pc = 0x3c84b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
label_3c84b8:
    // 0x3c84b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c84b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c84bc:
    // 0x3c84bc: 0xa2820521  sb          $v0, 0x521($s4)
    ctx->pc = 0x3c84bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3c84c0:
    // 0x3c84c0: 0x8e8605a0  lw          $a2, 0x5A0($s4)
    ctx->pc = 0x3c84c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1440)));
label_3c84c4:
    // 0x3c84c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c84c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c84c8:
    // 0x3c84c8: 0xc0c08b4  jal         func_3022D0
label_3c84cc:
    if (ctx->pc == 0x3C84CCu) {
        ctx->pc = 0x3C84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84C8u;
        // 0x3c84cc: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C84D0u;
        goto label_3c84d0;
    }
    ctx->pc = 0x3C84C8u;
    SET_GPR_U32(ctx, 31, 0x3C84D0u);
    ctx->pc = 0x3C84CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C84C8u;
    // 0x3c84cc: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3C84C8u, 0x3C84D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C84D0u;
label_3c84d0:
    // 0x3c84d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3c84d4:
    if (ctx->pc == 0x3C84D4u) {
        ctx->pc = 0x3C84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84D0u;
        // 0x3c84d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C84D8u;
        goto label_3c84d8;
    }
    ctx->pc = 0x3C84D0u;
    {
        const bool branch_taken_0x3c84d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84D0u;
        // 0x3c84d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c84d0) {
            ctx->pc = 0x3C84E0u;
            goto label_3c84e0;
        }
    }
    ctx->pc = 0x3C84D8u;
label_3c84d8:
    // 0x3c84d8: 0xc0c0830  jal         func_3020C0
label_3c84dc:
    if (ctx->pc == 0x3C84DCu) {
        ctx->pc = 0x3C84DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84D8u;
        // 0x3c84dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C84E0u;
        goto label_3c84e0;
    }
    ctx->pc = 0x3C84D8u;
    SET_GPR_U32(ctx, 31, 0x3C84E0u);
    ctx->pc = 0x3C84DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C84D8u;
    // 0x3c84dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C84D8u, 0x3C84E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C84E0u;
label_3c84e0:
    // 0x3c84e0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c84e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c84e4:
    // 0x3c84e4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3c84e4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
label_3c84e8:
    // 0x3c84e8: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x3c84e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3c84ec:
    // 0x3c84ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c84ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c84f0:
    // 0x3c84f0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3c84f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3c84f4:
    // 0x3c84f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c84f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c84f8:
    // 0x3c84f8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c84f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c84fc:
    // 0x3c84fc: 0x7fa900a0  sq          $t1, 0xA0($sp)
    ctx->pc = 0x3c84fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 9));
label_3c8500:
    // 0x3c8500: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3c8500u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 1), 23600)));
label_3c8504:
    // 0x3c8504: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c8504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c8508:
    // 0x3c8508: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x3c8508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
label_3c850c:
    // 0x3c850c: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3c850cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23616)));
label_3c8510:
    // 0x3c8510: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c8510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c8514:
    // 0x3c8514: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3c8514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_3c8518:
    // 0x3c8518: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3c8518u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23632)));
label_3c851c:
    // 0x3c851c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3c851cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_3c8520:
    // 0x3c8520: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x3c8520u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_3c8524:
    // 0x3c8524: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3c8524u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_3c8528:
    // 0x3c8528: 0x928605a8  lbu         $a2, 0x5A8($s4)
    ctx->pc = 0x3c8528u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1448)));
label_3c852c:
    // 0x3c852c: 0xc68c05a4  lwc1        $f12, 0x5A4($s4)
    ctx->pc = 0x3c852cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c8530:
    // 0x3c8530: 0xc0c0900  jal         func_302400
label_3c8534:
    if (ctx->pc == 0x3C8534u) {
        ctx->pc = 0x3C8534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8530u;
        // 0x3c8534: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8538u;
        goto label_3c8538;
    }
    ctx->pc = 0x3C8530u;
    SET_GPR_U32(ctx, 31, 0x3C8538u);
    ctx->pc = 0x3C8534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8530u;
    // 0x3c8534: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3C8530u, 0x3C8538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8538u;
label_3c8538:
    // 0x3c8538: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x3c8538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
label_3c853c:
    // 0x3c853c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3c8540:
    if (ctx->pc == 0x3C8540u) {
        ctx->pc = 0x3C8540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C853Cu;
        // 0x3c8540: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8544u;
        goto label_3c8544;
    }
    ctx->pc = 0x3C853Cu;
    {
        const bool branch_taken_0x3c853c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C853Cu;
        // 0x3c8540: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c853c) {
            ctx->pc = 0x3C8550u;
            goto label_3c8550;
        }
    }
    ctx->pc = 0x3C8544u;
label_3c8544:
    // 0x3c8544: 0x10000022  b           . + 4 + (0x22 << 2)
label_3c8548:
    if (ctx->pc == 0x3C8548u) {
        ctx->pc = 0x3C854Cu;
        goto label_3c854c;
    }
    ctx->pc = 0x3C8544u;
    {
        const bool branch_taken_0x3c8544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8544) {
            ctx->pc = 0x3C85D0u;
            goto label_3c85d0;
        }
    }
    ctx->pc = 0x3C854Cu;
label_3c854c:
    // 0x3c854c: 0x0  nop
    ctx->pc = 0x3c854cu;
    // NOP
label_3c8550:
    // 0x3c8550: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x3c8550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3c8554:
    // 0x3c8554: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3c8554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_3c8558:
    // 0x3c8558: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c8558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3c855c:
    // 0x3c855c: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c855cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3c8560:
    // 0x3c8560: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x3c8560u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
label_3c8564:
    // 0x3c8564: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_3c8568:
    if (ctx->pc == 0x3C8568u) {
        ctx->pc = 0x3C856Cu;
        goto label_3c856c;
    }
    ctx->pc = 0x3C8564u;
    {
        const bool branch_taken_0x3c8564 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c8564) {
            ctx->pc = 0x3C85A0u;
            goto label_3c85a0;
        }
    }
    ctx->pc = 0x3C856Cu;
label_3c856c:
    // 0x3c856c: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x3c856cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3c8570:
    // 0x3c8570: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3c8570u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_3c8574:
    // 0x3c8574: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_3c8578:
    if (ctx->pc == 0x3C8578u) {
        ctx->pc = 0x3C8578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8574u;
        // 0x3c8578: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C857Cu;
        goto label_3c857c;
    }
    ctx->pc = 0x3C8574u;
    {
        const bool branch_taken_0x3c8574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8574u;
        // 0x3c8578: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8574) {
            ctx->pc = 0x3C85C8u;
            goto label_3c85c8;
        }
    }
    ctx->pc = 0x3C857Cu;
label_3c857c:
    // 0x3c857c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c857cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8580:
    // 0x3c8580: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3c8580u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3c8584:
    // 0x3c8584: 0x0  nop
    ctx->pc = 0x3c8584u;
    // NOP
label_3c8588:
    // 0x3c8588: 0x0  nop
    ctx->pc = 0x3c8588u;
    // NOP
label_3c858c:
    // 0x3c858c: 0x2010  mfhi        $a0
    ctx->pc = 0x3c858cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3c8590:
    // 0x3c8590: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c8590u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3c8594:
    // 0x3c8594: 0x1000000c  b           . + 4 + (0xC << 2)
label_3c8598:
    if (ctx->pc == 0x3C8598u) {
        ctx->pc = 0x3C8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8594u;
        // 0x3c8598: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C859Cu;
        goto label_3c859c;
    }
    ctx->pc = 0x3C8594u;
    {
        const bool branch_taken_0x3c8594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8594u;
        // 0x3c8598: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8594) {
            ctx->pc = 0x3C85C8u;
            goto label_3c85c8;
        }
    }
    ctx->pc = 0x3C859Cu;
label_3c859c:
    // 0x3c859c: 0x0  nop
    ctx->pc = 0x3c859cu;
    // NOP
label_3c85a0:
    // 0x3c85a0: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x3c85a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3c85a4:
    // 0x3c85a4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3c85a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3c85a8:
    // 0x3c85a8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3c85ac:
    if (ctx->pc == 0x3C85ACu) {
        ctx->pc = 0x3C85B0u;
        goto label_3c85b0;
    }
    ctx->pc = 0x3C85A8u;
    {
        const bool branch_taken_0x3c85a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c85a8) {
            ctx->pc = 0x3C85C8u;
            goto label_3c85c8;
        }
    }
    ctx->pc = 0x3C85B0u;
label_3c85b0:
    // 0x3c85b0: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c85b0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3c85b4:
    // 0x3c85b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c85b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c85b8:
    // 0x3c85b8: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x3c85b8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
label_3c85bc:
    // 0x3c85bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c85c0:
    if (ctx->pc == 0x3C85C0u) {
        ctx->pc = 0x3C85C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85BCu;
        // 0x3c85c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C85C4u;
        goto label_3c85c4;
    }
    ctx->pc = 0x3C85BCu;
    {
        const bool branch_taken_0x3c85bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C85C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85BCu;
        // 0x3c85c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c85bc) {
            ctx->pc = 0x3C85D0u;
            goto label_3c85d0;
        }
    }
    ctx->pc = 0x3C85C4u;
label_3c85c4:
    // 0x3c85c4: 0x0  nop
    ctx->pc = 0x3c85c4u;
    // NOP
label_3c85c8:
    // 0x3c85c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c85c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c85cc:
    // 0x3c85cc: 0x0  nop
    ctx->pc = 0x3c85ccu;
    // NOP
label_3c85d0:
    // 0x3c85d0: 0x146001b7  bnez        $v1, . + 4 + (0x1B7 << 2)
label_3c85d4:
    if (ctx->pc == 0x3C85D4u) {
        ctx->pc = 0x3C85D8u;
        goto label_3c85d8;
    }
    ctx->pc = 0x3C85D0u;
    {
        const bool branch_taken_0x3c85d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c85d0) {
            ctx->pc = 0x3C8CB0u;
            goto label_3c8cb0;
        }
    }
    ctx->pc = 0x3C85D8u;
label_3c85d8:
    // 0x3c85d8: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x3c85d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
label_3c85dc:
    // 0x3c85dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c85dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c85e0:
    // 0x3c85e0: 0x100001b3  b           . + 4 + (0x1B3 << 2)
label_3c85e4:
    if (ctx->pc == 0x3C85E4u) {
        ctx->pc = 0x3C85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85E0u;
        // 0x3c85e4: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C85E8u;
        goto label_3c85e8;
    }
    ctx->pc = 0x3C85E0u;
    {
        const bool branch_taken_0x3c85e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85E0u;
        // 0x3c85e4: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c85e0) {
            ctx->pc = 0x3C8CB0u;
            goto label_3c8cb0;
        }
    }
    ctx->pc = 0x3C85E8u;
label_3c85e8:
    // 0x3c85e8: 0x86820528  lh          $v0, 0x528($s4)
    ctx->pc = 0x3c85e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1320)));
label_3c85ec:
    // 0x3c85ec: 0xa6820512  sh          $v0, 0x512($s4)
    ctx->pc = 0x3c85ecu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 2));
label_3c85f0:
    // 0x3c85f0: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x3c85f0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
label_3c85f4:
    // 0x3c85f4: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x3c85f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
label_3c85f8:
    // 0x3c85f8: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x3c85f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
label_3c85fc:
    // 0x3c85fc: 0x92820521  lbu         $v0, 0x521($s4)
    ctx->pc = 0x3c85fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
label_3c8600:
    // 0x3c8600: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c8600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c8604:
    // 0x3c8604: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_3c8608:
    if (ctx->pc == 0x3C8608u) {
        ctx->pc = 0x3C8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8604u;
        // 0x3c8608: 0xa2820521  sb          $v0, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C860Cu;
        goto label_3c860c;
    }
    ctx->pc = 0x3C8604u;
    {
        const bool branch_taken_0x3c8604 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8604u;
        // 0x3c8608: 0xa2820521  sb          $v0, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8604) {
            ctx->pc = 0x3C8640u;
            goto label_3c8640;
        }
    }
    ctx->pc = 0x3C860Cu;
label_3c860c:
    // 0x3c860c: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3c860cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
label_3c8610:
    // 0x3c8610: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c8610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_3c8614:
    // 0x3c8614: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x3c8614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
label_3c8618:
    // 0x3c8618: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c8618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_3c861c:
    // 0x3c861c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c861cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8620:
    // 0x3c8620: 0x34455102  ori         $a1, $v0, 0x5102
    ctx->pc = 0x3c8620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20738);
label_3c8624:
    // 0x3c8624: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c8624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_3c8628:
    // 0x3c8628: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c8628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c862c:
    // 0x3c862c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c862cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8630:
    // 0x3c8630: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c8630u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8634:
    // 0x3c8634: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c8634u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8638:
    // 0x3c8638: 0xc05e9e8  jal         func_17A7A0
label_3c863c:
    if (ctx->pc == 0x3C863Cu) {
        ctx->pc = 0x3C863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8638u;
        // 0x3c863c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8640u;
        goto label_3c8640;
    }
    ctx->pc = 0x3C8638u;
    SET_GPR_U32(ctx, 31, 0x3C8640u);
    ctx->pc = 0x3C863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8638u;
    // 0x3c863c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C8638u, 0x3C8640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8640u;
label_3c8640:
    // 0x3c8640: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3c8640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_3c8644:
    // 0x3c8644: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x3c8644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
label_3c8648:
    // 0x3c8648: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x3c8648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_3c864c:
    // 0x3c864c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c864cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3c8650:
    // 0x3c8650: 0x26850090  addiu       $a1, $s4, 0x90
    ctx->pc = 0x3c8650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_3c8654:
    // 0x3c8654: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3c8654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c8658:
    // 0x3c8658: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c8658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c865c:
    // 0x3c865c: 0xc07681c  jal         func_1DA070
label_3c8660:
    if (ctx->pc == 0x3C8660u) {
        ctx->pc = 0x3C8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C865Cu;
        // 0x3c8660: 0x268600a0  addiu       $a2, $s4, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8664u;
        goto label_3c8664;
    }
    ctx->pc = 0x3C865Cu;
    SET_GPR_U32(ctx, 31, 0x3C8664u);
    ctx->pc = 0x3C8660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C865Cu;
    // 0x3c8660: 0x268600a0  addiu       $a2, $s4, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3C865Cu, 0x3C8664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8664u;
label_3c8664:
    // 0x3c8664: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x3c8664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c8668:
    // 0x3c8668: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3c8668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3c866c:
    // 0x3c866c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c866cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8670:
    // 0x3c8670: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c8670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c8674:
    // 0x3c8674: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3c8674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3c8678:
    // 0x3c8678: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x3c8678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_3c867c:
    // 0x3c867c: 0x8e8605a0  lw          $a2, 0x5A0($s4)
    ctx->pc = 0x3c867cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1440)));
label_3c8680:
    // 0x3c8680: 0xc0c08b4  jal         func_3022D0
label_3c8684:
    if (ctx->pc == 0x3C8684u) {
        ctx->pc = 0x3C8684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8680u;
        // 0x3c8684: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8688u;
        goto label_3c8688;
    }
    ctx->pc = 0x3C8680u;
    SET_GPR_U32(ctx, 31, 0x3C8688u);
    ctx->pc = 0x3C8684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8680u;
    // 0x3c8684: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3C8680u, 0x3C8688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8688u;
label_3c8688:
    // 0x3c8688: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3c868c:
    if (ctx->pc == 0x3C868Cu) {
        ctx->pc = 0x3C868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8688u;
        // 0x3c868c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8690u;
        goto label_3c8690;
    }
    ctx->pc = 0x3C8688u;
    {
        const bool branch_taken_0x3c8688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8688u;
        // 0x3c868c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8688) {
            ctx->pc = 0x3C8698u;
            goto label_3c8698;
        }
    }
    ctx->pc = 0x3C8690u;
label_3c8690:
    // 0x3c8690: 0xc0c0830  jal         func_3020C0
label_3c8694:
    if (ctx->pc == 0x3C8694u) {
        ctx->pc = 0x3C8694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8690u;
        // 0x3c8694: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8698u;
        goto label_3c8698;
    }
    ctx->pc = 0x3C8690u;
    SET_GPR_U32(ctx, 31, 0x3C8698u);
    ctx->pc = 0x3C8694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8690u;
    // 0x3c8694: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C8690u, 0x3C8698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8698u;
label_3c8698:
    // 0x3c8698: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c8698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c869c:
    // 0x3c869c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3c869cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
label_3c86a0:
    // 0x3c86a0: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x3c86a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3c86a4:
    // 0x3c86a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c86a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c86a8:
    // 0x3c86a8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3c86a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3c86ac:
    // 0x3c86ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c86acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c86b0:
    // 0x3c86b0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c86b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c86b4:
    // 0x3c86b4: 0x7fa900a0  sq          $t1, 0xA0($sp)
    ctx->pc = 0x3c86b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 9));
label_3c86b8:
    // 0x3c86b8: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3c86b8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 1), 23600)));
label_3c86bc:
    // 0x3c86bc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c86bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c86c0:
    // 0x3c86c0: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x3c86c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
label_3c86c4:
    // 0x3c86c4: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3c86c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23616)));
label_3c86c8:
    // 0x3c86c8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c86c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c86cc:
    // 0x3c86cc: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3c86ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_3c86d0:
    // 0x3c86d0: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3c86d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23632)));
label_3c86d4:
    // 0x3c86d4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3c86d4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_3c86d8:
    // 0x3c86d8: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x3c86d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_3c86dc:
    // 0x3c86dc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3c86dcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_3c86e0:
    // 0x3c86e0: 0x928605a8  lbu         $a2, 0x5A8($s4)
    ctx->pc = 0x3c86e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1448)));
label_3c86e4:
    // 0x3c86e4: 0xc68c05a4  lwc1        $f12, 0x5A4($s4)
    ctx->pc = 0x3c86e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c86e8:
    // 0x3c86e8: 0xc0c0900  jal         func_302400
label_3c86ec:
    if (ctx->pc == 0x3C86ECu) {
        ctx->pc = 0x3C86ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86E8u;
        // 0x3c86ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C86F0u;
        goto label_3c86f0;
    }
    ctx->pc = 0x3C86E8u;
    SET_GPR_U32(ctx, 31, 0x3C86F0u);
    ctx->pc = 0x3C86ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C86E8u;
    // 0x3c86ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3C86E8u, 0x3C86F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C86F0u;
label_3c86f0:
    // 0x3c86f0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3c86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3c86f4:
    // 0x3c86f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c86f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c86f8:
    // 0x3c86f8: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x3c86f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_3c86fc:
    // 0x3c86fc: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x3c86fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_3c8700:
    // 0x3c8700: 0x26860080  addiu       $a2, $s4, 0x80
    ctx->pc = 0x3c8700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_3c8704:
    // 0x3c8704: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x3c8704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3c8708:
    // 0x3c8708: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x3c8708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3c870c:
    // 0x3c870c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3c870cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8710:
    // 0x3c8710: 0xc0c0980  jal         func_302600
label_3c8714:
    if (ctx->pc == 0x3C8714u) {
        ctx->pc = 0x3C8714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8710u;
        // 0x3c8714: 0x27aa00ec  addiu       $t2, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8718u;
        goto label_3c8718;
    }
    ctx->pc = 0x3C8710u;
    SET_GPR_U32(ctx, 31, 0x3C8718u);
    ctx->pc = 0x3C8714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8710u;
    // 0x3c8714: 0x27aa00ec  addiu       $t2, $sp, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3C8710u, 0x3C8718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8718u;
label_3c8718:
    // 0x3c8718: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3c871c:
    if (ctx->pc == 0x3C871Cu) {
        ctx->pc = 0x3C871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8718u;
        // 0x3c871c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8720u;
        goto label_3c8720;
    }
    ctx->pc = 0x3C8718u;
    {
        const bool branch_taken_0x3c8718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8718u;
        // 0x3c871c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8718) {
            ctx->pc = 0x3C8730u;
            goto label_3c8730;
        }
    }
    ctx->pc = 0x3C8720u;
label_3c8720:
    // 0x3c8720: 0xc0c0830  jal         func_3020C0
label_3c8724:
    if (ctx->pc == 0x3C8724u) {
        ctx->pc = 0x3C8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8720u;
        // 0x3c8724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8728u;
        goto label_3c8728;
    }
    ctx->pc = 0x3C8720u;
    SET_GPR_U32(ctx, 31, 0x3C8728u);
    ctx->pc = 0x3C8724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8720u;
    // 0x3c8724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C8720u, 0x3C8728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8728u;
label_3c8728:
    // 0x3c8728: 0x10000161  b           . + 4 + (0x161 << 2)
label_3c872c:
    if (ctx->pc == 0x3C872Cu) {
        ctx->pc = 0x3C8730u;
        goto label_3c8730;
    }
    ctx->pc = 0x3C8728u;
    {
        const bool branch_taken_0x3c8728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8728) {
            ctx->pc = 0x3C8CB0u;
            goto label_3c8cb0;
        }
    }
    ctx->pc = 0x3C8730u;
label_3c8730:
    // 0x3c8730: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x3c8730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
label_3c8734:
    // 0x3c8734: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3c8738:
    if (ctx->pc == 0x3C8738u) {
        ctx->pc = 0x3C8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8734u;
        // 0x3c8738: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C873Cu;
        goto label_3c873c;
    }
    ctx->pc = 0x3C8734u;
    {
        const bool branch_taken_0x3c8734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8734u;
        // 0x3c8738: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8734) {
            ctx->pc = 0x3C8748u;
            goto label_3c8748;
        }
    }
    ctx->pc = 0x3C873Cu;
label_3c873c:
    // 0x3c873c: 0x10000022  b           . + 4 + (0x22 << 2)
label_3c8740:
    if (ctx->pc == 0x3C8740u) {
        ctx->pc = 0x3C8744u;
        goto label_3c8744;
    }
    ctx->pc = 0x3C873Cu;
    {
        const bool branch_taken_0x3c873c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c873c) {
            ctx->pc = 0x3C87C8u;
            goto label_3c87c8;
        }
    }
    ctx->pc = 0x3C8744u;
label_3c8744:
    // 0x3c8744: 0x0  nop
    ctx->pc = 0x3c8744u;
    // NOP
label_3c8748:
    // 0x3c8748: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x3c8748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3c874c:
    // 0x3c874c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3c874cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_3c8750:
    // 0x3c8750: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c8750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3c8754:
    // 0x3c8754: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c8754u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3c8758:
    // 0x3c8758: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x3c8758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
label_3c875c:
    // 0x3c875c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_3c8760:
    if (ctx->pc == 0x3C8760u) {
        ctx->pc = 0x3C8764u;
        goto label_3c8764;
    }
    ctx->pc = 0x3C875Cu;
    {
        const bool branch_taken_0x3c875c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c875c) {
            ctx->pc = 0x3C8798u;
            goto label_3c8798;
        }
    }
    ctx->pc = 0x3C8764u;
label_3c8764:
    // 0x3c8764: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x3c8764u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3c8768:
    // 0x3c8768: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3c8768u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_3c876c:
    // 0x3c876c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_3c8770:
    if (ctx->pc == 0x3C8770u) {
        ctx->pc = 0x3C8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C876Cu;
        // 0x3c8770: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8774u;
        goto label_3c8774;
    }
    ctx->pc = 0x3C876Cu;
    {
        const bool branch_taken_0x3c876c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C876Cu;
        // 0x3c8770: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c876c) {
            ctx->pc = 0x3C87C0u;
            goto label_3c87c0;
        }
    }
    ctx->pc = 0x3C8774u;
label_3c8774:
    // 0x3c8774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c8774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8778:
    // 0x3c8778: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3c8778u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3c877c:
    // 0x3c877c: 0x0  nop
    ctx->pc = 0x3c877cu;
    // NOP
label_3c8780:
    // 0x3c8780: 0x0  nop
    ctx->pc = 0x3c8780u;
    // NOP
label_3c8784:
    // 0x3c8784: 0x2010  mfhi        $a0
    ctx->pc = 0x3c8784u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3c8788:
    // 0x3c8788: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c8788u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3c878c:
    // 0x3c878c: 0x1000000c  b           . + 4 + (0xC << 2)
label_3c8790:
    if (ctx->pc == 0x3C8790u) {
        ctx->pc = 0x3C8790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C878Cu;
        // 0x3c8790: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8794u;
        goto label_3c8794;
    }
    ctx->pc = 0x3C878Cu;
    {
        const bool branch_taken_0x3c878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C878Cu;
        // 0x3c8790: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c878c) {
            ctx->pc = 0x3C87C0u;
            goto label_3c87c0;
        }
    }
    ctx->pc = 0x3C8794u;
label_3c8794:
    // 0x3c8794: 0x0  nop
    ctx->pc = 0x3c8794u;
    // NOP
label_3c8798:
    // 0x3c8798: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x3c8798u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3c879c:
    // 0x3c879c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3c879cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3c87a0:
    // 0x3c87a0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3c87a4:
    if (ctx->pc == 0x3C87A4u) {
        ctx->pc = 0x3C87A8u;
        goto label_3c87a8;
    }
    ctx->pc = 0x3C87A0u;
    {
        const bool branch_taken_0x3c87a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c87a0) {
            ctx->pc = 0x3C87C0u;
            goto label_3c87c0;
        }
    }
    ctx->pc = 0x3C87A8u;
label_3c87a8:
    // 0x3c87a8: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c87a8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3c87ac:
    // 0x3c87ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c87acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c87b0:
    // 0x3c87b0: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x3c87b0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
label_3c87b4:
    // 0x3c87b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c87b8:
    if (ctx->pc == 0x3C87B8u) {
        ctx->pc = 0x3C87B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87B4u;
        // 0x3c87b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C87BCu;
        goto label_3c87bc;
    }
    ctx->pc = 0x3C87B4u;
    {
        const bool branch_taken_0x3c87b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C87B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87B4u;
        // 0x3c87b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c87b4) {
            ctx->pc = 0x3C87C8u;
            goto label_3c87c8;
        }
    }
    ctx->pc = 0x3C87BCu;
label_3c87bc:
    // 0x3c87bc: 0x0  nop
    ctx->pc = 0x3c87bcu;
    // NOP
label_3c87c0:
    // 0x3c87c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c87c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c87c4:
    // 0x3c87c4: 0x0  nop
    ctx->pc = 0x3c87c4u;
    // NOP
label_3c87c8:
    // 0x3c87c8: 0x14600139  bnez        $v1, . + 4 + (0x139 << 2)
label_3c87cc:
    if (ctx->pc == 0x3C87CCu) {
        ctx->pc = 0x3C87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87C8u;
        // 0x3c87cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C87D0u;
        goto label_3c87d0;
    }
    ctx->pc = 0x3C87C8u;
    {
        const bool branch_taken_0x3c87c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87C8u;
        // 0x3c87cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c87c8) {
            ctx->pc = 0x3C8CB0u;
            goto label_3c8cb0;
        }
    }
    ctx->pc = 0x3C87D0u;
label_3c87d0:
    // 0x3c87d0: 0xc0c0830  jal         func_3020C0
label_3c87d4:
    if (ctx->pc == 0x3C87D4u) {
        ctx->pc = 0x3C87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87D0u;
        // 0x3c87d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C87D8u;
        goto label_3c87d8;
    }
    ctx->pc = 0x3C87D0u;
    SET_GPR_U32(ctx, 31, 0x3C87D8u);
    ctx->pc = 0x3C87D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C87D0u;
    // 0x3c87d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C87D0u, 0x3C87D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C87D8u;
label_3c87d8:
    // 0x3c87d8: 0x10000135  b           . + 4 + (0x135 << 2)
label_3c87dc:
    if (ctx->pc == 0x3C87DCu) {
        ctx->pc = 0x3C87E0u;
        goto label_3c87e0;
    }
    ctx->pc = 0x3C87D8u;
    {
        const bool branch_taken_0x3c87d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c87d8) {
            ctx->pc = 0x3C8CB0u;
            goto label_3c8cb0;
        }
    }
    ctx->pc = 0x3C87E0u;
label_3c87e0:
    // 0x3c87e0: 0x8683052a  lh          $v1, 0x52A($s4)
    ctx->pc = 0x3c87e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1322)));
label_3c87e4:
    // 0x3c87e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3c87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3c87e8:
    // 0x3c87e8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c87e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c87ec:
    // 0x3c87ec: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3c87ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3c87f0:
    // 0x3c87f0: 0xa6830512  sh          $v1, 0x512($s4)
    ctx->pc = 0x3c87f0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 3));
label_3c87f4:
    // 0x3c87f4: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x3c87f4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
label_3c87f8:
    // 0x3c87f8: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x3c87f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
label_3c87fc:
    // 0x3c87fc: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x3c87fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
label_3c8800:
    // 0x3c8800: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x3c8800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
label_3c8804:
    // 0x3c8804: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c8804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c8808:
    // 0x3c8808: 0xa2830521  sb          $v1, 0x521($s4)
    ctx->pc = 0x3c8808u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
label_3c880c:
    // 0x3c880c: 0xa68005ae  sh          $zero, 0x5AE($s4)
    ctx->pc = 0x3c880cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1454), (uint16_t)GPR_U32(ctx, 0));
label_3c8810:
    // 0x3c8810: 0x78235c70  lq          $v1, 0x5C70($at)
    ctx->pc = 0x3c8810u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23664)));
label_3c8814:
    // 0x3c8814: 0x7e830090  sq          $v1, 0x90($s4)
    ctx->pc = 0x3c8814u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 144), GPR_VEC(ctx, 3));
label_3c8818:
    // 0x3c8818: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3c8818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3c881c:
    // 0x3c881c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3c881cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3c8820:
    // 0x3c8820: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c8820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c8824:
    // 0x3c8824: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3c8824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3c8828:
    // 0x3c8828: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3c8828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3c882c:
    // 0x3c882c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3c882cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3c8830:
    // 0x3c8830: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3c8834:
    if (ctx->pc == 0x3C8834u) {
        ctx->pc = 0x3C8834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8830u;
        // 0x3c8834: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8838u;
        goto label_3c8838;
    }
    ctx->pc = 0x3C8830u;
    {
        const bool branch_taken_0x3c8830 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3C8834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8830u;
        // 0x3c8834: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8830) {
            ctx->pc = 0x3C8844u;
            goto label_3c8844;
        }
    }
    ctx->pc = 0x3C8838u;
label_3c8838:
    // 0x3c8838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c8838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c883c:
    // 0x3c883c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c8840:
    if (ctx->pc == 0x3C8840u) {
        ctx->pc = 0x3C8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C883Cu;
        // 0x3c8840: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8844u;
        goto label_3c8844;
    }
    ctx->pc = 0x3C883Cu;
    {
        const bool branch_taken_0x3c883c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C883Cu;
        // 0x3c8840: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c883c) {
            ctx->pc = 0x3C885Cu;
            goto label_3c885c;
        }
    }
    ctx->pc = 0x3C8844u;
label_3c8844:
    // 0x3c8844: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c8844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3c8848:
    // 0x3c8848: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c8848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c884c:
    // 0x3c884c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c884cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8850:
    // 0x3c8850: 0x0  nop
    ctx->pc = 0x3c8850u;
    // NOP
label_3c8854:
    // 0x3c8854: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3c8854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3c8858:
    // 0x3c8858: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3c8858u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3c885c:
    // 0x3c885c: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x3c885cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
label_3c8860:
    // 0x3c8860: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c8860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3c8864:
    // 0x3c8864: 0x34640008  ori         $a0, $v1, 0x8
    ctx->pc = 0x3c8864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3c8868:
    // 0x3c8868: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3c8868u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c886c:
    // 0x3c886c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3c886cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3c8870:
    // 0x3c8870: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c8870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c8874:
    // 0x3c8874: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3c8874u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3c8878:
    // 0x3c8878: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3c8878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3c887c:
    // 0x3c887c: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3c887cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3c8880:
    // 0x3c8880: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3c8880u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3c8884:
    // 0x3c8884: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c8884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c8888:
    // 0x3c8888: 0xc6800090  lwc1        $f0, 0x90($s4)
    ctx->pc = 0x3c8888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c888c:
    // 0x3c888c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c888cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3c8890:
    // 0x3c8890: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c8890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c8894:
    // 0x3c8894: 0xe6800090  swc1        $f0, 0x90($s4)
    ctx->pc = 0x3c8894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 144), bits); }
label_3c8898:
    // 0x3c8898: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3c8898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3c889c:
    // 0x3c889c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3c889cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3c88a0:
    // 0x3c88a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c88a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c88a4:
    // 0x3c88a4: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3c88a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3c88a8:
    // 0x3c88a8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3c88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3c88ac:
    // 0x3c88ac: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3c88acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3c88b0:
    // 0x3c88b0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3c88b4:
    if (ctx->pc == 0x3C88B4u) {
        ctx->pc = 0x3C88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88B0u;
        // 0x3c88b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C88B8u;
        goto label_3c88b8;
    }
    ctx->pc = 0x3C88B0u;
    {
        const bool branch_taken_0x3c88b0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3C88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88B0u;
        // 0x3c88b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c88b0) {
            ctx->pc = 0x3C88C4u;
            goto label_3c88c4;
        }
    }
    ctx->pc = 0x3C88B8u;
label_3c88b8:
    // 0x3c88b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c88b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c88bc:
    // 0x3c88bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c88c0:
    if (ctx->pc == 0x3C88C0u) {
        ctx->pc = 0x3C88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88BCu;
        // 0x3c88c0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C88C4u;
        goto label_3c88c4;
    }
    ctx->pc = 0x3C88BCu;
    {
        const bool branch_taken_0x3c88bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88BCu;
        // 0x3c88c0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c88bc) {
            ctx->pc = 0x3C88DCu;
            goto label_3c88dc;
        }
    }
    ctx->pc = 0x3C88C4u;
label_3c88c4:
    // 0x3c88c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c88c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3c88c8:
    // 0x3c88c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c88c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c88cc:
    // 0x3c88cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c88ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c88d0:
    // 0x3c88d0: 0x0  nop
    ctx->pc = 0x3c88d0u;
    // NOP
label_3c88d4:
    // 0x3c88d4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3c88d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3c88d8:
    // 0x3c88d8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3c88d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3c88dc:
    // 0x3c88dc: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x3c88dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
label_3c88e0:
    // 0x3c88e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c88e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3c88e4:
    // 0x3c88e4: 0x34640008  ori         $a0, $v1, 0x8
    ctx->pc = 0x3c88e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3c88e8:
    // 0x3c88e8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3c88e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c88ec:
    // 0x3c88ec: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3c88ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3c88f0:
    // 0x3c88f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c88f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c88f4:
    // 0x3c88f4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3c88f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3c88f8:
    // 0x3c88f8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3c88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3c88fc:
    // 0x3c88fc: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3c88fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3c8900:
    // 0x3c8900: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3c8900u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3c8904:
    // 0x3c8904: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c8904u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c8908:
    // 0x3c8908: 0xc6800094  lwc1        $f0, 0x94($s4)
    ctx->pc = 0x3c8908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c890c:
    // 0x3c890c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c890cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3c8910:
    // 0x3c8910: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c8910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c8914:
    // 0x3c8914: 0xe6800094  swc1        $f0, 0x94($s4)
    ctx->pc = 0x3c8914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 148), bits); }
label_3c8918:
    // 0x3c8918: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3c8918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3c891c:
    // 0x3c891c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3c891cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3c8920:
    // 0x3c8920: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c8920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c8924:
    // 0x3c8924: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3c8924u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3c8928:
    // 0x3c8928: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3c8928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3c892c:
    // 0x3c892c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3c892cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3c8930:
    // 0x3c8930: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3c8934:
    if (ctx->pc == 0x3C8934u) {
        ctx->pc = 0x3C8934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8930u;
        // 0x3c8934: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8938u;
        goto label_3c8938;
    }
    ctx->pc = 0x3C8930u;
    {
        const bool branch_taken_0x3c8930 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3C8934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8930u;
        // 0x3c8934: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8930) {
            ctx->pc = 0x3C8944u;
            goto label_3c8944;
        }
    }
    ctx->pc = 0x3C8938u;
label_3c8938:
    // 0x3c8938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c8938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c893c:
    // 0x3c893c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c8940:
    if (ctx->pc == 0x3C8940u) {
        ctx->pc = 0x3C8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C893Cu;
        // 0x3c8940: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8944u;
        goto label_3c8944;
    }
    ctx->pc = 0x3C893Cu;
    {
        const bool branch_taken_0x3c893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C893Cu;
        // 0x3c8940: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c893c) {
            ctx->pc = 0x3C895Cu;
            goto label_3c895c;
        }
    }
    ctx->pc = 0x3C8944u;
label_3c8944:
    // 0x3c8944: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c8944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3c8948:
    // 0x3c8948: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c8948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c894c:
    // 0x3c894c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c894cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8950:
    // 0x3c8950: 0x0  nop
    ctx->pc = 0x3c8950u;
    // NOP
label_3c8954:
    // 0x3c8954: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3c8954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3c8958:
    // 0x3c8958: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3c8958u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3c895c:
    // 0x3c895c: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x3c895cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
label_3c8960:
    // 0x3c8960: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3c8960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3c8964:
    // 0x3c8964: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x3c8964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3c8968:
    // 0x3c8968: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3c8968u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c896c:
    // 0x3c896c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3c896cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3c8970:
    // 0x3c8970: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c8970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c8974:
    // 0x3c8974: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x3c8974u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3c8978:
    // 0x3c8978: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3c8978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_3c897c:
    // 0x3c897c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c897cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c8980:
    // 0x3c8980: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3c8980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c8984:
    // 0x3c8984: 0xc6800098  lwc1        $f0, 0x98($s4)
    ctx->pc = 0x3c8984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c8988:
    // 0x3c8988: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3c8988u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3c898c:
    // 0x3c898c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c898cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3c8990:
    // 0x3c8990: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c8990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c8994:
    // 0x3c8994: 0xe6800098  swc1        $f0, 0x98($s4)
    ctx->pc = 0x3c8994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 152), bits); }
label_3c8998:
    // 0x3c8998: 0xc0766dc  jal         func_1D9B70
label_3c899c:
    if (ctx->pc == 0x3C899Cu) {
        ctx->pc = 0x3C899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8998u;
        // 0x3c899c: 0xae83009c  sw          $v1, 0x9C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C89A0u;
        goto label_3c89a0;
    }
    ctx->pc = 0x3C8998u;
    SET_GPR_U32(ctx, 31, 0x3C89A0u);
    ctx->pc = 0x3C899Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8998u;
    // 0x3c899c: 0xae83009c  sw          $v1, 0x9C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3C8998u, 0x3C89A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C89A0u;
label_3c89a0:
    // 0x3c89a0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3c89a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3c89a4:
    // 0x3c89a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3c89a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3c89a8:
    // 0x3c89a8: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3c89a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3c89ac:
    // 0x3c89ac: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3c89acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3c89b0:
    // 0x3c89b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c89b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c89b4:
    // 0x3c89b4: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3c89b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3c89b8:
    // 0x3c89b8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3c89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3c89bc:
    // 0x3c89bc: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3c89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3c89c0:
    // 0x3c89c0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3c89c4:
    if (ctx->pc == 0x3C89C4u) {
        ctx->pc = 0x3C89C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89C0u;
        // 0x3c89c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C89C8u;
        goto label_3c89c8;
    }
    ctx->pc = 0x3C89C0u;
    {
        const bool branch_taken_0x3c89c0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3C89C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89C0u;
        // 0x3c89c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c89c0) {
            ctx->pc = 0x3C89D4u;
            goto label_3c89d4;
        }
    }
    ctx->pc = 0x3C89C8u;
label_3c89c8:
    // 0x3c89c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c89c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c89cc:
    // 0x3c89cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c89d0:
    if (ctx->pc == 0x3C89D0u) {
        ctx->pc = 0x3C89D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89CCu;
        // 0x3c89d0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C89D4u;
        goto label_3c89d4;
    }
    ctx->pc = 0x3C89CCu;
    {
        const bool branch_taken_0x3c89cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C89D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89CCu;
        // 0x3c89d0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c89cc) {
            ctx->pc = 0x3C89ECu;
            goto label_3c89ec;
        }
    }
    ctx->pc = 0x3C89D4u;
label_3c89d4:
    // 0x3c89d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c89d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3c89d8:
    // 0x3c89d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c89d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c89dc:
    // 0x3c89dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c89dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c89e0:
    // 0x3c89e0: 0x0  nop
    ctx->pc = 0x3c89e0u;
    // NOP
label_3c89e4:
    // 0x3c89e4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3c89e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3c89e8:
    // 0x3c89e8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3c89e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3c89ec:
    // 0x3c89ec: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x3c89ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
label_3c89f0:
    // 0x3c89f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3c89f4:
    // 0x3c89f4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3c89f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3c89f8:
    // 0x3c89f8: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3c89f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_3c89fc:
    // 0x3c89fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c89fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c8a00:
    // 0x3c8a00: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x3c8a00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
label_3c8a04:
    // 0x3c8a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c8a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8a08:
    // 0x3c8a08: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c8a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c8a0c:
    // 0x3c8a0c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c8a0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3c8a10:
    // 0x3c8a10: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3c8a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_3c8a14:
    // 0x3c8a14: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x3c8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_3c8a18:
    // 0x3c8a18: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x3c8a18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3c8a1c:
    // 0x3c8a1c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3c8a1cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c8a20:
    // 0x3c8a20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c8a20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8a24:
    // 0x3c8a24: 0x0  nop
    ctx->pc = 0x3c8a24u;
    // NOP
label_3c8a28:
    // 0x3c8a28: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c8a28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3c8a2c:
    // 0x3c8a2c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3c8a2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c8a30:
    // 0x3c8a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c8a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8a34:
    // 0x3c8a34: 0xc076690  jal         func_1D9A40
label_3c8a38:
    if (ctx->pc == 0x3C8A38u) {
        ctx->pc = 0x3C8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8A34u;
        // 0x3c8a38: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8A3Cu;
        goto label_3c8a3c;
    }
    ctx->pc = 0x3C8A34u;
    SET_GPR_U32(ctx, 31, 0x3C8A3Cu);
    ctx->pc = 0x3C8A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8A34u;
    // 0x3c8a38: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3C8A34u, 0x3C8A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8A3Cu;
label_3c8a3c:
    // 0x3c8a3c: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c8a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_3c8a40:
    // 0x3c8a40: 0x26830090  addiu       $v1, $s4, 0x90
    ctx->pc = 0x3c8a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_3c8a44:
    // 0x3c8a44: 0xae870578  sw          $a3, 0x578($s4)
    ctx->pc = 0x3c8a44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1400), GPR_U32(ctx, 7));
label_3c8a48:
    // 0x3c8a48: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x3c8a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_3c8a4c:
    // 0x3c8a4c: 0xae83057c  sw          $v1, 0x57C($s4)
    ctx->pc = 0x3c8a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1404), GPR_U32(ctx, 3));
label_3c8a50:
    // 0x3c8a50: 0xae820560  sw          $v0, 0x560($s4)
    ctx->pc = 0x3c8a50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1376), GPR_U32(ctx, 2));
label_3c8a54:
    // 0x3c8a54: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3c8a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_3c8a58:
    // 0x3c8a58: 0xae830564  sw          $v1, 0x564($s4)
    ctx->pc = 0x3c8a58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1380), GPR_U32(ctx, 3));
label_3c8a5c:
    // 0x3c8a5c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3c8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3c8a60:
    // 0x3c8a60: 0xae820568  sw          $v0, 0x568($s4)
    ctx->pc = 0x3c8a60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1384), GPR_U32(ctx, 2));
label_3c8a64:
    // 0x3c8a64: 0x26830522  addiu       $v1, $s4, 0x522
    ctx->pc = 0x3c8a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1314));
label_3c8a68:
    // 0x3c8a68: 0xae830580  sw          $v1, 0x580($s4)
    ctx->pc = 0x3c8a68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1408), GPR_U32(ctx, 3));
label_3c8a6c:
    // 0x3c8a6c: 0x268205ae  addiu       $v0, $s4, 0x5AE
    ctx->pc = 0x3c8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1454));
label_3c8a70:
    // 0x3c8a70: 0xae820584  sw          $v0, 0x584($s4)
    ctx->pc = 0x3c8a70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1412), GPR_U32(ctx, 2));
label_3c8a74:
    // 0x3c8a74: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3c8a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3c8a78:
    // 0x3c8a78: 0xa683056c  sh          $v1, 0x56C($s4)
    ctx->pc = 0x3c8a78u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1388), (uint16_t)GPR_U32(ctx, 3));
label_3c8a7c:
    // 0x3c8a7c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3c8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3c8a80:
    // 0x3c8a80: 0xa682056e  sh          $v0, 0x56E($s4)
    ctx->pc = 0x3c8a80u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1390), (uint16_t)GPR_U32(ctx, 2));
label_3c8a84:
    // 0x3c8a84: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x3c8a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3c8a88:
    // 0x3c8a88: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x3c8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_3c8a8c:
    // 0x3c8a8c: 0xa6830570  sh          $v1, 0x570($s4)
    ctx->pc = 0x3c8a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1392), (uint16_t)GPR_U32(ctx, 3));
label_3c8a90:
    // 0x3c8a90: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x3c8a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
label_3c8a94:
    // 0x3c8a94: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_3c8a98:
    if (ctx->pc == 0x3C8A98u) {
        ctx->pc = 0x3C8A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8A94u;
        // 0x3c8a98: 0xae820574  sw          $v0, 0x574($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8A9Cu;
        goto label_3c8a9c;
    }
    ctx->pc = 0x3C8A94u;
    {
        const bool branch_taken_0x3c8a94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8A94u;
        // 0x3c8a98: 0xae820574  sw          $v0, 0x574($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8a94) {
            ctx->pc = 0x3C8AD0u;
            goto label_3c8ad0;
        }
    }
    ctx->pc = 0x3C8A9Cu;
label_3c8a9c:
    // 0x3c8a9c: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3c8a9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
label_3c8aa0:
    // 0x3c8aa0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c8aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_3c8aa4:
    // 0x3c8aa4: 0x3c022500  lui         $v0, 0x2500
    ctx->pc = 0x3c8aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9472 << 16));
label_3c8aa8:
    // 0x3c8aa8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c8aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_3c8aac:
    // 0x3c8aac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c8aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8ab0:
    // 0x3c8ab0: 0x34455102  ori         $a1, $v0, 0x5102
    ctx->pc = 0x3c8ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20738);
label_3c8ab4:
    // 0x3c8ab4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c8ab4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8ab8:
    // 0x3c8ab8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c8ab8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8abc:
    // 0x3c8abc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c8abcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8ac0:
    // 0x3c8ac0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c8ac0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8ac4:
    // 0x3c8ac4: 0xc05e9e8  jal         func_17A7A0
label_3c8ac8:
    if (ctx->pc == 0x3C8AC8u) {
        ctx->pc = 0x3C8AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AC4u;
        // 0x3c8ac8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8ACCu;
        goto label_3c8acc;
    }
    ctx->pc = 0x3C8AC4u;
    SET_GPR_U32(ctx, 31, 0x3C8ACCu);
    ctx->pc = 0x3C8AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8AC4u;
    // 0x3c8ac8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C8AC4u, 0x3C8ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8ACCu;
label_3c8acc:
    // 0x3c8acc: 0x0  nop
    ctx->pc = 0x3c8accu;
    // NOP
label_3c8ad0:
    // 0x3c8ad0: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x3c8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_3c8ad4:
    // 0x3c8ad4: 0x92632901  lbu         $v1, 0x2901($s3)
    ctx->pc = 0x3c8ad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10497)));
label_3c8ad8:
    // 0x3c8ad8: 0x26840550  addiu       $a0, $s4, 0x550
    ctx->pc = 0x3c8ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1360));
label_3c8adc:
    // 0x3c8adc: 0x26662910  addiu       $a2, $s3, 0x2910
    ctx->pc = 0x3c8adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 10512));
label_3c8ae0:
    // 0x3c8ae0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3c8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_3c8ae4:
    // 0x3c8ae4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3c8ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_3c8ae8:
    // 0x3c8ae8: 0xc07679c  jal         func_1D9E70
label_3c8aec:
    if (ctx->pc == 0x3C8AECu) {
        ctx->pc = 0x3C8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AE8u;
        // 0x3c8aec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8AF0u;
        goto label_3c8af0;
    }
    ctx->pc = 0x3C8AE8u;
    SET_GPR_U32(ctx, 31, 0x3C8AF0u);
    ctx->pc = 0x3C8AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8AE8u;
    // 0x3c8aec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3C8AE8u, 0x3C8AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8AF0u;
label_3c8af0:
    // 0x3c8af0: 0xc097758  jal         func_25DD60
label_3c8af4:
    if (ctx->pc == 0x3C8AF4u) {
        ctx->pc = 0x3C8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AF0u;
        // 0x3c8af4: 0x26840550  addiu       $a0, $s4, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8AF8u;
        goto label_3c8af8;
    }
    ctx->pc = 0x3C8AF0u;
    SET_GPR_U32(ctx, 31, 0x3C8AF8u);
    ctx->pc = 0x3C8AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8AF0u;
    // 0x3c8af4: 0x26840550  addiu       $a0, $s4, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DD60u, 0x3C8AF0u, 0x3C8AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8AF8u;
label_3c8af8:
    // 0x3c8af8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c8af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c8afc:
    // 0x3c8afc: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_3c8b00:
    if (ctx->pc == 0x3C8B00u) {
        ctx->pc = 0x3C8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AFCu;
        // 0x3c8b00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8B04u;
        goto label_3c8b04;
    }
    ctx->pc = 0x3C8AFCu;
    {
        const bool branch_taken_0x3c8afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AFCu;
        // 0x3c8b00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8afc) {
            ctx->pc = 0x3C8B38u;
            goto label_3c8b38;
        }
    }
    ctx->pc = 0x3C8B04u;
label_3c8b04:
    // 0x3c8b04: 0x10430022  beq         $v0, $v1, . + 4 + (0x22 << 2)
label_3c8b08:
    if (ctx->pc == 0x3C8B08u) {
        ctx->pc = 0x3C8B0Cu;
        goto label_3c8b0c;
    }
    ctx->pc = 0x3C8B04u;
    {
        const bool branch_taken_0x3c8b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c8b04) {
            ctx->pc = 0x3C8B90u;
            goto label_3c8b90;
        }
    }
    ctx->pc = 0x3C8B0Cu;
label_3c8b0c:
    // 0x3c8b0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3c8b10:
    if (ctx->pc == 0x3C8B10u) {
        ctx->pc = 0x3C8B14u;
        goto label_3c8b14;
    }
    ctx->pc = 0x3C8B0Cu;
    {
        const bool branch_taken_0x3c8b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8b0c) {
            ctx->pc = 0x3C8B20u;
            goto label_3c8b20;
        }
    }
    ctx->pc = 0x3C8B14u;
label_3c8b14:
    // 0x3c8b14: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3c8b18:
    if (ctx->pc == 0x3C8B18u) {
        ctx->pc = 0x3C8B1Cu;
        goto label_3c8b1c;
    }
    ctx->pc = 0x3C8B14u;
    {
        const bool branch_taken_0x3c8b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8b14) {
            ctx->pc = 0x3C8B90u;
            goto label_3c8b90;
        }
    }
    ctx->pc = 0x3C8B1Cu;
label_3c8b1c:
    // 0x3c8b1c: 0x0  nop
    ctx->pc = 0x3c8b1cu;
    // NOP
label_3c8b20:
    // 0x3c8b20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c8b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c8b24:
    // 0x3c8b24: 0xc0c0830  jal         func_3020C0
label_3c8b28:
    if (ctx->pc == 0x3C8B28u) {
        ctx->pc = 0x3C8B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B24u;
        // 0x3c8b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8B2Cu;
        goto label_3c8b2c;
    }
    ctx->pc = 0x3C8B24u;
    SET_GPR_U32(ctx, 31, 0x3C8B2Cu);
    ctx->pc = 0x3C8B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8B24u;
    // 0x3c8b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C8B24u, 0x3C8B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8B2Cu;
label_3c8b2c:
    // 0x3c8b2c: 0x10000018  b           . + 4 + (0x18 << 2)
label_3c8b30:
    if (ctx->pc == 0x3C8B30u) {
        ctx->pc = 0x3C8B34u;
        goto label_3c8b34;
    }
    ctx->pc = 0x3C8B2Cu;
    {
        const bool branch_taken_0x3c8b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8b2c) {
            ctx->pc = 0x3C8B90u;
            goto label_3c8b90;
        }
    }
    ctx->pc = 0x3C8B34u;
label_3c8b34:
    // 0x3c8b34: 0x0  nop
    ctx->pc = 0x3c8b34u;
    // NOP
label_3c8b38:
    // 0x3c8b38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c8b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c8b3c:
    // 0x3c8b3c: 0xc0c0830  jal         func_3020C0
label_3c8b40:
    if (ctx->pc == 0x3C8B40u) {
        ctx->pc = 0x3C8B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B3Cu;
        // 0x3c8b40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8B44u;
        goto label_3c8b44;
    }
    ctx->pc = 0x3C8B3Cu;
    SET_GPR_U32(ctx, 31, 0x3C8B44u);
    ctx->pc = 0x3C8B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8B3Cu;
    // 0x3c8b40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C8B3Cu, 0x3C8B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8B44u;
label_3c8b44:
    // 0x3c8b44: 0x8e7904d4  lw          $t9, 0x4D4($s3)
    ctx->pc = 0x3c8b44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1236)));
label_3c8b48:
    // 0x3c8b48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c8b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c8b4c:
    // 0x3c8b4c: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x3c8b4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_3c8b50:
    // 0x3c8b50: 0x320f809  jalr        $t9
label_3c8b54:
    if (ctx->pc == 0x3C8B54u) {
        ctx->pc = 0x3C8B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B50u;
        // 0x3c8b54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8B58u;
        goto label_3c8b58;
    }
    ctx->pc = 0x3C8B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C8B58u);
        ctx->pc = 0x3C8B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B50u;
        // 0x3c8b54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8B50u, 0x3C8B58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C8B58u;
label_3c8b58:
    // 0x3c8b58: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3c8b58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
label_3c8b5c:
    // 0x3c8b5c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c8b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_3c8b60:
    // 0x3c8b60: 0x3c022600  lui         $v0, 0x2600
    ctx->pc = 0x3c8b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9728 << 16));
label_3c8b64:
    // 0x3c8b64: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c8b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_3c8b68:
    // 0x3c8b68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c8b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8b6c:
    // 0x3c8b6c: 0x34455102  ori         $a1, $v0, 0x5102
    ctx->pc = 0x3c8b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20738);
label_3c8b70:
    // 0x3c8b70: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c8b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_3c8b74:
    // 0x3c8b74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c8b74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8b78:
    // 0x3c8b78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c8b78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8b7c:
    // 0x3c8b7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c8b7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8b80:
    // 0x3c8b80: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c8b80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8b84:
    // 0x3c8b84: 0xc05e9e8  jal         func_17A7A0
label_3c8b88:
    if (ctx->pc == 0x3C8B88u) {
        ctx->pc = 0x3C8B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B84u;
        // 0x3c8b88: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8B8Cu;
        goto label_3c8b8c;
    }
    ctx->pc = 0x3C8B84u;
    SET_GPR_U32(ctx, 31, 0x3C8B8Cu);
    ctx->pc = 0x3C8B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8B84u;
    // 0x3c8b88: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C8B84u, 0x3C8B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8B8Cu;
label_3c8b8c:
    // 0x3c8b8c: 0x0  nop
    ctx->pc = 0x3c8b8cu;
    // NOP
label_3c8b90:
    // 0x3c8b90: 0x8e8605a0  lw          $a2, 0x5A0($s4)
    ctx->pc = 0x3c8b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1440)));
label_3c8b94:
    // 0x3c8b94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c8b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c8b98:
    // 0x3c8b98: 0xc0c08b4  jal         func_3022D0
label_3c8b9c:
    if (ctx->pc == 0x3C8B9Cu) {
        ctx->pc = 0x3C8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B98u;
        // 0x3c8b9c: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8BA0u;
        goto label_3c8ba0;
    }
    ctx->pc = 0x3C8B98u;
    SET_GPR_U32(ctx, 31, 0x3C8BA0u);
    ctx->pc = 0x3C8B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8B98u;
    // 0x3c8b9c: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3C8B98u, 0x3C8BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8BA0u;
label_3c8ba0:
    // 0x3c8ba0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3c8ba4:
    if (ctx->pc == 0x3C8BA4u) {
        ctx->pc = 0x3C8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8BA0u;
        // 0x3c8ba4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8BA8u;
        goto label_3c8ba8;
    }
    ctx->pc = 0x3C8BA0u;
    {
        const bool branch_taken_0x3c8ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8BA0u;
        // 0x3c8ba4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ba0) {
            ctx->pc = 0x3C8BB0u;
            goto label_3c8bb0;
        }
    }
    ctx->pc = 0x3C8BA8u;
label_3c8ba8:
    // 0x3c8ba8: 0xc0c0830  jal         func_3020C0
label_3c8bac:
    if (ctx->pc == 0x3C8BACu) {
        ctx->pc = 0x3C8BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8BA8u;
        // 0x3c8bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8BB0u;
        goto label_3c8bb0;
    }
    ctx->pc = 0x3C8BA8u;
    SET_GPR_U32(ctx, 31, 0x3C8BB0u);
    ctx->pc = 0x3C8BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8BA8u;
    // 0x3c8bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C8BA8u, 0x3C8BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8BB0u;
label_3c8bb0:
    // 0x3c8bb0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c8bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c8bb4:
    // 0x3c8bb4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3c8bb4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
label_3c8bb8:
    // 0x3c8bb8: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x3c8bb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3c8bbc:
    // 0x3c8bbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c8bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c8bc0:
    // 0x3c8bc0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3c8bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3c8bc4:
    // 0x3c8bc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c8bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8bc8:
    // 0x3c8bc8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c8bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c8bcc:
    // 0x3c8bcc: 0x7fa900a0  sq          $t1, 0xA0($sp)
    ctx->pc = 0x3c8bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 9));
label_3c8bd0:
    // 0x3c8bd0: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3c8bd0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 1), 23600)));
label_3c8bd4:
    // 0x3c8bd4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c8bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c8bd8:
    // 0x3c8bd8: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x3c8bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
label_3c8bdc:
    // 0x3c8bdc: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3c8bdcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23616)));
label_3c8be0:
    // 0x3c8be0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c8be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3c8be4:
    // 0x3c8be4: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3c8be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_3c8be8:
    // 0x3c8be8: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3c8be8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23632)));
label_3c8bec:
    // 0x3c8bec: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3c8becu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_3c8bf0:
    // 0x3c8bf0: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x3c8bf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_3c8bf4:
    // 0x3c8bf4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3c8bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_3c8bf8:
    // 0x3c8bf8: 0x928605a8  lbu         $a2, 0x5A8($s4)
    ctx->pc = 0x3c8bf8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1448)));
label_3c8bfc:
    // 0x3c8bfc: 0xc68c05a4  lwc1        $f12, 0x5A4($s4)
    ctx->pc = 0x3c8bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c8c00:
    // 0x3c8c00: 0xc0c0900  jal         func_302400
label_3c8c04:
    if (ctx->pc == 0x3C8C04u) {
        ctx->pc = 0x3C8C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C00u;
        // 0x3c8c04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8C08u;
        goto label_3c8c08;
    }
    ctx->pc = 0x3C8C00u;
    SET_GPR_U32(ctx, 31, 0x3C8C08u);
    ctx->pc = 0x3C8C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8C00u;
    // 0x3c8c04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3C8C00u, 0x3C8C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8C08u;
label_3c8c08:
    // 0x3c8c08: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x3c8c08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
label_3c8c0c:
    // 0x3c8c0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3c8c10:
    if (ctx->pc == 0x3C8C10u) {
        ctx->pc = 0x3C8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C0Cu;
        // 0x3c8c10: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8C14u;
        goto label_3c8c14;
    }
    ctx->pc = 0x3C8C0Cu;
    {
        const bool branch_taken_0x3c8c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C0Cu;
        // 0x3c8c10: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8c0c) {
            ctx->pc = 0x3C8C20u;
            goto label_3c8c20;
        }
    }
    ctx->pc = 0x3C8C14u;
label_3c8c14:
    // 0x3c8c14: 0x10000022  b           . + 4 + (0x22 << 2)
label_3c8c18:
    if (ctx->pc == 0x3C8C18u) {
        ctx->pc = 0x3C8C1Cu;
        goto label_3c8c1c;
    }
    ctx->pc = 0x3C8C14u;
    {
        const bool branch_taken_0x3c8c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8c14) {
            ctx->pc = 0x3C8CA0u;
            goto label_3c8ca0;
        }
    }
    ctx->pc = 0x3C8C1Cu;
label_3c8c1c:
    // 0x3c8c1c: 0x0  nop
    ctx->pc = 0x3c8c1cu;
    // NOP
label_3c8c20:
    // 0x3c8c20: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x3c8c20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3c8c24:
    // 0x3c8c24: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3c8c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_3c8c28:
    // 0x3c8c28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c8c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3c8c2c:
    // 0x3c8c2c: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c8c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3c8c30:
    // 0x3c8c30: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x3c8c30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
label_3c8c34:
    // 0x3c8c34: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_3c8c38:
    if (ctx->pc == 0x3C8C38u) {
        ctx->pc = 0x3C8C3Cu;
        goto label_3c8c3c;
    }
    ctx->pc = 0x3C8C34u;
    {
        const bool branch_taken_0x3c8c34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c8c34) {
            ctx->pc = 0x3C8C70u;
            goto label_3c8c70;
        }
    }
    ctx->pc = 0x3C8C3Cu;
label_3c8c3c:
    // 0x3c8c3c: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x3c8c3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3c8c40:
    // 0x3c8c40: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3c8c40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_3c8c44:
    // 0x3c8c44: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_3c8c48:
    if (ctx->pc == 0x3C8C48u) {
        ctx->pc = 0x3C8C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C44u;
        // 0x3c8c48: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8C4Cu;
        goto label_3c8c4c;
    }
    ctx->pc = 0x3C8C44u;
    {
        const bool branch_taken_0x3c8c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C44u;
        // 0x3c8c48: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8c44) {
            ctx->pc = 0x3C8C98u;
            goto label_3c8c98;
        }
    }
    ctx->pc = 0x3C8C4Cu;
label_3c8c4c:
    // 0x3c8c4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c8c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8c50:
    // 0x3c8c50: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3c8c50u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3c8c54:
    // 0x3c8c54: 0x0  nop
    ctx->pc = 0x3c8c54u;
    // NOP
label_3c8c58:
    // 0x3c8c58: 0x0  nop
    ctx->pc = 0x3c8c58u;
    // NOP
label_3c8c5c:
    // 0x3c8c5c: 0x2010  mfhi        $a0
    ctx->pc = 0x3c8c5cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3c8c60:
    // 0x3c8c60: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c8c60u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3c8c64:
    // 0x3c8c64: 0x1000000c  b           . + 4 + (0xC << 2)
label_3c8c68:
    if (ctx->pc == 0x3C8C68u) {
        ctx->pc = 0x3C8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C64u;
        // 0x3c8c68: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8C6Cu;
        goto label_3c8c6c;
    }
    ctx->pc = 0x3C8C64u;
    {
        const bool branch_taken_0x3c8c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C64u;
        // 0x3c8c68: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8c64) {
            ctx->pc = 0x3C8C98u;
            goto label_3c8c98;
        }
    }
    ctx->pc = 0x3C8C6Cu;
label_3c8c6c:
    // 0x3c8c6c: 0x0  nop
    ctx->pc = 0x3c8c6cu;
    // NOP
label_3c8c70:
    // 0x3c8c70: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x3c8c70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
label_3c8c74:
    // 0x3c8c74: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3c8c74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3c8c78:
    // 0x3c8c78: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3c8c7c:
    if (ctx->pc == 0x3C8C7Cu) {
        ctx->pc = 0x3C8C80u;
        goto label_3c8c80;
    }
    ctx->pc = 0x3C8C78u;
    {
        const bool branch_taken_0x3c8c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c8c78) {
            ctx->pc = 0x3C8C98u;
            goto label_3c8c98;
        }
    }
    ctx->pc = 0x3C8C80u;
label_3c8c80:
    // 0x3c8c80: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c8c80u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3c8c84:
    // 0x3c8c84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c8c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8c88:
    // 0x3c8c88: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x3c8c88u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
label_3c8c8c:
    // 0x3c8c8c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c8c90:
    if (ctx->pc == 0x3C8C90u) {
        ctx->pc = 0x3C8C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C8Cu;
        // 0x3c8c90: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8C94u;
        goto label_3c8c94;
    }
    ctx->pc = 0x3C8C8Cu;
    {
        const bool branch_taken_0x3c8c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C8Cu;
        // 0x3c8c90: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8c8c) {
            ctx->pc = 0x3C8CA0u;
            goto label_3c8ca0;
        }
    }
    ctx->pc = 0x3C8C94u;
label_3c8c94:
    // 0x3c8c94: 0x0  nop
    ctx->pc = 0x3c8c94u;
    // NOP
label_3c8c98:
    // 0x3c8c98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c8c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8c9c:
    // 0x3c8c9c: 0x0  nop
    ctx->pc = 0x3c8c9cu;
    // NOP
label_3c8ca0:
    // 0x3c8ca0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3c8ca4:
    if (ctx->pc == 0x3C8CA4u) {
        ctx->pc = 0x3C8CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8CA0u;
        // 0x3c8ca4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8CA8u;
        goto label_3c8ca8;
    }
    ctx->pc = 0x3C8CA0u;
    {
        const bool branch_taken_0x3c8ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8CA0u;
        // 0x3c8ca4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ca0) {
            ctx->pc = 0x3C8CB0u;
            goto label_3c8cb0;
        }
    }
    ctx->pc = 0x3C8CA8u;
label_3c8ca8:
    // 0x3c8ca8: 0xc0c0830  jal         func_3020C0
label_3c8cac:
    if (ctx->pc == 0x3C8CACu) {
        ctx->pc = 0x3C8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8CA8u;
        // 0x3c8cac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8CB0u;
        goto label_3c8cb0;
    }
    ctx->pc = 0x3C8CA8u;
    SET_GPR_U32(ctx, 31, 0x3C8CB0u);
    ctx->pc = 0x3C8CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8CA8u;
    // 0x3c8cac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C8CA8u, 0x3C8CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8CB0u;
label_3c8cb0:
    // 0x3c8cb0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3c8cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3c8cb4:
    // 0x3c8cb4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3c8cb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c8cb8:
    // 0x3c8cb8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3c8cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c8cbc:
    // 0x3c8cbc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3c8cbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c8cc0:
    // 0x3c8cc0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3c8cc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c8cc4:
    // 0x3c8cc4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c8cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c8cc8:
    // 0x3c8cc8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c8cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c8ccc:
    // 0x3c8ccc: 0x3e00008  jr          $ra
label_3c8cd0:
    if (ctx->pc == 0x3C8CD0u) {
        ctx->pc = 0x3C8CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8CCCu;
        // 0x3c8cd0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8CD4u;
        goto label_fallthrough_0x3c8ccc;
    }
    ctx->pc = 0x3C8CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8CCCu;
        // 0x3c8cd0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c8ccc:
    ctx->pc = 0x3C8CD4u;
}
