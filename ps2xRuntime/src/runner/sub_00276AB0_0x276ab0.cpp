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

// Function: sub_00276AB0
// Address: 0x276ab0 - 0x277414
void sub_00276AB0_0x276ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276AB0_0x276ab0");
#endif

    switch (ctx->pc) {
        case 0x276ab0u: goto label_276ab0;
        case 0x276ab4u: goto label_276ab4;
        case 0x276ab8u: goto label_276ab8;
        case 0x276abcu: goto label_276abc;
        case 0x276ac0u: goto label_276ac0;
        case 0x276ac4u: goto label_276ac4;
        case 0x276ac8u: goto label_276ac8;
        case 0x276accu: goto label_276acc;
        case 0x276ad0u: goto label_276ad0;
        case 0x276ad4u: goto label_276ad4;
        case 0x276ad8u: goto label_276ad8;
        case 0x276adcu: goto label_276adc;
        case 0x276ae0u: goto label_276ae0;
        case 0x276ae4u: goto label_276ae4;
        case 0x276ae8u: goto label_276ae8;
        case 0x276aecu: goto label_276aec;
        case 0x276af0u: goto label_276af0;
        case 0x276af4u: goto label_276af4;
        case 0x276af8u: goto label_276af8;
        case 0x276afcu: goto label_276afc;
        case 0x276b00u: goto label_276b00;
        case 0x276b04u: goto label_276b04;
        case 0x276b08u: goto label_276b08;
        case 0x276b0cu: goto label_276b0c;
        case 0x276b10u: goto label_276b10;
        case 0x276b14u: goto label_276b14;
        case 0x276b18u: goto label_276b18;
        case 0x276b1cu: goto label_276b1c;
        case 0x276b20u: goto label_276b20;
        case 0x276b24u: goto label_276b24;
        case 0x276b28u: goto label_276b28;
        case 0x276b2cu: goto label_276b2c;
        case 0x276b30u: goto label_276b30;
        case 0x276b34u: goto label_276b34;
        case 0x276b38u: goto label_276b38;
        case 0x276b3cu: goto label_276b3c;
        case 0x276b40u: goto label_276b40;
        case 0x276b44u: goto label_276b44;
        case 0x276b48u: goto label_276b48;
        case 0x276b4cu: goto label_276b4c;
        case 0x276b50u: goto label_276b50;
        case 0x276b54u: goto label_276b54;
        case 0x276b58u: goto label_276b58;
        case 0x276b5cu: goto label_276b5c;
        case 0x276b60u: goto label_276b60;
        case 0x276b64u: goto label_276b64;
        case 0x276b68u: goto label_276b68;
        case 0x276b6cu: goto label_276b6c;
        case 0x276b70u: goto label_276b70;
        case 0x276b74u: goto label_276b74;
        case 0x276b78u: goto label_276b78;
        case 0x276b7cu: goto label_276b7c;
        case 0x276b80u: goto label_276b80;
        case 0x276b84u: goto label_276b84;
        case 0x276b88u: goto label_276b88;
        case 0x276b8cu: goto label_276b8c;
        case 0x276b90u: goto label_276b90;
        case 0x276b94u: goto label_276b94;
        case 0x276b98u: goto label_276b98;
        case 0x276b9cu: goto label_276b9c;
        case 0x276ba0u: goto label_276ba0;
        case 0x276ba4u: goto label_276ba4;
        case 0x276ba8u: goto label_276ba8;
        case 0x276bacu: goto label_276bac;
        case 0x276bb0u: goto label_276bb0;
        case 0x276bb4u: goto label_276bb4;
        case 0x276bb8u: goto label_276bb8;
        case 0x276bbcu: goto label_276bbc;
        case 0x276bc0u: goto label_276bc0;
        case 0x276bc4u: goto label_276bc4;
        case 0x276bc8u: goto label_276bc8;
        case 0x276bccu: goto label_276bcc;
        case 0x276bd0u: goto label_276bd0;
        case 0x276bd4u: goto label_276bd4;
        case 0x276bd8u: goto label_276bd8;
        case 0x276bdcu: goto label_276bdc;
        case 0x276be0u: goto label_276be0;
        case 0x276be4u: goto label_276be4;
        case 0x276be8u: goto label_276be8;
        case 0x276becu: goto label_276bec;
        case 0x276bf0u: goto label_276bf0;
        case 0x276bf4u: goto label_276bf4;
        case 0x276bf8u: goto label_276bf8;
        case 0x276bfcu: goto label_276bfc;
        case 0x276c00u: goto label_276c00;
        case 0x276c04u: goto label_276c04;
        case 0x276c08u: goto label_276c08;
        case 0x276c0cu: goto label_276c0c;
        case 0x276c10u: goto label_276c10;
        case 0x276c14u: goto label_276c14;
        case 0x276c18u: goto label_276c18;
        case 0x276c1cu: goto label_276c1c;
        case 0x276c20u: goto label_276c20;
        case 0x276c24u: goto label_276c24;
        case 0x276c28u: goto label_276c28;
        case 0x276c2cu: goto label_276c2c;
        case 0x276c30u: goto label_276c30;
        case 0x276c34u: goto label_276c34;
        case 0x276c38u: goto label_276c38;
        case 0x276c3cu: goto label_276c3c;
        case 0x276c40u: goto label_276c40;
        case 0x276c44u: goto label_276c44;
        case 0x276c48u: goto label_276c48;
        case 0x276c4cu: goto label_276c4c;
        case 0x276c50u: goto label_276c50;
        case 0x276c54u: goto label_276c54;
        case 0x276c58u: goto label_276c58;
        case 0x276c5cu: goto label_276c5c;
        case 0x276c60u: goto label_276c60;
        case 0x276c64u: goto label_276c64;
        case 0x276c68u: goto label_276c68;
        case 0x276c6cu: goto label_276c6c;
        case 0x276c70u: goto label_276c70;
        case 0x276c74u: goto label_276c74;
        case 0x276c78u: goto label_276c78;
        case 0x276c7cu: goto label_276c7c;
        case 0x276c80u: goto label_276c80;
        case 0x276c84u: goto label_276c84;
        case 0x276c88u: goto label_276c88;
        case 0x276c8cu: goto label_276c8c;
        case 0x276c90u: goto label_276c90;
        case 0x276c94u: goto label_276c94;
        case 0x276c98u: goto label_276c98;
        case 0x276c9cu: goto label_276c9c;
        case 0x276ca0u: goto label_276ca0;
        case 0x276ca4u: goto label_276ca4;
        case 0x276ca8u: goto label_276ca8;
        case 0x276cacu: goto label_276cac;
        case 0x276cb0u: goto label_276cb0;
        case 0x276cb4u: goto label_276cb4;
        case 0x276cb8u: goto label_276cb8;
        case 0x276cbcu: goto label_276cbc;
        case 0x276cc0u: goto label_276cc0;
        case 0x276cc4u: goto label_276cc4;
        case 0x276cc8u: goto label_276cc8;
        case 0x276cccu: goto label_276ccc;
        case 0x276cd0u: goto label_276cd0;
        case 0x276cd4u: goto label_276cd4;
        case 0x276cd8u: goto label_276cd8;
        case 0x276cdcu: goto label_276cdc;
        case 0x276ce0u: goto label_276ce0;
        case 0x276ce4u: goto label_276ce4;
        case 0x276ce8u: goto label_276ce8;
        case 0x276cecu: goto label_276cec;
        case 0x276cf0u: goto label_276cf0;
        case 0x276cf4u: goto label_276cf4;
        case 0x276cf8u: goto label_276cf8;
        case 0x276cfcu: goto label_276cfc;
        case 0x276d00u: goto label_276d00;
        case 0x276d04u: goto label_276d04;
        case 0x276d08u: goto label_276d08;
        case 0x276d0cu: goto label_276d0c;
        case 0x276d10u: goto label_276d10;
        case 0x276d14u: goto label_276d14;
        case 0x276d18u: goto label_276d18;
        case 0x276d1cu: goto label_276d1c;
        case 0x276d20u: goto label_276d20;
        case 0x276d24u: goto label_276d24;
        case 0x276d28u: goto label_276d28;
        case 0x276d2cu: goto label_276d2c;
        case 0x276d30u: goto label_276d30;
        case 0x276d34u: goto label_276d34;
        case 0x276d38u: goto label_276d38;
        case 0x276d3cu: goto label_276d3c;
        case 0x276d40u: goto label_276d40;
        case 0x276d44u: goto label_276d44;
        case 0x276d48u: goto label_276d48;
        case 0x276d4cu: goto label_276d4c;
        case 0x276d50u: goto label_276d50;
        case 0x276d54u: goto label_276d54;
        case 0x276d58u: goto label_276d58;
        case 0x276d5cu: goto label_276d5c;
        case 0x276d60u: goto label_276d60;
        case 0x276d64u: goto label_276d64;
        case 0x276d68u: goto label_276d68;
        case 0x276d6cu: goto label_276d6c;
        case 0x276d70u: goto label_276d70;
        case 0x276d74u: goto label_276d74;
        case 0x276d78u: goto label_276d78;
        case 0x276d7cu: goto label_276d7c;
        case 0x276d80u: goto label_276d80;
        case 0x276d84u: goto label_276d84;
        case 0x276d88u: goto label_276d88;
        case 0x276d8cu: goto label_276d8c;
        case 0x276d90u: goto label_276d90;
        case 0x276d94u: goto label_276d94;
        case 0x276d98u: goto label_276d98;
        case 0x276d9cu: goto label_276d9c;
        case 0x276da0u: goto label_276da0;
        case 0x276da4u: goto label_276da4;
        case 0x276da8u: goto label_276da8;
        case 0x276dacu: goto label_276dac;
        case 0x276db0u: goto label_276db0;
        case 0x276db4u: goto label_276db4;
        case 0x276db8u: goto label_276db8;
        case 0x276dbcu: goto label_276dbc;
        case 0x276dc0u: goto label_276dc0;
        case 0x276dc4u: goto label_276dc4;
        case 0x276dc8u: goto label_276dc8;
        case 0x276dccu: goto label_276dcc;
        case 0x276dd0u: goto label_276dd0;
        case 0x276dd4u: goto label_276dd4;
        case 0x276dd8u: goto label_276dd8;
        case 0x276ddcu: goto label_276ddc;
        case 0x276de0u: goto label_276de0;
        case 0x276de4u: goto label_276de4;
        case 0x276de8u: goto label_276de8;
        case 0x276decu: goto label_276dec;
        case 0x276df0u: goto label_276df0;
        case 0x276df4u: goto label_276df4;
        case 0x276df8u: goto label_276df8;
        case 0x276dfcu: goto label_276dfc;
        case 0x276e00u: goto label_276e00;
        case 0x276e04u: goto label_276e04;
        case 0x276e08u: goto label_276e08;
        case 0x276e0cu: goto label_276e0c;
        case 0x276e10u: goto label_276e10;
        case 0x276e14u: goto label_276e14;
        case 0x276e18u: goto label_276e18;
        case 0x276e1cu: goto label_276e1c;
        case 0x276e20u: goto label_276e20;
        case 0x276e24u: goto label_276e24;
        case 0x276e28u: goto label_276e28;
        case 0x276e2cu: goto label_276e2c;
        case 0x276e30u: goto label_276e30;
        case 0x276e34u: goto label_276e34;
        case 0x276e38u: goto label_276e38;
        case 0x276e3cu: goto label_276e3c;
        case 0x276e40u: goto label_276e40;
        case 0x276e44u: goto label_276e44;
        case 0x276e48u: goto label_276e48;
        case 0x276e4cu: goto label_276e4c;
        case 0x276e50u: goto label_276e50;
        case 0x276e54u: goto label_276e54;
        case 0x276e58u: goto label_276e58;
        case 0x276e5cu: goto label_276e5c;
        case 0x276e60u: goto label_276e60;
        case 0x276e64u: goto label_276e64;
        case 0x276e68u: goto label_276e68;
        case 0x276e6cu: goto label_276e6c;
        case 0x276e70u: goto label_276e70;
        case 0x276e74u: goto label_276e74;
        case 0x276e78u: goto label_276e78;
        case 0x276e7cu: goto label_276e7c;
        case 0x276e80u: goto label_276e80;
        case 0x276e84u: goto label_276e84;
        case 0x276e88u: goto label_276e88;
        case 0x276e8cu: goto label_276e8c;
        case 0x276e90u: goto label_276e90;
        case 0x276e94u: goto label_276e94;
        case 0x276e98u: goto label_276e98;
        case 0x276e9cu: goto label_276e9c;
        case 0x276ea0u: goto label_276ea0;
        case 0x276ea4u: goto label_276ea4;
        case 0x276ea8u: goto label_276ea8;
        case 0x276eacu: goto label_276eac;
        case 0x276eb0u: goto label_276eb0;
        case 0x276eb4u: goto label_276eb4;
        case 0x276eb8u: goto label_276eb8;
        case 0x276ebcu: goto label_276ebc;
        case 0x276ec0u: goto label_276ec0;
        case 0x276ec4u: goto label_276ec4;
        case 0x276ec8u: goto label_276ec8;
        case 0x276eccu: goto label_276ecc;
        case 0x276ed0u: goto label_276ed0;
        case 0x276ed4u: goto label_276ed4;
        case 0x276ed8u: goto label_276ed8;
        case 0x276edcu: goto label_276edc;
        case 0x276ee0u: goto label_276ee0;
        case 0x276ee4u: goto label_276ee4;
        case 0x276ee8u: goto label_276ee8;
        case 0x276eecu: goto label_276eec;
        case 0x276ef0u: goto label_276ef0;
        case 0x276ef4u: goto label_276ef4;
        case 0x276ef8u: goto label_276ef8;
        case 0x276efcu: goto label_276efc;
        case 0x276f00u: goto label_276f00;
        case 0x276f04u: goto label_276f04;
        case 0x276f08u: goto label_276f08;
        case 0x276f0cu: goto label_276f0c;
        case 0x276f10u: goto label_276f10;
        case 0x276f14u: goto label_276f14;
        case 0x276f18u: goto label_276f18;
        case 0x276f1cu: goto label_276f1c;
        case 0x276f20u: goto label_276f20;
        case 0x276f24u: goto label_276f24;
        case 0x276f28u: goto label_276f28;
        case 0x276f2cu: goto label_276f2c;
        case 0x276f30u: goto label_276f30;
        case 0x276f34u: goto label_276f34;
        case 0x276f38u: goto label_276f38;
        case 0x276f3cu: goto label_276f3c;
        case 0x276f40u: goto label_276f40;
        case 0x276f44u: goto label_276f44;
        case 0x276f48u: goto label_276f48;
        case 0x276f4cu: goto label_276f4c;
        case 0x276f50u: goto label_276f50;
        case 0x276f54u: goto label_276f54;
        case 0x276f58u: goto label_276f58;
        case 0x276f5cu: goto label_276f5c;
        case 0x276f60u: goto label_276f60;
        case 0x276f64u: goto label_276f64;
        case 0x276f68u: goto label_276f68;
        case 0x276f6cu: goto label_276f6c;
        case 0x276f70u: goto label_276f70;
        case 0x276f74u: goto label_276f74;
        case 0x276f78u: goto label_276f78;
        case 0x276f7cu: goto label_276f7c;
        case 0x276f80u: goto label_276f80;
        case 0x276f84u: goto label_276f84;
        case 0x276f88u: goto label_276f88;
        case 0x276f8cu: goto label_276f8c;
        case 0x276f90u: goto label_276f90;
        case 0x276f94u: goto label_276f94;
        case 0x276f98u: goto label_276f98;
        case 0x276f9cu: goto label_276f9c;
        case 0x276fa0u: goto label_276fa0;
        case 0x276fa4u: goto label_276fa4;
        case 0x276fa8u: goto label_276fa8;
        case 0x276facu: goto label_276fac;
        case 0x276fb0u: goto label_276fb0;
        case 0x276fb4u: goto label_276fb4;
        case 0x276fb8u: goto label_276fb8;
        case 0x276fbcu: goto label_276fbc;
        case 0x276fc0u: goto label_276fc0;
        case 0x276fc4u: goto label_276fc4;
        case 0x276fc8u: goto label_276fc8;
        case 0x276fccu: goto label_276fcc;
        case 0x276fd0u: goto label_276fd0;
        case 0x276fd4u: goto label_276fd4;
        case 0x276fd8u: goto label_276fd8;
        case 0x276fdcu: goto label_276fdc;
        case 0x276fe0u: goto label_276fe0;
        case 0x276fe4u: goto label_276fe4;
        case 0x276fe8u: goto label_276fe8;
        case 0x276fecu: goto label_276fec;
        case 0x276ff0u: goto label_276ff0;
        case 0x276ff4u: goto label_276ff4;
        case 0x276ff8u: goto label_276ff8;
        case 0x276ffcu: goto label_276ffc;
        case 0x277000u: goto label_277000;
        case 0x277004u: goto label_277004;
        case 0x277008u: goto label_277008;
        case 0x27700cu: goto label_27700c;
        case 0x277010u: goto label_277010;
        case 0x277014u: goto label_277014;
        case 0x277018u: goto label_277018;
        case 0x27701cu: goto label_27701c;
        case 0x277020u: goto label_277020;
        case 0x277024u: goto label_277024;
        case 0x277028u: goto label_277028;
        case 0x27702cu: goto label_27702c;
        case 0x277030u: goto label_277030;
        case 0x277034u: goto label_277034;
        case 0x277038u: goto label_277038;
        case 0x27703cu: goto label_27703c;
        case 0x277040u: goto label_277040;
        case 0x277044u: goto label_277044;
        case 0x277048u: goto label_277048;
        case 0x27704cu: goto label_27704c;
        case 0x277050u: goto label_277050;
        case 0x277054u: goto label_277054;
        case 0x277058u: goto label_277058;
        case 0x27705cu: goto label_27705c;
        case 0x277060u: goto label_277060;
        case 0x277064u: goto label_277064;
        case 0x277068u: goto label_277068;
        case 0x27706cu: goto label_27706c;
        case 0x277070u: goto label_277070;
        case 0x277074u: goto label_277074;
        case 0x277078u: goto label_277078;
        case 0x27707cu: goto label_27707c;
        case 0x277080u: goto label_277080;
        case 0x277084u: goto label_277084;
        case 0x277088u: goto label_277088;
        case 0x27708cu: goto label_27708c;
        case 0x277090u: goto label_277090;
        case 0x277094u: goto label_277094;
        case 0x277098u: goto label_277098;
        case 0x27709cu: goto label_27709c;
        case 0x2770a0u: goto label_2770a0;
        case 0x2770a4u: goto label_2770a4;
        case 0x2770a8u: goto label_2770a8;
        case 0x2770acu: goto label_2770ac;
        case 0x2770b0u: goto label_2770b0;
        case 0x2770b4u: goto label_2770b4;
        case 0x2770b8u: goto label_2770b8;
        case 0x2770bcu: goto label_2770bc;
        case 0x2770c0u: goto label_2770c0;
        case 0x2770c4u: goto label_2770c4;
        case 0x2770c8u: goto label_2770c8;
        case 0x2770ccu: goto label_2770cc;
        case 0x2770d0u: goto label_2770d0;
        case 0x2770d4u: goto label_2770d4;
        case 0x2770d8u: goto label_2770d8;
        case 0x2770dcu: goto label_2770dc;
        case 0x2770e0u: goto label_2770e0;
        case 0x2770e4u: goto label_2770e4;
        case 0x2770e8u: goto label_2770e8;
        case 0x2770ecu: goto label_2770ec;
        case 0x2770f0u: goto label_2770f0;
        case 0x2770f4u: goto label_2770f4;
        case 0x2770f8u: goto label_2770f8;
        case 0x2770fcu: goto label_2770fc;
        case 0x277100u: goto label_277100;
        case 0x277104u: goto label_277104;
        case 0x277108u: goto label_277108;
        case 0x27710cu: goto label_27710c;
        case 0x277110u: goto label_277110;
        case 0x277114u: goto label_277114;
        case 0x277118u: goto label_277118;
        case 0x27711cu: goto label_27711c;
        case 0x277120u: goto label_277120;
        case 0x277124u: goto label_277124;
        case 0x277128u: goto label_277128;
        case 0x27712cu: goto label_27712c;
        case 0x277130u: goto label_277130;
        case 0x277134u: goto label_277134;
        case 0x277138u: goto label_277138;
        case 0x27713cu: goto label_27713c;
        case 0x277140u: goto label_277140;
        case 0x277144u: goto label_277144;
        case 0x277148u: goto label_277148;
        case 0x27714cu: goto label_27714c;
        case 0x277150u: goto label_277150;
        case 0x277154u: goto label_277154;
        case 0x277158u: goto label_277158;
        case 0x27715cu: goto label_27715c;
        case 0x277160u: goto label_277160;
        case 0x277164u: goto label_277164;
        case 0x277168u: goto label_277168;
        case 0x27716cu: goto label_27716c;
        case 0x277170u: goto label_277170;
        case 0x277174u: goto label_277174;
        case 0x277178u: goto label_277178;
        case 0x27717cu: goto label_27717c;
        case 0x277180u: goto label_277180;
        case 0x277184u: goto label_277184;
        case 0x277188u: goto label_277188;
        case 0x27718cu: goto label_27718c;
        case 0x277190u: goto label_277190;
        case 0x277194u: goto label_277194;
        case 0x277198u: goto label_277198;
        case 0x27719cu: goto label_27719c;
        case 0x2771a0u: goto label_2771a0;
        case 0x2771a4u: goto label_2771a4;
        case 0x2771a8u: goto label_2771a8;
        case 0x2771acu: goto label_2771ac;
        case 0x2771b0u: goto label_2771b0;
        case 0x2771b4u: goto label_2771b4;
        case 0x2771b8u: goto label_2771b8;
        case 0x2771bcu: goto label_2771bc;
        case 0x2771c0u: goto label_2771c0;
        case 0x2771c4u: goto label_2771c4;
        case 0x2771c8u: goto label_2771c8;
        case 0x2771ccu: goto label_2771cc;
        case 0x2771d0u: goto label_2771d0;
        case 0x2771d4u: goto label_2771d4;
        case 0x2771d8u: goto label_2771d8;
        case 0x2771dcu: goto label_2771dc;
        case 0x2771e0u: goto label_2771e0;
        case 0x2771e4u: goto label_2771e4;
        case 0x2771e8u: goto label_2771e8;
        case 0x2771ecu: goto label_2771ec;
        case 0x2771f0u: goto label_2771f0;
        case 0x2771f4u: goto label_2771f4;
        case 0x2771f8u: goto label_2771f8;
        case 0x2771fcu: goto label_2771fc;
        case 0x277200u: goto label_277200;
        case 0x277204u: goto label_277204;
        case 0x277208u: goto label_277208;
        case 0x27720cu: goto label_27720c;
        case 0x277210u: goto label_277210;
        case 0x277214u: goto label_277214;
        case 0x277218u: goto label_277218;
        case 0x27721cu: goto label_27721c;
        case 0x277220u: goto label_277220;
        case 0x277224u: goto label_277224;
        case 0x277228u: goto label_277228;
        case 0x27722cu: goto label_27722c;
        case 0x277230u: goto label_277230;
        case 0x277234u: goto label_277234;
        case 0x277238u: goto label_277238;
        case 0x27723cu: goto label_27723c;
        case 0x277240u: goto label_277240;
        case 0x277244u: goto label_277244;
        case 0x277248u: goto label_277248;
        case 0x27724cu: goto label_27724c;
        case 0x277250u: goto label_277250;
        case 0x277254u: goto label_277254;
        case 0x277258u: goto label_277258;
        case 0x27725cu: goto label_27725c;
        case 0x277260u: goto label_277260;
        case 0x277264u: goto label_277264;
        case 0x277268u: goto label_277268;
        case 0x27726cu: goto label_27726c;
        case 0x277270u: goto label_277270;
        case 0x277274u: goto label_277274;
        case 0x277278u: goto label_277278;
        case 0x27727cu: goto label_27727c;
        case 0x277280u: goto label_277280;
        case 0x277284u: goto label_277284;
        case 0x277288u: goto label_277288;
        case 0x27728cu: goto label_27728c;
        case 0x277290u: goto label_277290;
        case 0x277294u: goto label_277294;
        case 0x277298u: goto label_277298;
        case 0x27729cu: goto label_27729c;
        case 0x2772a0u: goto label_2772a0;
        case 0x2772a4u: goto label_2772a4;
        case 0x2772a8u: goto label_2772a8;
        case 0x2772acu: goto label_2772ac;
        case 0x2772b0u: goto label_2772b0;
        case 0x2772b4u: goto label_2772b4;
        case 0x2772b8u: goto label_2772b8;
        case 0x2772bcu: goto label_2772bc;
        case 0x2772c0u: goto label_2772c0;
        case 0x2772c4u: goto label_2772c4;
        case 0x2772c8u: goto label_2772c8;
        case 0x2772ccu: goto label_2772cc;
        case 0x2772d0u: goto label_2772d0;
        case 0x2772d4u: goto label_2772d4;
        case 0x2772d8u: goto label_2772d8;
        case 0x2772dcu: goto label_2772dc;
        case 0x2772e0u: goto label_2772e0;
        case 0x2772e4u: goto label_2772e4;
        case 0x2772e8u: goto label_2772e8;
        case 0x2772ecu: goto label_2772ec;
        case 0x2772f0u: goto label_2772f0;
        case 0x2772f4u: goto label_2772f4;
        case 0x2772f8u: goto label_2772f8;
        case 0x2772fcu: goto label_2772fc;
        case 0x277300u: goto label_277300;
        case 0x277304u: goto label_277304;
        case 0x277308u: goto label_277308;
        case 0x27730cu: goto label_27730c;
        case 0x277310u: goto label_277310;
        case 0x277314u: goto label_277314;
        case 0x277318u: goto label_277318;
        case 0x27731cu: goto label_27731c;
        case 0x277320u: goto label_277320;
        case 0x277324u: goto label_277324;
        case 0x277328u: goto label_277328;
        case 0x27732cu: goto label_27732c;
        case 0x277330u: goto label_277330;
        case 0x277334u: goto label_277334;
        case 0x277338u: goto label_277338;
        case 0x27733cu: goto label_27733c;
        case 0x277340u: goto label_277340;
        case 0x277344u: goto label_277344;
        case 0x277348u: goto label_277348;
        case 0x27734cu: goto label_27734c;
        case 0x277350u: goto label_277350;
        case 0x277354u: goto label_277354;
        case 0x277358u: goto label_277358;
        case 0x27735cu: goto label_27735c;
        case 0x277360u: goto label_277360;
        case 0x277364u: goto label_277364;
        case 0x277368u: goto label_277368;
        case 0x27736cu: goto label_27736c;
        case 0x277370u: goto label_277370;
        case 0x277374u: goto label_277374;
        case 0x277378u: goto label_277378;
        case 0x27737cu: goto label_27737c;
        case 0x277380u: goto label_277380;
        case 0x277384u: goto label_277384;
        case 0x277388u: goto label_277388;
        case 0x27738cu: goto label_27738c;
        case 0x277390u: goto label_277390;
        case 0x277394u: goto label_277394;
        case 0x277398u: goto label_277398;
        case 0x27739cu: goto label_27739c;
        case 0x2773a0u: goto label_2773a0;
        case 0x2773a4u: goto label_2773a4;
        case 0x2773a8u: goto label_2773a8;
        case 0x2773acu: goto label_2773ac;
        case 0x2773b0u: goto label_2773b0;
        case 0x2773b4u: goto label_2773b4;
        case 0x2773b8u: goto label_2773b8;
        case 0x2773bcu: goto label_2773bc;
        case 0x2773c0u: goto label_2773c0;
        case 0x2773c4u: goto label_2773c4;
        case 0x2773c8u: goto label_2773c8;
        case 0x2773ccu: goto label_2773cc;
        case 0x2773d0u: goto label_2773d0;
        case 0x2773d4u: goto label_2773d4;
        case 0x2773d8u: goto label_2773d8;
        case 0x2773dcu: goto label_2773dc;
        case 0x2773e0u: goto label_2773e0;
        case 0x2773e4u: goto label_2773e4;
        case 0x2773e8u: goto label_2773e8;
        case 0x2773ecu: goto label_2773ec;
        case 0x2773f0u: goto label_2773f0;
        case 0x2773f4u: goto label_2773f4;
        case 0x2773f8u: goto label_2773f8;
        case 0x2773fcu: goto label_2773fc;
        case 0x277400u: goto label_277400;
        case 0x277404u: goto label_277404;
        case 0x277408u: goto label_277408;
        case 0x27740cu: goto label_27740c;
        case 0x277410u: goto label_277410;
        default: break;
    }

    ctx->pc = 0x276ab0u;

