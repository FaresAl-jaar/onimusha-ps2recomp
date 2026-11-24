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

// Function: sub_00292C00
// Address: 0x292c00 - 0x293304
void sub_00292C00_0x292c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292C00_0x292c00");
#endif

    switch (ctx->pc) {
        case 0x292c00u: goto label_292c00;
        case 0x292c04u: goto label_292c04;
        case 0x292c08u: goto label_292c08;
        case 0x292c0cu: goto label_292c0c;
        case 0x292c10u: goto label_292c10;
        case 0x292c14u: goto label_292c14;
        case 0x292c18u: goto label_292c18;
        case 0x292c1cu: goto label_292c1c;
        case 0x292c20u: goto label_292c20;
        case 0x292c24u: goto label_292c24;
        case 0x292c28u: goto label_292c28;
        case 0x292c2cu: goto label_292c2c;
        case 0x292c30u: goto label_292c30;
        case 0x292c34u: goto label_292c34;
        case 0x292c38u: goto label_292c38;
        case 0x292c3cu: goto label_292c3c;
        case 0x292c40u: goto label_292c40;
        case 0x292c44u: goto label_292c44;
        case 0x292c48u: goto label_292c48;
        case 0x292c4cu: goto label_292c4c;
        case 0x292c50u: goto label_292c50;
        case 0x292c54u: goto label_292c54;
        case 0x292c58u: goto label_292c58;
        case 0x292c5cu: goto label_292c5c;
        case 0x292c60u: goto label_292c60;
        case 0x292c64u: goto label_292c64;
        case 0x292c68u: goto label_292c68;
        case 0x292c6cu: goto label_292c6c;
        case 0x292c70u: goto label_292c70;
        case 0x292c74u: goto label_292c74;
        case 0x292c78u: goto label_292c78;
        case 0x292c7cu: goto label_292c7c;
        case 0x292c80u: goto label_292c80;
        case 0x292c84u: goto label_292c84;
        case 0x292c88u: goto label_292c88;
        case 0x292c8cu: goto label_292c8c;
        case 0x292c90u: goto label_292c90;
        case 0x292c94u: goto label_292c94;
        case 0x292c98u: goto label_292c98;
        case 0x292c9cu: goto label_292c9c;
        case 0x292ca0u: goto label_292ca0;
        case 0x292ca4u: goto label_292ca4;
        case 0x292ca8u: goto label_292ca8;
        case 0x292cacu: goto label_292cac;
        case 0x292cb0u: goto label_292cb0;
        case 0x292cb4u: goto label_292cb4;
        case 0x292cb8u: goto label_292cb8;
        case 0x292cbcu: goto label_292cbc;
        case 0x292cc0u: goto label_292cc0;
        case 0x292cc4u: goto label_292cc4;
        case 0x292cc8u: goto label_292cc8;
        case 0x292cccu: goto label_292ccc;
        case 0x292cd0u: goto label_292cd0;
        case 0x292cd4u: goto label_292cd4;
        case 0x292cd8u: goto label_292cd8;
        case 0x292cdcu: goto label_292cdc;
        case 0x292ce0u: goto label_292ce0;
        case 0x292ce4u: goto label_292ce4;
        case 0x292ce8u: goto label_292ce8;
        case 0x292cecu: goto label_292cec;
        case 0x292cf0u: goto label_292cf0;
        case 0x292cf4u: goto label_292cf4;
        case 0x292cf8u: goto label_292cf8;
        case 0x292cfcu: goto label_292cfc;
        case 0x292d00u: goto label_292d00;
        case 0x292d04u: goto label_292d04;
        case 0x292d08u: goto label_292d08;
        case 0x292d0cu: goto label_292d0c;
        case 0x292d10u: goto label_292d10;
        case 0x292d14u: goto label_292d14;
        case 0x292d18u: goto label_292d18;
        case 0x292d1cu: goto label_292d1c;
        case 0x292d20u: goto label_292d20;
        case 0x292d24u: goto label_292d24;
        case 0x292d28u: goto label_292d28;
        case 0x292d2cu: goto label_292d2c;
        case 0x292d30u: goto label_292d30;
        case 0x292d34u: goto label_292d34;
        case 0x292d38u: goto label_292d38;
        case 0x292d3cu: goto label_292d3c;
        case 0x292d40u: goto label_292d40;
        case 0x292d44u: goto label_292d44;
        case 0x292d48u: goto label_292d48;
        case 0x292d4cu: goto label_292d4c;
        case 0x292d50u: goto label_292d50;
        case 0x292d54u: goto label_292d54;
        case 0x292d58u: goto label_292d58;
        case 0x292d5cu: goto label_292d5c;
        case 0x292d60u: goto label_292d60;
        case 0x292d64u: goto label_292d64;
        case 0x292d68u: goto label_292d68;
        case 0x292d6cu: goto label_292d6c;
        case 0x292d70u: goto label_292d70;
        case 0x292d74u: goto label_292d74;
        case 0x292d78u: goto label_292d78;
        case 0x292d7cu: goto label_292d7c;
        case 0x292d80u: goto label_292d80;
        case 0x292d84u: goto label_292d84;
        case 0x292d88u: goto label_292d88;
        case 0x292d8cu: goto label_292d8c;
        case 0x292d90u: goto label_292d90;
        case 0x292d94u: goto label_292d94;
        case 0x292d98u: goto label_292d98;
        case 0x292d9cu: goto label_292d9c;
        case 0x292da0u: goto label_292da0;
        case 0x292da4u: goto label_292da4;
        case 0x292da8u: goto label_292da8;
        case 0x292dacu: goto label_292dac;
        case 0x292db0u: goto label_292db0;
        case 0x292db4u: goto label_292db4;
        case 0x292db8u: goto label_292db8;
        case 0x292dbcu: goto label_292dbc;
        case 0x292dc0u: goto label_292dc0;
        case 0x292dc4u: goto label_292dc4;
        case 0x292dc8u: goto label_292dc8;
        case 0x292dccu: goto label_292dcc;
        case 0x292dd0u: goto label_292dd0;
        case 0x292dd4u: goto label_292dd4;
        case 0x292dd8u: goto label_292dd8;
        case 0x292ddcu: goto label_292ddc;
        case 0x292de0u: goto label_292de0;
        case 0x292de4u: goto label_292de4;
        case 0x292de8u: goto label_292de8;
        case 0x292decu: goto label_292dec;
        case 0x292df0u: goto label_292df0;
        case 0x292df4u: goto label_292df4;
        case 0x292df8u: goto label_292df8;
        case 0x292dfcu: goto label_292dfc;
        case 0x292e00u: goto label_292e00;
        case 0x292e04u: goto label_292e04;
        case 0x292e08u: goto label_292e08;
        case 0x292e0cu: goto label_292e0c;
        case 0x292e10u: goto label_292e10;
        case 0x292e14u: goto label_292e14;
        case 0x292e18u: goto label_292e18;
        case 0x292e1cu: goto label_292e1c;
        case 0x292e20u: goto label_292e20;
        case 0x292e24u: goto label_292e24;
        case 0x292e28u: goto label_292e28;
        case 0x292e2cu: goto label_292e2c;
        case 0x292e30u: goto label_292e30;
        case 0x292e34u: goto label_292e34;
        case 0x292e38u: goto label_292e38;
        case 0x292e3cu: goto label_292e3c;
        case 0x292e40u: goto label_292e40;
        case 0x292e44u: goto label_292e44;
        case 0x292e48u: goto label_292e48;
        case 0x292e4cu: goto label_292e4c;
        case 0x292e50u: goto label_292e50;
        case 0x292e54u: goto label_292e54;
        case 0x292e58u: goto label_292e58;
        case 0x292e5cu: goto label_292e5c;
        case 0x292e60u: goto label_292e60;
        case 0x292e64u: goto label_292e64;
        case 0x292e68u: goto label_292e68;
        case 0x292e6cu: goto label_292e6c;
        case 0x292e70u: goto label_292e70;
        case 0x292e74u: goto label_292e74;
        case 0x292e78u: goto label_292e78;
        case 0x292e7cu: goto label_292e7c;
        case 0x292e80u: goto label_292e80;
        case 0x292e84u: goto label_292e84;
        case 0x292e88u: goto label_292e88;
        case 0x292e8cu: goto label_292e8c;
        case 0x292e90u: goto label_292e90;
        case 0x292e94u: goto label_292e94;
        case 0x292e98u: goto label_292e98;
        case 0x292e9cu: goto label_292e9c;
        case 0x292ea0u: goto label_292ea0;
        case 0x292ea4u: goto label_292ea4;
        case 0x292ea8u: goto label_292ea8;
        case 0x292eacu: goto label_292eac;
        case 0x292eb0u: goto label_292eb0;
        case 0x292eb4u: goto label_292eb4;
        case 0x292eb8u: goto label_292eb8;
        case 0x292ebcu: goto label_292ebc;
        case 0x292ec0u: goto label_292ec0;
        case 0x292ec4u: goto label_292ec4;
        case 0x292ec8u: goto label_292ec8;
        case 0x292eccu: goto label_292ecc;
        case 0x292ed0u: goto label_292ed0;
        case 0x292ed4u: goto label_292ed4;
        case 0x292ed8u: goto label_292ed8;
        case 0x292edcu: goto label_292edc;
        case 0x292ee0u: goto label_292ee0;
        case 0x292ee4u: goto label_292ee4;
        case 0x292ee8u: goto label_292ee8;
        case 0x292eecu: goto label_292eec;
        case 0x292ef0u: goto label_292ef0;
        case 0x292ef4u: goto label_292ef4;
        case 0x292ef8u: goto label_292ef8;
        case 0x292efcu: goto label_292efc;
        case 0x292f00u: goto label_292f00;
        case 0x292f04u: goto label_292f04;
        case 0x292f08u: goto label_292f08;
        case 0x292f0cu: goto label_292f0c;
        case 0x292f10u: goto label_292f10;
        case 0x292f14u: goto label_292f14;
        case 0x292f18u: goto label_292f18;
        case 0x292f1cu: goto label_292f1c;
        case 0x292f20u: goto label_292f20;
        case 0x292f24u: goto label_292f24;
        case 0x292f28u: goto label_292f28;
        case 0x292f2cu: goto label_292f2c;
        case 0x292f30u: goto label_292f30;
        case 0x292f34u: goto label_292f34;
        case 0x292f38u: goto label_292f38;
        case 0x292f3cu: goto label_292f3c;
        case 0x292f40u: goto label_292f40;
        case 0x292f44u: goto label_292f44;
        case 0x292f48u: goto label_292f48;
        case 0x292f4cu: goto label_292f4c;
        case 0x292f50u: goto label_292f50;
        case 0x292f54u: goto label_292f54;
        case 0x292f58u: goto label_292f58;
        case 0x292f5cu: goto label_292f5c;
        case 0x292f60u: goto label_292f60;
        case 0x292f64u: goto label_292f64;
        case 0x292f68u: goto label_292f68;
        case 0x292f6cu: goto label_292f6c;
        case 0x292f70u: goto label_292f70;
        case 0x292f74u: goto label_292f74;
        case 0x292f78u: goto label_292f78;
        case 0x292f7cu: goto label_292f7c;
        case 0x292f80u: goto label_292f80;
        case 0x292f84u: goto label_292f84;
        case 0x292f88u: goto label_292f88;
        case 0x292f8cu: goto label_292f8c;
        case 0x292f90u: goto label_292f90;
        case 0x292f94u: goto label_292f94;
        case 0x292f98u: goto label_292f98;
        case 0x292f9cu: goto label_292f9c;
        case 0x292fa0u: goto label_292fa0;
        case 0x292fa4u: goto label_292fa4;
        case 0x292fa8u: goto label_292fa8;
        case 0x292facu: goto label_292fac;
        case 0x292fb0u: goto label_292fb0;
        case 0x292fb4u: goto label_292fb4;
        case 0x292fb8u: goto label_292fb8;
        case 0x292fbcu: goto label_292fbc;
        case 0x292fc0u: goto label_292fc0;
        case 0x292fc4u: goto label_292fc4;
        case 0x292fc8u: goto label_292fc8;
        case 0x292fccu: goto label_292fcc;
        case 0x292fd0u: goto label_292fd0;
        case 0x292fd4u: goto label_292fd4;
        case 0x292fd8u: goto label_292fd8;
        case 0x292fdcu: goto label_292fdc;
        case 0x292fe0u: goto label_292fe0;
        case 0x292fe4u: goto label_292fe4;
        case 0x292fe8u: goto label_292fe8;
        case 0x292fecu: goto label_292fec;
        case 0x292ff0u: goto label_292ff0;
        case 0x292ff4u: goto label_292ff4;
        case 0x292ff8u: goto label_292ff8;
        case 0x292ffcu: goto label_292ffc;
        case 0x293000u: goto label_293000;
        case 0x293004u: goto label_293004;
        case 0x293008u: goto label_293008;
        case 0x29300cu: goto label_29300c;
        case 0x293010u: goto label_293010;
        case 0x293014u: goto label_293014;
        case 0x293018u: goto label_293018;
        case 0x29301cu: goto label_29301c;
        case 0x293020u: goto label_293020;
        case 0x293024u: goto label_293024;
        case 0x293028u: goto label_293028;
        case 0x29302cu: goto label_29302c;
        case 0x293030u: goto label_293030;
        case 0x293034u: goto label_293034;
        case 0x293038u: goto label_293038;
        case 0x29303cu: goto label_29303c;
        case 0x293040u: goto label_293040;
        case 0x293044u: goto label_293044;
        case 0x293048u: goto label_293048;
        case 0x29304cu: goto label_29304c;
        case 0x293050u: goto label_293050;
        case 0x293054u: goto label_293054;
        case 0x293058u: goto label_293058;
        case 0x29305cu: goto label_29305c;
        case 0x293060u: goto label_293060;
        case 0x293064u: goto label_293064;
        case 0x293068u: goto label_293068;
        case 0x29306cu: goto label_29306c;
        case 0x293070u: goto label_293070;
        case 0x293074u: goto label_293074;
        case 0x293078u: goto label_293078;
        case 0x29307cu: goto label_29307c;
        case 0x293080u: goto label_293080;
        case 0x293084u: goto label_293084;
        case 0x293088u: goto label_293088;
        case 0x29308cu: goto label_29308c;
        case 0x293090u: goto label_293090;
        case 0x293094u: goto label_293094;
        case 0x293098u: goto label_293098;
        case 0x29309cu: goto label_29309c;
        case 0x2930a0u: goto label_2930a0;
        case 0x2930a4u: goto label_2930a4;
        case 0x2930a8u: goto label_2930a8;
        case 0x2930acu: goto label_2930ac;
        case 0x2930b0u: goto label_2930b0;
        case 0x2930b4u: goto label_2930b4;
        case 0x2930b8u: goto label_2930b8;
        case 0x2930bcu: goto label_2930bc;
        case 0x2930c0u: goto label_2930c0;
        case 0x2930c4u: goto label_2930c4;
        case 0x2930c8u: goto label_2930c8;
        case 0x2930ccu: goto label_2930cc;
        case 0x2930d0u: goto label_2930d0;
        case 0x2930d4u: goto label_2930d4;
        case 0x2930d8u: goto label_2930d8;
        case 0x2930dcu: goto label_2930dc;
        case 0x2930e0u: goto label_2930e0;
        case 0x2930e4u: goto label_2930e4;
        case 0x2930e8u: goto label_2930e8;
        case 0x2930ecu: goto label_2930ec;
        case 0x2930f0u: goto label_2930f0;
        case 0x2930f4u: goto label_2930f4;
        case 0x2930f8u: goto label_2930f8;
        case 0x2930fcu: goto label_2930fc;
        case 0x293100u: goto label_293100;
        case 0x293104u: goto label_293104;
        case 0x293108u: goto label_293108;
        case 0x29310cu: goto label_29310c;
        case 0x293110u: goto label_293110;
        case 0x293114u: goto label_293114;
        case 0x293118u: goto label_293118;
        case 0x29311cu: goto label_29311c;
        case 0x293120u: goto label_293120;
        case 0x293124u: goto label_293124;
        case 0x293128u: goto label_293128;
        case 0x29312cu: goto label_29312c;
        case 0x293130u: goto label_293130;
        case 0x293134u: goto label_293134;
        case 0x293138u: goto label_293138;
        case 0x29313cu: goto label_29313c;
        case 0x293140u: goto label_293140;
        case 0x293144u: goto label_293144;
        case 0x293148u: goto label_293148;
        case 0x29314cu: goto label_29314c;
        case 0x293150u: goto label_293150;
        case 0x293154u: goto label_293154;
        case 0x293158u: goto label_293158;
        case 0x29315cu: goto label_29315c;
        case 0x293160u: goto label_293160;
        case 0x293164u: goto label_293164;
        case 0x293168u: goto label_293168;
        case 0x29316cu: goto label_29316c;
        case 0x293170u: goto label_293170;
        case 0x293174u: goto label_293174;
        case 0x293178u: goto label_293178;
        case 0x29317cu: goto label_29317c;
        case 0x293180u: goto label_293180;
        case 0x293184u: goto label_293184;
        case 0x293188u: goto label_293188;
        case 0x29318cu: goto label_29318c;
        case 0x293190u: goto label_293190;
        case 0x293194u: goto label_293194;
        case 0x293198u: goto label_293198;
        case 0x29319cu: goto label_29319c;
        case 0x2931a0u: goto label_2931a0;
        case 0x2931a4u: goto label_2931a4;
        case 0x2931a8u: goto label_2931a8;
        case 0x2931acu: goto label_2931ac;
        case 0x2931b0u: goto label_2931b0;
        case 0x2931b4u: goto label_2931b4;
        case 0x2931b8u: goto label_2931b8;
        case 0x2931bcu: goto label_2931bc;
        case 0x2931c0u: goto label_2931c0;
        case 0x2931c4u: goto label_2931c4;
        case 0x2931c8u: goto label_2931c8;
        case 0x2931ccu: goto label_2931cc;
        case 0x2931d0u: goto label_2931d0;
        case 0x2931d4u: goto label_2931d4;
        case 0x2931d8u: goto label_2931d8;
        case 0x2931dcu: goto label_2931dc;
        case 0x2931e0u: goto label_2931e0;
        case 0x2931e4u: goto label_2931e4;
        case 0x2931e8u: goto label_2931e8;
        case 0x2931ecu: goto label_2931ec;
        case 0x2931f0u: goto label_2931f0;
        case 0x2931f4u: goto label_2931f4;
        case 0x2931f8u: goto label_2931f8;
        case 0x2931fcu: goto label_2931fc;
        case 0x293200u: goto label_293200;
        case 0x293204u: goto label_293204;
        case 0x293208u: goto label_293208;
        case 0x29320cu: goto label_29320c;
        case 0x293210u: goto label_293210;
        case 0x293214u: goto label_293214;
        case 0x293218u: goto label_293218;
        case 0x29321cu: goto label_29321c;
        case 0x293220u: goto label_293220;
        case 0x293224u: goto label_293224;
        case 0x293228u: goto label_293228;
        case 0x29322cu: goto label_29322c;
        case 0x293230u: goto label_293230;
        case 0x293234u: goto label_293234;
        case 0x293238u: goto label_293238;
        case 0x29323cu: goto label_29323c;
        case 0x293240u: goto label_293240;
        case 0x293244u: goto label_293244;
        case 0x293248u: goto label_293248;
        case 0x29324cu: goto label_29324c;
        case 0x293250u: goto label_293250;
        case 0x293254u: goto label_293254;
        case 0x293258u: goto label_293258;
        case 0x29325cu: goto label_29325c;
        case 0x293260u: goto label_293260;
        case 0x293264u: goto label_293264;
        case 0x293268u: goto label_293268;
        case 0x29326cu: goto label_29326c;
        case 0x293270u: goto label_293270;
        case 0x293274u: goto label_293274;
        case 0x293278u: goto label_293278;
        case 0x29327cu: goto label_29327c;
        case 0x293280u: goto label_293280;
        case 0x293284u: goto label_293284;
        case 0x293288u: goto label_293288;
        case 0x29328cu: goto label_29328c;
        case 0x293290u: goto label_293290;
        case 0x293294u: goto label_293294;
        case 0x293298u: goto label_293298;
        case 0x29329cu: goto label_29329c;
        case 0x2932a0u: goto label_2932a0;
        case 0x2932a4u: goto label_2932a4;
        case 0x2932a8u: goto label_2932a8;
        case 0x2932acu: goto label_2932ac;
        case 0x2932b0u: goto label_2932b0;
        case 0x2932b4u: goto label_2932b4;
        case 0x2932b8u: goto label_2932b8;
        case 0x2932bcu: goto label_2932bc;
        case 0x2932c0u: goto label_2932c0;
        case 0x2932c4u: goto label_2932c4;
        case 0x2932c8u: goto label_2932c8;
        case 0x2932ccu: goto label_2932cc;
        case 0x2932d0u: goto label_2932d0;
        case 0x2932d4u: goto label_2932d4;
        case 0x2932d8u: goto label_2932d8;
        case 0x2932dcu: goto label_2932dc;
        case 0x2932e0u: goto label_2932e0;
        case 0x2932e4u: goto label_2932e4;
        case 0x2932e8u: goto label_2932e8;
        case 0x2932ecu: goto label_2932ec;
        case 0x2932f0u: goto label_2932f0;
        case 0x2932f4u: goto label_2932f4;
        case 0x2932f8u: goto label_2932f8;
        case 0x2932fcu: goto label_2932fc;
        case 0x293300u: goto label_293300;
        default: break;
    }

    ctx->pc = 0x292c00u;