label_276ab0:
    // 0x276ab0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x276ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_276ab4:
    // 0x276ab4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x276ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_276ab8:
    // 0x276ab8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x276ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_276abc:
    // 0x276abc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x276abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_276ac0:
    // 0x276ac0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x276ac0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_276ac4:
    // 0x276ac4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x276ac4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_276ac8:
    // 0x276ac8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x276ac8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_276acc:
    // 0x276acc: 0x90830051  lbu         $v1, 0x51($a0)
    ctx->pc = 0x276accu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 81)));
label_276ad0:
    // 0x276ad0: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x276ad0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_276ad4:
    // 0x276ad4: 0x1020023e  beqz        $at, . + 4 + (0x23E << 2)
label_276ad8:
    if (ctx->pc == 0x276AD8u) {
        ctx->pc = 0x276AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276AD4u;
        // 0x276ad8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276ADCu;
        goto label_276adc;
    }
    ctx->pc = 0x276AD4u;
    {
        const bool branch_taken_0x276ad4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x276AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276AD4u;
        // 0x276ad8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ad4) {
            ctx->pc = 0x2773D0u;
            goto label_2773d0;
        }
    }
    ctx->pc = 0x276ADCu;
label_276adc:
    // 0x276adc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x276adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_276ae0:
    // 0x276ae0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x276ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_276ae4:
    // 0x276ae4: 0x24845b40  addiu       $a0, $a0, 0x5B40
    ctx->pc = 0x276ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23360));
label_276ae8:
    // 0x276ae8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x276ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_276aec:
    // 0x276aec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x276aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_276af0:
    // 0x276af0: 0x600008  jr          $v1
label_276af4:
    if (ctx->pc == 0x276AF4u) {
        ctx->pc = 0x276AF8u;
        goto label_276af8;
    }
    ctx->pc = 0x276AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276AF8u: goto label_276af8;
            case 0x276B00u: goto label_276b00;
            case 0x277120u: goto label_277120;
            case 0x277128u: goto label_277128;
            case 0x277280u: goto label_277280;
            case 0x277288u: goto label_277288;
            case 0x277380u: goto label_277380;
            case 0x277390u: goto label_277390;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276AF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x276AF8u;
label_276af8:
    // 0x276af8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_276afc:
    // 0x276afc: 0xa2220051  sb          $v0, 0x51($s1)
    ctx->pc = 0x276afcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 2));
label_276b00:
    // 0x276b00: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x276b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_276b04:
    // 0x276b04: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x276b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_276b08:
    // 0x276b08: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x276b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_276b0c:
    // 0x276b0c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x276b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_276b10:
    // 0x276b10: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x276b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_276b14:
    // 0x276b14: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x276b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
label_276b18:
    // 0x276b18: 0xc62c00a8  lwc1        $f12, 0xA8($s1)
    ctx->pc = 0x276b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_276b1c:
    // 0x276b1c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x276b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_276b20:
    // 0x276b20: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x276b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_276b24:
    // 0x276b24: 0xc0768b4  jal         func_1DA2D0
label_276b28:
    if (ctx->pc == 0x276B28u) {
        ctx->pc = 0x276B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B24u;
        // 0x276b28: 0x26260090  addiu       $a2, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276B2Cu;
        goto label_276b2c;
    }
    ctx->pc = 0x276B24u;
    SET_GPR_U32(ctx, 31, 0x276B2Cu);
    ctx->pc = 0x276B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276B24u;
    // 0x276b28: 0x26260090  addiu       $a2, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA2D0u, 0x276B24u, 0x276B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B2Cu;
label_276b2c:
    // 0x276b2c: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x276b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
label_276b30:
    // 0x276b30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x276b30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_276b34:
    // 0x276b34: 0x0  nop
    ctx->pc = 0x276b34u;
    // NOP
label_276b38:
    // 0x276b38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x276b38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276b3c:
    // 0x276b3c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_276b40:
    if (ctx->pc == 0x276B40u) {
        ctx->pc = 0x276B44u;
        goto label_276b44;
    }
    ctx->pc = 0x276B3Cu;
    {
        const bool branch_taken_0x276b3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x276b3c) {
            ctx->pc = 0x276B58u;
            goto label_276b58;
        }
    }
    ctx->pc = 0x276B44u;
label_276b44:
    // 0x276b44: 0x862300ac  lh          $v1, 0xAC($s1)
    ctx->pc = 0x276b44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 172)));
label_276b48:
    // 0x276b48: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x276b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_276b4c:
    // 0x276b4c: 0x286300c0  slti        $v1, $v1, 0xC0
    ctx->pc = 0x276b4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)192) ? 1 : 0);
label_276b50:
    // 0x276b50: 0x14600151  bnez        $v1, . + 4 + (0x151 << 2)
label_276b54:
    if (ctx->pc == 0x276B54u) {
        ctx->pc = 0x276B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B50u;
        // 0x276b54: 0xa62400ac  sh          $a0, 0xAC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 172), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276B58u;
        goto label_276b58;
    }
    ctx->pc = 0x276B50u;
    {
        const bool branch_taken_0x276b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B50u;
        // 0x276b54: 0xa62400ac  sh          $a0, 0xAC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 172), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b50) {
            ctx->pc = 0x277098u;
            goto label_277098;
        }
    }
    ctx->pc = 0x276B58u;
label_276b58:
    // 0x276b58: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x276b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_276b5c:
    // 0x276b5c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x276b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_276b60:
    // 0x276b60: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x276b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
label_276b64:
    // 0x276b64: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x276b64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_276b68:
    // 0x276b68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x276b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_276b6c:
    // 0x276b6c: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x276b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
label_276b70:
    // 0x276b70: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x276b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_276b74:
    // 0x276b74: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x276b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_276b78:
    // 0x276b78: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_276b7c:
    if (ctx->pc == 0x276B7Cu) {
        ctx->pc = 0x276B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B78u;
        // 0x276b7c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276B80u;
        goto label_276b80;
    }
    ctx->pc = 0x276B78u;
    {
        const bool branch_taken_0x276b78 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x276B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B78u;
        // 0x276b7c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b78) {
            ctx->pc = 0x276B8Cu;
            goto label_276b8c;
        }
    }
    ctx->pc = 0x276B80u;