label_292c00:
    // 0x292c00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x292c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_292c04:
    // 0x292c04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x292c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_292c08:
    // 0x292c08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x292c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_292c0c:
    // 0x292c0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x292c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_292c10:
    // 0x292c10: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x292c10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_292c14:
    // 0x292c14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x292c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_292c18:
    // 0x292c18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x292c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_292c1c:
    // 0x292c1c: 0x94820786  lhu         $v0, 0x786($a0)
    ctx->pc = 0x292c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1926)));
label_292c20:
    // 0x292c20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_292c24:
    if (ctx->pc == 0x292C24u) {
        ctx->pc = 0x292C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C20u;
        // 0x292c24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292C28u;
        goto label_292c28;
    }
    ctx->pc = 0x292C20u;
    {
        const bool branch_taken_0x292c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C20u;
        // 0x292c24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c20) {
            ctx->pc = 0x292C38u;
            goto label_292c38;
        }
    }
    ctx->pc = 0x292C28u;
label_292c28:
    // 0x292c28: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x292c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_292c2c:
    // 0x292c2c: 0x10000004  b           . + 4 + (0x4 << 2)
label_292c30:
    if (ctx->pc == 0x292C30u) {
        ctx->pc = 0x292C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C2Cu;
        // 0x292c30: 0xa6020786  sh          $v0, 0x786($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1926), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292C34u;
        goto label_292c34;
    }
    ctx->pc = 0x292C2Cu;
    {
        const bool branch_taken_0x292c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C2Cu;
        // 0x292c30: 0xa6020786  sh          $v0, 0x786($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1926), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c2c) {
            ctx->pc = 0x292C40u;
            goto label_292c40;
        }
    }
    ctx->pc = 0x292C34u;