label_276b80:
    // 0x276b80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276b80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276b84:
    // 0x276b84: 0x10000007  b           . + 4 + (0x7 << 2)
label_276b88:
    if (ctx->pc == 0x276B88u) {
        ctx->pc = 0x276B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B84u;
        // 0x276b88: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276B8Cu;
        goto label_276b8c;
    }
    ctx->pc = 0x276B84u;
    {
        const bool branch_taken_0x276b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B84u;
        // 0x276b88: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b84) {
            ctx->pc = 0x276BA4u;
            goto label_276ba4;
        }
    }
    ctx->pc = 0x276B8Cu;
label_276b8c:
    // 0x276b8c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x276b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_276b90:
    // 0x276b90: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x276b90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_276b94:
    // 0x276b94: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x276b94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276b98:
    // 0x276b98: 0x0  nop
    ctx->pc = 0x276b98u;
    // NOP
label_276b9c:
    // 0x276b9c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x276b9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_276ba0:
    // 0x276ba0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x276ba0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_276ba4:
    // 0x276ba4: 0x3c043600  lui         $a0, 0x3600
    ctx->pc = 0x276ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13824 << 16));
label_276ba8:
    // 0x276ba8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x276ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_276bac:
    // 0x276bac: 0x34850008  ori         $a1, $a0, 0x8
    ctx->pc = 0x276bacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_276bb0:
    // 0x276bb0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x276bb0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_276bb4:
    // 0x276bb4: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x276bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_276bb8:
    // 0x276bb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x276bb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_276bbc:
    // 0x276bbc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x276bbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_276bc0:
    // 0x276bc0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x276bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_276bc4:
    // 0x276bc4: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x276bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
label_276bc8:
    // 0x276bc8: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x276bc8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_276bcc:
    // 0x276bcc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x276bccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_276bd0:
    // 0x276bd0: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x276bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276bd4:
    // 0x276bd4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x276bd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_276bd8:
    // 0x276bd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276bd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_276bdc:
    // 0x276bdc: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x276bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_276be0:
    // 0x276be0: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x276be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_276be4:
    // 0x276be4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x276be4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_276be8:
    // 0x276be8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x276be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_276bec:
    // 0x276bec: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x276becu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
label_276bf0:
    // 0x276bf0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x276bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_276bf4:
    // 0x276bf4: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x276bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_276bf8:
    // 0x276bf8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_276bfc:
    if (ctx->pc == 0x276BFCu) {
        ctx->pc = 0x276BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BF8u;
        // 0x276bfc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276C00u;
        goto label_276c00;
    }
    ctx->pc = 0x276BF8u;
    {
        const bool branch_taken_0x276bf8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x276BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BF8u;
        // 0x276bfc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276bf8) {
            ctx->pc = 0x276C0Cu;
            goto label_276c0c;
        }
    }
    ctx->pc = 0x276C00u;
label_276c00:
    // 0x276c00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276c00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276c04:
    // 0x276c04: 0x10000007  b           . + 4 + (0x7 << 2)
label_276c08:
    if (ctx->pc == 0x276C08u) {
        ctx->pc = 0x276C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C04u;
        // 0x276c08: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276C0Cu;
        goto label_276c0c;
    }
    ctx->pc = 0x276C04u;
    {
        const bool branch_taken_0x276c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C04u;
        // 0x276c08: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c04) {
            ctx->pc = 0x276C24u;
            goto label_276c24;
        }
    }
    ctx->pc = 0x276C0Cu;
label_276c0c:
    // 0x276c0c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x276c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_276c10:
    // 0x276c10: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x276c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_276c14:
    // 0x276c14: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x276c14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276c18:
    // 0x276c18: 0x0  nop
    ctx->pc = 0x276c18u;
    // NOP
label_276c1c:
    // 0x276c1c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x276c1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_276c20:
    // 0x276c20: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x276c20u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_276c24:
    // 0x276c24: 0x3c043600  lui         $a0, 0x3600
    ctx->pc = 0x276c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13824 << 16));
label_276c28:
    // 0x276c28: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x276c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_276c2c:
    // 0x276c2c: 0x34850008  ori         $a1, $a0, 0x8
    ctx->pc = 0x276c2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_276c30:
    // 0x276c30: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x276c30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_276c34:
    // 0x276c34: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x276c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_276c38:
    // 0x276c38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x276c38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_276c3c:
    // 0x276c3c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x276c3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_276c40:
    // 0x276c40: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x276c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_276c44:
    // 0x276c44: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x276c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
label_276c48:
    // 0x276c48: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x276c48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_276c4c:
    // 0x276c4c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x276c4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_276c50:
    // 0x276c50: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x276c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276c54:
    // 0x276c54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x276c54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_276c58:
    // 0x276c58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276c58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_276c5c:
    // 0x276c5c: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x276c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
label_276c60:
    // 0x276c60: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x276c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_276c64:
    // 0x276c64: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x276c64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_276c68:
    // 0x276c68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x276c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_276c6c:
    // 0x276c6c: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x276c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
label_276c70:
    // 0x276c70: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x276c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_276c74:
    // 0x276c74: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x276c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_276c78:
    // 0x276c78: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_276c7c:
    if (ctx->pc == 0x276C7Cu) {
        ctx->pc = 0x276C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C78u;
        // 0x276c7c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276C80u;
        goto label_276c80;
    }
    ctx->pc = 0x276C78u;
    {
        const bool branch_taken_0x276c78 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x276C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C78u;
        // 0x276c7c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c78) {
            ctx->pc = 0x276C8Cu;
            goto label_276c8c;
        }
    }
    ctx->pc = 0x276C80u;
label_276c80:
    // 0x276c80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276c80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276c84:
    // 0x276c84: 0x10000007  b           . + 4 + (0x7 << 2)
label_276c88:
    if (ctx->pc == 0x276C88u) {
        ctx->pc = 0x276C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C84u;
        // 0x276c88: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276C8Cu;
        goto label_276c8c;
    }
    ctx->pc = 0x276C84u;
    {
        const bool branch_taken_0x276c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C84u;
        // 0x276c88: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c84) {
            ctx->pc = 0x276CA4u;
            goto label_276ca4;
        }
    }
    ctx->pc = 0x276C8Cu;
label_276c8c:
    // 0x276c8c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x276c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_276c90:
    // 0x276c90: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x276c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_276c94:
    // 0x276c94: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x276c94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276c98:
    // 0x276c98: 0x0  nop
    ctx->pc = 0x276c98u;
    // NOP
label_276c9c:
    // 0x276c9c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x276c9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_276ca0:
    // 0x276ca0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x276ca0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_276ca4:
    // 0x276ca4: 0x3c043600  lui         $a0, 0x3600
    ctx->pc = 0x276ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13824 << 16));
label_276ca8:
    // 0x276ca8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x276ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_276cac:
    // 0x276cac: 0x34850008  ori         $a1, $a0, 0x8
    ctx->pc = 0x276cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_276cb0:
    // 0x276cb0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x276cb0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_276cb4:
    // 0x276cb4: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x276cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_276cb8:
    // 0x276cb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276cb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276cbc:
    // 0x276cbc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x276cbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_276cc0:
    // 0x276cc0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x276cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_276cc4:
    // 0x276cc4: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x276cc4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_276cc8:
    // 0x276cc8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x276cc8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_276ccc:
    // 0x276ccc: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x276cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276cd0:
    // 0x276cd0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x276cd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_276cd4:
    // 0x276cd4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x276cd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_276cd8:
    // 0x276cd8: 0xe6210098  swc1        $f1, 0x98($s1)
    ctx->pc = 0x276cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
label_276cdc:
    // 0x276cdc: 0xc6210074  lwc1        $f1, 0x74($s1)
    ctx->pc = 0x276cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276ce0:
    // 0x276ce0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276ce0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276ce4:
    // 0x276ce4: 0xc6220094  lwc1        $f2, 0x94($s1)
    ctx->pc = 0x276ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276ce8:
    // 0x276ce8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276ce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_276cec:
    // 0x276cec: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x276cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276cf0:
    // 0x276cf0: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_276cf4:
    if (ctx->pc == 0x276CF4u) {
        ctx->pc = 0x276CF8u;
        goto label_276cf8;
    }
    ctx->pc = 0x276CF0u;
    {
        const bool branch_taken_0x276cf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x276cf0) {
            ctx->pc = 0x276D70u;
            goto label_276d70;
        }
    }
    ctx->pc = 0x276CF8u;
label_276cf8:
    // 0x276cf8: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x276cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_276cfc:
    // 0x276cfc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x276cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_276d00:
    // 0x276d00: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x276d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
label_276d04:
    // 0x276d04: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x276d04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_276d08:
    // 0x276d08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x276d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_276d0c:
    // 0x276d0c: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x276d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
label_276d10:
    // 0x276d10: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x276d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_276d14:
    // 0x276d14: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x276d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_276d18:
    // 0x276d18: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_276d1c:
    if (ctx->pc == 0x276D1Cu) {
        ctx->pc = 0x276D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D18u;
        // 0x276d1c: 0xc6230044  lwc1        $f3, 0x44($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276D20u;
        goto label_276d20;
    }
    ctx->pc = 0x276D18u;
    {
        const bool branch_taken_0x276d18 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x276D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D18u;
        // 0x276d1c: 0xc6230044  lwc1        $f3, 0x44($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276d18) {
            ctx->pc = 0x276D2Cu;
            goto label_276d2c;
        }
    }
    ctx->pc = 0x276D20u;
label_276d20:
    // 0x276d20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276d24:
    // 0x276d24: 0x10000008  b           . + 4 + (0x8 << 2)
label_276d28:
    if (ctx->pc == 0x276D28u) {
        ctx->pc = 0x276D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D24u;
        // 0x276d28: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276D2Cu;
        goto label_276d2c;
    }
    ctx->pc = 0x276D24u;
    {
        const bool branch_taken_0x276d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D24u;
        // 0x276d28: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276d24) {
            ctx->pc = 0x276D48u;
            goto label_276d48;
        }
    }
    ctx->pc = 0x276D2Cu;
label_276d2c:
    // 0x276d2c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x276d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_276d30:
    // 0x276d30: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x276d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_276d34:
    // 0x276d34: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x276d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_276d38:
    // 0x276d38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x276d38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276d3c:
    // 0x276d3c: 0x0  nop
    ctx->pc = 0x276d3cu;
    // NOP
label_276d40:
    // 0x276d40: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x276d40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_276d44:
    // 0x276d44: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x276d44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_276d48:
    // 0x276d48: 0x3c043580  lui         $a0, 0x3580
    ctx->pc = 0x276d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13696 << 16));
label_276d4c:
    // 0x276d4c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x276d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_276d50:
    // 0x276d50: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x276d50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_276d54:
    // 0x276d54: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x276d54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_276d58:
    // 0x276d58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276d5c:
    // 0x276d5c: 0x0  nop
    ctx->pc = 0x276d5cu;
    // NOP
label_276d60:
    // 0x276d60: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x276d60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_276d64:
    // 0x276d64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_276d68:
    // 0x276d68: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x276d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_276d6c:
    // 0x276d6c: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x276d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
label_276d70:
    // 0x276d70: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x276d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
label_276d74:
    // 0x276d74: 0xc6210074  lwc1        $f1, 0x74($s1)
    ctx->pc = 0x276d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276d78:
    // 0x276d78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276d7c:
    // 0x276d7c: 0xc6220094  lwc1        $f2, 0x94($s1)
    ctx->pc = 0x276d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276d80:
    // 0x276d80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_276d84:
    // 0x276d84: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x276d84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276d88:
    // 0x276d88: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
label_276d8c:
    if (ctx->pc == 0x276D8Cu) {
        ctx->pc = 0x276D90u;
        goto label_276d90;
    }
    ctx->pc = 0x276D88u;
    {
        const bool branch_taken_0x276d88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x276d88) {
            ctx->pc = 0x276E08u;
            goto label_276e08;
        }
    }
    ctx->pc = 0x276D90u;