label_292c34:
    // 0x292c34: 0x0  nop
    ctx->pc = 0x292c34u;
    // NOP
label_292c38:
    // 0x292c38: 0x100001ab  b           . + 4 + (0x1AB << 2)
label_292c3c:
    if (ctx->pc == 0x292C3Cu) {
        ctx->pc = 0x292C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C38u;
        // 0x292c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292C40u;
        goto label_292c40;
    }
    ctx->pc = 0x292C38u;
    {
        const bool branch_taken_0x292c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C38u;
        // 0x292c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c38) {
            ctx->pc = 0x2932E8u;
            goto label_2932e8;
        }
    }
    ctx->pc = 0x292C40u;
label_292c40:
    // 0x292c40: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x292c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_292c44:
    // 0x292c44: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x292c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_292c48:
    // 0x292c48: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x292c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_292c4c:
    // 0x292c4c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_292c50:
    if (ctx->pc == 0x292C50u) {
        ctx->pc = 0x292C54u;
        goto label_292c54;
    }
    ctx->pc = 0x292C4Cu;
    {
        const bool branch_taken_0x292c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292c4c) {
            ctx->pc = 0x292CB8u;
            goto label_292cb8;
        }
    }
    ctx->pc = 0x292C54u;
label_292c54:
    // 0x292c54: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x292c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_292c58:
    // 0x292c58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x292c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_292c5c:
    // 0x292c5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x292c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_292c60:
    // 0x292c60: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x292c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_292c64:
    // 0x292c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_292c68:
    // 0x292c68: 0x0  nop
    ctx->pc = 0x292c68u;
    // NOP
label_292c6c:
    // 0x292c6c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x292c6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_292c70:
    // 0x292c70: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x292c70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_292c74:
    // 0x292c74: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_292c78:
    if (ctx->pc == 0x292C78u) {
        ctx->pc = 0x292C7Cu;
        goto label_292c7c;
    }
    ctx->pc = 0x292C74u;
    {
        const bool branch_taken_0x292c74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x292c74) {
            ctx->pc = 0x292C8Cu;
            goto label_292c8c;
        }
    }
    ctx->pc = 0x292C7Cu;
label_292c7c:
    // 0x292c7c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x292c7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_292c80:
    // 0x292c80: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x292c80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_292c84:
    // 0x292c84: 0x10000007  b           . + 4 + (0x7 << 2)
label_292c88:
    if (ctx->pc == 0x292C88u) {
        ctx->pc = 0x292C8Cu;
        goto label_292c8c;
    }
    ctx->pc = 0x292C84u;
    {
        const bool branch_taken_0x292c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292c84) {
            ctx->pc = 0x292CA4u;
            goto label_292ca4;
        }
    }
    ctx->pc = 0x292C8Cu;
label_292c8c:
    // 0x292c8c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x292c8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_292c90:
    // 0x292c90: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x292c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_292c94:
    // 0x292c94: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x292c94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_292c98:
    // 0x292c98: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x292c98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_292c9c:
    // 0x292c9c: 0x0  nop
    ctx->pc = 0x292c9cu;
    // NOP
label_292ca0:
    // 0x292ca0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x292ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_292ca4:
    // 0x292ca4: 0xc0b2d80  jal         func_2CB600
label_292ca8:
    if (ctx->pc == 0x292CA8u) {
        ctx->pc = 0x292CACu;
        goto label_292cac;
    }
    ctx->pc = 0x292CA4u;
    SET_GPR_U32(ctx, 31, 0x292CACu);
    ctx->pc = 0x2CB600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB600u, 0x292CA4u, 0x292CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292CACu;
label_292cac:
    // 0x292cac: 0x1000018e  b           . + 4 + (0x18E << 2)
label_292cb0:
    if (ctx->pc == 0x292CB0u) {
        ctx->pc = 0x292CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292CACu;
        // 0x292cb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292CB4u;
        goto label_292cb4;
    }
    ctx->pc = 0x292CACu;
    {
        const bool branch_taken_0x292cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292CACu;
        // 0x292cb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292cac) {
            ctx->pc = 0x2932E8u;
            goto label_2932e8;
        }
    }
    ctx->pc = 0x292CB4u;
label_292cb4:
    // 0x292cb4: 0x0  nop
    ctx->pc = 0x292cb4u;
    // NOP
label_292cb8:
    // 0x292cb8: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_292cbc:
    if (ctx->pc == 0x292CBCu) {
        ctx->pc = 0x292CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292CB8u;
        // 0x292cbc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292CC0u;
        goto label_292cc0;
    }
    ctx->pc = 0x292CB8u;
    {
        const bool branch_taken_0x292cb8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x292CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292CB8u;
        // 0x292cbc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292cb8) {
            ctx->pc = 0x292CF8u;
            goto label_292cf8;
        }
    }
    ctx->pc = 0x292CC0u;
label_292cc0:
    // 0x292cc0: 0x926308e8  lbu         $v1, 0x8E8($s3)
    ctx->pc = 0x292cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
label_292cc4:
    // 0x292cc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x292cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_292cc8:
    // 0x292cc8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_292ccc:
    if (ctx->pc == 0x292CCCu) {
        ctx->pc = 0x292CD0u;
        goto label_292cd0;
    }
    ctx->pc = 0x292CC8u;
    {
        const bool branch_taken_0x292cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x292cc8) {
            ctx->pc = 0x292CD8u;
            goto label_292cd8;
        }
    }
    ctx->pc = 0x292CD0u;
label_292cd0:
    // 0x292cd0: 0x10000009  b           . + 4 + (0x9 << 2)
label_292cd4:
    if (ctx->pc == 0x292CD4u) {
        ctx->pc = 0x292CD8u;
        goto label_292cd8;
    }
    ctx->pc = 0x292CD0u;
    {
        const bool branch_taken_0x292cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292cd0) {
            ctx->pc = 0x292CF8u;
            goto label_292cf8;
        }
    }
    ctx->pc = 0x292CD8u;
label_292cd8:
    // 0x292cd8: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x292cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
label_292cdc:
    // 0x292cdc: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x292cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
label_292ce0:
    // 0x292ce0: 0x24421760  addiu       $v0, $v0, 0x1760
    ctx->pc = 0x292ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5984));
label_292ce4:
    // 0x292ce4: 0x9063005f  lbu         $v1, 0x5F($v1)
    ctx->pc = 0x292ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 95)));
label_292ce8:
    // 0x292ce8: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x292ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
label_292cec:
    // 0x292cec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_292cf0:
    // 0x292cf0: 0x24520110  addiu       $s2, $v0, 0x110
    ctx->pc = 0x292cf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_292cf4:
    // 0x292cf4: 0x0  nop
    ctx->pc = 0x292cf4u;
    // NOP
label_292cf8:
    // 0x292cf8: 0x96020286  lhu         $v0, 0x286($s0)
    ctx->pc = 0x292cf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 646)));