label_276d90:
    // 0x276d90: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x276d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_276d94:
    // 0x276d94: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x276d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_276d98:
    // 0x276d98: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x276d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
label_276d9c:
    // 0x276d9c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x276d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_276da0:
    // 0x276da0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x276da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_276da4:
    // 0x276da4: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x276da4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
label_276da8:
    // 0x276da8: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x276da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_276dac:
    // 0x276dac: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x276dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_276db0:
    // 0x276db0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_276db4:
    if (ctx->pc == 0x276DB4u) {
        ctx->pc = 0x276DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DB0u;
        // 0x276db4: 0xc6230044  lwc1        $f3, 0x44($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276DB8u;
        goto label_276db8;
    }
    ctx->pc = 0x276DB0u;
    {
        const bool branch_taken_0x276db0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x276DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DB0u;
        // 0x276db4: 0xc6230044  lwc1        $f3, 0x44($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276db0) {
            ctx->pc = 0x276DC4u;
            goto label_276dc4;
        }
    }
    ctx->pc = 0x276DB8u;
label_276db8:
    // 0x276db8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276dbc:
    // 0x276dbc: 0x10000008  b           . + 4 + (0x8 << 2)
label_276dc0:
    if (ctx->pc == 0x276DC0u) {
        ctx->pc = 0x276DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DBCu;
        // 0x276dc0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276DC4u;
        goto label_276dc4;
    }
    ctx->pc = 0x276DBCu;
    {
        const bool branch_taken_0x276dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DBCu;
        // 0x276dc0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276dbc) {
            ctx->pc = 0x276DE0u;
            goto label_276de0;
        }
    }
    ctx->pc = 0x276DC4u;
label_276dc4:
    // 0x276dc4: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x276dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_276dc8:
    // 0x276dc8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x276dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_276dcc:
    // 0x276dcc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x276dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_276dd0:
    // 0x276dd0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x276dd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276dd4:
    // 0x276dd4: 0x0  nop
    ctx->pc = 0x276dd4u;
    // NOP
label_276dd8:
    // 0x276dd8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x276dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_276ddc:
    // 0x276ddc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x276ddcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_276de0:
    // 0x276de0: 0x3c043580  lui         $a0, 0x3580
    ctx->pc = 0x276de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13696 << 16));
label_276de4:
    // 0x276de4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x276de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_276de8:
    // 0x276de8: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x276de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_276dec:
    // 0x276dec: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x276decu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_276df0:
    // 0x276df0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276df0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276df4:
    // 0x276df4: 0x0  nop
    ctx->pc = 0x276df4u;
    // NOP
label_276df8:
    // 0x276df8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x276df8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_276dfc:
    // 0x276dfc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276dfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_276e00:
    // 0x276e00: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x276e00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_276e04:
    // 0x276e04: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x276e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
label_276e08:
    // 0x276e08: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x276e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_276e0c:
    // 0x276e0c: 0xc6220074  lwc1        $f2, 0x74($s1)
    ctx->pc = 0x276e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276e10:
    // 0x276e10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x276e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_276e14:
    // 0x276e14: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x276e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276e18:
    // 0x276e18: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x276e18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_276e1c:
    // 0x276e1c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x276e1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276e20:
    // 0x276e20: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_276e24:
    if (ctx->pc == 0x276E24u) {
        ctx->pc = 0x276E28u;
        goto label_276e28;
    }
    ctx->pc = 0x276E20u;
    {
        const bool branch_taken_0x276e20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x276e20) {
            ctx->pc = 0x276E30u;
            goto label_276e30;
        }
    }
    ctx->pc = 0x276E28u;
label_276e28:
    // 0x276e28: 0xe6210094  swc1        $f1, 0x94($s1)
    ctx->pc = 0x276e28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
label_276e2c:
    // 0x276e2c: 0x0  nop
    ctx->pc = 0x276e2cu;
    // NOP
label_276e30:
    // 0x276e30: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x276e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_276e34:
    // 0x276e34: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x276e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276e38:
    // 0x276e38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276e38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276e3c:
    // 0x276e3c: 0xc6220090  lwc1        $f2, 0x90($s1)
    ctx->pc = 0x276e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276e40:
    // 0x276e40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x276e40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_276e44:
    // 0x276e44: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x276e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276e48:
    // 0x276e48: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_276e4c:
    if (ctx->pc == 0x276E4Cu) {
        ctx->pc = 0x276E50u;
        goto label_276e50;
    }
    ctx->pc = 0x276E48u;
    {
        const bool branch_taken_0x276e48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x276e48) {
            ctx->pc = 0x276EC8u;
            goto label_276ec8;
        }
    }
    ctx->pc = 0x276E50u;
label_276e50:
    // 0x276e50: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x276e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_276e54:
    // 0x276e54: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x276e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_276e58:
    // 0x276e58: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x276e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
label_276e5c:
    // 0x276e5c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x276e5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_276e60:
    // 0x276e60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x276e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_276e64:
    // 0x276e64: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x276e64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
label_276e68:
    // 0x276e68: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x276e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_276e6c:
    // 0x276e6c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x276e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_276e70:
    // 0x276e70: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_276e74:
    if (ctx->pc == 0x276E74u) {
        ctx->pc = 0x276E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E70u;
        // 0x276e74: 0xc6230040  lwc1        $f3, 0x40($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276E78u;
        goto label_276e78;
    }
    ctx->pc = 0x276E70u;
    {
        const bool branch_taken_0x276e70 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x276E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E70u;
        // 0x276e74: 0xc6230040  lwc1        $f3, 0x40($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e70) {
            ctx->pc = 0x276E84u;
            goto label_276e84;
        }
    }
    ctx->pc = 0x276E78u;
label_276e78:
    // 0x276e78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276e78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276e7c:
    // 0x276e7c: 0x10000008  b           . + 4 + (0x8 << 2)
label_276e80:
    if (ctx->pc == 0x276E80u) {
        ctx->pc = 0x276E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E7Cu;
        // 0x276e80: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276E84u;
        goto label_276e84;
    }
    ctx->pc = 0x276E7Cu;
    {
        const bool branch_taken_0x276e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E7Cu;
        // 0x276e80: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e7c) {
            ctx->pc = 0x276EA0u;
            goto label_276ea0;
        }
    }
    ctx->pc = 0x276E84u;
label_276e84:
    // 0x276e84: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x276e84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_276e88:
    // 0x276e88: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x276e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_276e8c:
    // 0x276e8c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x276e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_276e90:
    // 0x276e90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x276e90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276e94:
    // 0x276e94: 0x0  nop
    ctx->pc = 0x276e94u;
    // NOP
label_276e98:
    // 0x276e98: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x276e98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_276e9c:
    // 0x276e9c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x276e9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_276ea0:
    // 0x276ea0: 0x3c043580  lui         $a0, 0x3580
    ctx->pc = 0x276ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13696 << 16));
label_276ea4:
    // 0x276ea4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x276ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_276ea8:
    // 0x276ea8: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x276ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_276eac:
    // 0x276eac: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x276eacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_276eb0:
    // 0x276eb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276eb4:
    // 0x276eb4: 0x0  nop
    ctx->pc = 0x276eb4u;
    // NOP
label_276eb8:
    // 0x276eb8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x276eb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_276ebc:
    // 0x276ebc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_276ec0:
    // 0x276ec0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x276ec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_276ec4:
    // 0x276ec4: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x276ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_276ec8:
    // 0x276ec8: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x276ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_276ecc:
    // 0x276ecc: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x276eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276ed0:
    // 0x276ed0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276ed4:
    // 0x276ed4: 0xc6220090  lwc1        $f2, 0x90($s1)
    ctx->pc = 0x276ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276ed8:
    // 0x276ed8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276ed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_276edc:
    // 0x276edc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x276edcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276ee0:
    // 0x276ee0: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
label_276ee4:
    if (ctx->pc == 0x276EE4u) {
        ctx->pc = 0x276EE8u;
        goto label_276ee8;
    }
    ctx->pc = 0x276EE0u;
    {
        const bool branch_taken_0x276ee0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x276ee0) {
            ctx->pc = 0x276F60u;
            goto label_276f60;
        }
    }
    ctx->pc = 0x276EE8u;
label_276ee8:
    // 0x276ee8: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x276ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_276eec:
    // 0x276eec: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x276eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_276ef0:
    // 0x276ef0: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x276ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
label_276ef4:
    // 0x276ef4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x276ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_276ef8:
    // 0x276ef8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x276ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_276efc:
    // 0x276efc: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x276efcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
label_276f00:
    // 0x276f00: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x276f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_276f04:
    // 0x276f04: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x276f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_276f08:
    // 0x276f08: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_276f0c:
    if (ctx->pc == 0x276F0Cu) {
        ctx->pc = 0x276F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276F08u;
        // 0x276f0c: 0xc6230040  lwc1        $f3, 0x40($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276F10u;
        goto label_276f10;
    }
    ctx->pc = 0x276F08u;
    {
        const bool branch_taken_0x276f08 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x276F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276F08u;
        // 0x276f0c: 0xc6230040  lwc1        $f3, 0x40($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f08) {
            ctx->pc = 0x276F1Cu;
            goto label_276f1c;
        }
    }
    ctx->pc = 0x276F10u;
label_276f10:
    // 0x276f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276f14:
    // 0x276f14: 0x10000008  b           . + 4 + (0x8 << 2)
label_276f18:
    if (ctx->pc == 0x276F18u) {
        ctx->pc = 0x276F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276F14u;
        // 0x276f18: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276F1Cu;
        goto label_276f1c;
    }
    ctx->pc = 0x276F14u;
    {
        const bool branch_taken_0x276f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276F14u;
        // 0x276f18: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f14) {
            ctx->pc = 0x276F38u;
            goto label_276f38;
        }
    }
    ctx->pc = 0x276F1Cu;
label_276f1c:
    // 0x276f1c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x276f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_276f20:
    // 0x276f20: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x276f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_276f24:
    // 0x276f24: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x276f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_276f28:
    // 0x276f28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x276f28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276f2c:
    // 0x276f2c: 0x0  nop
    ctx->pc = 0x276f2cu;
    // NOP
label_276f30:
    // 0x276f30: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x276f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_276f34:
    // 0x276f34: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x276f34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_276f38:
    // 0x276f38: 0x3c043580  lui         $a0, 0x3580
    ctx->pc = 0x276f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13696 << 16));
label_276f3c:
    // 0x276f3c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x276f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_276f40:
    // 0x276f40: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x276f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_276f44:
    // 0x276f44: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x276f44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_276f48:
    // 0x276f48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276f48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276f4c:
    // 0x276f4c: 0x0  nop
    ctx->pc = 0x276f4cu;
    // NOP
label_276f50:
    // 0x276f50: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x276f50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_276f54:
    // 0x276f54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276f54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_276f58:
    // 0x276f58: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x276f58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_276f5c:
    // 0x276f5c: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x276f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_276f60:
    // 0x276f60: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x276f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_276f64:
    // 0x276f64: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x276f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276f68:
    // 0x276f68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276f68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276f6c:
    // 0x276f6c: 0xc6220098  lwc1        $f2, 0x98($s1)
    ctx->pc = 0x276f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276f70:
    // 0x276f70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x276f70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_276f74:
    // 0x276f74: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x276f74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276f78:
    // 0x276f78: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_276f7c:
    if (ctx->pc == 0x276F7Cu) {
        ctx->pc = 0x276F80u;
        goto label_276f80;
    }
    ctx->pc = 0x276F78u;
    {
        const bool branch_taken_0x276f78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x276f78) {
            ctx->pc = 0x276FF8u;
            goto label_276ff8;
        }
    }
    ctx->pc = 0x276F80u;
label_276f80:
    // 0x276f80: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x276f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_276f84:
    // 0x276f84: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x276f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_276f88:
    // 0x276f88: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x276f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
label_276f8c:
    // 0x276f8c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x276f8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_276f90:
    // 0x276f90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x276f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_276f94:
    // 0x276f94: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x276f94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
label_276f98:
    // 0x276f98: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x276f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_276f9c:
    // 0x276f9c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x276f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_276fa0:
    // 0x276fa0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_276fa4:
    if (ctx->pc == 0x276FA4u) {
        ctx->pc = 0x276FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276FA0u;
        // 0x276fa4: 0xc6230048  lwc1        $f3, 0x48($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276FA8u;
        goto label_276fa8;
    }
    ctx->pc = 0x276FA0u;
    {
        const bool branch_taken_0x276fa0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x276FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276FA0u;
        // 0x276fa4: 0xc6230048  lwc1        $f3, 0x48($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276fa0) {
            ctx->pc = 0x276FB4u;
            goto label_276fb4;
        }
    }
    ctx->pc = 0x276FA8u;
label_276fa8:
    // 0x276fa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276fac:
    // 0x276fac: 0x10000008  b           . + 4 + (0x8 << 2)
label_276fb0:
    if (ctx->pc == 0x276FB0u) {
        ctx->pc = 0x276FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276FACu;
        // 0x276fb0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276FB4u;
        goto label_276fb4;
    }
    ctx->pc = 0x276FACu;
    {
        const bool branch_taken_0x276fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276FACu;
        // 0x276fb0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276fac) {
            ctx->pc = 0x276FD0u;
            goto label_276fd0;
        }
    }
    ctx->pc = 0x276FB4u;
label_276fb4:
    // 0x276fb4: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x276fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_276fb8:
    // 0x276fb8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x276fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_276fbc:
    // 0x276fbc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x276fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_276fc0:
    // 0x276fc0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x276fc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276fc4:
    // 0x276fc4: 0x0  nop
    ctx->pc = 0x276fc4u;
    // NOP
label_276fc8:
    // 0x276fc8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x276fc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_276fcc:
    // 0x276fcc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x276fccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_276fd0:
    // 0x276fd0: 0x3c043580  lui         $a0, 0x3580
    ctx->pc = 0x276fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13696 << 16));
label_276fd4:
    // 0x276fd4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x276fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_276fd8:
    // 0x276fd8: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x276fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_276fdc:
    // 0x276fdc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x276fdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_276fe0:
    // 0x276fe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276fe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276fe4:
    // 0x276fe4: 0x0  nop
    ctx->pc = 0x276fe4u;
    // NOP
label_276fe8:
    // 0x276fe8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x276fe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_276fec:
    // 0x276fec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276fecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_276ff0:
    // 0x276ff0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x276ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_276ff4:
    // 0x276ff4: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x276ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
label_276ff8:
    // 0x276ff8: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x276ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_276ffc:
    // 0x276ffc: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x276ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277000:
    // 0x277000: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x277000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277004:
    // 0x277004: 0xc6220098  lwc1        $f2, 0x98($s1)
    ctx->pc = 0x277004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_277008:
    // 0x277008: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x277008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27700c:
    // 0x27700c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x27700cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277010:
    // 0x277010: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
label_277014:
    if (ctx->pc == 0x277014u) {
        ctx->pc = 0x277018u;
        goto label_277018;
    }
    ctx->pc = 0x277010u;
    {
        const bool branch_taken_0x277010 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x277010) {
            ctx->pc = 0x277090u;
            goto label_277090;
        }
    }
    ctx->pc = 0x277018u;
label_277018:
    // 0x277018: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x277018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_27701c:
    // 0x27701c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x27701cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_277020:
    // 0x277020: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x277020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
label_277024:
    // 0x277024: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x277024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_277028:
    // 0x277028: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x277028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27702c:
    // 0x27702c: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x27702cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
label_277030:
    // 0x277030: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x277030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_277034:
    // 0x277034: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x277034u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_277038:
    // 0x277038: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_27703c:
    if (ctx->pc == 0x27703Cu) {
        ctx->pc = 0x27703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277038u;
        // 0x27703c: 0xc6230048  lwc1        $f3, 0x48($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277040u;
        goto label_277040;
    }
    ctx->pc = 0x277038u;
    {
        const bool branch_taken_0x277038 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x27703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277038u;
        // 0x27703c: 0xc6230048  lwc1        $f3, 0x48($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277038) {
            ctx->pc = 0x27704Cu;
            goto label_27704c;
        }
    }
    ctx->pc = 0x277040u;
label_277040:
    // 0x277040: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x277040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277044:
    // 0x277044: 0x10000008  b           . + 4 + (0x8 << 2)
label_277048:
    if (ctx->pc == 0x277048u) {
        ctx->pc = 0x277048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277044u;
        // 0x277048: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27704Cu;
        goto label_27704c;
    }
    ctx->pc = 0x277044u;
    {
        const bool branch_taken_0x277044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277044u;
        // 0x277048: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277044) {
            ctx->pc = 0x277068u;
            goto label_277068;
        }
    }
    ctx->pc = 0x27704Cu;
label_27704c:
    // 0x27704c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x27704cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_277050:
    // 0x277050: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x277050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_277054:
    // 0x277054: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x277054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_277058:
    // 0x277058: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x277058u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27705c:
    // 0x27705c: 0x0  nop
    ctx->pc = 0x27705cu;
    // NOP
label_277060:
    // 0x277060: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x277060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_277064:
    // 0x277064: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x277064u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_277068:
    // 0x277068: 0x3c043580  lui         $a0, 0x3580
    ctx->pc = 0x277068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13696 << 16));
label_27706c:
    // 0x27706c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x27706cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_277070:
    // 0x277070: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x277070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_277074:
    // 0x277074: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x277074u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_277078:
    // 0x277078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x277078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27707c:
    // 0x27707c: 0x0  nop
    ctx->pc = 0x27707cu;
    // NOP
label_277080:
    // 0x277080: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x277080u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_277084:
    // 0x277084: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x277084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_277088:
    // 0x277088: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x277088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_27708c:
    // 0x27708c: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x27708cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
label_277090:
    // 0x277090: 0xa62000ac  sh          $zero, 0xAC($s1)
    ctx->pc = 0x277090u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 172), (uint16_t)GPR_U32(ctx, 0));
label_277094:
    // 0x277094: 0x0  nop
    ctx->pc = 0x277094u;
    // NOP
label_277098:
    // 0x277098: 0x86240056  lh          $a0, 0x56($s1)
    ctx->pc = 0x277098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 86)));
label_27709c:
    // 0x27709c: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x27709cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_2770a0:
    // 0x2770a0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2770a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2770a4:
    // 0x2770a4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_2770a8:
    if (ctx->pc == 0x2770A8u) {
        ctx->pc = 0x2770ACu;
        goto label_2770ac;
    }
    ctx->pc = 0x2770A4u;
    {
        const bool branch_taken_0x2770a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2770a4) {
            ctx->pc = 0x2770B8u;
            goto label_2770b8;
        }
    }
    ctx->pc = 0x2770ACu;
label_2770ac:
    // 0x2770ac: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2770acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2770b0:
    // 0x2770b0: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_2770b4:
    if (ctx->pc == 0x2770B4u) {
        ctx->pc = 0x2770B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770B0u;
        // 0x2770b4: 0xa2230051  sb          $v1, 0x51($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2770B8u;
        goto label_2770b8;
    }
    ctx->pc = 0x2770B0u;
    {
        const bool branch_taken_0x2770b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2770B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770B0u;
        // 0x2770b4: 0xa2230051  sb          $v1, 0x51($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2770b0) {
            ctx->pc = 0x2773D0u;
            goto label_2773d0;
        }
    }
    ctx->pc = 0x2770B8u;
label_2770b8:
    // 0x2770b8: 0x2482ffb0  addiu       $v0, $a0, -0x50
    ctx->pc = 0x2770b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
label_2770bc:
    // 0x2770bc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2770bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2770c0:
    // 0x2770c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2770c4:
    if (ctx->pc == 0x2770C4u) {
        ctx->pc = 0x2770C8u;
        goto label_2770c8;
    }
    ctx->pc = 0x2770C0u;
    {
        const bool branch_taken_0x2770c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2770c0) {
            ctx->pc = 0x2770E0u;
            goto label_2770e0;
        }
    }
    ctx->pc = 0x2770C8u;
label_2770c8:
    // 0x2770c8: 0x862400b4  lh          $a0, 0xB4($s1)
    ctx->pc = 0x2770c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 180)));
label_2770cc:
    // 0x2770cc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2770ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2770d0:
    // 0x2770d0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2770d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2770d4:
    // 0x2770d4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2770d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2770d8:
    // 0x2770d8: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x2770d8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_2770dc:
    // 0x2770dc: 0xa62300ae  sh          $v1, 0xAE($s1)
    ctx->pc = 0x2770dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 174), (uint16_t)GPR_U32(ctx, 3));
label_2770e0:
    // 0x2770e0: 0xc09da4c  jal         func_276930
label_2770e4:
    if (ctx->pc == 0x2770E4u) {
        ctx->pc = 0x2770E8u;
        goto label_2770e8;
    }
    ctx->pc = 0x2770E0u;
    SET_GPR_U32(ctx, 31, 0x2770E8u);
    ctx->pc = 0x276930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276930u, 0x2770E0u, 0x2770E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770E8u;
label_2770e8:
    // 0x2770e8: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
label_2770ec:
    if (ctx->pc == 0x2770ECu) {
        ctx->pc = 0x2770F0u;
        goto label_2770f0;
    }
    ctx->pc = 0x2770E8u;
    {
        const bool branch_taken_0x2770e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2770e8) {
            ctx->pc = 0x2773D0u;
            goto label_2773d0;
        }
    }
    ctx->pc = 0x2770F0u;
label_2770f0:
    // 0x2770f0: 0x86240054  lh          $a0, 0x54($s1)
    ctx->pc = 0x2770f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_2770f4:
    // 0x2770f4: 0x84432908  lh          $v1, 0x2908($v0)
    ctx->pc = 0x2770f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10504)));
label_2770f8:
    // 0x2770f8: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2770f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2770fc:
    // 0x2770fc: 0x146000b4  bnez        $v1, . + 4 + (0xB4 << 2)
label_277100:
    if (ctx->pc == 0x277100u) {
        ctx->pc = 0x277100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770FCu;
        // 0x277100: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277104u;
        goto label_277104;
    }
    ctx->pc = 0x2770FCu;
    {
        const bool branch_taken_0x2770fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x277100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770FCu;
        // 0x277100: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2770fc) {
            ctx->pc = 0x2773D0u;
            goto label_2773d0;
        }
    }
    ctx->pc = 0x277104u;
label_277104:
    // 0x277104: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x277104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_277108:
    // 0x277108: 0xa2240051  sb          $a0, 0x51($s1)
    ctx->pc = 0x277108u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 4));
label_27710c:
    // 0x27710c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27710cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_277110:
    // 0x277110: 0xae2400a4  sw          $a0, 0xA4($s1)
    ctx->pc = 0x277110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 4));
label_277114:
    // 0x277114: 0x100000ae  b           . + 4 + (0xAE << 2)
label_277118:
    if (ctx->pc == 0x277118u) {
        ctx->pc = 0x277118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277114u;
        // 0x277118: 0xa62300ae  sh          $v1, 0xAE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 174), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27711Cu;
        goto label_27711c;
    }
    ctx->pc = 0x277114u;
    {
        const bool branch_taken_0x277114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277114u;
        // 0x277118: 0xa62300ae  sh          $v1, 0xAE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 174), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277114) {
            ctx->pc = 0x2773D0u;
            goto label_2773d0;
        }
    }
    ctx->pc = 0x27711Cu;