label_292cfc:
    // 0x292cfc: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x292cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
label_292d00:
    // 0x292d00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_292d04:
    if (ctx->pc == 0x292D04u) {
        ctx->pc = 0x292D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D00u;
        // 0x292d04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292D08u;
        goto label_292d08;
    }
    ctx->pc = 0x292D00u;
    {
        const bool branch_taken_0x292d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D00u;
        // 0x292d04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d00) {
            ctx->pc = 0x292D10u;
            goto label_292d10;
        }
    }
    ctx->pc = 0x292D08u;
label_292d08:
    // 0x292d08: 0x10000003  b           . + 4 + (0x3 << 2)
label_292d0c:
    if (ctx->pc == 0x292D0Cu) {
        ctx->pc = 0x292D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D08u;
        // 0x292d0c: 0xa2022b09  sb          $v0, 0x2B09($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11017), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292D10u;
        goto label_292d10;
    }
    ctx->pc = 0x292D08u;
    {
        const bool branch_taken_0x292d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D08u;
        // 0x292d0c: 0xa2022b09  sb          $v0, 0x2B09($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11017), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d08) {
            ctx->pc = 0x292D18u;
            goto label_292d18;
        }
    }
    ctx->pc = 0x292D10u;
label_292d10:
    // 0x292d10: 0xa2002b09  sb          $zero, 0x2B09($s0)
    ctx->pc = 0x292d10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11017), (uint8_t)GPR_U32(ctx, 0));
label_292d14:
    // 0x292d14: 0x0  nop
    ctx->pc = 0x292d14u;
    // NOP
label_292d18:
    // 0x292d18: 0x920429dc  lbu         $a0, 0x29DC($s0)
    ctx->pc = 0x292d18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10716)));
label_292d1c:
    // 0x292d1c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x292d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_292d20:
    // 0x292d20: 0x34436667  ori         $v1, $v0, 0x6667
    ctx->pc = 0x292d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_292d24:
    // 0x292d24: 0xa2042b06  sb          $a0, 0x2B06($s0)
    ctx->pc = 0x292d24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11014), (uint8_t)GPR_U32(ctx, 4));
label_292d28:
    // 0x292d28: 0x8e0429c0  lw          $a0, 0x29C0($s0)
    ctx->pc = 0x292d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
label_292d2c:
    // 0x292d2c: 0x82022b06  lb          $v0, 0x2B06($s0)
    ctx->pc = 0x292d2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11014)));
label_292d30:
    // 0x292d30: 0x90840004  lbu         $a0, 0x4($a0)
    ctx->pc = 0x292d30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_292d34:
    // 0x292d34: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x292d34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_292d38:
    // 0x292d38: 0x0  nop
    ctx->pc = 0x292d38u;
    // NOP
label_292d3c:
    // 0x292d3c: 0x0  nop
    ctx->pc = 0x292d3cu;
    // NOP
label_292d40:
    // 0x292d40: 0x1810  mfhi        $v1
    ctx->pc = 0x292d40u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_292d44:
    // 0x292d44: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x292d44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_292d48:
    // 0x292d48: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x292d48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_292d4c:
    // 0x292d4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x292d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_292d50:
    // 0x292d50: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x292d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_292d54:
    // 0x292d54: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x292d54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_292d58:
    // 0x292d58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_292d5c:
    // 0x292d5c: 0xa2022b06  sb          $v0, 0x2B06($s0)
    ctx->pc = 0x292d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11014), (uint8_t)GPR_U32(ctx, 2));
label_292d60:
    // 0x292d60: 0x96030286  lhu         $v1, 0x286($s0)
    ctx->pc = 0x292d60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 646)));
label_292d64:
    // 0x292d64: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x292d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_292d68:
    // 0x292d68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_292d6c:
    if (ctx->pc == 0x292D6Cu) {
        ctx->pc = 0x292D70u;
        goto label_292d70;
    }
    ctx->pc = 0x292D68u;
    {
        const bool branch_taken_0x292d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292d68) {
            ctx->pc = 0x292D80u;
            goto label_292d80;
        }
    }
    ctx->pc = 0x292D70u;
label_292d70:
    // 0x292d70: 0x82022b06  lb          $v0, 0x2B06($s0)
    ctx->pc = 0x292d70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11014)));
label_292d74:
    // 0x292d74: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x292d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_292d78:
    // 0x292d78: 0x10000019  b           . + 4 + (0x19 << 2)
label_292d7c:
    if (ctx->pc == 0x292D7Cu) {
        ctx->pc = 0x292D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D78u;
        // 0x292d7c: 0xa2022b06  sb          $v0, 0x2B06($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11014), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292D80u;
        goto label_292d80;
    }
    ctx->pc = 0x292D78u;
    {
        const bool branch_taken_0x292d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D78u;
        // 0x292d7c: 0xa2022b06  sb          $v0, 0x2B06($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11014), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d78) {
            ctx->pc = 0x292DE0u;
            goto label_292de0;
        }
    }
    ctx->pc = 0x292D80u;
label_292d80:
    // 0x292d80: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x292d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_292d84:
    // 0x292d84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_292d88:
    if (ctx->pc == 0x292D88u) {
        ctx->pc = 0x292D8Cu;
        goto label_292d8c;
    }
    ctx->pc = 0x292D84u;
    {
        const bool branch_taken_0x292d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292d84) {
            ctx->pc = 0x292DA0u;
            goto label_292da0;
        }
    }
    ctx->pc = 0x292D8Cu;
label_292d8c:
    // 0x292d8c: 0x82022b06  lb          $v0, 0x2B06($s0)
    ctx->pc = 0x292d8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11014)));
label_292d90:
    // 0x292d90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x292d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_292d94:
    // 0x292d94: 0x10000012  b           . + 4 + (0x12 << 2)
label_292d98:
    if (ctx->pc == 0x292D98u) {
        ctx->pc = 0x292D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D94u;
        // 0x292d98: 0xa2022b06  sb          $v0, 0x2B06($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11014), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292D9Cu;
        goto label_292d9c;
    }
    ctx->pc = 0x292D94u;
    {
        const bool branch_taken_0x292d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D94u;
        // 0x292d98: 0xa2022b06  sb          $v0, 0x2B06($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11014), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d94) {
            ctx->pc = 0x292DE0u;
            goto label_292de0;
        }
    }
    ctx->pc = 0x292D9Cu;
label_292d9c:
    // 0x292d9c: 0x0  nop
    ctx->pc = 0x292d9cu;
    // NOP
label_292da0:
    // 0x292da0: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x292da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_292da4:
    // 0x292da4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_292da8:
    if (ctx->pc == 0x292DA8u) {
        ctx->pc = 0x292DACu;
        goto label_292dac;
    }
    ctx->pc = 0x292DA4u;
    {
        const bool branch_taken_0x292da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292da4) {
            ctx->pc = 0x292DC0u;
            goto label_292dc0;
        }
    }
    ctx->pc = 0x292DACu;
label_292dac:
    // 0x292dac: 0x82022b06  lb          $v0, 0x2B06($s0)
    ctx->pc = 0x292dacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11014)));
label_292db0:
    // 0x292db0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x292db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_292db4:
    // 0x292db4: 0x1000000a  b           . + 4 + (0xA << 2)
label_292db8:
    if (ctx->pc == 0x292DB8u) {
        ctx->pc = 0x292DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DB4u;
        // 0x292db8: 0xa2022b06  sb          $v0, 0x2B06($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11014), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292DBCu;
        goto label_292dbc;
    }
    ctx->pc = 0x292DB4u;
    {
        const bool branch_taken_0x292db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DB4u;
        // 0x292db8: 0xa2022b06  sb          $v0, 0x2B06($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11014), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292db4) {
            ctx->pc = 0x292DE0u;
            goto label_292de0;
        }
    }
    ctx->pc = 0x292DBCu;
label_292dbc:
    // 0x292dbc: 0x0  nop
    ctx->pc = 0x292dbcu;
    // NOP
label_292dc0:
    // 0x292dc0: 0x96020288  lhu         $v0, 0x288($s0)
    ctx->pc = 0x292dc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
label_292dc4:
    // 0x292dc4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x292dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_292dc8:
    // 0x292dc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_292dcc:
    if (ctx->pc == 0x292DCCu) {
        ctx->pc = 0x292DD0u;
        goto label_292dd0;
    }
    ctx->pc = 0x292DC8u;
    {
        const bool branch_taken_0x292dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292dc8) {
            ctx->pc = 0x292DE0u;
            goto label_292de0;
        }
    }
    ctx->pc = 0x292DD0u;
label_292dd0:
    // 0x292dd0: 0x82022b06  lb          $v0, 0x2B06($s0)
    ctx->pc = 0x292dd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11014)));
label_292dd4:
    // 0x292dd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x292dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_292dd8:
    // 0x292dd8: 0xa2022b06  sb          $v0, 0x2B06($s0)
    ctx->pc = 0x292dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11014), (uint8_t)GPR_U32(ctx, 2));
label_292ddc:
    // 0x292ddc: 0x0  nop
    ctx->pc = 0x292ddcu;
    // NOP
label_292de0:
    // 0x292de0: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_292de4:
    if (ctx->pc == 0x292DE4u) {
        ctx->pc = 0x292DE8u;
        goto label_292de8;
    }
    ctx->pc = 0x292DE0u;
    {
        const bool branch_taken_0x292de0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x292de0) {
            ctx->pc = 0x292E08u;
            goto label_292e08;
        }
    }
    ctx->pc = 0x292DE8u;
label_292de8:
    // 0x292de8: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x292de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_292dec:
    // 0x292dec: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x292decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_292df0:
    // 0x292df0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_292df4:
    if (ctx->pc == 0x292DF4u) {
        ctx->pc = 0x292DF8u;
        goto label_292df8;
    }
    ctx->pc = 0x292DF0u;
    {
        const bool branch_taken_0x292df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292df0) {
            ctx->pc = 0x292E08u;
            goto label_292e08;
        }
    }
    ctx->pc = 0x292DF8u;