label_27711c:
    // 0x27711c: 0x0  nop
    ctx->pc = 0x27711cu;
    // NOP
label_277120:
    // 0x277120: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x277120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_277124:
    // 0x277124: 0xa2220051  sb          $v0, 0x51($s1)
    ctx->pc = 0x277124u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 2));
label_277128:
    // 0x277128: 0xc09da4c  jal         func_276930
label_27712c:
    if (ctx->pc == 0x27712Cu) {
        ctx->pc = 0x277130u;
        goto label_277130;
    }
    ctx->pc = 0x277128u;
    SET_GPR_U32(ctx, 31, 0x277130u);
    ctx->pc = 0x276930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276930u, 0x277128u, 0x277130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277130u;
label_277130:
    // 0x277130: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x277130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_277134:
    // 0x277134: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_277138:
    if (ctx->pc == 0x277138u) {
        ctx->pc = 0x27713Cu;
        goto label_27713c;
    }
    ctx->pc = 0x277134u;
    {
        const bool branch_taken_0x277134 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x277134) {
            ctx->pc = 0x277148u;
            goto label_277148;
        }
    }
    ctx->pc = 0x27713Cu;
label_27713c:
    // 0x27713c: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_277140:
    if (ctx->pc == 0x277140u) {
        ctx->pc = 0x277140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27713Cu;
        // 0x277140: 0xa2200051  sb          $zero, 0x51($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277144u;
        goto label_277144;
    }
    ctx->pc = 0x27713Cu;
    {
        const bool branch_taken_0x27713c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27713Cu;
        // 0x277140: 0xa2200051  sb          $zero, 0x51($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27713c) {
            ctx->pc = 0x2773D0u;
            goto label_2773d0;
        }
    }
    ctx->pc = 0x277144u;
label_277144:
    // 0x277144: 0x0  nop
    ctx->pc = 0x277144u;
    // NOP
label_277148:
    // 0x277148: 0x7a022920  lq          $v0, 0x2920($s0)
    ctx->pc = 0x277148u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 10528)));
label_27714c:
    // 0x27714c: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x27714cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_277150:
    // 0x277150: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x277150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_277154:
    // 0x277154: 0xc076664  jal         func_1D9990
label_277158:
    if (ctx->pc == 0x277158u) {
        ctx->pc = 0x277158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277154u;
        // 0x277158: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27715Cu;
        goto label_27715c;
    }
    ctx->pc = 0x277154u;
    SET_GPR_U32(ctx, 31, 0x27715Cu);
    ctx->pc = 0x277158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277154u;
    // 0x277158: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x277154u, 0x27715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27715Cu;
label_27715c:
    // 0x27715c: 0xc0765d8  jal         func_1D9760
label_277160:
    if (ctx->pc == 0x277160u) {
        ctx->pc = 0x277160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27715Cu;
        // 0x277160: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277164u;
        goto label_277164;
    }
    ctx->pc = 0x27715Cu;
    SET_GPR_U32(ctx, 31, 0x277164u);
    ctx->pc = 0x277160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27715Cu;
    // 0x277160: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x27715Cu, 0x277164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277164u;
label_277164:
    // 0x277164: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x277164u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_277168:
    // 0x277168: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x277168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_27716c:
    // 0x27716c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27716cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277170:
    // 0x277170: 0x0  nop
    ctx->pc = 0x277170u;
    // NOP
label_277174:
    // 0x277174: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x277174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277178:
    // 0x277178: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_27717c:
    if (ctx->pc == 0x27717Cu) {
        ctx->pc = 0x27717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277178u;
        // 0x27717c: 0xc6142904  lwc1        $f20, 0x2904($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277180u;
        goto label_277180;
    }
    ctx->pc = 0x277178u;
    {
        const bool branch_taken_0x277178 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277178u;
        // 0x27717c: 0xc6142904  lwc1        $f20, 0x2904($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277178) {
            ctx->pc = 0x2771A0u;
            goto label_2771a0;
        }
    }
    ctx->pc = 0x277180u;
label_277180:
    // 0x277180: 0x0  nop
    ctx->pc = 0x277180u;
    // NOP
label_277184:
    // 0x277184: 0x0  nop
    ctx->pc = 0x277184u;
    // NOP
label_277188:
    // 0x277188: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x277188u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
label_27718c:
    // 0x27718c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x27718cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_277190:
    // 0x277190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277194:
    // 0x277194: 0x0  nop
    ctx->pc = 0x277194u;
    // NOP
label_277198:
    // 0x277198: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x277198u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_27719c:
    // 0x27719c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x27719cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2771a0:
    // 0x2771a0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2771a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_2771a4:
    // 0x2771a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2771a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2771a8:
    // 0x2771a8: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x2771a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_2771ac:
    // 0x2771ac: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x2771acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_2771b0:
    // 0x2771b0: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x2771b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2771b4:
    // 0x2771b4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2771b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_2771b8:
    // 0x2771b8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2771b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2771bc:
    // 0x2771bc: 0x248441c0  addiu       $a0, $a0, 0x41C0
    ctx->pc = 0x2771bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16832));
label_2771c0:
    // 0x2771c0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2771c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_2771c4:
    // 0x2771c4: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x2771c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_2771c8:
    // 0x2771c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2771c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2771cc:
    // 0x2771cc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2771ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2771d0:
    // 0x2771d0: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x2771d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2771d4:
    // 0x2771d4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2771d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2771d8:
    // 0x2771d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2771d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2771dc:
    // 0x2771dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2771dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2771e0:
    // 0x2771e0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2771e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2771e4:
    // 0x2771e4: 0xc0765dc  jal         func_1D9770
label_2771e8:
    if (ctx->pc == 0x2771E8u) {
        ctx->pc = 0x2771E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2771E4u;
        // 0x2771e8: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2771ECu;
        goto label_2771ec;
    }
    ctx->pc = 0x2771E4u;
    SET_GPR_U32(ctx, 31, 0x2771ECu);
    ctx->pc = 0x2771E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2771E4u;
    // 0x2771e8: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x2771E4u, 0x2771ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2771ECu;
label_2771ec:
    // 0x2771ec: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x2771ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_2771f0:
    // 0x2771f0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2771f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_2771f4:
    // 0x2771f4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2771f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2771f8:
    // 0x2771f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2771f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2771fc:
    // 0x2771fc: 0x0  nop
    ctx->pc = 0x2771fcu;
    // NOP
label_277200:
    // 0x277200: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x277200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277204:
    // 0x277204: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_277208:
    if (ctx->pc == 0x277208u) {
        ctx->pc = 0x277208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277204u;
        // 0x277208: 0x460010c1  sub.s       $f3, $f2, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27720Cu;
        goto label_27720c;
    }
    ctx->pc = 0x277204u;
    {
        const bool branch_taken_0x277204 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277204u;
        // 0x277208: 0x460010c1  sub.s       $f3, $f2, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277204) {
            ctx->pc = 0x277230u;
            goto label_277230;
        }
    }
    ctx->pc = 0x27720Cu;
label_27720c:
    // 0x27720c: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x27720cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_277210:
    // 0x277210: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x277210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_277214:
    // 0x277214: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x277214u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_277218:
    // 0x277218: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x277218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27721c:
    // 0x27721c: 0x0  nop
    ctx->pc = 0x27721cu;
    // NOP
label_277220:
    // 0x277220: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x277220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_277224:
    // 0x277224: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x277224u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_277228:
    // 0x277228: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x277228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27722c:
    // 0x27722c: 0x0  nop
    ctx->pc = 0x27722cu;
    // NOP
label_277230:
    // 0x277230: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x277230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_277234:
    // 0x277234: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x277234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
label_277238:
    // 0x277238: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x277238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_27723c:
    // 0x27723c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x27723cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_277240:
    // 0x277240: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x277240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_277244:
    // 0x277244: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x277244u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_277248:
    // 0x277248: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x277248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_27724c:
    // 0x27724c: 0xc0768b4  jal         func_1DA2D0
label_277250:
    if (ctx->pc == 0x277250u) {
        ctx->pc = 0x277250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27724Cu;
        // 0x277250: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277254u;
        goto label_277254;
    }
    ctx->pc = 0x27724Cu;
    SET_GPR_U32(ctx, 31, 0x277254u);
    ctx->pc = 0x277250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27724Cu;
    // 0x277250: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA2D0u, 0x27724Cu, 0x277254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277254u;
label_277254:
    // 0x277254: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x277254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
label_277258:
    // 0x277258: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x277258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27725c:
    // 0x27725c: 0x0  nop
    ctx->pc = 0x27725cu;
    // NOP
label_277260:
    // 0x277260: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x277260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_277264:
    // 0x277264: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x277264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277268:
    // 0x277268: 0x45000059  bc1f        . + 4 + (0x59 << 2)
label_27726c:
    if (ctx->pc == 0x27726Cu) {
        ctx->pc = 0x27726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277268u;
        // 0x27726c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277270u;
        goto label_277270;
    }
    ctx->pc = 0x277268u;
    {
        const bool branch_taken_0x277268 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277268u;
        // 0x27726c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277268) {
            ctx->pc = 0x2773D0u;
            goto label_2773d0;
        }
    }
    ctx->pc = 0x277270u;
label_277270:
    // 0x277270: 0xa2230051  sb          $v1, 0x51($s1)
    ctx->pc = 0x277270u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 3));
label_277274:
    // 0x277274: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x277274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_277278:
    // 0x277278: 0x10000055  b           . + 4 + (0x55 << 2)
label_27727c:
    if (ctx->pc == 0x27727Cu) {
        ctx->pc = 0x27727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277278u;
        // 0x27727c: 0xae2300a4  sw          $v1, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277280u;
        goto label_277280;
    }
    ctx->pc = 0x277278u;
    {
        const bool branch_taken_0x277278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277278u;
        // 0x27727c: 0xae2300a4  sw          $v1, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277278) {
            ctx->pc = 0x2773D0u;
            goto label_2773d0;
        }
    }
    ctx->pc = 0x277280u;
label_277280:
    // 0x277280: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x277280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_277284:
    // 0x277284: 0xa2220051  sb          $v0, 0x51($s1)
    ctx->pc = 0x277284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 2));
label_277288:
    // 0x277288: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x277288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_27728c:
    // 0x27728c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x27728cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_277290:
    // 0x277290: 0xc07cce0  jal         func_1F3380
label_277294:
    if (ctx->pc == 0x277294u) {
        ctx->pc = 0x277294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277290u;
        // 0x277294: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277298u;
        goto label_277298;
    }
    ctx->pc = 0x277290u;
    SET_GPR_U32(ctx, 31, 0x277298u);
    ctx->pc = 0x277294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277290u;
    // 0x277294: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x277290u, 0x277298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277298u;
label_277298:
    // 0x277298: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x277298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27729c:
    // 0x27729c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_2772a0:
    if (ctx->pc == 0x2772A0u) {
        ctx->pc = 0x2772A4u;
        goto label_2772a4;
    }
    ctx->pc = 0x27729Cu;
    {
        const bool branch_taken_0x27729c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27729c) {
            ctx->pc = 0x2772B0u;
            goto label_2772b0;
        }
    }
    ctx->pc = 0x2772A4u;
label_2772a4:
    // 0x2772a4: 0x1000004a  b           . + 4 + (0x4A << 2)
label_2772a8:
    if (ctx->pc == 0x2772A8u) {
        ctx->pc = 0x2772A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772A4u;
        // 0x2772a8: 0xa2200051  sb          $zero, 0x51($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2772ACu;
        goto label_2772ac;
    }
    ctx->pc = 0x2772A4u;
    {
        const bool branch_taken_0x2772a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2772A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772A4u;
        // 0x2772a8: 0xa2200051  sb          $zero, 0x51($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2772a4) {
            ctx->pc = 0x2773D0u;
            goto label_2773d0;
        }
    }
    ctx->pc = 0x2772ACu;