label_292df8:
    // 0x292df8: 0x82022b06  lb          $v0, 0x2B06($s0)
    ctx->pc = 0x292df8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11014)));
label_292dfc:
    // 0x292dfc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x292dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_292e00:
    // 0x292e00: 0xa2022b06  sb          $v0, 0x2B06($s0)
    ctx->pc = 0x292e00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11014), (uint8_t)GPR_U32(ctx, 2));
label_292e04:
    // 0x292e04: 0x0  nop
    ctx->pc = 0x292e04u;
    // NOP
label_292e08:
    // 0x292e08: 0xc0a4760  jal         func_291D80
label_292e0c:
    if (ctx->pc == 0x292E0Cu) {
        ctx->pc = 0x292E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E08u;
        // 0x292e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E10u;
        goto label_292e10;
    }
    ctx->pc = 0x292E08u;
    SET_GPR_U32(ctx, 31, 0x292E10u);
    ctx->pc = 0x292E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E08u;
    // 0x292e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D80u, 0x292E08u, 0x292E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E10u;
label_292e10:
    // 0x292e10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_292e14:
    if (ctx->pc == 0x292E14u) {
        ctx->pc = 0x292E18u;
        goto label_292e18;
    }
    ctx->pc = 0x292E10u;
    {
        const bool branch_taken_0x292e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292e10) {
            ctx->pc = 0x292E30u;
            goto label_292e30;
        }
    }
    ctx->pc = 0x292E18u;
label_292e18:
    // 0x292e18: 0x82062b06  lb          $a2, 0x2B06($s0)
    ctx->pc = 0x292e18u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11014)));
label_292e1c:
    // 0x292e1c: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x292e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_292e20:
    // 0x292e20: 0xc09696c  jal         func_25A5B0
label_292e24:
    if (ctx->pc == 0x292E24u) {
        ctx->pc = 0x292E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E20u;
        // 0x292e24: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E28u;
        goto label_292e28;
    }
    ctx->pc = 0x292E20u;
    SET_GPR_U32(ctx, 31, 0x292E28u);
    ctx->pc = 0x292E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E20u;
    // 0x292e24: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5B0u, 0x292E20u, 0x292E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E28u;
label_292e28:
    // 0x292e28: 0x10000007  b           . + 4 + (0x7 << 2)
label_292e2c:
    if (ctx->pc == 0x292E2Cu) {
        ctx->pc = 0x292E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E28u;
        // 0x292e2c: 0xa2022b06  sb          $v0, 0x2B06($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11014), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E30u;
        goto label_292e30;
    }
    ctx->pc = 0x292E28u;
    {
        const bool branch_taken_0x292e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E28u;
        // 0x292e2c: 0xa2022b06  sb          $v0, 0x2B06($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11014), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e28) {
            ctx->pc = 0x292E48u;
            goto label_292e48;
        }
    }
    ctx->pc = 0x292E30u;
label_292e30:
    // 0x292e30: 0x82062b06  lb          $a2, 0x2B06($s0)
    ctx->pc = 0x292e30u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11014)));
label_292e34:
    // 0x292e34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x292e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292e38:
    // 0x292e38: 0xc09696c  jal         func_25A5B0
label_292e3c:
    if (ctx->pc == 0x292E3Cu) {
        ctx->pc = 0x292E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E38u;
        // 0x292e3c: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E40u;
        goto label_292e40;
    }
    ctx->pc = 0x292E38u;
    SET_GPR_U32(ctx, 31, 0x292E40u);
    ctx->pc = 0x292E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E38u;
    // 0x292e3c: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5B0u, 0x292E38u, 0x292E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E40u;
label_292e40:
    // 0x292e40: 0xa2022b06  sb          $v0, 0x2B06($s0)
    ctx->pc = 0x292e40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11014), (uint8_t)GPR_U32(ctx, 2));
label_292e44:
    // 0x292e44: 0x0  nop
    ctx->pc = 0x292e44u;
    // NOP
label_292e48:
    // 0x292e48: 0x1260011d  beqz        $s3, . + 4 + (0x11D << 2)
label_292e4c:
    if (ctx->pc == 0x292E4Cu) {
        ctx->pc = 0x292E50u;
        goto label_292e50;
    }
    ctx->pc = 0x292E48u;
    {
        const bool branch_taken_0x292e48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x292e48) {
            ctx->pc = 0x2932C0u;
            goto label_2932c0;
        }
    }
    ctx->pc = 0x292E50u;
label_292e50:
    // 0x292e50: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x292e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_292e54:
    // 0x292e54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_292e58:
    if (ctx->pc == 0x292E58u) {
        ctx->pc = 0x292E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E54u;
        // 0x292e58: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E5Cu;
        goto label_292e5c;
    }
    ctx->pc = 0x292E54u;
    {
        const bool branch_taken_0x292e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E54u;
        // 0x292e58: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e54) {
            ctx->pc = 0x292E68u;
            goto label_292e68;
        }
    }
    ctx->pc = 0x292E5Cu;
label_292e5c:
    // 0x292e5c: 0x9262000a  lbu         $v0, 0xA($s3)
    ctx->pc = 0x292e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
label_292e60:
    // 0x292e60: 0x10620117  beq         $v1, $v0, . + 4 + (0x117 << 2)
label_292e64:
    if (ctx->pc == 0x292E64u) {
        ctx->pc = 0x292E68u;
        goto label_292e68;
    }
    ctx->pc = 0x292E60u;
    {
        const bool branch_taken_0x292e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x292e60) {
            ctx->pc = 0x2932C0u;
            goto label_2932c0;
        }
    }
    ctx->pc = 0x292E68u;
label_292e68:
    // 0x292e68: 0x8e0306c8  lw          $v1, 0x6C8($s0)
    ctx->pc = 0x292e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
label_292e6c:
    // 0x292e6c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x292e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_292e70:
    // 0x292e70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x292e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_292e74:
    // 0x292e74: 0x14400112  bnez        $v0, . + 4 + (0x112 << 2)
label_292e78:
    if (ctx->pc == 0x292E78u) {
        ctx->pc = 0x292E7Cu;
        goto label_292e7c;
    }
    ctx->pc = 0x292E74u;
    {
        const bool branch_taken_0x292e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292e74) {
            ctx->pc = 0x2932C0u;
            goto label_2932c0;
        }
    }
    ctx->pc = 0x292E7Cu;
label_292e7c:
    // 0x292e7c: 0x92022b08  lbu         $v0, 0x2B08($s0)
    ctx->pc = 0x292e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11016)));
label_292e80:
    // 0x292e80: 0x1440010f  bnez        $v0, . + 4 + (0x10F << 2)
label_292e84:
    if (ctx->pc == 0x292E84u) {
        ctx->pc = 0x292E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E80u;
        // 0x292e84: 0x27a30070  addiu       $v1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E88u;
        goto label_292e88;
    }
    ctx->pc = 0x292E80u;
    {
        const bool branch_taken_0x292e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E80u;
        // 0x292e84: 0x27a30070  addiu       $v1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e80) {
            ctx->pc = 0x2932C0u;
            goto label_2932c0;
        }
    }
    ctx->pc = 0x292E88u;
label_292e88:
    // 0x292e88: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_292e8c:
    if (ctx->pc == 0x292E8Cu) {
        ctx->pc = 0x292E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E88u;
        // 0x292e8c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E90u;
        goto label_292e90;
    }
    ctx->pc = 0x292E88u;
    {
        const bool branch_taken_0x292e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x292E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E88u;
        // 0x292e8c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e88) {
            ctx->pc = 0x292EACu;
            goto label_292eac;
        }
    }
    ctx->pc = 0x292E90u;
label_292e90:
    // 0x292e90: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x292e90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_292e94:
    // 0x292e94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x292e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_292e98:
    // 0x292e98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x292e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_292e9c:
    // 0x292e9c: 0x0  nop
    ctx->pc = 0x292e9cu;
    // NOP
label_292ea0:
    // 0x292ea0: 0x0  nop
    ctx->pc = 0x292ea0u;
    // NOP
label_292ea4:
    // 0x292ea4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_292ea8:
    if (ctx->pc == 0x292EA8u) {
        ctx->pc = 0x292EACu;
        goto label_292eac;
    }
    ctx->pc = 0x292EA4u;
    {
        const bool branch_taken_0x292ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292ea4) {
            ctx->pc = 0x292E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292e90;
        }
    }
    ctx->pc = 0x292EACu;
label_292eac:
    // 0x292eac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x292eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_292eb0:
    // 0x292eb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x292eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_292eb4:
    // 0x292eb4: 0xc0969ac  jal         func_25A6B0
label_292eb8:
    if (ctx->pc == 0x292EB8u) {
        ctx->pc = 0x292EBCu;
        goto label_292ebc;
    }
    ctx->pc = 0x292EB4u;
    SET_GPR_U32(ctx, 31, 0x292EBCu);
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x292EB4u, 0x292EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292EBCu;
label_292ebc:
    // 0x292ebc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x292ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_292ec0:
    // 0x292ec0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x292ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_292ec4:
    // 0x292ec4: 0xc0969ac  jal         func_25A6B0
label_292ec8:
    if (ctx->pc == 0x292EC8u) {
        ctx->pc = 0x292EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292EC4u;
        // 0x292ec8: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x292ECCu;
        goto label_292ecc;
    }
    ctx->pc = 0x292EC4u;
    SET_GPR_U32(ctx, 31, 0x292ECCu);
    ctx->pc = 0x292EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292EC4u;
    // 0x292ec8: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x292EC4u, 0x292ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292ECCu;
label_292ecc:
    // 0x292ecc: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x292eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_292ed0:
    // 0x292ed0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x292ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_292ed4:
    // 0x292ed4: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x292ed4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_292ed8:
    // 0x292ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_292edc:
    // 0x292edc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x292edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_292ee0:
    // 0x292ee0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x292ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_292ee4:
    // 0x292ee4: 0x2463f38c  addiu       $v1, $v1, -0xC74
    ctx->pc = 0x292ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964108));
label_292ee8:
    // 0x292ee8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x292ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_292eec:
    // 0x292eec: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x292eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_292ef0:
    // 0x292ef0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x292ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_292ef4:
    // 0x292ef4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x292ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_292ef8:
    // 0x292ef8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x292ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_292efc:
    // 0x292efc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x292efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_292f00:
    // 0x292f00: 0xc09693c  jal         func_25A4F0
label_292f04:
    if (ctx->pc == 0x292F04u) {
        ctx->pc = 0x292F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F00u;
        // 0x292f04: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x292F08u;
        goto label_292f08;
    }
    ctx->pc = 0x292F00u;
    SET_GPR_U32(ctx, 31, 0x292F08u);
    ctx->pc = 0x292F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292F00u;
    // 0x292f04: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x292F00u, 0x292F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292F08u;
label_292f08:
    // 0x292f08: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x292f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_292f0c:
    // 0x292f0c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x292f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_292f10:
    // 0x292f10: 0x26062af0  addiu       $a2, $s0, 0x2AF0
    ctx->pc = 0x292f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 10992));
label_292f14:
    // 0x292f14: 0xc041442  jal         func_105108
label_292f18:
    if (ctx->pc == 0x292F18u) {
        ctx->pc = 0x292F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F14u;
        // 0x292f18: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292F1Cu;
        goto label_292f1c;
    }
    ctx->pc = 0x292F14u;
    SET_GPR_U32(ctx, 31, 0x292F1Cu);
    ctx->pc = 0x292F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292F14u;
    // 0x292f18: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x292F14u, 0x292F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292F1Cu;
label_292f1c:
    // 0x292f1c: 0x961129da  lhu         $s1, 0x29DA($s0)
    ctx->pc = 0x292f1cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10714)));
label_292f20:
    // 0x292f20: 0xc0969c8  jal         func_25A720
label_292f24:
    if (ctx->pc == 0x292F24u) {
        ctx->pc = 0x292F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F20u;
        // 0x292f24: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292F28u;
        goto label_292f28;
    }
    ctx->pc = 0x292F20u;
    SET_GPR_U32(ctx, 31, 0x292F28u);
    ctx->pc = 0x292F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292F20u;
    // 0x292f24: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x292F20u, 0x292F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292F28u;
label_292f28:
    // 0x292f28: 0x24430006  addiu       $v1, $v0, 0x6
    ctx->pc = 0x292f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_292f2c:
    // 0x292f2c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x292f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_292f30:
    // 0x292f30: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x292f30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_292f34:
    // 0x292f34: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x292f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_292f38:
    // 0x292f38: 0x96030286  lhu         $v1, 0x286($s0)
    ctx->pc = 0x292f38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 646)));
label_292f3c:
    // 0x292f3c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x292f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_292f40:
    // 0x292f40: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x292f40u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_292f44:
    // 0x292f44: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x292f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_292f48:
    // 0x292f48: 0x0  nop
    ctx->pc = 0x292f48u;
    // NOP
label_292f4c:
    // 0x292f4c: 0x0  nop
    ctx->pc = 0x292f4cu;
    // NOP
label_292f50:
    // 0x292f50: 0x2010  mfhi        $a0
    ctx->pc = 0x292f50u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_292f54:
    // 0x292f54: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x292f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_292f58:
    // 0x292f58: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x292f58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
label_292f5c:
    // 0x292f5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x292f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_292f60:
    // 0x292f60: 0x48c3c  dsll32      $s1, $a0, 16
    ctx->pc = 0x292f60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (32 + 16));
label_292f64:
    // 0x292f64: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_292f68:
    if (ctx->pc == 0x292F68u) {
        ctx->pc = 0x292F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F64u;
        // 0x292f68: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292F6Cu;
        goto label_292f6c;
    }
    ctx->pc = 0x292F64u;
    {
        const bool branch_taken_0x292f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F64u;
        // 0x292f68: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f64) {
            ctx->pc = 0x292FB8u;
            goto label_292fb8;
        }
    }
    ctx->pc = 0x292F6Cu;
label_292f6c:
    // 0x292f6c: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x292f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
label_292f70:
    // 0x292f70: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x292f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_292f74:
    // 0x292f74: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x292f74u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_292f78:
    // 0x292f78: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x292f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_292f7c:
    // 0x292f7c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x292f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_292f80:
    // 0x292f80: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x292f80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_292f84:
    // 0x292f84: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x292f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_292f88:
    // 0x292f88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x292f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_292f8c:
    // 0x292f8c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x292f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_292f90:
    // 0x292f90: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x292f90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_292f94:
    // 0x292f94: 0x0  nop
    ctx->pc = 0x292f94u;
    // NOP
label_292f98:
    // 0x292f98: 0x0  nop
    ctx->pc = 0x292f98u;
    // NOP
label_292f9c:
    // 0x292f9c: 0x1010  mfhi        $v0
    ctx->pc = 0x292f9cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_292fa0:
    // 0x292fa0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x292fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_292fa4:
    // 0x292fa4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x292fa4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_292fa8:
    // 0x292fa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_292fac:
    // 0x292fac: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x292facu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_292fb0:
    // 0x292fb0: 0x1000003d  b           . + 4 + (0x3D << 2)
label_292fb4:
    if (ctx->pc == 0x292FB4u) {
        ctx->pc = 0x292FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FB0u;
        // 0x292fb4: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292FB8u;
        goto label_292fb8;
    }
    ctx->pc = 0x292FB0u;
    {
        const bool branch_taken_0x292fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FB0u;
        // 0x292fb4: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292fb0) {
            ctx->pc = 0x2930A8u;
            goto label_2930a8;
        }
    }
    ctx->pc = 0x292FB8u;
label_292fb8:
    // 0x292fb8: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x292fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_292fbc:
    // 0x292fbc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_292fc0:
    if (ctx->pc == 0x292FC0u) {
        ctx->pc = 0x292FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FBCu;
        // 0x292fc0: 0x11243c  dsll32      $a0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292FC4u;
        goto label_292fc4;
    }
    ctx->pc = 0x292FBCu;
    {
        const bool branch_taken_0x292fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FBCu;
        // 0x292fc0: 0x11243c  dsll32      $a0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292fbc) {
            ctx->pc = 0x293008u;
            goto label_293008;
        }
    }
    ctx->pc = 0x292FC4u;
label_292fc4:
    // 0x292fc4: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x292fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_292fc8:
    // 0x292fc8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x292fc8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_292fcc:
    // 0x292fcc: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x292fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_292fd0:
    // 0x292fd0: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x292fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_292fd4:
    // 0x292fd4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x292fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_292fd8:
    // 0x292fd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x292fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_292fdc:
    // 0x292fdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x292fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_292fe0:
    // 0x292fe0: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x292fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_292fe4:
    // 0x292fe4: 0x0  nop
    ctx->pc = 0x292fe4u;
    // NOP
label_292fe8:
    // 0x292fe8: 0x0  nop
    ctx->pc = 0x292fe8u;
    // NOP
label_292fec:
    // 0x292fec: 0x1010  mfhi        $v0
    ctx->pc = 0x292fecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_292ff0:
    // 0x292ff0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x292ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_292ff4:
    // 0x292ff4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x292ff4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_292ff8:
    // 0x292ff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_292ffc:
    // 0x292ffc: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x292ffcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_293000:
    // 0x293000: 0x10000029  b           . + 4 + (0x29 << 2)
label_293004:
    if (ctx->pc == 0x293004u) {
        ctx->pc = 0x293004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293000u;
        // 0x293004: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293008u;
        goto label_293008;
    }
    ctx->pc = 0x293000u;
    {
        const bool branch_taken_0x293000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293000u;
        // 0x293004: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293000) {
            ctx->pc = 0x2930A8u;
            goto label_2930a8;
        }
    }
    ctx->pc = 0x293008u;
label_293008:
    // 0x293008: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x293008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_29300c:
    // 0x29300c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_293010:
    if (ctx->pc == 0x293010u) {
        ctx->pc = 0x293010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29300Cu;
        // 0x293010: 0x11243c  dsll32      $a0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293014u;
        goto label_293014;
    }
    ctx->pc = 0x29300Cu;
    {
        const bool branch_taken_0x29300c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29300Cu;
        // 0x293010: 0x11243c  dsll32      $a0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29300c) {
            ctx->pc = 0x293058u;
            goto label_293058;
        }
    }
    ctx->pc = 0x293014u;
label_293014:
    // 0x293014: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x293014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_293018:
    // 0x293018: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x293018u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_29301c:
    // 0x29301c: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x29301cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_293020:
    // 0x293020: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x293020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_293024:
    // 0x293024: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x293024u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_293028:
    // 0x293028: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x293028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_29302c:
    // 0x29302c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29302cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_293030:
    // 0x293030: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x293030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_293034:
    // 0x293034: 0x0  nop
    ctx->pc = 0x293034u;
    // NOP
label_293038:
    // 0x293038: 0x0  nop
    ctx->pc = 0x293038u;
    // NOP
label_29303c:
    // 0x29303c: 0x1010  mfhi        $v0
    ctx->pc = 0x29303cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_293040:
    // 0x293040: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x293040u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_293044:
    // 0x293044: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x293044u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_293048:
    // 0x293048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x293048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29304c:
    // 0x29304c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x29304cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_293050:
    // 0x293050: 0x10000015  b           . + 4 + (0x15 << 2)
label_293054:
    if (ctx->pc == 0x293054u) {
        ctx->pc = 0x293054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293050u;
        // 0x293054: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293058u;
        goto label_293058;
    }
    ctx->pc = 0x293050u;
    {
        const bool branch_taken_0x293050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293050u;
        // 0x293054: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293050) {
            ctx->pc = 0x2930A8u;
            goto label_2930a8;
        }
    }
    ctx->pc = 0x293058u;
label_293058:
    // 0x293058: 0x96020288  lhu         $v0, 0x288($s0)
    ctx->pc = 0x293058u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
label_29305c:
    // 0x29305c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x29305cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_293060:
    // 0x293060: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_293064:
    if (ctx->pc == 0x293064u) {
        ctx->pc = 0x293064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293060u;
        // 0x293064: 0x11243c  dsll32      $a0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293068u;
        goto label_293068;
    }
    ctx->pc = 0x293060u;
    {
        const bool branch_taken_0x293060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293060u;
        // 0x293064: 0x11243c  dsll32      $a0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293060) {
            ctx->pc = 0x2930A8u;
            goto label_2930a8;
        }
    }
    ctx->pc = 0x293068u;