label_2772ac:
    // 0x2772ac: 0x0  nop
    ctx->pc = 0x2772acu;
    // NOP
label_2772b0:
    // 0x2772b0: 0x7a022920  lq          $v0, 0x2920($s0)
    ctx->pc = 0x2772b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 10528)));
label_2772b4:
    // 0x2772b4: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x2772b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_2772b8:
    // 0x2772b8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2772b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2772bc:
    // 0x2772bc: 0xc076664  jal         func_1D9990
label_2772c0:
    if (ctx->pc == 0x2772C0u) {
        ctx->pc = 0x2772C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772BCu;
        // 0x2772c0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2772C4u;
        goto label_2772c4;
    }
    ctx->pc = 0x2772BCu;
    SET_GPR_U32(ctx, 31, 0x2772C4u);
    ctx->pc = 0x2772C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2772BCu;
    // 0x2772c0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x2772BCu, 0x2772C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2772C4u;
label_2772c4:
    // 0x2772c4: 0xc0765d8  jal         func_1D9760
label_2772c8:
    if (ctx->pc == 0x2772C8u) {
        ctx->pc = 0x2772C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772C4u;
        // 0x2772c8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2772CCu;
        goto label_2772cc;
    }
    ctx->pc = 0x2772C4u;
    SET_GPR_U32(ctx, 31, 0x2772CCu);
    ctx->pc = 0x2772C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2772C4u;
    // 0x2772c8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x2772C4u, 0x2772CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2772CCu;
label_2772cc:
    // 0x2772cc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2772ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2772d0:
    // 0x2772d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2772d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2772d4:
    // 0x2772d4: 0x0  nop
    ctx->pc = 0x2772d4u;
    // NOP
label_2772d8:
    // 0x2772d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2772d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2772dc:
    // 0x2772dc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2772e0:
    if (ctx->pc == 0x2772E0u) {
        ctx->pc = 0x2772E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772DCu;
        // 0x2772e0: 0xc6022904  lwc1        $f2, 0x2904($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2772E4u;
        goto label_2772e4;
    }
    ctx->pc = 0x2772DCu;
    {
        const bool branch_taken_0x2772dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2772E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772DCu;
        // 0x2772e0: 0xc6022904  lwc1        $f2, 0x2904($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2772dc) {
            ctx->pc = 0x277308u;
            goto label_277308;
        }
    }
    ctx->pc = 0x2772E4u;
label_2772e4:
    // 0x2772e4: 0x0  nop
    ctx->pc = 0x2772e4u;
    // NOP
label_2772e8:
    // 0x2772e8: 0x0  nop
    ctx->pc = 0x2772e8u;
    // NOP
label_2772ec:
    // 0x2772ec: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2772ecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2772f0:
    // 0x2772f0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2772f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_2772f4:
    // 0x2772f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2772f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2772f8:
    // 0x2772f8: 0x0  nop
    ctx->pc = 0x2772f8u;
    // NOP
label_2772fc:
    // 0x2772fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2772fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_277300:
    // 0x277300: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x277300u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_277304:
    // 0x277304: 0x0  nop
    ctx->pc = 0x277304u;
    // NOP
label_277308:
    // 0x277308: 0x8e2600a0  lw          $a2, 0xA0($s1)
    ctx->pc = 0x277308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_27730c:
    // 0x27730c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x27730cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_277310:
    // 0x277310: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x277310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_277314:
    // 0x277314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277318:
    // 0x277318: 0x246341c0  addiu       $v1, $v1, 0x41C0
    ctx->pc = 0x277318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16832));
label_27731c:
    // 0x27731c: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x27731cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_277320:
    // 0x277320: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x277320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_277324:
    // 0x277324: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x277324u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_277328:
    // 0x277328: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x277328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_27732c:
    // 0x27732c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27732cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_277330:
    // 0x277330: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x277330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_277334:
    // 0x277334: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x277334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277338:
    // 0x277338: 0xc097414  jal         func_25D050
label_27733c:
    if (ctx->pc == 0x27733Cu) {
        ctx->pc = 0x27733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277338u;
        // 0x27733c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277340u;
        goto label_277340;
    }
    ctx->pc = 0x277338u;
    SET_GPR_U32(ctx, 31, 0x277340u);
    ctx->pc = 0x27733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277338u;
    // 0x27733c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D050u, 0x277338u, 0x277340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277340u;
label_277340:
    // 0x277340: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_277344:
    if (ctx->pc == 0x277344u) {
        ctx->pc = 0x277344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277340u;
        // 0x277344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277348u;
        goto label_277348;
    }
    ctx->pc = 0x277340u;
    {
        const bool branch_taken_0x277340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277340u;
        // 0x277344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277340) {
            ctx->pc = 0x2773D0u;
            goto label_2773d0;
        }
    }
    ctx->pc = 0x277348u;
label_277348:
    // 0x277348: 0xc09da7c  jal         func_2769F0
label_27734c:
    if (ctx->pc == 0x27734Cu) {
        ctx->pc = 0x277350u;
        goto label_277350;
    }
    ctx->pc = 0x277348u;
    SET_GPR_U32(ctx, 31, 0x277350u);
    ctx->pc = 0x2769F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2769F0u, 0x277348u, 0x277350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277350u;
label_277350:
    // 0x277350: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x277350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_277354:
    // 0x277354: 0x922500b3  lbu         $a1, 0xB3($s1)
    ctx->pc = 0x277354u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 179)));
label_277358:
    // 0x277358: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x277358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_27735c:
    // 0x27735c: 0x320f809  jalr        $t9
label_277360:
    if (ctx->pc == 0x277360u) {
        ctx->pc = 0x277360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27735Cu;
        // 0x277360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277364u;
        goto label_277364;
    }
    ctx->pc = 0x27735Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x277364u);
        ctx->pc = 0x277360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27735Cu;
        // 0x277360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27735Cu, 0x277364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277364u;
label_277364:
    // 0x277364: 0x922400b0  lbu         $a0, 0xB0($s1)
    ctx->pc = 0x277364u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 176)));
label_277368:
    // 0x277368: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x277368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27736c:
    // 0x27736c: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x27736cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_277370:
    // 0x277370: 0xa22400b0  sb          $a0, 0xB0($s1)
    ctx->pc = 0x277370u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 176), (uint8_t)GPR_U32(ctx, 4));
label_277374:
    // 0x277374: 0x10000016  b           . + 4 + (0x16 << 2)
label_277378:
    if (ctx->pc == 0x277378u) {
        ctx->pc = 0x277378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277374u;
        // 0x277378: 0xa2230051  sb          $v1, 0x51($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27737Cu;
        goto label_27737c;
    }
    ctx->pc = 0x277374u;
    {
        const bool branch_taken_0x277374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277374u;
        // 0x277378: 0xa2230051  sb          $v1, 0x51($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277374) {
            ctx->pc = 0x2773D0u;
            goto label_2773d0;
        }
    }
    ctx->pc = 0x27737Cu;
label_27737c:
    // 0x27737c: 0x0  nop
    ctx->pc = 0x27737cu;
    // NOP
label_277380:
    // 0x277380: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x277380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_277384:
    // 0x277384: 0xa2230051  sb          $v1, 0x51($s1)
    ctx->pc = 0x277384u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 3));
label_277388:
    // 0x277388: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x277388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_27738c:
    // 0x27738c: 0xa62300ae  sh          $v1, 0xAE($s1)
    ctx->pc = 0x27738cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 174), (uint16_t)GPR_U32(ctx, 3));
label_277390:
    // 0x277390: 0x922500b0  lbu         $a1, 0xB0($s1)
    ctx->pc = 0x277390u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 176)));
label_277394:
    // 0x277394: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x277394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_277398:
    // 0x277398: 0x862300ae  lh          $v1, 0xAE($s1)
    ctx->pc = 0x277398u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 174)));
label_27739c:
    // 0x27739c: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x27739cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2773a0:
    // 0x2773a0: 0x0  nop
    ctx->pc = 0x2773a0u;
    // NOP
label_2773a4:
    // 0x2773a4: 0x0  nop
    ctx->pc = 0x2773a4u;
    // NOP
label_2773a8:
    // 0x2773a8: 0x2012  mflo        $a0
    ctx->pc = 0x2773a8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2773ac:
    // 0x2773ac: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2773acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2773b0:
    // 0x2773b0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2773b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2773b4:
    // 0x2773b4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2773b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2773b8:
    // 0x2773b8: 0xa62300ae  sh          $v1, 0xAE($s1)
    ctx->pc = 0x2773b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 174), (uint16_t)GPR_U32(ctx, 3));
label_2773bc:
    // 0x2773bc: 0x862300ae  lh          $v1, 0xAE($s1)
    ctx->pc = 0x2773bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 174)));
label_2773c0:
    // 0x2773c0: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_2773c4:
    if (ctx->pc == 0x2773C4u) {
        ctx->pc = 0x2773C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2773C0u;
        // 0x2773c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2773C8u;
        goto label_2773c8;
    }
    ctx->pc = 0x2773C0u;
    {
        const bool branch_taken_0x2773c0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2773C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2773C0u;
        // 0x2773c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2773c0) {
            ctx->pc = 0x2773D0u;
            goto label_2773d0;
        }
    }
    ctx->pc = 0x2773C8u;
label_2773c8:
    // 0x2773c8: 0xc096b54  jal         func_25AD50
label_2773cc:
    if (ctx->pc == 0x2773CCu) {
        ctx->pc = 0x2773D0u;
        goto label_2773d0;
    }
    ctx->pc = 0x2773C8u;
    SET_GPR_U32(ctx, 31, 0x2773D0u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x2773C8u, 0x2773D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773D0u;
label_2773d0:
    // 0x2773d0: 0x9783881c  lhu         $v1, -0x77E4($gp)
    ctx->pc = 0x2773d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936604)));
label_2773d4:
    // 0x2773d4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2773d8:
    if (ctx->pc == 0x2773D8u) {
        ctx->pc = 0x2773DCu;
        goto label_2773dc;
    }
    ctx->pc = 0x2773D4u;
    {
        const bool branch_taken_0x2773d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2773d4) {
            ctx->pc = 0x2773E8u;
            goto label_2773e8;
        }
    }
    ctx->pc = 0x2773DCu;
label_2773dc:
    // 0x2773dc: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x2773dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_2773e0:
    // 0x2773e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2773e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2773e4:
    // 0x2773e4: 0xa6230054  sh          $v1, 0x54($s1)
    ctx->pc = 0x2773e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 3));
label_2773e8:
    // 0x2773e8: 0x862300b4  lh          $v1, 0xB4($s1)
    ctx->pc = 0x2773e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 180)));
label_2773ec:
    // 0x2773ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2773ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2773f0:
    // 0x2773f0: 0xa62300b4  sh          $v1, 0xB4($s1)
    ctx->pc = 0x2773f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 180), (uint16_t)GPR_U32(ctx, 3));
label_2773f4:
    // 0x2773f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2773f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2773f8:
    // 0x2773f8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2773f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2773fc:
    // 0x2773fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2773fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_277400:
    // 0x277400: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x277400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_277404:
    // 0x277404: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x277404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_277408:
    // 0x277408: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x277408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27740c:
    // 0x27740c: 0x3e00008  jr          $ra
label_277410:
    if (ctx->pc == 0x277410u) {
        ctx->pc = 0x277410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27740Cu;
        // 0x277410: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277414u;
        goto label_fallthrough_0x27740c;
    }
    ctx->pc = 0x27740Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27740Cu;
        // 0x277410: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27740Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27740c:
    ctx->pc = 0x277414u;
}