label_293068:
    // 0x293068: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x293068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_29306c:
    // 0x29306c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x29306cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_293070:
    // 0x293070: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x293070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_293074:
    // 0x293074: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x293074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_293078:
    // 0x293078: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x293078u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29307c:
    // 0x29307c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29307cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_293080:
    // 0x293080: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x293080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_293084:
    // 0x293084: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x293084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_293088:
    // 0x293088: 0x0  nop
    ctx->pc = 0x293088u;
    // NOP
label_29308c:
    // 0x29308c: 0x0  nop
    ctx->pc = 0x29308cu;
    // NOP
label_293090:
    // 0x293090: 0x1010  mfhi        $v0
    ctx->pc = 0x293090u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_293094:
    // 0x293094: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x293094u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_293098:
    // 0x293098: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x293098u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_29309c:
    // 0x29309c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29309cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2930a0:
    // 0x2930a0: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x2930a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_2930a4:
    // 0x2930a4: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2930a4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_2930a8:
    // 0x2930a8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2930a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_2930ac:
    // 0x2930ac: 0x24424950  addiu       $v0, $v0, 0x4950
    ctx->pc = 0x2930acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18768));
label_2930b0:
    // 0x2930b0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2930b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2930b4:
    // 0x2930b4: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x2930b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_2930b8:
    // 0x2930b8: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x2930b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_2930bc:
    // 0x2930bc: 0x9042000a  lbu         $v0, 0xA($v0)
    ctx->pc = 0x2930bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
label_2930c0:
    // 0x2930c0: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x2930c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
label_2930c4:
    // 0x2930c4: 0xa4c30008  sh          $v1, 0x8($a2)
    ctx->pc = 0x2930c4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 3));
label_2930c8:
    // 0x2930c8: 0xa0c2000a  sb          $v0, 0xA($a2)
    ctx->pc = 0x2930c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 2));
label_2930cc:
    // 0x2930cc: 0x926507b3  lbu         $a1, 0x7B3($s3)
    ctx->pc = 0x2930ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1971)));
label_2930d0:
    // 0x2930d0: 0xc096970  jal         func_25A5C0
label_2930d4:
    if (ctx->pc == 0x2930D4u) {
        ctx->pc = 0x2930D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930D0u;
        // 0x2930d4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2930D8u;
        goto label_2930d8;
    }
    ctx->pc = 0x2930D0u;
    SET_GPR_U32(ctx, 31, 0x2930D8u);
    ctx->pc = 0x2930D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2930D0u;
    // 0x2930d4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2930D0u, 0x2930D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2930D8u;
label_2930d8:
    // 0x2930d8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2930d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2930dc:
    // 0x2930dc: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x2930dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
label_2930e0:
    // 0x2930e0: 0x90440080  lbu         $a0, 0x80($v0)
    ctx->pc = 0x2930e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 128)));
label_2930e4:
    // 0x2930e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2930e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2930e8:
    // 0x2930e8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2930e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2930ec:
    // 0x2930ec: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x2930ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_2930f0:
    // 0x2930f0: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x2930f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_2930f4:
    // 0x2930f4: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x2930f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2930f8:
    // 0x2930f8: 0x0  nop
    ctx->pc = 0x2930f8u;
    // NOP
label_2930fc:
    // 0x2930fc: 0x0  nop
    ctx->pc = 0x2930fcu;
    // NOP
label_293100:
    // 0x293100: 0x1010  mfhi        $v0
    ctx->pc = 0x293100u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_293104:
    // 0x293104: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x293104u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_293108:
    // 0x293108: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x293108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_29310c:
    // 0x29310c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29310cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_293110:
    // 0x293110: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x293110u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_293114:
    // 0x293114: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
label_293118:
    if (ctx->pc == 0x293118u) {
        ctx->pc = 0x293118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293114u;
        // 0x293118: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29311Cu;
        goto label_29311c;
    }
    ctx->pc = 0x293114u;
    {
        const bool branch_taken_0x293114 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x293118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293114u;
        // 0x293118: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293114) {
            ctx->pc = 0x293180u;
            goto label_293180;
        }
    }
    ctx->pc = 0x29311Cu;
label_29311c:
    // 0x29311c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x29311cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_293120:
    // 0x293120: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x293120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_293124:
    // 0x293124: 0xc64000b8  lwc1        $f0, 0xB8($s2)
    ctx->pc = 0x293124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293128:
    // 0x293128: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x293128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_29312c:
    // 0x29312c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29312cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_293130:
    // 0x293130: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x293130u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_293134:
    // 0x293134: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x293134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_293138:
    // 0x293138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29313c:
    // 0x29313c: 0x0  nop
    ctx->pc = 0x29313cu;
    // NOP
label_293140:
    // 0x293140: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x293140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_293144:
    // 0x293144: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x293144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_293148:
    // 0x293148: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_29314c:
    if (ctx->pc == 0x29314Cu) {
        ctx->pc = 0x293150u;
        goto label_293150;
    }
    ctx->pc = 0x293148u;
    {
        const bool branch_taken_0x293148 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x293148) {
            ctx->pc = 0x293160u;
            goto label_293160;
        }
    }
    ctx->pc = 0x293150u;
label_293150:
    // 0x293150: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x293150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_293154:
    // 0x293154: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x293154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_293158:
    // 0x293158: 0x10000008  b           . + 4 + (0x8 << 2)
label_29315c:
    if (ctx->pc == 0x29315Cu) {
        ctx->pc = 0x29315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293158u;
        // 0x29315c: 0x38c3c  dsll32      $s1, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293160u;
        goto label_293160;
    }
    ctx->pc = 0x293158u;
    {
        const bool branch_taken_0x293158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293158u;
        // 0x29315c: 0x38c3c  dsll32      $s1, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293158) {
            ctx->pc = 0x29317Cu;
            goto label_29317c;
        }
    }
    ctx->pc = 0x293160u;
label_293160:
    // 0x293160: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x293160u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_293164:
    // 0x293164: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x293164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_293168:
    // 0x293168: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x293168u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_29316c:
    // 0x29316c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29316cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_293170:
    // 0x293170: 0x0  nop
    ctx->pc = 0x293170u;
    // NOP
label_293174:
    // 0x293174: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x293174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_293178:
    // 0x293178: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x293178u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
label_29317c:
    // 0x29317c: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x29317cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_293180:
    // 0x293180: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_293184:
    if (ctx->pc == 0x293184u) {
        ctx->pc = 0x293184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293180u;
        // 0x293184: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x293188u;
        goto label_293188;
    }
    ctx->pc = 0x293180u;
    {
        const bool branch_taken_0x293180 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x293184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293180u;
        // 0x293184: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x293180) {
            ctx->pc = 0x2931C0u;
            goto label_2931c0;
        }
    }
    ctx->pc = 0x293188u;
label_293188:
    // 0x293188: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x293188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_29318c:
    // 0x29318c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x29318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_293190:
    // 0x293190: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_293194:
    if (ctx->pc == 0x293194u) {
        ctx->pc = 0x293198u;
        goto label_293198;
    }
    ctx->pc = 0x293190u;
    {
        const bool branch_taken_0x293190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293190) {
            ctx->pc = 0x2931A0u;
            goto label_2931a0;
        }
    }
    ctx->pc = 0x293198u;
label_293198:
    // 0x293198: 0x64050002  daddiu      $a1, $zero, 0x2
    ctx->pc = 0x293198u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_29319c:
    // 0x29319c: 0x0  nop
    ctx->pc = 0x29319cu;
    // NOP
label_2931a0:
    // 0x2931a0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2931a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2931a4:
    // 0x2931a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2931a8:
    if (ctx->pc == 0x2931A8u) {
        ctx->pc = 0x2931ACu;
        goto label_2931ac;
    }
    ctx->pc = 0x2931A4u;
    {
        const bool branch_taken_0x2931a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2931a4) {
            ctx->pc = 0x2931C0u;
            goto label_2931c0;
        }
    }
    ctx->pc = 0x2931ACu;
label_2931ac:
    // 0x2931ac: 0x96020286  lhu         $v0, 0x286($s0)
    ctx->pc = 0x2931acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 646)));
label_2931b0:
    // 0x2931b0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2931b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_2931b4:
    // 0x2931b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2931b8:
    if (ctx->pc == 0x2931B8u) {
        ctx->pc = 0x2931BCu;
        goto label_2931bc;
    }
    ctx->pc = 0x2931B4u;
    {
        const bool branch_taken_0x2931b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2931b4) {
            ctx->pc = 0x2931C0u;
            goto label_2931c0;
        }
    }
    ctx->pc = 0x2931BCu;
label_2931bc:
    // 0x2931bc: 0x64050004  daddiu      $a1, $zero, 0x4
    ctx->pc = 0x2931bcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_2931c0:
    // 0x2931c0: 0xc0dad54  jal         func_36B550
label_2931c4:
    if (ctx->pc == 0x2931C4u) {
        ctx->pc = 0x2931C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931C0u;
        // 0x2931c4: 0x92040002  lbu         $a0, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2931C8u;
        goto label_2931c8;
    }
    ctx->pc = 0x2931C0u;
    SET_GPR_U32(ctx, 31, 0x2931C8u);
    ctx->pc = 0x2931C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2931C0u;
    // 0x2931c4: 0x92040002  lbu         $a0, 0x2($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B550u, 0x2931C0u, 0x2931C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2931C8u;
label_2931c8:
    // 0x2931c8: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x2931c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
label_2931cc:
    // 0x2931cc: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_2931d0:
    if (ctx->pc == 0x2931D0u) {
        ctx->pc = 0x2931D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931CCu;
        // 0x2931d0: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2931D4u;
        goto label_2931d4;
    }
    ctx->pc = 0x2931CCu;
    {
        const bool branch_taken_0x2931cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2931D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931CCu;
        // 0x2931d0: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931cc) {
            ctx->pc = 0x293218u;
            goto label_293218;
        }
    }
    ctx->pc = 0x2931D4u;
label_2931d4:
    // 0x2931d4: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x2931d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_2931d8:
    // 0x2931d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2931d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2931dc:
    // 0x2931dc: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_2931e0:
    if (ctx->pc == 0x2931E0u) {
        ctx->pc = 0x2931E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931DCu;
        // 0x2931e0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2931E4u;
        goto label_2931e4;
    }
    ctx->pc = 0x2931DCu;
    {
        const bool branch_taken_0x2931dc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2931E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931DCu;
        // 0x2931e0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931dc) {
            ctx->pc = 0x2931F8u;
            goto label_2931f8;
        }
    }
    ctx->pc = 0x2931E4u;
label_2931e4:
    // 0x2931e4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2931e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2931e8:
    // 0x2931e8: 0xc0414ca  jal         func_105328
label_2931ec:
    if (ctx->pc == 0x2931ECu) {
        ctx->pc = 0x2931ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931E8u;
        // 0x2931ec: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2931F0u;
        goto label_2931f0;
    }
    ctx->pc = 0x2931E8u;
    SET_GPR_U32(ctx, 31, 0x2931F0u);
    ctx->pc = 0x2931ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2931E8u;
    // 0x2931ec: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2931E8u, 0x2931F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2931F0u;
label_2931f0:
    // 0x2931f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2931f4:
    if (ctx->pc == 0x2931F4u) {
        ctx->pc = 0x2931F8u;
        goto label_2931f8;
    }
    ctx->pc = 0x2931F0u;
    {
        const bool branch_taken_0x2931f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2931f0) {
            ctx->pc = 0x293200u;
            goto label_293200;
        }
    }
    ctx->pc = 0x2931F8u;
label_2931f8:
    // 0x2931f8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2931f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2931fc:
    // 0x2931fc: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2931fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_293200:
    // 0x293200: 0x3227ffff  andi        $a3, $s1, 0xFFFF
    ctx->pc = 0x293200u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_293204:
    // 0x293204: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x293204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_293208:
    // 0x293208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x293208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29320c:
    // 0x29320c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x29320cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_293210:
    // 0x293210: 0xc0c9acc  jal         func_326B30
label_293214:
    if (ctx->pc == 0x293214u) {
        ctx->pc = 0x293214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293210u;
        // 0x293214: 0x26060090  addiu       $a2, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293218u;
        goto label_293218;
    }
    ctx->pc = 0x293210u;
    SET_GPR_U32(ctx, 31, 0x293218u);
    ctx->pc = 0x293214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293210u;
    // 0x293214: 0x26060090  addiu       $a2, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326B30u, 0x293210u, 0x293218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293218u;
label_293218:
    // 0x293218: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x293218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_29321c:
    // 0x29321c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29321cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_293220:
    // 0x293220: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
label_293224:
    if (ctx->pc == 0x293224u) {
        ctx->pc = 0x293228u;
        goto label_293228;
    }
    ctx->pc = 0x293220u;
    {
        const bool branch_taken_0x293220 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x293220) {
            ctx->pc = 0x2932C0u;
            goto label_2932c0;
        }
    }
    ctx->pc = 0x293228u;
label_293228:
    // 0x293228: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_29322c:
    if (ctx->pc == 0x29322Cu) {
        ctx->pc = 0x29322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293228u;
        // 0x29322c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293230u;
        goto label_293230;
    }
    ctx->pc = 0x293228u;
    {
        const bool branch_taken_0x293228 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293228u;
        // 0x29322c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293228) {
            ctx->pc = 0x293248u;
            goto label_293248;
        }
    }
    ctx->pc = 0x293230u;
label_293230:
    // 0x293230: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x293230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_293234:
    // 0x293234: 0xc0414d0  jal         func_105340
label_293238:
    if (ctx->pc == 0x293238u) {
        ctx->pc = 0x293238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293234u;
        // 0x293238: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29323Cu;
        goto label_29323c;
    }
    ctx->pc = 0x293234u;
    SET_GPR_U32(ctx, 31, 0x29323Cu);
    ctx->pc = 0x293238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293234u;
    // 0x293238: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x293234u, 0x29323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29323Cu;
label_29323c:
    // 0x29323c: 0x10000004  b           . + 4 + (0x4 << 2)
label_293240:
    if (ctx->pc == 0x293240u) {
        ctx->pc = 0x293244u;
        goto label_293244;
    }
    ctx->pc = 0x29323Cu;
    {
        const bool branch_taken_0x29323c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29323c) {
            ctx->pc = 0x293250u;
            goto label_293250;
        }
    }
    ctx->pc = 0x293244u;
label_293244:
    // 0x293244: 0x0  nop
    ctx->pc = 0x293244u;
    // NOP
label_293248:
    // 0x293248: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x293248u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29324c:
    // 0x29324c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x29324cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_293250:
    // 0x293250: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x293250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_293254:
    // 0x293254: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x293254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_293258:
    // 0x293258: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x293258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29325c:
    // 0x29325c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x29325cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_293260:
    // 0x293260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293264:
    // 0x293264: 0x0  nop
    ctx->pc = 0x293264u;
    // NOP
label_293268:
    // 0x293268: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x293268u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_29326c:
    // 0x29326c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29326cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_293270:
    // 0x293270: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_293274:
    if (ctx->pc == 0x293274u) {
        ctx->pc = 0x293278u;
        goto label_293278;
    }
    ctx->pc = 0x293270u;
    {
        const bool branch_taken_0x293270 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x293270) {
            ctx->pc = 0x293288u;
            goto label_293288;
        }
    }
    ctx->pc = 0x293278u;
label_293278:
    // 0x293278: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x293278u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_29327c:
    // 0x29327c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x29327cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_293280:
    // 0x293280: 0x10000008  b           . + 4 + (0x8 << 2)
label_293284:
    if (ctx->pc == 0x293284u) {
        ctx->pc = 0x293284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293280u;
        // 0x293284: 0x12343c  dsll32      $a2, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293288u;
        goto label_293288;
    }
    ctx->pc = 0x293280u;
    {
        const bool branch_taken_0x293280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293280u;
        // 0x293284: 0x12343c  dsll32      $a2, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293280) {
            ctx->pc = 0x2932A4u;
            goto label_2932a4;
        }
    }
    ctx->pc = 0x293288u;
label_293288:
    // 0x293288: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x293288u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_29328c:
    // 0x29328c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29328cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_293290:
    // 0x293290: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x293290u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_293294:
    // 0x293294: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x293294u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_293298:
    // 0x293298: 0x0  nop
    ctx->pc = 0x293298u;
    // NOP
label_29329c:
    // 0x29329c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x29329cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_2932a0:
    // 0x2932a0: 0x12343c  dsll32      $a2, $s2, 16
    ctx->pc = 0x2932a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 16));
label_2932a4:
    // 0x2932a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2932a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2932a8:
    // 0x2932a8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2932a8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_2932ac:
    // 0x2932ac: 0x27848ba0  addiu       $a0, $gp, -0x7460
    ctx->pc = 0x2932acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937504));
label_2932b0:
    // 0x2932b0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2932b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2932b4:
    // 0x2932b4: 0xc0d1a84  jal         func_346A10
label_2932b8:
    if (ctx->pc == 0x2932B8u) {
        ctx->pc = 0x2932B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932B4u;
        // 0x2932b8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2932BCu;
        goto label_2932bc;
    }
    ctx->pc = 0x2932B4u;
    SET_GPR_U32(ctx, 31, 0x2932BCu);
    ctx->pc = 0x2932B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2932B4u;
    // 0x2932b8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346A10u, 0x2932B4u, 0x2932BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2932BCu;
label_2932bc:
    // 0x2932bc: 0x0  nop
    ctx->pc = 0x2932bcu;
    // NOP
label_2932c0:
    // 0x2932c0: 0x8e0208d8  lw          $v0, 0x8D8($s0)
    ctx->pc = 0x2932c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2264)));
label_2932c4:
    // 0x2932c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2932c8:
    if (ctx->pc == 0x2932C8u) {
        ctx->pc = 0x2932CCu;
        goto label_2932cc;
    }
    ctx->pc = 0x2932C4u;
    {
        const bool branch_taken_0x2932c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2932c4) {
            ctx->pc = 0x2932E0u;
            goto label_2932e0;
        }
    }
    ctx->pc = 0x2932CCu;
label_2932cc:
    // 0x2932cc: 0x8e0508dc  lw          $a1, 0x8DC($s0)
    ctx->pc = 0x2932ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2268)));
label_2932d0:
    // 0x2932d0: 0x40f809  jalr        $v0
label_2932d4:
    if (ctx->pc == 0x2932D4u) {
        ctx->pc = 0x2932D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932D0u;
        // 0x2932d4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2932D8u;
        goto label_2932d8;
    }
    ctx->pc = 0x2932D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2932D8u);
        ctx->pc = 0x2932D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932D0u;
        // 0x2932d4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2932D0u, 0x2932D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2932D8u;
label_2932d8:
    // 0x2932d8: 0xae0008d8  sw          $zero, 0x8D8($s0)
    ctx->pc = 0x2932d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2264), GPR_U32(ctx, 0));
label_2932dc:
    // 0x2932dc: 0x0  nop
    ctx->pc = 0x2932dcu;
    // NOP
label_2932e0:
    // 0x2932e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2932e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2932e4:
    // 0x2932e4: 0x0  nop
    ctx->pc = 0x2932e4u;
    // NOP
label_2932e8:
    // 0x2932e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2932e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2932ec:
    // 0x2932ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2932ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2932f0:
    // 0x2932f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2932f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2932f4:
    // 0x2932f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2932f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2932f8:
    // 0x2932f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2932f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2932fc:
    // 0x2932fc: 0x3e00008  jr          $ra
label_293300:
    if (ctx->pc == 0x293300u) {
        ctx->pc = 0x293300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932FCu;
        // 0x293300: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293304u;
        goto label_fallthrough_0x2932fc;
    }
    ctx->pc = 0x2932FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932FCu;
        // 0x293300: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2932FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2932fc:
    ctx->pc = 0x293304u;
}
